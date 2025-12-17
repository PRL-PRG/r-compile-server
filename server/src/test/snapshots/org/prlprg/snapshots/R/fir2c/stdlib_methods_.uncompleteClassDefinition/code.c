#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3601921418_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3601921418_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3601921418_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3601921418_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3601921418_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3601921418_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3601921418_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3601921418_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3601921418_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3601921418_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3601921418_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner3601921418
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3601921418_, RHO, CCP);
  // st `.uncompleteClassDefinition` = r
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
SEXP Rsh_Fir_user_function_inner3601921418_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3601921418 dynamic dispatch ([ClassDef, slotName])

  return Rsh_Fir_user_version_inner3601921418_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3601921418_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3601921418 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3601921418/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ClassDef;  // ClassDef
  SEXP Rsh_Fir_reg_slotName;  // slotName
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_Recall;  // Recall
  SEXP Rsh_Fir_reg_ClassDef1_;  // ClassDef1
  SEXP Rsh_Fir_reg_ClassDef2_;  // ClassDef2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_Recall1_;  // Recall1
  SEXP Rsh_Fir_reg_ClassDef3_;  // ClassDef3
  SEXP Rsh_Fir_reg_ClassDef4_;  // ClassDef4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_slot;  // slot
  SEXP Rsh_Fir_reg_ClassDef5_;  // ClassDef5
  SEXP Rsh_Fir_reg_ClassDef6_;  // ClassDef6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_slotName1_;  // slotName1
  SEXP Rsh_Fir_reg_slotName2_;  // slotName2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_prev;  // prev
  SEXP Rsh_Fir_reg_prev1_;  // prev1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_prev2_;  // prev2
  SEXP Rsh_Fir_reg_prev3_;  // prev3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg__isIndirectExtension;  // _isIndirectExtension
  SEXP Rsh_Fir_reg__isIndirectExtension1_;  // _isIndirectExtension1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_slot1_;  // slot1
  SEXP Rsh_Fir_reg_ClassDef7_;  // ClassDef7
  SEXP Rsh_Fir_reg_ClassDef8_;  // ClassDef8
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_slotName3_;  // slotName3
  SEXP Rsh_Fir_reg_slotName4_;  // slotName4
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_indir;  // indir
  SEXP Rsh_Fir_reg_indir1_;  // indir1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_slot__;  // slot__
  SEXP Rsh_Fir_reg_slotName5_;  // slotName5
  SEXP Rsh_Fir_reg_slotName6_;  // slotName6
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_ClassDef9_;  // ClassDef9
  SEXP Rsh_Fir_reg_ClassDef10_;  // ClassDef10

  // Bind parameters
  Rsh_Fir_reg_ClassDef = PARAMS[0];
  Rsh_Fir_reg_slotName = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ClassDef = ClassDef
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ClassDef, RHO);
  (void)(Rsh_Fir_reg_ClassDef);
  // st slotName = slotName
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_slotName, RHO);
  (void)(Rsh_Fir_reg_slotName);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L8() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L8()
    goto L8_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // slot = ldf slot
  Rsh_Fir_reg_slot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

L2_:;
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L5()
  // L5()
  goto L5_;

L4_:;
  // l = ld ClassDef
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // slot__ = ldf `slot<-`
  Rsh_Fir_reg_slot__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L29() else D13()
  // L29()
  goto L29_;

L5_:;
  // ClassDef9 = ld ClassDef
  Rsh_Fir_reg_ClassDef9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D15()
  // L32()
  goto L32_;

