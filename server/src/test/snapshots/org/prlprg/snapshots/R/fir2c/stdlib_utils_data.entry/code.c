#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1778048290_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1778048290_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1778048290_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1778048290_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1778048290_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1778048290_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1778048290_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1778048290
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1778048290_, RHO, CCP);
  // st `data.entry` = r
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
SEXP Rsh_Fir_user_function_inner1778048290_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1778048290 dynamic dispatch ([`...`, Modes, Names])

  return Rsh_Fir_user_version_inner1778048290_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1778048290_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1778048290 version 0 (dots, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1778048290/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_Modes;  // Modes
  SEXP Rsh_Fir_reg_Names;  // Names
  SEXP Rsh_Fir_reg_Modes_isMissing;  // Modes_isMissing
  SEXP Rsh_Fir_reg_Modes_orDefault;  // Modes_orDefault
  SEXP Rsh_Fir_reg_Names_isMissing;  // Names_isMissing
  SEXP Rsh_Fir_reg_Names_orDefault;  // Names_orDefault
  SEXP Rsh_Fir_reg_de;  // de
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_Modes1_;  // Modes1
  SEXP Rsh_Fir_reg_Modes2_;  // Modes2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_Names1_;  // Names1
  SEXP Rsh_Fir_reg_Names2_;  // Names2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_tmp1_;  // tmp1
  SEXP Rsh_Fir_reg_tmp2_;  // tmp2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_nn;  // nn
  SEXP Rsh_Fir_reg_nn1_;  // nn1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_tmp3_;  // tmp3
  SEXP Rsh_Fir_reg_tmp4_;  // tmp4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_tmp6_;  // tmp6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg__GlobalEnv;  // _GlobalEnv
  SEXP Rsh_Fir_reg__GlobalEnv1_;  // _GlobalEnv1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_nn2_;  // nn2
  SEXP Rsh_Fir_reg_nn3_;  // nn3
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r17_;  // r17

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_Modes = PARAMS[1];
  Rsh_Fir_reg_Names = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // Modes_isMissing = missing.0(Modes)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_Modes;
  Rsh_Fir_reg_Modes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if Modes_isMissing then L0(NULL) else L0(Modes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_Modes_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_Modes_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(Modes)
    Rsh_Fir_reg_Modes_orDefault = Rsh_Fir_reg_Modes;
    goto L0_;
  }

L0_:;
  // st Modes = Modes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_Modes_orDefault, RHO);
  (void)(Rsh_Fir_reg_Modes_orDefault);
  // Names_isMissing = missing.0(Names)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_Names;
  Rsh_Fir_reg_Names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if Names_isMissing then L1(NULL) else L1(Names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_Names_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_Names_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(Names)
    Rsh_Fir_reg_Names_orDefault = Rsh_Fir_reg_Names;
    goto L1_;
  }

L1_:;
  // st Names = Names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_Names_orDefault, RHO);
  (void)(Rsh_Fir_reg_Names_orDefault);
  // de = ldf de
  Rsh_Fir_reg_de = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L2_:;
  // st nn = r4
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // nn = ld nn
  Rsh_Fir_reg_nn = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

L3_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c then L15() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym1 = ldf invisible
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf invisible in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // p = prom<V +>{
  //   Modes1 = ld Modes;
  //   Modes2 = force? Modes1;
  //   checkMissing(Modes2);
  //   return Modes2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1778048290_, CCP, RHO);
  // p1 = prom<V +>{
  //   Names1 = ld Names;
  //   Names2 = force? Names1;
  //   checkMissing(Names2);
  //   return Names2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1778048290_1, CCP, RHO);
  // r2 = dyn de[`...`, Modes, Names](ddd1, p, p1)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_de, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // st tmp1 = r2
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // st j = 1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // tmp1 = ld tmp1
  Rsh_Fir_reg_tmp1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r3 = dyn base(<sym tmp1>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 14 [tmp1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_tmp1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // tmp2 = force? tmp1
  Rsh_Fir_reg_tmp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp1_);
  // checkMissing(tmp2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_tmp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r5 = dyn names(tmp2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_tmp2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 17 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

D4_:;
  // deopt 19 [nn]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_nn;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // nn1 = force? nn
  Rsh_Fir_reg_nn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn);
  // checkMissing(nn1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_nn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // s = toForSeq(nn1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_nn1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 15);
  // goto L3(i)
  // L3(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L3_;

L15_:;
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D5_:;
  // deopt 22 [i2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // p2 = prom<V +>{
  //   i5 = ld i;
  //   i6 = force? i5;
  //   checkMissing(i6);
  //   return i6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1778048290_2, CCP, RHO);
  // p3 = prom<V +>{
  //   tmp3 = ld tmp1;
  //   tmp4 = force? tmp3;
  //   checkMissing(tmp4);
  //   c1 = `is.object`(tmp4);
  //   if c1 then L1() else L2(tmp4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", tmp4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(tmp6):
  //   j = ld j;
  //   j1 = force? j;
  //   __ = ldf `[[` in base;
  //   r7 = dyn __(tmp6, j1);
  //   goto L0(r7);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1778048290_3, CCP, RHO);
  // p4 = prom<V +>{
  //   _GlobalEnv = ld `.GlobalEnv`;
  //   _GlobalEnv1 = force? _GlobalEnv;
  //   checkMissing(_GlobalEnv1);
  //   return _GlobalEnv1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1778048290_4, CCP, RHO);
  // r10 = dyn assign[, , envir](p2, p3, p4)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 27 [i2, r10]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 28 [i2, j2]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // checkMissing(j3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_j3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // r11 = `+`(j3, 1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_j3_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // st j = r11
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // goto L3(i2)
  // L3(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L3_;

D8_:;
  // deopt 36 [j4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_j4_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // checkMissing(j5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_j5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r12 = `==`(j5, 1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_j5_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c2 then L20() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L20()
    goto L20_;
  } else {
  // L5()
    goto L5_;
  }

