#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4106164652_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4106164652_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4106164652_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4106164652_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_file_show;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4106164652
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4106164652_, RHO, CCP);
  // st `file.show` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // file_show = ldf `file.show`
  Rsh_Fir_reg_file_show = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p1 = prom<V +>{
  //   file_path = ldf `file.path`;
  //   p = prom<V +>{
  //     R_home = ldf `R.home`;
  //     r1 = dyn R_home("doc");
  //     return r1;
  //   };
  //   r3 = dyn file_path(p, "COPYRIGHTS");
  //   return r3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn file_show(p1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_show, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // p = prom<V +>{
  //   R_home = ldf `R.home`;
  //   r1 = dyn R_home("doc");
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r3 = dyn file_path(p, "COPYRIGHTS")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R_home;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // R_home = ldf `R.home`
  Rsh_Fir_reg_R_home = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r1 = dyn R_home("doc")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_home, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_function_inner4106164652_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4106164652 dynamic dispatch ([`...`, header, title, `delete.file`, pager, encoding])

  return Rsh_Fir_user_version_inner4106164652_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4106164652_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4106164652 version 0 (dots, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner4106164652/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_header;
  SEXP Rsh_Fir_reg_title;
  SEXP Rsh_Fir_reg_delete_file;
  SEXP Rsh_Fir_reg_pager;
  SEXP Rsh_Fir_reg_encoding;
  SEXP Rsh_Fir_reg_header_isMissing;
  SEXP Rsh_Fir_reg_header_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_title_isMissing;
  SEXP Rsh_Fir_reg_title_orDefault;
  SEXP Rsh_Fir_reg_delete_file_isMissing;
  SEXP Rsh_Fir_reg_delete_file_orDefault;
  SEXP Rsh_Fir_reg_pager_isMissing;
  SEXP Rsh_Fir_reg_pager_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_encoding_isMissing;
  SEXP Rsh_Fir_reg_encoding_orDefault;
  SEXP Rsh_Fir_reg_path_expand;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_files;
  SEXP Rsh_Fir_reg_files1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_nfiles;
  SEXP Rsh_Fir_reg_nfiles1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_l10n_info;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_encoding1_;
  SEXP Rsh_Fir_reg_encoding2_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_l10n_info1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_encoding3_;
  SEXP Rsh_Fir_reg_encoding4_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_encoding5_;
  SEXP Rsh_Fir_reg_encoding6_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_encoding7_;
  SEXP Rsh_Fir_reg_encoding8_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_files2_;
  SEXP Rsh_Fir_reg_files3_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_files4_;
  SEXP Rsh_Fir_reg_files5_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_files7_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_tempfile;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_readLines;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_try;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_tmp2_;
  SEXP Rsh_Fir_reg_tmp3_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_file_copy;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg_writeLines;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_tf4_;
  SEXP Rsh_Fir_reg_tf5_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_tf7_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_delete_file1_;
  SEXP Rsh_Fir_reg_delete_file2_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_unlink;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_pager1_;
  SEXP Rsh_Fir_reg_pager2_;
  SEXP Rsh_Fir_reg_is_function;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_pager3_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_files10_;
  SEXP Rsh_Fir_reg_files11_;
  SEXP Rsh_Fir_reg_header3_;
  SEXP Rsh_Fir_reg_header4_;
  SEXP Rsh_Fir_reg_title3_;
  SEXP Rsh_Fir_reg_title4_;
  SEXP Rsh_Fir_reg_delete_file5_;
  SEXP Rsh_Fir_reg_delete_file6_;
  SEXP Rsh_Fir_reg_pager4_;
  SEXP Rsh_Fir_reg_pager5_;
  SEXP Rsh_Fir_reg_file_show1;
  SEXP Rsh_Fir_reg_r76_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_header = PARAMS[1];
  Rsh_Fir_reg_title = PARAMS[2];
  Rsh_Fir_reg_delete_file = PARAMS[3];
  Rsh_Fir_reg_pager = PARAMS[4];
  Rsh_Fir_reg_encoding = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // header_isMissing = missing.0(header)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_header;
  Rsh_Fir_reg_header_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if header_isMissing then L0() else L1(header)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_header_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(header)
    Rsh_Fir_reg_header_orDefault = Rsh_Fir_reg_header;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf rep;
  //   base = ldf rep in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   rep = ldf rep in base;
  //   r2 = dyn rep("", <sym nfiles>);
  //   goto L0(r2);
  // L2():
  //   r = dyn base("", <sym nfiles>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_header_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st header = header_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_header_orDefault, RHO);
  (void)(Rsh_Fir_reg_header_orDefault);
  // title_isMissing = missing.0(title)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_title;
  Rsh_Fir_reg_title_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if title_isMissing then L2("R Information") else L2(title)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_title_isMissing)) {
  // L2("R Information")
    Rsh_Fir_reg_title_orDefault = Rsh_const(CCP, 10);
    goto L2_;
  } else {
  // L2(title)
    Rsh_Fir_reg_title_orDefault = Rsh_Fir_reg_title;
    goto L2_;
  }