L6_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn missing(<sym slotName>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L7_:;
  // r = dyn base(<sym slotName>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L8_:;
  // Recall = ldf Recall
  Rsh_Fir_reg_Recall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   ClassDef1 = ld ClassDef;
  //   ClassDef2 = force? ClassDef1;
  //   checkMissing(ClassDef2);
  //   return ClassDef2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3601921418_, CCP, RHO);
  // r4 = dyn Recall(p, "contains")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Recall, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // st ClassDef = r4
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // Recall1 = ldf Recall
  Rsh_Fir_reg_Recall1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p1 = prom<V +>{
  //   ClassDef3 = ld ClassDef;
  //   ClassDef4 = force? ClassDef3;
  //   checkMissing(ClassDef4);
  //   return ClassDef4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3601921418_1, CCP, RHO);
  // r6 = dyn Recall1(p1, "subclasses")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Recall1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p2 = prom<V +>{
  //   ClassDef5 = ld ClassDef;
  //   ClassDef6 = force? ClassDef5;
  //   checkMissing(ClassDef6);
  //   return ClassDef6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3601921418_2, CCP, RHO);
  // p3 = prom<V +>{
  //   slotName1 = ld slotName;
  //   slotName2 = force? slotName1;
  //   checkMissing(slotName2);
  //   return slotName2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3601921418_3, CCP, RHO);
  // r9 = dyn slot(p2, p3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // st prev = r9
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // prev = ld prev
  Rsh_Fir_reg_prev = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

L17_:;
  // r10 = dyn base1(<sym prev>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L2_;

D6_:;
  // deopt 22 [prev]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_prev;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // prev1 = force? prev
  Rsh_Fir_reg_prev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev);
  // checkMissing(prev1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_prev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r12 = dyn length(prev1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_prev1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 25 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L2_;

L20_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p4 = prom<V +>{
  //   prev2 = ld prev;
  //   prev3 = force? prev2;
  //   checkMissing(prev3);
  //   return prev3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3601921418_4, CCP, RHO);
  // p5 = prom<V +>{
  //   _isIndirectExtension = ld `.isIndirectExtension`;
  //   _isIndirectExtension1 = force? _isIndirectExtension;
  //   checkMissing(_isIndirectExtension1);
  //   return _isIndirectExtension1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3601921418_5, CCP, RHO);
  // r15 = dyn vapply(p4, p5, NA_LGL)
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

D9_:;
  // deopt 31 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // st indir = r15
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // slot1 = ldf slot
  Rsh_Fir_reg_slot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

D10_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p6 = prom<V +>{
  //   ClassDef7 = ld ClassDef;
  //   ClassDef8 = force? ClassDef7;
  //   checkMissing(ClassDef8);
  //   return ClassDef8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3601921418_6, CCP, RHO);
  // p7 = prom<V +>{
  //   slotName3 = ld slotName;
  //   slotName4 = force? slotName3;
  //   checkMissing(slotName4);
  //   return slotName4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3601921418_7, CCP, RHO);
  // r18 = dyn slot1(p6, p7)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L24() else D11()
  // L24()
  goto L24_;

D11_:;
  // deopt 37 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L24_:;
  // c2 = `is.object`(r18)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L25() else L26(r18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L25()
    goto L25_;
  } else {
  // L26(r18)
    Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r18_;
    goto L26_;
  }

L25_:;
  // dr = tryDispatchBuiltin.1("[", r18)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr)
    Rsh_Fir_reg_r20_ = Rsh_Fir_reg_dr;
    goto L26_;
  }

L26_:;
  // indir = ld indir
  Rsh_Fir_reg_indir = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L28() else D12()
  // L28()
  goto L28_;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D12_:;
  // deopt 38 [r20, indir]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_indir;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L28_:;
  // indir1 = force? indir
  Rsh_Fir_reg_indir1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_indir);
  // checkMissing(indir1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_indir1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r21 = `!`(indir1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_indir1_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r22 = dyn __(r20, r21)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r22)
  // L4(r22)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r22_;
  goto L4_;

D13_:;
  // deopt 43 [dx1, l, dx1]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(43, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // p8 = prom<V +>{
  //   slotName5 = ld slotName;
  //   slotName6 = force? slotName5;
  //   checkMissing(slotName6);
  //   return slotName6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3601921418_8, CCP, RHO);
  // r24 = dyn slot__(l, NULL, p8, dx1)
  SEXP Rsh_Fir_array_args30[4];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args30[3] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot__, 4, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L30() else D14()
  // L30()
  goto L30_;

D14_:;
  // deopt 46 [dx1, r24]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // st ClassDef = r24
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // goto L5()
  // L5()
  goto L5_;

