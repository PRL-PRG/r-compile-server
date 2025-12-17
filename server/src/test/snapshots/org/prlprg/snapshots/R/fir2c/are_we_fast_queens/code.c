#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4266987626_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4266987626_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4266987626_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4266987626_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner139384502_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner139384502_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner139384502_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner139384502_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner139384502_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner139384502_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner139384502_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner139384502_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner139384502_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner69251918_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner69251918_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_queens;
  SEXP Rsh_Fir_reg_r3_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4266987626
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4266987626_, RHO, CCP);
  // st queens = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // r1 = clos inner139384502
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner139384502_, RHO, CCP);
  // st solve_queens = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // r2 = clos inner69251918
  Rsh_Fir_reg_r2_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner69251918_, RHO, CCP);
  // st is_safe = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // queens = ldf queens
  Rsh_Fir_reg_queens = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r3 = dyn queens(4.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_queens, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 12 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_function_inner4266987626_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4266987626 dynamic dispatch ([n])

  return Rsh_Fir_user_version_inner4266987626_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4266987626_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4266987626 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4266987626/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_solve_queens;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // sym = ldf rep
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf rep in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // st board = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // solve_queens = ldf solve_queens
  Rsh_Fir_reg_solve_queens = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L1_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn rep(0.0, <sym n>)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(0.0, <sym n>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   board = ld board;
  //   board1 = force? board;
  //   checkMissing(board1);
  //   return board1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4266987626_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   return n2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4266987626_1, 0, NULL, CCP, RHO);
  // r5 = dyn solve_queens(p, 1.0, p1)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_solve_queens, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_inner4266987626_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_board;
  SEXP Rsh_Fir_reg_board1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4266987626/0: expected 0, got %d", NCAPTURES);

  // board = ld board
  Rsh_Fir_reg_board = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // board1 = force? board
  Rsh_Fir_reg_board1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_board);
  // checkMissing(board1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_board1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return board1
  return Rsh_Fir_reg_board1_;
}
SEXP Rsh_Fir_user_promise_inner4266987626_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4266987626/0: expected 0, got %d", NCAPTURES);

  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return n2
  return Rsh_Fir_reg_n2_;
}
SEXP Rsh_Fir_user_function_inner139384502_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner139384502 dynamic dispatch ([board, row, n])

  return Rsh_Fir_user_version_inner139384502_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner139384502_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner139384502 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner139384502/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_board1;
  SEXP Rsh_Fir_reg_row;
  SEXP Rsh_Fir_reg_n1;
  SEXP Rsh_Fir_reg_row1_;
  SEXP Rsh_Fir_reg_row2_;
  SEXP Rsh_Fir_reg_n1_1;
  SEXP Rsh_Fir_reg_n2_1;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_is_safe;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_col2_;
  SEXP Rsh_Fir_reg_col3_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_col5_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_row5_;
  SEXP Rsh_Fir_reg_row6_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_count;
  SEXP Rsh_Fir_reg_count1_;
  SEXP Rsh_Fir_reg_solve_queens1;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_count2_;
  SEXP Rsh_Fir_reg_count3_;

  // Bind parameters
  Rsh_Fir_reg_board1 = PARAMS[0];
  Rsh_Fir_reg_row = PARAMS[1];
  Rsh_Fir_reg_n1 = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st board = board
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_board1, RHO);
  (void)(Rsh_Fir_reg_board1);
  // st row = row
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_row, RHO);
  (void)(Rsh_Fir_reg_row);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_n1, RHO);
  (void)(Rsh_Fir_reg_n1);
  // row1 = ld row
  Rsh_Fir_reg_row1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

D0_:;
  // deopt 0 [row1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_row1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // row2 = force? row1
  Rsh_Fir_reg_row2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row1_);
  // checkMissing(row2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_row2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_1 = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 1 [row2, n1]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_row2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_n1_1;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_1);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_n2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r = `+`(n2, 1.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_n2_1;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args9);
  // r1 = `==`(row2, r)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_row2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r2;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args10);
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // if c then L9() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // st count = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 8);