L2_:;
  // st title = title_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_title_orDefault, RHO);
  (void)(Rsh_Fir_reg_title_orDefault);
  // delete_file_isMissing = missing.0(delete_file)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_delete_file;
  Rsh_Fir_reg_delete_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if delete_file_isMissing then L3(FALSE) else L3(delete_file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_delete_file_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_delete_file_orDefault = Rsh_const(CCP, 12);
    goto L3_;
  } else {
  // L3(delete_file)
    Rsh_Fir_reg_delete_file_orDefault = Rsh_Fir_reg_delete_file;
    goto L3_;
  }

L3_:;
  // st `delete.file` = delete_file_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_delete_file_orDefault, RHO);
  (void)(Rsh_Fir_reg_delete_file_orDefault);
  // pager_isMissing = missing.0(pager)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_pager;
  Rsh_Fir_reg_pager_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if pager_isMissing then L4() else L5(pager)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pager_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(pager)
    Rsh_Fir_reg_pager_orDefault = Rsh_Fir_reg_pager;
    goto L5_;
  }

L4_:;
  // p1 = prom<V +>{
  //   getOption = ldf getOption;
  //   r4 = dyn getOption("pager");
  //   return r4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_1, 0, NULL, CCP, RHO);
  // goto L5(p1)
  // L5(p1)
  Rsh_Fir_reg_pager_orDefault = Rsh_Fir_reg_p1_1;
  goto L5_;

L5_:;
  // st pager = pager_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_pager_orDefault, RHO);
  (void)(Rsh_Fir_reg_pager_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if encoding_isMissing then L6("") else L6(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L6("")
    Rsh_Fir_reg_encoding_orDefault = Rsh_const(CCP, 7);
    goto L6_;
  } else {
  // L6(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L6_;
  }

L6_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // path_expand = ldf `path.expand`
  Rsh_Fir_reg_path_expand = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L37() else D0()
  // L37()
  goto L37_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p2 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   c = ldf c;
  //   ddd1 = ld `...`;
  //   r8 = dyn c[`...`](ddd1);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1(<sym ...>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_2, 0, NULL, CCP, RHO);
  // r10 = dyn path_expand(p2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_path_expand, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L38() else D1()
  // L38()
  goto L38_;

D1_:;
  // deopt 3 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L38_:;
  // st files = r10
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L7_:;
  // st nfiles = r12
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // nfiles = ld nfiles
  Rsh_Fir_reg_nfiles = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L43() else D4()
  // L43()
  goto L43_;

L39_:;
  // files = ld files
  Rsh_Fir_reg_files = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L41() else D2()
  // L41()
  goto L41_;

L40_:;
  // r11 = dyn base2(<sym files>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L7_;

D2_:;
  // deopt 7 [files]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_files;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 12 [nfiles]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_nfiles;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L41_:;
  // files1 = force? files
  Rsh_Fir_reg_files1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files);
  // checkMissing(files1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_files1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r13 = dyn length(files1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_files1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L42() else D3()
  // L42()
  goto L42_;

L43_:;
  // nfiles1 = force? nfiles
  Rsh_Fir_reg_nfiles1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nfiles);
  // checkMissing(nfiles1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_nfiles1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r14 = `==`(nfiles1, 0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_nfiles1_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args21);
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // if c1 then L44() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L44()
    goto L44_;
  } else {
  // L8()
    goto L8_;
  }

