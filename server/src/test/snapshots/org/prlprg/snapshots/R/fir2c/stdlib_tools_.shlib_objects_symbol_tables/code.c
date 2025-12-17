#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3577417813_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3577417813_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3577417813_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577417813_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577417813_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577417813_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner3577417813
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3577417813_, RHO, CCP);
  // st `.shlib_objects_symbol_tables` = r
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
SEXP Rsh_Fir_user_function_inner3577417813_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3577417813 dynamic dispatch ([file])

  return Rsh_Fir_user_version_inner3577417813_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3577417813_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3577417813 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3577417813/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_file_isMissing;  // file_isMissing
  SEXP Rsh_Fir_reg_file_orDefault;  // file_orDefault
  SEXP Rsh_Fir_reg_commandArgs;  // commandArgs
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_objects;  // objects
  SEXP Rsh_Fir_reg_objects1_;  // objects1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_read_symbols_from_object_file;  // read_symbols_from_object_file
  SEXP Rsh_Fir_reg_read_symbols_from_object_file1_;  // read_symbols_from_object_file1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_objects2_;  // objects2
  SEXP Rsh_Fir_reg_objects3_;  // objects3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_saveRDS;  // saveRDS
  SEXP Rsh_Fir_reg_tables;  // tables
  SEXP Rsh_Fir_reg_tables1_;  // tables1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r7_;  // r7

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // file_isMissing = missing.0(file)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_file;
  Rsh_Fir_reg_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if file_isMissing then L0("symbols.rds") else L0(file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_file_isMissing)) {
  // L0("symbols.rds")
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
  // commandArgs = ldf commandArgs
  Rsh_Fir_reg_commandArgs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // r = dyn commandArgs[trailingOnly](TRUE)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_commandArgs, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 4 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st objects = r
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   objects = ld objects;
  //   objects1 = force? objects;
  //   checkMissing(objects1);
  //   return objects1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577417813_, CCP, RHO);
  // p1 = prom<V +>{
  //   read_symbols_from_object_file = ld read_symbols_from_object_file;
  //   read_symbols_from_object_file1 = force? read_symbols_from_object_file;
  //   checkMissing(read_symbols_from_object_file1);
  //   return read_symbols_from_object_file1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577417813_1, CCP, RHO);
  // r3 = dyn lapply(p, p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 10 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // st tables = r3
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // objects2 = ld objects
  Rsh_Fir_reg_objects2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 12 [objects2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_objects2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // objects3 = force? objects2
  Rsh_Fir_reg_objects3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objects2_);
  // checkMissing(objects3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_objects3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // l = ld tables
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 15 [objects3, l, objects3]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_objects3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_objects3_;
  Rsh_Fir_deopt(15, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // r4 = dyn names__(l, NULL, objects3)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_objects3_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 17 [objects3, r4]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_objects3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7_:;
  // st tables = r4
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // saveRDS = ldf saveRDS
  Rsh_Fir_reg_saveRDS = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L8() else D7()
  // L8()
  goto L8_;

D7_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p2 = prom<V +>{
  //   tables = ld tables;
  //   tables1 = force? tables;
  //   checkMissing(tables1);
  //   return tables1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577417813_2, CCP, RHO);
  // p3 = prom<V +>{
  //   file1 = ld file;
  //   file2 = force? file1;
  //   checkMissing(file2);
  //   return file2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577417813_3, CCP, RHO);
  // r7 = dyn saveRDS[, file, version](p2, p3, 2.0)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_saveRDS, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D8()
  // L9()
  goto L9_;

D8_:;
  // deopt 26 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner3577417813_(SEXP CCP, SEXP RHO) {
  // objects = ld objects
  Rsh_Fir_reg_objects = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // objects1 = force? objects
  Rsh_Fir_reg_objects1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objects);
  // checkMissing(objects1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_objects1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return objects1
  return Rsh_Fir_reg_objects1_;
}
SEXP Rsh_Fir_user_promise_inner3577417813_1(SEXP CCP, SEXP RHO) {
  // read_symbols_from_object_file = ld read_symbols_from_object_file
  Rsh_Fir_reg_read_symbols_from_object_file = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // read_symbols_from_object_file1 = force? read_symbols_from_object_file
  Rsh_Fir_reg_read_symbols_from_object_file1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_read_symbols_from_object_file);
  // checkMissing(read_symbols_from_object_file1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_read_symbols_from_object_file1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return read_symbols_from_object_file1
  return Rsh_Fir_reg_read_symbols_from_object_file1_;
}
SEXP Rsh_Fir_user_promise_inner3577417813_2(SEXP CCP, SEXP RHO) {
  // tables = ld tables
  Rsh_Fir_reg_tables = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // tables1 = force? tables
  Rsh_Fir_reg_tables1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tables);
  // checkMissing(tables1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_tables1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return tables1
  return Rsh_Fir_reg_tables1_;
}
SEXP Rsh_Fir_user_promise_inner3577417813_3(SEXP CCP, SEXP RHO) {
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return file2
  return Rsh_Fir_reg_file2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
