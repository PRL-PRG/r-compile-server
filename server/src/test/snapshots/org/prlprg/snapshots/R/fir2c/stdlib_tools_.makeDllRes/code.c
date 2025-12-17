#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1313621415_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1313621415_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1313621415_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1313621415_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1313621415_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1313621415_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1313621415_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1313621415_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1313621415_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner1313621415
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1313621415_, RHO, CCP);
  // st `.makeDllRes` = r
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
SEXP Rsh_Fir_user_function_inner1313621415_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1313621415 dynamic dispatch ([name, version])

  return Rsh_Fir_user_version_inner1313621415_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1313621415_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1313621415 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1313621415/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_version;  // version
  SEXP Rsh_Fir_reg_name_isMissing;  // name_isMissing
  SEXP Rsh_Fir_reg_name_orDefault;  // name_orDefault
  SEXP Rsh_Fir_reg_version_isMissing;  // version_isMissing
  SEXP Rsh_Fir_reg_version_orDefault;  // version_orDefault
  SEXP Rsh_Fir_reg_file_exists;  // file_exists
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_file_exists1_;  // file_exists1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_read_dcf;  // read_dcf
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_desc;  // desc
  SEXP Rsh_Fir_reg_desc1_;  // desc1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_desc3_;  // desc3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_desc4_;  // desc4
  SEXP Rsh_Fir_reg_desc5_;  // desc5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_desc7_;  // desc7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_f5_;  // f5
  SEXP Rsh_Fir_reg_f6_;  // f6
  SEXP Rsh_Fir_reg_f7_;  // f7
  SEXP Rsh_Fir_reg_writeLines;  // writeLines
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_version1_;  // version1
  SEXP Rsh_Fir_reg_version2_;  // version2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_writeLines1_;  // writeLines1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r31_;  // r31

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_version = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // name_isMissing = missing.0(name)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_name;
  Rsh_Fir_reg_name_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if name_isMissing then L0("") else L0(name)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_name_isMissing)) {
  // L0("")
    Rsh_Fir_reg_name_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(name)
    Rsh_Fir_reg_name_orDefault = Rsh_Fir_reg_name;
    goto L0_;
  }

L0_:;
  // st name = name_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_name_orDefault, RHO);
  (void)(Rsh_Fir_reg_name_orDefault);
  // version_isMissing = missing.0(version)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_version;
  Rsh_Fir_reg_version_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if version_isMissing then L1("0.0") else L1(version)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_version_isMissing)) {
  // L1("0.0")
    Rsh_Fir_reg_version_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(version)
    Rsh_Fir_reg_version_orDefault = Rsh_Fir_reg_version;
    goto L1_;
  }

L1_:;
  // st version = version_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_version_orDefault, RHO);
  (void)(Rsh_Fir_reg_version_orDefault);
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L2_:;
  // c6 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c6 then L20() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L20()
    goto L20_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L13()
  // L13()
  goto L13_;

L4_:;
  // st desc = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L5_:;
  // r13 = `!`(r10)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c9 then L33() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L33()
    goto L33_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // st f = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r12 = dyn is_na(dx3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L9_:;
  // r18 = `!`(r15)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c11 then L43() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L43()
    goto L43_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // st f = dx5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r17 = dyn is_na1(dx5)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L42() else D10()
  // L42()
  goto L42_;

L11_:;
  // goto L12(NULL)
  // L12(NULL)
  Rsh_Fir_reg_f7_ = Rsh_const(CCP, 9);
  goto L12_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // writeLines = ldf writeLines
  Rsh_Fir_reg_writeLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L47() else D12()
  // L47()
  goto L47_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   st f = "../DESCRIPTION";
  //   invisible.0();
  //   return "../DESCRIPTION";
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1313621415_, CCP, RHO);
  // r1 = dyn file_exists(p)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c then L2(c) else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L2_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // file_exists1 = ldf `file.exists`
  Rsh_Fir_reg_file_exists1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 5 [c]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // p1 = prom<V +>{
  //   st f = "../../DESCRIPTION";
  //   invisible.0();
  //   return "../../DESCRIPTION";
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1313621415_1, CCP, RHO);
  // r3 = dyn file_exists1(p1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

D3_:;
  // deopt 7 [c, r3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // c3 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c4 = `||`(c, c3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L2(c4)
  // L2(c4)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c4_;
  goto L2_;

