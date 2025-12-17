#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3702762174_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3702762174_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3702762174_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3702762174_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3702762174_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3702762174_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3702762174_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1121026495_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1121026495_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1121026495_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1121026495_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1121026495_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1121026495_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner3702762174
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3702762174_, RHO, CCP);
  // st `print.by` = r
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
SEXP Rsh_Fir_user_function_inner3702762174_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3702762174 dynamic dispatch ([x, `...`, vsep])

  return Rsh_Fir_user_version_inner3702762174_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3702762174_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3702762174 version 0 (*, dots, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3702762174/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_vsep;  // vsep
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dn;  // dn
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_strrep;  // strrep
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_vsep1_;  // vsep1
  SEXP Rsh_Fir_reg_vsep2_;  // vsep2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r28_;  // r28

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];
  Rsh_Fir_reg_vsep = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st vsep = vsep
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_vsep, RHO);
  (void)(Rsh_Fir_reg_vsep);
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
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
  // st d = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf dimnames
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf dimnames in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
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
  // st dn = r4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L2_:;
  // st dnn = r7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym3 = ldf missing
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf missing in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L3_:;
  // c = `as.logical`(r10)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L21() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r27
  return Rsh_Fir_reg_r27_;

L7_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
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

L9_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn dim(x2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L11_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r3 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [x3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r5 = dyn dimnames(x4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L15_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

L16_:;
  // r6 = dyn base2(<sym dn>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D4_:;
  // deopt 16 [dn]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r8 = dyn names(dn1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D5_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

L19_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r11 = dyn missing(<sym vsep>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L3_;

L20_:;
  // r9 = dyn base3(<sym vsep>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L3_;

L21_:;
  // strrep = ldf strrep
  Rsh_Fir_reg_strrep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r12 = dyn getOption("width");
  //   r13 = `*`(0.75, r12);
  //   return r13;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3702762174_, CCP, RHO);
  // r15 = dyn strrep("-", p)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strrep, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

D7_:;
  // deopt 28 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // st vsep = r15
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L5()
  // L5()
  goto L5_;

D8_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p1 = prom<V +>{
  //   sym4 = ldf seq_along;
  //   base4 = ldf seq_along in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   r19 = seq_along(x6);
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base4(<sym x>);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3702762174_1, CCP, RHO);
  // p2 = prom<V +>{
  //   r21 = clos inner1121026495;
  //   return r21;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3702762174_2, CCP, RHO);
  // p3 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3702762174_3, CCP, RHO);
  // p4 = prom<V +>{
  //   vsep1 = ld vsep;
  //   vsep2 = force? vsep1;
  //   checkMissing(vsep2);
  //   return vsep2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3702762174_4, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r25 = dyn lapply[X, FUN, , , `...`](p1, p2, p3, p4, ddd1)
  SEXP Rsh_Fir_array_args25[5];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args25[3] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args25[4] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names11[5];
  Rsh_Fir_array_arg_names11[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 5, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

D9_:;
  // deopt 41 [r25]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // sym5 = ldf invisible
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf invisible in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard5 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L28_:;
  // r26 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L6(r26)
  // L6(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L6_;

D10_:;
  // deopt 44 [x9]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r28 = dyn invisible(x10)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D11_:;
  // deopt 47 [r28]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L6(r28)
  // L6(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner3702762174_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r12 = dyn getOption("width")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names8, CCP, RHO);
  // r13 = `*`(0.75, r12)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_inner3702762174_1(SEXP CCP, SEXP RHO) {
  // sym4 = ldf seq_along
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base4 = ldf seq_along in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r19 = seq_along(x6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3702762174_2(SEXP CCP, SEXP RHO) {
  // r21 = clos inner1121026495
  Rsh_Fir_reg_r21_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1121026495_, RHO, CCP);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_inner3702762174_3(SEXP CCP, SEXP RHO) {
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner3702762174_4(SEXP CCP, SEXP RHO) {
  // vsep1 = ld vsep
  Rsh_Fir_reg_vsep1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // vsep2 = force? vsep1
  Rsh_Fir_reg_vsep2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vsep1_);
  // checkMissing(vsep2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_vsep2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return vsep2
  return Rsh_Fir_reg_vsep2_;
}
SEXP Rsh_Fir_user_function_inner1121026495_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1121026495 dynamic dispatch ([i, x, vsep, `...`])

  return Rsh_Fir_user_version_inner1121026495_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1121026495_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1121026495 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1121026495/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_vsep1;  // vsep
  SEXP Rsh_Fir_reg_ddd1;  // ddd
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_vsep1_1;  // vsep1
  SEXP Rsh_Fir_reg_vsep2_1;  // vsep2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_vsep3_;  // vsep3
  SEXP Rsh_Fir_reg_vsep4_;  // vsep4
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_dn1;  // dn
  SEXP Rsh_Fir_reg_dn1_1;  // dn1
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_ii;  // ii
  SEXP Rsh_Fir_reg_ii1_;  // ii1
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_ii2_;  // ii2
  SEXP Rsh_Fir_reg_ii3_;  // ii3
  SEXP Rsh_Fir_reg_d4_;  // d4
  SEXP Rsh_Fir_reg_d5_;  // d5
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_d7_;  // d7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_cat1_;  // cat1
  SEXP Rsh_Fir_reg_dnn;  // dnn
  SEXP Rsh_Fir_reg_dnn1_;  // dnn1
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_dnn3_;  // dnn3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_dn2_;  // dn2
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_dn5_;  // dn5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_j7_;  // j7
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_iii;  // iii
  SEXP Rsh_Fir_reg_iii1_;  // iii1
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_print;  // print
  SEXP Rsh_Fir_reg_x2_1;  // x2
  SEXP Rsh_Fir_reg_x3_1;  // x3
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_x5_1;  // x5
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p3_1;  // p3
  SEXP Rsh_Fir_reg_ddd1_1;  // ddd1
  SEXP Rsh_Fir_reg_r24_;  // r24

  // Bind parameters
  Rsh_Fir_reg_i = PARAMS[0];
  Rsh_Fir_reg_x1 = PARAMS[1];
  Rsh_Fir_reg_vsep1 = PARAMS[2];
  Rsh_Fir_reg_ddd1 = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st vsep = vsep
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_vsep1, RHO);
  (void)(Rsh_Fir_reg_vsep1);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd1, RHO);
  (void)(Rsh_Fir_reg_ddd1);
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L0_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c10 then L15() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L15()
    goto L15_;
  } else {
  // L2()
    goto L2_;
  }

L1_:;
  // r3 = `!`(r2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c5, c7)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L0(c8)
  // L0(c8)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c8_;
  goto L0_;

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L4_:;
  // s = toForSeq(r9)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // i5 = 0
  Rsh_Fir_reg_i5_ = Rsh_const(CCP, 22);
  // goto L5(i5)
  // L5(i5)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i5_;
  goto L5_;

L5_:;
  // i7 = `+`.1(i6, 1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_i7_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // c11 = `<`.1(l, i7)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if c11 then L23() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L23()
    goto L23_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // __1 = ldf `%%` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r12 = dyn __1(ii1, dx1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ii1_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

L7_:;
  // ___ = ldf `%/%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r15 = dyn ___(ii3, dx3)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_ii3_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L37() else D13()
  // L37()
  goto L37_;

L8_:;
  // x1 = `[[`(s, i7, NULL, TRUE)
  SEXP Rsh_Fir_array_args40[4];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_x1_1 = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // st j = x1
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_x1_1, RHO);
  (void)(Rsh_Fir_reg_x1_1);
  // ii = ld ii
  Rsh_Fir_reg_ii = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

D0_:;
  // deopt 0 [i1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L9_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // r = `!=`(i2, 1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c then L10() else L0(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L10()
    goto L10_;
  } else {
  // L0(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1;
    goto L0_;
  }

L10_:;
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // vsep1 = ld vsep
  Rsh_Fir_reg_vsep1_1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L12_:;
  // r1 = dyn base(<sym vsep>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(c, r1)
  // L1(c, r1)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_1;
  goto L1_;

D1_:;
  // deopt 5 [c, vsep1]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_vsep1_1;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L13_:;
  // vsep2 = force? vsep1
  Rsh_Fir_reg_vsep2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_vsep1_1);
  // checkMissing(vsep2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_vsep2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c6 = `==`(vsep2, NULL)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_vsep2_1;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L1(c, c6)
  // L1(c, c6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_c6_;
  goto L1_;

