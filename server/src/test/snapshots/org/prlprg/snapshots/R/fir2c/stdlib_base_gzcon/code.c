#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2653718668_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2653718668_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2653718668
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2653718668_, RHO, CCP);
  // st gzcon = r
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
SEXP Rsh_Fir_user_function_inner2653718668_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2653718668 dynamic dispatch ([con, level, allowNonCompressed, text])

  return Rsh_Fir_user_version_inner2653718668_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2653718668_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2653718668 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2653718668/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_con;  // con
  SEXP Rsh_Fir_reg_level;  // level
  SEXP Rsh_Fir_reg_allowNonCompressed;  // allowNonCompressed
  SEXP Rsh_Fir_reg_text;  // text
  SEXP Rsh_Fir_reg_level_isMissing;  // level_isMissing
  SEXP Rsh_Fir_reg_level_orDefault;  // level_orDefault
  SEXP Rsh_Fir_reg_allowNonCompressed_isMissing;  // allowNonCompressed_isMissing
  SEXP Rsh_Fir_reg_allowNonCompressed_orDefault;  // allowNonCompressed_orDefault
  SEXP Rsh_Fir_reg_text_isMissing;  // text_isMissing
  SEXP Rsh_Fir_reg_text_orDefault;  // text_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_con1_;  // con1
  SEXP Rsh_Fir_reg_con2_;  // con2
  SEXP Rsh_Fir_reg_level1_;  // level1
  SEXP Rsh_Fir_reg_level2_;  // level2
  SEXP Rsh_Fir_reg_allowNonCompressed1_;  // allowNonCompressed1
  SEXP Rsh_Fir_reg_allowNonCompressed2_;  // allowNonCompressed2
  SEXP Rsh_Fir_reg_text1_;  // text1
  SEXP Rsh_Fir_reg_text2_;  // text2
  SEXP Rsh_Fir_reg_gzcon;  // gzcon
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_con = PARAMS[0];
  Rsh_Fir_reg_level = PARAMS[1];
  Rsh_Fir_reg_allowNonCompressed = PARAMS[2];
  Rsh_Fir_reg_text = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st con = con
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_con, RHO);
  (void)(Rsh_Fir_reg_con);
  // level_isMissing = missing.0(level)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_level;
  Rsh_Fir_reg_level_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if level_isMissing then L0(6.0) else L0(level)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_level_isMissing)) {
  // L0(6.0)
    Rsh_Fir_reg_level_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(level)
    Rsh_Fir_reg_level_orDefault = Rsh_Fir_reg_level;
    goto L0_;
  }

L0_:;
  // st level = level_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_level_orDefault, RHO);
  (void)(Rsh_Fir_reg_level_orDefault);
  // allowNonCompressed_isMissing = missing.0(allowNonCompressed)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_allowNonCompressed;
  Rsh_Fir_reg_allowNonCompressed_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if allowNonCompressed_isMissing then L1(TRUE) else L1(allowNonCompressed)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_allowNonCompressed_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_allowNonCompressed_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(allowNonCompressed)
    Rsh_Fir_reg_allowNonCompressed_orDefault = Rsh_Fir_reg_allowNonCompressed;
    goto L1_;
  }

L1_:;
  // st allowNonCompressed = allowNonCompressed_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_allowNonCompressed_orDefault, RHO);
  (void)(Rsh_Fir_reg_allowNonCompressed_orDefault);
  // text_isMissing = missing.0(text)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_text;
  Rsh_Fir_reg_text_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if text_isMissing then L2(FALSE) else L2(text)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_text_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_text_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(text)
    Rsh_Fir_reg_text_orDefault = Rsh_Fir_reg_text;
    goto L2_;
  }

L2_:;
  // st text = text_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_text_orDefault, RHO);
  (void)(Rsh_Fir_reg_text_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L4_:;
  // con1 = ld con
  Rsh_Fir_reg_con1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<lang gzcon(con, level, allowNonCompressed, text)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 2 [con1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_con1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // con2 = force? con1
  Rsh_Fir_reg_con2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con1_);
  // checkMissing(con2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_con2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // level1 = ld level
  Rsh_Fir_reg_level1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 4 [level1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_level1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // level2 = force? level1
  Rsh_Fir_reg_level2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_level1_);
  // checkMissing(level2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_level2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // allowNonCompressed1 = ld allowNonCompressed
  Rsh_Fir_reg_allowNonCompressed1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 6 [allowNonCompressed1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_allowNonCompressed1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // allowNonCompressed2 = force? allowNonCompressed1
  Rsh_Fir_reg_allowNonCompressed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allowNonCompressed1_);
  // checkMissing(allowNonCompressed2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_allowNonCompressed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // text1 = ld text
  Rsh_Fir_reg_text1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 8 [text1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_text1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // text2 = force? text1
  Rsh_Fir_reg_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1_);
  // checkMissing(text2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // gzcon = ldf gzcon in base
  Rsh_Fir_reg_gzcon = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r2 = dyn gzcon(con2, level2, allowNonCompressed2, text2)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_con2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_level2_;
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_allowNonCompressed2_;
  Rsh_Fir_array_args9[3] = Rsh_Fir_reg_text2_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gzcon, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 11 [r2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
