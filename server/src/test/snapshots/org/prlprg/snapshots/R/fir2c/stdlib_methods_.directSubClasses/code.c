#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3581667309_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3581667309_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3581667309_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3581667309_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3059533056_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3059533056_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3581667309
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3581667309_, RHO, CCP);
  // st `.directSubClasses` = r
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
SEXP Rsh_Fir_user_function_inner3581667309_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3581667309 dynamic dispatch ([ClassDef])

  return Rsh_Fir_user_version_inner3581667309_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3581667309_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3581667309 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3581667309/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ClassDef;  // ClassDef
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sc;  // sc
  SEXP Rsh_Fir_reg_sc1_;  // sc1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_sc2_;  // sc2
  SEXP Rsh_Fir_reg_sc3_;  // sc3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r13_;  // r13

  // Bind parameters
  Rsh_Fir_reg_ClassDef = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ClassDef = ClassDef
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ClassDef, RHO);
  (void)(Rsh_Fir_reg_ClassDef);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L7() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L7()
    goto L7_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 3);

L2_:;
  // c1 = `is.object`(r5)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L12() else L13(r5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L13(r5)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r5_;
    goto L13_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L4_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn __(<sym ClassDef>, <sym subclasses>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // st sc = r2
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn length(r2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<lang `<-`(sc, `@`(ClassDef, subclasses))>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L7_:;
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // sc = ld sc
  Rsh_Fir_reg_sc = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L9_:;
  // r4 = dyn base1(<sym sc>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D1_:;
  // deopt 9 [sc]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_sc;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // sc1 = force? sc
  Rsh_Fir_reg_sc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sc);
  // checkMissing(sc1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r6 = dyn names(sc1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sc1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 12 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L12_:;
  // dr = tryDispatchBuiltin.1("[", r5)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc then L14() else L13(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L14()
    goto L14_;
  } else {
  // L13(dr)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_dr;
    goto L13_;
  }

L13_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L14_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D3_:;
  // deopt 14 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   sc2 = ld sc;
  //   sc3 = force? sc2;
  //   checkMissing(sc3);
  //   return sc3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3581667309_, CCP, RHO);
  // p1 = prom<V +>{
  //   r10 = clos inner3059533056;
  //   return r10;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3581667309_1, CCP, RHO);
  // r12 = dyn vapply(p, p1, NA_LGL)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 18 [r8, r12]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r13 = dyn __1(r8, r12)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner3581667309_(SEXP CCP, SEXP RHO) {
  // sc2 = ld sc
  Rsh_Fir_reg_sc2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // sc3 = force? sc2
  Rsh_Fir_reg_sc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sc2_);
  // checkMissing(sc3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return sc3
  return Rsh_Fir_reg_sc3_;
}
SEXP Rsh_Fir_user_promise_inner3581667309_1(SEXP CCP, SEXP RHO) {
  // r10 = clos inner3059533056
  Rsh_Fir_reg_r10_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3059533056_, RHO, CCP);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_function_inner3059533056_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3059533056 dynamic dispatch ([cc])

  return Rsh_Fir_user_version_inner3059533056_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3059533056_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3059533056 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3059533056/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_cc;  // cc
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1

  // Bind parameters
  Rsh_Fir_reg_cc = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st cc = cc
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_cc, RHO);
  (void)(Rsh_Fir_reg_cc);
  // __ = ldf `@` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r = dyn __(<sym cc>, <sym distance>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // r1 = `==`(r, 1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