L15_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   vsep3 = ld vsep;
  //   vsep4 = force? vsep3;
  //   checkMissing(vsep4);
  //   return vsep4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1121026495_, CCP, RHO);
  // r5 = dyn cat(p, "\n")
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

D3_:;
  // deopt 14 [r5]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L3()
  // L3()
  goto L3_;

D4_:;
  // deopt 17 [i3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i3_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L19_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // checkMissing(i4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_i4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r7 = `-`(i4, 1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // st ii = r7
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // sym1 = ldf seq_along
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf seq_along in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // dn = ld dn
  Rsh_Fir_reg_dn1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

L21_:;
  // r8 = dyn base1(<sym dn>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_1;
  goto L4_;

D5_:;
  // deopt 23 [dn]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_dn1;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L22_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn1);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dn1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r10 = seq_along(dn1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dn1_1;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_1;
  goto L4_;

L23_:;
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L40() else D16()
  // L40()
  goto L40_;

D6_:;
  // deopt 27 [i7, ii]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_ii;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L24_:;
  // ii1 = force? ii
  Rsh_Fir_reg_ii1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii);
  // checkMissing(ii1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_ii1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 29 [i7, d]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L25_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(d1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c12 then L26() else L27(i7, d1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L26()
    goto L26_;
  } else {
  // L27(i7, d1)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_d3_ = Rsh_Fir_reg_d1_;
    goto L27_;
  }