L20_:;
  // read_dcf = ldf `read.dcf`
  Rsh_Fir_reg_read_dcf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

D4_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p2 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1313621415_2, CCP, RHO);
  // r5 = dyn read_dcf(p2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_read_dcf, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

D5_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // c7 = `is.object`(r5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c7 then L23() else L24(r5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L23()
    goto L23_;
  } else {
  // L24(r5)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r5_;
    goto L24_;
  }

L23_:;
  // dr = tryDispatchBuiltin.1("[[", r5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L25() else L24(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L25()
    goto L25_;
  } else {
  // L24(dr)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_dr;
    goto L24_;
  }

L24_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r8 = dyn __(r7, 1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L4_;

L25_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

L26_:;
  // desc = ld desc
  Rsh_Fir_reg_desc = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

L27_:;
  // r9 = dyn base(<lang `<-`(f, `[`(desc, "Package"))>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

D6_:;
  // deopt 19 [desc]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_desc;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // desc1 = force? desc
  Rsh_Fir_reg_desc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_desc);
  // checkMissing(desc1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_desc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(desc1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_desc1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c8 then L29() else L30(desc1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L29()
    goto L29_;
  } else {
  // L30(desc1)
    Rsh_Fir_reg_desc3_ = Rsh_Fir_reg_desc1_;
    goto L30_;
  }

L29_:;
  // dr2 = tryDispatchBuiltin.1("[", desc1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_desc1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc1 then L31() else L30(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr2)
    Rsh_Fir_reg_desc3_ = Rsh_Fir_reg_dr2_;
    goto L30_;
  }

L30_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r11 = dyn __1(desc3, "Package")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_desc3_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L6_;

L31_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L6(dx2)
  // L6(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L6_;

D7_:;
  // deopt 26 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r12_;
  goto L5_;

L33_:;
  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

D8_:;
  // deopt 28 [f2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_f2_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // st name = f3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_f3_, RHO);
  (void)(Rsh_Fir_reg_f3_);
  // goto L8()
  // L8()
  goto L8_;

L36_:;
  // desc4 = ld desc
  Rsh_Fir_reg_desc4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

L37_:;
  // r14 = dyn base1(<lang `<-`(f, `[`(desc, "Version"))>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(r14)
  // L9(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L9_;

D9_:;
  // deopt 35 [desc4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_desc4_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // desc5 = force? desc4
  Rsh_Fir_reg_desc5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_desc4_);
  // checkMissing(desc5)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_desc5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(desc5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_desc5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c10 then L39() else L40(desc5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L39()
    goto L39_;
  } else {
  // L40(desc5)
    Rsh_Fir_reg_desc7_ = Rsh_Fir_reg_desc5_;
    goto L40_;
  }

L39_:;
  // dr4 = tryDispatchBuiltin.1("[", desc5)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_desc5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc2 then L41() else L40(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L41()
    goto L41_;
  } else {
  // L40(dr4)
    Rsh_Fir_reg_desc7_ = Rsh_Fir_reg_dr4_;
    goto L40_;
  }

L40_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r16 = dyn __2(desc7, "Version")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_desc7_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L10(r16)
  // L10(r16)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r16_;
  goto L10_;

L41_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L10(dx4)
  // L10(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

D10_:;
  // deopt 42 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r17_;
  goto L9_;

L43_:;
  // f5 = ld f
  Rsh_Fir_reg_f5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L44() else D11()
  // L44()
  goto L44_;

D11_:;
  // deopt 44 [f5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_f5_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L44_:;
  // f6 = force? f5
  Rsh_Fir_reg_f6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f5_);
  // checkMissing(f6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_f6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // st version = f6
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_f6_, RHO);
  (void)(Rsh_Fir_reg_f6_);
  // goto L12(f6)
  // L12(f6)
  Rsh_Fir_reg_f7_ = Rsh_Fir_reg_f6_;
  goto L12_;

