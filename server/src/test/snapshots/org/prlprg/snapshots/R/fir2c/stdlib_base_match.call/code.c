#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2595639183_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2595639183_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2595639183_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2595639183_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2595639183_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2595639183_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2595639183_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2595639183_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner526850710_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner526850710_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner526850710_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner526850710_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_match_call;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_fun;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r17_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2595639183
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2595639183_, RHO, CCP);
  // st `match.call` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   get = ld get;
  //   get1 = force? get;
  //   checkMissing(get1);
  //   return get1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym = ldf call;
  //   base = ldf call in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   call = ldf call in base;
  //   r4 = dyn call("get", "abc", FALSE, 3.0);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base[, , i, p]("get", "abc", FALSE, 3.0);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn match_call(p, p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // r7 = clos inner526850710
  Rsh_Fir_reg_r7_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner526850710_, RHO, CCP);
  // st fun = r7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // fun = ldf fun
  Rsh_Fir_reg_fun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   sym1 = ldf atan;
  //   base1 = ldf atan in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r11, r12):
  //   r14 = `*`(r11, r12);
  //   return r14;
  // L1():
  //   r13 = atan(1.0);
  //   goto L0(4.0, r13);
  // L2():
  //   r10 = dyn base1(1.0);
  //   goto L0(4.0, r10);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   return 3.141592653589793;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r17 = dyn fun[, u](p2, p3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fun, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 16 [r17]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_get;
  SEXP Rsh_Fir_reg_get1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // get = ld get
  Rsh_Fir_reg_get = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // get1 = force? get
  Rsh_Fir_reg_get1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_get);
  // checkMissing(get1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_get1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return get1
  return Rsh_Fir_reg_get1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_call;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf call
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf call in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // call = ldf call in base
  Rsh_Fir_reg_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r4 = dyn call("get", "abc", FALSE, 3.0)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_call, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base[, , i, p]("get", "abc", FALSE, 3.0)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf atan
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf atan in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
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
  // r14 = `*`(r11, r12)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args6);
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // r13 = atan(1.0)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(180, RHO, 1, Rsh_Fir_array_args7);
  // goto L0(4.0, r13)
  // L0(4.0, r13)
  Rsh_Fir_reg_r11_ = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r10 = dyn base1(1.0)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(4.0, r10)
  // L0(4.0, r10)
  Rsh_Fir_reg_r11_ = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 3.141592653589793
  return Rsh_const(CCP, 13);
}
SEXP Rsh_Fir_user_function_inner2595639183_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2595639183 dynamic dispatch ([definition, call, `expand.dots`, envir])

  return Rsh_Fir_user_version_inner2595639183_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2595639183_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2595639183 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2595639183/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_definition;
  SEXP Rsh_Fir_reg_call1;
  SEXP Rsh_Fir_reg_expand_dots;
  SEXP Rsh_Fir_reg_envir;
  SEXP Rsh_Fir_reg_definition_isMissing;
  SEXP Rsh_Fir_reg_definition_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_call_isMissing;
  SEXP Rsh_Fir_reg_call_orDefault;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_expand_dots_isMissing;
  SEXP Rsh_Fir_reg_expand_dots_orDefault;
  SEXP Rsh_Fir_reg_envir_isMissing;
  SEXP Rsh_Fir_reg_envir_orDefault;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_definition1_;
  SEXP Rsh_Fir_reg_definition2_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_sys_function1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_definition3_;
  SEXP Rsh_Fir_reg_definition4_;
  SEXP Rsh_Fir_reg_call1_;
  SEXP Rsh_Fir_reg_call2_;
  SEXP Rsh_Fir_reg_expand_dots1_;
  SEXP Rsh_Fir_reg_expand_dots2_;
  SEXP Rsh_Fir_reg_envir1_;
  SEXP Rsh_Fir_reg_envir2_;
  SEXP Rsh_Fir_reg_match_call1;
  SEXP Rsh_Fir_reg_r22_;

  // Bind parameters
  Rsh_Fir_reg_definition = PARAMS[0];
  Rsh_Fir_reg_call1 = PARAMS[1];
  Rsh_Fir_reg_expand_dots = PARAMS[2];
  Rsh_Fir_reg_envir = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // definition_isMissing = missing.0(definition)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_definition;
  Rsh_Fir_reg_definition_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if definition_isMissing then L0() else L1(definition)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_definition_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(definition)
    Rsh_Fir_reg_definition_orDefault = Rsh_Fir_reg_definition;
    goto L1_;
  }

