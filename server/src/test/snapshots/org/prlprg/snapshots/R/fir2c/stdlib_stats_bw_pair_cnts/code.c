#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2690107958_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2690107958_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2690107958_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2690107958_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2690107958_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2690107958
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2690107958_, RHO, CCP);
  // st bw_pair_cnts = r
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
SEXP Rsh_Fir_user_function_inner2690107958_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2690107958 dynamic dispatch ([x, nb, binned])

  return Rsh_Fir_user_version_inner2690107958_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2690107958_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2690107958 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2690107958/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_nb;  // nb
  SEXP Rsh_Fir_reg_binned;  // binned
  SEXP Rsh_Fir_reg_binned1_;  // binned1
  SEXP Rsh_Fir_reg_binned2_;  // binned2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_range;  // range
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_diff;  // diff
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_nb1_;  // nb1
  SEXP Rsh_Fir_reg_nb2_;  // nb2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_trunc;  // trunc
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_xx4_;  // xx4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_xx5_;  // xx5
  SEXP Rsh_Fir_reg_xx6_;  // xx6
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_tabulate;  // tabulate
  SEXP Rsh_Fir_reg_xx7_;  // xx7
  SEXP Rsh_Fir_reg_xx8_;  // xx8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_nb3_;  // nb3
  SEXP Rsh_Fir_reg_nb4_;  // nb4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_d2_;  // d2
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_C_bw_den_binned;  // C_bw_den_binned
  SEXP Rsh_Fir_reg_C_bw_den_binned1_;  // C_bw_den_binned1
  SEXP Rsh_Fir_reg_xxx;  // xxx
  SEXP Rsh_Fir_reg_xxx1_;  // xxx1
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_C_bw_den;  // C_bw_den
  SEXP Rsh_Fir_reg_C_bw_den1_;  // C_bw_den1
  SEXP Rsh_Fir_reg_nb5_;  // nb5
  SEXP Rsh_Fir_reg_nb6_;  // nb6
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_vargs1_;  // vargs1
  SEXP Rsh_Fir_reg_r39_;  // r39

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_nb = PARAMS[1];
  Rsh_Fir_reg_binned = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st nb = nb
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_nb, RHO);
  (void)(Rsh_Fir_reg_nb);
  // st binned = binned
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_binned, RHO);
  (void)(Rsh_Fir_reg_binned);
  // binned1 = ld binned
  Rsh_Fir_reg_binned1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L0_:;
  // sym7 = ldf `.Call`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base7 = ldf `.Call` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard7 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L1_:;
  // st r = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // diff = ldf diff
  Rsh_Fir_reg_diff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L2_:;
  // sym3 = ldf sign
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf sign in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard3 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L3_:;
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L24() else D8()
  // L24()
  goto L24_;

L4_:;
  // r22 = `*`(r19, r20)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // st xx = r22
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

L5_:;
  // r26 = `-`(xx4, r24)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_xx4_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // r27 = `+`(r26, 1.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // st xx = r27
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // tabulate = ldf tabulate
  Rsh_Fir_reg_tabulate = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L34() else D14()
  // L34()
  goto L34_;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r32
  return Rsh_Fir_reg_r32_;

L7_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r36 = dyn list(d3, r34)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L43() else D19()
  // L43()
  goto L43_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r38
  return Rsh_Fir_reg_r38_;

D0_:;
  // deopt 0 [binned1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_binned1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // binned2 = force? binned1
  Rsh_Fir_reg_binned2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_binned1_);
  // checkMissing(binned2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_binned2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(binned2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_binned2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L10() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L0()
    goto L0_;
  }