D3_:;
  // deopt 10 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // l10n_info = ldf l10n_info
  Rsh_Fir_reg_l10n_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L50() else D6()
  // L50()
  goto L50_;

L42_:;
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L7_;

L44_:;
  // sym3 = ldf invisible
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base3 = ldf invisible in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard3 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;

L45_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r17 = dyn invisible(NULL)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L47() else D5()
  // L47()
  goto L47_;

L46_:;
  // r15 = dyn base3(NULL)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L9_;

L50_:;
  // r20 = dyn l10n_info()
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_l10n_info, 0, NULL, NULL, CCP, RHO);
  // check L51() else D7()
  // L51()
  goto L51_;

D5_:;
  // deopt 20 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 26 [r20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L9_;

L51_:;
  // c2 = `is.object`(r20)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args26);
  // if c2 then L52() else L53(r20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L52()
    goto L52_;
  } else {
  // L53(r20)
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
    goto L53_;
  }

L11_:;
  // c3 = `as.logical`(dx1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c3 then L55() else L12(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L55()
    goto L55_;
  } else {
  // L12(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L12_;
  }

L52_:;
  // dr = tryDispatchBuiltin.1("[[", r20)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc then L54() else L53(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L54()
    goto L54_;
  } else {
  // L53(dr)
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_dr;
    goto L53_;
  }

L53_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r23 = dyn __(r22, "UTF-8")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r23_;
  goto L11_;

L12_:;
  // c9 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c9 then L58() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L58()
    goto L58_;
  } else {
  // L13()
    goto L13_;
  }

L54_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

L55_:;
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L56() else D8()
  // L56()
  goto L56_;

D8_:;
  // deopt 30 [c3, encoding1]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_encoding1_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // l10n_info1 = ldf l10n_info
  Rsh_Fir_reg_l10n_info1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L60() else D9()
  // L60()
  goto L60_;

L56_:;
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // r24 = `==`(encoding2, "UTF-8")
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_encoding2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args34);
  // c6 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // c7 = `&&`(c3, c6)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args36);
  // goto L12(c7)
  // L12(c7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c7_;
  goto L12_;

L58_:;
  // st encoding = ""
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // goto L14()
  // L14()
  goto L14_;

D9_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // r26 = dyn l10n_info1()
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_l10n_info1_, 0, NULL, NULL, CCP, RHO);
  // check L61() else D10()
  // L61()
  goto L61_;

D10_:;
  // deopt 42 [r26]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L61_:;
  // c10 = `is.object`(r26)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args37);
  // if c10 then L62() else L63(r26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L62()
    goto L62_;
  } else {
  // L63(r26)
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r26_;
    goto L63_;
  }

L15_:;
  // c11 = `as.logical`(dx3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c11 then L65() else L16(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L65()
    goto L65_;
  } else {
  // L16(c11)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
    goto L16_;
  }

L62_:;
  // dr2 = tryDispatchBuiltin.1("[[", r26)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc1 then L64() else L63(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L64()
    goto L64_;
  } else {
  // L63(dr2)
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_dr2_;
    goto L63_;
  }

L63_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r29 = dyn __1(r28, "Latin-1")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L15(r29)
  // L15(r29)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r29_;
  goto L15_;

L16_:;
  // c17 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c17 then L68() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L68()
    goto L68_;
  } else {
  // L17()
    goto L17_;
  }

L64_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L15(dx2)
  // L15(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L15_;

L65_:;
  // encoding3 = ld encoding
  Rsh_Fir_reg_encoding3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L66() else D11()
  // L66()
  goto L66_;

D11_:;
  // deopt 46 [c11, encoding3]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_encoding3_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard4 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L66_:;
  // encoding4 = force? encoding3
  Rsh_Fir_reg_encoding4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding3_);
  // checkMissing(encoding4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_encoding4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r30 = `==`(encoding4, "latin1")
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_encoding4_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args46);
  // c14 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // c15 = `&&`(c11, c14)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args48);
  // goto L16(c15)
  // L16(c15)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c15_;
  goto L16_;

L68_:;
  // st encoding = ""
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // goto L18()
  // L18()
  goto L18_;

L19_:;
  // r35 = `!`(r33)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args49);
  // c18 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args50);
  // if c18 then L74() else L20(c18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L74()
    goto L74_;
  } else {
  // L20(c18)
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c18_;
    goto L20_;
  }