D2_:;
  // deopt 15 [1.0, n3]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r4 = `:`(1.0, n4)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args13);
  // s = toForSeq(r4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args15);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 11);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // c1 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if c1 then L13() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L13()
    goto L13_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args18);
  // st col = x
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // is_safe = ldf is_safe
  Rsh_Fir_reg_is_safe = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L13_:;
  // count2 = ld count
  Rsh_Fir_reg_count2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L26() else D10()
  // L26()
  goto L26_;

D3_:;
  // deopt 19 [i2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 46 [count2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_count2_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   board1 = ld board;
  //   board2 = force? board1;
  //   checkMissing(board2);
  //   return board2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner139384502_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   row3 = ld row;
  //   row4 = force? row3;
  //   checkMissing(row4);
  //   return row4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner139384502_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   col = ld col;
  //   col1 = force? col;
  //   checkMissing(col1);
  //   return col1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner139384502_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   return n6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner139384502_3, 0, NULL, CCP, RHO);
  // r9 = dyn is_safe(p, p1, p2, p3)
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args23[3] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_safe, 4, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L26_:;
  // count3 = force? count2
  Rsh_Fir_reg_count3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_count2_);
  // checkMissing(count3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_count3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return count3
  return Rsh_Fir_reg_count3_;

D4_:;
  // deopt 24 [i2, r9]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // c2 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c2 then L16() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L16()
    goto L16_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L5(i2)
  // L5(i2)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  goto L5_;

L5_:;
  // goto L2(i11)
  // L2(i11)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i11_;
  goto L2_;

L16_:;
  // col2 = ld col
  Rsh_Fir_reg_col2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 25 [i2, col2]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_col2_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // col3 = force? col2
  Rsh_Fir_reg_col3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col2_);
  // checkMissing(col3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_col3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // l1 = ld board
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c3 = `is.object`(l1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args27);
  // if c3 then L18() else L19(i2, col3, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L18()
    goto L18_;
  } else {
  // L19(i2, col3, l1)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_col5_ = Rsh_Fir_reg_col3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L19_;
  }

L4_:;
  // st board = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // count = ld count
  Rsh_Fir_reg_count = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

L18_:;
  // dr = tryDispatchBuiltin.0("[<-", l1, col3)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_col3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args28);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc then L20() else L19(i2, col3, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L20()
    goto L20_;
  } else {
  // L19(i2, col3, dr)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_col5_ = Rsh_Fir_reg_col3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L19_;
  }

L19_:;
  // row5 = ld row
  Rsh_Fir_reg_row5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

