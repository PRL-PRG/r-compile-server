#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner251066887_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner251066887_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner251066887_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner251066887_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner251066887_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner251066887_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner251066887
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner251066887_, RHO, CCP);
  // st `weights.glm` = r
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
SEXP Rsh_Fir_user_function_inner251066887_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner251066887 dynamic dispatch ([object, type, `...`])

  return Rsh_Fir_user_version_inner251066887_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner251066887_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner251066887 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner251066887/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_type_isMissing;  // type_isMissing
  SEXP Rsh_Fir_reg_type_orDefault;  // type_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_type3_;  // type3
  SEXP Rsh_Fir_reg_type4_;  // type4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_naresid;  // naresid
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_res2_;  // res2
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r15_;  // r15

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_type = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if type_isMissing then L0() else L1(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("prior", "working");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("prior", "working");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner251066887_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L2_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L3_:;
  // st res = dx2
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx2_, RHO);
  (void)(Rsh_Fir_reg_dx2_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L4_:;
  // c6 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c6 then L28() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L28()
    goto L28_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // naresid = ldf naresid
  Rsh_Fir_reg_naresid = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   type1 = ld type;
  //   type2 = force? type1;
  //   checkMissing(type2);
  //   return type2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner251066887_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // st type = r5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 5 [type3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_type3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r6 = `==`(type4, "prior")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_type4_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L9() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L9()
    goto L9_;
  } else {
  // L2()
    goto L2_;
  }

L9_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 9 [object1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(object2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c2 then L12() else L13(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L12()
    goto L12_;
  } else {
  // L13(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L13_;
  }

L11_:;
  // goto L3(dx1)
  // L3(dx1)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_dx1_;
  goto L3_;

L12_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc then L14() else L13(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L14()
    goto L14_;
  } else {
  // L13(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L13_;
  }

L13_:;
  // r7 = `$`(object4, <sym prior.weights>)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L11(r7)
  // L11(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L11_;

L14_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

D4_:;
  // deopt 12 [object5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c3 then L18() else L19(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L18()
    goto L18_;
  } else {
  // L19(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L19_;
  }

L17_:;
  // goto L3(dx4)
  // L3(dx4)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_dx4_;
  goto L3_;

L18_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc1 then L20() else L19(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L20()
    goto L20_;
  } else {
  // L19(dr2)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L19_;
  }

L19_:;
  // r8 = `$`(object8, <sym weights>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L17(r8)
  // L17(r8)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r8_;
  goto L17_;

L20_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L17(dx3)
  // L17(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L17_;

L21_:;
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

L22_:;
  // r9 = dyn base1(<lang `$`(object, na.action)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D5_:;
  // deopt 17 [object9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(object10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c4 then L25() else L26(object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L25()
    goto L25_;
  } else {
  // L26(object10)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L26_;
  }

L24_:;
  // c5 = `==`(dx6, NULL)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L4(c5)
  // L4(c5)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c5_;
  goto L4_;

L25_:;
  // dr4 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc2 then L27() else L26(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr4)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr4_;
    goto L26_;
  }

L26_:;
  // r11 = `$`(object12, <sym na.action>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L24(r11)
  // L24(r11)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r11_;
  goto L24_;

L27_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L24(dx5)
  // L24(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L24_;

L28_:;
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

D6_:;
  // deopt 21 [res]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L29_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res1
  return Rsh_Fir_reg_res1_;

D7_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p2 = prom<V +>{
  //   object13 = ld object;
  //   object14 = force? object13;
  //   checkMissing(object14);
  //   c7 = `is.object`(object14);
  //   if c7 then L1() else L2(object14);
  // L0(dx8):
  //   return dx8;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", object14);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(object16):
  //   r12 = `$`(object16, <sym na.action>);
  //   goto L0(r12);
  // L3():
  //   dx7 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx7);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner251066887_2, CCP, RHO);
  // p3 = prom<V +>{
  //   res2 = ld res;
  //   res3 = force? res2;
  //   checkMissing(res3);
  //   return res3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner251066887_3, CCP, RHO);
  // r15 = dyn naresid(p2, p3)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_naresid, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 27 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_inner251066887_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
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
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn c("prior", "working")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("prior", "working")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner251066887_1(SEXP CCP, SEXP RHO) {
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return type2
  return Rsh_Fir_reg_type2_;
}
SEXP Rsh_Fir_user_promise_inner251066887_2(SEXP CCP, SEXP RHO) {
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(object14)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c7 then L1() else L2(object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object14)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L2_;
  }

L0_:;
  // return dx8
  return Rsh_Fir_reg_dx8_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r12 = `$`(object16, <sym na.action>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r12_;
  goto L0_;

L3_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L0(dx7)
  // L0(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner251066887_3(SEXP CCP, SEXP RHO) {
  // res2 = ld res
  Rsh_Fir_reg_res2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // res3 = force? res2
  Rsh_Fir_reg_res3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res2_);
  // checkMissing(res3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_res3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return res3
  return Rsh_Fir_reg_res3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
