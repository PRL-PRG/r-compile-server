#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1827788318_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1827788318_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1827788318_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1827788318_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1827788318_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2359521304_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2359521304_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2359521304_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2359521304_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2359521304_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2359521304_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2359521304_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2359521304_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1827788318
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1827788318_, RHO, CCP);
  // st `se.aov` = r
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
SEXP Rsh_Fir_user_function_inner1827788318_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1827788318 dynamic dispatch ([object, n, type])

  return Rsh_Fir_user_version_inner1827788318_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1827788318_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1827788318 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1827788318/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_type_isMissing;  // type_isMissing
  SEXP Rsh_Fir_reg_type_orDefault;  // type_orDefault
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
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_rdf;  // rdf
  SEXP Rsh_Fir_reg_rdf1_;  // rdf1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_rse;  // rse
  SEXP Rsh_Fir_reg_rse1_;  // rse1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_rse4_;  // rse4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_type3_;  // type3
  SEXP Rsh_Fir_reg_type4_;  // type4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_rse5_;  // rse5
  SEXP Rsh_Fir_reg_rse6_;  // rse6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_type5_;  // type5
  SEXP Rsh_Fir_reg_type6_;  // type6
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_result;  // result
  SEXP Rsh_Fir_reg_result1_;  // result1

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_n = PARAMS[1];
  Rsh_Fir_reg_type = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if type_isMissing then L0("means") else L0(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L0("means")
    Rsh_Fir_reg_type_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L0_;
  }

L0_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L1_:;
  // st rse = r2
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L2_:;
  // rdf = ld rdf
  Rsh_Fir_reg_rdf = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

L3_:;
  // goto L5()
  // L5()
  goto L5_;

L4_:;
  // r14 = `/`(rse4, r12)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_rse4_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // st result = r14
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // type5 = ld type
  Rsh_Fir_reg_type5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

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
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
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
  // st rdf = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf sqrt
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf sqrt in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
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
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
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
  // r = `$`(object4, <sym df.residual>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L9(r)
  // L9(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L9_;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L9(dx)
  // L9(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L9_;

L13_:;
  // sym1 = ldf sum
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf sum in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L14_:;
  // r1 = dyn base(<lang `/`(sum(`^`(`$`(object, residuals), 2.0)), rdf)>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r1)
  // L1(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L1_;

L15_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

L16_:;
  // r3 = dyn base1(<lang `^`(`$`(object, residuals), 2.0)>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D1_:;
  // deopt 7 [object5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L20(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L20(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L20_;
  }

L18_:;
  // r6 = `^`(dx3, 2.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r7 = dyn sum(r6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L19_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc1 then L21() else L20(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr2)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L20_;
  }

L20_:;
  // r5 = `$`(object8, <sym residuals>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L18(r5)
  // L18(r5)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r5_;
  goto L18_;

L21_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L18(dx2)
  // L18(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L18_;

D2_:;
  // deopt 13 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r7_;
  goto L2_;

D3_:;
  // deopt 13 [r4, rdf]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_rdf;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // rdf1 = force? rdf
  Rsh_Fir_reg_rdf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rdf);
  // checkMissing(rdf1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_rdf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r8 = `/`(r4, rdf1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_rdf1_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // r9 = sqrt(r8)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r9_;
  goto L1_;

D4_:;
  // deopt 18 [type1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_type1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r10 = `==`(type2, "effects")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_type2_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c2 then L25() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L25()
    goto L25_;
  } else {
  // L3()
    goto L3_;
  }

L25_:;
  // rse = ld rse
  Rsh_Fir_reg_rse = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

D5_:;
  // deopt 22 [rse]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_rse;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // rse1 = force? rse
  Rsh_Fir_reg_rse1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rse);
  // checkMissing(rse1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_rse1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // sym2 = ldf sqrt
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf sqrt in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L28_:;
  // r11 = dyn base2(<sym n>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(rse1, r11)
  // L4(rse1, r11)
  Rsh_Fir_reg_rse4_ = Rsh_Fir_reg_rse1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L4_;

