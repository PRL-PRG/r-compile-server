#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3069788994_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3069788994_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3069788994_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069788994_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069788994_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069788994_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069788994_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069788994_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069788994_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069788994_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_towers;
  SEXP Rsh_Fir_reg_r1_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3069788994
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3069788994_, RHO, CCP);
  // st towers = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // towers = ldf towers
  Rsh_Fir_reg_towers = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
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
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_towers, 4, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_function_inner3069788994_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3069788994 dynamic dispatch ([n, from_peg, to_peg, using_peg])

  return Rsh_Fir_user_version_inner3069788994_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3069788994_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3069788994 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3069788994/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_from_peg;
  SEXP Rsh_Fir_reg_to_peg;
  SEXP Rsh_Fir_reg_using_peg;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_towers1;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_moves;
  SEXP Rsh_Fir_reg_moves1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_moves2_;
  SEXP Rsh_Fir_reg_moves3_;
  SEXP Rsh_Fir_reg_towers1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_moves4_;
  SEXP Rsh_Fir_reg_moves5_;

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_from_peg = PARAMS[1];
  Rsh_Fir_reg_to_peg = PARAMS[2];
  Rsh_Fir_reg_using_peg = PARAMS[3];

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
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 0 [n1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r = `==`(n2, 1.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args2);
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c then L3() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3()
    goto L3_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // towers = ldf towers
  Rsh_Fir_reg_towers1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 2);

D1_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   n3 = ld n;
  //   n4 = force? n3;
  //   checkMissing(n4);
  //   r3 = `-`(n4, 1.0);
  //   return r3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069788994_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   from_peg1 = ld from_peg;
  //   from_peg2 = force? from_peg1;
  //   checkMissing(from_peg2);
  //   return from_peg2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069788994_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   using_peg1 = ld using_peg;
  //   using_peg2 = force? using_peg1;
  //   checkMissing(using_peg2);
  //   return using_peg2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069788994_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   to_peg1 = ld to_peg;
  //   to_peg2 = force? to_peg1;
  //   checkMissing(to_peg2);
  //   return to_peg2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069788994_3, 0, NULL, CCP, RHO);
  // r8 = dyn towers(p, p1, p2, p3)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args9[3] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_towers1, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 15 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // st moves = r8
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // moves = ld moves
  Rsh_Fir_reg_moves = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 17 [moves]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_moves;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // moves1 = force? moves
  Rsh_Fir_reg_moves1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moves);
  // checkMissing(moves1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_moves1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r9 = `+`(moves1, 1.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_moves1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args11);
  // st moves = r9
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // moves2 = ld moves
  Rsh_Fir_reg_moves2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 22 [moves2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_moves2_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // moves3 = force? moves2
  Rsh_Fir_reg_moves3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moves2_);
  // checkMissing(moves3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_moves3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // towers1 = ldf towers
  Rsh_Fir_reg_towers1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

D5_:;
  // deopt 24 [moves3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_moves3_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L10_:;
  // p4 = prom<V +>{
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   r10 = `-`(n6, 1.0);
  //   return r10;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069788994_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   using_peg3 = ld using_peg;
  //   using_peg4 = force? using_peg3;
  //   checkMissing(using_peg4);
  //   return using_peg4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069788994_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   to_peg3 = ld to_peg;
  //   to_peg4 = force? to_peg3;
  //   checkMissing(to_peg4);
  //   return to_peg4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069788994_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   from_peg3 = ld from_peg;
  //   from_peg4 = force? from_peg3;
  //   checkMissing(from_peg4);
  //   return from_peg4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069788994_7, 0, NULL, CCP, RHO);
  // r15 = dyn towers1(p4, p5, p6, p7)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args18[3] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_towers1_, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D6()
  // L11()
  goto L11_;

