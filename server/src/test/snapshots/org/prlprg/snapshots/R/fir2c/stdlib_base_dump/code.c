#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2689276391_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2689276391_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2689276391_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2689276391_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2689276391_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2689276391_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2689276391_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2689276391_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2689276391_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_tempfile;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_dump;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_unlink;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r9_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2689276391
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2689276391_, RHO, CCP);
  // st dump = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st x = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // st y = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 3), RHO);
  (void)(Rsh_const(CCP, 3));
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn tempfile[fileext](".Rdmped")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 13 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st fil = r1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // dump = ldf dump
  Rsh_Fir_reg_dump = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   ls = ldf ls;
  //   r2 = dyn ls[pattern]("^[xyz]");
  //   return r2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   fil = ld fil;
  //   fil1 = force? fil;
  //   checkMissing(fil1);
  //   return fil1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn dump(p, p1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dump, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 19 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   _Last_value = ld `.Last.value`;
  //   _Last_value1 = force? _Last_value;
  //   checkMissing(_Last_value1);
  //   return _Last_value1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r7 = dyn print(p2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 23 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // unlink = ldf unlink
  Rsh_Fir_reg_unlink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p3 = prom<V +>{
  //   fil2 = ld fil;
  //   fil3 = force? fil2;
  //   checkMissing(fil3);
  //   return fil3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r9 = dyn unlink(p3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlink, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 27 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ls;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ls = ldf ls
  Rsh_Fir_reg_ls = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r2 = dyn ls[pattern]("^[xyz]")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil;
  SEXP Rsh_Fir_reg_fil1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil = ld fil
  Rsh_Fir_reg_fil = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // fil1 = force? fil
  Rsh_Fir_reg_fil1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil);
  // checkMissing(fil1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_fil1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return fil1
  return Rsh_Fir_reg_fil1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__Last_value;
  SEXP Rsh_Fir_reg__Last_value1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _Last_value = ld `.Last.value`
  Rsh_Fir_reg__Last_value = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // _Last_value1 = force? _Last_value
  Rsh_Fir_reg__Last_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Last_value);
  // checkMissing(_Last_value1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg__Last_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return _Last_value1
  return Rsh_Fir_reg__Last_value1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil2_;
  SEXP Rsh_Fir_reg_fil3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil2 = ld fil
  Rsh_Fir_reg_fil2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // fil3 = force? fil2
  Rsh_Fir_reg_fil3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil2_);
  // checkMissing(fil3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_fil3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return fil3
  return Rsh_Fir_reg_fil3_;
}
SEXP Rsh_Fir_user_function_inner2689276391_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2689276391 dynamic dispatch ([list, file, append, control, envir, evaluate])

  return Rsh_Fir_user_version_inner2689276391_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2689276391_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2689276391 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2689276391/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_file;
  SEXP Rsh_Fir_reg_append;
  SEXP Rsh_Fir_reg_control;
  SEXP Rsh_Fir_reg_envir;
  SEXP Rsh_Fir_reg_evaluate;
  SEXP Rsh_Fir_reg_file_isMissing;
  SEXP Rsh_Fir_reg_file_orDefault;
  SEXP Rsh_Fir_reg_append_isMissing;
  SEXP Rsh_Fir_reg_append_orDefault;
  SEXP Rsh_Fir_reg_control_isMissing;
  SEXP Rsh_Fir_reg_control_orDefault;
  SEXP Rsh_Fir_reg_envir_isMissing;
  SEXP Rsh_Fir_reg_envir_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_evaluate_isMissing;
  SEXP Rsh_Fir_reg_evaluate_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_file1_;
  SEXP Rsh_Fir_reg_file2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sapply;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_ex;
  SEXP Rsh_Fir_reg_ex1_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_file3_;
  SEXP Rsh_Fir_reg_file4_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_file5_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_on_exit;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_stdout;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg__deparseOpts;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_list3_;
  SEXP Rsh_Fir_reg_list4_;
  SEXP Rsh_Fir_reg_file8_;
  SEXP Rsh_Fir_reg_file9_;
  SEXP Rsh_Fir_reg_envir3_;
  SEXP Rsh_Fir_reg_envir4_;
  SEXP Rsh_Fir_reg_opts;
  SEXP Rsh_Fir_reg_opts1_;
  SEXP Rsh_Fir_reg_evaluate1_;
  SEXP Rsh_Fir_reg_evaluate2_;
  SEXP Rsh_Fir_reg_dump1;
  SEXP Rsh_Fir_reg_r34_;

  // Bind parameters
  Rsh_Fir_reg_list = PARAMS[0];
  Rsh_Fir_reg_file = PARAMS[1];
  Rsh_Fir_reg_append = PARAMS[2];
  Rsh_Fir_reg_control = PARAMS[3];
  Rsh_Fir_reg_envir = PARAMS[4];
  Rsh_Fir_reg_evaluate = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st list = list
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_list, RHO);
  (void)(Rsh_Fir_reg_list);
  // file_isMissing = missing.0(file)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_file;
  Rsh_Fir_reg_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if file_isMissing then L0("dumpdata.R") else L0(file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_file_isMissing)) {
  // L0("dumpdata.R")
    Rsh_Fir_reg_file_orDefault = Rsh_const(CCP, 16);
    goto L0_;
  } else {
  // L0(file)
    Rsh_Fir_reg_file_orDefault = Rsh_Fir_reg_file;
    goto L0_;
  }

