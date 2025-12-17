#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1303892105_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1303892105_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1303892105_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1303892105_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1303892105_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1303892105_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner1303892105
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1303892105_, RHO, CCP);
  // st citEntry = r
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
SEXP Rsh_Fir_user_function_inner1303892105_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1303892105 dynamic dispatch ([entry, textVersion, header, footer, `...`])

  return Rsh_Fir_user_version_inner1303892105_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1303892105_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1303892105 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1303892105/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_entry;  // entry
  SEXP Rsh_Fir_reg_textVersion;  // textVersion
  SEXP Rsh_Fir_reg_header;  // header
  SEXP Rsh_Fir_reg_footer;  // footer
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_textVersion_isMissing;  // textVersion_isMissing
  SEXP Rsh_Fir_reg_textVersion_orDefault;  // textVersion_orDefault
  SEXP Rsh_Fir_reg_header_isMissing;  // header_isMissing
  SEXP Rsh_Fir_reg_header_orDefault;  // header_orDefault
  SEXP Rsh_Fir_reg_footer_isMissing;  // footer_isMissing
  SEXP Rsh_Fir_reg_footer_orDefault;  // footer_orDefault
  SEXP Rsh_Fir_reg_bibentry;  // bibentry
  SEXP Rsh_Fir_reg_entry1_;  // entry1
  SEXP Rsh_Fir_reg_entry2_;  // entry2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_textVersion1_;  // textVersion1
  SEXP Rsh_Fir_reg_textVersion2_;  // textVersion2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_header1_;  // header1
  SEXP Rsh_Fir_reg_header2_;  // header2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_footer1_;  // footer1
  SEXP Rsh_Fir_reg_footer2_;  // footer2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_entry = PARAMS[0];
  Rsh_Fir_reg_textVersion = PARAMS[1];
  Rsh_Fir_reg_header = PARAMS[2];
  Rsh_Fir_reg_footer = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st entry = entry
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_entry, RHO);
  (void)(Rsh_Fir_reg_entry);
  // textVersion_isMissing = missing.0(textVersion)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_textVersion;
  Rsh_Fir_reg_textVersion_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if textVersion_isMissing then L0(NULL) else L0(textVersion)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_textVersion_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_textVersion_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(textVersion)
    Rsh_Fir_reg_textVersion_orDefault = Rsh_Fir_reg_textVersion;
    goto L0_;
  }

L0_:;
  // st textVersion = textVersion_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_textVersion_orDefault, RHO);
  (void)(Rsh_Fir_reg_textVersion_orDefault);
  // header_isMissing = missing.0(header)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_header;
  Rsh_Fir_reg_header_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if header_isMissing then L1(NULL) else L1(header)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_header_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_header_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(header)
    Rsh_Fir_reg_header_orDefault = Rsh_Fir_reg_header;
    goto L1_;
  }

L1_:;
  // st header = header_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_header_orDefault, RHO);
  (void)(Rsh_Fir_reg_header_orDefault);
  // footer_isMissing = missing.0(footer)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_footer;
  Rsh_Fir_reg_footer_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if footer_isMissing then L2(NULL) else L2(footer)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_footer_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_footer_orDefault = Rsh_const(CCP, 2);
    goto L2_;
  } else {
  // L2(footer)
    Rsh_Fir_reg_footer_orDefault = Rsh_Fir_reg_footer;
    goto L2_;
  }

L2_:;
  // st footer = footer_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_footer_orDefault, RHO);
  (void)(Rsh_Fir_reg_footer_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // bibentry = ldf bibentry
  Rsh_Fir_reg_bibentry = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   entry1 = ld entry;
  //   entry2 = force? entry1;
  //   checkMissing(entry2);
  //   return entry2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1303892105_, CCP, RHO);
  // p1 = prom<V +>{
  //   textVersion1 = ld textVersion;
  //   textVersion2 = force? textVersion1;
  //   checkMissing(textVersion2);
  //   return textVersion2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1303892105_1, CCP, RHO);
  // p2 = prom<V +>{
  //   header1 = ld header;
  //   header2 = force? header1;
  //   checkMissing(header2);
  //   return header2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1303892105_2, CCP, RHO);
  // p3 = prom<V +>{
  //   footer1 = ld footer;
  //   footer2 = force? footer1;
  //   checkMissing(footer2);
  //   return footer2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1303892105_3, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r4 = dyn bibentry[bibtype, textVersion, header, footer, `...`](p, p1, p2, p3, ddd1)
  SEXP Rsh_Fir_array_args7[5];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args7[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args7[4] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names[4] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bibentry, 5, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner1303892105_(SEXP CCP, SEXP RHO) {
  // entry1 = ld entry
  Rsh_Fir_reg_entry1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // entry2 = force? entry1
  Rsh_Fir_reg_entry2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_entry1_);
  // checkMissing(entry2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_entry2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return entry2
  return Rsh_Fir_reg_entry2_;
}
SEXP Rsh_Fir_user_promise_inner1303892105_1(SEXP CCP, SEXP RHO) {
  // textVersion1 = ld textVersion
  Rsh_Fir_reg_textVersion1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // textVersion2 = force? textVersion1
  Rsh_Fir_reg_textVersion2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_textVersion1_);
  // checkMissing(textVersion2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_textVersion2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return textVersion2
  return Rsh_Fir_reg_textVersion2_;
}
SEXP Rsh_Fir_user_promise_inner1303892105_2(SEXP CCP, SEXP RHO) {
  // header1 = ld header
  Rsh_Fir_reg_header1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // header2 = force? header1
  Rsh_Fir_reg_header2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_header1_);
  // checkMissing(header2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_header2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return header2
  return Rsh_Fir_reg_header2_;
}
SEXP Rsh_Fir_user_promise_inner1303892105_3(SEXP CCP, SEXP RHO) {
  // footer1 = ld footer
  Rsh_Fir_reg_footer1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // footer2 = force? footer1
  Rsh_Fir_reg_footer2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_footer1_);
  // checkMissing(footer2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_footer2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return footer2
  return Rsh_Fir_reg_footer2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
