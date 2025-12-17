#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1716862637_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1716862637_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1716862637_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1716862637_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1716862637
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1716862637_, RHO, CCP);
  // st HTMLheader = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   HTMLheader = ldf HTMLheader;
  //   r1 = dyn HTMLheader("This is a sample header");
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn cat[, sep](p, "\n")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_HTMLheader;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // HTMLheader = ldf HTMLheader
  Rsh_Fir_reg_HTMLheader = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r1 = dyn HTMLheader("This is a sample header")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_HTMLheader, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_function_inner1716862637_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1716862637 dynamic dispatch ([title, logo, up, top, Rhome, css, headerTitle, outputEncoding])

  return Rsh_Fir_user_version_inner1716862637_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1716862637_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1716862637 version 0 (*, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner1716862637/0: expected 8, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_title;
  SEXP Rsh_Fir_reg_logo;
  SEXP Rsh_Fir_reg_up;
  SEXP Rsh_Fir_reg_top;
  SEXP Rsh_Fir_reg_Rhome;
  SEXP Rsh_Fir_reg_css;
  SEXP Rsh_Fir_reg_headerTitle;
  SEXP Rsh_Fir_reg_outputEncoding;
  SEXP Rsh_Fir_reg_title_isMissing;
  SEXP Rsh_Fir_reg_title_orDefault;
  SEXP Rsh_Fir_reg_logo_isMissing;
  SEXP Rsh_Fir_reg_logo_orDefault;
  SEXP Rsh_Fir_reg_up_isMissing;
  SEXP Rsh_Fir_reg_up_orDefault;
  SEXP Rsh_Fir_reg_top_isMissing;
  SEXP Rsh_Fir_reg_top_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_Rhome_isMissing;
  SEXP Rsh_Fir_reg_Rhome_orDefault;
  SEXP Rsh_Fir_reg_css_isMissing;
  SEXP Rsh_Fir_reg_css_orDefault;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_headerTitle_isMissing;
  SEXP Rsh_Fir_reg_headerTitle_orDefault;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_outputEncoding_isMissing;
  SEXP Rsh_Fir_reg_outputEncoding_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_paste2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_paste3_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_paste4_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_logo1_;
  SEXP Rsh_Fir_reg_logo2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_result;
  SEXP Rsh_Fir_reg_result1_;
  SEXP Rsh_Fir_reg_paste5_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_result2_;
  SEXP Rsh_Fir_reg_result3_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_up1_;
  SEXP Rsh_Fir_reg_up2_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_top1_;
  SEXP Rsh_Fir_reg_top2_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_result4_;
  SEXP Rsh_Fir_reg_result5_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_up3_;
  SEXP Rsh_Fir_reg_up4_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_result6_;
  SEXP Rsh_Fir_reg_result7_;
  SEXP Rsh_Fir_reg_paste6_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_top3_;
  SEXP Rsh_Fir_reg_top4_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_result8_;
  SEXP Rsh_Fir_reg_result9_;
  SEXP Rsh_Fir_reg_paste7_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_result10_;
  SEXP Rsh_Fir_reg_result11_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_result12_;
  SEXP Rsh_Fir_reg_result13_;

  // Bind parameters
  Rsh_Fir_reg_title = PARAMS[0];
  Rsh_Fir_reg_logo = PARAMS[1];
  Rsh_Fir_reg_up = PARAMS[2];
  Rsh_Fir_reg_top = PARAMS[3];
  Rsh_Fir_reg_Rhome = PARAMS[4];
  Rsh_Fir_reg_css = PARAMS[5];
  Rsh_Fir_reg_headerTitle = PARAMS[6];
  Rsh_Fir_reg_outputEncoding = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // title_isMissing = missing.0(title)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_title;
  Rsh_Fir_reg_title_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if title_isMissing then L0("R") else L0(title)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_title_isMissing)) {
  // L0("R")
    Rsh_Fir_reg_title_orDefault = Rsh_const(CCP, 5);
    goto L0_;
  } else {
  // L0(title)
    Rsh_Fir_reg_title_orDefault = Rsh_Fir_reg_title;
    goto L0_;
  }

