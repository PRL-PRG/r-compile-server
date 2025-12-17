#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2050808161_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2050808161_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2050808161
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2050808161_, RHO, CCP);
  // st withCallingHandlers = r
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
SEXP Rsh_Fir_user_function_inner2050808161_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2050808161 dynamic dispatch ([expr, `...`])

  return Rsh_Fir_user_version_inner2050808161_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2050808161_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2050808161 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2050808161/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_expr;  // expr
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_handlers;  // handlers
  SEXP Rsh_Fir_reg_handlers1_;  // handlers1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_classes;  // classes
  SEXP Rsh_Fir_reg_classes1_;  // classes1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_handlers2_;  // handlers2
  SEXP Rsh_Fir_reg_handlers3_;  // handlers3
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_classes2_;  // classes2
  SEXP Rsh_Fir_reg_classes3_;  // classes3
  SEXP Rsh_Fir_reg_handlers4_;  // handlers4
  SEXP Rsh_Fir_reg_handlers5_;  // handlers5
  SEXP Rsh_Fir_reg_parentenv;  // parentenv
  SEXP Rsh_Fir_reg_parentenv1_;  // parentenv1
  SEXP Rsh_Fir_reg__addCondHands;  // _addCondHands
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_expr1_;  // expr1
  SEXP Rsh_Fir_reg_expr2_;  // expr2

  // Bind parameters
  Rsh_Fir_reg_expr = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st expr = expr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_expr, RHO);
  (void)(Rsh_Fir_reg_expr);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // st handlers = r1
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
  // st classes = r4
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L2_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard3 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L3_:;
  // r16 = `!=`(r13, r14)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r16)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L25() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L25()
    goto L25_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L6_:;
  // expr1 = ld expr
  Rsh_Fir_reg_expr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L35() else D16()
  // L35()
  goto L35_;

L7_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r2 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L11_:;
  // handlers = ld handlers
  Rsh_Fir_reg_handlers = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r3 = dyn base1(<sym handlers>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 8 [handlers]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_handlers;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // handlers1 = force? handlers
  Rsh_Fir_reg_handlers1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_handlers);
  // checkMissing(handlers1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_handlers1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn names(handlers1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_handlers1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r6 = dyn parent_frame()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // st parentenv = r6
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // classes = ld classes
  Rsh_Fir_reg_classes = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L18_:;
  // r7 = dyn base2(<sym classes>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L2_;

D6_:;
  // deopt 19 [classes]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_classes;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // classes1 = force? classes
  Rsh_Fir_reg_classes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes);
  // checkMissing(classes1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_classes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r9 = dyn length(classes1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_classes1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 22 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;

L21_:;
  // handlers2 = ld handlers
  Rsh_Fir_reg_handlers2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

L22_:;
  // r12 = dyn base3(<sym handlers>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r8, r12)
  // L3(r8, r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_;
  goto L3_;

D8_:;
  // deopt 24 [r8, handlers2]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_handlers2_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // handlers3 = force? handlers2
  Rsh_Fir_reg_handlers3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_handlers2_);
  // checkMissing(handlers3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_handlers3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r15 = dyn length1(handlers3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_handlers3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 27 [r8, r15]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L3(r8, r15)
  // L3(r8, r15)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L3_;

L25_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L26() else D10()
  // L26()
  goto L26_;

D10_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // r17 = dyn stop("condition handlers must be specified with a condition class")
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L27() else D11()
  // L27()
  goto L27_;

D11_:;
  // deopt 32 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L5()
  // L5()
  goto L5_;

L29_:;
  // classes2 = ld classes
  Rsh_Fir_reg_classes2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

L30_:;
  // r19 = dyn base4(<lang .addCondHands(classes, handlers, parentenv, NULL, TRUE)>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

D12_:;
  // deopt 37 [classes2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_classes2_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L31_:;
  // classes3 = force? classes2
  Rsh_Fir_reg_classes3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes2_);
  // checkMissing(classes3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_classes3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // handlers4 = ld handlers
  Rsh_Fir_reg_handlers4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

D13_:;
  // deopt 39 [handlers4]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_handlers4_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L32_:;
  // handlers5 = force? handlers4
  Rsh_Fir_reg_handlers5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_handlers4_);
  // checkMissing(handlers5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_handlers5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // parentenv = ld parentenv
  Rsh_Fir_reg_parentenv = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L33() else D14()
  // L33()
  goto L33_;

D14_:;
  // deopt 41 [parentenv]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_parentenv;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L33_:;
  // parentenv1 = force? parentenv
  Rsh_Fir_reg_parentenv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parentenv);
  // checkMissing(parentenv1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_parentenv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // _addCondHands = ldf `.addCondHands` in base
  Rsh_Fir_reg__addCondHands = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r21 = dyn _addCondHands(classes3, handlers5, parentenv1, NULL, TRUE)
  SEXP Rsh_Fir_array_args23[5];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_classes3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_handlers5_;
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_parentenv1_;
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args23[4] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[5];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__addCondHands, 5, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L34() else D15()
  // L34()
  goto L34_;

D15_:;
  // deopt 46 [r21]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L6()
  // L6()
  goto L6_;

D16_:;
  // deopt 47 [expr1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_expr1_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L35_:;
  // expr2 = force? expr1
  Rsh_Fir_reg_expr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr1_);
  // checkMissing(expr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_expr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return expr2
  return Rsh_Fir_reg_expr2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
