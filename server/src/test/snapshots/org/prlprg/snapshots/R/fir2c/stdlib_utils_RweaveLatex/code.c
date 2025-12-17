#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // st RweaveLatex = r
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
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_RweaveLatexSetup;  // RweaveLatexSetup
  SEXP Rsh_Fir_reg_RweaveLatexSetup1_;  // RweaveLatexSetup1
  SEXP Rsh_Fir_reg_RweaveLatexRuncode;  // RweaveLatexRuncode
  SEXP Rsh_Fir_reg_RweaveLatexRuncode1_;  // RweaveLatexRuncode1
  SEXP Rsh_Fir_reg_RweaveLatexWritedoc;  // RweaveLatexWritedoc
  SEXP Rsh_Fir_reg_RweaveLatexWritedoc1_;  // RweaveLatexWritedoc1
  SEXP Rsh_Fir_reg_RweaveLatexFinish;  // RweaveLatexFinish
  SEXP Rsh_Fir_reg_RweaveLatexFinish1_;  // RweaveLatexFinish1
  SEXP Rsh_Fir_reg_RweaveLatexOptions;  // RweaveLatexOptions
  SEXP Rsh_Fir_reg_RweaveLatexOptions1_;  // RweaveLatexOptions1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // RweaveLatexSetup = ld RweaveLatexSetup
  Rsh_Fir_reg_RweaveLatexSetup = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base[setup, runcode, writedoc, finish, checkopts](<sym RweaveLatexSetup>, <sym RweaveLatexRuncode>, <sym RweaveLatexWritedoc>, <sym RweaveLatexFinish>, <sym RweaveLatexOptions>)
  SEXP Rsh_Fir_array_args1[5];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[4] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names[4] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 5, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [RweaveLatexSetup]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_RweaveLatexSetup;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // RweaveLatexSetup1 = force? RweaveLatexSetup
  Rsh_Fir_reg_RweaveLatexSetup1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RweaveLatexSetup);
  // checkMissing(RweaveLatexSetup1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_RweaveLatexSetup1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // RweaveLatexRuncode = ld RweaveLatexRuncode
  Rsh_Fir_reg_RweaveLatexRuncode = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [RweaveLatexRuncode]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_RweaveLatexRuncode;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // RweaveLatexRuncode1 = force? RweaveLatexRuncode
  Rsh_Fir_reg_RweaveLatexRuncode1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RweaveLatexRuncode);
  // checkMissing(RweaveLatexRuncode1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_RweaveLatexRuncode1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // RweaveLatexWritedoc = ld RweaveLatexWritedoc
  Rsh_Fir_reg_RweaveLatexWritedoc = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 8 [RweaveLatexWritedoc]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_RweaveLatexWritedoc;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // RweaveLatexWritedoc1 = force? RweaveLatexWritedoc
  Rsh_Fir_reg_RweaveLatexWritedoc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RweaveLatexWritedoc);
  // checkMissing(RweaveLatexWritedoc1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_RweaveLatexWritedoc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // RweaveLatexFinish = ld RweaveLatexFinish
  Rsh_Fir_reg_RweaveLatexFinish = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 11 [RweaveLatexFinish]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_RweaveLatexFinish;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // RweaveLatexFinish1 = force? RweaveLatexFinish
  Rsh_Fir_reg_RweaveLatexFinish1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RweaveLatexFinish);
  // checkMissing(RweaveLatexFinish1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_RweaveLatexFinish1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // RweaveLatexOptions = ld RweaveLatexOptions
  Rsh_Fir_reg_RweaveLatexOptions = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 14 [RweaveLatexOptions]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_RweaveLatexOptions;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7_:;
  // RweaveLatexOptions1 = force? RweaveLatexOptions
  Rsh_Fir_reg_RweaveLatexOptions1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RweaveLatexOptions);
  // checkMissing(RweaveLatexOptions1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_RweaveLatexOptions1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r2 = dyn list(RweaveLatexSetup1, RweaveLatexRuncode1, RweaveLatexWritedoc1, RweaveLatexFinish1, RweaveLatexOptions1)
  SEXP Rsh_Fir_array_args7[5];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_RweaveLatexSetup1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_RweaveLatexRuncode1_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_RweaveLatexWritedoc1_;
  Rsh_Fir_array_args7[3] = Rsh_Fir_reg_RweaveLatexFinish1_;
  Rsh_Fir_array_args7[4] = Rsh_Fir_reg_RweaveLatexOptions1_;
  SEXP Rsh_Fir_array_arg_names1[5];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 5, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 18 [r2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
