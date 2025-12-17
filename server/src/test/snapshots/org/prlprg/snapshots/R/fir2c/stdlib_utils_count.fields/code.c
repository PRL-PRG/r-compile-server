#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner4267212101_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4267212101_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4267212101_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_tempfile;  // tempfile
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_fil;  // fil
  SEXP Rsh_Fir_reg_fil1_;  // fil1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_count_fields;  // count_fields
  SEXP Rsh_Fir_reg_fil2_;  // fil2
  SEXP Rsh_Fir_reg_fil3_;  // fil3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_unlink;  // unlink
  SEXP Rsh_Fir_reg_fil4_;  // fil4
  SEXP Rsh_Fir_reg_fil5_;  // fil5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4267212101
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4267212101_, RHO, CCP);
  // st `count.fields` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn tempfile()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 0, NULL, NULL, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st fil = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   fil = ld fil;
  //   fil1 = force? fil;
  //   checkMissing(fil1);
  //   return fil1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, CCP, RHO);
  // r3 = dyn cat[, , , file, sep]("NAME", "1:John", "2:Paul", p, "\n")
  SEXP Rsh_Fir_array_args1[5];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[3] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[4] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names[4] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 5, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 16 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // count_fields = ldf `count.fields`
  Rsh_Fir_reg_count_fields = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   fil2 = ld fil;
  //   fil3 = force? fil2;
  //   checkMissing(fil3);
  //   return fil3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, CCP, RHO);
  // r5 = dyn count_fields[, sep](p1, ":")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_count_fields, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 22 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // unlink = ldf unlink
  Rsh_Fir_reg_unlink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p2 = prom<V +>{
  //   fil4 = ld fil;
  //   fil5 = force? fil4;
  //   checkMissing(fil5);
  //   return fil5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, CCP, RHO);
  // r7 = dyn unlink(p2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlink, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 26 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO) {
  // fil = ld fil
  Rsh_Fir_reg_fil = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil1 = force? fil
  Rsh_Fir_reg_fil1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil);
  // checkMissing(fil1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_fil1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return fil1
  return Rsh_Fir_reg_fil1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO) {
  // fil2 = ld fil
  Rsh_Fir_reg_fil2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil3 = force? fil2
  Rsh_Fir_reg_fil3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil2_);
  // checkMissing(fil3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_fil3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return fil3
  return Rsh_Fir_reg_fil3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO) {
  // fil4 = ld fil
  Rsh_Fir_reg_fil4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil5 = force? fil4
  Rsh_Fir_reg_fil5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil4_);
  // checkMissing(fil5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_fil5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return fil5
  return Rsh_Fir_reg_fil5_;
}
SEXP Rsh_Fir_user_function_inner4267212101_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4267212101 dynamic dispatch ([file, sep, quote, skip, `blank.lines.skip`, `comment.char`])

  return Rsh_Fir_user_version_inner4267212101_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4267212101_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4267212101 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner4267212101/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_sep;  // sep
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_skip;  // skip
  SEXP Rsh_Fir_reg_blank_lines_skip;  // blank_lines_skip
  SEXP Rsh_Fir_reg_comment_char;  // comment_char
  SEXP Rsh_Fir_reg_sep_isMissing;  // sep_isMissing
  SEXP Rsh_Fir_reg_sep_orDefault;  // sep_orDefault
  SEXP Rsh_Fir_reg_quote_isMissing;  // quote_isMissing
  SEXP Rsh_Fir_reg_quote_orDefault;  // quote_orDefault
  SEXP Rsh_Fir_reg_skip_isMissing;  // skip_isMissing
  SEXP Rsh_Fir_reg_skip_orDefault;  // skip_orDefault
  SEXP Rsh_Fir_reg_blank_lines_skip_isMissing;  // blank_lines_skip_isMissing
  SEXP Rsh_Fir_reg_blank_lines_skip_orDefault;  // blank_lines_skip_orDefault
  SEXP Rsh_Fir_reg_comment_char_isMissing;  // comment_char_isMissing
  SEXP Rsh_Fir_reg_comment_char_orDefault;  // comment_char_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_file3_;  // file3
  SEXP Rsh_Fir_reg_file4_;  // file4
  SEXP Rsh_Fir_reg_file5_;  // file5
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_file6_;  // file6
  SEXP Rsh_Fir_reg_file7_;  // file7
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_C_countfields;  // C_countfields
  SEXP Rsh_Fir_reg_C_countfields1_;  // C_countfields1
  SEXP Rsh_Fir_reg_file8_;  // file8
  SEXP Rsh_Fir_reg_file9_;  // file9
  SEXP Rsh_Fir_reg_sep1_;  // sep1
  SEXP Rsh_Fir_reg_sep2_;  // sep2
  SEXP Rsh_Fir_reg_quote1_;  // quote1
  SEXP Rsh_Fir_reg_quote2_;  // quote2
  SEXP Rsh_Fir_reg_skip1_;  // skip1
  SEXP Rsh_Fir_reg_skip2_;  // skip2
  SEXP Rsh_Fir_reg_blank_lines_skip1_;  // blank_lines_skip1
  SEXP Rsh_Fir_reg_blank_lines_skip2_;  // blank_lines_skip2
  SEXP Rsh_Fir_reg_comment_char1_;  // comment_char1
  SEXP Rsh_Fir_reg_comment_char2_;  // comment_char2
  SEXP Rsh_Fir_reg__External;  // _External
  SEXP Rsh_Fir_reg_r16_;  // r16

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_sep = PARAMS[1];
  Rsh_Fir_reg_quote = PARAMS[2];
  Rsh_Fir_reg_skip = PARAMS[3];
  Rsh_Fir_reg_blank_lines_skip = PARAMS[4];
  Rsh_Fir_reg_comment_char = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st file = file
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_file, RHO);
  (void)(Rsh_Fir_reg_file);
  // sep_isMissing = missing.0(sep)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sep;
  Rsh_Fir_reg_sep_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if sep_isMissing then L0("") else L0(sep)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sep_isMissing)) {
  // L0("")
    Rsh_Fir_reg_sep_orDefault = Rsh_const(CCP, 12);
    goto L0_;
  } else {
  // L0(sep)
    Rsh_Fir_reg_sep_orDefault = Rsh_Fir_reg_sep;
    goto L0_;
  }

