#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (!TYPEOF(PARAMS_LIST) == VECSXP) Rsh_error("FIŘ expected a list for params");
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_main(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r8_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = 5.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // st y = 10.0
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L3_:;
  // sym1 = ldf log
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf log in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r = dyn base(<lang log(x)>, <lang log(x, y)>)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r;
  goto L0_;

L1_:;
  // sym2 = ldf log
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf log in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L5_:;
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r2 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 9 [x]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r8 = dyn list(r3, r6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

L7_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // r4 = log(x1, 2.718281828459045)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(163, RHO, 2, Rsh_Fir_array_args7);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

L8_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L9_:;
  // r5 = dyn base2(<sym x>, <sym y>)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D1_:;
  // deopt 13 [x2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 18 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L12_:;
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r8_;
  goto L0_;

D2_:;
  // deopt 14 [x3, y]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r7 = log(x3, y1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(163, RHO, 2, Rsh_Fir_array_args11);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;
}