L20_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r13 = dyn warning("did not assign() anything")
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

D10_:;
  // deopt 43 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L6()
  // L6()
  goto L6_;

L24_:;
  // nn2 = ld nn
  Rsh_Fir_reg_nn2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

L25_:;
  // r15 = dyn base1(<sym nn>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L7_;

D11_:;
  // deopt 48 [nn2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_nn2_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L26_:;
  // nn3 = force? nn2
  Rsh_Fir_reg_nn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nn2_);
  // checkMissing(nn3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_nn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r17 = dyn invisible(nn3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_nn3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L27() else D12()
  // L27()
  goto L27_;

D12_:;
  // deopt 51 [r17]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_inner1778048290_(SEXP CCP, SEXP RHO) {
  // Modes1 = ld Modes
  Rsh_Fir_reg_Modes1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // Modes2 = force? Modes1
  Rsh_Fir_reg_Modes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Modes1_);
  // checkMissing(Modes2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_Modes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return Modes2
  return Rsh_Fir_reg_Modes2_;
}
SEXP Rsh_Fir_user_promise_inner1778048290_1(SEXP CCP, SEXP RHO) {
  // Names1 = ld Names
  Rsh_Fir_reg_Names1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Names2 = force? Names1
  Rsh_Fir_reg_Names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Names1_);
  // checkMissing(Names2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_Names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return Names2
  return Rsh_Fir_reg_Names2_;
}
SEXP Rsh_Fir_user_promise_inner1778048290_2(SEXP CCP, SEXP RHO) {
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return i6
  return Rsh_Fir_reg_i6_;
}
SEXP Rsh_Fir_user_promise_inner1778048290_3(SEXP CCP, SEXP RHO) {
  // tmp3 = ld tmp1
  Rsh_Fir_reg_tmp3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // tmp4 = force? tmp3
  Rsh_Fir_reg_tmp4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp3_);
  // checkMissing(tmp4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_tmp4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(tmp4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_tmp4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(tmp4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(tmp4)
    Rsh_Fir_reg_tmp6_ = Rsh_Fir_reg_tmp4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", tmp4)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_tmp4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_tmp6_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r7 = dyn __(tmp6, j1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_tmp6_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1778048290_4(SEXP CCP, SEXP RHO) {
  // _GlobalEnv = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // _GlobalEnv1 = force? _GlobalEnv
  Rsh_Fir_reg__GlobalEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv);
  // checkMissing(_GlobalEnv1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg__GlobalEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return _GlobalEnv1
  return Rsh_Fir_reg__GlobalEnv1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
