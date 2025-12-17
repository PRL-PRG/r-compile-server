#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3326159363_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3326159363_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3326159363_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3326159363_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3326159363_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_showConnections;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_isatty;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_isatty1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_isatty2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r13_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3326159363
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3326159363_, RHO, CCP);
  // st showConnections = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // showConnections = ldf showConnections
  Rsh_Fir_reg_showConnections = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // r1 = dyn showConnections[all](TRUE)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_showConnections, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;

L3_:;
  // isatty = ldf isatty
  Rsh_Fir_reg_isatty = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L4_:;
  // r2 = dyn base(<lang isatty(stdin())>, <lang isatty(stdout())>, <lang isatty(stderr())>)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p = prom<V +>{
  //   stdin = ldf stdin;
  //   r4 = dyn stdin();
  //   return r4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r6 = dyn isatty(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isatty, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // isatty1 = ldf isatty
  Rsh_Fir_reg_isatty1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p1 = prom<V +>{
  //   stdout = ldf stdout;
  //   r7 = dyn stdout();
  //   return r7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn isatty1(p1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isatty1_, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 17 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // isatty2 = ldf isatty
  Rsh_Fir_reg_isatty2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p2 = prom<V +>{
  //   stderr = ldf stderr;
  //   r10 = dyn stderr();
  //   return r10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r12 = dyn isatty2(p2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isatty2_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 21 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r13 = dyn c(r6, r9, r12)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 23 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stdin;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stdin = ldf stdin
  Rsh_Fir_reg_stdin = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // r4 = dyn stdin()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stdin, 0, NULL, NULL, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stdout;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stdout = ldf stdout
  Rsh_Fir_reg_stdout = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r7 = dyn stdout()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stdout, 0, NULL, NULL, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stderr;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stderr = ldf stderr
  Rsh_Fir_reg_stderr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // r10 = dyn stderr()
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stderr, 0, NULL, NULL, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_function_inner3326159363_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3326159363 dynamic dispatch ([all])

  return Rsh_Fir_user_version_inner3326159363_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3326159363_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3326159363 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3326159363/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_all_isMissing;
  SEXP Rsh_Fir_reg_all_orDefault;
  SEXP Rsh_Fir_reg_gc;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_getAllConnections;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_all1_;
  SEXP Rsh_Fir_reg_all2_;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_set;
  SEXP Rsh_Fir_reg_set1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_set3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_set4_;
  SEXP Rsh_Fir_reg_set5_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_set8_;
  SEXP Rsh_Fir_reg_set9_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_unlist;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_set14_;
  SEXP Rsh_Fir_reg_set15_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_rownames__;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_colnames__;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_all3_;
  SEXP Rsh_Fir_reg_all4_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_ans;
  SEXP Rsh_Fir_reg_ans1_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_ans3_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_ans4_;
  SEXP Rsh_Fir_reg_ans5_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_ans8_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_ans12_;
  SEXP Rsh_Fir_reg_ans13_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r32_;

  // Bind parameters
  Rsh_Fir_reg_all = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // all_isMissing = missing.0(all)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_all;
  Rsh_Fir_reg_all_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if all_isMissing then L0(FALSE) else L0(all)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_all_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_all_orDefault = Rsh_const(CCP, 11);
    goto L0_;
  } else {
  // L0(all)
    Rsh_Fir_reg_all_orDefault = Rsh_Fir_reg_all;
    goto L0_;
  }

L0_:;
  // st all = all_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_all_orDefault, RHO);
  (void)(Rsh_Fir_reg_all_orDefault);
  // gc = ldf gc
  Rsh_Fir_reg_gc = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // r = dyn gc()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gc, 0, NULL, NULL, CCP, RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // getAllConnections = ldf getAllConnections
  Rsh_Fir_reg_getAllConnections = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

D2_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r1 = dyn getAllConnections()
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getAllConnections, 0, NULL, NULL, CCP, RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

D3_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // st set = r1
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // all1 = ld all
  Rsh_Fir_reg_all1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

D4_:;
  // deopt 7 [all1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_all1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // all2 = force? all1
  Rsh_Fir_reg_all2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all1_);
  // checkMissing(all2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_all2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r2 = `!`(all2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_all2_;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args9);
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c then L18() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L18()
    goto L18_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

L18_:;
  // set = ld set
  Rsh_Fir_reg_set = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