L0_:;
  // st title = title_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_title_orDefault, RHO);
  (void)(Rsh_Fir_reg_title_orDefault);
  // logo_isMissing = missing.0(logo)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_logo;
  Rsh_Fir_reg_logo_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if logo_isMissing then L1(TRUE) else L1(logo)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_logo_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_logo_orDefault = Rsh_const(CCP, 7);
    goto L1_;
  } else {
  // L1(logo)
    Rsh_Fir_reg_logo_orDefault = Rsh_Fir_reg_logo;
    goto L1_;
  }

L1_:;
  // st logo = logo_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_logo_orDefault, RHO);
  (void)(Rsh_Fir_reg_logo_orDefault);
  // up_isMissing = missing.0(up)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_up;
  Rsh_Fir_reg_up_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if up_isMissing then L2(NULL) else L2(up)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_up_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_up_orDefault = Rsh_const(CCP, 9);
    goto L2_;
  } else {
  // L2(up)
    Rsh_Fir_reg_up_orDefault = Rsh_Fir_reg_up;
    goto L2_;
  }

L2_:;
  // st up = up_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_up_orDefault, RHO);
  (void)(Rsh_Fir_reg_up_orDefault);
  // top_isMissing = missing.0(top)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_top;
  Rsh_Fir_reg_top_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if top_isMissing then L3() else L4(top)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_top_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(top)
    Rsh_Fir_reg_top_orDefault = Rsh_Fir_reg_top;
    goto L4_;
  }

L3_:;
  // p1 = prom<V +>{
  //   file_path = ldf `file.path`;
  //   p = prom<V +>{
  //     Rhome1 = ld Rhome;
  //     Rhome2 = force? Rhome1;
  //     checkMissing(Rhome2);
  //     return Rhome2;
  //   };
  //   r1 = dyn file_path(p, "doc/html/index.html");
  //   return r1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_, 0, NULL, CCP, RHO);
  // goto L4(p1)
  // L4(p1)
  Rsh_Fir_reg_top_orDefault = Rsh_Fir_reg_p1_;
  goto L4_;

L4_:;
  // st top = top_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_top_orDefault, RHO);
  (void)(Rsh_Fir_reg_top_orDefault);
  // Rhome_isMissing = missing.0(Rhome)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_Rhome;
  Rsh_Fir_reg_Rhome_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if Rhome_isMissing then L5("") else L5(Rhome)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_Rhome_isMissing)) {
  // L5("")
    Rsh_Fir_reg_Rhome_orDefault = Rsh_const(CCP, 15);
    goto L5_;
  } else {
  // L5(Rhome)
    Rsh_Fir_reg_Rhome_orDefault = Rsh_Fir_reg_Rhome;
    goto L5_;
  }

L5_:;
  // st Rhome = Rhome_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_Rhome_orDefault, RHO);
  (void)(Rsh_Fir_reg_Rhome_orDefault);
  // css_isMissing = missing.0(css)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_css;
  Rsh_Fir_reg_css_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if css_isMissing then L6() else L7(css)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_css_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(css)
    Rsh_Fir_reg_css_orDefault = Rsh_Fir_reg_css;
    goto L7_;
  }

L6_:;
  // p3 = prom<V +>{
  //   file_path1 = ldf `file.path`;
  //   p2 = prom<V +>{
  //     Rhome3 = ld Rhome;
  //     Rhome4 = force? Rhome3;
  //     checkMissing(Rhome4);
  //     return Rhome4;
  //   };
  //   r4 = dyn file_path1(p2, "doc/html/R.css");
  //   return r4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_2, 0, NULL, CCP, RHO);
  // goto L7(p3)
  // L7(p3)
  Rsh_Fir_reg_css_orDefault = Rsh_Fir_reg_p3_;
  goto L7_;

L7_:;
  // st css = css_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_css_orDefault, RHO);
  (void)(Rsh_Fir_reg_css_orDefault);
  // headerTitle_isMissing = missing.0(headerTitle)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_headerTitle;
  Rsh_Fir_reg_headerTitle_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if headerTitle_isMissing then L8() else L9(headerTitle)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_headerTitle_isMissing)) {
  // L8()
    goto L8_;
  } else {
  // L9(headerTitle)
    Rsh_Fir_reg_headerTitle_orDefault = Rsh_Fir_reg_headerTitle;
    goto L9_;
  }