D6_:;
  // deopt 28 [i8, col5, l3, col3, row5]
  SEXP Rsh_Fir_array_deopt_stack9[5];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_col5_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_col3_;
  Rsh_Fir_array_deopt_stack9[4] = Rsh_Fir_reg_row5_;
  Rsh_Fir_deopt(28, 5, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 32 [i10, count]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_count;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L20_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L4(i2, dx)
  // L4(i2, dx)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

L21_:;
  // row6 = force? row5
  Rsh_Fir_reg_row6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row5_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r10 = dyn ___(l3, col3, row6)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_col3_;
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_row6_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(i8, r10)
  // L4(i8, r10)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L4_;

L22_:;
  // count1 = force? count
  Rsh_Fir_reg_count1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_count);
  // checkMissing(count1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_count1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // solve_queens = ldf solve_queens
  Rsh_Fir_reg_solve_queens1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 34 [i10, count1]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_count1_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L23_:;
  // p4 = prom<V +>{
  //   board3 = ld board;
  //   board4 = force? board3;
  //   checkMissing(board4);
  //   return board4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner139384502_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   row7 = ld row;
  //   row8 = force? row7;
  //   checkMissing(row8);
  //   r12 = `+`(row8, 1.0);
  //   return r12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner139384502_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   n7 = ld n;
  //   n8 = force? n7;
  //   checkMissing(n8);
  //   return n8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner139384502_6, 0, NULL, CCP, RHO);
  // r15 = dyn solve_queens(p4, p5, p6)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_solve_queens1, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 38 [i10, count1, r15]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_count1_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(38, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L24_:;
  // r16 = `+`(count1, r15)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_count1_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args38);
  // st count = r16
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // goto L5(i10)
  // L5(i10)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i10_;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_inner139384502_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_board1_1;
  SEXP Rsh_Fir_reg_board2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner139384502/0: expected 0, got %d", NCAPTURES);

  // board1 = ld board
  Rsh_Fir_reg_board1_1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // board2 = force? board1
  Rsh_Fir_reg_board2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_board1_1);
  // checkMissing(board2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_board2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return board2
  return Rsh_Fir_reg_board2_;
}
SEXP Rsh_Fir_user_promise_inner139384502_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row3_;
  SEXP Rsh_Fir_reg_row4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner139384502/0: expected 0, got %d", NCAPTURES);

  // row3 = ld row
  Rsh_Fir_reg_row3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // row4 = force? row3
  Rsh_Fir_reg_row4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row3_);
  // checkMissing(row4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_row4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return row4
  return Rsh_Fir_reg_row4_;
}
SEXP Rsh_Fir_user_promise_inner139384502_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_col;
  SEXP Rsh_Fir_reg_col1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner139384502/0: expected 0, got %d", NCAPTURES);

  // col = ld col
  Rsh_Fir_reg_col = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // col1 = force? col
  Rsh_Fir_reg_col1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col);
  // checkMissing(col1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_col1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return col1
  return Rsh_Fir_reg_col1_;
}
SEXP Rsh_Fir_user_promise_inner139384502_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_n6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner139384502/0: expected 0, got %d", NCAPTURES);

  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return n6
  return Rsh_Fir_reg_n6_;
}
SEXP Rsh_Fir_user_promise_inner139384502_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_board3_;
  SEXP Rsh_Fir_reg_board4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner139384502/0: expected 0, got %d", NCAPTURES);

  // board3 = ld board
  Rsh_Fir_reg_board3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // board4 = force? board3
  Rsh_Fir_reg_board4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_board3_);
  // checkMissing(board4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_board4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return board4
  return Rsh_Fir_reg_board4_;
}
SEXP Rsh_Fir_user_promise_inner139384502_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row7_;
  SEXP Rsh_Fir_reg_row8_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner139384502/0: expected 0, got %d", NCAPTURES);

  // row7 = ld row
  Rsh_Fir_reg_row7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // row8 = force? row7
  Rsh_Fir_reg_row8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row7_);
  // checkMissing(row8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_row8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r12 = `+`(row8, 1.0)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_row8_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args35);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner139384502_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_n8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner139384502/0: expected 0, got %d", NCAPTURES);

  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return n8
  return Rsh_Fir_reg_n8_;
}
SEXP Rsh_Fir_user_function_inner69251918_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner69251918 dynamic dispatch ([board, row, col, n])

  return Rsh_Fir_user_version_inner69251918_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner69251918_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner69251918 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner69251918/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_board2;
  SEXP Rsh_Fir_reg_row1;
  SEXP Rsh_Fir_reg_col1;
  SEXP Rsh_Fir_reg_n2;
  SEXP Rsh_Fir_reg_row1_1;
  SEXP Rsh_Fir_reg_row2_1;
  SEXP Rsh_Fir_reg_r3;
  SEXP Rsh_Fir_reg_s1;
  SEXP Rsh_Fir_reg_l1;
  SEXP Rsh_Fir_reg_i1;
  SEXP Rsh_Fir_reg_i1_1;
  SEXP Rsh_Fir_reg_i2_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_board1_2;
  SEXP Rsh_Fir_reg_board2_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_board4_1;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_i8_1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_1;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_3;
  SEXP Rsh_Fir_reg_col1_1;
  SEXP Rsh_Fir_reg_col2_1;
  SEXP Rsh_Fir_reg_r2_2;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_board5_;
  SEXP Rsh_Fir_reg_board6_;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_board8_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_col3_1;
  SEXP Rsh_Fir_reg_col4_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_abs;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_reg_i28_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_row3_1;
  SEXP Rsh_Fir_reg_row4_1;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_abs1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c4_;

  // Bind parameters
  Rsh_Fir_reg_board2 = PARAMS[0];
  Rsh_Fir_reg_row1 = PARAMS[1];
  Rsh_Fir_reg_col1 = PARAMS[2];
  Rsh_Fir_reg_n2 = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st board = board
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_board2, RHO);
  (void)(Rsh_Fir_reg_board2);
  // st row = row
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_row1, RHO);
  (void)(Rsh_Fir_reg_row1);
  // st col = col
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_col1, RHO);
  (void)(Rsh_Fir_reg_col1);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_n2, RHO);
  (void)(Rsh_Fir_reg_n2);
  // row1 = ld row
  Rsh_Fir_reg_row1_1 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