L70_:;
  // encoding5 = ld encoding
  Rsh_Fir_reg_encoding5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L72() else D12()
  // L72()
  goto L72_;

L71_:;
  // r32 = dyn base4(<sym encoding>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L19(r32)
  // L19(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L19_;

D12_:;
  // deopt 58 [encoding5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_encoding5_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L20_:;
  // c27 = `as.logical`(c20)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // if c27 then L80() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L80()
    goto L80_;
  } else {
  // L22()
    goto L22_;
  }

L72_:;
  // encoding6 = force? encoding5
  Rsh_Fir_reg_encoding6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding5_);
  // checkMissing(encoding6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_encoding6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r34 = dyn is_na(encoding6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_encoding6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L73() else D13()
  // L73()
  goto L73_;

L74_:;
  // sym5 = ldf nzchar
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base5 = ldf nzchar in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard5 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

D13_:;
  // deopt 61 [r34]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L21_:;
  // c24 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // c25 = `&&`(c23, c24)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args57);
  // goto L20(c25)
  // L20(c25)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c25_;
  goto L20_;

L22_:;
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // sym8 = ldf `is.function`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base8 = ldf `is.function` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard8 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L73_:;
  // goto L19(r34)
  // L19(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L19_;

L75_:;
  // encoding7 = ld encoding
  Rsh_Fir_reg_encoding7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L77() else D14()
  // L77()
  goto L77_;

L76_:;
  // r36 = dyn base5(<sym encoding>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L21(c18, r36)
  // L21(c18, r36)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L21_;

L80_:;
  // sym6 = ldf seq_along
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base6 = ldf seq_along in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard6 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

D14_:;
  // deopt 65 [c18, encoding7]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_encoding7_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L23_:;
  // s = toForSeq(r40)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args62);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 22);
  // goto L24(i)
  // L24(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L24_;

L34_:;
  // c33 = `as.logical`(r67)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // if c33 then L121() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L121()
    goto L121_;
  } else {
  // L35()
    goto L35_;
  }

L77_:;
  // encoding8 = force? encoding7
  Rsh_Fir_reg_encoding8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding7_);
  // checkMissing(encoding8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_encoding8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r38 = dyn nzchar(encoding8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_encoding8_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L78() else D15()
  // L78()
  goto L78_;

L81_:;
  // files2 = ld files
  Rsh_Fir_reg_files2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L83() else D16()
  // L83()
  goto L83_;

L82_:;
  // r39 = dyn base6(<sym files>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L23(r39)
  // L23(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L23_;

L117_:;
  // pager1 = ld pager
  Rsh_Fir_reg_pager1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L119() else D36()
  // L119()
  goto L119_;

L118_:;
  // r66 = dyn base8(<sym pager>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L34(r66)
  // L34(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L34_;

D15_:;
  // deopt 68 [c18, r38]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 71 [files2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_files2_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 139 [pager1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_pager1_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L24_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // c28 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if c28 then L84() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L84()
    goto L84_;
  } else {
  // L32()
    goto L32_;
  }

L35_:;
  // sym9 = ldf `.Internal`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base9 = ldf `.Internal` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard9 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L78_:;
  // goto L21(c18, r38)
  // L21(c18, r38)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L21_;

L83_:;
  // files3 = force? files2
  Rsh_Fir_reg_files3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files2_);
  // checkMissing(files3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_files3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // r41 = seq_along(files3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_files3_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args72);
  // goto L23(r41)
  // L23(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L23_;

L119_:;
  // pager2 = force? pager1
  Rsh_Fir_reg_pager2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pager1_);
  // checkMissing(pager2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_pager2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r68 = dyn is_function(pager2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_pager2_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L120() else D37()
  // L120()
  goto L120_;

L121_:;
  // pager3 = ldf pager
  Rsh_Fir_reg_pager3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L122() else D38()
  // L122()
  goto L122_;

