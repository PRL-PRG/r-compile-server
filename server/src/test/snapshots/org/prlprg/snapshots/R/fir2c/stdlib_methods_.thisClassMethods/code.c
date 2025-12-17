#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner485967088_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner485967088_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner485967088_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner485967088_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner485967088_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner485967088
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner485967088_, RHO, CCP);
  // st `.thisClassMethods` = r
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
SEXP Rsh_Fir_user_function_inner485967088_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner485967088 dynamic dispatch ([methodsEnv, className])

  return Rsh_Fir_user_version_inner485967088_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner485967088_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner485967088 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner485967088/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_methodsEnv;  // methodsEnv
  SEXP Rsh_Fir_reg_className;  // className
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_methodsEnv1_;  // methodsEnv1
  SEXP Rsh_Fir_reg_methodsEnv2_;  // methodsEnv2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_methodsEnv3_;  // methodsEnv3
  SEXP Rsh_Fir_reg_methodsEnv4_;  // methodsEnv4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_def;  // def
  SEXP Rsh_Fir_reg_def1_;  // def1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_className1_;  // className1
  SEXP Rsh_Fir_reg_className2_;  // className2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_what2_;  // what2
  SEXP Rsh_Fir_reg_what3_;  // what3
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1

  // Bind parameters
  Rsh_Fir_reg_methodsEnv = PARAMS[0];
  Rsh_Fir_reg_className = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st methodsEnv = methodsEnv
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_methodsEnv, RHO);
  (void)(Rsh_Fir_reg_methodsEnv);
  // st className = className
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_className, RHO);
  (void)(Rsh_Fir_reg_className);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // st value = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L1_:;
  // s = toForSeq(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 6);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if c then L15() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L7()
    goto L7_;
  }

L3_:;
  // c7 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c7 then L23() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L23()
    goto L23_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L6(i6)
  // L6(i6)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i6_;
  goto L6_;

L5_:;
  // st value = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L6(i13)
  // L6(i13)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i13_;
  goto L6_;

L6_:;
  // goto L2(i14)
  // L2(i14)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i14_;
  goto L2_;

L7_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st what = x
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

L8_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L11_:;
  // methodsEnv1 = ld methodsEnv
  Rsh_Fir_reg_methodsEnv1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L12_:;
  // r3 = dyn base1(<sym methodsEnv>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D1_:;
  // deopt 7 [methodsEnv1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_methodsEnv1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // methodsEnv2 = force? methodsEnv1
  Rsh_Fir_reg_methodsEnv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodsEnv1_);
  // checkMissing(methodsEnv2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_methodsEnv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn names(methodsEnv2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_methodsEnv2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L15_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L29() else D9()
  // L29()
  goto L29_;

D3_:;
  // deopt 12 [i2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   what = ld what;
  //   what1 = force? what;
  //   checkMissing(what1);
  //   return what1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner485967088_, CCP, RHO);
  // p1 = prom<V +>{
  //   methodsEnv3 = ld methodsEnv;
  //   methodsEnv4 = force? methodsEnv3;
  //   checkMissing(methodsEnv4);
  //   return methodsEnv4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner485967088_1, CCP, RHO);
  // r8 = dyn get[, envir](p, p1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

D4_:;
  // deopt 16 [i2, r8]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // st def = r8
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D5_:;
  // deopt 19 [i2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // p2 = prom<V +>{
  //   def = ld def;
  //   def1 = force? def;
  //   checkMissing(def1);
  //   return def1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner485967088_2, CCP, RHO);
  // r10 = dyn is(p2, "refMethodDef")
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 22 [i2, r10]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L3(i2, c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L3(i2, c1)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L3_;
  }

L20_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r11 = dyn __(<sym def>, <sym refClassName>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // className1 = ld className
  Rsh_Fir_reg_className1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D7_:;
  // deopt 24 [i2, c1, r11, className1]
  SEXP Rsh_Fir_array_deopt_stack7[4];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_className1_;
  Rsh_Fir_deopt(24, 4, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // className2 = force? className1
  Rsh_Fir_reg_className2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_className1_);
  // checkMissing(className2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_className2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r12 = `==`(r11, className2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_className2_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c5 = `&&`(c1, c4)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L3(i2, c5)
  // L3(i2, c5)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c5_;
  goto L3_;

L23_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r13 = dyn __1(<sym def>, <sym .Data>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // l1 = ld value
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c8 = `is.object`(l1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c8 then L24() else L25(i6, r13, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L24()
    goto L24_;
  } else {
  // L25(i6, r13, l1)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i6_;
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L25_;
  }

L24_:;
  // dr = tryDispatchBuiltin.0("[[<-", l1, r13)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L26() else L25(i6, r13, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L26()
    goto L26_;
  } else {
  // L25(i6, r13, dr)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i6_;
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L25_;
  }

L25_:;
  // what2 = ld what
  Rsh_Fir_reg_what2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

L26_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L5(i6, r13, dx)
  // L5(i6, r13, dx)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D8_:;
  // deopt 31 [i11, r15, l3, r13, what2]
  SEXP Rsh_Fir_array_deopt_stack8[5];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack8[4] = Rsh_Fir_reg_what2_;
  Rsh_Fir_deopt(31, 5, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L27_:;
  // what3 = force? what2
  Rsh_Fir_reg_what3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what2_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r18 = dyn ____(l3, r13, what3)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_what3_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(i11, r15, r18)
  // L5(i11, r15, r18)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L5_;

D9_:;
  // deopt 40 [value]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L29_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner485967088_(SEXP CCP, SEXP RHO) {
  // what = ld what
  Rsh_Fir_reg_what = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // what1 = force? what
  Rsh_Fir_reg_what1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what);
  // checkMissing(what1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_what1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return what1
  return Rsh_Fir_reg_what1_;
}
SEXP Rsh_Fir_user_promise_inner485967088_1(SEXP CCP, SEXP RHO) {
  // methodsEnv3 = ld methodsEnv
  Rsh_Fir_reg_methodsEnv3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // methodsEnv4 = force? methodsEnv3
  Rsh_Fir_reg_methodsEnv4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodsEnv3_);
  // checkMissing(methodsEnv4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_methodsEnv4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return methodsEnv4
  return Rsh_Fir_reg_methodsEnv4_;
}
SEXP Rsh_Fir_user_promise_inner485967088_2(SEXP CCP, SEXP RHO) {
  // def = ld def
  Rsh_Fir_reg_def = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // def1 = force? def
  Rsh_Fir_reg_def1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def);
  // checkMissing(def1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_def1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return def1
  return Rsh_Fir_reg_def1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