L26_:;
  // dr = tryDispatchBuiltin.1("[", d1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc then L28() else L27(i7, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L28()
    goto L28_;
  } else {
  // L27(i7, dr)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_d3_ = Rsh_Fir_reg_dr;
    goto L27_;
  }

L27_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L29() else D8()
  // L29()
  goto L29_;

L28_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L6(i7, dx)
  // L6(i7, dx)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D8_:;
  // deopt 31 [i11, d3, j]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(31, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L29_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r11 = dyn __(d3, j1)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L6(i11, r11)
  // L6(i11, r11)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_1;
  goto L6_;

D9_:;
  // deopt 35 [i13, r12]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L30_:;
  // r13 = `+`(r12, 1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // st iii = r13
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r13_1, RHO);
  (void)(Rsh_Fir_reg_r13_1);
  // ii2 = ld ii
  Rsh_Fir_reg_ii2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

D10_:;
  // deopt 40 [i13, ii2]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_ii2_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L31_:;
  // ii3 = force? ii2
  Rsh_Fir_reg_ii3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii2_);
  // checkMissing(ii3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_ii3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // d4 = ld d
  Rsh_Fir_reg_d4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

D11_:;
  // deopt 42 [i13, d4]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_d4_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L32_:;
  // d5 = force? d4
  Rsh_Fir_reg_d5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_d5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(d5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c13 then L33() else L34(i13, d5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L33()
    goto L33_;
  } else {
  // L34(i13, d5)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_d5_;
    goto L34_;
  }

L33_:;
  // dr2 = tryDispatchBuiltin.1("[", d5)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc1 then L35() else L34(i13, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L35()
    goto L35_;
  } else {
  // L34(i13, dr2)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_dr2_;
    goto L34_;
  }

L34_:;
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L36() else D12()
  // L36()
  goto L36_;

L35_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L7(i13, dx2)
  // L7(i13, dx2)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D12_:;
  // deopt 44 [i15, d7, j2]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(44, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L36_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r14 = dyn __2(d7, j3)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L7(i15, r14)
  // L7(i15, r14)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r14_;
  goto L7_;

D13_:;
  // deopt 48 [i17, r15]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L37_:;
  // st ii = r15
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r15_1, RHO);
  (void)(Rsh_Fir_reg_r15_1);
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L38() else D14()
  // L38()
  goto L38_;

D14_:;
  // deopt 51 [i17]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L38_:;
  // p1 = prom<V +>{
  //   dnn = ld dnn;
  //   dnn1 = force? dnn;
  //   checkMissing(dnn1);
  //   c14 = `is.object`(dnn1);
  //   if c14 then L1() else L2(dnn1);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", dnn1);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(dnn3):
  //   j4 = ld j;
  //   j5 = force? j4;
  //   __3 = ldf `[` in base;
  //   r16 = dyn __3(dnn3, j5);
  //   goto L0(r16);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1121026495_1, CCP, RHO);
  // p2 = prom<V +>{
  //   dn2 = ld dn;
  //   dn3 = force? dn2;
  //   checkMissing(dn3);
  //   c15 = `is.object`(dn3);
  //   if c15 then L2() else L3(dn3);
  // L0(dx7):
  //   c16 = `is.object`(dx7);
  //   if c16 then L5() else L6(dx7);
  // L2():
  //   dr6 = tryDispatchBuiltin.1("[[", dn3);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L4() else L3(dr6);
  // L3(dn5):
  //   j6 = ld j;
  //   j7 = force? j6;
  //   __4 = ldf `[[` in base;
  //   r18 = dyn __4(dn5, j7);
  //   goto L0(r18);
  // L1(dx11):
  //   return dx11;
  // L4():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // L5():
  //   dr8 = tryDispatchBuiltin.1("[", dx7);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L7() else L6(dr8);
  // L6(dx9):
  //   iii = ld iii;
  //   iii1 = force? iii;
  //   __5 = ldf `[` in base;
  //   r19 = dyn __5(dx9, iii1);
  //   goto L1(r19);
  // L7():
  //   dx10 = getTryDispatchBuiltinValue(dr8);
  //   goto L1(dx10);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1121026495_2, CCP, RHO);
  // r21 = dyn cat1[, , , , sep](p1, ": ", p2, "\n", "")
  SEXP Rsh_Fir_array_args88[5];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args88[3] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args88[4] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names24[5];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 5, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L39() else D15()
  // L39()
  goto L39_;