L0_:;
  // st file = file_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_file_orDefault, RHO);
  (void)(Rsh_Fir_reg_file_orDefault);
  // append_isMissing = missing.0(append)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_append;
  Rsh_Fir_reg_append_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if append_isMissing then L1(FALSE) else L1(append)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_append_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_append_orDefault = Rsh_const(CCP, 18);
    goto L1_;
  } else {
  // L1(append)
    Rsh_Fir_reg_append_orDefault = Rsh_Fir_reg_append;
    goto L1_;
  }

L1_:;
  // st append = append_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_append_orDefault, RHO);
  (void)(Rsh_Fir_reg_append_orDefault);
  // control_isMissing = missing.0(control)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_control;
  Rsh_Fir_reg_control_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if control_isMissing then L2("all") else L2(control)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_control_isMissing)) {
  // L2("all")
    Rsh_Fir_reg_control_orDefault = Rsh_const(CCP, 20);
    goto L2_;
  } else {
  // L2(control)
    Rsh_Fir_reg_control_orDefault = Rsh_Fir_reg_control;
    goto L2_;
  }

L2_:;
  // st control = control_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_control_orDefault, RHO);
  (void)(Rsh_Fir_reg_control_orDefault);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if envir_isMissing then L3() else L4(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L4_;
  }

L3_:;
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2689276391_, 0, NULL, CCP, RHO);
  // goto L4(p)
  // L4(p)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p1;
  goto L4_;

L4_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // evaluate_isMissing = missing.0(evaluate)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_evaluate;
  Rsh_Fir_reg_evaluate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if evaluate_isMissing then L5(TRUE) else L5(evaluate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_evaluate_isMissing)) {
  // L5(TRUE)
    Rsh_Fir_reg_evaluate_orDefault = Rsh_const(CCP, 24);
    goto L5_;
  } else {
  // L5(evaluate)
    Rsh_Fir_reg_evaluate_orDefault = Rsh_Fir_reg_evaluate;
    goto L5_;
  }

L5_:;
  // st evaluate = evaluate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_evaluate_orDefault, RHO);
  (void)(Rsh_Fir_reg_evaluate_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L6_:;
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args14);
  // if c1 then L21() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L7()
    goto L7_;
  }

L18_:;
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r2 = dyn base(<sym file>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r2)
  // L6(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_1;
  goto L6_;

D0_:;
  // deopt 1 [file1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_file1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // _deparseOpts = ldf `.deparseOpts`
  Rsh_Fir_reg__deparseOpts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

L20_:;
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c = `is.character`(file2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_file2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args17);
  // goto L6(c)
  // L6(c)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c;
  goto L6_;

L21_:;
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p1 = prom<V +>{
  //   list1 = ld list;
  //   list2 = force? list1;
  //   checkMissing(list2);
  //   return list2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2689276391_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   exists = ld exists;
  //   exists1 = force? exists;
  //   checkMissing(exists1);
  //   return exists1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2689276391_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   envir1 = ld envir;
  //   envir2 = force? envir1;
  //   checkMissing(envir2);
  //   return envir2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2689276391_3, 0, NULL, CCP, RHO);
  // r7 = dyn sapply[, , envir](p1, p2, p3)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

L49_:;
  // p6 = prom<V +>{
  //   control1 = ld control;
  //   control2 = force? control1;
  //   checkMissing(control2);
  //   return control2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2689276391_4, 0, NULL, CCP, RHO);
  // r31 = dyn _deparseOpts(p6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__deparseOpts, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

D2_:;
  // deopt 10 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 53 [r31]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // st ex = r7
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L50_:;
  // st opts = r31
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym5 = ldf `.Internal`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base5 = ldf `.Internal` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard5 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L8_:;
  // r11 = `!`(r9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args26);
  // c2 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c2 then L28() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L28()
    goto L28_;
  } else {
  // L9()
    goto L9_;
  }

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r33
  return Rsh_Fir_reg_r33_;

