#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner2708337952
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st frame = r
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
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_getHook;  // getHook
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_fun;  // fun
  SEXP Rsh_Fir_reg_fun1_;  // fun1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg_fun2_;  // fun2
  SEXP Rsh_Fir_reg_fun3_;  // fun3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_try;  // try
  SEXP Rsh_Fir_reg_fun4_;  // fun4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_C_plot_new;  // C_plot_new
  SEXP Rsh_Fir_reg_C_plot_new1_;  // C_plot_new1
  SEXP Rsh_Fir_reg__External2_;  // _External2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_getHook1_;  // getHook1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_fun5_;  // fun5
  SEXP Rsh_Fir_reg_fun6_;  // fun6
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_get1_;  // get1
  SEXP Rsh_Fir_reg_fun7_;  // fun7
  SEXP Rsh_Fir_reg_fun8_;  // fun8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_try1_;  // try1
  SEXP Rsh_Fir_reg_fun9_;  // fun9
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r26_;  // r26

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // getHook = ldf getHook
  Rsh_Fir_reg_getHook = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L0_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if c then L14() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L4()
    goto L4_;
  }

L1_:;
  // c2 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c2 then L18() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L18()
    goto L18_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3(i7)
  // L3(i7)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i7_;
  goto L3_;

L3_:;
  // try = ldf try
  Rsh_Fir_reg_try = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

L4_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // st fun = x
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L5_:;
  // ___ = ldf `:::`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

L6_:;
  // i13 = `+`.1(i12, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_i13_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // c3 = `<`.1(l1, i13)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if c3 then L33() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L33()
    goto L33_;
  } else {
  // L10()
    goto L10_;
  }

L7_:;
  // c5 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c5 then L37() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L37()
    goto L37_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9(i18)
  // L9(i18)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i18_;
  goto L9_;

L9_:;
  // try1 = ldf try
  Rsh_Fir_reg_try1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L41() else D17()
  // L41()
  goto L41_;

L10_:;
  // x1 = `[[`(s1, i13, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st fun = x1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // sym2 = ldf `is.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r = dyn getHook("before.plot.new")
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getHook, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // s = toForSeq(r)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 10);
  // goto L0(i)
  // L0(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L0_;

L14_:;
  // sym1 = ldf `.External2`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `.External2` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L15_:;
  // fun = ld fun
  Rsh_Fir_reg_fun = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

L16_:;
  // r1 = dyn base(<sym fun>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(i2, r1)
  // L1(i2, r1)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L1_;

D2_:;
  // deopt 5 [i2, fun]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_fun;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // fun1 = force? fun
  Rsh_Fir_reg_fun1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun);
  // checkMissing(fun1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_fun1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c1 = `is.character`(fun1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_fun1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L1(i2, c1)
  // L1(i2, c1)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_c1_;
  goto L1_;

