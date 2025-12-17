#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3501835689_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3501835689_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3501835689_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3501835689_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3501835689_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3501835689_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3501835689_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3501835689_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3501835689_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner3501835689
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3501835689_, RHO, CCP);
  // st `read.csv` = r
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
SEXP Rsh_Fir_user_function_inner3501835689_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3501835689 dynamic dispatch ([file, header, sep, quote, dec, fill, `comment.char`, `...`])

  return Rsh_Fir_user_version_inner3501835689_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3501835689_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3501835689 version 0 (*, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner3501835689/0: expected 8, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_header;  // header
  SEXP Rsh_Fir_reg_sep;  // sep
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_dec;  // dec
  SEXP Rsh_Fir_reg_fill;  // fill
  SEXP Rsh_Fir_reg_comment_char;  // comment_char
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_header_isMissing;  // header_isMissing
  SEXP Rsh_Fir_reg_header_orDefault;  // header_orDefault
  SEXP Rsh_Fir_reg_sep_isMissing;  // sep_isMissing
  SEXP Rsh_Fir_reg_sep_orDefault;  // sep_orDefault
  SEXP Rsh_Fir_reg_quote_isMissing;  // quote_isMissing
  SEXP Rsh_Fir_reg_quote_orDefault;  // quote_orDefault
  SEXP Rsh_Fir_reg_dec_isMissing;  // dec_isMissing
  SEXP Rsh_Fir_reg_dec_orDefault;  // dec_orDefault
  SEXP Rsh_Fir_reg_fill_isMissing;  // fill_isMissing
  SEXP Rsh_Fir_reg_fill_orDefault;  // fill_orDefault
  SEXP Rsh_Fir_reg_comment_char_isMissing;  // comment_char_isMissing
  SEXP Rsh_Fir_reg_comment_char_orDefault;  // comment_char_orDefault
  SEXP Rsh_Fir_reg_read_table;  // read_table
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_header1_;  // header1
  SEXP Rsh_Fir_reg_header2_;  // header2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sep1_;  // sep1
  SEXP Rsh_Fir_reg_sep2_;  // sep2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_quote1_;  // quote1
  SEXP Rsh_Fir_reg_quote2_;  // quote2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_dec1_;  // dec1
  SEXP Rsh_Fir_reg_dec2_;  // dec2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_fill1_;  // fill1
  SEXP Rsh_Fir_reg_fill2_;  // fill2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_comment_char1_;  // comment_char1
  SEXP Rsh_Fir_reg_comment_char2_;  // comment_char2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r7_;  // r7

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_header = PARAMS[1];
  Rsh_Fir_reg_sep = PARAMS[2];
  Rsh_Fir_reg_quote = PARAMS[3];
  Rsh_Fir_reg_dec = PARAMS[4];
  Rsh_Fir_reg_fill = PARAMS[5];
  Rsh_Fir_reg_comment_char = PARAMS[6];
  Rsh_Fir_reg_ddd = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st file = file
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_file, RHO);
  (void)(Rsh_Fir_reg_file);
  // header_isMissing = missing.0(header)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_header;
  Rsh_Fir_reg_header_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if header_isMissing then L0(TRUE) else L0(header)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_header_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_header_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(header)
    Rsh_Fir_reg_header_orDefault = Rsh_Fir_reg_header;
    goto L0_;
  }

L0_:;
  // st header = header_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_header_orDefault, RHO);
  (void)(Rsh_Fir_reg_header_orDefault);
  // sep_isMissing = missing.0(sep)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sep;
  Rsh_Fir_reg_sep_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if sep_isMissing then L1(",") else L1(sep)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sep_isMissing)) {
  // L1(",")
    Rsh_Fir_reg_sep_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(sep)
    Rsh_Fir_reg_sep_orDefault = Rsh_Fir_reg_sep;
    goto L1_;
  }

L1_:;
  // st sep = sep_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_sep_orDefault, RHO);
  (void)(Rsh_Fir_reg_sep_orDefault);
  // quote_isMissing = missing.0(quote)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_quote;
  Rsh_Fir_reg_quote_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if quote_isMissing then L2("\"") else L2(quote)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quote_isMissing)) {
  // L2("\"")
    Rsh_Fir_reg_quote_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(quote)
    Rsh_Fir_reg_quote_orDefault = Rsh_Fir_reg_quote;
    goto L2_;
  }

L2_:;
  // st quote = quote_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_quote_orDefault, RHO);
  (void)(Rsh_Fir_reg_quote_orDefault);
  // dec_isMissing = missing.0(dec)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dec;
  Rsh_Fir_reg_dec_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if dec_isMissing then L3(".") else L3(dec)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dec_isMissing)) {
  // L3(".")
    Rsh_Fir_reg_dec_orDefault = Rsh_const(CCP, 8);
    goto L3_;
  } else {
  // L3(dec)
    Rsh_Fir_reg_dec_orDefault = Rsh_Fir_reg_dec;
    goto L3_;
  }

