#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4102710431_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4102710431_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner4102710431
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4102710431_, RHO, CCP);
  // st check_exact = r
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
SEXP Rsh_Fir_user_function_inner4102710431_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4102710431 dynamic dispatch ([object])

  return Rsh_Fir_user_version_inner4102710431_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4102710431_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4102710431 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4102710431/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_w;  // w
  SEXP Rsh_Fir_reg_w1_;  // w1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sum1_;  // sum1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_w2_;  // w2
  SEXP Rsh_Fir_reg_w3_;  // w3
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_w5_;  // w5
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_w7_;  // w7
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sum2_;  // sum2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_w8_;  // w8
  SEXP Rsh_Fir_reg_w9_;  // w9
  SEXP Rsh_Fir_reg_object17_;  // object17
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_w11_;  // w11
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_w13_;  // w13
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sum3_;  // sum3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_rss;  // rss
  SEXP Rsh_Fir_reg_rss1_;  // rss1
  SEXP Rsh_Fir_reg_mss;  // mss
  SEXP Rsh_Fir_reg_mss1_;  // mss1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r28_;  // r28

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L0_:;
  // c2 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c2 then L16() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L16()
    goto L16_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym3 = ldf sum
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base3 = ldf sum in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard3 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L2_:;
  // st mss = r4
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf sum
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf sum in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L3_:;
  // st rss = r9
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // rss = ld rss
  Rsh_Fir_reg_rss = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L52() else D12()
  // L52()
  goto L52_;

L5_:;
  // st mss = r15
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym4 = ldf sum
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base4 = ldf sum in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard4 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L6_:;
  // st rss = r21
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L4()
  // L4()
  goto L4_;

L7_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

D0_:;
  // deopt 0 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L10() else L11(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L11(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L11_;
  }

L9_:;
  // st w = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L10_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L11_;
  }

L11_:;
  // r = `$`(object4, <sym weights>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L9(r)
  // L9(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L9_;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L9(dx)
  // L9(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L9_;

L13_:;
  // w = ld w
  Rsh_Fir_reg_w = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

L14_:;
  // r1 = dyn base(<sym w>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D1_:;
  // deopt 5 [w]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_w;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // w1 = force? w
  Rsh_Fir_reg_w1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w);
  // checkMissing(w1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_w1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `==`(w1, NULL)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_w1_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L0(c1)
  // L0(c1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_c1_;
  goto L0_;

L16_:;
  // sym1 = ldf sum
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf sum in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L18_:;
  // r3 = dyn base1(<lang `^`(`$`(object, fitted.values), 2.0)>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 10 [object5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c3 then L21() else L22(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L21()
    goto L21_;
  } else {
  // L22(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L22_;
  }

L20_:;
  // r6 = `^`(dx3, 2.0)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r7 = dyn sum(r6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

L21_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc1 then L23() else L22(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L23()
    goto L23_;
  } else {
  // L22(dr2)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L22_;
  }

L22_:;
  // r5 = `$`(object8, <sym fitted.values>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L20(r5)
  // L20(r5)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r5_;
  goto L20_;

L23_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L20(dx2)
  // L20(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L20_;

D3_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r7_;
  goto L2_;

L25_:;
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

L26_:;
  // r8 = dyn base2(<lang `^`(`$`(object, residuals), 2.0)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D4_:;
  // deopt 20 [object9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(object10)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c4 then L29() else L30(object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L29()
    goto L29_;
  } else {
  // L30(object10)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L30_;
  }

L28_:;
  // r11 = `^`(dx5, 2.0)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r12 = dyn sum1(r11)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

L29_:;
  // dr4 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc2 then L31() else L30(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr4)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr4_;
    goto L30_;
  }

L30_:;
  // r10 = `$`(object12, <sym residuals>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L28(r10)
  // L28(r10)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r10_;
  goto L28_;

L31_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L28(dx4)
  // L28(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L28_;

D5_:;
  // deopt 26 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r12_;
  goto L3_;

L34_:;
  // w2 = ld w
  Rsh_Fir_reg_w2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

L35_:;
  // r14 = dyn base3(<lang `*`(w, `^`(`$`(object, fitted.values), 2.0))>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L5_;

D6_:;
  // deopt 30 [w2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_w2_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // w3 = force? w2
  Rsh_Fir_reg_w3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w2_);
  // checkMissing(w3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_w3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

