#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner30290481_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner30290481_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner30290481_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner30290481_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner30290481_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner30290481_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner30290481_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner30290481
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner30290481_, RHO, CCP);
  // st sink = r
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
SEXP Rsh_Fir_user_function_inner30290481_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner30290481 dynamic dispatch ([file, append, type, split])

  return Rsh_Fir_user_version_inner30290481_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner30290481_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner30290481 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner30290481/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_append;  // append
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_split;  // split
  SEXP Rsh_Fir_reg_file_isMissing;  // file_isMissing
  SEXP Rsh_Fir_reg_file_orDefault;  // file_orDefault
  SEXP Rsh_Fir_reg_append_isMissing;  // append_isMissing
  SEXP Rsh_Fir_reg_append_orDefault;  // append_orDefault
  SEXP Rsh_Fir_reg_type_isMissing;  // type_isMissing
  SEXP Rsh_Fir_reg_type_orDefault;  // type_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_split_isMissing;  // split_isMissing
  SEXP Rsh_Fir_reg_split_orDefault;  // split_orDefault
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_type3_;  // type3
  SEXP Rsh_Fir_reg_type4_;  // type4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_stderr;  // stderr
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_file3_;  // file3
  SEXP Rsh_Fir_reg_file4_;  // file4
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_isOpen;  // isOpen
  SEXP Rsh_Fir_reg_file5_;  // file5
  SEXP Rsh_Fir_reg_file6_;  // file6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_split1_;  // split1
  SEXP Rsh_Fir_reg_split2_;  // split2
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_file7_;  // file7
  SEXP Rsh_Fir_reg_file8_;  // file8
  SEXP Rsh_Fir_reg_sink;  // sink
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_file9_;  // file9
  SEXP Rsh_Fir_reg_file10_;  // file10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_file11_;  // file11
  SEXP Rsh_Fir_reg_file12_;  // file12
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_file13_;  // file13
  SEXP Rsh_Fir_reg_file14_;  // file14
  SEXP Rsh_Fir_reg_file15_;  // file15
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_append1_;  // append1
  SEXP Rsh_Fir_reg_append2_;  // append2
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_file16_;  // file16
  SEXP Rsh_Fir_reg_file17_;  // file17
  SEXP Rsh_Fir_reg_inherits1_;  // inherits1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_file18_;  // file18
  SEXP Rsh_Fir_reg_file19_;  // file19
  SEXP Rsh_Fir_reg_closeOnExit;  // closeOnExit
  SEXP Rsh_Fir_reg_closeOnExit1_;  // closeOnExit1
  SEXP Rsh_Fir_reg_split3_;  // split3
  SEXP Rsh_Fir_reg_split4_;  // split4
  SEXP Rsh_Fir_reg_sink1_;  // sink1
  SEXP Rsh_Fir_reg_r39_;  // r39

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_append = PARAMS[1];
  Rsh_Fir_reg_type = PARAMS[2];
  Rsh_Fir_reg_split = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // file_isMissing = missing.0(file)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_file;
  Rsh_Fir_reg_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if file_isMissing then L0(NULL) else L0(file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_file_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_file_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(file)
    Rsh_Fir_reg_file_orDefault = Rsh_Fir_reg_file;
    goto L0_;
  }

L0_:;
  // st file = file_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_file_orDefault, RHO);
  (void)(Rsh_Fir_reg_file_orDefault);
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
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if type_isMissing then L2() else L3(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("output", "message");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("output", "message");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner30290481_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // split_isMissing = missing.0(split)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_split;
  Rsh_Fir_reg_split_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if split_isMissing then L4(FALSE) else L4(split)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_split_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_split_orDefault = Rsh_const(CCP, 3);
    goto L4_;
  } else {
  // L4(split)
    Rsh_Fir_reg_split_orDefault = Rsh_Fir_reg_split;
    goto L4_;
  }

