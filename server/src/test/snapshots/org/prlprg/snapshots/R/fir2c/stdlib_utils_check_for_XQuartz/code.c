#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3206665884_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3206665884_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3206665884_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3206665884_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3206665884_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3206665884_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner3206665884
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3206665884_, RHO, CCP);
  // st check_for_XQuartz = r
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
SEXP Rsh_Fir_user_function_inner3206665884_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3206665884 dynamic dispatch ([DSO])

  return Rsh_Fir_user_version_inner3206665884_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3206665884_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3206665884 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3206665884/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_DSO;  // DSO
  SEXP Rsh_Fir_reg_file_exists;  // file_exists
  SEXP Rsh_Fir_reg_DSO1_;  // DSO1
  SEXP Rsh_Fir_reg_DSO2_;  // DSO2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_macDynLoads;  // macDynLoads
  SEXP Rsh_Fir_reg_DSO3_;  // DSO3
  SEXP Rsh_Fir_reg_DSO4_;  // DSO4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_loads;  // loads
  SEXP Rsh_Fir_reg_loads1_;  // loads1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_loads2_;  // loads2
  SEXP Rsh_Fir_reg_loads3_;  // loads3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_loads4_;  // loads4
  SEXP Rsh_Fir_reg_loads5_;  // loads5
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_loads7_;  // loads7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_file_exists1_;  // file_exists1
  SEXP Rsh_Fir_reg_this;  // this
  SEXP Rsh_Fir_reg_this1_;  // this1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r16_;  // r16

  // Bind parameters
  Rsh_Fir_reg_DSO = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st DSO = DSO
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_DSO, RHO);
  (void)(Rsh_Fir_reg_DSO);
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L0_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 3);

L1_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c1 then L16() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 3);

L3_:;
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L23() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L23()
    goto L23_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 3);

L5_:;
  // st this = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // file_exists1 = ldf `file.exists`
  Rsh_Fir_reg_file_exists1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L29() else D12()
  // L29()
  goto L29_;

L6_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 3);

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   DSO1 = ld DSO;
  //   DSO2 = force? DSO1;
  //   checkMissing(DSO2);
  //   return DSO2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3206665884_, CCP, RHO);
  // r1 = dyn file_exists(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L9() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L0()
    goto L0_;
  }

L9_:;
  // macDynLoads = ldf macDynLoads
  Rsh_Fir_reg_macDynLoads = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p1 = prom<V +>{
  //   DSO3 = ld DSO;
  //   DSO4 = force? DSO3;
  //   checkMissing(DSO4);
  //   return DSO4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3206665884_1, CCP, RHO);
  // r3 = dyn macDynLoads(p1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_macDynLoads, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // st loads = r3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // loads = ld loads
  Rsh_Fir_reg_loads = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

L13_:;
  // r4 = dyn base(<sym loads>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D4_:;
  // deopt 11 [loads]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_loads;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // loads1 = force? loads
  Rsh_Fir_reg_loads1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loads);
  // checkMissing(loads1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_loads1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r6 = dyn length(loads1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_loads1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L16_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p2 = prom<V +>{
  //   loads2 = ld loads;
  //   loads3 = force? loads2;
  //   checkMissing(loads3);
  //   return loads3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3206665884_2, CCP, RHO);
  // r8 = dyn grep("^/.*libX11[.][0-9]+[.]dylib", p2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // st ind = r8
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard1 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

L20_:;
  // r9 = dyn base1(<sym ind>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L3_;

D8_:;
  // deopt 23 [ind]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r11 = dyn length1(ind1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

D9_:;
  // deopt 26 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L3_;

L23_:;
  // loads4 = ld loads
  Rsh_Fir_reg_loads4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L24() else D10()
  // L24()
  goto L24_;

D10_:;
  // deopt 27 [loads4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_loads4_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // loads5 = force? loads4
  Rsh_Fir_reg_loads5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loads4_);
  // checkMissing(loads5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_loads5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(loads5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_loads5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c3 then L25() else L26(loads5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L25()
    goto L25_;
  } else {
  // L26(loads5)
    Rsh_Fir_reg_loads7_ = Rsh_Fir_reg_loads5_;
    goto L26_;
  }

L25_:;
  // dr = tryDispatchBuiltin.1("[", loads5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_loads5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr)
    Rsh_Fir_reg_loads7_ = Rsh_Fir_reg_dr;
    goto L26_;
  }

L26_:;
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L28() else D11()
  // L28()
  goto L28_;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D11_:;
  // deopt 29 [loads7, ind2]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_loads7_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L28_:;
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r12 = dyn __(loads7, ind3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_loads7_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L5_;

D12_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p3 = prom<V +>{
  //   this = ld this;
  //   this1 = force? this;
  //   checkMissing(this1);
  //   return this1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3206665884_3, CCP, RHO);
  // r14 = dyn file_exists1(p3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L30() else D13()
  // L30()
  goto L30_;

D13_:;
  // deopt 36 [r14]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // r15 = `!`(r14)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c4 then L31() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L31()
    goto L31_;
  } else {
  // L6()
    goto L6_;
  }

L31_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L32() else D14()
  // L32()
  goto L32_;

D14_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // r16 = dyn stop[, domain]("X11 library is missing: install XQuartz from www.xquartz.org", NA_LGL)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L33() else D15()
  // L33()
  goto L33_;

D15_:;
  // deopt 43 [r16]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L33_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner3206665884_(SEXP CCP, SEXP RHO) {
  // DSO1 = ld DSO
  Rsh_Fir_reg_DSO1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // DSO2 = force? DSO1
  Rsh_Fir_reg_DSO2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DSO1_);
  // checkMissing(DSO2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_DSO2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return DSO2
  return Rsh_Fir_reg_DSO2_;
}
SEXP Rsh_Fir_user_promise_inner3206665884_1(SEXP CCP, SEXP RHO) {
  // DSO3 = ld DSO
  Rsh_Fir_reg_DSO3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // DSO4 = force? DSO3
  Rsh_Fir_reg_DSO4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DSO3_);
  // checkMissing(DSO4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_DSO4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return DSO4
  return Rsh_Fir_reg_DSO4_;
}
SEXP Rsh_Fir_user_promise_inner3206665884_2(SEXP CCP, SEXP RHO) {
  // loads2 = ld loads
  Rsh_Fir_reg_loads2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // loads3 = force? loads2
  Rsh_Fir_reg_loads3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loads2_);
  // checkMissing(loads3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_loads3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return loads3
  return Rsh_Fir_reg_loads3_;
}
SEXP Rsh_Fir_user_promise_inner3206665884_3(SEXP CCP, SEXP RHO) {
  // this = ld this
  Rsh_Fir_reg_this = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // this1 = force? this
  Rsh_Fir_reg_this1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_this);
  // checkMissing(this1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_this1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return this1
  return Rsh_Fir_reg_this1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