L3_:;
  // st dec = dec_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dec_orDefault, RHO);
  (void)(Rsh_Fir_reg_dec_orDefault);
  // fill_isMissing = missing.0(fill)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_fill;
  Rsh_Fir_reg_fill_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if fill_isMissing then L4(TRUE) else L4(fill)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fill_isMissing)) {
  // L4(TRUE)
    Rsh_Fir_reg_fill_orDefault = Rsh_const(CCP, 2);
    goto L4_;
  } else {
  // L4(fill)
    Rsh_Fir_reg_fill_orDefault = Rsh_Fir_reg_fill;
    goto L4_;
  }

L4_:;
  // st fill = fill_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_fill_orDefault, RHO);
  (void)(Rsh_Fir_reg_fill_orDefault);
  // comment_char_isMissing = missing.0(comment_char)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_comment_char;
  Rsh_Fir_reg_comment_char_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if comment_char_isMissing then L5("") else L5(comment_char)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_comment_char_isMissing)) {
  // L5("")
    Rsh_Fir_reg_comment_char_orDefault = Rsh_const(CCP, 11);
    goto L5_;
  } else {
  // L5(comment_char)
    Rsh_Fir_reg_comment_char_orDefault = Rsh_Fir_reg_comment_char;
    goto L5_;
  }

L5_:;
  // st `comment.char` = comment_char_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_comment_char_orDefault, RHO);
  (void)(Rsh_Fir_reg_comment_char_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // read_table = ldf `read.table`
  Rsh_Fir_reg_read_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   file1 = ld file;
  //   file2 = force? file1;
  //   checkMissing(file2);
  //   return file2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3501835689_, CCP, RHO);
  // p1 = prom<V +>{
  //   header1 = ld header;
  //   header2 = force? header1;
  //   checkMissing(header2);
  //   return header2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3501835689_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sep1 = ld sep;
  //   sep2 = force? sep1;
  //   checkMissing(sep2);
  //   return sep2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3501835689_2, CCP, RHO);
  // p3 = prom<V +>{
  //   quote1 = ld quote;
  //   quote2 = force? quote1;
  //   checkMissing(quote2);
  //   return quote2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3501835689_3, CCP, RHO);
  // p4 = prom<V +>{
  //   dec1 = ld dec;
  //   dec2 = force? dec1;
  //   checkMissing(dec2);
  //   return dec2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3501835689_4, CCP, RHO);
  // p5 = prom<V +>{
  //   fill1 = ld fill;
  //   fill2 = force? fill1;
  //   checkMissing(fill2);
  //   return fill2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3501835689_5, CCP, RHO);
  // p6 = prom<V +>{
  //   comment_char1 = ld `comment.char`;
  //   comment_char2 = force? comment_char1;
  //   checkMissing(comment_char2);
  //   return comment_char2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3501835689_6, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // r7 = dyn read_table[file, header, sep, quote, dec, fill, `comment.char`, `...`](p, p1, p2, p3, p4, p5, p6, ddd1)
  SEXP Rsh_Fir_array_args13[8];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args13[4] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args13[5] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args13[6] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args13[7] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names[8];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names[7] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_read_table, 8, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner3501835689_(SEXP CCP, SEXP RHO) {
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return file2
  return Rsh_Fir_reg_file2_;
}
SEXP Rsh_Fir_user_promise_inner3501835689_1(SEXP CCP, SEXP RHO) {
  // header1 = ld header
  Rsh_Fir_reg_header1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // header2 = force? header1
  Rsh_Fir_reg_header2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_header1_);
  // checkMissing(header2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_header2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return header2
  return Rsh_Fir_reg_header2_;
}
SEXP Rsh_Fir_user_promise_inner3501835689_2(SEXP CCP, SEXP RHO) {
  // sep1 = ld sep
  Rsh_Fir_reg_sep1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // sep2 = force? sep1
  Rsh_Fir_reg_sep2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep1_);
  // checkMissing(sep2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sep2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return sep2
  return Rsh_Fir_reg_sep2_;
}
SEXP Rsh_Fir_user_promise_inner3501835689_3(SEXP CCP, SEXP RHO) {
  // quote1 = ld quote
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // quote2 = force? quote1
  Rsh_Fir_reg_quote2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quote1_);
  // checkMissing(quote2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_quote2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return quote2
  return Rsh_Fir_reg_quote2_;
}
SEXP Rsh_Fir_user_promise_inner3501835689_4(SEXP CCP, SEXP RHO) {
  // dec1 = ld dec
  Rsh_Fir_reg_dec1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // dec2 = force? dec1
  Rsh_Fir_reg_dec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dec1_);
  // checkMissing(dec2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return dec2
  return Rsh_Fir_reg_dec2_;
}
SEXP Rsh_Fir_user_promise_inner3501835689_5(SEXP CCP, SEXP RHO) {
  // fill1 = ld fill
  Rsh_Fir_reg_fill1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // fill2 = force? fill1
  Rsh_Fir_reg_fill2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fill1_);
  // checkMissing(fill2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_fill2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return fill2
  return Rsh_Fir_reg_fill2_;
}
SEXP Rsh_Fir_user_promise_inner3501835689_6(SEXP CCP, SEXP RHO) {
  // comment_char1 = ld `comment.char`
  Rsh_Fir_reg_comment_char1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // comment_char2 = force? comment_char1
  Rsh_Fir_reg_comment_char2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_comment_char1_);
  // checkMissing(comment_char2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_comment_char2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return comment_char2
  return Rsh_Fir_reg_comment_char2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