L0_:;
  // st sep = sep_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_sep_orDefault, RHO);
  (void)(Rsh_Fir_reg_sep_orDefault);
  // quote_isMissing = missing.0(quote)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_quote;
  Rsh_Fir_reg_quote_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if quote_isMissing then L1("\"'") else L1(quote)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quote_isMissing)) {
  // L1("\"'")
    Rsh_Fir_reg_quote_orDefault = Rsh_const(CCP, 13);
    goto L1_;
  } else {
  // L1(quote)
    Rsh_Fir_reg_quote_orDefault = Rsh_Fir_reg_quote;
    goto L1_;
  }

L1_:;
  // st quote = quote_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_quote_orDefault, RHO);
  (void)(Rsh_Fir_reg_quote_orDefault);
  // skip_isMissing = missing.0(skip)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_skip;
  Rsh_Fir_reg_skip_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if skip_isMissing then L2(0.0) else L2(skip)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_skip_isMissing)) {
  // L2(0.0)
    Rsh_Fir_reg_skip_orDefault = Rsh_const(CCP, 15);
    goto L2_;
  } else {
  // L2(skip)
    Rsh_Fir_reg_skip_orDefault = Rsh_Fir_reg_skip;
    goto L2_;
  }

L2_:;
  // st skip = skip_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_skip_orDefault, RHO);
  (void)(Rsh_Fir_reg_skip_orDefault);
  // blank_lines_skip_isMissing = missing.0(blank_lines_skip)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_blank_lines_skip;
  Rsh_Fir_reg_blank_lines_skip_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if blank_lines_skip_isMissing then L3(TRUE) else L3(blank_lines_skip)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_blank_lines_skip_isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_blank_lines_skip_orDefault = Rsh_const(CCP, 17);
    goto L3_;
  } else {
  // L3(blank_lines_skip)
    Rsh_Fir_reg_blank_lines_skip_orDefault = Rsh_Fir_reg_blank_lines_skip;
    goto L3_;
  }

L3_:;
  // st `blank.lines.skip` = blank_lines_skip_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_blank_lines_skip_orDefault, RHO);
  (void)(Rsh_Fir_reg_blank_lines_skip_orDefault);
  // comment_char_isMissing = missing.0(comment_char)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_comment_char;
  Rsh_Fir_reg_comment_char_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if comment_char_isMissing then L4("#") else L4(comment_char)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_comment_char_isMissing)) {
  // L4("#")
    Rsh_Fir_reg_comment_char_orDefault = Rsh_const(CCP, 19);
    goto L4_;
  } else {
  // L4(comment_char)
    Rsh_Fir_reg_comment_char_orDefault = Rsh_Fir_reg_comment_char;
    goto L4_;
  }

L4_:;
  // st `comment.char` = comment_char_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_comment_char_orDefault, RHO);
  (void)(Rsh_Fir_reg_comment_char_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L5_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c1 then L16() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L8()
  // L8()
  goto L8_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym2 = ldf inherits
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf inherits in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L9_:;
  // r11 = `!`(r9)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c2 then L26() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L26()
    goto L26_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym3 = ldf `.External`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf `.External` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard3 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;

L13_:;
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base(<sym file>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r)
  // L5(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L5_;

D0_:;
  // deopt 1 [file1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_file1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c = `is.character`(file2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_file2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L5(c)
  // L5(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c;
  goto L5_;

L16_:;
  // file3 = ldf file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p = prom<V +>{
  //   file4 = ld file;
  //   file5 = force? file4;
  //   checkMissing(file5);
  //   return file5;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4267212101_, CCP, RHO);
  // r3 = dyn file3(p)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D2_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // st file = r3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r3_1, RHO);
  (void)(Rsh_Fir_reg_r3_1);
  // sym1 = ldf `on.exit`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf `on.exit` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard1 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r6 = dyn on_exit(<lang close(file)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(r6)
  // L7(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_;
  goto L7_;

L20_:;
  // r4 = dyn base1(<lang close(file)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L7(r4)
  // L7(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_;
  goto L7_;

L22_:;
  // file6 = ld file
  Rsh_Fir_reg_file6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

L23_:;
  // r8 = dyn base2(<sym file>, "connection")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L9(r8)
  // L9(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L9_;

D3_:;
  // deopt 16 [file6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_file6_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L24_:;
  // file7 = force? file6
  Rsh_Fir_reg_file7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file6_);
  // checkMissing(file7)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_file7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r10 = dyn inherits(file7, "connection", FALSE)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_file7_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

