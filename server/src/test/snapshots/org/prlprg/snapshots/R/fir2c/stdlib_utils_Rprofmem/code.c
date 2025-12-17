#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner11835980_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner11835980_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner11835980
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner11835980_, RHO, CCP);
  // st Rprofmem = r
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
SEXP Rsh_Fir_user_function_inner11835980_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner11835980 dynamic dispatch ([filename, append, threshold])

  return Rsh_Fir_user_version_inner11835980_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner11835980_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner11835980 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner11835980/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_filename;  // filename
  SEXP Rsh_Fir_reg_append;  // append
  SEXP Rsh_Fir_reg_threshold;  // threshold
  SEXP Rsh_Fir_reg_filename_isMissing;  // filename_isMissing
  SEXP Rsh_Fir_reg_filename_orDefault;  // filename_orDefault
  SEXP Rsh_Fir_reg_append_isMissing;  // append_isMissing
  SEXP Rsh_Fir_reg_append_orDefault;  // append_orDefault
  SEXP Rsh_Fir_reg_threshold_isMissing;  // threshold_isMissing
  SEXP Rsh_Fir_reg_threshold_orDefault;  // threshold_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_filename1_;  // filename1
  SEXP Rsh_Fir_reg_filename2_;  // filename2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_C_Rprofmem;  // C_Rprofmem
  SEXP Rsh_Fir_reg_C_Rprofmem1_;  // C_Rprofmem1
  SEXP Rsh_Fir_reg_filename3_;  // filename3
  SEXP Rsh_Fir_reg_filename4_;  // filename4
  SEXP Rsh_Fir_reg_append1_;  // append1
  SEXP Rsh_Fir_reg_append2_;  // append2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_threshold1_;  // threshold1
  SEXP Rsh_Fir_reg_threshold2_;  // threshold2
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg__External;  // _External
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r11_;  // r11

  // Bind parameters
  Rsh_Fir_reg_filename = PARAMS[0];
  Rsh_Fir_reg_append = PARAMS[1];
  Rsh_Fir_reg_threshold = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // filename_isMissing = missing.0(filename)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_filename;
  Rsh_Fir_reg_filename_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if filename_isMissing then L0("Rprofmem.out") else L0(filename)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_filename_isMissing)) {
  // L0("Rprofmem.out")
    Rsh_Fir_reg_filename_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(filename)
    Rsh_Fir_reg_filename_orDefault = Rsh_Fir_reg_filename;
    goto L0_;
  }

L0_:;
  // st filename = filename_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_filename_orDefault, RHO);
  (void)(Rsh_Fir_reg_filename_orDefault);
  // append_isMissing = missing.0(append)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_append;
  Rsh_Fir_reg_append_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if append_isMissing then L1(FALSE) else L1(append)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_append_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_append_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(append)
    Rsh_Fir_reg_append_orDefault = Rsh_Fir_reg_append;
    goto L1_;
  }

L1_:;
  // st append = append_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_append_orDefault, RHO);
  (void)(Rsh_Fir_reg_append_orDefault);
  // threshold_isMissing = missing.0(threshold)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_threshold;
  Rsh_Fir_reg_threshold_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if threshold_isMissing then L2(0.0) else L2(threshold)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_threshold_isMissing)) {
  // L2(0.0)
    Rsh_Fir_reg_threshold_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(threshold)
    Rsh_Fir_reg_threshold_orDefault = Rsh_Fir_reg_threshold;
    goto L2_;
  }

L2_:;
  // st threshold = threshold_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_threshold_orDefault, RHO);
  (void)(Rsh_Fir_reg_threshold_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L3_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L12() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym1 = ldf invisible
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf invisible in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L7_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r11 = dyn invisible(r6)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

L8_:;
  // _External = ldf `.External` in base
  Rsh_Fir_reg__External = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r10 = dyn _External(C_Rprofmem1, filename4, append2, r8)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_C_Rprofmem1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_filename4_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_append2_;
  Rsh_Fir_array_args7[3] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External, 4, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

L9_:;
  // filename1 = ld filename
  Rsh_Fir_reg_filename1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<sym filename>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 1 [filename1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_filename1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // filename2 = force? filename1
  Rsh_Fir_reg_filename2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename1_);
  // checkMissing(filename2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_filename2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `==`(filename2, NULL)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_filename2_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L3(c)
  // L3(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L3_;

L12_:;
  // st filename = ""
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // goto L5()
  // L5()
  goto L5_;

L14_:;
  // sym2 = ldf `.External`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf `.External` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L15_:;
  // r3 = dyn base1(<lang .External(C_Rprofmem, filename, append, as.double(threshold))>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r3)
  // L6(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L6_;

L16_:;
  // C_Rprofmem = ld C_Rprofmem
  Rsh_Fir_reg_C_Rprofmem = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L17_:;
  // r5 = dyn base2(<sym C_Rprofmem>, <sym filename>, <sym append>, <lang as.double(threshold)>)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L7(r5)
  // L7(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L7_;

D1_:;
  // deopt 13 [C_Rprofmem]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_Rprofmem;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // C_Rprofmem1 = force? C_Rprofmem
  Rsh_Fir_reg_C_Rprofmem1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_Rprofmem);
  // checkMissing(C_Rprofmem1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_C_Rprofmem1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // filename3 = ld filename
  Rsh_Fir_reg_filename3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 15 [filename3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_filename3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // filename4 = force? filename3
  Rsh_Fir_reg_filename4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename3_);
  // checkMissing(filename4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_filename4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // append1 = ld append
  Rsh_Fir_reg_append1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

D3_:;
  // deopt 17 [append1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_append1_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // append2 = force? append1
  Rsh_Fir_reg_append2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_append1_);
  // checkMissing(append2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_append2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // sym3 = ldf `as.double`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base3 = ldf `as.double` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard3 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // threshold1 = ld threshold
  Rsh_Fir_reg_threshold1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r7 = dyn base3(<sym threshold>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L8(r7)
  // L8(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L8_;

D4_:;
  // deopt 21 [threshold1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_threshold1_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // threshold2 = force? threshold1
  Rsh_Fir_reg_threshold2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_threshold1_);
  // checkMissing(threshold2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_threshold2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r9 = dyn as_double(threshold2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_threshold2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

D5_:;
  // deopt 24 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L8(r9)
  // L8(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L8_;

D6_:;
  // deopt 26 [r10]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r10_;
  goto L7_;

D7_:;
  // deopt 28 [r11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r11_;
  goto L6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