D15_:;
  // deopt 58 [i17, r21]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L5(i17)
  // L5(i17)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i17_;
  goto L5_;

D16_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p3 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   c17 = `is.object`(x3);
  //   if c17 then L1() else L2(x3);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[[", x3);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(x5):
  //   i18 = ld i;
  //   i19 = force? i18;
  //   __6 = ldf `[[` in base;
  //   r22 = dyn __6(x5, i19);
  //   goto L0(r22);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1121026495_3, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r24 = dyn print[, `...`](p3, ddd1)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_ddd1_1;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L41() else D17()
  // L41()
  goto L41_;

D17_:;
  // deopt 66 [r24]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L41_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_inner1121026495_(SEXP CCP, SEXP RHO) {
  // vsep3 = ld vsep
  Rsh_Fir_reg_vsep3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // vsep4 = force? vsep3
  Rsh_Fir_reg_vsep4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vsep3_);
  // checkMissing(vsep4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_vsep4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return vsep4
  return Rsh_Fir_reg_vsep4_;
}
SEXP Rsh_Fir_user_promise_inner1121026495_1(SEXP CCP, SEXP RHO) {
  // dnn = ld dnn
  Rsh_Fir_reg_dnn = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // dnn1 = force? dnn
  Rsh_Fir_reg_dnn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dnn);
  // checkMissing(dnn1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dnn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(dnn1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dnn1_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c14 then L1() else L2(dnn1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L1()
    goto L1_;
  } else {
  // L2(dnn1)
    Rsh_Fir_reg_dnn3_ = Rsh_Fir_reg_dnn1_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", dnn1)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_dnn1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_dnn3_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r16 = dyn __3(dnn3, j5)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dnn3_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r16_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1121026495_2(SEXP CCP, SEXP RHO) {
  // dn2 = ld dn
  Rsh_Fir_reg_dn2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // dn3 = force? dn2
  Rsh_Fir_reg_dn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn2_);
  // checkMissing(dn3)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(dn3)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c15 then L2() else L3(dn3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L2()
    goto L2_;
  } else {
  // L3(dn3)
    Rsh_Fir_reg_dn5_ = Rsh_Fir_reg_dn3_;
    goto L3_;
  }

L0_:;
  // c16 = `is.object`(dx7)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c16 then L5() else L6(dx7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx7)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    goto L6_;
  }

L1_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L2_:;
  // dr6 = tryDispatchBuiltin.1("[[", dn3)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc3 then L4() else L3(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr6)
    Rsh_Fir_reg_dn5_ = Rsh_Fir_reg_dr6_;
    goto L3_;
  }

L3_:;
  // j6 = ld j
  Rsh_Fir_reg_j6_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // j7 = force? j6
  Rsh_Fir_reg_j7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j6_);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r18 = dyn __4(dn5, j7)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_j7_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r18_1;
  goto L0_;

L4_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;

L5_:;
  // dr8 = tryDispatchBuiltin.1("[", dx7)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc4 then L7() else L6(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr8)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dr8_;
    goto L6_;
  }

L6_:;
  // iii = ld iii
  Rsh_Fir_reg_iii = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // iii1 = force? iii
  Rsh_Fir_reg_iii1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iii);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r19 = dyn __5(dx9, iii1)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_iii1_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L1(r19)
  // L1(r19)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r19_1;
  goto L1_;

L7_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L1(dx10)
  // L1(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1121026495_3(SEXP CCP, SEXP RHO) {
  // x2 = ld x
  Rsh_Fir_reg_x2_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_1);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x3_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(x3)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if c17 then L1() else L2(x3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x3)
    Rsh_Fir_reg_x5_1 = Rsh_Fir_reg_x3_1;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[[", x3)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args91);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_x5_1 = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // i18 = ld i
  Rsh_Fir_reg_i18_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i19 = force? i18
  Rsh_Fir_reg_i19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i18_);
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r22 = dyn __6(x5, i19)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x5_1;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r22_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
