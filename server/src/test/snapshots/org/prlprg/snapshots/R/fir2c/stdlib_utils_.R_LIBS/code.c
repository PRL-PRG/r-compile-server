#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3381476134_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3381476134_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3381476134_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3381476134_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3381476134_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3381476134_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3381476134_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner3381476134
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3381476134_, RHO, CCP);
  // st `.R_LIBS` = r
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
SEXP Rsh_Fir_user_function_inner3381476134_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3381476134 dynamic dispatch ([libp])

  return Rsh_Fir_user_version_inner3381476134_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3381476134_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3381476134 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3381476134/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_libp;  // libp
  SEXP Rsh_Fir_reg_libp_isMissing;  // libp_isMissing
  SEXP Rsh_Fir_reg_libp_orDefault;  // libp_orDefault
  SEXP Rsh_Fir_reg__libPaths;  // _libPaths
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_libp1_;  // libp1
  SEXP Rsh_Fir_reg_libp2_;  // libp2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_libp4_;  // libp4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_libp5_;  // libp5
  SEXP Rsh_Fir_reg_libp6_;  // libp6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg__Library;  // _Library
  SEXP Rsh_Fir_reg__Library1_;  // _Library1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_libp7_;  // libp7
  SEXP Rsh_Fir_reg_libp8_;  // libp8
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_libp9_;  // libp9
  SEXP Rsh_Fir_reg_libp10_;  // libp10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r13_;  // r13

  // Bind parameters
  Rsh_Fir_reg_libp = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // libp_isMissing = missing.0(libp)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_libp;
  Rsh_Fir_reg_libp_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if libp_isMissing then L0() else L1(libp)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_libp_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(libp)
    Rsh_Fir_reg_libp_orDefault = Rsh_Fir_reg_libp;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   _libPaths = ldf `.libPaths`;
  //   r = dyn _libPaths();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3381476134_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_libp_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st libp = libp_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_libp_orDefault, RHO);
  (void)(Rsh_Fir_reg_libp_orDefault);
  // libp1 = ld libp
  Rsh_Fir_reg_libp1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L2_:;
  // st libp = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L3_:;
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L15() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L15()
    goto L15_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ""
  return Rsh_const(CCP, 4);

D0_:;
  // deopt 0 [libp1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_libp1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // libp2 = force? libp1
  Rsh_Fir_reg_libp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_libp1_);
  // checkMissing(libp2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_libp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c = `is.object`(libp2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_libp2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L6() else L7(libp2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L7(libp2)
    Rsh_Fir_reg_libp4_ = Rsh_Fir_reg_libp2_;
    goto L7_;
  }

L6_:;
  // dr = tryDispatchBuiltin.1("[", libp2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_libp2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if dc then L8() else L7(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr)
    Rsh_Fir_reg_libp4_ = Rsh_Fir_reg_dr;
    goto L7_;
  }

L7_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L8_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D1_:;
  // deopt 3 [libp4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_libp4_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   libp5 = ld libp;
  //   libp6 = force? libp5;
  //   checkMissing(libp6);
  //   return libp6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3381476134_1, CCP, RHO);
  // p2 = prom<V +>{
  //   _Library = ld `.Library`;
  //   _Library1 = force? _Library;
  //   checkMissing(_Library1);
  //   return _Library1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3381476134_2, CCP, RHO);
  // r4 = dyn _in_(p1, p2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 6 [libp4, r4]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_libp4_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // r5 = `!`(r4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r6 = dyn __(libp4, r5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_libp4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L2_;

L11_:;
  // libp7 = ld libp
  Rsh_Fir_reg_libp7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

L12_:;
  // r7 = dyn base(<sym libp>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D3_:;
  // deopt 12 [libp7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_libp7_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // libp8 = force? libp7
  Rsh_Fir_reg_libp8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_libp7_);
  // checkMissing(libp8)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_libp8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r9 = dyn length(libp8)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_libp8_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 15 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L3_;

L15_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p3 = prom<V +>{
  //   libp9 = ld libp;
  //   libp10 = force? libp9;
  //   checkMissing(libp10);
  //   return libp10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3381476134_3, CCP, RHO);
  // p4 = prom<V +>{
  //   _Platform = ld `.Platform`;
  //   _Platform1 = force? _Platform;
  //   checkMissing(_Platform1);
  //   c2 = `is.object`(_Platform1);
  //   if c2 then L1() else L2(_Platform1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", _Platform1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(_Platform3):
  //   r11 = `$`(_Platform3, <sym path.sep>);
  //   goto L0(r11);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3381476134_4, CCP, RHO);
  // r13 = dyn paste[, collapse](p3, p4)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 21 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_inner3381476134_(SEXP CCP, SEXP RHO) {
  // _libPaths = ldf `.libPaths`
  Rsh_Fir_reg__libPaths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // r = dyn _libPaths()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__libPaths, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner3381476134_1(SEXP CCP, SEXP RHO) {
  // libp5 = ld libp
  Rsh_Fir_reg_libp5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // libp6 = force? libp5
  Rsh_Fir_reg_libp6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_libp5_);
  // checkMissing(libp6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_libp6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return libp6
  return Rsh_Fir_reg_libp6_;
}
SEXP Rsh_Fir_user_promise_inner3381476134_2(SEXP CCP, SEXP RHO) {
  // _Library = ld `.Library`
  Rsh_Fir_reg__Library = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // _Library1 = force? _Library
  Rsh_Fir_reg__Library1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Library);
  // checkMissing(_Library1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg__Library1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return _Library1
  return Rsh_Fir_reg__Library1_;
}
SEXP Rsh_Fir_user_promise_inner3381476134_3(SEXP CCP, SEXP RHO) {
  // libp9 = ld libp
  Rsh_Fir_reg_libp9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // libp10 = force? libp9
  Rsh_Fir_reg_libp10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_libp9_);
  // checkMissing(libp10)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_libp10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return libp10
  return Rsh_Fir_reg_libp10_;
}
SEXP Rsh_Fir_user_promise_inner3381476134_4(SEXP CCP, SEXP RHO) {
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r11 = `$`(_Platform3, <sym path.sep>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
