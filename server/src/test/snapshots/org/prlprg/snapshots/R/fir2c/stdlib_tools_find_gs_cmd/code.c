#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1392412786_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1392412786_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1392412786_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1392412786_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1392412786_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner1392412786
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1392412786_, RHO, CCP);
  // st find_gs_cmd = r
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
SEXP Rsh_Fir_user_function_inner1392412786_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1392412786 dynamic dispatch ([gs_cmd])

  return Rsh_Fir_user_version_inner1392412786_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1392412786_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1392412786 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1392412786/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_gs_cmd;  // gs_cmd
  SEXP Rsh_Fir_reg_gs_cmd_isMissing;  // gs_cmd_isMissing
  SEXP Rsh_Fir_reg_gs_cmd_orDefault;  // gs_cmd_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_gs_cmd1_;  // gs_cmd1
  SEXP Rsh_Fir_reg_gs_cmd2_;  // gs_cmd2
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_Sys_getenv;  // Sys_getenv
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_gsexe;  // gsexe
  SEXP Rsh_Fir_reg_gsexe1_;  // gsexe1
  SEXP Rsh_Fir_reg_nzchar1_;  // nzchar1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_Sys_getenv1_;  // Sys_getenv1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_Sys_which;  // Sys_which
  SEXP Rsh_Fir_reg_gsexe2_;  // gsexe2
  SEXP Rsh_Fir_reg_gsexe3_;  // gsexe3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_gs_cmd3_;  // gs_cmd3
  SEXP Rsh_Fir_reg_gs_cmd4_;  // gs_cmd4
  SEXP Rsh_Fir_reg_nzchar2_;  // nzchar2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_Sys_which1_;  // Sys_which1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_gs_cmd5_;  // gs_cmd5
  SEXP Rsh_Fir_reg_gs_cmd6_;  // gs_cmd6
  SEXP Rsh_Fir_reg_nzchar3_;  // nzchar3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_Sys_which2_;  // Sys_which2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_gs_cmd7_;  // gs_cmd7
  SEXP Rsh_Fir_reg_gs_cmd8_;  // gs_cmd8
  SEXP Rsh_Fir_reg_Sys_which3_;  // Sys_which3
  SEXP Rsh_Fir_reg_Sys_getenv2_;  // Sys_getenv2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_Sys_which4_;  // Sys_which4
  SEXP Rsh_Fir_reg_gs_cmd9_;  // gs_cmd9
  SEXP Rsh_Fir_reg_gs_cmd10_;  // gs_cmd10
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r31_;  // r31

  // Bind parameters
  Rsh_Fir_reg_gs_cmd = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // gs_cmd_isMissing = missing.0(gs_cmd)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_gs_cmd;
  Rsh_Fir_reg_gs_cmd_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if gs_cmd_isMissing then L0("") else L0(gs_cmd)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_gs_cmd_isMissing)) {
  // L0("")
    Rsh_Fir_reg_gs_cmd_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(gs_cmd)
    Rsh_Fir_reg_gs_cmd_orDefault = Rsh_Fir_reg_gs_cmd;
    goto L0_;
  }

L0_:;
  // st gs_cmd = gs_cmd_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_gs_cmd_orDefault, RHO);
  (void)(Rsh_Fir_reg_gs_cmd_orDefault);
  // sym = ldf nzchar
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf nzchar in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L17() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // Sys_which4 = ldf `Sys.which`
  Rsh_Fir_reg_Sys_which4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L57() else D22()
  // L57()
  goto L57_;

L3_:;
  // Sys_which3 = ldf `Sys.which`
  Rsh_Fir_reg_Sys_which3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L54() else D20()
  // L54()
  goto L54_;

L4_:;
  // r10 = `!`(r8)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c3 then L30() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L30()
    goto L30_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // Sys_which = ldf `Sys.which`
  Rsh_Fir_reg_Sys_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

