#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner64320599_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner64320599_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner64320599_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner64320599_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner64320599_4(SEXP CCP, SEXP RHO);
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
  // st `fitted.nls` = r
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
  SEXP Rsh_Fir_reg_as_vector;  // as_vector
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_napredict;  // napredict
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_val1_;  // val1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_lab;  // lab
  SEXP Rsh_Fir_reg_lab1_;  // lab1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_aux;  // aux
  SEXP Rsh_Fir_reg_aux1_;  // aux1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_lab2_;  // lab2
  SEXP Rsh_Fir_reg_lab3_;  // lab3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_val2_;  // val2
  SEXP Rsh_Fir_reg_val3_;  // val3

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
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L0_:;
  // r8 = `!`(r6)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c4 then L16() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L16()
    goto L16_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // st lab = "Fitted values"
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L3_:;
  // r22 = `!`(r15)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c8 then L30() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L30()
    goto L30_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // c6 = `is.object`(r17)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c6 then L27() else L28(r17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L27()
    goto L27_;
  } else {
  // L28(r17)
    Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r17_;
    goto L28_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // lab2 = ld lab
  Rsh_Fir_reg_lab2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   c = `is.object`(object2);
  //   if c then L1() else L2(object2);
  // L0(dx1):
  //   c1 = `is.object`(dx1);
  //   if c1 then L5() else L6(dx1);
  // L1():
  //   dr = tryDispatchBuiltin.1("$", object2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(object4):
  //   r = `$`(object4, <sym m>);
  //   goto L0(r);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L4(dx5):
  //   checkFun.0(dx5);
  //   dx6 = dx5 as cls;
  //   r2 = dyn dx6();
  //   return r2;
  // L5():
  //   dr2 = tryDispatchBuiltin.1("$", dx1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L7() else L6(dr2);
  // L6(dx3):
  //   r1 = `$`(dx3, <sym fitted>);
  //   goto L4(r1);
  // L7():
  //   dx4 = getTryDispatchBuiltinValue(dr2);
  //   goto L4(dx4);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_, CCP, RHO);
  // r4 = dyn as_vector(p)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 3 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st val = r4
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // r5 = dyn base(<lang `$`(object, na.action)>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;

D2_:;
  // deopt 6 [object5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(object6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L13() else L14(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L13()
    goto L13_;
  } else {
  // L14(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L14_;
  }

L12_:;
  // c3 = `==`(dx8, NULL)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L0(c3)
  // L0(c3)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_c3_;
  goto L0_;

L13_:;
  // dr4 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc2 then L15() else L14(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L15()
    goto L15_;
  } else {
  // L14(dr4)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr4_;
    goto L14_;
  }

L14_:;
  // r7 = `$`(object8, <sym na.action>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L12(r7)
  // L12(r7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r7_;
  goto L12_;

L15_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L12(dx7)
  // L12(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L12_;

L16_:;
  // napredict = ldf napredict
  Rsh_Fir_reg_napredict = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p1 = prom<V +>{
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   c5 = `is.object`(object10);
  //   if c5 then L1() else L2(object10);
  // L0(dx10):
  //   return dx10;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", object10);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(object12):
  //   r9 = `$`(object12, <sym na.action>);
  //   goto L0(r9);
  // L3():
  //   dx9 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx9);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_1, CCP, RHO);
  // p2 = prom<V +>{
  //   val = ld val;
  //   val1 = force? val;
  //   checkMissing(val1);
  //   return val1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_2, CCP, RHO);
  // r12 = dyn napredict(p1, p2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_napredict, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

D4_:;
  // deopt 15 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // st val = r12
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L2()
  // L2()
  goto L2_;

L20_:;
  // sym2 = ldf attr
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf attr in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard2 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L21_:;
  // r14 = dyn base1(<lang `<-`(aux, `$`(attr(object, "units"), y))>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r14)
  // L3(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L3_;

L22_:;
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L23_:;
  // r16 = dyn base2(<sym object>, "units")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L4_;

D5_:;
  // deopt 25 [object13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_object13_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r18 = dyn attr(object14, "units")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

D6_:;
  // deopt 29 [r18]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L4(r18)
  // L4(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L4_;

L26_:;
  // st aux = dx12
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx12_, RHO);
  (void)(Rsh_Fir_reg_dx12_);
  // c7 = `==`(dx12, NULL)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L3(c7)
  // L3(c7)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_c7_;
  goto L3_;