L0_:;
  // p1 = prom<V +>{
  //   sys_function = ldf `sys.function`;
  //   p = prom<V +>{
  //     sys_parent = ldf `sys.parent`;
  //     r = dyn sys_parent();
  //     return r;
  //   };
  //   r2 = dyn sys_function(p);
  //   return r2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2595639183_, 0, NULL, CCP, RHO);
  // goto L1(p1)
  // L1(p1)
  Rsh_Fir_reg_definition_orDefault = Rsh_Fir_reg_p1_1;
  goto L1_;

L1_:;
  // st definition = definition_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_definition_orDefault, RHO);
  (void)(Rsh_Fir_reg_definition_orDefault);
  // call_isMissing = missing.0(call)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_call1;
  Rsh_Fir_reg_call_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if call_isMissing then L2() else L3(call)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_call_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(call)
    Rsh_Fir_reg_call_orDefault = Rsh_Fir_reg_call1;
    goto L3_;
  }

L2_:;
  // p3 = prom<V +>{
  //   sys_call = ldf `sys.call`;
  //   p2 = prom<V +>{
  //     sys_parent1 = ldf `sys.parent`;
  //     r4 = dyn sys_parent1();
  //     return r4;
  //   };
  //   r6 = dyn sys_call(p2);
  //   return r6;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2595639183_2, 0, NULL, CCP, RHO);
  // goto L3(p3)
  // L3(p3)
  Rsh_Fir_reg_call_orDefault = Rsh_Fir_reg_p3_1;
  goto L3_;

L3_:;
  // st call = call_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_call_orDefault, RHO);
  (void)(Rsh_Fir_reg_call_orDefault);
  // expand_dots_isMissing = missing.0(expand_dots)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_expand_dots;
  Rsh_Fir_reg_expand_dots_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if expand_dots_isMissing then L4(TRUE) else L4(expand_dots)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_expand_dots_isMissing)) {
  // L4(TRUE)
    Rsh_Fir_reg_expand_dots_orDefault = Rsh_const(CCP, 19);
    goto L4_;
  } else {
  // L4(expand_dots)
    Rsh_Fir_reg_expand_dots_orDefault = Rsh_Fir_reg_expand_dots;
    goto L4_;
  }

L4_:;
  // st `expand.dots` = expand_dots_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_expand_dots_orDefault, RHO);
  (void)(Rsh_Fir_reg_expand_dots_orDefault);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if envir_isMissing then L5() else L6(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L6_;
  }

L5_:;
  // p4 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r8 = dyn parent_frame(2);
  //   return r8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2595639183_4, 0, NULL, CCP, RHO);
  // goto L6(p4)
  // L6(p4)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p4_;
  goto L6_;

L6_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L7_:;
  // r13 = `!`(r11)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args18);
  // c = `as.logical`(r13)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // if c then L15() else L8(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L8(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L8_;
  }

L13_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r12 = dyn missing(<sym definition>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_1;
  goto L7_;

L14_:;
  // r10 = dyn base(<sym definition>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L7_;

L8_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // if c10 then L20() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L20()
    goto L20_;
  } else {
  // L10()
    goto L10_;
  }

L15_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L9_:;
  // c7 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // c8 = `&&`(c5, c7)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args25);
  // goto L8(c8)
  // L8(c8)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c8_;
  goto L8_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L16_:;
  // definition1 = ld definition
  Rsh_Fir_reg_definition1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

L17_:;
  // r14 = dyn base1(<sym definition>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(c, r14)
  // L9(c, r14)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_1;
  goto L9_;