D6_:;
  // deopt 24 [rse1, n1]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_rse1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r13 = sqrt(n2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L4(rse1, r13)
  // L4(rse1, r13)
  Rsh_Fir_reg_rse4_ = Rsh_Fir_reg_rse1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L4_;

D7_:;
  // deopt 31 [type3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_type3_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L31_:;
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r16 = `==`(type4, "means")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_type4_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c3 then L32() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L32()
    goto L32_;
  } else {
  // L6()
    goto L6_;
  }

L32_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

D8_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p = prom<V +>{
  //   n3 = ld n;
  //   n4 = force? n3;
  //   checkMissing(n4);
  //   return n4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1827788318_, CCP, RHO);
  // p1 = prom<V +>{
  //   r18 = clos inner2359521304;
  //   return r18;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1827788318_1, CCP, RHO);
  // p2 = prom<V +>{
  //   rse5 = ld rse;
  //   rse6 = force? rse5;
  //   checkMissing(rse6);
  //   return rse6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1827788318_2, CCP, RHO);
  // r21 = dyn lapply[, , d](p, p1, p2)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

D9_:;
  // deopt 41 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L34_:;
  // st result = r21
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L7()
  // L7()
  goto L7_;

D10_:;
  // deopt 45 [type5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_type5_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // type6 = force? type5
  Rsh_Fir_reg_type6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type5_);
  // checkMissing(type6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_type6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // l = ld result
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

D11_:;
  // deopt 48 [type6, l, type6]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_type6_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_type6_;
  Rsh_Fir_deopt(48, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // r23 = dyn attr__(l, NULL, "type", type6)
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args38[3] = Rsh_Fir_reg_type6_;
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L38() else D12()
  // L38()
  goto L38_;

D12_:;
  // deopt 51 [type6, r23]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_type6_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L38_:;
  // st result = r23
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // l1 = ld result
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L39() else D13()
  // L39()
  goto L39_;

D13_:;
  // deopt 56 ["mtable", l1, "mtable"]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_const(CCP, 23);
  Rsh_Fir_deopt(56, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L39_:;
  // r24 = dyn class__(l1, NULL, "mtable")
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L40() else D14()
  // L40()
  goto L40_;

D14_:;
  // deopt 58 ["mtable", r24]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L40_:;
  // st result = r24
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L41() else D15()
  // L41()
  goto L41_;

D15_:;
  // deopt 60 [result]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L41_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result1
  return Rsh_Fir_reg_result1_;
}
SEXP Rsh_Fir_user_promise_inner1827788318_(SEXP CCP, SEXP RHO) {
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return n4
  return Rsh_Fir_reg_n4_;
}
SEXP Rsh_Fir_user_promise_inner1827788318_1(SEXP CCP, SEXP RHO) {
  // r18 = clos inner2359521304
  Rsh_Fir_reg_r18_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2359521304_, RHO, CCP);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_inner1827788318_2(SEXP CCP, SEXP RHO) {
  // rse5 = ld rse
  Rsh_Fir_reg_rse5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // rse6 = force? rse5
  Rsh_Fir_reg_rse6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rse5_);
  // checkMissing(rse6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_rse6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return rse6
  return Rsh_Fir_reg_rse6_;
}
SEXP Rsh_Fir_user_function_inner2359521304_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2359521304 dynamic dispatch ([x, d])

  return Rsh_Fir_user_version_inner2359521304_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2359521304_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2359521304 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2359521304/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_nn;  // nn
  SEXP Rsh_Fir_reg_nn1_;  // nn1
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_nn3_;  // nn3
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_nn6_;  // nn6
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_nn7_;  // nn7
  SEXP Rsh_Fir_reg_nn8_;  // nn8
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_outer;  // outer
  SEXP Rsh_Fir_reg_nn9_;  // nn9
  SEXP Rsh_Fir_reg_nn10_;  // nn10
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_nn11_;  // nn11
  SEXP Rsh_Fir_reg_nn12_;  // nn12
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_nn13_;  // nn13
  SEXP Rsh_Fir_reg_nn14_;  // nn14
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_nn15_;  // nn15
  SEXP Rsh_Fir_reg_nn16_;  // nn16
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_l1;  // l
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_d2_;  // d2
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_d5_;  // d5
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_mat;  // mat
  SEXP Rsh_Fir_reg_mat1_;  // mat1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_1;  // r23

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_d = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st d = d
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_d, RHO);
  (void)(Rsh_Fir_reg_d);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L0_:;
  // st nn = dx1
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_dx1_1, RHO);
  (void)(Rsh_Fir_reg_dx1_1);
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

