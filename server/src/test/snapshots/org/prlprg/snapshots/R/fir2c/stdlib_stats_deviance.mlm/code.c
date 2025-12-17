#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner64320599_(SEXP CCP, SEXP RHO);
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
  // r = clos inner64320599
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner64320599_, RHO, CCP);
  // st `deviance.mlm` = r
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
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner64320599 dynamic dispatch ([object, `...`])

  return Rsh_Fir_user_version_inner64320599_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner64320599 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner64320599/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_colSums;  // colSums
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_w;  // w
  SEXP Rsh_Fir_reg_w1_;  // w1
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_w3_;  // w3
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_w5_;  // w5
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r9_;  // r9

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // colSums = ldf colSums
  Rsh_Fir_reg_colSums = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf `is.null`;
  //   base = ldf `is.null` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r1):
  //   c2 = `as.logical`(r1);
  //   if c2 then L8() else L1();
  // L2():
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   c = `is.object`(object2);
  //   if c then L5() else L6(object2);
  // L3():
  //   r = dyn base(<lang `<-`(w, `$`(object, weights))>);
  //   goto L0(r);
  // L1():
  //   w = ld w;
  //   w1 = force? w;
  //   checkMissing(w1);
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   c4 = `is.object`(object10);
  //   if c4 then L15() else L16(w1, object10);
  // L4(dx1):
  //   st w = dx1;
  //   c1 = `==`(dx1, NULL);
  //   goto L0(c1);
  // L5():
  //   dr = tryDispatchBuiltin.1("$", object2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L7() else L6(dr);
  // L6(object4):
  //   r2 = `$`(object4, <sym weights>);
  //   goto L4(r2);
  // L8():
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   c3 = `is.object`(object6);
  //   if c3 then L10() else L11(object6);
  // L7():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L4(dx);
  // L9(dx3):
  //   r4 = `^`(dx3, 2.0);
  //   return r4;
  // L10():
  //   dr2 = tryDispatchBuiltin.1("$", object6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L12() else L11(dr2);
  // L11(object8):
  //   r3 = `$`(object8, <sym residuals>);
  //   goto L9(r3);
  // L14(w5, dx5):
  //   r6 = `^`(dx5, 2.0);
  //   r7 = `*`(w5, r6);
  //   return r7;
  // L15():
  //   dr4 = tryDispatchBuiltin.1("$", object10);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L17() else L16(w1, dr4);
  // L16(w3, object12):
  //   r5 = `$`(object12, <sym residuals>);
  //   goto L14(w3, r5);
  // L12():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L9(dx2);
  // L17():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L14(w1, dx4);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_, CCP, RHO);
  // r9 = dyn colSums(p)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colSums, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r9]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_inner64320599_(SEXP CCP, SEXP RHO) {
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c2 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L8() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L8()
    goto L8_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // w = ld w
  Rsh_Fir_reg_w = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // w1 = force? w
  Rsh_Fir_reg_w1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w);
  // checkMissing(w1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_w1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(object10)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c4 then L15() else L16(w1, object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L15()
    goto L15_;
  } else {
  // L16(w1, object10)
    Rsh_Fir_reg_w3_ = Rsh_Fir_reg_w1_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L16_;
  }

L2_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L5() else L6(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L6(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L6_;
  }

L3_:;
  // r = dyn base(<lang `<-`(w, `$`(object, weights))>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L4_:;
  // st w = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c1 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L0(c1)
  // L0(c1)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c1_;
  goto L0_;

L5_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L6_;
  }

L6_:;
  // r2 = `$`(object4, <sym weights>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L4_;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

L8_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c3 then L10() else L11(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L10()
    goto L10_;
  } else {
  // L11(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L11_;
  }

L9_:;
  // r4 = `^`(dx3, 2.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // return r4
  return Rsh_Fir_reg_r4_;

L10_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc1 then L12() else L11(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr2)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L11_;
  }

L11_:;
  // r3 = `$`(object8, <sym residuals>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L9(r3)
  // L9(r3)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r3_;
  goto L9_;

L12_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

L14_:;
  // r6 = `^`(dx5, 2.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // r7 = `*`(w5, r6)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_w5_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // return r7
  return Rsh_Fir_reg_r7_;

L15_:;
  // dr4 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc2 then L17() else L16(w1, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L17()
    goto L17_;
  } else {
  // L16(w1, dr4)
    Rsh_Fir_reg_w3_ = Rsh_Fir_reg_w1_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr4_;
    goto L16_;
  }

L16_:;
  // r5 = `$`(object12, <sym residuals>)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L14(w3, r5)
  // L14(w3, r5)
  Rsh_Fir_reg_w5_ = Rsh_Fir_reg_w3_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r5_;
  goto L14_;

L17_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L14(w1, dx4)
  // L14(w1, dx4)
  Rsh_Fir_reg_w5_ = Rsh_Fir_reg_w1_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L14_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
