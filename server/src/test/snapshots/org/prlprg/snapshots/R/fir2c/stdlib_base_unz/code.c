#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2840837041_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2840837041_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2840837041_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2840837041_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2840837041_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2840837041
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2840837041_, RHO, CCP);
  // st unz = r
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
SEXP Rsh_Fir_user_function_inner2840837041_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2840837041 dynamic dispatch ([description, filename, open, encoding])

  return Rsh_Fir_user_version_inner2840837041_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2840837041_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2840837041 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2840837041/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_description;  // description
  SEXP Rsh_Fir_reg_filename;  // filename
  SEXP Rsh_Fir_reg_open;  // open
  SEXP Rsh_Fir_reg_encoding;  // encoding
  SEXP Rsh_Fir_reg_open_isMissing;  // open_isMissing
  SEXP Rsh_Fir_reg_open_orDefault;  // open_orDefault
  SEXP Rsh_Fir_reg_encoding_isMissing;  // encoding_isMissing
  SEXP Rsh_Fir_reg_encoding_orDefault;  // encoding_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_description1_;  // description1
  SEXP Rsh_Fir_reg_description2_;  // description2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_filename1_;  // filename1
  SEXP Rsh_Fir_reg_filename2_;  // filename2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_open1_;  // open1
  SEXP Rsh_Fir_reg_open2_;  // open2
  SEXP Rsh_Fir_reg_encoding1_;  // encoding1
  SEXP Rsh_Fir_reg_encoding2_;  // encoding2
  SEXP Rsh_Fir_reg_unz;  // unz
  SEXP Rsh_Fir_reg_r7_;  // r7

  // Bind parameters
  Rsh_Fir_reg_description = PARAMS[0];
  Rsh_Fir_reg_filename = PARAMS[1];
  Rsh_Fir_reg_open = PARAMS[2];
  Rsh_Fir_reg_encoding = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st description = description
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_description, RHO);
  (void)(Rsh_Fir_reg_description);
  // st filename = filename
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_filename, RHO);
  (void)(Rsh_Fir_reg_filename);
  // open_isMissing = missing.0(open)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_open;
  Rsh_Fir_reg_open_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if open_isMissing then L0("") else L0(open)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_open_isMissing)) {
  // L0("")
    Rsh_Fir_reg_open_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(open)
    Rsh_Fir_reg_open_orDefault = Rsh_Fir_reg_open;
    goto L0_;
  }

L0_:;
  // st open = open_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_open_orDefault, RHO);
  (void)(Rsh_Fir_reg_open_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if encoding_isMissing then L1() else L2(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("encoding");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2840837041_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
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
  // return r3
  return Rsh_Fir_reg_r3_;

L4_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r2 = dyn base(<lang unz(paste(description, filename, sep=":"), open, encoding)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   description1 = ld description;
  //   description2 = force? description1;
  //   checkMissing(description2);
  //   return description2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2840837041_1, CCP, RHO);
  // p2 = prom<V +>{
  //   filename1 = ld filename;
  //   filename2 = force? filename1;
  //   checkMissing(filename2);
  //   return filename2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2840837041_2, CCP, RHO);
  // r6 = dyn paste[, , sep](p1, p2, ":")
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 8 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // open1 = ld open
  Rsh_Fir_reg_open1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 9 [open1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_open1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // open2 = force? open1
  Rsh_Fir_reg_open2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_open1_);
  // checkMissing(open2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_open2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 11 [encoding1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_encoding1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // unz = ldf unz in base
  Rsh_Fir_reg_unz = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r7 = dyn unz(r6, open2, encoding2)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_open2_;
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_encoding2_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unz, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r7_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2840837041_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // r = dyn getOption("encoding")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2840837041_1(SEXP CCP, SEXP RHO) {
  // description1 = ld description
  Rsh_Fir_reg_description1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // description2 = force? description1
  Rsh_Fir_reg_description2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_description1_);
  // checkMissing(description2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_description2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return description2
  return Rsh_Fir_reg_description2_;
}
SEXP Rsh_Fir_user_promise_inner2840837041_2(SEXP CCP, SEXP RHO) {
  // filename1 = ld filename
  Rsh_Fir_reg_filename1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // filename2 = force? filename1
  Rsh_Fir_reg_filename2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename1_);
  // checkMissing(filename2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_filename2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return filename2
  return Rsh_Fir_reg_filename2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