D37_:;
  // deopt 142 [r68]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 144 []
  Rsh_Fir_deopt(144, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args75[4];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args75[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args75[3] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args75);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // files4 = ld files
  Rsh_Fir_reg_files4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L85() else D17()
  // L85()
  goto L85_;

L36_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r75
  return Rsh_Fir_reg_r75_;

L84_:;
  // st `delete.file` = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 37), RHO);
  (void)(Rsh_const(CCP, 37));
  // goto L33()
  // L33()
  goto L33_;

L120_:;
  // goto L34(r68)
  // L34(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L34_;

L122_:;
  // p12 = prom<V +>{
  //   files8 = ld files;
  //   files9 = force? files8;
  //   checkMissing(files9);
  //   return files9;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_3, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   header1 = ld header;
  //   header2 = force? header1;
  //   checkMissing(header2);
  //   return header2;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_4, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   title1 = ld title;
  //   title2 = force? title1;
  //   checkMissing(title2);
  //   return title2;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_5, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   delete_file3 = ld `delete.file`;
  //   delete_file4 = force? delete_file3;
  //   checkMissing(delete_file4);
  //   return delete_file4;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_6, 0, NULL, CCP, RHO);
  // r73 = dyn pager3[, header, title, `delete.file`](p12, p13, p14, p15)
  SEXP Rsh_Fir_array_args80[4];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args80[3] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names22[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pager3_, 4, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L123() else D39()
  // L123()
  goto L123_;

L125_:;
  // files10 = ld files
  Rsh_Fir_reg_files10_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L127() else D40()
  // L127()
  goto L127_;

L126_:;
  // r74 = dyn base9(<lang file.show(files, header, title, delete.file, pager)>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L36(r74)
  // L36(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L36_;

D17_:;
  // deopt 74 [i2, files4]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_files4_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 152 [r73]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 155 [files10]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_files10_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L85_:;
  // files5 = force? files4
  Rsh_Fir_reg_files5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files4_);
  // checkMissing(files5)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_files5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(files5)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_files5_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args83);
  // if c29 then L86() else L87(i2, files5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L86()
    goto L86_;
  } else {
  // L87(i2, files5)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_files7_ = Rsh_Fir_reg_files5_;
    goto L87_;
  }

L123_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r73
  return Rsh_Fir_reg_r73_;

L127_:;
  // files11 = force? files10
  Rsh_Fir_reg_files11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files10_);
  // checkMissing(files11)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_files11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // header3 = ld header
  Rsh_Fir_reg_header3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L128() else D41()
  // L128()
  goto L128_;

D41_:;
  // deopt 157 [header3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_header3_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L25_:;
  // st f = dx5
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L90() else D19()
  // L90()
  goto L90_;

L86_:;
  // dr4 = tryDispatchBuiltin.1("[", files5)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_files5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc2 then L88() else L87(i2, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L88()
    goto L88_;
  } else {
  // L87(i2, dr4)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_files7_ = Rsh_Fir_reg_dr4_;
    goto L87_;
  }

L87_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L89() else D18()
  // L89()
  goto L89_;

L128_:;
  // header4 = force? header3
  Rsh_Fir_reg_header4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_header3_);
  // checkMissing(header4)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_header4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // title3 = ld title
  Rsh_Fir_reg_title3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L129() else D42()
  // L129()
  goto L129_;

D18_:;
  // deopt 76 [i6, files7, i9]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_files7_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(76, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 81 [i8]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 159 [title3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_title3_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L88_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L25(i2, dx4)
  // L25(i2, dx4)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L25_;

L89_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r42 = dyn __2(files7, i10)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_files7_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L25(i6, r42)
  // L25(i6, r42)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r42_;
  goto L25_;

L90_:;
  // r43 = dyn tempfile()
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 0, NULL, NULL, CCP, RHO);
  // check L91() else D20()
  // L91()
  goto L91_;

L129_:;
  // title4 = force? title3
  Rsh_Fir_reg_title4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_title3_);
  // checkMissing(title4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_title4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // delete_file5 = ld `delete.file`
  Rsh_Fir_reg_delete_file5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L130() else D43()
  // L130()
  goto L130_;

D20_:;
  // deopt 82 [i8, r43]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 161 [delete_file5]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_delete_file5_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L91_:;
  // st tf = r43
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L92() else D21()
  // L92()
  goto L92_;

