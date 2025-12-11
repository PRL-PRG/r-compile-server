#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner922305347(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner922305347_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner922305347(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner9223053471(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner9223053472(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner9223053473(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner9223053474(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner9223053475(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner9223053476(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner9223053477(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);


  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner922305347
  SEXP Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner922305347, RHO, CCP);
  // st towers = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // towers = ldf towers
  SEXP Rsh_Fir_reg_towers = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0;

D0:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0:;
  // r1 = dyn towers(7.0, 1.0, 2.0, 3.0)
  SEXP Rsh_Fir_array_args[4];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args[3] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_towers, 4, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1;

D1:;
  // deopt 9 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_function_inner922305347(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner922305347 dynamic dispatch ([n, from_peg, to_peg, using_peg])

  return Rsh_Fir_user_version_inner922305347_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner922305347_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner922305347 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner922305347/0: expected 4, got %d", NPARAMS);

  // Bind parameters
  SEXP Rsh_Fir_reg_n = PARAMS[0];
  SEXP Rsh_Fir_reg_from_peg = PARAMS[1];
  SEXP Rsh_Fir_reg_to_peg = PARAMS[2];
  SEXP Rsh_Fir_reg_using_peg = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st from_peg = from_peg
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_from_peg, RHO);
  (void)(Rsh_Fir_reg_from_peg);
  // st to_peg = to_peg
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_to_peg, RHO);
  (void)(Rsh_Fir_reg_to_peg);
  // st using_peg = using_peg
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_using_peg, RHO);
  (void)(Rsh_Fir_reg_using_peg);
  // n1 = ld n
  SEXP Rsh_Fir_reg_n1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L2() else D0()
  // L2()
  goto L2;

L0:;
  // towers = ldf towers
  SEXP Rsh_Fir_reg_towers1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D1()
  // L6()
  goto L6;

D0:;
  // deopt 0 [n1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_n1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2:;
  // n2 = force? n1
  SEXP Rsh_Fir_reg_n2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_n2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r = `==`(n2, 1.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_n2;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L3() else L0()
  if (Rsh_Fir_is_true(c)) {
  // L3()
    goto L3;
  } else {
  // L0()
    goto L0;
  }

L3:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 2);

D1:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L6:;
  // p = prom<V +>{
  n3 = ld n;
  n4 = force? n3;
  checkMissing(n4);
  r3 = `-`(n4, 1.0);
  return r3;
}
  SEXP Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner922305347, CCP, RHO);
  // p1 = prom<V +>{
  from_peg1 = ld from_peg;
  from_peg2 = force? from_peg1;
  checkMissing(from_peg2);
  return from_peg2;
}
  SEXP Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner9223053471, CCP, RHO);
  // p2 = prom<V +>{
  using_peg1 = ld using_peg;
  using_peg2 = force? using_peg1;
  checkMissing(using_peg2);
  return using_peg2;
}
  SEXP Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner9223053472, CCP, RHO);
  // p3 = prom<V +>{
  to_peg1 = ld to_peg;
  to_peg2 = force? to_peg1;
  checkMissing(to_peg2);
  return to_peg2;
}
  SEXP Rsh_Fir_reg_p3 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner9223053473, CCP, RHO);
  // r8 = dyn towers(p, p1, p2, p3)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args9[3] = Rsh_Fir_reg_p3;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  SEXP Rsh_Fir_reg_r8 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_towers1, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D2()
  // L7()
  goto L7;

D2:;
  // deopt 15 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7:;
  // st moves = r8
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r8, RHO);
  (void)(Rsh_Fir_reg_r8);
  // moves = ld moves
  SEXP Rsh_Fir_reg_moves = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L8() else D3()
  // L8()
  goto L8;

D3:;
  // deopt 17 [moves]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_moves;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8:;
  // moves1 = force? moves
  SEXP Rsh_Fir_reg_moves1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_moves);
  // checkMissing(moves1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_moves1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r9 = `+`(moves1, 1.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_moves1;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_reg_r9 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // st moves = r9
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r9, RHO);
  (void)(Rsh_Fir_reg_r9);
  // moves2 = ld moves
  SEXP Rsh_Fir_reg_moves2 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L9() else D4()
  // L9()
  goto L9;

D4:;
  // deopt 22 [moves2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_moves2;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9:;
  // moves3 = force? moves2
  SEXP Rsh_Fir_reg_moves3 = Rsh_Fir_maybe_force(Rsh_Fir_reg_moves2);
  // checkMissing(moves3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_moves3;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // towers1 = ldf towers
  SEXP Rsh_Fir_reg_towers1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D5()
  // L10()
  goto L10;