L1_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r6 = dyn __(nn6, r5)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_nn6_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r6_1;
  goto L0_;

L2_:;
  // l = ld mat
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L23() else D12()
  // L23()
  goto L23_;

L3_:;
  // r23 = `*`(d5, r21)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r23
  return Rsh_Fir_reg_r23_1;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2359521304_, CCP, RHO);
  // r1 = dyn unique(p)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L5_:;
  // st nn = r1
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // nn = ld nn
  Rsh_Fir_reg_nn = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 5 [nn]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_nn;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L6_:;
  // nn1 = force? nn
  Rsh_Fir_reg_nn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn);
  // checkMissing(nn1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_nn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c = `is.object`(nn1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_nn1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c then L7() else L8(nn1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L7()
    goto L7_;
  } else {
  // L8(nn1)
    Rsh_Fir_reg_nn3_ = Rsh_Fir_reg_nn1_;
    goto L8_;
  }

L7_:;
  // dr = tryDispatchBuiltin.1("[", nn1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_nn1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc then L9() else L8(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr)
    Rsh_Fir_reg_nn3_ = Rsh_Fir_reg_dr1;
    goto L8_;
  }

L8_:;
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L9_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;

L10_:;
  // nn7 = ld nn
  Rsh_Fir_reg_nn7_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

L11_:;
  // r2 = dyn base(<sym nn>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(nn3, r2)
  // L1(nn3, r2)
  Rsh_Fir_reg_nn6_ = Rsh_Fir_reg_nn3_;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

