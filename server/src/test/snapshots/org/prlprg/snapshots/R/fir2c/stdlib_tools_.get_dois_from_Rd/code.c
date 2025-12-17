#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2501545716
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st `.get_dois_from_Rd` = r
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
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_getDynamicFlags;  // getDynamicFlags
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_recurse;  // recurse
  SEXP Rsh_Fir_reg_recurse1_;  // recurse1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dois;  // dois
  SEXP Rsh_Fir_reg_dois1_;  // dois1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // c1 = `as.logical`(dx1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c1 then L10() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L10()
    goto L10_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // dois = ld dois
  Rsh_Fir_reg_dois = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // r = dyn character()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // st dois = r
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // r1 = clos inner3708401697
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // st recurse = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // getDynamicFlags = ldf getDynamicFlags
  Rsh_Fir_reg_getDynamicFlags = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // r3 = dyn getDynamicFlags(p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getDynamicFlags, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 10 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // c = `is.object`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L7() else L8(r3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L7()
    goto L7_;
  } else {
  // L8(r3)
    Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r3_;
    goto L8_;
  }

L7_:;
  // dr = tryDispatchBuiltin.1("[", r3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if dc then L9() else L8(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr)
    Rsh_Fir_reg_r5_ = Rsh_Fir_reg_dr;
    goto L8_;
  }

L8_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r6 = dyn __(r5, "\\Sexpr")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L0_;

L9_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L10_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // p2 = prom<V +>{
  //   recurse = ld recurse;
  //   recurse1 = force? recurse;
  //   checkMissing(recurse1);
  //   return recurse1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // r9 = dyn lapply(p1, p2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D5_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L2()
  // L2()
  goto L2_;

D6_:;
  // deopt 21 [dois]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_dois;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // dois1 = force? dois
  Rsh_Fir_reg_dois1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dois);
  // checkMissing(dois1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dois1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dois1
  return Rsh_Fir_reg_dois1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // recurse = ld recurse
  Rsh_Fir_reg_recurse = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // recurse1 = force? recurse
  Rsh_Fir_reg_recurse1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recurse);
  // checkMissing(recurse1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_recurse1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return recurse1
  return Rsh_Fir_reg_recurse1_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_e;  // e
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_e4_;  // e4
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_dois1;  // dois
  SEXP Rsh_Fir_reg_dois1_1;  // dois1
  SEXP Rsh_Fir_reg_e5_;  // e5
  SEXP Rsh_Fir_reg_e6_;  // e6
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_e8_;  // e8
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_e9_;  // e9
  SEXP Rsh_Fir_reg_e10_;  // e10
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_lapply1;  // lapply
  SEXP Rsh_Fir_reg_e11_;  // e11
  SEXP Rsh_Fir_reg_e12_;  // e12
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_recurse1;  // recurse
  SEXP Rsh_Fir_reg_recurse1_1;  // recurse1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r21_;  // r21

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L17() else L2(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L17()
    goto L17_;
  } else {
  // L2(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1;
    goto L2_;
  }

L1_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r5 = dyn identical(r3, "USERMACRO", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args14[9];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args14[5] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args14[6] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args14[7] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args14[8] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[9];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_array_arg_names3[7] = R_MissingArg;
  Rsh_Fir_array_arg_names3[8] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L2_:;
  // c12 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c12 then L26() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L26()
    goto L26_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // c9 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c10 = `&&`(c5, c9)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L2(c10)
  // L2(c10)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c10_;
  goto L2_;

L4_:;
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r11 = dyn identical1(r9, "\\doi", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args18[9];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[4] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[5] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[6] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args18[7] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[8] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[9];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_array_arg_names4[6] = R_MissingArg;
  Rsh_Fir_array_arg_names4[7] = R_MissingArg;
  Rsh_Fir_array_arg_names4[8] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L5_:;
  // sym5 = ldf `is.list`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf `is.list` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard5 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L6_:;
  // sst dois = r13
  Rsh_Fir_super_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;

L7_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r15 = dyn c14(dois1, dx1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dois1_1;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

L8_:;
  // c15 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c15 then L40() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L40()
    goto L40_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 18);

L10_:;
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L11_:;
  // r = dyn base(<lang attr(e, "Rd_tag")>, "USERMACRO")
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

L12_:;
  // e1 = ld e
  Rsh_Fir_reg_e1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L13_:;
  // r2 = dyn base1(<sym e>, "Rd_tag")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 4 [e1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_e1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // e2 = force? e1
  Rsh_Fir_reg_e2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e1_);
  // checkMissing(e2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_e2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r4 = dyn attr(e2, "Rd_tag")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_e2_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_;
  goto L1_;

D2_:;
  // deopt 18 [r5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r5_1;
  goto L0_;

L17_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard3 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L19_:;
  // r6 = dyn base2(<lang attr(e, "macro")>, "\\doi")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(c, r6)
  // L3(c, r6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_1;
  goto L3_;

L20_:;
  // e3 = ld e
  Rsh_Fir_reg_e3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L22() else D3()
  // L22()
  goto L22_;

L21_:;
  // r8 = dyn base3(<sym e>, "macro")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(c, r8)
  // L4(c, r8)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L4_;

D3_:;
  // deopt 23 [c, e3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_e3_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // e4 = force? e3
  Rsh_Fir_reg_e4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e3_);
  // checkMissing(e4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_e4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r10 = dyn attr1(e4, "macro")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_e4_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