L7_:;
  // r18 = `!`(r16)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c4 then L40() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L40()
    goto L40_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym3 = ldf nzchar
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base3 = ldf nzchar in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard3 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L10_:;
  // r24 = `!`(r22)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c5 then L48() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L48()
    goto L48_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // gs_cmd7 = ld gs_cmd
  Rsh_Fir_reg_gs_cmd7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L52() else D19()
  // L52()
  goto L52_;

L13_:;
  // gs_cmd1 = ld gs_cmd
  Rsh_Fir_reg_gs_cmd1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base(<sym gs_cmd>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [gs_cmd1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_gs_cmd1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // gs_cmd2 = force? gs_cmd1
  Rsh_Fir_reg_gs_cmd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gs_cmd1_);
  // checkMissing(gs_cmd2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_gs_cmd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn nzchar(gs_cmd2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_gs_cmd2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L17_:;
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D2_:;
  // deopt 7 [_Platform]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L21(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L21(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L21_;
  }

L19_:;
  // r5 = `==`(dx1, "windows")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c2 then L23() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L23()
    goto L23_;
  } else {
  // L3()
    goto L3_;
  }

L20_:;
  // dr = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L22() else L21(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L22()
    goto L22_;
  } else {
  // L21(dr)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr;
    goto L21_;
  }

L21_:;
  // r4 = `$`(_Platform3, <sym OS.type>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L19(r4)
  // L19(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L19_;

L22_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L19(dx)
  // L19(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L19_;

L23_:;
  // Sys_getenv = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r6 = dyn Sys_getenv("R_GSCMD")
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