D6_:;
  // deopt 29 [moves3, r15]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_moves3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L11_:;
  // r16 = `+`(moves3, r15)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_moves3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args19);
  // st moves = r16
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // moves4 = ld moves
  Rsh_Fir_reg_moves4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L12() else D7()
  // L12()
  goto L12_;

D7_:;
  // deopt 32 [moves4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_moves4_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L12_:;
  // moves5 = force? moves4
  Rsh_Fir_reg_moves5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moves4_);
  // checkMissing(moves5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_moves5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return moves5
  return Rsh_Fir_reg_moves5_;
}
SEXP Rsh_Fir_user_promise_inner3069788994_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069788994/0: expected 0, got %d", NCAPTURES);

  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // r3 = `-`(n4, 1.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args5);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner3069788994_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_from_peg1_;
  SEXP Rsh_Fir_reg_from_peg2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069788994/0: expected 0, got %d", NCAPTURES);

  // from_peg1 = ld from_peg
  Rsh_Fir_reg_from_peg1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // from_peg2 = force? from_peg1
  Rsh_Fir_reg_from_peg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from_peg1_);
  // checkMissing(from_peg2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_from_peg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return from_peg2
  return Rsh_Fir_reg_from_peg2_;
}
SEXP Rsh_Fir_user_promise_inner3069788994_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_using_peg1_;
  SEXP Rsh_Fir_reg_using_peg2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069788994/0: expected 0, got %d", NCAPTURES);

  // using_peg1 = ld using_peg
  Rsh_Fir_reg_using_peg1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // using_peg2 = force? using_peg1
  Rsh_Fir_reg_using_peg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_using_peg1_);
  // checkMissing(using_peg2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_using_peg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return using_peg2
  return Rsh_Fir_reg_using_peg2_;
}
SEXP Rsh_Fir_user_promise_inner3069788994_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_to_peg1_;
  SEXP Rsh_Fir_reg_to_peg2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069788994/0: expected 0, got %d", NCAPTURES);

  // to_peg1 = ld to_peg
  Rsh_Fir_reg_to_peg1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // to_peg2 = force? to_peg1
  Rsh_Fir_reg_to_peg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to_peg1_);
  // checkMissing(to_peg2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_to_peg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return to_peg2
  return Rsh_Fir_reg_to_peg2_;
}
SEXP Rsh_Fir_user_promise_inner3069788994_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069788994/0: expected 0, got %d", NCAPTURES);

  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r10 = `-`(n6, 1.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args14);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner3069788994_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_using_peg3_;
  SEXP Rsh_Fir_reg_using_peg4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069788994/0: expected 0, got %d", NCAPTURES);

  // using_peg3 = ld using_peg
  Rsh_Fir_reg_using_peg3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // using_peg4 = force? using_peg3
  Rsh_Fir_reg_using_peg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_using_peg3_);
  // checkMissing(using_peg4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_using_peg4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return using_peg4
  return Rsh_Fir_reg_using_peg4_;
}
SEXP Rsh_Fir_user_promise_inner3069788994_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_to_peg3_;
  SEXP Rsh_Fir_reg_to_peg4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069788994/0: expected 0, got %d", NCAPTURES);

  // to_peg3 = ld to_peg
  Rsh_Fir_reg_to_peg3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // to_peg4 = force? to_peg3
  Rsh_Fir_reg_to_peg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to_peg3_);
  // checkMissing(to_peg4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_to_peg4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return to_peg4
  return Rsh_Fir_reg_to_peg4_;
}
SEXP Rsh_Fir_user_promise_inner3069788994_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_from_peg3_;
  SEXP Rsh_Fir_reg_from_peg4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069788994/0: expected 0, got %d", NCAPTURES);

  // from_peg3 = ld from_peg
  Rsh_Fir_reg_from_peg3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // from_peg4 = force? from_peg3
  Rsh_Fir_reg_from_peg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from_peg3_);
  // checkMissing(from_peg4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_from_peg4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return from_peg4
  return Rsh_Fir_reg_from_peg4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