L10_:;
  // sym = ldf range
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf range in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L12_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D1_:;
  // deopt 4 [x1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // range = ldf range in base
  Rsh_Fir_reg_range = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r2 = dyn range(x2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

D2_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   r3 = ld r;
  //   r4 = force? r3;
  //   checkMissing(r4);
  //   return r4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2690107958_, CCP, RHO);
  // r6 = dyn diff(p)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diff, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 12 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // r7 = `*`(r6, 1.01)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // nb1 = ld nb
  Rsh_Fir_reg_nb1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 14 [r7, nb1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_nb1_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // nb2 = force? nb1
  Rsh_Fir_reg_nb2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb1_);
  // checkMissing(nb2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_nb2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r8 = `/`(r7, nb2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_nb2_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st d = r8
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym1 = ldf trunc
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf trunc in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // sym2 = ldf abs
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf abs in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L19_:;
  // r9 = dyn base1(<lang `/`(abs(x), d)>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L2_;

L20_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

L21_:;
  // r11 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L3_;

D6_:;
  // deopt 22 [x3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r13 = dyn abs(x4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

D7_:;
  // deopt 25 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L3_;

D8_:;
  // deopt 25 [r12, d]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r14 = `/`(r12, d1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // trunc = ldf trunc in base
  Rsh_Fir_reg_trunc = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r15 = dyn trunc(r14)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_trunc, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D9()
  // L25()
  goto L25_;

D9_:;
  // deopt 29 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L2(r15)
  // L2(r15)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r15_;
  goto L2_;

L26_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D10()
  // L28()
  goto L28_;

L27_:;
  // r18 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(r10, r18)
  // L4(r10, r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r18_;
  goto L4_;

D10_:;
  // deopt 30 [r10, x5]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L28_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r21 = sign(x6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(170, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L4(r10, r21)
  // L4(r10, r21)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L4_;

D11_:;
  // deopt 35 [xx]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_xx;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L29_:;
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // sym4 = ldf min
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf min in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard4 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // xx5 = ld xx
  Rsh_Fir_reg_xx5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L32() else D12()
  // L32()
  goto L32_;

L31_:;
  // r23 = dyn base4(<sym xx>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(xx1, r23)
  // L5(xx1, r23)
  Rsh_Fir_reg_xx4_ = Rsh_Fir_reg_xx1_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L5_;

D12_:;
  // deopt 38 [xx1, xx5]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_xx1_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_xx5_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // xx6 = force? xx5
  Rsh_Fir_reg_xx6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx5_);
  // checkMissing(xx6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_xx6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r25 = dyn min(xx6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_xx6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L33() else D13()
  // L33()
  goto L33_;

D13_:;
  // deopt 41 [xx1, r25]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_xx1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L5(xx1, r25)
  // L5(xx1, r25)
  Rsh_Fir_reg_xx4_ = Rsh_Fir_reg_xx1_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L5_;

D14_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p1 = prom<V +>{
  //   xx7 = ld xx;
  //   xx8 = force? xx7;
  //   checkMissing(xx8);
  //   return xx8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2690107958_1, CCP, RHO);
  // p2 = prom<V +>{
  //   nb3 = ld nb;
  //   nb4 = force? nb3;
  //   checkMissing(nb4);
  //   return nb4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2690107958_2, CCP, RHO);
  // r30 = dyn tabulate(p1, p2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tabulate, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L35() else D15()
  // L35()
  goto L35_;

D15_:;
  // deopt 50 [r30]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L35_:;
  // st xxx = r30
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard5 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L38() else D16()
  // L38()
  goto L38_;

L37_:;
  // r31 = dyn base5(<sym d>, <lang .Call(C_bw_den_binned, xxx)>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L6(r31)
  // L6(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L6_;

D16_:;
  // deopt 54 [d2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_d2_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L38_:;
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // sym6 = ldf `.Call`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base6 = ldf `.Call` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard6 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // C_bw_den_binned = ld C_bw_den_binned
  Rsh_Fir_reg_C_bw_den_binned = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L41() else D17()
  // L41()
  goto L41_;

L40_:;
  // r33 = dyn base6(<sym C_bw_den_binned>, <sym xxx>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L7(r33)
  // L7(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L7_;

D17_:;
  // deopt 57 [C_bw_den_binned]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_C_bw_den_binned;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L41_:;
  // C_bw_den_binned1 = force? C_bw_den_binned
  Rsh_Fir_reg_C_bw_den_binned1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_bw_den_binned);
  // checkMissing(C_bw_den_binned1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_C_bw_den_binned1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // xxx = ld xxx
  Rsh_Fir_reg_xxx = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L42() else D18()
  // L42()
  goto L42_;

