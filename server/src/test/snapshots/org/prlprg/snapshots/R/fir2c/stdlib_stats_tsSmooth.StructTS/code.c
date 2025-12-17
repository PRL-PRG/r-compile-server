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
SEXP Rsh_Fir_user_promise_inner64320599_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner64320599_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner64320599_7(SEXP CCP, SEXP RHO);
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
  // st `tsSmooth.StructTS` = r
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
  SEXP Rsh_Fir_reg_KalmanSmooth;  // KalmanSmooth
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_fitted;  // fitted
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dn;  // dn
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_res5_;  // res5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_fitted1_;  // fitted1
  SEXP Rsh_Fir_reg_object11_;  // object11
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_ts;  // ts
  SEXP Rsh_Fir_reg_res8_;  // res8
  SEXP Rsh_Fir_reg_res9_;  // res9
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_object17_;  // object17
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r34_;  // r34

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
  // KalmanSmooth = ldf KalmanSmooth
  Rsh_Fir_reg_KalmanSmooth = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L0_:;
  // st dn = r10
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

L1_:;
  // st res = dx7
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym1 = ldf dimnames
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf dimnames in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L2_:;
  // r19 = `:`(r17, dx9)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r20 = dyn __1(res1, <missing>, r19, FALSE)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r20)
  // L1(r20)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r20_;
  goto L1_;

L3_:;
  // l = ld res
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L28() else D10()
  // L28()
  goto L28_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   c = `is.object`(object2);
  //   if c then L1() else L2(object2);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", object2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(object4):
  //   r = `$`(object4, <sym data>);
  //   goto L0(r);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_, CCP, RHO);
  // p1 = prom<V +>{
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   c1 = `is.object`(object6);
  //   if c1 then L1() else L2(object6);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", object6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(object8):
  //   r2 = `$`(object8, <sym model0>);
  //   goto L0(r2);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_1, CCP, RHO);
  // p2 = prom<V +>{
  //   return -1.0;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_2, CCP, RHO);
  // r5 = dyn KalmanSmooth(p, p1, p2)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_KalmanSmooth, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 5 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // c2 = `is.object`(r5)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c2 then L7() else L8(r5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L7()
    goto L7_;
  } else {
  // L8(r5)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r5_;
    goto L8_;
  }

L6_:;
  // st res = dx5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L7_:;
  // dr4 = tryDispatchBuiltin.1("$", r5)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc2 then L9() else L8(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr4)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_dr4_;
    goto L8_;
  }

L8_:;
  // r8 = `$`(r7, <sym smooth>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r8_;
  goto L6_;

L9_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L6(dx4)
  // L6(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L6_;

L10_:;
  // fitted = ldf fitted
  Rsh_Fir_reg_fitted = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r9 = dyn base(<lang fitted(object)>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p3 = prom<V +>{
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   return object10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_3, CCP, RHO);
  // r12 = dyn fitted(p3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fitted, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 13 [r12]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r13 = dyn dim(r12)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 15 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r13_;
  goto L0_;

D5_:;
  // deopt 17 [res]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(res1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c3 then L16() else L17(res1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L16()
    goto L16_;
  } else {
  // L17(res1)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_res1_;
    goto L17_;
  }

L16_:;
  // dr6 = tryDispatchBuiltin.1("[", res1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc3 then L18() else L17(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr6)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_dr6_;
    goto L17_;
  }

L17_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L18_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L1(dx6)
  // L1(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L1_;

D6_:;
  // deopt 21 [res3, 1, dn]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(21, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(dn1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c4 then L20() else L21(res3, 1, dn1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L20()
    goto L20_;
  } else {
  // L21(res3, 1, dn1)
    Rsh_Fir_reg_res5_ = Rsh_Fir_reg_res3_;
    Rsh_Fir_reg_r15_ = Rsh_const(CCP, 20);
    Rsh_Fir_reg_dn3_ = Rsh_Fir_reg_dn1_;
    goto L21_;
  }

L20_:;
  // dr8 = tryDispatchBuiltin.1("[", dn1)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc4 then L22() else L21(res3, 1, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L22()
    goto L22_;
  } else {
  // L21(res3, 1, dr8)
    Rsh_Fir_reg_res5_ = Rsh_Fir_reg_res3_;
    Rsh_Fir_reg_r15_ = Rsh_const(CCP, 20);
    Rsh_Fir_reg_dn3_ = Rsh_Fir_reg_dr8_;
    goto L21_;
  }

L21_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r18 = dyn __(dn3, 2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r15, r18)
  // L2(r15, r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r18_;
  goto L2_;

L22_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L2(1, dx8)
  // L2(1, dx8)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 20);
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L2_;

L23_:;
  // fitted1 = ldf fitted
  Rsh_Fir_reg_fitted1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

L24_:;
  // r21 = dyn base1(<lang fitted(object)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r21)
  // L3(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L3_;

