#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2232194083_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2232194083_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2232194083
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2232194083_, RHO, CCP);
  // st `[.table` = r
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
SEXP Rsh_Fir_user_function_inner2232194083_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2232194083 dynamic dispatch ([x, i, j, `...`, drop])

  return Rsh_Fir_user_version_inner2232194083_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2232194083_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2232194083 version 0 (*, *, *, dots, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2232194083/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_drop;  // drop
  SEXP Rsh_Fir_reg_drop_isMissing;  // drop_isMissing
  SEXP Rsh_Fir_reg_drop_orDefault;  // drop_orDefault
  SEXP Rsh_Fir_reg_NextMethod;  // NextMethod
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
  SEXP Rsh_Fir_reg_ret;  // ret
  SEXP Rsh_Fir_reg_ret1_;  // ret1
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_ldr;  // ldr
  SEXP Rsh_Fir_reg_ldr1_;  // ldr1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ldr2_;  // ldr2
  SEXP Rsh_Fir_reg_ldr3_;  // ldr3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_ldr6_;  // ldr6
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_ldr9_;  // ldr9
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_dim1_;  // dim1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_ret2_;  // ret2
  SEXP Rsh_Fir_reg_ret3_;  // ret3

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_i = PARAMS[1];
  Rsh_Fir_reg_j = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];
  Rsh_Fir_reg_drop = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // st j = j
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_j, RHO);
  (void)(Rsh_Fir_reg_j);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // drop_isMissing = missing.0(drop)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_drop;
  Rsh_Fir_reg_drop_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if drop_isMissing then L0(TRUE) else L0(drop)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_drop_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_drop_orDefault = Rsh_const(CCP, 5);
    goto L0_;
  } else {
  // L0(drop)
    Rsh_Fir_reg_drop_orDefault = Rsh_Fir_reg_drop;
    goto L0_;
  }

L0_:;
  // st drop = drop_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_drop_orDefault, RHO);
  (void)(Rsh_Fir_reg_drop_orDefault);
  // NextMethod = ldf NextMethod
  Rsh_Fir_reg_NextMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L1_:;
  // st ldr = r2
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // ldr = ld ldr
  Rsh_Fir_reg_ldr = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L2_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r6 = dyn length(r4)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L3_:;
  // c12 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c12 then L28() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L28()
    goto L28_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r14 = `==`(ldr6, r9)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_ldr6_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c10 = `||`(c5, c9)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L3(c10)
  // L3(c10)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c10_;
  goto L3_;

L5_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r13 = dyn length1(r11)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // ret2 = ld ret
  Rsh_Fir_reg_ret2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L32() else D12()
  // L32()
  goto L32_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r = dyn NextMethod()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NextMethod, 0, NULL, NULL, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // st ret = r
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // sym1 = ldf dim
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf dim in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L11_:;
  // r1 = dyn base(<lang dim(ret)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r1)
  // L1(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L1_;

L12_:;
  // ret = ld ret
  Rsh_Fir_reg_ret = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L13_:;
  // r3 = dyn base1(<sym ret>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 8 [ret]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_ret;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // ret1 = force? ret
  Rsh_Fir_reg_ret1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret);
  // checkMissing(ret1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_ret1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r5 = dyn dim(ret1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_ret1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

D4_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r6_;
  goto L1_;

D5_:;
  // deopt 15 [ldr]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_ldr;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // ldr1 = force? ldr
  Rsh_Fir_reg_ldr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldr);
  // checkMissing(ldr1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ldr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r7 = `>`(ldr1, 1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_ldr1_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c then L3(c) else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L3_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // ldr2 = ld ldr
  Rsh_Fir_reg_ldr2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 19 [c, ldr2]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_ldr2_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // ldr3 = force? ldr2
  Rsh_Fir_reg_ldr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldr2_);
  // checkMissing(ldr3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ldr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // sym3 = ldf dim
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf dim in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard3 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L21_:;
  // r8 = dyn base2(<lang dim(x)>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(c, ldr3, r8)
  // L4(c, ldr3, r8)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_ldr6_ = Rsh_Fir_reg_ldr3_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L4_;

L22_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

L23_:;
  // r10 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(c, ldr3, r10)
  // L5(c, ldr3, r10)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_ldr9_ = Rsh_Fir_reg_ldr3_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L5_;

D7_:;
  // deopt 24 [c, ldr3, x1]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_ldr3_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(24, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L24_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // dim1 = ldf dim in base
  Rsh_Fir_reg_dim1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r12 = dyn dim1(x2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

D8_:;
  // deopt 27 [c, ldr3, r12]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_ldr3_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L5(c, ldr3, r12)
  // L5(c, ldr3, r12)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_ldr9_ = Rsh_Fir_reg_ldr3_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L5_;

D9_:;
  // deopt 29 [c8, ldr9, r13]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_ldr9_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L4(c8, ldr9, r13)
  // L4(c8, ldr9, r13)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_ldr6_ = Rsh_Fir_reg_ldr9_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r13_;
  goto L4_;

L28_:;
  // l = ld ret
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

D10_:;
  // deopt 35 ["table", l, "table"]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_const(CCP, 16);
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L29_:;
  // r15 = dyn class__(l, NULL, "table")
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D11_:;
  // deopt 37 ["table", r15]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L30_:;
  // st ret = r15
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L7()
  // L7()
  goto L7_;

D12_:;
  // deopt 41 [ret2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_ret2_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // ret3 = force? ret2
  Rsh_Fir_reg_ret3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret2_);
  // checkMissing(ret3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_ret3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ret3
  return Rsh_Fir_reg_ret3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