L4_:;
  // st split = split_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_split_orDefault, RHO);
  (void)(Rsh_Fir_reg_split_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L5_:;
  // st closeOnExit = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_const(CCP, 3), RHO);
  (void)(Rsh_const(CCP, 3));
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard4 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L6_:;
  // c3 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c3 then L30() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L30()
    goto L30_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // sym2 = ldf inherits
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf inherits in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L8_:;
  // split1 = ld split
  Rsh_Fir_reg_split1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

L9_:;
  // r14 = `!`(r12)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c4 then L10(c4) else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L10(c4)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c4_;
    goto L10_;
  } else {
  // L38()
    goto L38_;
  }

L10_:;
  // c10 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c10 then L42() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L42()
    goto L42_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // goto L8()
  // L8()
  goto L8_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard3 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;

L15_:;
  // c13 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c13 then L59() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L59()
    goto L59_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // sym5 = ldf `is.character`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base5 = ldf `is.character` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard5 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L17_:;
  // sym7 = ldf `.Internal`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf `.Internal` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard7 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L18_:;
  // c15 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c15 then L64() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L64()
    goto L64_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // sym6 = ldf inherits
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base6 = ldf inherits in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard6 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L20_:;
  // r35 = `!`(r33)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c17 then L72() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L72()
    goto L72_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L17()
  // L17()
  goto L17_;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r38
  return Rsh_Fir_reg_r38_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p1 = prom<V +>{
  //   type1 = ld type;
  //   type2 = force? type1;
  //   checkMissing(type2);
  //   return type2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner30290481_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // st type = r5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

D2_:;
  // deopt 5 [type3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_type3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L25_:;
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r6 = `==`(type4, "message")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_type4_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c1 then L26() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L5()
    goto L5_;
  }

L26_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

L28_:;
  // r7 = dyn base1(<sym file>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L6_;

D3_:;
  // deopt 10 [file1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_file1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L29_:;
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c2 = `==`(file2, NULL)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_file2_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L6(c2)
  // L6(c2)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_c2_;
  goto L6_;

L30_:;
  // stderr = ldf stderr
  Rsh_Fir_reg_stderr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // r9 = dyn stderr()
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stderr, 0, NULL, NULL, CCP, RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

D5_:;
  // deopt 15 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L32_:;
  // st file = r9
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // goto L8()
  // L8()
  goto L8_;

L34_:;
  // file3 = ld file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

L35_:;
  // r11 = dyn base2(<sym file>, "connection")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L9(r11)
  // L9(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L9_;

D6_:;
  // deopt 19 [file3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_file3_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L36_:;
  // file4 = force? file3
  Rsh_Fir_reg_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file3_);
  // checkMissing(file4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r13 = dyn inherits(file4, "connection", FALSE)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_file4_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

D7_:;
  // deopt 24 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L9(r13)
  // L9(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L9_;

L38_:;
  // isOpen = ldf isOpen
  Rsh_Fir_reg_isOpen = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

D8_:;
  // deopt 27 [c4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // p2 = prom<V +>{
  //   file5 = ld file;
  //   file6 = force? file5;
  //   checkMissing(file6);
  //   return file6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner30290481_2, CCP, RHO);
  // r16 = dyn isOpen(p2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isOpen, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L40() else D9()
  // L40()
  goto L40_;

D9_:;
  // deopt 29 [c4, r16]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // r17 = `!`(r16)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // c8 = `||`(c4, c7)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L10(c8)
  // L10(c8)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c8_;
  goto L10_;

L42_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L43() else D10()
  // L43()
  goto L43_;

D10_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // r18 = dyn stop("'file' must be NULL or an already open connection")
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L44() else D11()
  // L44()
  goto L44_;

D11_:;
  // deopt 35 [r18]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L8()
  // L8()
  goto L8_;