L20_:;
  // sys_function1 = ldf `sys.function`
  Rsh_Fir_reg_sys_function1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

D0_:;
  // deopt 5 [c, definition1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_definition1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;

L18_:;
  // definition2 = force? definition1
  Rsh_Fir_reg_definition2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_definition1_);
  // checkMissing(definition2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_definition2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c6 = `==`(definition2, NULL)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_definition2_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args29);
  // goto L9(c, c6)
  // L9(c, c6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_c6_;
  goto L9_;

L21_:;
  // p5 = prom<V +>{
  //   sys_parent2 = ldf `sys.parent`;
  //   r16 = dyn sys_parent2();
  //   return r16;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2595639183_5, 0, NULL, CCP, RHO);
  // r18 = dyn sys_function1(p5)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L24_:;
  // definition3 = ld definition
  Rsh_Fir_reg_definition3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

L25_:;
  // r20 = dyn base2(<lang match.call(definition, call, expand.dots, envir)>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r20)
  // L12(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L12_;

D2_:;
  // deopt 12 [r18]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 18 [definition3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_definition3_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // st definition = r18
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // goto L11()
  // L11()
  goto L11_;

L26_:;
  // definition4 = force? definition3
  Rsh_Fir_reg_definition4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_definition3_);
  // checkMissing(definition4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_definition4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // call1 = ld call
  Rsh_Fir_reg_call1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

D4_:;
  // deopt 20 [call1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_call1_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // call2 = force? call1
  Rsh_Fir_reg_call2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call1_);
  // checkMissing(call2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_call2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // expand_dots1 = ld `expand.dots`
  Rsh_Fir_reg_expand_dots1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

D5_:;
  // deopt 22 [expand_dots1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_expand_dots1_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // expand_dots2 = force? expand_dots1
  Rsh_Fir_reg_expand_dots2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expand_dots1_);
  // checkMissing(expand_dots2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_expand_dots2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

D6_:;
  // deopt 24 [envir1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_envir1_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L29_:;
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // match_call = ldf `match.call` in base
  Rsh_Fir_reg_match_call1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r22 = dyn match_call(definition4, call2, expand_dots2, envir2)
  SEXP Rsh_Fir_array_args36[4];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_definition4_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_call2_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_expand_dots2_;
  Rsh_Fir_array_args36[3] = Rsh_Fir_reg_envir2_;
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call1, 4, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 27 [r22]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L12(r22)
  // L12(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner2595639183_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_function;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2595639183/0: expected 0, got %d", NCAPTURES);

  // sys_function = ldf `sys.function`
  Rsh_Fir_reg_sys_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // p = prom<V +>{
  //   sys_parent = ldf `sys.parent`;
  //   r = dyn sys_parent();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2595639183_1, 0, NULL, CCP, RHO);
  // r2 = dyn sys_function(p)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_1;
}
SEXP Rsh_Fir_user_promise_inner2595639183_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2595639183/0: expected 0, got %d", NCAPTURES);

  // sys_parent = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // r = dyn sys_parent()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2595639183_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_call;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2595639183/0: expected 0, got %d", NCAPTURES);

  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // p2 = prom<V +>{
  //   sys_parent1 = ldf `sys.parent`;
  //   r4 = dyn sys_parent1();
  //   return r4;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2595639183_3, 0, NULL, CCP, RHO);
  // r6 = dyn sys_call(p2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_1;
}
SEXP Rsh_Fir_user_promise_inner2595639183_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent1_;
  SEXP Rsh_Fir_reg_r4_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2595639183/0: expected 0, got %d", NCAPTURES);

  // sys_parent1 = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // r4 = dyn sys_parent1()
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent1_, 0, NULL, NULL, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_1;
}
SEXP Rsh_Fir_user_promise_inner2595639183_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2595639183/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // r8 = dyn parent_frame(2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner2595639183_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent2_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2595639183/0: expected 0, got %d", NCAPTURES);

  // sys_parent2 = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // r16 = dyn sys_parent2()
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent2_, 0, NULL, NULL, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_function_inner526850710_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner526850710 dynamic dispatch ([x, lower, upper])

  return Rsh_Fir_user_version_inner526850710_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner526850710_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner526850710 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner526850710/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_lower;
  SEXP Rsh_Fir_reg_upper;
  SEXP Rsh_Fir_reg_lower_isMissing;
  SEXP Rsh_Fir_reg_lower_orDefault;
  SEXP Rsh_Fir_reg_upper_isMissing;
  SEXP Rsh_Fir_reg_upper_orDefault;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_r6_2;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_lower = PARAMS[1];
  Rsh_Fir_reg_upper = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // lower_isMissing = missing.0(lower)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_lower;
  Rsh_Fir_reg_lower_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args37);
  // if lower_isMissing then L0(0.0) else L0(lower)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_lower_orDefault = Rsh_const(CCP, 30);
    goto L0_;
  } else {
  // L0(lower)
    Rsh_Fir_reg_lower_orDefault = Rsh_Fir_reg_lower;
    goto L0_;
  }