L18_:;
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 9 [i7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // p = prom<V +>{
  //   fun2 = ld fun;
  //   fun3 = force? fun2;
  //   checkMissing(fun3);
  //   return fun3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // r4 = dyn get(p)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

D4_:;
  // deopt 11 [i7, r4]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // st fun = r4
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // goto L3(i7)
  // L3(i7)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i7_;
  goto L3_;

D5_:;
  // deopt 16 [i10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // p1 = prom<V +>{
  //   fun4 = ldf fun;
  //   r6 = dyn fun4();
  //   return r6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_1, CCP, RHO);
  // r8 = dyn try(p1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

D6_:;
  // deopt 18 [i10, r8]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L0(i10)
  // L0(i10)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i10_;
  goto L0_;

L24_:;
  // C_plot_new = ld C_plot_new
  Rsh_Fir_reg_C_plot_new = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

L25_:;
  // r9 = dyn base1(<sym C_plot_new>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5()
  // L5()
  goto L5_;

D7_:;
  // deopt 24 [C_plot_new]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_plot_new;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L26_:;
  // C_plot_new1 = force? C_plot_new
  Rsh_Fir_reg_C_plot_new1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_plot_new);
  // checkMissing(C_plot_new1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_C_plot_new1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // _External2 = ldf `.External2` in base
  Rsh_Fir_reg__External2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r11 = dyn _External2(C_plot_new1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_C_plot_new1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

D8_:;
  // deopt 27 [r11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L5()
  // L5()
  goto L5_;

D9_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // r12 = dyn ___("grDevices", "recordPalette")
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

D10_:;
  // deopt 32 [r12]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // checkFun.0(r12)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r12_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args24));
  // r13 = r12 as cls
  Rsh_Fir_reg_r13_ = Rsh_Fir_cast(Rsh_Fir_reg_r12_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r14 = dyn r13()
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r13_, 0, NULL, NULL, CCP, RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D11_:;
  // deopt 34 [r14]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // getHook1 = ldf getHook
  Rsh_Fir_reg_getHook1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

D12_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // r15 = dyn getHook1("plot.new")
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getHook1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

D13_:;
  // deopt 38 [r15]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L32_:;
  // s1 = toForSeq(r15)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // i11 = 0
  Rsh_Fir_reg_i11_ = Rsh_const(CCP, 10);
  // goto L6(i11)
  // L6(i11)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i11_;
  goto L6_;

L33_:;
  // sym3 = ldf invisible
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf invisible in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard3 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L34_:;
  // fun5 = ld fun
  Rsh_Fir_reg_fun5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L36() else D14()
  // L36()
  goto L36_;

L35_:;
  // r16 = dyn base2(<sym fun>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(i13, r16)
  // L7(i13, r16)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L7_;

D14_:;
  // deopt 40 [i13, fun5]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_fun5_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L36_:;
  // fun6 = force? fun5
  Rsh_Fir_reg_fun6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun5_);
  // checkMissing(fun6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_fun6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c4 = `is.character`(fun6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_fun6_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L7(i13, c4)
  // L7(i13, c4)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_c4_;
  goto L7_;

L37_:;
  // get1 = ldf get
  Rsh_Fir_reg_get1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L38() else D15()
  // L38()
  goto L38_;

D15_:;
  // deopt 44 [i18]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L38_:;
  // p2 = prom<V +>{
  //   fun7 = ld fun;
  //   fun8 = force? fun7;
  //   checkMissing(fun8);
  //   return fun8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_2, CCP, RHO);
  // r19 = dyn get1(p2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L39() else D16()
  // L39()
  goto L39_;

D16_:;
  // deopt 46 [i18, r19]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L39_:;
  // st fun = r19
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // goto L9(i18)
  // L9(i18)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i18_;
  goto L9_;

D17_:;
  // deopt 51 [i21]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L41_:;
  // p3 = prom<V +>{
  //   fun9 = ldf fun;
  //   r21 = dyn fun9();
  //   return r21;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_3, CCP, RHO);
  // r23 = dyn try1(p3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L42() else D18()
  // L42()
  goto L42_;

D18_:;
  // deopt 53 [i21, r23]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L6(i21)
  // L6(i21)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i21_;
  goto L6_;

L43_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r26 = dyn invisible()
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L45() else D19()
  // L45()
  goto L45_;

L44_:;
  // r24 = dyn base3()
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 0, NULL, NULL, CCP, RHO);
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L11_;

D19_:;
  // deopt 60 [r26]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // fun2 = ld fun
  Rsh_Fir_reg_fun2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // fun3 = force? fun2
  Rsh_Fir_reg_fun3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun2_);
  // checkMissing(fun3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_fun3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return fun3
  return Rsh_Fir_reg_fun3_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO) {
  // fun4 = ldf fun
  Rsh_Fir_reg_fun4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r6 = dyn fun4()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fun4_, 0, NULL, NULL, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO) {
  // fun7 = ld fun
  Rsh_Fir_reg_fun7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // fun8 = force? fun7
  Rsh_Fir_reg_fun8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun7_);
  // checkMissing(fun8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_fun8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return fun8
  return Rsh_Fir_reg_fun8_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_3(SEXP CCP, SEXP RHO) {
  // fun9 = ldf fun
  Rsh_Fir_reg_fun9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r21 = dyn fun9()
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fun9_, 0, NULL, NULL, CCP, RHO);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