D5_:;
  // deopt 10 [set]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_set;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // set1 = force? set
  Rsh_Fir_reg_set1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_set);
  // checkMissing(set1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_set1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(set1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_set1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args12);
  // if c1 then L20() else L21(set1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L21(set1)
    Rsh_Fir_reg_set3_ = Rsh_Fir_reg_set1_;
    goto L21_;
  }

L25_:;
  // p = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   set6 = ld set;
  //   set7 = force? set6;
  //   checkMissing(set7);
  //   length = ldf length in base;
  //   r7 = dyn length(set7);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base(<sym set>);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3326159363_, 0, NULL, CCP, RHO);
  // r9 = dyn matrix("", p, 7)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

D8_:;
  // deopt 25 [r9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L2_:;
  // st set = dx1
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L3()
  // L3()
  goto L3_;

L20_:;
  // dr = tryDispatchBuiltin.1("[", set1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_set1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L22() else L21(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L22()
    goto L22_;
  } else {
  // L21(dr)
    Rsh_Fir_reg_set3_ = Rsh_Fir_reg_dr;
    goto L21_;
  }

L21_:;
  // set4 = ld set
  Rsh_Fir_reg_set4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L26_:;
  // st ans = r9
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r9_1, RHO);
  (void)(Rsh_Fir_reg_r9_1);
  // sym1 = ldf seq_along
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf seq_along in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

D6_:;
  // deopt 12 [set3, set4]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_set3_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_set4_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L4_:;
  // s = toForSeq(r11)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args22);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 22);
  // goto L5(i)
  // L5(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L5_;

L22_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

L23_:;
  // set5 = force? set4
  Rsh_Fir_reg_set5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_set4_);
  // checkMissing(set5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_set5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r3 = `>`(set5, 2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_set5_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args25);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r4 = dyn __(set3, r3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_set3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_1;
  goto L2_;

L27_:;
  // set8 = ld set
  Rsh_Fir_reg_set8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L29() else D9()
  // L29()
  goto L29_;

L28_:;
  // r10 = dyn base1(<sym set>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_1;
  goto L4_;

D9_:;
  // deopt 28 [set8]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_set8_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L5_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // c2 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if c2 then L30() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L30()
    goto L30_;
  } else {
  // L7()
    goto L7_;
  }

L29_:;
  // set9 = force? set8
  Rsh_Fir_reg_set9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_set8_);
  // checkMissing(set9)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_set9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // r12 = seq_along(set9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_set9_;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args31);
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_1;
  goto L4_;

L7_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args32);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

L30_:;
  // set14 = ld set
  Rsh_Fir_reg_set14_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L37() else D13()
  // L37()
  goto L37_;

D10_:;
  // deopt 32 [i2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 45 [set14]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_set14_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L31_:;
  // p2 = prom<V +>{
  //   summary_connection = ldf `summary.connection`;
  //   p1 = prom<V +>{
  //     set10 = ld set;
  //     set11 = force? set10;
  //     checkMissing(set11);
  //     c3 = `is.object`(set11);
  //     if c3 then L1() else L2(set11);
  //   L0(dx4):
  //     return dx4;
  //   L1():
  //     dr2 = tryDispatchBuiltin.1("[", set11);
  //     dc1 = getTryDispatchBuiltinDispatched(dr2);
  //     if dc1 then L3() else L2(dr2);
  //   L2(set13):
  //     i5 = ld i;
  //     i6 = force? i5;
  //     __1 = ldf `[` in base;
  //     r13 = dyn __1(set13, i6);
  //     goto L0(r13);
  //   L3():
  //     dx3 = getTryDispatchBuiltinValue(dr2);
  //     goto L0(dx3);
  //   };
  //   r15 = dyn summary_connection(p1);
  //   return r15;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3326159363_1, 0, NULL, CCP, RHO);
  // r17 = dyn unlist(p2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

L37_:;
  // set15 = force? set14
  Rsh_Fir_reg_set15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_set14_);
  // checkMissing(set15)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_set15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // l4 = ld ans
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // rownames__ = ldf `rownames<-`
  Rsh_Fir_reg_rownames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L38() else D14()
  // L38()
  goto L38_;

