#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1468096329_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1468096329_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1468096329
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1468096329_, RHO, CCP);
  // st getDynamicFlags = r
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
SEXP Rsh_Fir_user_function_inner1468096329_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1468096329 dynamic dispatch ([block])

  return Rsh_Fir_user_version_inner1468096329_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1468096329_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1468096329 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1468096329/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_block;  // block
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_block1_;  // block1
  SEXP Rsh_Fir_reg_block2_;  // block2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_flag;  // flag
  SEXP Rsh_Fir_reg_flag1_;  // flag1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_flag2_;  // flag2
  SEXP Rsh_Fir_reg_flag3_;  // flag3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_flag4_;  // flag4
  SEXP Rsh_Fir_reg_flag5_;  // flag5
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_flag6_;  // flag6
  SEXP Rsh_Fir_reg_flag7_;  // flag7
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_flag8_;  // flag8
  SEXP Rsh_Fir_reg_flag9_;  // flag9
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_flag10_;  // flag10
  SEXP Rsh_Fir_reg_flag11_;  // flag11
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r24_;  // r24

  // Bind parameters
  Rsh_Fir_reg_block = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st block = block
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_block, RHO);
  (void)(Rsh_Fir_reg_block);
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // st flag = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L1_:;
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L12() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;

L5_:;
  // block1 = ld block
  Rsh_Fir_reg_block1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<sym block>, "dynamicFlag")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [block1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_block1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // block2 = force? block1
  Rsh_Fir_reg_block2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block1_);
  // checkMissing(block2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_block2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn attr(block2, "dynamicFlag")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_block2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L9_:;
  // flag = ld flag
  Rsh_Fir_reg_flag = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // r3 = dyn base1(<sym flag>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [flag]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_flag;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // flag1 = force? flag
  Rsh_Fir_reg_flag1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flag);
  // checkMissing(flag1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_flag1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `==`(flag1, NULL)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_flag1_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c;
  goto L1_;

L12_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard2 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r7 = dyn c2(FALSE, FALSE, FALSE, FALSE, FALSE)
  SEXP Rsh_Fir_array_args11[5];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args11[4] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[5];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 5, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L14_:;
  // r5 = dyn base2[`#ifdef`, `\\Sexpr`, build, install, render](FALSE, FALSE, FALSE, FALSE, FALSE)
  SEXP Rsh_Fir_array_args12[5];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args12[4] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[5];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names4[4] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 5, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D3_:;
  // deopt 25 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

L17_:;
  // flag2 = ld flag
  Rsh_Fir_reg_flag2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L18_:;
  // r8 = dyn base3[`#ifdef`, `\\Sexpr`, build, install, render](<lang `>`(`%%`(flag, 2), 0)>, <lang `>`(`%%`(`(`(`%/%`(flag, 2)), 2), 0)>, <lang `>`(`%%`(`(`(`%/%`(flag, 4)), 2), 0)>, <lang `>`(`%%`(`(`(`%/%`(flag, 8)), 2), 0)>, <lang `>`(`%%`(`(`(`%/%`(flag, 16)), 2), 0)>)
  SEXP Rsh_Fir_array_args13[5];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args13[4] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[5];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names5[3] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names5[4] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 5, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L4_;

D4_:;
  // deopt 29 [flag2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_flag2_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // flag3 = force? flag2
  Rsh_Fir_reg_flag3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flag2_);
  // checkMissing(flag3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_flag3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // __ = ldf `%%` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r10 = dyn __(flag3, 2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_flag3_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

D5_:;
  // deopt 33 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // r11 = `>`(r10, 0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // flag4 = ld flag
  Rsh_Fir_reg_flag4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

D6_:;
  // deopt 39 [flag4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_flag4_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // flag5 = force? flag4
  Rsh_Fir_reg_flag5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flag4_);
  // checkMissing(flag5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_flag5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%/%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r12 = dyn ___(flag5, 2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_flag5_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D7_:;
  // deopt 43 [r12]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // __1 = ldf `%%` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r13 = dyn __1(r12, 2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 46 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L23_:;
  // r14 = `>`(r13, 0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // flag6 = ld flag
  Rsh_Fir_reg_flag6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 52 [flag6]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_flag6_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // flag7 = force? flag6
  Rsh_Fir_reg_flag7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flag6_);
  // checkMissing(flag7)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_flag7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // ___1 = ldf `%/%` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r15 = dyn ___1(flag7, 4)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_flag7_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 56 [r15]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L25_:;
  // __2 = ldf `%%` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r16 = dyn __2(r15, 2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

D11_:;
  // deopt 59 [r16]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L26_:;
  // r17 = `>`(r16, 0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // flag8 = ld flag
  Rsh_Fir_reg_flag8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L27() else D12()
  // L27()
  goto L27_;

D12_:;
  // deopt 65 [flag8]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_flag8_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L27_:;
  // flag9 = force? flag8
  Rsh_Fir_reg_flag9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flag8_);
  // checkMissing(flag9)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_flag9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // ___2 = ldf `%/%` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r18 = dyn ___2(flag9, 8)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_flag9_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L28() else D13()
  // L28()
  goto L28_;

D13_:;
  // deopt 69 [r18]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L28_:;
  // __3 = ldf `%%` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r19 = dyn __3(r18, 2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L29() else D14()
  // L29()
  goto L29_;

D14_:;
  // deopt 72 [r19]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L29_:;
  // r20 = `>`(r19, 0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // flag10 = ld flag
  Rsh_Fir_reg_flag10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L30() else D15()
  // L30()
  goto L30_;

D15_:;
  // deopt 78 [flag10]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_flag10_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L30_:;
  // flag11 = force? flag10
  Rsh_Fir_reg_flag11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flag10_);
  // checkMissing(flag11)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_flag11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // ___3 = ldf `%/%` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r21 = dyn ___3(flag11, 16)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_flag11_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L31() else D16()
  // L31()
  goto L31_;

D16_:;
  // deopt 82 [r21]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L31_:;
  // __4 = ldf `%%` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r22 = dyn __4(r21, 2)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L32() else D17()
  // L32()
  goto L32_;

D17_:;
  // deopt 85 [r22]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L32_:;
  // r23 = `>`(r22, 0)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r24 = dyn c3(r11, r14, r17, r20, r23)
  SEXP Rsh_Fir_array_args33[5];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args33[3] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args33[4] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names15[5];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 5, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L33() else D18()
  // L33()
  goto L33_;

D18_:;
  // deopt 90 [r24]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L4(r24)
  // L4(r24)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r24_;
  goto L4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
