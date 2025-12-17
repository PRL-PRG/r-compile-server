#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO);
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
  // r = clos inner2708337952
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st `.get_standard_DESCRIPTION_fields` = r
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
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg__get_standard_repository_db_fields;  // _get_standard_repository_db_fields
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r11_;  // r11

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L3() else L4();
  // L0(r1):
  //   return r1;
  // L3():
  //   _get_standard_repository_db_fields = ldf `.get_standard_repository_db_fields`;
  //   r2 = dyn _get_standard_repository_db_fields();
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L5() else L6();
  // L4():
  //   r = dyn base(<lang .get_standard_repository_db_fields()>, <lang c("Additional_repositories", "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", "BuildManual", "BuildResaveData", "BuildVignettes", "Built", "ByteCompile", "Classification/ACM", "Classification/ACM-2012", "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", "Collate", "Collate.unix", "Collate.windows", "Contact", "Copyright", "Date", "Depends", "Description", "Encoding", "Enhances", "Imports", "KeepSource", "Language", "LazyData", "LazyDataCompression", "LazyLoad", "License", "LinkingTo", "MailingList", "Maintainer", "Note", "OS_type", "Package", "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", "SysDataCompression", "SystemRequirements", "Title", "Type", "URL", "UseLTO", "Version", "VignetteBuilder", "ZipData")>, <lang c("Repository", "Path", "Date/Publication", "LastChangedDate", "LastChangedRevision", "Revision", "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", "Acknowledgments", "biocViews")>);
  //   goto L0(r);
  // L1(r4):
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L7() else L8();
  // L5():
  //   c = ldf c in base;
  //   r5 = dyn c("Additional_repositories", "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", "BuildManual", "BuildResaveData", "BuildVignettes", "Built", "ByteCompile", "Classification/ACM", "Classification/ACM-2012", "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", "Collate", "Collate.unix", "Collate.windows", "Contact", "Copyright", "Date", "Depends", "Description", "Encoding", "Enhances", "Imports", "KeepSource", "Language", "LazyData", "LazyDataCompression", "LazyLoad", "License", "LinkingTo", "MailingList", "Maintainer", "Note", "OS_type", "Package", "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", "SysDataCompression", "SystemRequirements", "Title", "Type", "URL", "UseLTO", "Version", "VignetteBuilder", "ZipData");
  //   goto L1(r5);
  // L6():
  //   r3 = dyn base1("Additional_repositories", "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", "BuildManual", "BuildResaveData", "BuildVignettes", "Built", "ByteCompile", "Classification/ACM", "Classification/ACM-2012", "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", "Collate", "Collate.unix", "Collate.windows", "Contact", "Copyright", "Date", "Depends", "Description", "Encoding", "Enhances", "Imports", "KeepSource", "Language", "LazyData", "LazyDataCompression", "LazyLoad", "License", "LinkingTo", "MailingList", "Maintainer", "Note", "OS_type", "Package", "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", "SysDataCompression", "SystemRequirements", "Title", "Type", "URL", "UseLTO", "Version", "VignetteBuilder", "ZipData");
  //   goto L1(r3);
  // L2(r7):
  //   c2 = ldf c in base;
  //   r9 = dyn c2(r2, r4, r7);
  //   goto L0(r9);
  // L7():
  //   c1 = ldf c in base;
  //   r8 = dyn c1("Repository", "Path", "Date/Publication", "LastChangedDate", "LastChangedRevision", "Revision", "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", "Acknowledgments", "biocViews");
  //   goto L2(r8);
  // L8():
  //   r6 = dyn base2("Repository", "Path", "Date/Publication", "LastChangedDate", "LastChangedRevision", "Revision", "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", "Acknowledgments", "biocViews");
  //   goto L2(r6);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // r11 = dyn unique(p)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r11]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L2_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r9 = dyn c2(r2, r4, r7)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args2[2] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r9_;
  goto L0_;