D3_:;
  // deopt 9 [nn3, nn7]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_nn3_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_nn7_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L12_:;
  // nn8 = force? nn7
  Rsh_Fir_reg_nn8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn7_);
  // checkMissing(nn8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_nn8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r4 = dyn is_na(nn8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_nn8_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 12 [nn3, r4]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_nn3_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L1(nn3, r4)
  // L1(nn3, r4)
  Rsh_Fir_reg_nn6_ = Rsh_Fir_reg_nn3_;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_1;
  goto L1_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p1 = prom<V +>{
  //   nn9 = ld nn;
  //   nn10 = force? nn9;
  //   checkMissing(nn10);
  //   return nn10;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2359521304_1, CCP, RHO);
  // p2 = prom<V +>{
  //   nn11 = ld nn;
  //   nn12 = force? nn11;
  //   checkMissing(nn12);
  //   return nn12;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2359521304_2, CCP, RHO);
  // p3 = prom<V +>{
  //   r9 = clos inner799576941;
  //   return r9;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2359521304_3, CCP, RHO);
  // r11 = dyn outer(p1, p2, p3)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 21 [r11]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L15_:;
  // st mat = r11
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

L17_:;
  // r12 = dyn base1(<lang paste(nn)>, <lang paste(nn)>)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r12_1;
  goto L2_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p4 = prom<V +>{
  //   nn13 = ld nn;
  //   nn14 = force? nn13;
  //   checkMissing(nn14);
  //   return nn14;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2359521304_4, CCP, RHO);
  // r15 = dyn paste(p4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 28 [r15]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L19_:;
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p5 = prom<V +>{
  //   nn15 = ld nn;
  //   nn16 = force? nn15;
  //   checkMissing(nn16);
  //   return nn16;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2359521304_5, CCP, RHO);
  // r17 = dyn paste1(p5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L21() else D10()
  // L21()
  goto L21_;

D10_:;
  // deopt 32 [r17]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L21_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r18 = dyn list(r15, r17)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

D11_:;
  // deopt 34 [r18]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L2(r18)
  // L2(r18)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r18_1;
  goto L2_;

D12_:;
  // deopt 36 [r13, l, r13]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(36, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L23_:;
  // r19 = dyn dimnames__(l, NULL, r13)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L24() else D13()
  // L24()
  goto L24_;

D13_:;
  // deopt 38 [r13, r19]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L24_:;
  // st mat = r19
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // d1 = ld d
  Rsh_Fir_reg_d1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L25() else D14()
  // L25()
  goto L25_;

D14_:;
  // deopt 40 [d1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L25_:;
  // d2 = force? d1
  Rsh_Fir_reg_d2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d1_);
  // checkMissing(d2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_d2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // sym2 = ldf sqrt
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf sqrt in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard2 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // mat = ld mat
  Rsh_Fir_reg_mat = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L28() else D15()
  // L28()
  goto L28_;

L27_:;
  // r20 = dyn base2(<sym mat>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L3(d2, r20)
  // L3(d2, r20)
  Rsh_Fir_reg_d5_ = Rsh_Fir_reg_d2_;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_reg_r20_;
  goto L3_;

D15_:;
  // deopt 42 [d2, mat]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_d2_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_mat;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L28_:;
  // mat1 = force? mat
  Rsh_Fir_reg_mat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mat);
  // checkMissing(mat1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_mat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r22 = sqrt(mat1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_mat1_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L3(d2, r22)
  // L3(d2, r22)
  Rsh_Fir_reg_d5_ = Rsh_Fir_reg_d2_;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_reg_r22_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2359521304_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2359521304_1(SEXP CCP, SEXP RHO) {
  // nn9 = ld nn
  Rsh_Fir_reg_nn9_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nn10 = force? nn9
  Rsh_Fir_reg_nn10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn9_);
  // checkMissing(nn10)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_nn10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return nn10
  return Rsh_Fir_reg_nn10_;
}
SEXP Rsh_Fir_user_promise_inner2359521304_2(SEXP CCP, SEXP RHO) {
  // nn11 = ld nn
  Rsh_Fir_reg_nn11_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nn12 = force? nn11
  Rsh_Fir_reg_nn12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn11_);
  // checkMissing(nn12)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_nn12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return nn12
  return Rsh_Fir_reg_nn12_;
}
SEXP Rsh_Fir_user_promise_inner2359521304_3(SEXP CCP, SEXP RHO) {
  // r9 = clos inner799576941
  Rsh_Fir_reg_r9_1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner799576941_, RHO, CCP);
  // return r9
  return Rsh_Fir_reg_r9_1;
}
SEXP Rsh_Fir_user_promise_inner2359521304_4(SEXP CCP, SEXP RHO) {
  // nn13 = ld nn
  Rsh_Fir_reg_nn13_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nn14 = force? nn13
  Rsh_Fir_reg_nn14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn13_);
  // checkMissing(nn14)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_nn14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return nn14
  return Rsh_Fir_reg_nn14_;
}
SEXP Rsh_Fir_user_promise_inner2359521304_5(SEXP CCP, SEXP RHO) {
  // nn15 = ld nn
  Rsh_Fir_reg_nn15_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // nn16 = force? nn15
  Rsh_Fir_reg_nn16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn15_);
  // checkMissing(nn16)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_nn16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return nn16
  return Rsh_Fir_reg_nn16_;
}
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner799576941 dynamic dispatch ([x, y])

  return Rsh_Fir_user_version_inner799576941_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner799576941 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner799576941/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_x2_1;  // x2
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_r1_2;  // r1
  SEXP Rsh_Fir_reg_r2_2;  // r2

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 [1.0, x1]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L0_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // r = `/`(1.0, x2)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 4 [r, 1.0, y1]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(4, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L1_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // r1 = `/`(1.0, y2)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // r2 = `+`(r, r1)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_2;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