L24_:;
  // ex = ld ex
  Rsh_Fir_reg_ex = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

L25_:;
  // r8 = dyn base1(<sym ex>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L8(r8)
  // L8(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L8_;

L51_:;
  // list3 = ld list
  Rsh_Fir_reg_list3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L53() else D16()
  // L53()
  goto L53_;

L52_:;
  // r32 = dyn base5(<lang dump(list, file, envir, opts, evaluate)>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L17(r32)
  // L17(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L17_;

D3_:;
  // deopt 14 [ex]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_ex;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 57 [list3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_list3_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L9_:;
  // sym3 = ldf nzchar
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base3 = ldf nzchar in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L26_:;
  // ex1 = force? ex
  Rsh_Fir_reg_ex1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ex);
  // checkMissing(ex1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_ex1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r10 = dyn any(ex1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_ex1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

L28_:;
  // sym2 = ldf invisible
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base2 = ldf invisible in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L53_:;
  // list4 = force? list3
  Rsh_Fir_reg_list4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list3_);
  // checkMissing(list4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_list4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // file8 = ld file
  Rsh_Fir_reg_file8_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L54() else D17()
  // L54()
  goto L54_;

D4_:;
  // deopt 17 [r10]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 59 [file8]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_file8_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;

L12_:;
  // c3 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c3 then L40() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L40()
    goto L40_;
  } else {
  // L13()
    goto L13_;
  }

L27_:;
  // goto L8(r10)
  // L8(r10)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_;
  goto L8_;

L29_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

L30_:;
  // r12 = dyn base2(<lang character()>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(r12)
  // L10(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L10_;

L36_:;
  // file3 = ld file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

L37_:;
  // r18 = dyn base3(<sym file>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r18)
  // L12(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L12_;

L54_:;
  // file9 = force? file8
  Rsh_Fir_reg_file9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file8_);
  // checkMissing(file9)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_file9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // envir3 = ld envir
  Rsh_Fir_reg_envir3_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L55() else D18()
  // L55()
  goto L55_;

D5_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 31 [file3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_file3_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 61 [envir3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_envir3_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L13_:;
  // stdout = ldf stdout
  Rsh_Fir_reg_stdout = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L31_:;
  // r14 = dyn character()
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L38_:;
  // file4 = force? file3
  Rsh_Fir_reg_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file3_);
  // checkMissing(file4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r20 = dyn nzchar(file4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_file4_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

L40_:;
  // file5 = ldf file
  Rsh_Fir_reg_file5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

L55_:;
  // envir4 = force? envir3
  Rsh_Fir_reg_envir4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir3_);
  // checkMissing(envir4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_envir4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // opts = ld opts
  Rsh_Fir_reg_opts = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L56() else D19()
  // L56()
  goto L56_;

D6_:;
  // deopt 23 [r14]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 34 [r20]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 63 [opts]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_opts;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L32_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r15 = dyn invisible(r14)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L39_:;
  // goto L12(r20)
  // L12(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L12_;

L41_:;
  // p4 = prom<V +>{
  //   file6 = ld file;
  //   file7 = force? file6;
  //   checkMissing(file7);
  //   return file7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2689276391_5, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   append1 = ld append;
  //   append2 = force? append1;
  //   checkMissing(append2);
  //   c4 = `as.logical`(append2);
  //   if c4 then L1() else L0();
  // L0():
  //   return "w";
  // L1():
  //   return "a";
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2689276391_6, 0, NULL, CCP, RHO);
  // r23 = dyn file5(p4, p5)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file5_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

L46_:;
  // r28 = dyn stdout()
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stdout, 0, NULL, NULL, CCP, RHO);
  // check L47() else D13()
  // L47()
  goto L47_;

L56_:;
  // opts1 = force? opts
  Rsh_Fir_reg_opts1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts);
  // checkMissing(opts1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_opts1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // evaluate1 = ld evaluate
  Rsh_Fir_reg_evaluate1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L57() else D20()
  // L57()
  goto L57_;