D4_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // st gsexe = r6
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf nzchar
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf nzchar in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard1 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // gsexe = ld gsexe
  Rsh_Fir_reg_gsexe = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L27_:;
  // r7 = dyn base1(<sym gsexe>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D5_:;
  // deopt 19 [gsexe]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_gsexe;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // gsexe1 = force? gsexe
  Rsh_Fir_reg_gsexe1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gsexe);
  // checkMissing(gsexe1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_gsexe1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // nzchar1 = ldf nzchar in base
  Rsh_Fir_reg_nzchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r9 = dyn nzchar1(gsexe1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_gsexe1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

D6_:;
  // deopt 22 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L4_;

L30_:;
  // Sys_getenv1 = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

D7_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // r11 = dyn Sys_getenv1("GSC")
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 27 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // st gsexe = r11
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // goto L6()
  // L6()
  goto L6_;

D9_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p = prom<V +>{
  //   gsexe2 = ld gsexe;
  //   gsexe3 = force? gsexe2;
  //   checkMissing(gsexe3);
  //   return gsexe3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1392412786_, CCP, RHO);
  // r14 = dyn Sys_which(p)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_which, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

D10_:;
  // deopt 34 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // st gs_cmd = r14
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym2 = ldf nzchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf nzchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // gs_cmd3 = ld gs_cmd
  Rsh_Fir_reg_gs_cmd3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

L37_:;
  // r15 = dyn base2(<sym gs_cmd>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L7_;

D11_:;
  // deopt 38 [gs_cmd3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_gs_cmd3_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // gs_cmd4 = force? gs_cmd3
  Rsh_Fir_reg_gs_cmd4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gs_cmd3_);
  // checkMissing(gs_cmd4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_gs_cmd4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // nzchar2 = ldf nzchar in base
  Rsh_Fir_reg_nzchar2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r17 = dyn nzchar2(gs_cmd4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_gs_cmd4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

D12_:;
  // deopt 41 [r17]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L7_;

L40_:;
  // Sys_which1 = ldf `Sys.which`
  Rsh_Fir_reg_Sys_which1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L41() else D13()
  // L41()
  goto L41_;

D13_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // r19 = dyn Sys_which1("gswin64c")
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_which1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L42() else D14()
  // L42()
  goto L42_;

D14_:;
  // deopt 46 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L42_:;
  // st gs_cmd = r19
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // goto L9()
  // L9()
  goto L9_;

L44_:;
  // gs_cmd5 = ld gs_cmd
  Rsh_Fir_reg_gs_cmd5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L46() else D15()
  // L46()
  goto L46_;

L45_:;
  // r21 = dyn base3(<sym gs_cmd>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L10_;

D15_:;
  // deopt 52 [gs_cmd5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_gs_cmd5_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L46_:;
  // gs_cmd6 = force? gs_cmd5
  Rsh_Fir_reg_gs_cmd6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gs_cmd5_);
  // checkMissing(gs_cmd6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_gs_cmd6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // nzchar3 = ldf nzchar in base
  Rsh_Fir_reg_nzchar3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r23 = dyn nzchar3(gs_cmd6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_gs_cmd6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L47() else D16()
  // L47()
  goto L47_;

D16_:;
  // deopt 55 [r23]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L10_;

L48_:;
  // Sys_which2 = ldf `Sys.which`
  Rsh_Fir_reg_Sys_which2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L49() else D17()
  // L49()
  goto L49_;

D17_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // r25 = dyn Sys_which2("gswin32c")
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_which2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L50() else D18()
  // L50()
  goto L50_;

D18_:;
  // deopt 60 [r25]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L50_:;
  // st gs_cmd = r25
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // goto L12()
  // L12()
  goto L12_;

D19_:;
  // deopt 64 [gs_cmd7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_gs_cmd7_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L52_:;
  // gs_cmd8 = force? gs_cmd7
  Rsh_Fir_reg_gs_cmd8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gs_cmd7_);
  // checkMissing(gs_cmd8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_gs_cmd8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return gs_cmd8
  return Rsh_Fir_reg_gs_cmd8_;

D20_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p1 = prom<V +>{
  //   Sys_getenv2 = ldf `Sys.getenv`;
  //   r27 = dyn Sys_getenv2("R_GSCMD", "gs");
  //   return r27;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1392412786_1, CCP, RHO);
  // r29 = dyn Sys_which3(p1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_which3_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L55() else D21()
  // L55()
  goto L55_;

D21_:;
  // deopt 69 [r29]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L55_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r29
  return Rsh_Fir_reg_r29_;

D22_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // p2 = prom<V +>{
  //   gs_cmd9 = ld gs_cmd;
  //   gs_cmd10 = force? gs_cmd9;
  //   checkMissing(gs_cmd10);
  //   return gs_cmd10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1392412786_2, CCP, RHO);
  // r31 = dyn Sys_which4(p2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_which4_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L58() else D23()
  // L58()
  goto L58_;

D23_:;
  // deopt 73 [r31]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L58_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;
}
SEXP Rsh_Fir_user_promise_inner1392412786_(SEXP CCP, SEXP RHO) {
  // gsexe2 = ld gsexe
  Rsh_Fir_reg_gsexe2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // gsexe3 = force? gsexe2
  Rsh_Fir_reg_gsexe3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gsexe2_);
  // checkMissing(gsexe3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_gsexe3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return gsexe3
  return Rsh_Fir_reg_gsexe3_;
}
SEXP Rsh_Fir_user_promise_inner1392412786_1(SEXP CCP, SEXP RHO) {
  // Sys_getenv2 = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r27 = dyn Sys_getenv2("R_GSCMD", "gs")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv2_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r27
  return Rsh_Fir_reg_r27_;
}
SEXP Rsh_Fir_user_promise_inner1392412786_2(SEXP CCP, SEXP RHO) {
  // gs_cmd9 = ld gs_cmd
  Rsh_Fir_reg_gs_cmd9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // gs_cmd10 = force? gs_cmd9
  Rsh_Fir_reg_gs_cmd10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gs_cmd9_);
  // checkMissing(gs_cmd10)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_gs_cmd10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return gs_cmd10
  return Rsh_Fir_reg_gs_cmd10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