L8_:;
  // p5 = prom<V +>{
  //   paste = ldf paste;
  //   p4 = prom<V +>{
  //     title1 = ld title;
  //     title2 = force? title1;
  //     checkMissing(title2);
  //     return title2;
  //   };
  //   r7 = dyn paste("R:", p4);
  //   return r7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_4, 0, NULL, CCP, RHO);
  // goto L9(p5)
  // L9(p5)
  Rsh_Fir_reg_headerTitle_orDefault = Rsh_Fir_reg_p5_;
  goto L9_;

L9_:;
  // st headerTitle = headerTitle_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_headerTitle_orDefault, RHO);
  (void)(Rsh_Fir_reg_headerTitle_orDefault);
  // outputEncoding_isMissing = missing.0(outputEncoding)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_outputEncoding;
  Rsh_Fir_reg_outputEncoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if outputEncoding_isMissing then L10("UTF-8") else L10(outputEncoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_outputEncoding_isMissing)) {
  // L10("UTF-8")
    Rsh_Fir_reg_outputEncoding_orDefault = Rsh_const(CCP, 21);
    goto L10_;
  } else {
  // L10(outputEncoding)
    Rsh_Fir_reg_outputEncoding_orDefault = Rsh_Fir_reg_outputEncoding;
    goto L10_;
  }

L10_:;
  // st outputEncoding = outputEncoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_outputEncoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_outputEncoding_orDefault);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L11_:;
  // st result = r10
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // logo1 = ld logo
  Rsh_Fir_reg_logo1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

L31_:;
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L33() else D0()
  // L33()
  goto L33_;

L32_:;
  // r9 = dyn base("<!DOCTYPE html>", "<html>", <lang paste0("<head><title>", headerTitle, "</title>")>, <lang paste0("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=", mime_canonical_encoding(outputEncoding), "\" />")>, "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />", <lang paste0("<link rel=\"stylesheet\" type=\"text/css\" href=\"", css, "\" />")>, "</head><body><div class=\"container\">", <lang paste("<h1>", title)>)
  SEXP Rsh_Fir_array_args17[8];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args17[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args17[5] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args17[6] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args17[7] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names5[8];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 8, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L11(r9)
  // L11(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L11_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 32 [logo1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_logo1_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L33_:;
  // p6 = prom<V +>{
  //   headerTitle1 = ld headerTitle;
  //   headerTitle2 = force? headerTitle1;
  //   checkMissing(headerTitle2);
  //   return headerTitle2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_6, 0, NULL, CCP, RHO);
  // r12 = dyn paste1("<head><title>", p6, "</title>")
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L34() else D1()
  // L34()
  goto L34_;

L42_:;
  // logo2 = force? logo1
  Rsh_Fir_reg_logo2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_logo1_);
  // checkMissing(logo2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_logo2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(logo2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_logo2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c1 then L43() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L43()
    goto L43_;
  } else {
  // L12()
    goto L12_;
  }

D1_:;
  // deopt 9 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard2 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L34_:;
  // paste2 = ldf paste0
  Rsh_Fir_reg_paste2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

L43_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard1 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // st result = r23
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L14()
  // L14()
  goto L14_;

L15_:;
  // st result = r31
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard3 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L35_:;
  // p8 = prom<V +>{
  //   mime_canonical_encoding = ldf mime_canonical_encoding;
  //   p7 = prom<V +>{
  //     outputEncoding1 = ld outputEncoding;
  //     outputEncoding2 = force? outputEncoding1;
  //     checkMissing(outputEncoding2);
  //     return outputEncoding2;
  //   };
  //   r14 = dyn mime_canonical_encoding(p7);
  //   return r14;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_7, 0, NULL, CCP, RHO);
  // r16 = dyn paste2("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=", p8, "\" />")
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste2_, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

L44_:;
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