D11_:;
  // deopt 34 [i2, r17]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 48 [set15, l4, set15]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_set15_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_set15_;
  Rsh_Fir_deopt(48, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L32_:;
  // l1 = ld ans
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c4 = `is.object`(l1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args42);
  // if c4 then L33() else L34(i2, r17, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L33()
    goto L33_;
  } else {
  // L34(i2, r17, l1)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r17_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L34_;
  }

L38_:;
  // r23 = dyn rownames__(l4, NULL, set15)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_set15_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames__, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L39() else D15()
  // L39()
  goto L39_;

D15_:;
  // deopt 50 [set15, r23]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_set15_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L6_:;
  // st ans = dx6
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // goto L5(i10)
  // L5(i10)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i10_;
  goto L5_;

L33_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l1, r17)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args44[2] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args44);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc2 then L35() else L34(i2, r17, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L35()
    goto L35_;
  } else {
  // L34(i2, r17, dr4)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r17_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr4_;
    goto L34_;
  }

L34_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L36() else D12()
  // L36()
  goto L36_;

L39_:;
  // st ans = r23
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard2 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

D12_:;
  // deopt 36 [i8, r19, l3, r17, i11]
  SEXP Rsh_Fir_array_deopt_stack17[5];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack17[4] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(36, 5, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L8_:;
  // l5 = ld ans
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L43() else D17()
  // L43()
  goto L43_;

L35_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L6(i2, dx5)
  // L6(i2, dx5)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L6_;

L36_:;
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r22 = dyn ___(l1, i12, <missing>, r17)
  SEXP Rsh_Fir_array_args48[4];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args48[3] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L6(i8, r22)
  // L6(i8, r22)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r22_;
  goto L6_;

L40_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r26 = dyn c5("description", "class", "mode", "text", "isopen", "can read", "can write")
  SEXP Rsh_Fir_array_args49[7];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args49[4] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args49[5] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args49[6] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names16[7];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_array_arg_names16[5] = R_MissingArg;
  Rsh_Fir_array_arg_names16[6] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 7, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L42() else D16()
  // L42()
  goto L42_;

L41_:;
  // r24 = dyn base2("description", "class", "mode", "text", "isopen", "can read", "can write")
  SEXP Rsh_Fir_array_args50[7];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args50[4] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args50[5] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args50[6] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names17[7];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_array_arg_names17[5] = R_MissingArg;
  Rsh_Fir_array_arg_names17[6] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 7, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r24)
  // L8(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L8_;

D16_:;
  // deopt 62 [r26]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 64 [r25, l5, r25]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(64, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L8(r26)
  // L8(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L8_;

L43_:;
  // r27 = dyn colnames__(l5, NULL, r25)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L44() else D18()
  // L44()
  goto L44_;

D18_:;
  // deopt 66 [r25, r27]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L44_:;
  // st ans = r27
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // all3 = ld all
  Rsh_Fir_reg_all3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L45() else D19()
  // L45()
  goto L45_;

D19_:;
  // deopt 68 [all3]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_all3_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L45_:;
  // all4 = force? all3
  Rsh_Fir_reg_all4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all3_);
  // checkMissing(all4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_all4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r28 = `!`(all4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_all4_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args53);
  // c6 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args54);
  // if c6 then L46() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L46()
    goto L46_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // ans12 = ld ans
  Rsh_Fir_reg_ans12_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L56() else D22()
  // L56()
  goto L56_;

L46_:;
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L47() else D20()
  // L47()
  goto L47_;

D20_:;
  // deopt 71 [ans]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 86 [ans12]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_ans12_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L47_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(ans1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_ans1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args56);
  // if c7 then L48() else L49(ans1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L48()
    goto L48_;
  } else {
  // L49(ans1)
    Rsh_Fir_reg_ans3_ = Rsh_Fir_reg_ans1_;
    goto L49_;
  }

L56_:;
  // ans13 = force? ans12
  Rsh_Fir_reg_ans13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans12_);
  // checkMissing(ans13)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_ans13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(ans13)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_ans13_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args58);
  // if c9 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx8
  return Rsh_Fir_reg_dx8_;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx12
  return Rsh_Fir_reg_dx12_;

L48_:;
  // dr6 = tryDispatchBuiltin.1("[", ans1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_ans1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc3 then L50() else L49(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L50()
    goto L50_;
  } else {
  // L49(dr6)
    Rsh_Fir_reg_ans3_ = Rsh_Fir_reg_dr6_;
    goto L49_;
  }