L3_:;
  // _get_standard_repository_db_fields = ldf `.get_standard_repository_db_fields`
  Rsh_Fir_reg__get_standard_repository_db_fields = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r2 = dyn _get_standard_repository_db_fields()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__get_standard_repository_db_fields, 0, NULL, NULL, CCP, RHO);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r = dyn base(<lang .get_standard_repository_db_fields()>, <lang c("Additional_repositories", "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", "BuildManual", "BuildResaveData", "BuildVignettes", "Built", "ByteCompile", "Classification/ACM", "Classification/ACM-2012", "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", "Collate", "Collate.unix", "Collate.windows", "Contact", "Copyright", "Date", "Depends", "Description", "Encoding", "Enhances", "Imports", "KeepSource", "Language", "LazyData", "LazyDataCompression", "LazyLoad", "License", "LinkingTo", "MailingList", "Maintainer", "Note", "OS_type", "Package", "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", "SysDataCompression", "SystemRequirements", "Title", "Type", "URL", "UseLTO", "Version", "VignetteBuilder", "ZipData")>, <lang c("Repository", "Path", "Date/Publication", "LastChangedDate", "LastChangedRevision", "Revision", "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", "Acknowledgments", "biocViews")>)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L5_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r5 = dyn c("Additional_repositories", "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", "BuildManual", "BuildResaveData", "BuildVignettes", "Built", "ByteCompile", "Classification/ACM", "Classification/ACM-2012", "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", "Collate", "Collate.unix", "Collate.windows", "Contact", "Copyright", "Date", "Depends", "Description", "Encoding", "Enhances", "Imports", "KeepSource", "Language", "LazyData", "LazyDataCompression", "LazyLoad", "License", "LinkingTo", "MailingList", "Maintainer", "Note", "OS_type", "Package", "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", "SysDataCompression", "SystemRequirements", "Title", "Type", "URL", "UseLTO", "Version", "VignetteBuilder", "ZipData")
  SEXP Rsh_Fir_array_args5[53];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args5[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args5[6] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args5[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args5[8] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args5[9] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args5[10] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args5[11] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args5[12] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args5[13] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args5[14] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args5[15] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args5[16] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args5[17] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args5[18] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args5[19] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args5[20] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args5[21] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args5[22] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args5[23] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args5[24] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args5[25] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args5[26] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args5[27] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args5[28] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args5[29] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args5[30] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args5[31] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args5[32] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args5[33] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args5[34] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args5[35] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args5[36] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args5[37] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args5[38] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args5[39] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args5[40] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args5[41] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args5[42] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args5[43] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args5[44] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args5[45] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args5[46] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args5[47] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args5[48] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args5[49] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args5[50] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args5[51] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args5[52] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names2[53];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_array_arg_names2[8] = R_MissingArg;
  Rsh_Fir_array_arg_names2[9] = R_MissingArg;
  Rsh_Fir_array_arg_names2[10] = R_MissingArg;
  Rsh_Fir_array_arg_names2[11] = R_MissingArg;
  Rsh_Fir_array_arg_names2[12] = R_MissingArg;
  Rsh_Fir_array_arg_names2[13] = R_MissingArg;
  Rsh_Fir_array_arg_names2[14] = R_MissingArg;
  Rsh_Fir_array_arg_names2[15] = R_MissingArg;
  Rsh_Fir_array_arg_names2[16] = R_MissingArg;
  Rsh_Fir_array_arg_names2[17] = R_MissingArg;
  Rsh_Fir_array_arg_names2[18] = R_MissingArg;
  Rsh_Fir_array_arg_names2[19] = R_MissingArg;
  Rsh_Fir_array_arg_names2[20] = R_MissingArg;
  Rsh_Fir_array_arg_names2[21] = R_MissingArg;
  Rsh_Fir_array_arg_names2[22] = R_MissingArg;
  Rsh_Fir_array_arg_names2[23] = R_MissingArg;
  Rsh_Fir_array_arg_names2[24] = R_MissingArg;
  Rsh_Fir_array_arg_names2[25] = R_MissingArg;
  Rsh_Fir_array_arg_names2[26] = R_MissingArg;
  Rsh_Fir_array_arg_names2[27] = R_MissingArg;
  Rsh_Fir_array_arg_names2[28] = R_MissingArg;
  Rsh_Fir_array_arg_names2[29] = R_MissingArg;
  Rsh_Fir_array_arg_names2[30] = R_MissingArg;
  Rsh_Fir_array_arg_names2[31] = R_MissingArg;
  Rsh_Fir_array_arg_names2[32] = R_MissingArg;
  Rsh_Fir_array_arg_names2[33] = R_MissingArg;
  Rsh_Fir_array_arg_names2[34] = R_MissingArg;
  Rsh_Fir_array_arg_names2[35] = R_MissingArg;
  Rsh_Fir_array_arg_names2[36] = R_MissingArg;
  Rsh_Fir_array_arg_names2[37] = R_MissingArg;
  Rsh_Fir_array_arg_names2[38] = R_MissingArg;
  Rsh_Fir_array_arg_names2[39] = R_MissingArg;
  Rsh_Fir_array_arg_names2[40] = R_MissingArg;
  Rsh_Fir_array_arg_names2[41] = R_MissingArg;
  Rsh_Fir_array_arg_names2[42] = R_MissingArg;
  Rsh_Fir_array_arg_names2[43] = R_MissingArg;
  Rsh_Fir_array_arg_names2[44] = R_MissingArg;
  Rsh_Fir_array_arg_names2[45] = R_MissingArg;
  Rsh_Fir_array_arg_names2[46] = R_MissingArg;
  Rsh_Fir_array_arg_names2[47] = R_MissingArg;
  Rsh_Fir_array_arg_names2[48] = R_MissingArg;
  Rsh_Fir_array_arg_names2[49] = R_MissingArg;
  Rsh_Fir_array_arg_names2[50] = R_MissingArg;
  Rsh_Fir_array_arg_names2[51] = R_MissingArg;
  Rsh_Fir_array_arg_names2[52] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 53, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L6_:;
  // r3 = dyn base1("Additional_repositories", "Author", "Authors@R", "Biarch", "BugReports", "BuildKeepEmpty", "BuildManual", "BuildResaveData", "BuildVignettes", "Built", "ByteCompile", "Classification/ACM", "Classification/ACM-2012", "Classification/JEL", "Classification/MSC", "Classification/MSC-2010", "Collate", "Collate.unix", "Collate.windows", "Contact", "Copyright", "Date", "Depends", "Description", "Encoding", "Enhances", "Imports", "KeepSource", "Language", "LazyData", "LazyDataCompression", "LazyLoad", "License", "LinkingTo", "MailingList", "Maintainer", "Note", "OS_type", "Package", "Packaged", "Priority", "RdMacros", "Suggests", "StagedInstall", "SysDataCompression", "SystemRequirements", "Title", "Type", "URL", "UseLTO", "Version", "VignetteBuilder", "ZipData")
  SEXP Rsh_Fir_array_args6[53];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args6[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args6[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args6[6] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args6[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args6[8] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args6[9] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args6[10] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args6[11] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args6[12] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args6[13] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args6[14] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args6[15] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args6[16] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args6[17] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args6[18] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args6[19] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args6[20] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args6[21] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args6[22] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args6[23] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args6[24] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args6[25] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args6[26] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args6[27] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args6[28] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args6[29] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args6[30] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args6[31] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args6[32] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args6[33] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args6[34] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args6[35] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args6[36] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args6[37] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args6[38] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args6[39] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args6[40] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args6[41] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args6[42] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args6[43] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args6[44] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args6[45] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args6[46] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args6[47] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args6[48] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args6[49] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args6[50] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args6[51] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args6[52] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names3[53];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_array_arg_names3[7] = R_MissingArg;
  Rsh_Fir_array_arg_names3[8] = R_MissingArg;
  Rsh_Fir_array_arg_names3[9] = R_MissingArg;
  Rsh_Fir_array_arg_names3[10] = R_MissingArg;
  Rsh_Fir_array_arg_names3[11] = R_MissingArg;
  Rsh_Fir_array_arg_names3[12] = R_MissingArg;
  Rsh_Fir_array_arg_names3[13] = R_MissingArg;
  Rsh_Fir_array_arg_names3[14] = R_MissingArg;
  Rsh_Fir_array_arg_names3[15] = R_MissingArg;
  Rsh_Fir_array_arg_names3[16] = R_MissingArg;
  Rsh_Fir_array_arg_names3[17] = R_MissingArg;
  Rsh_Fir_array_arg_names3[18] = R_MissingArg;
  Rsh_Fir_array_arg_names3[19] = R_MissingArg;
  Rsh_Fir_array_arg_names3[20] = R_MissingArg;
  Rsh_Fir_array_arg_names3[21] = R_MissingArg;
  Rsh_Fir_array_arg_names3[22] = R_MissingArg;
  Rsh_Fir_array_arg_names3[23] = R_MissingArg;
  Rsh_Fir_array_arg_names3[24] = R_MissingArg;
  Rsh_Fir_array_arg_names3[25] = R_MissingArg;
  Rsh_Fir_array_arg_names3[26] = R_MissingArg;
  Rsh_Fir_array_arg_names3[27] = R_MissingArg;
  Rsh_Fir_array_arg_names3[28] = R_MissingArg;
  Rsh_Fir_array_arg_names3[29] = R_MissingArg;
  Rsh_Fir_array_arg_names3[30] = R_MissingArg;
  Rsh_Fir_array_arg_names3[31] = R_MissingArg;
  Rsh_Fir_array_arg_names3[32] = R_MissingArg;
  Rsh_Fir_array_arg_names3[33] = R_MissingArg;
  Rsh_Fir_array_arg_names3[34] = R_MissingArg;
  Rsh_Fir_array_arg_names3[35] = R_MissingArg;
  Rsh_Fir_array_arg_names3[36] = R_MissingArg;
  Rsh_Fir_array_arg_names3[37] = R_MissingArg;
  Rsh_Fir_array_arg_names3[38] = R_MissingArg;
  Rsh_Fir_array_arg_names3[39] = R_MissingArg;
  Rsh_Fir_array_arg_names3[40] = R_MissingArg;
  Rsh_Fir_array_arg_names3[41] = R_MissingArg;
  Rsh_Fir_array_arg_names3[42] = R_MissingArg;
  Rsh_Fir_array_arg_names3[43] = R_MissingArg;
  Rsh_Fir_array_arg_names3[44] = R_MissingArg;
  Rsh_Fir_array_arg_names3[45] = R_MissingArg;
  Rsh_Fir_array_arg_names3[46] = R_MissingArg;
  Rsh_Fir_array_arg_names3[47] = R_MissingArg;
  Rsh_Fir_array_arg_names3[48] = R_MissingArg;
  Rsh_Fir_array_arg_names3[49] = R_MissingArg;
  Rsh_Fir_array_arg_names3[50] = R_MissingArg;
  Rsh_Fir_array_arg_names3[51] = R_MissingArg;
  Rsh_Fir_array_arg_names3[52] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 53, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

L7_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r8 = dyn c1("Repository", "Path", "Date/Publication", "LastChangedDate", "LastChangedRevision", "Revision", "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", "Acknowledgments", "biocViews")
  SEXP Rsh_Fir_array_args7[12];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args7[4] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args7[5] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args7[6] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args7[7] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args7[8] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args7[9] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args7[10] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args7[11] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names4[12];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_array_arg_names4[6] = R_MissingArg;
  Rsh_Fir_array_arg_names4[7] = R_MissingArg;
  Rsh_Fir_array_arg_names4[8] = R_MissingArg;
  Rsh_Fir_array_arg_names4[9] = R_MissingArg;
  Rsh_Fir_array_arg_names4[10] = R_MissingArg;
  Rsh_Fir_array_arg_names4[11] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 12, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

L8_:;
  // r6 = dyn base2("Repository", "Path", "Date/Publication", "LastChangedDate", "LastChangedRevision", "Revision", "RcmdrModels", "RcppModules", "Roxygen", "Acknowledgements", "Acknowledgments", "biocViews")
  SEXP Rsh_Fir_array_args8[12];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args8[7] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args8[8] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args8[9] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args8[10] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args8[11] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names5[12];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_array_arg_names5[9] = R_MissingArg;
  Rsh_Fir_array_arg_names5[10] = R_MissingArg;
  Rsh_Fir_array_arg_names5[11] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 12, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