D7_:;
  // deopt 25 [r15]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 39 [r23]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 46 [r28]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 65 [evaluate1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_evaluate1_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L10(r15)
  // L10(r15)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L10_;

L42_:;
  // st file = r23
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sym4 = ldf `on.exit`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base4 = ldf `on.exit` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard4 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L47_:;
  // st file = r28
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // goto L15(r28)
  // L15(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L15_;

L57_:;
  // evaluate2 = force? evaluate1
  Rsh_Fir_reg_evaluate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_evaluate1_);
  // checkMissing(evaluate2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_evaluate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // dump = ldf dump in base
  Rsh_Fir_reg_dump1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r34 = dyn dump(list4, file9, envir4, opts1, evaluate2)
  SEXP Rsh_Fir_array_args50[5];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_list4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_file9_;
  Rsh_Fir_array_args50[2] = Rsh_Fir_reg_envir4_;
  Rsh_Fir_array_args50[3] = Rsh_Fir_reg_opts1_;
  Rsh_Fir_array_args50[4] = Rsh_Fir_reg_evaluate2_;
  SEXP Rsh_Fir_array_arg_names16[5];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dump1, 5, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L58() else D21()
  // L58()
  goto L58_;

D21_:;
  // deopt 68 [r34]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L15(r25)
  // L15(r25)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r25_;
  goto L15_;

L43_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r26 = dyn on_exit(<lang close(file)>, TRUE)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r26)
  // L14(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L14_;

L44_:;
  // r24 = dyn base4[, add](<lang close(file)>, TRUE)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L14(r24)
  // L14(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L14_;

L58_:;
  // goto L17(r34)
  // L17(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L17_;
}
SEXP Rsh_Fir_user_promise_inner2689276391_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2689276391/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2689276391_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_list2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2689276391/0: expected 0, got %d", NCAPTURES);

  // list1 = ld list
  Rsh_Fir_reg_list1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // list2 = force? list1
  Rsh_Fir_reg_list2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list1_);
  // checkMissing(list2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_list2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return list2
  return Rsh_Fir_reg_list2_;
}
SEXP Rsh_Fir_user_promise_inner2689276391_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_exists;
  SEXP Rsh_Fir_reg_exists1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2689276391/0: expected 0, got %d", NCAPTURES);

  // exists = ld exists
  Rsh_Fir_reg_exists = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // exists1 = force? exists
  Rsh_Fir_reg_exists1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exists);
  // checkMissing(exists1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_exists1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return exists1
  return Rsh_Fir_reg_exists1_;
}
SEXP Rsh_Fir_user_promise_inner2689276391_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_envir1_;
  SEXP Rsh_Fir_reg_envir2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2689276391/0: expected 0, got %d", NCAPTURES);

  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return envir2
  return Rsh_Fir_reg_envir2_;
}
SEXP Rsh_Fir_user_promise_inner2689276391_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_control1_;
  SEXP Rsh_Fir_reg_control2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2689276391/0: expected 0, got %d", NCAPTURES);

  // control1 = ld control
  Rsh_Fir_reg_control1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // control2 = force? control1
  Rsh_Fir_reg_control2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control1_);
  // checkMissing(control2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_control2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return control2
  return Rsh_Fir_reg_control2_;
}
SEXP Rsh_Fir_user_promise_inner2689276391_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file6_;
  SEXP Rsh_Fir_reg_file7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2689276391/0: expected 0, got %d", NCAPTURES);

  // file6 = ld file
  Rsh_Fir_reg_file6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // file7 = force? file6
  Rsh_Fir_reg_file7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file6_);
  // checkMissing(file7)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_file7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return file7
  return Rsh_Fir_reg_file7_;
}
SEXP Rsh_Fir_user_promise_inner2689276391_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_append1_;
  SEXP Rsh_Fir_reg_append2_;
  SEXP Rsh_Fir_reg_c4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2689276391/0: expected 0, got %d", NCAPTURES);

  // append1 = ld append
  Rsh_Fir_reg_append1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // append2 = force? append1
  Rsh_Fir_reg_append2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_append1_);
  // checkMissing(append2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_append2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(append2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_append2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c4 then L1() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L1()
    goto L1_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // return "w"
  return Rsh_const(CCP, 40);

L1_:;
  // return "a"
  return Rsh_const(CCP, 41);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