D12_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p3 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r20):
  //   return r20;
  // L1():
  //   c12 = ldf c in base;
  //   r21 = dyn c12("#include <windows.h>", "#include \"Rversion.h\"", "", "VS_VERSION_INFO VERSIONINFO", "FILEVERSION R_FILEVERSION", "PRODUCTVERSION 3,0,0,0", "FILEFLAGSMASK 0x3L", "FILEOS VOS__WINDOWS32", "FILETYPE VFT_APP", "BEGIN", "    BLOCK \"StringFileInfo\"", "    BEGIN", "        BLOCK \"040904E4\"", "        BEGIN");
  //   goto L0(r21);
  // L2():
  //   r19 = dyn base2("#include <windows.h>", "#include \"Rversion.h\"", "", "VS_VERSION_INFO VERSIONINFO", "FILEVERSION R_FILEVERSION", "PRODUCTVERSION 3,0,0,0", "FILEFLAGSMASK 0x3L", "FILEOS VOS__WINDOWS32", "FILETYPE VFT_APP", "BEGIN", "    BLOCK \"StringFileInfo\"", "    BEGIN", "        BLOCK \"040904E4\"", "        BEGIN");
  //   goto L0(r19);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1313621415_3, CCP, RHO);
  // r23 = dyn writeLines(p3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L48() else D13()
  // L48()
  goto L48_;

D13_:;
  // deopt 54 [r23]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L48_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

D14_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p4 = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1313621415_4, CCP, RHO);
  // p5 = prom<V +>{
  //   version1 = ld version;
  //   version2 = force? version1;
  //   checkMissing(version2);
  //   return version2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1313621415_5, CCP, RHO);
  // r26 = dyn cat[, , , , , , sep]("            VALUE \"FileDescription\", \"DLL for R package `", p4, "'\\0\"\n", "            VALUE \"FileVersion\", \"", p5, "\\0\"\n", "")
  SEXP Rsh_Fir_array_args45[7];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args45[3] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args45[4] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args45[5] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args45[6] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[7];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_array_arg_names13[6] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 7, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

D15_:;
  // deopt 65 [r26]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // writeLines1 = ldf writeLines
  Rsh_Fir_reg_writeLines1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L51() else D16()
  // L51()
  goto L51_;

D16_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p6 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r28):
  //   return r28;
  // L1():
  //   c13 = ldf c in base;
  //   r29 = dyn c13("            VALUE \"Compiled under R Version\", R_MAJOR \".\" R_MINOR \" (\" R_YEAR \"-\" R_MONTH \"-\" R_DAY \")\\0\"", "            VALUE \"Project info\", \"https://www.r-project.org\\0\"", "        END", "    END", "    BLOCK \"VarFileInfo\"", "    BEGIN", "        VALUE \"Translation\", 0x409, 1252", "    END", "END");
  //   goto L0(r29);
  // L2():
  //   r27 = dyn base3("            VALUE \"Compiled under R Version\", R_MAJOR \".\" R_MINOR \" (\" R_YEAR \"-\" R_MONTH \"-\" R_DAY \")\\0\"", "            VALUE \"Project info\", \"https://www.r-project.org\\0\"", "        END", "    END", "    BLOCK \"VarFileInfo\"", "    BEGIN", "        VALUE \"Translation\", 0x409, 1252", "    END", "END");
  //   goto L0(r27);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1313621415_6, CCP, RHO);
  // r31 = dyn writeLines1(p6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines1_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L52() else D17()
  // L52()
  goto L52_;