L45_:;
  // r22 = dyn base1(<sym result>, <lang paste0("<img class=\"toplogo\" src=\"", file.path(Rhome, "doc/html/Rlogo.svg"), "\" alt=\"[R logo]\" />")>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L13(r22)
  // L13(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L13_;

L51_:;
  // result2 = ld result
  Rsh_Fir_reg_result2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L53() else D14()
  // L53()
  goto L53_;

L52_:;
  // r30 = dyn base2(<sym result>, "</h1>", "<hr/>")
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L15(r30)
  // L15(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L15_;

D3_:;
  // deopt 15 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 36 [result]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 51 [result2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_result2_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // r35 = `!`(r34)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args30);
  // c5 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c5 then L17(c5) else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L17(c5)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c5_;
    goto L17_;
  } else {
  // L58()
    goto L58_;
  }

L36_:;
  // paste3 = ldf paste0
  Rsh_Fir_reg_paste3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

L46_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // paste5 = ldf paste0
  Rsh_Fir_reg_paste5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

L53_:;
  // result3 = force? result2
  Rsh_Fir_reg_result3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result2_);
  // checkMissing(result3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_result3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r32 = dyn c3(result3, "</h1>", "<hr/>")
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_result3_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

L55_:;
  // up1 = ld up
  Rsh_Fir_reg_up1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L57() else D16()
  // L57()
  goto L57_;

L56_:;
  // r33 = dyn base3(<sym up>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L16(r33)
  // L16(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L16_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 56 [r32]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 59 [up1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_up1_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // c15 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c15 then L63() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L63()
    goto L63_;
  } else {
  // L19()
    goto L19_;
  }

L37_:;
  // p9 = prom<V +>{
  //   css1 = ld css;
  //   css2 = force? css1;
  //   checkMissing(css2);
  //   return css2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_9, 0, NULL, CCP, RHO);
  // r18 = dyn paste3("<link rel=\"stylesheet\" type=\"text/css\" href=\"", p9, "\" />")
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste3_, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

L47_:;
  // p12 = prom<V +>{
  //   file_path2 = ldf `file.path`;
  //   p11 = prom<V +>{
  //     Rhome5 = ld Rhome;
  //     Rhome6 = force? Rhome5;
  //     checkMissing(Rhome6);
  //     return Rhome6;
  //   };
  //   r25 = dyn file_path2(p11, "doc/html/Rlogo.svg");
  //   return r25;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_10, 0, NULL, CCP, RHO);
  // r27 = dyn paste5("<img class=\"toplogo\" src=\"", p12, "\" alt=\"[R logo]\" />")
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste5_, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L48() else D12()
  // L48()
  goto L48_;

L54_:;
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L15_;

L57_:;
  // up2 = force? up1
  Rsh_Fir_reg_up2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_up1_);
  // checkMissing(up2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_up2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c4 = `==`(up2, NULL)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_up2_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args43);
  // goto L16(c4)
  // L16(c4)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_c4_;
  goto L16_;

L58_:;
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard4 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

D5_:;
  // deopt 22 [r18]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 43 [r27]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L18_:;
  // r38 = `!`(r37)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args45);
  // c12 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // c13 = `||`(c10, c12)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args47);
  // goto L17(c13)
  // L17(c13)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c13_;
  goto L17_;

L19_:;
  // goto L30()
  // L30()
  goto L30_;

L30_:;
  // result12 = ld result
  Rsh_Fir_reg_result12_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L95() else D32()
  // L95()
  goto L95_;

L38_:;
  // paste4 = ldf paste
  Rsh_Fir_reg_paste4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

L48_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r28 = dyn c2(result1, r27)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_result1_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

L59_:;
  // top1 = ld top
  Rsh_Fir_reg_top1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L61() else D17()
  // L61()
  goto L61_;

L60_:;
  // r36 = dyn base4(<sym top>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L18(c5, r36)
  // L18(c5, r36)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L18_;