L130_:;
  // delete_file6 = force? delete_file5
  Rsh_Fir_reg_delete_file6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_delete_file5_);
  // checkMissing(delete_file6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_delete_file6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // pager4 = ld pager
  Rsh_Fir_reg_pager4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L131() else D44()
  // L131()
  goto L131_;

D21_:;
  // deopt 85 [i8]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 163 [pager4]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_pager4_;
  Rsh_Fir_deopt(163, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L92_:;
  // p3 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_7, 0, NULL, CCP, RHO);
  // r45 = dyn readLines[, warn](p3, FALSE)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L93() else D22()
  // L93()
  goto L93_;

L131_:;
  // pager5 = force? pager4
  Rsh_Fir_reg_pager5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pager4_);
  // checkMissing(pager5)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_pager5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // file_show = ldf `file.show` in base
  Rsh_Fir_reg_file_show1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r76 = dyn file_show(files11, header4, title4, delete_file6, pager5)
  SEXP Rsh_Fir_array_args95[5];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_files11_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_header4_;
  Rsh_Fir_array_args95[2] = Rsh_Fir_reg_title4_;
  Rsh_Fir_array_args95[3] = Rsh_Fir_reg_delete_file6_;
  Rsh_Fir_array_args95[4] = Rsh_Fir_reg_pager5_;
  SEXP Rsh_Fir_array_arg_names26[5];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_array_arg_names26[4] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_show1, 5, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L132() else D45()
  // L132()
  goto L132_;

D22_:;
  // deopt 89 [i8, r45]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 166 [r76]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L93_:;
  // st tmp = r45
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // try = ldf try
  Rsh_Fir_reg_try = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L94() else D23()
  // L94()
  goto L94_;

L132_:;
  // goto L36(r76)
  // L36(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L36_;

D23_:;
  // deopt 92 [i8]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L94_:;
  // p6 = prom<V +>{
  //   iconv = ldf iconv;
  //   p4 = prom<V +>{
  //     tmp = ld tmp;
  //     tmp1 = force? tmp;
  //     checkMissing(tmp1);
  //     return tmp1;
  //   };
  //   p5 = prom<V +>{
  //     encoding9 = ld encoding;
  //     encoding10 = force? encoding9;
  //     checkMissing(encoding10);
  //     return encoding10;
  //   };
  //   r48 = dyn iconv(p4, p5, "", "byte");
  //   return r48;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_8, 0, NULL, CCP, RHO);
  // r50 = dyn try(p6)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L95() else D24()
  // L95()
  goto L95_;

D24_:;
  // deopt 94 [i8, r50]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L95_:;
  // st tmp2 = r50
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym7 = ldf inherits
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base7 = ldf inherits in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard7 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L26_:;
  // c30 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args101);
  // if c30 then L100() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L100()
    goto L100_;
  } else {
  // L27()
    goto L27_;
  }

L96_:;
  // tmp2 = ld tmp2
  Rsh_Fir_reg_tmp2_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L98() else D25()
  // L98()
  goto L98_;

L97_:;
  // r51 = dyn base7(<sym tmp2>, "try-error")
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L26(i8, r51)
  // L26(i8, r51)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L26_;

D25_:;
  // deopt 98 [i8, tmp2]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_tmp2_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L27_:;
  // writeLines = ldf writeLines
  Rsh_Fir_reg_writeLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L104() else D29()
  // L104()
  goto L104_;

L28_:;
  // tf4 = ld tf
  Rsh_Fir_reg_tf4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L106() else D31()
  // L106()
  goto L106_;