D4_:;
  // deopt 27 [c, r10]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L4(c, r10)
  // L4(c, r10)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_;
  goto L4_;

D5_:;
  // deopt 37 [c8, r11]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L3(c8, r11)
  // L3(c8, r11)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r11_;
  goto L3_;

L26_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard4 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // dois = ld dois
  Rsh_Fir_reg_dois1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L28_:;
  // r12 = dyn base4(<sym dois>, <lang `[`(e, 2)>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L6_;

D6_:;
  // deopt 41 [dois]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_dois1;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L29_:;
  // dois1 = force? dois
  Rsh_Fir_reg_dois1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_dois1);
  // checkMissing(dois1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dois1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // e5 = ld e
  Rsh_Fir_reg_e5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 43 [e5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L30_:;
  // e6 = force? e5
  Rsh_Fir_reg_e6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e5_);
  // checkMissing(e6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_e6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(e6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_e6_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c13 then L31() else L32(e6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L31()
    goto L31_;
  } else {
  // L32(e6)
    Rsh_Fir_reg_e8_ = Rsh_Fir_reg_e6_;
    goto L32_;
  }

L31_:;
  // dr = tryDispatchBuiltin.1("[", e6)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_e6_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L33() else L32(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L33()
    goto L33_;
  } else {
  // L32(dr)
    Rsh_Fir_reg_e8_ = Rsh_Fir_reg_dr1;
    goto L32_;
  }

L32_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r14 = dyn __(e8, 2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_e8_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r14_;
  goto L7_;

L33_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L7(dx)
  // L7(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L7_;

D8_:;
  // deopt 49 [r15]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L6(r15)
  // L6(r15)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L6_;

L36_:;
  // e9 = ld e
  Rsh_Fir_reg_e9_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

L37_:;
  // r16 = dyn base5(<sym e>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L8_;

D9_:;
  // deopt 54 [e9]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_e9_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L38_:;
  // e10 = force? e9
  Rsh_Fir_reg_e10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e9_);
  // checkMissing(e10)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_e10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r18 = dyn is_list(e10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_e10_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

D10_:;
  // deopt 57 [r18]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L8_;

L40_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

D11_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p = prom<V +>{
  //   e11 = ld e;
  //   e12 = force? e11;
  //   checkMissing(e12);
  //   return e12;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_, CCP, RHO);
  // p1 = prom<V +>{
  //   recurse = ld recurse;
  //   recurse1 = force? recurse;
  //   checkMissing(recurse1);
  //   return recurse1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_1, CCP, RHO);
  // r21 = dyn lapply(p, p1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply1, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

D12_:;
  // deopt 62 [r21]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L42_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO) {
  // e11 = ld e
  Rsh_Fir_reg_e11_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // e12 = force? e11
  Rsh_Fir_reg_e12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e11_);
  // checkMissing(e12)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_e12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return e12
  return Rsh_Fir_reg_e12_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO) {
  // recurse = ld recurse
  Rsh_Fir_reg_recurse1 = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // recurse1 = force? recurse
  Rsh_Fir_reg_recurse1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_recurse1);
  // checkMissing(recurse1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_recurse1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return recurse1
  return Rsh_Fir_reg_recurse1_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
