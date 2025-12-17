#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3082332595_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3082332595_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3082332595_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3082332595_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3082332595_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3082332595
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3082332595_, RHO, CCP);
  // st `.addMethodFrom` = r
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
SEXP Rsh_Fir_user_function_inner3082332595_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3082332595 dynamic dispatch ([def, arg, Class, fromClass])

  return Rsh_Fir_user_version_inner3082332595_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3082332595_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3082332595 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3082332595/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_def;  // def
  SEXP Rsh_Fir_reg_arg;  // arg
  SEXP Rsh_Fir_reg_Class;  // Class
  SEXP Rsh_Fir_reg_fromClass;  // fromClass
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_def1_;  // def1
  SEXP Rsh_Fir_reg_def2_;  // def2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_Class1_;  // Class1
  SEXP Rsh_Fir_reg_Class2_;  // Class2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_target;  // target
  SEXP Rsh_Fir_reg_target1_;  // target1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_Class4_;  // Class4
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_Class6_;  // Class6
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_arg1_;  // arg1
  SEXP Rsh_Fir_reg_arg2_;  // arg2
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_fromClass1_;  // fromClass1
  SEXP Rsh_Fir_reg_fromClass2_;  // fromClass2
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_defined;  // defined
  SEXP Rsh_Fir_reg_defined1_;  // defined1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_fromClass4_;  // fromClass4
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_fromClass6_;  // fromClass6
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_arg3_;  // arg3
  SEXP Rsh_Fir_reg_arg4_;  // arg4
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_def3_;  // def3
  SEXP Rsh_Fir_reg_def4_;  // def4

  // Bind parameters
  Rsh_Fir_reg_def = PARAMS[0];
  Rsh_Fir_reg_arg = PARAMS[1];
  Rsh_Fir_reg_Class = PARAMS[2];
  Rsh_Fir_reg_fromClass = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st def = def
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_def, RHO);
  (void)(Rsh_Fir_reg_def);
  // st arg = arg
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_arg, RHO);
  (void)(Rsh_Fir_reg_arg);
  // st Class = Class
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_Class, RHO);
  (void)(Rsh_Fir_reg_Class);
  // st fromClass = fromClass
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_fromClass, RHO);
  (void)(Rsh_Fir_reg_fromClass);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L0_:;
  // goto L3()
  // L3()
  goto L3_;

L1_:;
  // ___ = ldf `@<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

L2_:;
  // ___1 = ldf `@<-`
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L23() else D12()
  // L23()
  goto L23_;

L3_:;
  // def3 = ld def
  Rsh_Fir_reg_def3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D14()
  // L26()
  goto L26_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   def1 = ld def;
  //   def2 = force? def1;
  //   checkMissing(def2);
  //   return def2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3082332595_, CCP, RHO);
  // r1 = dyn is(p, "MethodDefinition")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L6() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L0()
    goto L0_;
  }

L6_:;
  // Class1 = ld Class
  Rsh_Fir_reg_Class1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 5 [Class1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_Class1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // Class2 = force? Class1
  Rsh_Fir_reg_Class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class1_);
  // checkMissing(Class2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_Class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // l = ld def
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // __ = ldf `@`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 8 [Class2, l, Class2]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_Class2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_Class2_;
  Rsh_Fir_deopt(8, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // p1 = prom<V +>{
  //   target = ld target;
  //   target1 = force? target;
  //   checkMissing(target1);
  //   return target1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3082332595_1, CCP, RHO);
  // r3 = dyn __(Class2, NULL, p1)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_Class2_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 11 [Class2, l, Class2, r3]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_Class2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_Class2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // c1 = `is.object`(r3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c1 then L10() else L11(Class2, l, r3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L10()
    goto L10_;
  } else {
  // L11(Class2, l, r3)
    Rsh_Fir_reg_Class4_ = Rsh_Fir_reg_Class2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r3_;
    goto L11_;
  }

L10_:;
  // dr = tryDispatchBuiltin.0("[[<-", r3, Class2)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_Class2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(Class2, l, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L12()
    goto L12_;
  } else {
  // L11(Class2, l, dr)
    Rsh_Fir_reg_Class4_ = Rsh_Fir_reg_Class2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r5_ = Rsh_Fir_reg_dr;
    goto L11_;
  }

L11_:;
  // arg1 = ld arg
  Rsh_Fir_reg_arg1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L1(Class2, l, dx)
  // L1(Class2, l, dx)
  Rsh_Fir_reg_Class6_ = Rsh_Fir_reg_Class2_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