D17_:;
  // deopt 69 [r31]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L52_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;
}
SEXP Rsh_Fir_user_promise_inner1313621415_(SEXP CCP, SEXP RHO) {
  // st f = "../DESCRIPTION"
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // return "../DESCRIPTION"
  return Rsh_const(CCP, 11);
}
SEXP Rsh_Fir_user_promise_inner1313621415_1(SEXP CCP, SEXP RHO) {
  // st f = "../../DESCRIPTION"
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_const(CCP, 12), RHO);
  (void)(Rsh_const(CCP, 12));
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // return "../../DESCRIPTION"
  return Rsh_const(CCP, 12);
}
SEXP Rsh_Fir_user_promise_inner1313621415_2(SEXP CCP, SEXP RHO) {
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner1313621415_3(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r20
  return Rsh_Fir_reg_r20_;

L1_:;
  // c12 = ldf c in base
  Rsh_Fir_reg_c12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r21 = dyn c12("#include <windows.h>", "#include \"Rversion.h\"", "", "VS_VERSION_INFO VERSIONINFO", "FILEVERSION R_FILEVERSION", "PRODUCTVERSION 3,0,0,0", "FILEFLAGSMASK 0x3L", "FILEOS VOS__WINDOWS32", "FILETYPE VFT_APP", "BEGIN", "    BLOCK \"StringFileInfo\"", "    BEGIN", "        BLOCK \"040904E4\"", "        BEGIN")
  SEXP Rsh_Fir_array_args40[14];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args40[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args40[5] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args40[6] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args40[7] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args40[8] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args40[9] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args40[10] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args40[11] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args40[12] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args40[13] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names10[14];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_array_arg_names10[6] = R_MissingArg;
  Rsh_Fir_array_arg_names10[7] = R_MissingArg;
  Rsh_Fir_array_arg_names10[8] = R_MissingArg;
  Rsh_Fir_array_arg_names10[9] = R_MissingArg;
  Rsh_Fir_array_arg_names10[10] = R_MissingArg;
  Rsh_Fir_array_arg_names10[11] = R_MissingArg;
  Rsh_Fir_array_arg_names10[12] = R_MissingArg;
  Rsh_Fir_array_arg_names10[13] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c12_, 14, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L0_;

L2_:;
  // r19 = dyn base2("#include <windows.h>", "#include \"Rversion.h\"", "", "VS_VERSION_INFO VERSIONINFO", "FILEVERSION R_FILEVERSION", "PRODUCTVERSION 3,0,0,0", "FILEFLAGSMASK 0x3L", "FILEOS VOS__WINDOWS32", "FILETYPE VFT_APP", "BEGIN", "    BLOCK \"StringFileInfo\"", "    BEGIN", "        BLOCK \"040904E4\"", "        BEGIN")
  SEXP Rsh_Fir_array_args41[14];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args41[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args41[5] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args41[6] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args41[7] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args41[8] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args41[9] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args41[10] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args41[11] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args41[12] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args41[13] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names11[14];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_array_arg_names11[7] = R_MissingArg;
  Rsh_Fir_array_arg_names11[8] = R_MissingArg;
  Rsh_Fir_array_arg_names11[9] = R_MissingArg;
  Rsh_Fir_array_arg_names11[10] = R_MissingArg;
  Rsh_Fir_array_arg_names11[11] = R_MissingArg;
  Rsh_Fir_array_arg_names11[12] = R_MissingArg;
  Rsh_Fir_array_arg_names11[13] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 14, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1313621415_4(SEXP CCP, SEXP RHO) {
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
SEXP Rsh_Fir_user_promise_inner1313621415_5(SEXP CCP, SEXP RHO) {
  // version1 = ld version
  Rsh_Fir_reg_version1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // version2 = force? version1
  Rsh_Fir_reg_version2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_version1_);
  // checkMissing(version2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_version2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return version2
  return Rsh_Fir_reg_version2_;
}
SEXP Rsh_Fir_user_promise_inner1313621415_6(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r29 = dyn c13("            VALUE \"Compiled under R Version\", R_MAJOR \".\" R_MINOR \" (\" R_YEAR \"-\" R_MONTH \"-\" R_DAY \")\\0\"", "            VALUE \"Project info\", \"https://www.r-project.org\\0\"", "        END", "    END", "    BLOCK \"VarFileInfo\"", "    BEGIN", "        VALUE \"Translation\", 0x409, 1252", "    END", "END")
  SEXP Rsh_Fir_array_args47[9];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args47[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args47[3] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args47[4] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args47[5] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args47[6] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args47[7] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args47[8] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names14[9];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_array_arg_names14[5] = R_MissingArg;
  Rsh_Fir_array_arg_names14[6] = R_MissingArg;
  Rsh_Fir_array_arg_names14[7] = R_MissingArg;
  Rsh_Fir_array_arg_names14[8] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 9, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r27 = dyn base3("            VALUE \"Compiled under R Version\", R_MAJOR \".\" R_MINOR \" (\" R_YEAR \"-\" R_MONTH \"-\" R_DAY \")\\0\"", "            VALUE \"Project info\", \"https://www.r-project.org\\0\"", "        END", "    END", "    BLOCK \"VarFileInfo\"", "    BEGIN", "        VALUE \"Translation\", 0x409, 1252", "    END", "END")
  SEXP Rsh_Fir_array_args48[9];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args48[3] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args48[4] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args48[5] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args48[6] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args48[7] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args48[8] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names15[9];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = R_MissingArg;
  Rsh_Fir_array_arg_names15[6] = R_MissingArg;
  Rsh_Fir_array_arg_names15[7] = R_MissingArg;
  Rsh_Fir_array_arg_names15[8] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 9, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
