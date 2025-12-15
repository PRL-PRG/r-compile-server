#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner973687_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner973687_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner_1969965770_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner_1969965770_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner354062069_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner354062069_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);


  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st a = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // r = clos inner973687
  SEXP Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner973687_, RHO, CCP);
  // st f = r
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // f = ldf f
  SEXP Rsh_Fir_reg_f = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn f(10.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  SEXP Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
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
  // checkFun.0(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args1));
  // r2 = r1 as cls
  SEXP Rsh_Fir_reg_r2_ = Rsh_Fir_cast(Rsh_Fir_reg_r1_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r3 = dyn r2(30.0)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  SEXP Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r2_, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 12 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_function_inner973687_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner973687 dynamic dispatch ([z])

  return Rsh_Fir_user_version_inner973687_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner973687_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner973687 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner973687/0: expected 1, got %d", NPARAMS);

  // Bind parameters
  SEXP Rsh_Fir_reg_z = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st z = z
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_z, RHO);
  (void)(Rsh_Fir_reg_z);
  // st c = 2.0
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // r = clos `inner-1969965770`
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner_1969965770_, RHO, CCP);
  // st g = r
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // g = ldf g
  SEXP Rsh_Fir_reg_g = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn g(20.0)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  SEXP Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_g, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [r1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_function_inner_1969965770_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner-1969965770 dynamic dispatch ([y])

  return Rsh_Fir_user_version_inner_1969965770_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner_1969965770_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner-1969965770 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner-1969965770/0: expected 1, got %d", NPARAMS);

  // Bind parameters
  SEXP Rsh_Fir_reg_y = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // st e = 3.0
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // r = clos inner354062069
  SEXP Rsh_Fir_reg_r2 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner354062069_, RHO, CCP);
  // st h = r
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r2, RHO);
  (void)(Rsh_Fir_reg_r2);
  // h = ld h
  SEXP Rsh_Fir_reg_h = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 6 [h]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_h;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L0_:;
  // h1 = force? h
  SEXP Rsh_Fir_reg_h1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h);
  // checkMissing(h1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_h1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return h1
  return Rsh_Fir_reg_h1_;
}
SEXP Rsh_Fir_user_function_inner354062069_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner354062069 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner354062069_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner354062069_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner354062069 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner354062069/0: expected 1, got %d", NPARAMS);

  // Bind parameters
  SEXP Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // a = ld a
  SEXP Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 0 [a]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L0_:;
  // a1 = force? a
  SEXP Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = ld c
  SEXP Rsh_Fir_reg_c = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 1 [a1, c]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_c;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L1_:;
  // c1 = force? c
  SEXP Rsh_Fir_reg_c1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c);
  // checkMissing(c1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // r = `+`(a1, c1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r3 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // e = ld e
  SEXP Rsh_Fir_reg_e = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 3 [r, e]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r3;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_e;
  Rsh_Fir_deopt(3, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L2_:;
  // e1 = force? e
  SEXP Rsh_Fir_reg_e1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e);
  // checkMissing(e1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_e1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r1 = `+`(r, e1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r3;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_e1_;
  SEXP Rsh_Fir_reg_r1_2 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // x1 = ld x
  SEXP Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 5 [r1, x1]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L3_:;
  // x2 = force? x1
  SEXP Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r2 = `+`(r1, x2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // y = ld y
  SEXP Rsh_Fir_reg_y1 = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 7 [r2, y]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_y1;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L4_:;
  // y1 = force? y
  SEXP Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r3 = `+`(r2, y1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // z = ld z
  SEXP Rsh_Fir_reg_z1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 9 [r3, z]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_z1;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L5_:;
  // z1 = force? z
  SEXP Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z1);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // r4 = `+`(r3, z1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