D5:;
  // deopt 24 [moves3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_moves3;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L10:;
  // p4 = prom<V +>{
  n5 = ld n;
  n6 = force? n5;
  checkMissing(n6);
  r10 = `-`(n6, 1.0);
  return r10;
}
  SEXP Rsh_Fir_reg_p4 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner9223053474, CCP, RHO);
  // p5 = prom<V +>{
  using_peg3 = ld using_peg;
  using_peg4 = force? using_peg3;
  checkMissing(using_peg4);
  return using_peg4;
}
  SEXP Rsh_Fir_reg_p5 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner9223053475, CCP, RHO);
  // p6 = prom<V +>{
  to_peg3 = ld to_peg;
  to_peg4 = force? to_peg3;
  checkMissing(to_peg4);
  return to_peg4;
}
  SEXP Rsh_Fir_reg_p6 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner9223053476, CCP, RHO);
  // p7 = prom<V +>{
  from_peg3 = ld from_peg;
  from_peg4 = force? from_peg3;
  checkMissing(from_peg4);
  return from_peg4;
}
  SEXP Rsh_Fir_reg_p7 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner9223053477, CCP, RHO);
  // r15 = dyn towers1(p4, p5, p6, p7)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p5;
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_p6;
  Rsh_Fir_array_args18[3] = Rsh_Fir_reg_p7;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  SEXP Rsh_Fir_reg_r15 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_towers1, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D6()
  // L11()
  goto L11;

D6:;
  // deopt 29 [moves3, r15]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_moves3;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r15;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L11:;
  // r16 = `+`(moves3, r15)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_moves3;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r15;
  SEXP Rsh_Fir_reg_r16 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // st moves = r16
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r16, RHO);
  (void)(Rsh_Fir_reg_r16);
  // moves4 = ld moves
  SEXP Rsh_Fir_reg_moves4 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L12() else D7()
  // L12()
  goto L12;

D7:;
  // deopt 32 [moves4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_moves4;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L12:;
  // moves5 = force? moves4
  SEXP Rsh_Fir_reg_moves5 = Rsh_Fir_maybe_force(Rsh_Fir_reg_moves4);
  // checkMissing(moves5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_moves5;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return moves5
  return Rsh_Fir_reg_moves5;
}
SEXP Rsh_Fir_user_promise_inner922305347(SEXP CCP, SEXP RHO) {
  // n3 = ld n
  SEXP Rsh_Fir_reg_n3 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // n4 = force? n3
  SEXP Rsh_Fir_reg_n4 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n4;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // r3 = `-`(n4, 1.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_n4;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_reg_r3 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // return r3
  return Rsh_Fir_reg_r3;
}
SEXP Rsh_Fir_user_promise_inner9223053471(SEXP CCP, SEXP RHO) {
  // from_peg1 = ld from_peg
  SEXP Rsh_Fir_reg_from_peg1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // from_peg2 = force? from_peg1
  SEXP Rsh_Fir_reg_from_peg2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_from_peg1);
  // checkMissing(from_peg2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_from_peg2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return from_peg2
  return Rsh_Fir_reg_from_peg2;
}
SEXP Rsh_Fir_user_promise_inner9223053472(SEXP CCP, SEXP RHO) {
  // using_peg1 = ld using_peg
  SEXP Rsh_Fir_reg_using_peg1 = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // using_peg2 = force? using_peg1
  SEXP Rsh_Fir_reg_using_peg2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_using_peg1);
  // checkMissing(using_peg2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_using_peg2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return using_peg2
  return Rsh_Fir_reg_using_peg2;
}
SEXP Rsh_Fir_user_promise_inner9223053473(SEXP CCP, SEXP RHO) {
  // to_peg1 = ld to_peg
  SEXP Rsh_Fir_reg_to_peg1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // to_peg2 = force? to_peg1
  SEXP Rsh_Fir_reg_to_peg2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_to_peg1);
  // checkMissing(to_peg2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_to_peg2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return to_peg2
  return Rsh_Fir_reg_to_peg2;
}
SEXP Rsh_Fir_user_promise_inner9223053474(SEXP CCP, SEXP RHO) {
  // n5 = ld n
  SEXP Rsh_Fir_reg_n5 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // n6 = force? n5
  SEXP Rsh_Fir_reg_n6 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_n6;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r10 = `-`(n6, 1.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_n6;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_reg_r10 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // return r10
  return Rsh_Fir_reg_r10;
}
SEXP Rsh_Fir_user_promise_inner9223053475(SEXP CCP, SEXP RHO) {
  // using_peg3 = ld using_peg
  SEXP Rsh_Fir_reg_using_peg3 = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // using_peg4 = force? using_peg3
  SEXP Rsh_Fir_reg_using_peg4 = Rsh_Fir_maybe_force(Rsh_Fir_reg_using_peg3);
  // checkMissing(using_peg4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_using_peg4;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return using_peg4
  return Rsh_Fir_reg_using_peg4;
}
SEXP Rsh_Fir_user_promise_inner9223053476(SEXP CCP, SEXP RHO) {
  // to_peg3 = ld to_peg
  SEXP Rsh_Fir_reg_to_peg3 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // to_peg4 = force? to_peg3
  SEXP Rsh_Fir_reg_to_peg4 = Rsh_Fir_maybe_force(Rsh_Fir_reg_to_peg3);
  // checkMissing(to_peg4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_to_peg4;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return to_peg4
  return Rsh_Fir_reg_to_peg4;
}
SEXP Rsh_Fir_user_promise_inner9223053477(SEXP CCP, SEXP RHO) {
  // from_peg3 = ld from_peg
  SEXP Rsh_Fir_reg_from_peg3 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // from_peg4 = force? from_peg3
  SEXP Rsh_Fir_reg_from_peg4 = Rsh_Fir_maybe_force(Rsh_Fir_reg_from_peg3);
  // checkMissing(from_peg4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_from_peg4;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return from_peg4
  return Rsh_Fir_reg_from_peg4;
}