L63_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard5 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 45 [r28]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 64 [c5, top1]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_top1_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 131 [result12]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_result12_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L20_:;
  // st result = r40
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard6 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L39_:;
  // p10 = prom<V +>{
  //   title3 = ld title;
  //   title4 = force? title3;
  //   checkMissing(title4);
  //   return title4;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_12, 0, NULL, CCP, RHO);
  // r20 = dyn paste4("<h1>", p10)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste4_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L49_:;
  // goto L13(r28)
  // L13(r28)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r28_;
  goto L13_;

L61_:;
  // top2 = force? top1
  Rsh_Fir_reg_top2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_top1_);
  // checkMissing(top2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_top2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c11 = `==`(top2, NULL)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_top2_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args55);
  // goto L18(c5, c11)
  // L18(c5, c11)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_c11_;
  goto L18_;

L64_:;
  // result4 = ld result
  Rsh_Fir_reg_result4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L66() else D18()
  // L66()
  goto L66_;

L65_:;
  // r39 = dyn base5(<sym result>, "<div style=\"text-align: center;\">")
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L20(r39)
  // L20(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L20_;

L95_:;
  // result13 = force? result12
  Rsh_Fir_reg_result13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result12_);
  // checkMissing(result13)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_result13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result13
  return Rsh_Fir_reg_result13_;

D7_:;
  // deopt 28 [r20]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 71 [result4]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_result4_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L21_:;
  // r44 = `!`(r43)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args58);
  // c18 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args59);
  // if c18 then L71() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L71()
    goto L71_;
  } else {
  // L22()
    goto L22_;
  }

L40_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r21 = dyn c("<!DOCTYPE html>", "<html>", r12, r16, "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />", r18, "</head><body><div class=\"container\">", r20)
  SEXP Rsh_Fir_array_args60[8];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args60[3] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args60[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args60[5] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args60[6] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args60[7] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names20[8];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = R_MissingArg;
  Rsh_Fir_array_arg_names20[5] = R_MissingArg;
  Rsh_Fir_array_arg_names20[6] = R_MissingArg;
  Rsh_Fir_array_arg_names20[7] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 8, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

L66_:;
  // result5 = force? result4
  Rsh_Fir_reg_result5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result4_);
  // checkMissing(result5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_result5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c16 = ldf c in base
  Rsh_Fir_reg_c16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r41 = dyn c16(result5, "<div style=\"text-align: center;\">")
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_result5_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c16_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L67() else D19()
  // L67()
  goto L67_;

L68_:;
  // up3 = ld up
  Rsh_Fir_reg_up3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L70() else D20()
  // L70()
  goto L70_;

L69_:;
  // r42 = dyn base6(<sym up>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L21(r42)
  // L21(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L21_;

D8_:;
  // deopt 30 [r21]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 75 [r41]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 78 [up3]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_up3_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard8 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L41_:;
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r21_;
  goto L11_;

L67_:;
  // goto L20(r41)
  // L20(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L20_;

L70_:;
  // up4 = force? up3
  Rsh_Fir_reg_up4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_up3_);
  // checkMissing(up4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_up4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c17 = `==`(up4, NULL)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_up4_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args66);
  // goto L21(c17)
  // L21(c17)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_c17_;
  goto L21_;

L71_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard7 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L23_:;
  // st result = r46
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // goto L24()
  // L24()
  goto L24_;

L25_:;
  // r56 = `!`(r55)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args68);
  // c21 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c21 then L82() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L82()
    goto L82_;
  } else {
  // L26()
    goto L26_;
  }

L72_:;
  // result6 = ld result
  Rsh_Fir_reg_result6_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L74() else D21()
  // L74()
  goto L74_;

L73_:;
  // r45 = dyn base7(<sym result>, <lang paste0("<a href=\"", up, "\"><img class=\"arrow\" src=\"", file.path(Rhome, "doc/html/left.jpg"), "\" alt=\"[Up]\" /></a>")>)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L23(r45)
  // L23(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L23_;

L79_:;
  // top3 = ld top
  Rsh_Fir_reg_top3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L81() else D25()
  // L81()
  goto L81_;

L80_:;
  // r54 = dyn base8(<sym top>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L25(r54)
  // L25(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L25_;

D21_:;
  // deopt 84 [result6]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_result6_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 100 [top3]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_top3_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L28()
  // L28()
  goto L28_;

