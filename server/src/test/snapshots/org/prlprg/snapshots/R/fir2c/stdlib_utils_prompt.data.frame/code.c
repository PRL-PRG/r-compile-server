#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1292076475_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1292076475_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1292076475_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1292076475_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1292076475_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1292076475_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1292076475_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1292076475_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner1292076475
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1292076475_, RHO, CCP);
  // st `prompt.data.frame` = r
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
SEXP Rsh_Fir_user_function_inner1292076475_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1292076475 dynamic dispatch ([object, filename, name, `...`])

  return Rsh_Fir_user_version_inner1292076475_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1292076475_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1292076475 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1292076475/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_filename;  // filename
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_filename_isMissing;  // filename_isMissing
  SEXP Rsh_Fir_reg_filename_orDefault;  // filename_orDefault
  SEXP Rsh_Fir_reg_name_isMissing;  // name_isMissing
  SEXP Rsh_Fir_reg_name_orDefault;  // name_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_filename1_;  // filename1
  SEXP Rsh_Fir_reg_filename2_;  // filename2
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_name5_;  // name5
  SEXP Rsh_Fir_reg_name6_;  // name6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg_name7_;  // name7
  SEXP Rsh_Fir_reg_name8_;  // name8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_promptData;  // promptData
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_filename3_;  // filename3
  SEXP Rsh_Fir_reg_filename4_;  // filename4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_name9_;  // name9
  SEXP Rsh_Fir_reg_name10_;  // name10
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r30_;  // r30

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_filename = PARAMS[1];
  Rsh_Fir_reg_name = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // filename_isMissing = missing.0(filename)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_filename;
  Rsh_Fir_reg_filename_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if filename_isMissing then L0(NULL) else L0(filename)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_filename_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_filename_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(filename)
    Rsh_Fir_reg_filename_orDefault = Rsh_Fir_reg_filename;
    goto L0_;
  }

L0_:;
  // st filename = filename_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_filename_orDefault, RHO);
  (void)(Rsh_Fir_reg_filename_orDefault);
  // name_isMissing = missing.0(name)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_name;
  Rsh_Fir_reg_name_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if name_isMissing then L1(NULL) else L1(name)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_name_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_name_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(name)
    Rsh_Fir_reg_name_orDefault = Rsh_Fir_reg_name;
    goto L1_;
  }

L1_:;
  // st name = name_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_name_orDefault, RHO);
  (void)(Rsh_Fir_reg_name_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L2_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L20() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L20()
    goto L20_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L11()
  // L11()
  goto L11_;

L4_:;
  // c2 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L24() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L24()
    goto L24_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // sym2 = ldf substitute
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf substitute in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L6_:;
  // st name = object5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_object5_, RHO);
  (void)(Rsh_Fir_reg_object5_);
  // goto L11()
  // L11()
  goto L11_;

L7_:;
  // st name = r6
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym3 = ldf `is.name`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf `is.name` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L8_:;
  // c4 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c4 then L32() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L32()
    goto L32_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

L10_:;
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_object5_ = Rsh_Fir_reg_r11_;
  goto L6_;

L11_:;
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard5 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L12_:;
  // c6 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c6 then L44() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L44()
    goto L44_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym6 = ldf missing
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base6 = ldf missing in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard6 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L15_:;
  // r22 = `!`(r20)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c7 then L50() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L50()
    goto L50_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L53() else D11()
  // L53()
  goto L53_;

L17_:;
  // st x = object9
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_object9_, RHO);
  (void)(Rsh_Fir_reg_object9_);
  // promptData = ldf promptData
  Rsh_Fir_reg_promptData = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L55() else D13()
  // L55()
  goto L55_;