D15_:;
  // deopt 50 [ClassDef9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_ClassDef9_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L32_:;
  // ClassDef10 = force? ClassDef9
  Rsh_Fir_reg_ClassDef10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef9_);
  // checkMissing(ClassDef10)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_ClassDef10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ClassDef10
  return Rsh_Fir_reg_ClassDef10_;
}
SEXP Rsh_Fir_user_promise_inner3601921418_(SEXP CCP, SEXP RHO) {
  // ClassDef1 = ld ClassDef
  Rsh_Fir_reg_ClassDef1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ClassDef2 = force? ClassDef1
  Rsh_Fir_reg_ClassDef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef1_);
  // checkMissing(ClassDef2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ClassDef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return ClassDef2
  return Rsh_Fir_reg_ClassDef2_;
}
SEXP Rsh_Fir_user_promise_inner3601921418_1(SEXP CCP, SEXP RHO) {
  // ClassDef3 = ld ClassDef
  Rsh_Fir_reg_ClassDef3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ClassDef4 = force? ClassDef3
  Rsh_Fir_reg_ClassDef4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef3_);
  // checkMissing(ClassDef4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_ClassDef4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return ClassDef4
  return Rsh_Fir_reg_ClassDef4_;
}
SEXP Rsh_Fir_user_promise_inner3601921418_2(SEXP CCP, SEXP RHO) {
  // ClassDef5 = ld ClassDef
  Rsh_Fir_reg_ClassDef5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ClassDef6 = force? ClassDef5
  Rsh_Fir_reg_ClassDef6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef5_);
  // checkMissing(ClassDef6)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_ClassDef6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return ClassDef6
  return Rsh_Fir_reg_ClassDef6_;
}
SEXP Rsh_Fir_user_promise_inner3601921418_3(SEXP CCP, SEXP RHO) {
  // slotName1 = ld slotName
  Rsh_Fir_reg_slotName1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // slotName2 = force? slotName1
  Rsh_Fir_reg_slotName2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slotName1_);
  // checkMissing(slotName2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_slotName2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return slotName2
  return Rsh_Fir_reg_slotName2_;
}
SEXP Rsh_Fir_user_promise_inner3601921418_4(SEXP CCP, SEXP RHO) {
  // prev2 = ld prev
  Rsh_Fir_reg_prev2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // prev3 = force? prev2
  Rsh_Fir_reg_prev3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev2_);
  // checkMissing(prev3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_prev3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return prev3
  return Rsh_Fir_reg_prev3_;
}
SEXP Rsh_Fir_user_promise_inner3601921418_5(SEXP CCP, SEXP RHO) {
  // _isIndirectExtension = ld `.isIndirectExtension`
  Rsh_Fir_reg__isIndirectExtension = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // _isIndirectExtension1 = force? _isIndirectExtension
  Rsh_Fir_reg__isIndirectExtension1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__isIndirectExtension);
  // checkMissing(_isIndirectExtension1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg__isIndirectExtension1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return _isIndirectExtension1
  return Rsh_Fir_reg__isIndirectExtension1_;
}
SEXP Rsh_Fir_user_promise_inner3601921418_6(SEXP CCP, SEXP RHO) {
  // ClassDef7 = ld ClassDef
  Rsh_Fir_reg_ClassDef7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ClassDef8 = force? ClassDef7
  Rsh_Fir_reg_ClassDef8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef7_);
  // checkMissing(ClassDef8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_ClassDef8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return ClassDef8
  return Rsh_Fir_reg_ClassDef8_;
}
SEXP Rsh_Fir_user_promise_inner3601921418_7(SEXP CCP, SEXP RHO) {
  // slotName3 = ld slotName
  Rsh_Fir_reg_slotName3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // slotName4 = force? slotName3
  Rsh_Fir_reg_slotName4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slotName3_);
  // checkMissing(slotName4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_slotName4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return slotName4
  return Rsh_Fir_reg_slotName4_;
}
SEXP Rsh_Fir_user_promise_inner3601921418_8(SEXP CCP, SEXP RHO) {
  // slotName5 = ld slotName
  Rsh_Fir_reg_slotName5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // slotName6 = force? slotName5
  Rsh_Fir_reg_slotName6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slotName5_);
  // checkMissing(slotName6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_slotName6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return slotName6
  return Rsh_Fir_reg_slotName6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