D7_:;
  // deopt 31 [w3, object13]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_w3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_object13_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(object14)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c5 then L39() else L40(w3, object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L39()
    goto L39_;
  } else {
  // L40(w3, object14)
    Rsh_Fir_reg_w5_ = Rsh_Fir_reg_w3_;
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L40_;
  }

L38_:;
  // r17 = `^`(dx7, 2.0)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // r18 = `*`(w7, r17)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_w7_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r19 = dyn sum2(r18)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

L39_:;
  // dr6 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc3 then L41() else L40(w3, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L41()
    goto L41_;
  } else {
  // L40(w3, dr6)
    Rsh_Fir_reg_w5_ = Rsh_Fir_reg_w3_;
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr6_;
    goto L40_;
  }

L40_:;
  // r16 = `$`(object16, <sym fitted.values>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L38(w5, r16)
  // L38(w5, r16)
  Rsh_Fir_reg_w7_ = Rsh_Fir_reg_w5_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r16_;
  goto L38_;

L41_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L38(w3, dx6)
  // L38(w3, dx6)
  Rsh_Fir_reg_w7_ = Rsh_Fir_reg_w3_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L38_;

D8_:;
  // deopt 38 [r19]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L5(r19)
  // L5(r19)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r19_;
  goto L5_;

L43_:;
  // w8 = ld w
  Rsh_Fir_reg_w8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L45() else D9()
  // L45()
  goto L45_;

L44_:;
  // r20 = dyn base4(<lang `*`(w, `^`(`$`(object, residuals), 2.0))>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(r20)
  // L6(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L6_;

D9_:;
  // deopt 42 [w8]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_w8_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L45_:;
  // w9 = force? w8
  Rsh_Fir_reg_w9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w8_);
  // checkMissing(w9)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_w9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

D10_:;
  // deopt 43 [w9, object17]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_w9_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_object17_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(object18)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c6 then L48() else L49(w9, object18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L48()
    goto L48_;
  } else {
  // L49(w9, object18)
    Rsh_Fir_reg_w11_ = Rsh_Fir_reg_w9_;
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_object18_;
    goto L49_;
  }

L47_:;
  // r23 = `^`(dx9, 2.0)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // r24 = `*`(w13, r23)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_w13_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // sum3 = ldf sum in base
  Rsh_Fir_reg_sum3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r25 = dyn sum3(r24)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum3_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

L48_:;
  // dr8 = tryDispatchBuiltin.1("$", object18)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc4 then L50() else L49(w9, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L50()
    goto L50_;
  } else {
  // L49(w9, dr8)
    Rsh_Fir_reg_w11_ = Rsh_Fir_reg_w9_;
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_dr8_;
    goto L49_;
  }

L49_:;
  // r22 = `$`(object20, <sym residuals>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L47(w11, r22)
  // L47(w11, r22)
  Rsh_Fir_reg_w13_ = Rsh_Fir_reg_w11_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r22_;
  goto L47_;

L50_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L47(w9, dx8)
  // L47(w9, dx8)
  Rsh_Fir_reg_w13_ = Rsh_Fir_reg_w9_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L47_;

D11_:;
  // deopt 50 [r25]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L6(r25)
  // L6(r25)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r25_;
  goto L6_;

D12_:;
  // deopt 52 [rss]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_rss;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L52_:;
  // rss1 = force? rss
  Rsh_Fir_reg_rss1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rss);
  // checkMissing(rss1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_rss1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // mss = ld mss
  Rsh_Fir_reg_mss = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

D13_:;
  // deopt 54 [rss1, 1.0E-10, mss]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_rss1_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_mss;
  Rsh_Fir_deopt(54, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L53_:;
  // mss1 = force? mss
  Rsh_Fir_reg_mss1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mss);
  // checkMissing(mss1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_mss1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r26 = `*`(1.0E-10, mss1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_mss1_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // r27 = `<`(rss1, r26)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_rss1_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c7 then L54() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L54()
    goto L54_;
  } else {
  // L7()
    goto L7_;
  }

L54_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L55() else D14()
  // L55()
  goto L55_;

D14_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // r28 = dyn warning[, `call.`]("attempting model selection on an essentially perfect fit is nonsense", FALSE)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L56() else D15()
  // L56()
  goto L56_;

D15_:;
  // deopt 63 [r28]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L56_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