L28_:;
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard10 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L74_:;
  // result7 = force? result6
  Rsh_Fir_reg_result7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result6_);
  // checkMissing(result7)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_result7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // paste6 = ldf paste0
  Rsh_Fir_reg_paste6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L75() else D22()
  // L75()
  goto L75_;

L81_:;
  // top4 = force? top3
  Rsh_Fir_reg_top4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_top3_);
  // checkMissing(top4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_top4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c20 = `==`(top4, NULL)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_top4_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args75);
  // goto L25(c20)
  // L25(c20)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_c20_;
  goto L25_;

L82_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard9 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

D22_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // st result = r58
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // goto L28()
  // L28()
  goto L28_;

L29_:;
  // st result = r67
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // goto L30()
  // L30()
  goto L30_;

L75_:;
  // p13 = prom<V +>{
  //   up5 = ld up;
  //   up6 = force? up5;
  //   checkMissing(up6);
  //   return up6;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_13, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   file_path3 = ldf `file.path`;
  //   p14 = prom<V +>{
  //     Rhome7 = ld Rhome;
  //     Rhome8 = force? Rhome7;
  //     checkMissing(Rhome8);
  //     return Rhome8;
  //   };
  //   r49 = dyn file_path3(p14, "doc/html/left.jpg");
  //   return r49;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_14, 0, NULL, CCP, RHO);
  // r51 = dyn paste6("<a href=\"", p13, "\"><img class=\"arrow\" src=\"", p15, "\" alt=\"[Up]\" /></a>")
  SEXP Rsh_Fir_array_args80[5];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args80[3] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args80[4] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names26[5];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_array_arg_names26[4] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste6_, 5, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L76() else D23()
  // L76()
  goto L76_;

L83_:;
  // result8 = ld result
  Rsh_Fir_reg_result8_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L85() else D26()
  // L85()
  goto L85_;

L84_:;
  // r57 = dyn base9(<sym result>, <lang paste0("<a href=\"", top, "\"><img class=\"arrow\" src=\"", file.path(Rhome, "doc/html/up.jpg"), "\" alt=\"[Top]\" /></a>")>)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L27(r57)
  // L27(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L27_;

L90_:;
  // result10 = ld result
  Rsh_Fir_reg_result10_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L92() else D30()
  // L92()
  goto L92_;

L91_:;
  // r66 = dyn base10(<sym result>, "</div>")
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L29(r66)
  // L29(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L29_;

D23_:;
  // deopt 93 [r51]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 106 [result8]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_result8_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 123 [result10]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_result10_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L76_:;
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r52 = dyn c19(result7, r51)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_result7_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L77() else D24()
  // L77()
  goto L77_;

L85_:;
  // result9 = force? result8
  Rsh_Fir_reg_result9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result8_);
  // checkMissing(result9)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_result9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // paste7 = ldf paste0
  Rsh_Fir_reg_paste7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L86() else D27()
  // L86()
  goto L86_;

L92_:;
  // result11 = force? result10
  Rsh_Fir_reg_result11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result10_);
  // checkMissing(result11)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_result11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c23 = ldf c in base
  Rsh_Fir_reg_c23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r68 = dyn c23(result11, "</div>")
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_result11_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c23_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L93() else D31()
  // L93()
  goto L93_;

D24_:;
  // deopt 95 [r52]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 127 [r68]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L23(r52)
  // L23(r52)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r52_;
  goto L23_;

L86_:;
  // p16 = prom<V +>{
  //   top5 = ld top;
  //   top6 = force? top5;
  //   checkMissing(top6);
  //   return top6;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_16, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   file_path4 = ldf `file.path`;
  //   p17 = prom<V +>{
  //     Rhome9 = ld Rhome;
  //     Rhome10 = force? Rhome9;
  //     checkMissing(Rhome10);
  //     return Rhome10;
  //   };
  //   r61 = dyn file_path4(p17, "doc/html/up.jpg");
  //   return r61;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_17, 0, NULL, CCP, RHO);
  // r63 = dyn paste7("<a href=\"", p16, "\"><img class=\"arrow\" src=\"", p18, "\" alt=\"[Top]\" /></a>")
  SEXP Rsh_Fir_array_args90[5];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args90[2] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args90[3] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args90[4] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names32[5];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_array_arg_names32[3] = R_MissingArg;
  Rsh_Fir_array_arg_names32[4] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste7_, 5, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L87() else D28()
  // L87()
  goto L87_;