L98_:;
  // tmp3 = force? tmp2
  Rsh_Fir_reg_tmp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp2_);
  // checkMissing(tmp3)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_tmp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r53 = dyn inherits(tmp3, "try-error", FALSE)
  SEXP Rsh_Fir_array_args104[3];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_tmp3_;
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args104[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L99() else D26()
  // L99()
  goto L99_;

L100_:;
  // file_copy = ldf `file.copy`
  Rsh_Fir_reg_file_copy = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L101() else D27()
  // L101()
  goto L101_;

D26_:;
  // deopt 103 [i8, r53]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 105 [i13]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 110 [i13]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 114 [i16, tf4]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_tf4_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L26(i8, r53)
  // L26(i8, r53)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L26_;

L101_:;
  // p7 = prom<V +>{
  //   f2 = ld f;
  //   f3 = force? f2;
  //   checkMissing(f3);
  //   return f3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_11, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   tf = ld tf;
  //   tf1 = force? tf;
  //   checkMissing(tf1);
  //   return tf1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_12, 0, NULL, CCP, RHO);
  // r56 = dyn file_copy(p7, p8)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_copy, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L102() else D28()
  // L102()
  goto L102_;

L104_:;
  // p9 = prom<V +>{
  //   tmp4 = ld tmp2;
  //   tmp5 = force? tmp4;
  //   checkMissing(tmp5);
  //   return tmp5;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_13, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   tf2 = ld tf;
  //   tf3 = force? tf2;
  //   checkMissing(tf3);
  //   return tf3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_14, 0, NULL, CCP, RHO);
  // r60 = dyn writeLines(p9, p10)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L105() else D30()
  // L105()
  goto L105_;

L106_:;
  // tf5 = force? tf4
  Rsh_Fir_reg_tf5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tf4_);
  // checkMissing(tf5)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_tf5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // l1 = ld files
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c31 = `is.object`(l1)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args112);
  // if c31 then L107() else L108(i16, tf5, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L107()
    goto L107_;
  } else {
  // L108(i16, tf5, l1)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_tf7_ = Rsh_Fir_reg_tf5_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L108_;
  }

D28_:;
  // deopt 108 [i13, r56]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 113 [i13, r60]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L29_:;
  // st files = dx7
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // delete_file1 = ld `delete.file`
  Rsh_Fir_reg_delete_file1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L111() else D33()
  // L111()
  goto L111_;

L102_:;
  // goto L28(i13)
  // L28(i13)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i13_;
  goto L28_;

L105_:;
  // goto L28(i13)
  // L28(i13)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i13_;
  goto L28_;

L107_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l1, tf5)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args113[2] = Rsh_Fir_reg_tf5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args113);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc3 then L109() else L108(i16, tf5, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L109()
    goto L109_;
  } else {
  // L108(i16, tf5, dr6)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_tf7_ = Rsh_Fir_reg_tf5_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr6_;
    goto L108_;
  }

L108_:;
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L110() else D32()
  // L110()
  goto L110_;

D32_:;
  // deopt 117 [i18, tf7, l3, tf5, i21]
  SEXP Rsh_Fir_array_deopt_stack39[5];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_tf7_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack39[3] = Rsh_Fir_reg_tf5_;
  Rsh_Fir_array_deopt_stack39[4] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(117, 5, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 121 [i20, delete_file1]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_delete_file1_;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L109_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L29(i16, dx6)
  // L29(i16, dx6)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L29_;

L110_:;
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r61 = dyn ___(l3, tf5, i22)
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_tf5_;
  Rsh_Fir_array_args116[2] = Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L29(i18, r61)
  // L29(i18, r61)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r61_;
  goto L29_;

L111_:;
  // delete_file2 = force? delete_file1
  Rsh_Fir_reg_delete_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_delete_file1_);
  // checkMissing(delete_file2)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_delete_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // c32 = `as.logical`(delete_file2)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_delete_file2_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args118);
  // if c32 then L112() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L112()
    goto L112_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // goto L31(i20)
  // L31(i20)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i20_;
  goto L31_;

L31_:;
  // goto L24(i25)
  // L24(i25)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i25_;
  goto L24_;

L112_:;
  // unlink = ldf unlink
  Rsh_Fir_reg_unlink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L113() else D34()
  // L113()
  goto L113_;

D34_:;
  // deopt 124 [i20]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L113_:;
  // p11 = prom<V +>{
  //   f4 = ld f;
  //   f5 = force? f4;
  //   checkMissing(f5);
  //   return f5;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_15, 0, NULL, CCP, RHO);
  // r63 = dyn unlink(p11)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlink, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L114() else D35()
  // L114()
  goto L114_;

D35_:;
  // deopt 126 [i20, r63]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L114_:;
  // goto L31(i20)
  // L31(i20)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i20_;
  goto L31_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // sym = ldf rep
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf rep in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
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
  return Rsh_Fir_reg_r1_1;