L0_:;
  // st lower = lower_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_lower_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_orDefault);
  // upper_isMissing = missing.0(upper)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_upper;
  Rsh_Fir_reg_upper_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args38);
  // if upper_isMissing then L1(1.0) else L1(upper)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_upper_isMissing)) {
  // L1(1.0)
    Rsh_Fir_reg_upper_orDefault = Rsh_const(CCP, 11);
    goto L1_;
  } else {
  // L1(upper)
    Rsh_Fir_reg_upper_orDefault = Rsh_Fir_reg_upper;
    goto L1_;
  }

L1_:;
  // st upper = upper_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_upper_orDefault, RHO);
  (void)(Rsh_Fir_reg_upper_orDefault);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   lower1 = ld lower;
  //   lower2 = force? lower1;
  //   checkMissing(lower2);
  //   r = `-`(x2, lower2);
  //   upper1 = ld upper;
  //   upper2 = force? upper1;
  //   checkMissing(upper2);
  //   lower3 = ld lower;
  //   lower4 = force? lower3;
  //   checkMissing(lower4);
  //   r1 = `-`(upper2, lower4);
  //   r2 = `/`(r, r1);
  //   return r2;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner526850710_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   match_call = ldf `match.call`;
  //   r4 = dyn match_call();
  //   return r4;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner526850710_1, 0, NULL, CCP, RHO);
  // r6 = dyn structure[, CALL](p, p1)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r6_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r6_2;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_2;
}
SEXP Rsh_Fir_user_promise_inner526850710_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_lower1_;
  SEXP Rsh_Fir_reg_lower2_;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_upper1_;
  SEXP Rsh_Fir_reg_upper2_;
  SEXP Rsh_Fir_reg_lower3_;
  SEXP Rsh_Fir_reg_lower4_;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner526850710/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // lower1 = ld lower
  Rsh_Fir_reg_lower1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // lower2 = force? lower1
  Rsh_Fir_reg_lower2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower1_);
  // checkMissing(lower2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_lower2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r = `-`(x2, lower2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_lower2_;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args41);
  // upper1 = ld upper
  Rsh_Fir_reg_upper1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // upper2 = force? upper1
  Rsh_Fir_reg_upper2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper1_);
  // checkMissing(upper2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_upper2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // lower3 = ld lower
  Rsh_Fir_reg_lower3_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // lower4 = force? lower3
  Rsh_Fir_reg_lower4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower3_);
  // checkMissing(lower4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_lower4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r1 = `-`(upper2, lower4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_upper2_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_lower4_;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args44);
  // r2 = `/`(r, r1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args45);
  // return r2
  return Rsh_Fir_reg_r2_2;
}
SEXP Rsh_Fir_user_promise_inner526850710_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_match_call2;
  SEXP Rsh_Fir_reg_r4_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner526850710/0: expected 0, got %d", NCAPTURES);

  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r4 = dyn match_call()
  Rsh_Fir_reg_r4_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call2, 0, NULL, NULL, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_2;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