L93_:;
  // goto L29(r68)
  // L29(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L29_;

D28_:;
  // deopt 115 [r63]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L87_:;
  // c22 = ldf c in base
  Rsh_Fir_reg_c22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r64 = dyn c22(result9, r63)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_result9_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c22_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L88() else D29()
  // L88()
  goto L88_;

D29_:;
  // deopt 117 [r64]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L27(r64)
  // L27(r64)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r64_;
  goto L27_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p = prom<V +>{
  //   Rhome1 = ld Rhome;
  //   Rhome2 = force? Rhome1;
  //   checkMissing(Rhome2);
  //   return Rhome2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_1, 0, NULL, CCP, RHO);
  // r1 = dyn file_path(p, "doc/html/index.html")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner1716862637_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Rhome1_;
  SEXP Rsh_Fir_reg_Rhome2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // Rhome1 = ld Rhome
  Rsh_Fir_reg_Rhome1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // Rhome2 = force? Rhome1
  Rsh_Fir_reg_Rhome2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Rhome1_);
  // checkMissing(Rhome2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_Rhome2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return Rhome2
  return Rsh_Fir_reg_Rhome2_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // file_path1 = ldf `file.path`
  Rsh_Fir_reg_file_path1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p2 = prom<V +>{
  //   Rhome3 = ld Rhome;
  //   Rhome4 = force? Rhome3;
  //   checkMissing(Rhome4);
  //   return Rhome4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_3, 0, NULL, CCP, RHO);
  // r4 = dyn file_path1(p2, "doc/html/R.css")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Rhome3_;
  SEXP Rsh_Fir_reg_Rhome4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // Rhome3 = ld Rhome
  Rsh_Fir_reg_Rhome3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // Rhome4 = force? Rhome3
  Rsh_Fir_reg_Rhome4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Rhome3_);
  // checkMissing(Rhome4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_Rhome4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return Rhome4
  return Rsh_Fir_reg_Rhome4_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // p4 = prom<V +>{
  //   title1 = ld title;
  //   title2 = force? title1;
  //   checkMissing(title2);
  //   return title2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_5, 0, NULL, CCP, RHO);
  // r7 = dyn paste("R:", p4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_title1_;
  SEXP Rsh_Fir_reg_title2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // title1 = ld title
  Rsh_Fir_reg_title1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // title2 = force? title1
  Rsh_Fir_reg_title2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_title1_);
  // checkMissing(title2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_title2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return title2
  return Rsh_Fir_reg_title2_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_headerTitle1_;
  SEXP Rsh_Fir_reg_headerTitle2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // headerTitle1 = ld headerTitle
  Rsh_Fir_reg_headerTitle1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // headerTitle2 = force? headerTitle1
  Rsh_Fir_reg_headerTitle2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_headerTitle1_);
  // checkMissing(headerTitle2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_headerTitle2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return headerTitle2
  return Rsh_Fir_reg_headerTitle2_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mime_canonical_encoding;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // mime_canonical_encoding = ldf mime_canonical_encoding
  Rsh_Fir_reg_mime_canonical_encoding = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // p7 = prom<V +>{
  //   outputEncoding1 = ld outputEncoding;
  //   outputEncoding2 = force? outputEncoding1;
  //   checkMissing(outputEncoding2);
  //   return outputEncoding2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_8, 0, NULL, CCP, RHO);
  // r14 = dyn mime_canonical_encoding(p7)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mime_canonical_encoding, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_outputEncoding1_;
  SEXP Rsh_Fir_reg_outputEncoding2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // outputEncoding1 = ld outputEncoding
  Rsh_Fir_reg_outputEncoding1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // outputEncoding2 = force? outputEncoding1
  Rsh_Fir_reg_outputEncoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outputEncoding1_);
  // checkMissing(outputEncoding2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_outputEncoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return outputEncoding2
  return Rsh_Fir_reg_outputEncoding2_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_css1_;
  SEXP Rsh_Fir_reg_css2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // css1 = ld css
  Rsh_Fir_reg_css1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // css2 = force? css1
  Rsh_Fir_reg_css2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_css1_);
  // checkMissing(css2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_css2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return css2
  return Rsh_Fir_reg_css2_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path2_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // file_path2 = ldf `file.path`
  Rsh_Fir_reg_file_path2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p11 = prom<V +>{
  //   Rhome5 = ld Rhome;
  //   Rhome6 = force? Rhome5;
  //   checkMissing(Rhome6);
  //   return Rhome6;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_11, 0, NULL, CCP, RHO);
  // r25 = dyn file_path2(p11, "doc/html/Rlogo.svg")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path2_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Rhome5_;
  SEXP Rsh_Fir_reg_Rhome6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // Rhome5 = ld Rhome
  Rsh_Fir_reg_Rhome5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // Rhome6 = force? Rhome5
  Rsh_Fir_reg_Rhome6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Rhome5_);
  // checkMissing(Rhome6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_Rhome6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return Rhome6
  return Rsh_Fir_reg_Rhome6_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_title3_;
  SEXP Rsh_Fir_reg_title4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // title3 = ld title
  Rsh_Fir_reg_title3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // title4 = force? title3
  Rsh_Fir_reg_title4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_title3_);
  // checkMissing(title4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_title4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return title4
  return Rsh_Fir_reg_title4_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_up5_;
  SEXP Rsh_Fir_reg_up6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // up5 = ld up
  Rsh_Fir_reg_up5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // up6 = force? up5
  Rsh_Fir_reg_up6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_up5_);
  // checkMissing(up6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_up6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return up6
  return Rsh_Fir_reg_up6_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path3_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r49_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // file_path3 = ldf `file.path`
  Rsh_Fir_reg_file_path3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p14 = prom<V +>{
  //   Rhome7 = ld Rhome;
  //   Rhome8 = force? Rhome7;
  //   checkMissing(Rhome8);
  //   return Rhome8;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_15, 0, NULL, CCP, RHO);
  // r49 = dyn file_path3(p14, "doc/html/left.jpg")
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path3_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names25, CCP, RHO);
  // return r49
  return Rsh_Fir_reg_r49_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Rhome7_;
  SEXP Rsh_Fir_reg_Rhome8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // Rhome7 = ld Rhome
  Rsh_Fir_reg_Rhome7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // Rhome8 = force? Rhome7
  Rsh_Fir_reg_Rhome8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Rhome7_);
  // checkMissing(Rhome8)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_Rhome8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return Rhome8
  return Rsh_Fir_reg_Rhome8_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_top5_;
  SEXP Rsh_Fir_reg_top6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // top5 = ld top
  Rsh_Fir_reg_top5_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // top6 = force? top5
  Rsh_Fir_reg_top6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_top5_);
  // checkMissing(top6)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_top6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return top6
  return Rsh_Fir_reg_top6_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path4_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r61_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // file_path4 = ldf `file.path`
  Rsh_Fir_reg_file_path4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p17 = prom<V +>{
  //   Rhome9 = ld Rhome;
  //   Rhome10 = force? Rhome9;
  //   checkMissing(Rhome10);
  //   return Rhome10;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716862637_18, 0, NULL, CCP, RHO);
  // r61 = dyn file_path4(p17, "doc/html/up.jpg")
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path4_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names31, CCP, RHO);
  // return r61
  return Rsh_Fir_reg_r61_;
}
SEXP Rsh_Fir_user_promise_inner1716862637_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Rhome9_;
  SEXP Rsh_Fir_reg_Rhome10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1716862637/0: expected 0, got %d", NCAPTURES);

  // Rhome9 = ld Rhome
  Rsh_Fir_reg_Rhome9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // Rhome10 = force? Rhome9
  Rsh_Fir_reg_Rhome10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Rhome9_);
  // checkMissing(Rhome10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_Rhome10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // return Rhome10
  return Rsh_Fir_reg_Rhome10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