D0_:;
  // deopt 1 [1.0, row1]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_row1_1;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L10_:;
  // row2 = force? row1
  Rsh_Fir_reg_row2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_row1_1);
  // checkMissing(row2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_row2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r = `:`(1.0, row2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_row2_1;
  Rsh_Fir_reg_r3 = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args40);
  // s = toForSeq(r)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r3;
  Rsh_Fir_reg_s1 = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_s1;
  Rsh_Fir_reg_l1 = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args42);
  // i = 0
  Rsh_Fir_reg_i1 = Rsh_const(CCP, 11);
  // goto L0(i)
  // L0(i)
  Rsh_Fir_reg_i1_1 = Rsh_Fir_reg_i1;
  goto L0_;

L0_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_i1_1;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_i2_1 = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_i2_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if c then L11() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L11()
    goto L11_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args45[4];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_s1;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_i2_1;
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args45[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x1 = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args45);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // board1 = ld board
  Rsh_Fir_reg_board1_2 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 14);

D1_:;
  // deopt 4 [i2, board1]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i2_1;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_board1_2;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L12_:;
  // board2 = force? board1
  Rsh_Fir_reg_board2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_board1_2);
  // checkMissing(board2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_board2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(board2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_board2_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args47);
  // if c1 then L13() else L14(i2, board2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L13()
    goto L13_;
  } else {
  // L14(i2, board2)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_1;
    Rsh_Fir_reg_board4_1 = Rsh_Fir_reg_board2_1;
    goto L14_;
  }

L1_:;
  // col1 = ld col
  Rsh_Fir_reg_col1_1 = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

L13_:;
  // dr = tryDispatchBuiltin.1("[", board2)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_board2_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc then L15() else L14(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L15()
    goto L15_;
  } else {
  // L14(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_1;
    Rsh_Fir_reg_board4_1 = Rsh_Fir_reg_dr1;
    goto L14_;
  }

L14_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

D2_:;
  // deopt 6 [i6, board4, i9]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_board4_1;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 8 [i8, dx1, col1]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i8_1;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_col1_1;
  Rsh_Fir_deopt(8, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L15_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L1(i2, dx)
  // L1(i2, dx)
  Rsh_Fir_reg_i8_1 = Rsh_Fir_reg_i2_1;
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L1_;

L16_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r1 = dyn __(board4, i10)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_board4_1;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_i10_1;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r1_3 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(i6, r1)
  // L1(i6, r1)
  Rsh_Fir_reg_i8_1 = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r1_3;
  goto L1_;

L17_:;
  // col2 = force? col1
  Rsh_Fir_reg_col2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_col1_1);
  // checkMissing(col2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_col2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r2 = `==`(dx1, col2)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_col2_1;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args53);
  // c2 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args54);
  // if c2 then L18() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L18()
    goto L18_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym = ldf abs
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf abs in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 22);