D7_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p4 = prom<V +>{
  //   object11 = ld object;
  //   object12 = force? object11;
  //   checkMissing(object12);
  //   return object12;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_4, CCP, RHO);
  // r24 = dyn fitted1(p4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fitted1_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

D8_:;
  // deopt 37 [r24]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r25 = dyn dimnames(r24)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D9_:;
  // deopt 39 [r25]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L3(r25)
  // L3(r25)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r25_;
  goto L3_;

D10_:;
  // deopt 41 [r22, l, r22]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L28_:;
  // r26 = dyn dimnames__(l, NULL, r22)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

D11_:;
  // deopt 43 [r22, r26]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // st res = r26
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // ts = ldf ts
  Rsh_Fir_reg_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

D12_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p5 = prom<V +>{
  //   res8 = ld res;
  //   res9 = force? res8;
  //   checkMissing(res9);
  //   return res9;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_5, CCP, RHO);
  // p6 = prom<V +>{
  //   object13 = ld object;
  //   object14 = force? object13;
  //   checkMissing(object14);
  //   c5 = `is.object`(object14);
  //   if c5 then L2() else L3(object14);
  // L1(dx11):
  //   c6 = `is.object`(dx11);
  //   if c6 then L5() else L6(dx11);
  // L2():
  //   dr10 = tryDispatchBuiltin.1("$", object14);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L4() else L3(dr10);
  // L3(object16):
  //   r28 = `$`(object16, <sym xtsp>);
  //   goto L1(r28);
  // L0(dx15):
  //   return dx15;
  // L4():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L1(dx10);
  // L5():
  //   dr12 = tryDispatchBuiltin.1("[", dx11);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L7() else L6(dr12);
  // L6(dx13):
  //   __2 = ldf `[` in base;
  //   r29 = dyn __2(dx13, 1);
  //   goto L0(r29);
  // L7():
  //   dx14 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_6, CCP, RHO);
  // p7 = prom<V +>{
  //   object17 = ld object;
  //   object18 = force? object17;
  //   checkMissing(object18);
  //   c7 = `is.object`(object18);
  //   if c7 then L2() else L3(object18);
  // L1(dx17):
  //   c8 = `is.object`(dx17);
  //   if c8 then L5() else L6(dx17);
  // L2():
  //   dr14 = tryDispatchBuiltin.1("$", object18);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L4() else L3(dr14);
  // L3(object20):
  //   r31 = `$`(object20, <sym xtsp>);
  //   goto L1(r31);
  // L0(dx21):
  //   return dx21;
  // L4():
  //   dx16 = getTryDispatchBuiltinValue(dr14);
  //   goto L1(dx16);
  // L5():
  //   dr16 = tryDispatchBuiltin.1("[", dx17);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L7() else L6(dr16);
  // L6(dx19):
  //   __3 = ldf `[` in base;
  //   r32 = dyn __3(dx19, 3);
  //   goto L0(r32);
  // L7():
  //   dx20 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx20);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_7, CCP, RHO);
  // r34 = dyn ts[, start, frequency](p5, p6, p7)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L31() else D13()
  // L31()
  goto L31_;

D13_:;
  // deopt 52 [r34]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L31_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_inner64320599_(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
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
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
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
  // r = `$`(object4, <sym data>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner64320599_1(SEXP CCP, SEXP RHO) {
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r2 = `$`(object8, <sym model0>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r2_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner64320599_2(SEXP CCP, SEXP RHO) {
  // return -1.0
  return Rsh_const(CCP, 14);
}
SEXP Rsh_Fir_user_promise_inner64320599_3(SEXP CCP, SEXP RHO) {
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return object10
  return Rsh_Fir_reg_object10_;
}
SEXP Rsh_Fir_user_promise_inner64320599_4(SEXP CCP, SEXP RHO) {
  // object11 = ld object
  Rsh_Fir_reg_object11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object12 = force? object11
  Rsh_Fir_reg_object12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object11_);
  // checkMissing(object12)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_object12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return object12
  return Rsh_Fir_reg_object12_;
}
SEXP Rsh_Fir_user_promise_inner64320599_5(SEXP CCP, SEXP RHO) {
  // res8 = ld res
  Rsh_Fir_reg_res8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // res9 = force? res8
  Rsh_Fir_reg_res9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res8_);
  // checkMissing(res9)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_res9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return res9
  return Rsh_Fir_reg_res9_;
}
SEXP Rsh_Fir_user_promise_inner64320599_6(SEXP CCP, SEXP RHO) {
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(object14)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c5 then L2() else L3(object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L2()
    goto L2_;
  } else {
  // L3(object14)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L3_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // c6 = `is.object`(dx11)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c6 then L5() else L6(dx11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx11)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    goto L6_;
  }

L2_:;
  // dr10 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc5 then L4() else L3(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr10)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr10_;
    goto L3_;
  }

L3_:;
  // r28 = `$`(object16, <sym xtsp>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L1(r28)
  // L1(r28)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r28_;
  goto L1_;

L4_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L1(dx10)
  // L1(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L1_;

L5_:;
  // dr12 = tryDispatchBuiltin.1("[", dx11)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc6 then L7() else L6(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr12)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dr12_;
    goto L6_;
  }

L6_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r29 = dyn __2(dx13, 1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r29_;
  goto L0_;

L7_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner64320599_7(SEXP CCP, SEXP RHO) {
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(object18)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c7 then L2() else L3(object18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L2()
    goto L2_;
  } else {
  // L3(object18)
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_object18_;
    goto L3_;
  }

L0_:;
  // return dx21
  return Rsh_Fir_reg_dx21_;

L1_:;
  // c8 = `is.object`(dx17)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c8 then L5() else L6(dx17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx17)
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
    goto L6_;
  }

L2_:;
  // dr14 = tryDispatchBuiltin.1("$", object18)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc7 then L4() else L3(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr14)
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_dr14_;
    goto L3_;
  }

L3_:;
  // r31 = `$`(object20, <sym xtsp>)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L1(r31)
  // L1(r31)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r31_;
  goto L1_;

L4_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L1(dx16)
  // L1(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L1_;

L5_:;
  // dr16 = tryDispatchBuiltin.1("[", dx17)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc8 then L7() else L6(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr16)
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dr16_;
    goto L6_;
  }

L6_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r32 = dyn __3(dx19, 3)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r32_;
  goto L0_;

L7_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