D5_:;
  // deopt 13 [Class4, l2, r5, Class2, arg1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_Class4_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_Class2_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_arg1_;
  Rsh_Fir_deopt(13, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L13_:;
  // arg2 = force? arg1
  Rsh_Fir_reg_arg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arg1_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r6 = dyn ____(r5, Class2, arg2)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_Class2_;
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_arg2_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(Class4, l2, r6)
  // L1(Class4, l2, r6)
  Rsh_Fir_reg_Class6_ = Rsh_Fir_reg_Class4_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L1_;

D6_:;
  // deopt 16 [Class6, l4, dx1]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_Class6_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(16, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // r7 = dyn ___(l4, NULL, "target", dx1)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[3] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 19 [Class6, r7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_Class6_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // st def = r7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // fromClass1 = ld fromClass
  Rsh_Fir_reg_fromClass1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 21 [fromClass1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_fromClass1_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L16_:;
  // fromClass2 = force? fromClass1
  Rsh_Fir_reg_fromClass2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fromClass1_);
  // checkMissing(fromClass2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_fromClass2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // l5 = ld def
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // __1 = ldf `@`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 24 [fromClass2, l5, fromClass2]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_fromClass2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_fromClass2_;
  Rsh_Fir_deopt(24, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // p2 = prom<V +>{
  //   defined = ld defined;
  //   defined1 = force? defined;
  //   checkMissing(defined1);
  //   return defined1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3082332595_2, CCP, RHO);
  // r9 = dyn __1(fromClass2, NULL, p2)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_fromClass2_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

D10_:;
  // deopt 27 [fromClass2, l5, fromClass2, r9]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_fromClass2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_fromClass2_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(27, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L18_:;
  // c2 = `is.object`(r9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c2 then L19() else L20(fromClass2, l5, r9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L19()
    goto L19_;
  } else {
  // L20(fromClass2, l5, r9)
    Rsh_Fir_reg_fromClass4_ = Rsh_Fir_reg_fromClass2_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r9_;
    goto L20_;
  }

L19_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", r9, fromClass2)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_fromClass2_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args16);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc1 then L21() else L20(fromClass2, l5, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L21()
    goto L21_;
  } else {
  // L20(fromClass2, l5, dr2)
    Rsh_Fir_reg_fromClass4_ = Rsh_Fir_reg_fromClass2_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    Rsh_Fir_reg_r11_ = Rsh_Fir_reg_dr2_;
    goto L20_;
  }

L20_:;
  // arg3 = ld arg
  Rsh_Fir_reg_arg3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

L21_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L2(fromClass2, l5, dx2)
  // L2(fromClass2, l5, dx2)
  Rsh_Fir_reg_fromClass6_ = Rsh_Fir_reg_fromClass2_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

D11_:;
  // deopt 29 [fromClass4, l7, r11, fromClass2, arg3]
  SEXP Rsh_Fir_array_deopt_stack10[5];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_fromClass4_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_fromClass2_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_arg3_;
  Rsh_Fir_deopt(29, 5, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L22_:;
  // arg4 = force? arg3
  Rsh_Fir_reg_arg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arg3_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r12 = dyn ____1(r11, fromClass2, arg4)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_fromClass2_;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_arg4_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(fromClass4, l7, r12)
  // L2(fromClass4, l7, r12)
  Rsh_Fir_reg_fromClass6_ = Rsh_Fir_reg_fromClass4_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L2_;

D12_:;
  // deopt 32 [fromClass6, l9, dx3]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_fromClass6_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L23_:;
  // r13 = dyn ___1(l9, NULL, "defined", dx3)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args20[3] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D13()
  // L24()
  goto L24_;

D13_:;
  // deopt 35 [fromClass6, r13]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_fromClass6_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L24_:;
  // st def = r13
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // goto L3()
  // L3()
  goto L3_;

D14_:;
  // deopt 39 [def3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_def3_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L26_:;
  // def4 = force? def3
  Rsh_Fir_reg_def4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def3_);
  // checkMissing(def4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_def4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return def4
  return Rsh_Fir_reg_def4_;
}
SEXP Rsh_Fir_user_promise_inner3082332595_(SEXP CCP, SEXP RHO) {
  // def1 = ld def
  Rsh_Fir_reg_def1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // def2 = force? def1
  Rsh_Fir_reg_def2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def1_);
  // checkMissing(def2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_def2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return def2
  return Rsh_Fir_reg_def2_;
}
SEXP Rsh_Fir_user_promise_inner3082332595_1(SEXP CCP, SEXP RHO) {
  // target = ld target
  Rsh_Fir_reg_target = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // target1 = force? target
  Rsh_Fir_reg_target1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target);
  // checkMissing(target1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_target1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return target1
  return Rsh_Fir_reg_target1_;
}
SEXP Rsh_Fir_user_promise_inner3082332595_2(SEXP CCP, SEXP RHO) {
  // defined = ld defined
  Rsh_Fir_reg_defined = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // defined1 = force? defined
  Rsh_Fir_reg_defined1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defined);
  // checkMissing(defined1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_defined1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return defined1
  return Rsh_Fir_reg_defined1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