D12_:;
  // deopt 38 [split1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_split1_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L46_:;
  // split2 = force? split1
  Rsh_Fir_reg_split2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split1_);
  // checkMissing(split2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_split2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c11 = `as.logical`(split2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_split2_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c11 then L47() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L47()
    goto L47_;
  } else {
  // L12()
    goto L12_;
  }

L47_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L48() else D13()
  // L48()
  goto L48_;

D13_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // r19 = dyn stop1("cannot split the message connection")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

D14_:;
  // deopt 43 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L13()
  // L13()
  goto L13_;

L51_:;
  // file7 = ld file
  Rsh_Fir_reg_file7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L53() else D15()
  // L53()
  goto L53_;

L52_:;
  // r21 = dyn base3(<lang sink(file, FALSE, TRUE, FALSE)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L14(r21)
  // L14(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L14_;

D15_:;
  // deopt 48 [file7]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_file7_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L53_:;
  // file8 = force? file7
  Rsh_Fir_reg_file8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file7_);
  // checkMissing(file8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_file8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // sink = ldf sink in base
  Rsh_Fir_reg_sink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r23 = dyn sink(file8, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args44[4];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_file8_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args44[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sink, 4, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L54() else D16()
  // L54()
  goto L54_;

D16_:;
  // deopt 54 [r23]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L14(r23)
  // L14(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L14_;

L56_:;
  // file9 = ld file
  Rsh_Fir_reg_file9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L58() else D17()
  // L58()
  goto L58_;

L57_:;
  // r24 = dyn base4(<sym file>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L15(r24)
  // L15(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L15_;

D17_:;
  // deopt 59 [file9]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_file9_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L58_:;
  // file10 = force? file9
  Rsh_Fir_reg_file10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file9_);
  // checkMissing(file10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_file10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c12 = `==`(file10, NULL)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_file10_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L15(c12)
  // L15(c12)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_c12_;
  goto L15_;

L59_:;
  // st file = -1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 24), RHO);
  (void)(Rsh_const(CCP, 24));
  // goto L17()
  // L17()
  goto L17_;

L61_:;
  // file11 = ld file
  Rsh_Fir_reg_file11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L63() else D18()
  // L63()
  goto L63_;

L62_:;
  // r27 = dyn base5(<sym file>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L18(r27)
  // L18(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L18_;

D18_:;
  // deopt 66 [file11]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_file11_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L63_:;
  // file12 = force? file11
  Rsh_Fir_reg_file12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file11_);
  // checkMissing(file12)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_file12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c14 = `is.character`(file12)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_file12_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L18(c14)
  // L18(c14)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c14_;
  goto L18_;

L64_:;
  // file13 = ldf file
  Rsh_Fir_reg_file13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L65() else D19()
  // L65()
  goto L65_;

D19_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p3 = prom<V +>{
  //   file14 = ld file;
  //   file15 = force? file14;
  //   checkMissing(file15);
  //   return file15;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner30290481_3, CCP, RHO);
  // p4 = prom<V +>{
  //   append1 = ld append;
  //   append2 = force? append1;
  //   checkMissing(append2);
  //   c16 = `as.logical`(append2);
  //   if c16 then L1() else L0();
  // L0():
  //   return "w";
  // L1():
  //   return "a";
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner30290481_4, CCP, RHO);
  // r31 = dyn file13(p3, p4)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file13_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L66() else D20()
  // L66()
  goto L66_;

D20_:;
  // deopt 73 [r31]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L66_:;
  // st file = r31
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // st closeOnExit = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_const(CCP, 23), RHO);
  (void)(Rsh_const(CCP, 23));
  // goto L17()
  // L17()
  goto L17_;

L68_:;
  // file16 = ld file
  Rsh_Fir_reg_file16_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L70() else D21()
  // L70()
  goto L70_;

L69_:;
  // r32 = dyn base6(<sym file>, "connection")
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L20(r32)
  // L20(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L20_;

