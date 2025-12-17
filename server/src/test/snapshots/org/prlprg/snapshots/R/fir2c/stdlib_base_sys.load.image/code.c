#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3604100753_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3604100753_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3604100753_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3604100753_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3604100753_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3604100753
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3604100753_, RHO, CCP);
  // st `sys.load.image` = r
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
SEXP Rsh_Fir_user_function_inner3604100753_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3604100753 dynamic dispatch ([name, quiet])

  return Rsh_Fir_user_version_inner3604100753_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3604100753_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3604100753 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3604100753/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_quiet;  // quiet
  SEXP Rsh_Fir_reg_file_exists;  // file_exists
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_load;  // load
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg__GlobalEnv;  // _GlobalEnv
  SEXP Rsh_Fir_reg__GlobalEnv1_;  // _GlobalEnv1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_RNGkind;  // RNGkind
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sample_kind;  // sample_kind
  SEXP Rsh_Fir_reg_sample_kind1_;  // sample_kind1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_quiet1_;  // quiet1
  SEXP Rsh_Fir_reg_quiet2_;  // quiet2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_message;  // message
  SEXP Rsh_Fir_reg_r15_;  // r15

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_quiet = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st quiet = quiet
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_quiet, RHO);
  (void)(Rsh_Fir_reg_quiet);
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L0_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 4);

L1_:;
  // c1 = `is.object`(r6)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c1 then L14() else L15(r6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L15(r6)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r6_;
    goto L15_;
  }

L2_:;
  // st `sample.kind` = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sample_kind = ld `sample.kind`
  Rsh_Fir_reg_sample_kind = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // quiet1 = ld quiet
  Rsh_Fir_reg_quiet1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

L5_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 4);

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3604100753_, CCP, RHO);
  // r1 = dyn file_exists(p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L8() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L8()
    goto L8_;
  } else {
  // L0()
    goto L0_;
  }

L8_:;
  // load = ldf load
  Rsh_Fir_reg_load = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   name3 = ld name;
  //   name4 = force? name3;
  //   checkMissing(name4);
  //   return name4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3604100753_1, CCP, RHO);
  // p2 = prom<V +>{
  //   _GlobalEnv = ld `.GlobalEnv`;
  //   _GlobalEnv1 = force? _GlobalEnv;
  //   checkMissing(_GlobalEnv1);
  //   return _GlobalEnv1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3604100753_2, CCP, RHO);
  // r4 = dyn load[, envir](p1, p2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_load, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // RNGkind = ldf RNGkind in base
  Rsh_Fir_reg_RNGkind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r7 = dyn RNGkind(NULL, NULL, NULL)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_RNGkind, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

L12_:;
  // r5 = dyn base(<lang RNGkind(NULL, NULL, NULL)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L1_;

D4_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L1_;

L14_:;
  // dr = tryDispatchBuiltin.1("[", r6)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc then L16() else L15(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L16()
    goto L16_;
  } else {
  // L15(dr)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_dr;
    goto L15_;
  }

L15_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r10 = dyn __(r9, 3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L2_;

L16_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D5_:;
  // deopt 21 [sample_kind]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_sample_kind;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // sample_kind1 = force? sample_kind
  Rsh_Fir_reg_sample_kind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind);
  // checkMissing(sample_kind1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sample_kind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // r11 = `==`(sample_kind1, 0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sample_kind1_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c2 then L18() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L18()
    goto L18_;
  } else {
  // L3()
    goto L3_;
  }

L18_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // r12 = dyn warning[, domain]("non-uniform 'Rounding' sampler used", NA_LGL)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 30 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L4()
  // L4()
  goto L4_;

D8_:;
  // deopt 33 [quiet1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_quiet1_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // quiet2 = force? quiet1
  Rsh_Fir_reg_quiet2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quiet1_);
  // checkMissing(quiet2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_quiet2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r14 = `!`(quiet2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_quiet2_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c3 then L23() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L23()
    goto L23_;
  } else {
  // L5()
    goto L5_;
  }

L23_:;
  // message = ldf message
  Rsh_Fir_reg_message = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r15 = dyn message("[Previously saved workspace restored]", "\n")
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 40 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_inner3604100753_(SEXP CCP, SEXP RHO) {
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
SEXP Rsh_Fir_user_promise_inner3604100753_1(SEXP CCP, SEXP RHO) {
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return name4
  return Rsh_Fir_reg_name4_;
}
SEXP Rsh_Fir_user_promise_inner3604100753_2(SEXP CCP, SEXP RHO) {
  // _GlobalEnv = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // _GlobalEnv1 = force? _GlobalEnv
  Rsh_Fir_reg__GlobalEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv);
  // checkMissing(_GlobalEnv1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg__GlobalEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return _GlobalEnv1
  return Rsh_Fir_reg__GlobalEnv1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
