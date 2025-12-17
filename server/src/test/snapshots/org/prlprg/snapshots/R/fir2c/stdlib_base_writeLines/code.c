#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1255301831_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1255301831_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1255301831_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1255301831_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner1255301831
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1255301831_, RHO, CCP);
  // st writeLines = r
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
SEXP Rsh_Fir_user_function_inner1255301831_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1255301831 dynamic dispatch ([text, con, sep, useBytes])

  return Rsh_Fir_user_version_inner1255301831_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1255301831_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1255301831 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1255301831/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_text;  // text
  SEXP Rsh_Fir_reg_con;  // con
  SEXP Rsh_Fir_reg_sep;  // sep
  SEXP Rsh_Fir_reg_useBytes;  // useBytes
  SEXP Rsh_Fir_reg_con_isMissing;  // con_isMissing
  SEXP Rsh_Fir_reg_con_orDefault;  // con_orDefault
  SEXP Rsh_Fir_reg_stdout;  // stdout
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sep_isMissing;  // sep_isMissing
  SEXP Rsh_Fir_reg_sep_orDefault;  // sep_orDefault
  SEXP Rsh_Fir_reg_useBytes_isMissing;  // useBytes_isMissing
  SEXP Rsh_Fir_reg_useBytes_orDefault;  // useBytes_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_text1_;  // text1
  SEXP Rsh_Fir_reg_text2_;  // text2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_con1_;  // con1
  SEXP Rsh_Fir_reg_con2_;  // con2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_con3_;  // con3
  SEXP Rsh_Fir_reg_con4_;  // con4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_text3_;  // text3
  SEXP Rsh_Fir_reg_text4_;  // text4
  SEXP Rsh_Fir_reg_con5_;  // con5
  SEXP Rsh_Fir_reg_con6_;  // con6
  SEXP Rsh_Fir_reg_sep1_;  // sep1
  SEXP Rsh_Fir_reg_sep2_;  // sep2
  SEXP Rsh_Fir_reg_useBytes1_;  // useBytes1
  SEXP Rsh_Fir_reg_useBytes2_;  // useBytes2
  SEXP Rsh_Fir_reg_writeLines;  // writeLines
  SEXP Rsh_Fir_reg_r17_;  // r17

  // Bind parameters
  Rsh_Fir_reg_text = PARAMS[0];
  Rsh_Fir_reg_con = PARAMS[1];
  Rsh_Fir_reg_sep = PARAMS[2];
  Rsh_Fir_reg_useBytes = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st text = text
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_text, RHO);
  (void)(Rsh_Fir_reg_text);
  // con_isMissing = missing.0(con)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_con;
  Rsh_Fir_reg_con_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if con_isMissing then L0() else L1(con)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_con_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(con)
    Rsh_Fir_reg_con_orDefault = Rsh_Fir_reg_con;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   stdout = ldf stdout;
  //   r = dyn stdout();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1255301831_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_con_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st con = con_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_con_orDefault, RHO);
  (void)(Rsh_Fir_reg_con_orDefault);
  // sep_isMissing = missing.0(sep)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sep;
  Rsh_Fir_reg_sep_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if sep_isMissing then L2("\n") else L2(sep)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sep_isMissing)) {
  // L2("\n")
    Rsh_Fir_reg_sep_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(sep)
    Rsh_Fir_reg_sep_orDefault = Rsh_Fir_reg_sep;
    goto L2_;
  }

L2_:;
  // st sep = sep_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_sep_orDefault, RHO);
  (void)(Rsh_Fir_reg_sep_orDefault);
  // useBytes_isMissing = missing.0(useBytes)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_useBytes;
  Rsh_Fir_reg_useBytes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if useBytes_isMissing then L3(FALSE) else L3(useBytes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_useBytes_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(useBytes)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_Fir_reg_useBytes;
    goto L3_;
  }