D18_:;
  // deopt 58 [C_bw_den_binned1, xxx]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_C_bw_den_binned1_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_xxx;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L42_:;
  // xxx1 = force? xxx
  Rsh_Fir_reg_xxx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xxx);
  // checkMissing(xxx1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_xxx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // vargs = dots[xxx1]
  SEXP Rsh_Fir_array_vector_values[1];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_xxx1_;
  SEXP Rsh_Fir_array_vector_names[1];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 1, Rsh_Fir_array_vector_values, NULL);
  // r35 = `.Call`(C_bw_den_binned1, vargs, <missing>)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_C_bw_den_binned1_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L7(r35)
  // L7(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L7_;

D19_:;
  // deopt 62 [r36]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L6(r36)
  // L6(r36)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r36_;
  goto L6_;

L45_:;
  // C_bw_den = ld C_bw_den
  Rsh_Fir_reg_C_bw_den = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L47() else D20()
  // L47()
  goto L47_;

L46_:;
  // r37 = dyn base7(<sym C_bw_den>, <sym nb>, <sym x>)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(r37)
  // L8(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L8_;

D20_:;
  // deopt 64 [C_bw_den]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_C_bw_den;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L47_:;
  // C_bw_den1 = force? C_bw_den
  Rsh_Fir_reg_C_bw_den1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_bw_den);
  // checkMissing(C_bw_den1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_C_bw_den1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // nb5 = ld nb
  Rsh_Fir_reg_nb5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L48() else D21()
  // L48()
  goto L48_;

D21_:;
  // deopt 65 [C_bw_den1, nb5]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_C_bw_den1_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_nb5_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L48_:;
  // nb6 = force? nb5
  Rsh_Fir_reg_nb6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb5_);
  // checkMissing(nb6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_nb6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D22()
  // L49()
  goto L49_;

D22_:;
  // deopt 66 [C_bw_den1, nb6, x7]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_C_bw_den1_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_nb6_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(66, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L49_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // vargs1 = dots[nb6, x8]
  SEXP Rsh_Fir_array_vector_values1[2];
  Rsh_Fir_array_vector_values1[0] = Rsh_Fir_reg_nb6_;
  Rsh_Fir_array_vector_values1[1] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_vector_names1[2];
  Rsh_Fir_array_vector_names1[0] = R_MissingArg;
  Rsh_Fir_array_vector_names1[1] = R_MissingArg;
  Rsh_Fir_reg_vargs1_ = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values1, NULL);
  // r39 = `.Call`(C_bw_den1, vargs1, <missing>)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_C_bw_den1_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_vargs1_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L8(r39)
  // L8(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner2690107958_(SEXP CCP, SEXP RHO) {
  // r3 = ld r
  Rsh_Fir_reg_r3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // r4 = force? r3
  Rsh_Fir_reg_r4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r3_);
  // checkMissing(r4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner2690107958_1(SEXP CCP, SEXP RHO) {
  // xx7 = ld xx
  Rsh_Fir_reg_xx7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // xx8 = force? xx7
  Rsh_Fir_reg_xx8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx7_);
  // checkMissing(xx8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_xx8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return xx8
  return Rsh_Fir_reg_xx8_;
}
SEXP Rsh_Fir_user_promise_inner2690107958_2(SEXP CCP, SEXP RHO) {
  // nb3 = ld nb
  Rsh_Fir_reg_nb3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // nb4 = force? nb3
  Rsh_Fir_reg_nb4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb3_);
  // checkMissing(nb4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_nb4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return nb4
  return Rsh_Fir_reg_nb4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