L1_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn rep("", <sym nfiles>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("", <sym nfiles>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // r4 = dyn getOption("pager")
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // c = ldf c
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // r8 = dyn c[`...`](ddd1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1(<sym ...>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_files8_;
  SEXP Rsh_Fir_reg_files9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // files8 = ld files
  Rsh_Fir_reg_files8_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // files9 = force? files8
  Rsh_Fir_reg_files9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files8_);
  // checkMissing(files9)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_files9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return files9
  return Rsh_Fir_reg_files9_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_header1_;
  SEXP Rsh_Fir_reg_header2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // header1 = ld header
  Rsh_Fir_reg_header1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // header2 = force? header1
  Rsh_Fir_reg_header2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_header1_);
  // checkMissing(header2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_header2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return header2
  return Rsh_Fir_reg_header2_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_title1_;
  SEXP Rsh_Fir_reg_title2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // title1 = ld title
  Rsh_Fir_reg_title1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // title2 = force? title1
  Rsh_Fir_reg_title2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_title1_);
  // checkMissing(title2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_title2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return title2
  return Rsh_Fir_reg_title2_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_delete_file3_;
  SEXP Rsh_Fir_reg_delete_file4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // delete_file3 = ld `delete.file`
  Rsh_Fir_reg_delete_file3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // delete_file4 = force? delete_file3
  Rsh_Fir_reg_delete_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_delete_file3_);
  // checkMissing(delete_file4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_delete_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return delete_file4
  return Rsh_Fir_reg_delete_file4_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_f1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_iconv;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // iconv = ldf iconv
  Rsh_Fir_reg_iconv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // p4 = prom<V +>{
  //   tmp = ld tmp;
  //   tmp1 = force? tmp;
  //   checkMissing(tmp1);
  //   return tmp1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_9, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   encoding9 = ld encoding;
  //   encoding10 = force? encoding9;
  //   checkMissing(encoding10);
  //   return encoding10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106164652_10, 0, NULL, CCP, RHO);
  // r48 = dyn iconv(p4, p5, "", "byte")
  SEXP Rsh_Fir_array_args98[4];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args98[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args98[3] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_iconv, 4, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names27, CCP, RHO);
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tmp;
  SEXP Rsh_Fir_reg_tmp1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // tmp = ld tmp
  Rsh_Fir_reg_tmp = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // tmp1 = force? tmp
  Rsh_Fir_reg_tmp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp);
  // checkMissing(tmp1)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_tmp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return tmp1
  return Rsh_Fir_reg_tmp1_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_encoding9_;
  SEXP Rsh_Fir_reg_encoding10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // encoding9 = ld encoding
  Rsh_Fir_reg_encoding9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // encoding10 = force? encoding9
  Rsh_Fir_reg_encoding10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding9_);
  // checkMissing(encoding10)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_encoding10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return encoding10
  return Rsh_Fir_reg_encoding10_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_f3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return f3
  return Rsh_Fir_reg_f3_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tf;
  SEXP Rsh_Fir_reg_tf1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // tf = ld tf
  Rsh_Fir_reg_tf = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // tf1 = force? tf
  Rsh_Fir_reg_tf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tf);
  // checkMissing(tf1)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_tf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // return tf1
  return Rsh_Fir_reg_tf1_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tmp4_;
  SEXP Rsh_Fir_reg_tmp5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // tmp4 = ld tmp2
  Rsh_Fir_reg_tmp4_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // tmp5 = force? tmp4
  Rsh_Fir_reg_tmp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp4_);
  // checkMissing(tmp5)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_tmp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // return tmp5
  return Rsh_Fir_reg_tmp5_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tf2_;
  SEXP Rsh_Fir_reg_tf3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // tf2 = ld tf
  Rsh_Fir_reg_tf2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // tf3 = force? tf2
  Rsh_Fir_reg_tf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tf2_);
  // checkMissing(tf3)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_tf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return tf3
  return Rsh_Fir_reg_tf3_;
}
SEXP Rsh_Fir_user_promise_inner4106164652_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f4_;
  SEXP Rsh_Fir_reg_f5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4106164652/0: expected 0, got %d", NCAPTURES);

  // f4 = ld f
  Rsh_Fir_reg_f4_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // f5 = force? f4
  Rsh_Fir_reg_f5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f4_);
  // checkMissing(f5)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_f5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // return f5
  return Rsh_Fir_reg_f5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
