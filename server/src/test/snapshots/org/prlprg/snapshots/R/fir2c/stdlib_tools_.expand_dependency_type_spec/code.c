#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // st `.expand_dependency_type_spec` = r
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
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_identical2_;  // identical2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L13() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L3_:;
  // c2 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c2 then L22() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L22()
    goto L22_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard4 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

L6_:;
  // c4 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c4 then L31() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L31()
    goto L31_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;

L9_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<sym x>, "strong")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn identical(x2, "strong", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args8[9];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args8[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[8] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[9];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 13 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L13_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r5 = dyn c1("Depends", "Imports", "LinkingTo")
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L15_:;
  // r3 = dyn base1("Depends", "Imports", "LinkingTo")
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 20 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

L18_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L19_:;
  // r6 = dyn base2(<sym x>, "most")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D3_:;
  // deopt 23 [x3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r8 = dyn identical1(x4, "most", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args14[9];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args14[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args14[6] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args14[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args14[8] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names5[9];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

D4_:;
  // deopt 34 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;

L22_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard3 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r11 = dyn c3("Depends", "Imports", "LinkingTo", "Suggests")
  SEXP Rsh_Fir_array_args16[4];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 4, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

L24_:;
  // r9 = dyn base3("Depends", "Imports", "LinkingTo", "Suggests")
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 4, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

D5_:;
  // deopt 42 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L5_;

L27_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L28_:;
  // r12 = dyn base4(<sym x>, "all")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L6_;

D6_:;
  // deopt 45 [x5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r14 = dyn identical2(x6, "all", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args20[9];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args20[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args20[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args20[6] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args20[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args20[8] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names9[9];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_array_arg_names9[6] = R_MissingArg;
  Rsh_Fir_array_arg_names9[7] = R_MissingArg;
  Rsh_Fir_array_arg_names9[8] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 56 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L6_;

L31_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard5 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L32_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r17 = dyn c5("Depends", "Imports", "LinkingTo", "Suggests", "Enhances")
  SEXP Rsh_Fir_array_args22[5];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args22[4] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names10[5];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 5, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

L33_:;
  // r15 = dyn base5("Depends", "Imports", "LinkingTo", "Suggests", "Enhances")
  SEXP Rsh_Fir_array_args23[5];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args23[4] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names11[5];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 5, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L8_;

D8_:;
  // deopt 65 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L8_;

D9_:;
  // deopt 66 [x7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