L18_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn missing(<sym name>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L19_:;
  // r = dyn base(<sym name>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

L20_:;
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf `is.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r3 = dyn base1(<sym object>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L4_;

D0_:;
  // deopt 4 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L23_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c1 = `is.character`(object2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L4(c1)
  // L4(c1)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c1_;
  goto L4_;

L24_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

D1_:;
  // deopt 7 [object3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L25_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // goto L6(object4)
  // L6(object4)
  Rsh_Fir_reg_object5_ = Rsh_Fir_reg_object4_;
  goto L6_;

L27_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r7 = dyn substitute(<sym object>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L7_;

L28_:;
  // r5 = dyn base2(<sym object>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L7(r5)
  // L7(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L7_;

L29_:;
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L31() else D2()
  // L31()
  goto L31_;

L30_:;
  // r8 = dyn base3(<sym name>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L8(r8)
  // L8(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L8_;

D2_:;
  // deopt 14 [name1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_name1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c3 = `is.symbol`(name2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_name2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(390, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L8(c3)
  // L8(c3)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c3_;
  goto L8_;

L32_:;
  // sym4 = ldf `as.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf `as.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard4 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L35() else D3()
  // L35()
  goto L35_;

L34_:;
  // r10 = dyn base4(<sym name>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L10(r10)
  // L10(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L10_;

D3_:;
  // deopt 19 [name3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_name3_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L35_:;
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r12 = dyn as_character(name4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_name4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

D4_:;
  // deopt 22 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L10(r12)
  // L10(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L10_;

D5_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // r13 = dyn stop("cannot determine a usable name")
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

D6_:;
  // deopt 26 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_object5_ = Rsh_Fir_reg_r13_;
  goto L6_;

L41_:;
  // filename1 = ld filename
  Rsh_Fir_reg_filename1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L43() else D7()
  // L43()
  goto L43_;

L42_:;
  // r14 = dyn base5(<sym filename>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L12(r14)
  // L12(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L12_;

D7_:;
  // deopt 31 [filename1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_filename1_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L43_:;
  // filename2 = force? filename1
  Rsh_Fir_reg_filename2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename1_);
  // checkMissing(filename2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_filename2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c5 = `==`(filename2, NULL)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_filename2_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L12(c5)
  // L12(c5)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_c5_;
  goto L12_;

L44_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

D8_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p = prom<V +>{
  //   name5 = ld name;
  //   name6 = force? name5;
  //   checkMissing(name6);
  //   return name6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1292076475_, CCP, RHO);
  // r17 = dyn paste0(p, ".Rd")
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L46() else D9()
  // L46()
  goto L46_;

D9_:;
  // deopt 38 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L46_:;
  // st filename = r17
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // goto L14()
  // L14()
  goto L14_;

L48_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r21 = dyn missing1(<sym object>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L15(r21)
  // L15(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L15_;

L49_:;
  // r19 = dyn base6(<sym object>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L15(r19)
  // L15(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L15_;

L50_:;
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L51() else D10()
  // L51()
  goto L51_;

D10_:;
  // deopt 46 [object7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_object7_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L51_:;
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // goto L17(object8)
  // L17(object8)
  Rsh_Fir_reg_object9_ = Rsh_Fir_reg_object8_;
  goto L17_;

D11_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p1 = prom<V +>{
  //   name7 = ld name;
  //   name8 = force? name7;
  //   checkMissing(name8);
  //   return name8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1292076475_1, CCP, RHO);
  // p2 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r24 = dyn parent_frame();
  //   return r24;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1292076475_2, CCP, RHO);
  // r26 = dyn get[, envir](p1, p2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L54() else D12()
  // L54()
  goto L54_;

D12_:;
  // deopt 53 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L54_:;
  // st x = r26
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // goto L17(r26)
  // L17(r26)
  Rsh_Fir_reg_object9_ = Rsh_Fir_reg_r26_;
  goto L17_;

D13_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p3 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1292076475_3, CCP, RHO);
  // p4 = prom<V +>{
  //   filename3 = ld filename;
  //   filename4 = force? filename3;
  //   checkMissing(filename4);
  //   return filename4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1292076475_4, CCP, RHO);
  // p5 = prom<V +>{
  //   name9 = ld name;
  //   name10 = force? name9;
  //   checkMissing(name10);
  //   return name10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1292076475_5, CCP, RHO);
  // r30 = dyn promptData[, filename, name](p3, p4, p5)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_promptData, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

D14_:;
  // deopt 63 [r30]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L56_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner1292076475_(SEXP CCP, SEXP RHO) {
  // name5 = ld name
  Rsh_Fir_reg_name5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // name6 = force? name5
  Rsh_Fir_reg_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name5_);
  // checkMissing(name6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_name6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return name6
  return Rsh_Fir_reg_name6_;
}
SEXP Rsh_Fir_user_promise_inner1292076475_1(SEXP CCP, SEXP RHO) {
  // name7 = ld name
  Rsh_Fir_reg_name7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // name8 = force? name7
  Rsh_Fir_reg_name8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name7_);
  // checkMissing(name8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_name8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return name8
  return Rsh_Fir_reg_name8_;
}
SEXP Rsh_Fir_user_promise_inner1292076475_2(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // r24 = dyn parent_frame()
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_inner1292076475_3(SEXP CCP, SEXP RHO) {
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_inner1292076475_4(SEXP CCP, SEXP RHO) {
  // filename3 = ld filename
  Rsh_Fir_reg_filename3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // filename4 = force? filename3
  Rsh_Fir_reg_filename4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename3_);
  // checkMissing(filename4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_filename4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return filename4
  return Rsh_Fir_reg_filename4_;
}
SEXP Rsh_Fir_user_promise_inner1292076475_5(SEXP CCP, SEXP RHO) {
  // name9 = ld name
  Rsh_Fir_reg_name9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // name10 = force? name9
  Rsh_Fir_reg_name10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name9_);
  // checkMissing(name10)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_name10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return name10
  return Rsh_Fir_reg_name10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