L4_:;
  // sym1 = ldf abs
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf abs in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L21_:;
  // board5 = ld board
  Rsh_Fir_reg_board5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r5 = dyn base(<lang `-`(`[`(board, i), col)>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(i8, r5)
  // L4(i8, r5)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i8_1;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_1;
  goto L4_;

D4_:;
  // deopt 18 [i8, board5]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i8_1;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_board5_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L6_:;
  // r18 = `==`(r13, r14)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args58);
  // c4 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args59);
  // if c4 then L35() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L35()
    goto L35_;
  } else {
  // L7()
    goto L7_;
  }

L23_:;
  // board6 = force? board5
  Rsh_Fir_reg_board6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_board5_);
  // checkMissing(board6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_board6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(board6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_board6_;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args61);
  // if c3 then L24() else L25(i8, board6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L24()
    goto L24_;
  } else {
  // L25(i8, board6)
    Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i8_1;
    Rsh_Fir_reg_board8_ = Rsh_Fir_reg_board6_;
    goto L25_;
  }

L30_:;
  // i27 = ld i
  Rsh_Fir_reg_i27_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

L31_:;
  // r12 = dyn base1(<lang `-`(`-`(i, 1.0), row)>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(i17, r6, r12)
  // L6(i17, r6, r12)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_1;
  goto L6_;

D8_:;
  // deopt 28 [i17, r6, i27]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_i27_;
  Rsh_Fir_deopt(28, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L5_:;
  // col3 = ld col
  Rsh_Fir_reg_col3_1 = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

L7_:;
  // goto L0(i26)
  // L0(i26)
  Rsh_Fir_reg_i1_1 = Rsh_Fir_reg_i26_;
  goto L0_;

L24_:;
  // dr2 = tryDispatchBuiltin.1("[", board6)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_board6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc1 then L26() else L25(i8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L26()
    goto L26_;
  } else {
  // L25(i8, dr2)
    Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i8_1;
    Rsh_Fir_reg_board8_ = Rsh_Fir_reg_dr2_;
    goto L25_;
  }

L25_:;
  // i22 = ld i
  Rsh_Fir_reg_i22_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

L32_:;
  // i28 = force? i27
  Rsh_Fir_reg_i28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i27_);
  // checkMissing(i28)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_i28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r15 = `-`(i28, 1.0)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args66);
  // row3 = ld row
  Rsh_Fir_reg_row3_1 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 22);

D5_:;
  // deopt 20 [i19, board8, i22]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_board8_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_i22_;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 22 [i21, dx3, col3]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_col3_1;
  Rsh_Fir_deopt(22, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 31 [i17, r6, r15, row3]
  SEXP Rsh_Fir_array_deopt_stack21[4];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_row3_1;
  Rsh_Fir_deopt(31, 4, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L26_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L5(i8, dx2)
  // L5(i8, dx2)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i8_1;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

L27_:;
  // i23 = force? i22
  Rsh_Fir_reg_i23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i22_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r7 = dyn __1(board8, i23)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_board8_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(i19, r7)
  // L5(i19, r7)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r7_;
  goto L5_;

L28_:;
  // col4 = force? col3
  Rsh_Fir_reg_col4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col3_1);
  // checkMissing(col4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_col4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r8 = `-`(dx3, col4)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_col4_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args70);
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r9 = dyn abs(r8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L29() else D7()
  // L29()
  goto L29_;

L33_:;
  // row4 = force? row3
  Rsh_Fir_reg_row4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_row3_1);
  // checkMissing(row4)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_row4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // r16 = `-`(r15, row4)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_row4_1;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args73);
  // abs1 = ldf abs in base
  Rsh_Fir_reg_abs1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r17 = dyn abs1(r16)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs1_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L34() else D10()
  // L34()
  goto L34_;

D7_:;
  // deopt 26 [i21, r9]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 35 [i17, r6, r17]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L4(i21, r9)
  // L4(i21, r9)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r9_1;
  goto L4_;

L34_:;
  // goto L6(i17, r6, r17)
  // L6(i17, r6, r17)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r17_;
  goto L6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