L49_:;
  // ans4 = ld ans
  Rsh_Fir_reg_ans4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L51() else D21()
  // L51()
  goto L51_;

L57_:;
  // dr10 = tryDispatchBuiltin.1("[", ans13)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_ans13_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc5 then L59() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L59()
    goto L59_;
  } else {
  // L58()
    goto L58_;
  }

L58_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r32 = dyn __4(ans13, <missing>, <missing>, FALSE)
  SEXP Rsh_Fir_array_args63[4];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_ans13_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args63[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 4, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r32)
  // L12(r32)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r32_;
  goto L12_;

D21_:;
  // deopt 73 [ans3, ans4]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_ans3_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_ans4_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L50_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L10(dx7)
  // L10(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L10_;

L51_:;
  // ans5 = force? ans4
  Rsh_Fir_reg_ans5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans4_);
  // checkMissing(ans5)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_ans5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(ans5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_ans5_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args66);
  // if c8 then L52() else L53(ans3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L52()
    goto L52_;
  } else {
  // L53(ans3)
    Rsh_Fir_reg_ans8_ = Rsh_Fir_reg_ans3_;
    goto L53_;
  }

L59_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L12(dx11)
  // L12(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L12_;

L11_:;
  // r30 = `==`(dx10, "opened")
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args68);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r31 = dyn __3(ans1, r30, <missing>, FALSE)
  SEXP Rsh_Fir_array_args69[4];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_ans1_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args69[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names20[4];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 4, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L10(r31)
  // L10(r31)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r31_;
  goto L10_;

L52_:;
  // dr8 = tryDispatchBuiltin.1("[", ans5)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_ans5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc4 then L54() else L53(ans3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L54()
    goto L54_;
  } else {
  // L53(ans3)
    Rsh_Fir_reg_ans8_ = Rsh_Fir_reg_ans3_;
    goto L53_;
  }

L53_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r29 = dyn __2(ans5, <missing>, 5)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_ans5_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L11(r29)
  // L11(r29)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r29_;
  goto L11_;

L54_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L11(dx9)
  // L11(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner3326159363_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_set6_;
  SEXP Rsh_Fir_reg_set7_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r7_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3326159363/0: expected 0, got %d", NCAPTURES);

  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_1;

L1_:;
  // set6 = ld set
  Rsh_Fir_reg_set6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // set7 = force? set6
  Rsh_Fir_reg_set7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_set6_);
  // checkMissing(set7)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_set7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r7 = dyn length(set7)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_set7_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_1;
  goto L0_;

L2_:;
  // r5 = dyn base(<sym set>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3326159363_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_summary_connection;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3326159363/0: expected 0, got %d", NCAPTURES);

  // summary_connection = ldf `summary.connection`
  Rsh_Fir_reg_summary_connection = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // p1 = prom<V +>{
  //   set10 = ld set;
  //   set11 = force? set10;
  //   checkMissing(set11);
  //   c3 = `is.object`(set11);
  //   if c3 then L1() else L2(set11);
  // L0(dx4):
  //   return dx4;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", set11);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(set13):
  //   i5 = ld i;
  //   i6 = force? i5;
  //   __1 = ldf `[` in base;
  //   r13 = dyn __1(set13, i6);
  //   goto L0(r13);
  // L3():
  //   dx3 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx3);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3326159363_2, 0, NULL, CCP, RHO);
  // r15 = dyn summary_connection(p1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary_connection, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_inner3326159363_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_set10_;
  SEXP Rsh_Fir_reg_set11_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_set13_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r13_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3326159363/0: expected 0, got %d", NCAPTURES);

  // set10 = ld set
  Rsh_Fir_reg_set10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // set11 = force? set10
  Rsh_Fir_reg_set11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_set10_);
  // checkMissing(set11)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_set11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(set11)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_set11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args34);
  // if c3 then L1() else L2(set11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(set11)
    Rsh_Fir_reg_set13_ = Rsh_Fir_reg_set11_;
    goto L2_;
  }

L0_:;
  // return dx4
  return Rsh_Fir_reg_dx4_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", set11)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_set11_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_set13_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r13 = dyn __1(set13, i6)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_set13_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r13_1;
  goto L0_;

L3_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L0(dx3)
  // L0(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