D21_:;
  // deopt 80 [file16]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_file16_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L70_:;
  // file17 = force? file16
  Rsh_Fir_reg_file17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file16_);
  // checkMissing(file17)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_file17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r34 = dyn inherits1(file17, "connection", FALSE)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_file17_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L71() else D22()
  // L71()
  goto L71_;

D22_:;
  // deopt 85 [r34]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L20(r34)
  // L20(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L20_;

L72_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L73() else D23()
  // L73()
  goto L73_;

D23_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L73_:;
  // r36 = dyn stop2("'file' must be NULL, a connection or a character string")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L74() else D24()
  // L74()
  goto L74_;

D24_:;
  // deopt 90 [r36]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L17()
  // L17()
  goto L17_;

L76_:;
  // file18 = ld file
  Rsh_Fir_reg_file18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L78() else D25()
  // L78()
  goto L78_;

L77_:;
  // r37 = dyn base7(<lang sink(file, closeOnExit, FALSE, split)>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L22(r37)
  // L22(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L22_;

D25_:;
  // deopt 95 [file18]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_file18_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L78_:;
  // file19 = force? file18
  Rsh_Fir_reg_file19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file18_);
  // checkMissing(file19)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_file19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // closeOnExit = ld closeOnExit
  Rsh_Fir_reg_closeOnExit = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L79() else D26()
  // L79()
  goto L79_;

D26_:;
  // deopt 97 [closeOnExit]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_closeOnExit;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L79_:;
  // closeOnExit1 = force? closeOnExit
  Rsh_Fir_reg_closeOnExit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_closeOnExit);
  // checkMissing(closeOnExit1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_closeOnExit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // split3 = ld split
  Rsh_Fir_reg_split3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L80() else D27()
  // L80()
  goto L80_;

D27_:;
  // deopt 100 [split3]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_split3_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L80_:;
  // split4 = force? split3
  Rsh_Fir_reg_split4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split3_);
  // checkMissing(split4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_split4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // sink1 = ldf sink in base
  Rsh_Fir_reg_sink1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r39 = dyn sink1(file19, closeOnExit1, FALSE, split4)
  SEXP Rsh_Fir_array_args63[4];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_file19_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_closeOnExit1_;
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args63[3] = Rsh_Fir_reg_split4_;
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sink1_, 4, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L81() else D28()
  // L81()
  goto L81_;

D28_:;
  // deopt 103 [r39]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L81_:;
  // goto L22(r39)
  // L22(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L22_;
}
SEXP Rsh_Fir_user_promise_inner30290481_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn c("output", "message")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("output", "message")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner30290481_1(SEXP CCP, SEXP RHO) {
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return type2
  return Rsh_Fir_reg_type2_;
}
SEXP Rsh_Fir_user_promise_inner30290481_2(SEXP CCP, SEXP RHO) {
  // file5 = ld file
  Rsh_Fir_reg_file5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // file6 = force? file5
  Rsh_Fir_reg_file6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file5_);
  // checkMissing(file6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_file6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return file6
  return Rsh_Fir_reg_file6_;
}
SEXP Rsh_Fir_user_promise_inner30290481_3(SEXP CCP, SEXP RHO) {
  // file14 = ld file
  Rsh_Fir_reg_file14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // file15 = force? file14
  Rsh_Fir_reg_file15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file14_);
  // checkMissing(file15)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_file15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return file15
  return Rsh_Fir_reg_file15_;
}
SEXP Rsh_Fir_user_promise_inner30290481_4(SEXP CCP, SEXP RHO) {
  // append1 = ld append
  Rsh_Fir_reg_append1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // append2 = force? append1
  Rsh_Fir_reg_append2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_append1_);
  // checkMissing(append2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_append2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c16 = `as.logical`(append2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_append2_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c16 then L1() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L1()
    goto L1_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // return "w"
  return Rsh_const(CCP, 25);

L1_:;
  // return "a"
  return Rsh_const(CCP, 26);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