D4_:;
  // deopt 21 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L9(r10)
  // L9(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L9_;

L26_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

D5_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // r12 = dyn stop("'file' must be a character string or connection")
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

D6_:;
  // deopt 26 [r12]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L11()
  // L11()
  goto L11_;

L30_:;
  // C_countfields = ld C_countfields
  Rsh_Fir_reg_C_countfields = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

L31_:;
  // r14 = dyn base3(<sym C_countfields>, <sym file>, <sym sep>, <sym quote>, <sym skip>, <sym blank.lines.skip>, <sym comment.char>)
  SEXP Rsh_Fir_array_args29[7];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args29[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args29[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args29[6] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names10[7];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_array_arg_names10[6] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 7, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L12(r14)
  // L12(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L12_;

D7_:;
  // deopt 31 [C_countfields]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C_countfields;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L32_:;
  // C_countfields1 = force? C_countfields
  Rsh_Fir_reg_C_countfields1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_countfields);
  // checkMissing(C_countfields1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_C_countfields1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // file8 = ld file
  Rsh_Fir_reg_file8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

D8_:;
  // deopt 33 [file8]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_file8_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L33_:;
  // file9 = force? file8
  Rsh_Fir_reg_file9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file8_);
  // checkMissing(file9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_file9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // sep1 = ld sep
  Rsh_Fir_reg_sep1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

D9_:;
  // deopt 35 [sep1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_sep1_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L34_:;
  // sep2 = force? sep1
  Rsh_Fir_reg_sep2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep1_);
  // checkMissing(sep2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sep2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // quote1 = ld quote
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

D10_:;
  // deopt 37 [quote1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_quote1_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L35_:;
  // quote2 = force? quote1
  Rsh_Fir_reg_quote2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quote1_);
  // checkMissing(quote2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_quote2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // skip1 = ld skip
  Rsh_Fir_reg_skip1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

D11_:;
  // deopt 39 [skip1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_skip1_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L36_:;
  // skip2 = force? skip1
  Rsh_Fir_reg_skip2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skip1_);
  // checkMissing(skip2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_skip2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // blank_lines_skip1 = ld `blank.lines.skip`
  Rsh_Fir_reg_blank_lines_skip1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D12_:;
  // deopt 41 [blank_lines_skip1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_blank_lines_skip1_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L37_:;
  // blank_lines_skip2 = force? blank_lines_skip1
  Rsh_Fir_reg_blank_lines_skip2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_blank_lines_skip1_);
  // checkMissing(blank_lines_skip2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_blank_lines_skip2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // comment_char1 = ld `comment.char`
  Rsh_Fir_reg_comment_char1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L38() else D13()
  // L38()
  goto L38_;

D13_:;
  // deopt 43 [comment_char1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_comment_char1_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L38_:;
  // comment_char2 = force? comment_char1
  Rsh_Fir_reg_comment_char2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_comment_char1_);
  // checkMissing(comment_char2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_comment_char2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // _External = ldf `.External` in base
  Rsh_Fir_reg__External = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r16 = dyn _External(C_countfields1, file9, sep2, quote2, skip2, blank_lines_skip2, comment_char2)
  SEXP Rsh_Fir_array_args37[7];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_C_countfields1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_file9_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_sep2_;
  Rsh_Fir_array_args37[3] = Rsh_Fir_reg_quote2_;
  Rsh_Fir_array_args37[4] = Rsh_Fir_reg_skip2_;
  Rsh_Fir_array_args37[5] = Rsh_Fir_reg_blank_lines_skip2_;
  Rsh_Fir_array_args37[6] = Rsh_Fir_reg_comment_char2_;
  SEXP Rsh_Fir_array_arg_names11[7];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External, 7, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L39() else D14()
  // L39()
  goto L39_;

D14_:;
  // deopt 46 [r16]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L12(r16)
  // L12(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner4267212101_(SEXP CCP, SEXP RHO) {
  // file4 = ld file
  Rsh_Fir_reg_file4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // file5 = force? file4
  Rsh_Fir_reg_file5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file4_);
  // checkMissing(file5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_file5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return file5
  return Rsh_Fir_reg_file5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