L27_:;
  // dr8 = tryDispatchBuiltin.1("$", r17)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc4 then L29() else L28(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr8)
    Rsh_Fir_reg_r20_ = Rsh_Fir_reg_dr8_;
    goto L28_;
  }

L28_:;
  // r21 = `$`(r20, <sym y>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L26(r21)
  // L26(r21)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r21_;
  goto L26_;

L29_:;
  // dx11 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L26(dx11)
  // L26(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L26_;

L30_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

D7_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p3 = prom<V +>{
  //   lab = ld lab;
  //   lab1 = force? lab;
  //   checkMissing(lab1);
  //   return lab1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_3, CCP, RHO);
  // p4 = prom<V +>{
  //   aux = ld aux;
  //   aux1 = force? aux;
  //   checkMissing(aux1);
  //   return aux1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_4, CCP, RHO);
  // r25 = dyn paste(p3, p4)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 38 [r25]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // st lab = r25
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // goto L6()
  // L6()
  goto L6_;

D9_:;
  // deopt 42 [lab2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_lab2_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // lab3 = force? lab2
  Rsh_Fir_reg_lab3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lab2_);
  // checkMissing(lab3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_lab3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // l = ld val
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

D10_:;
  // deopt 45 [lab3, l, lab3]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_lab3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_lab3_;
  Rsh_Fir_deopt(45, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // r27 = dyn attr__(l, NULL, "label", lab3)
  SEXP Rsh_Fir_array_args50[4];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args50[3] = Rsh_Fir_reg_lab3_;
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

D11_:;
  // deopt 48 [lab3, r27]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_lab3_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // st val = r27
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // val2 = ld val
  Rsh_Fir_reg_val2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D12_:;
  // deopt 50 [val2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_val2_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // val3 = force? val2
  Rsh_Fir_reg_val3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val2_);
  // checkMissing(val3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_val3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return val3
  return Rsh_Fir_reg_val3_;
}
SEXP Rsh_Fir_user_promise_inner64320599_(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L2_;
  }

L0_:;
  // c1 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c1 then L5() else L6(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L6_;
  }

L1_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r = `$`(object4, <sym m>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L4_:;
  // checkFun.0(dx5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx5_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args13));
  // dx6 = dx5 as cls
  Rsh_Fir_reg_dx6_ = Rsh_Fir_cast(Rsh_Fir_reg_dx5_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r2 = dyn dx6()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx6_, 0, NULL, NULL, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;

L5_:;
  // dr2 = tryDispatchBuiltin.1("$", dx1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc1 then L7() else L6(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L6_;
  }

L6_:;
  // r1 = `$`(dx3, <sym fitted>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L4(r1)
  // L4(r1)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r1_;
  goto L4_;

L7_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L4(dx4)
  // L4(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner64320599_1(SEXP CCP, SEXP RHO) {
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(object10)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object10)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L2_;
  }

L0_:;
  // return dx10
  return Rsh_Fir_reg_dx10_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r9 = `$`(object12, <sym na.action>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r9_;
  goto L0_;

L3_:;
  // dx9 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L0(dx9)
  // L0(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner64320599_2(SEXP CCP, SEXP RHO) {
  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return val1
  return Rsh_Fir_reg_val1_;
}
SEXP Rsh_Fir_user_promise_inner64320599_3(SEXP CCP, SEXP RHO) {
  // lab = ld lab
  Rsh_Fir_reg_lab = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // lab1 = force? lab
  Rsh_Fir_reg_lab1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lab);
  // checkMissing(lab1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_lab1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return lab1
  return Rsh_Fir_reg_lab1_;
}
SEXP Rsh_Fir_user_promise_inner64320599_4(SEXP CCP, SEXP RHO) {
  // aux = ld aux
  Rsh_Fir_reg_aux = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // aux1 = force? aux
  Rsh_Fir_reg_aux1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aux);
  // checkMissing(aux1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_aux1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return aux1
  return Rsh_Fir_reg_aux1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