L3_:;
  // st useBytes = useBytes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_useBytes_orDefault, RHO);
  (void)(Rsh_Fir_reg_useBytes_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L4_:;
  // r4 = `!`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L15() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L15()
    goto L15_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `is.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L7_:;
  // c3 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c3 then L22() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L22()
    goto L22_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L10()
  // L10()
  goto L10_;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard3 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;

L12_:;
  // text1 = ld text
  Rsh_Fir_reg_text1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L13_:;
  // r2 = dyn base(<sym text>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L4_;

D0_:;
  // deopt 1 [text1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_text1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // text2 = force? text1
  Rsh_Fir_reg_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1_);
  // checkMissing(text2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c = `is.character`(text2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_text2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L4(c)
  // L4(c)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c;
  goto L4_;

L15_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r5 = dyn stop("can only write character objects")
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 8 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L6()
  // L6()
  goto L6_;

L19_:;
  // con1 = ld con
  Rsh_Fir_reg_con1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

L20_:;
  // r7 = dyn base1(<sym con>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L7_;

D3_:;
  // deopt 12 [con1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_con1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // con2 = force? con1
  Rsh_Fir_reg_con2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con1_);
  // checkMissing(con2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_con2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c2 = `is.character`(con2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_con2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L7(c2)
  // L7(c2)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_c2_;
  goto L7_;

L22_:;
  // file = ldf file
  Rsh_Fir_reg_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p1 = prom<V +>{
  //   con3 = ld con;
  //   con4 = force? con3;
  //   checkMissing(con4);
  //   return con4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1255301831_1, CCP, RHO);
  // r10 = dyn file(p1, "w")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

D5_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // st con = r10
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym2 = ldf `on.exit`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf `on.exit` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r13 = dyn on_exit(<lang close(con)>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L9(r13)
  // L9(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L9_;

L26_:;
  // r11 = dyn base2(<lang close(con)>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L9(r11)
  // L9(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L9_;

L28_:;
  // text3 = ld text
  Rsh_Fir_reg_text3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L29_:;
  // r15 = dyn base3(<lang writeLines(text, con, sep, useBytes)>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L11(r15)
  // L11(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L11_;

D6_:;
  // deopt 28 [text3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_text3_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // text4 = force? text3
  Rsh_Fir_reg_text4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text3_);
  // checkMissing(text4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_text4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // con5 = ld con
  Rsh_Fir_reg_con5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

D7_:;
  // deopt 30 [con5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_con5_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // con6 = force? con5
  Rsh_Fir_reg_con6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con5_);
  // checkMissing(con6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_con6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // sep1 = ld sep
  Rsh_Fir_reg_sep1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 32 [sep1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_sep1_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // sep2 = force? sep1
  Rsh_Fir_reg_sep2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep1_);
  // checkMissing(sep2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sep2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // useBytes1 = ld useBytes
  Rsh_Fir_reg_useBytes1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

D9_:;
  // deopt 34 [useBytes1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_useBytes1_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L33_:;
  // useBytes2 = force? useBytes1
  Rsh_Fir_reg_useBytes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useBytes1_);
  // checkMissing(useBytes2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_useBytes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // writeLines = ldf writeLines in base
  Rsh_Fir_reg_writeLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r17 = dyn writeLines(text4, con6, sep2, useBytes2)
  SEXP Rsh_Fir_array_args26[4];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_text4_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_con6_;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_sep2_;
  Rsh_Fir_array_args26[3] = Rsh_Fir_reg_useBytes2_;
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines, 4, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L34() else D10()
  // L34()
  goto L34_;

D10_:;
  // deopt 37 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L11(r17)
  // L11(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner1255301831_(SEXP CCP, SEXP RHO) {
  // stdout = ldf stdout
  Rsh_Fir_reg_stdout = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r = dyn stdout()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stdout, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1255301831_1(SEXP CCP, SEXP RHO) {
  // con3 = ld con
  Rsh_Fir_reg_con3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // con4 = force? con3
  Rsh_Fir_reg_con4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con3_);
  // checkMissing(con4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_con4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return con4
  return Rsh_Fir_reg_con4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
