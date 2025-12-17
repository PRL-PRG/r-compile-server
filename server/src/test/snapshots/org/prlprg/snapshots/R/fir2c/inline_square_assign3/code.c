#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_matrix1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r17_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L0_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // l3 = ld x
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c2 = `is.object`(l3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args);
  // if c2 then L10() else L11(1.0, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L10()
    goto L10_;
  } else {
  // L11(1.0, l3)
    Rsh_Fir_reg_r13_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L11_;
  }

L1_:;
  // st x = dx3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r = dyn matrix[, nrow, ncol](0.0, 10.0, 10.0)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 7 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st x = r
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c(1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn matrix1[, nrow, ncol](p, 10.0, 10.0)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 16 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // st y = r5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args6);
  // if c1 then L6() else L7(1.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L6()
    goto L6_;
  } else {
  // L7(1.0, l)
    Rsh_Fir_reg_r7_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L7_;
  }

L6_:;
  // dr = tryDispatchBuiltin.0("[<-", l, 1.0)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L8() else L7(1.0, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L8()
    goto L8_;
  } else {
  // L7(1.0, dr)
    Rsh_Fir_reg_r7_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L7_;
  }

L7_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

L8_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D4_:;
  // deopt 21 [r7, l2, 1.0, y]
  SEXP Rsh_Fir_array_deopt_stack2[4];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack2[3] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(21, 4, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r10 = `==`(y1, 1.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args11);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r11 = dyn ___(l, r10, <missing>, 1.0)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L0_;

L10_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l3, 1.0)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args13);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc1 then L12() else L11(1.0, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L12()
    goto L12_;
  } else {
  // L11(1.0, dr2)
    Rsh_Fir_reg_r13_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L11_;
  }

L11_:;
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

L12_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L1(1.0, dx2)
  // L1(1.0, dx2)
  Rsh_Fir_reg_r15_ = Rsh_const(CCP, 2);
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;

D5_:;
  // deopt 32 [r13, l5, 1.0, y2]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(32, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // r16 = `==`(y3, 1.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args17);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r17 = dyn ____(l3, r16, <missing>, 1.0)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r13, r17)
  // L1(r13, r17)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r17_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r3 = dyn c(1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args3[100];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[4] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[5] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[6] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[8] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[9] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[10] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[11] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[12] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[13] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[14] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[15] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[16] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[18] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[19] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[20] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[21] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[22] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[23] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[24] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[25] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[26] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[27] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[28] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[29] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[30] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[31] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[32] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[33] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[34] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[35] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[36] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[37] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[38] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[39] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[40] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[41] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[42] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[43] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[44] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[45] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[46] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[47] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[48] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[49] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[50] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[51] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[52] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[53] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[54] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[55] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[56] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[57] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[58] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[59] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[60] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[61] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[62] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[63] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[64] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[65] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[66] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[67] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[68] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[69] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[70] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[71] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[72] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[73] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[74] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[75] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[76] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[77] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[78] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[79] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[80] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[81] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[82] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[83] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[84] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[85] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[86] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[87] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[88] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[89] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[90] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[91] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[92] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[93] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[94] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[95] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[96] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[97] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[98] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[99] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[100];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_array_arg_names1[9] = R_MissingArg;
  Rsh_Fir_array_arg_names1[10] = R_MissingArg;
  Rsh_Fir_array_arg_names1[11] = R_MissingArg;
  Rsh_Fir_array_arg_names1[12] = R_MissingArg;
  Rsh_Fir_array_arg_names1[13] = R_MissingArg;
  Rsh_Fir_array_arg_names1[14] = R_MissingArg;
  Rsh_Fir_array_arg_names1[15] = R_MissingArg;
  Rsh_Fir_array_arg_names1[16] = R_MissingArg;
  Rsh_Fir_array_arg_names1[17] = R_MissingArg;
  Rsh_Fir_array_arg_names1[18] = R_MissingArg;
  Rsh_Fir_array_arg_names1[19] = R_MissingArg;
  Rsh_Fir_array_arg_names1[20] = R_MissingArg;
  Rsh_Fir_array_arg_names1[21] = R_MissingArg;
  Rsh_Fir_array_arg_names1[22] = R_MissingArg;
  Rsh_Fir_array_arg_names1[23] = R_MissingArg;
  Rsh_Fir_array_arg_names1[24] = R_MissingArg;
  Rsh_Fir_array_arg_names1[25] = R_MissingArg;
  Rsh_Fir_array_arg_names1[26] = R_MissingArg;
  Rsh_Fir_array_arg_names1[27] = R_MissingArg;
  Rsh_Fir_array_arg_names1[28] = R_MissingArg;
  Rsh_Fir_array_arg_names1[29] = R_MissingArg;
  Rsh_Fir_array_arg_names1[30] = R_MissingArg;
  Rsh_Fir_array_arg_names1[31] = R_MissingArg;
  Rsh_Fir_array_arg_names1[32] = R_MissingArg;
  Rsh_Fir_array_arg_names1[33] = R_MissingArg;
  Rsh_Fir_array_arg_names1[34] = R_MissingArg;
  Rsh_Fir_array_arg_names1[35] = R_MissingArg;
  Rsh_Fir_array_arg_names1[36] = R_MissingArg;
  Rsh_Fir_array_arg_names1[37] = R_MissingArg;
  Rsh_Fir_array_arg_names1[38] = R_MissingArg;
  Rsh_Fir_array_arg_names1[39] = R_MissingArg;
  Rsh_Fir_array_arg_names1[40] = R_MissingArg;
  Rsh_Fir_array_arg_names1[41] = R_MissingArg;
  Rsh_Fir_array_arg_names1[42] = R_MissingArg;
  Rsh_Fir_array_arg_names1[43] = R_MissingArg;
  Rsh_Fir_array_arg_names1[44] = R_MissingArg;
  Rsh_Fir_array_arg_names1[45] = R_MissingArg;
  Rsh_Fir_array_arg_names1[46] = R_MissingArg;
  Rsh_Fir_array_arg_names1[47] = R_MissingArg;
  Rsh_Fir_array_arg_names1[48] = R_MissingArg;
  Rsh_Fir_array_arg_names1[49] = R_MissingArg;
  Rsh_Fir_array_arg_names1[50] = R_MissingArg;
  Rsh_Fir_array_arg_names1[51] = R_MissingArg;
  Rsh_Fir_array_arg_names1[52] = R_MissingArg;
  Rsh_Fir_array_arg_names1[53] = R_MissingArg;
  Rsh_Fir_array_arg_names1[54] = R_MissingArg;
  Rsh_Fir_array_arg_names1[55] = R_MissingArg;
  Rsh_Fir_array_arg_names1[56] = R_MissingArg;
  Rsh_Fir_array_arg_names1[57] = R_MissingArg;
  Rsh_Fir_array_arg_names1[58] = R_MissingArg;
  Rsh_Fir_array_arg_names1[59] = R_MissingArg;
  Rsh_Fir_array_arg_names1[60] = R_MissingArg;
  Rsh_Fir_array_arg_names1[61] = R_MissingArg;
  Rsh_Fir_array_arg_names1[62] = R_MissingArg;
  Rsh_Fir_array_arg_names1[63] = R_MissingArg;
  Rsh_Fir_array_arg_names1[64] = R_MissingArg;
  Rsh_Fir_array_arg_names1[65] = R_MissingArg;
  Rsh_Fir_array_arg_names1[66] = R_MissingArg;
  Rsh_Fir_array_arg_names1[67] = R_MissingArg;
  Rsh_Fir_array_arg_names1[68] = R_MissingArg;
  Rsh_Fir_array_arg_names1[69] = R_MissingArg;
  Rsh_Fir_array_arg_names1[70] = R_MissingArg;
  Rsh_Fir_array_arg_names1[71] = R_MissingArg;
  Rsh_Fir_array_arg_names1[72] = R_MissingArg;
  Rsh_Fir_array_arg_names1[73] = R_MissingArg;
  Rsh_Fir_array_arg_names1[74] = R_MissingArg;
  Rsh_Fir_array_arg_names1[75] = R_MissingArg;
  Rsh_Fir_array_arg_names1[76] = R_MissingArg;
  Rsh_Fir_array_arg_names1[77] = R_MissingArg;
  Rsh_Fir_array_arg_names1[78] = R_MissingArg;
  Rsh_Fir_array_arg_names1[79] = R_MissingArg;
  Rsh_Fir_array_arg_names1[80] = R_MissingArg;
  Rsh_Fir_array_arg_names1[81] = R_MissingArg;
  Rsh_Fir_array_arg_names1[82] = R_MissingArg;
  Rsh_Fir_array_arg_names1[83] = R_MissingArg;
  Rsh_Fir_array_arg_names1[84] = R_MissingArg;
  Rsh_Fir_array_arg_names1[85] = R_MissingArg;
  Rsh_Fir_array_arg_names1[86] = R_MissingArg;
  Rsh_Fir_array_arg_names1[87] = R_MissingArg;
  Rsh_Fir_array_arg_names1[88] = R_MissingArg;
  Rsh_Fir_array_arg_names1[89] = R_MissingArg;
  Rsh_Fir_array_arg_names1[90] = R_MissingArg;
  Rsh_Fir_array_arg_names1[91] = R_MissingArg;
  Rsh_Fir_array_arg_names1[92] = R_MissingArg;
  Rsh_Fir_array_arg_names1[93] = R_MissingArg;
  Rsh_Fir_array_arg_names1[94] = R_MissingArg;
  Rsh_Fir_array_arg_names1[95] = R_MissingArg;
  Rsh_Fir_array_arg_names1[96] = R_MissingArg;
  Rsh_Fir_array_arg_names1[97] = R_MissingArg;
  Rsh_Fir_array_arg_names1[98] = R_MissingArg;
  Rsh_Fir_array_arg_names1[99] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 100, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args4[100];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[4] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[5] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[6] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[8] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[9] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[10] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[11] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[12] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[13] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[14] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[15] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[16] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[18] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[19] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[20] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[21] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[22] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[23] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[24] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[25] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[26] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[27] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[28] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[29] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[30] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[31] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[32] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[33] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[34] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[35] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[36] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[37] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[38] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[39] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[40] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[41] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[42] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[43] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[44] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[45] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[46] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[47] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[48] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[49] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[50] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[51] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[52] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[53] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[54] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[55] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[56] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[57] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[58] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[59] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[60] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[61] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[62] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[63] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[64] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[65] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[66] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[67] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[68] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[69] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[70] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[71] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[72] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[73] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[74] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[75] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[76] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[77] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[78] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[79] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[80] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[81] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[82] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[83] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[84] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[85] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[86] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[87] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[88] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[89] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[90] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[91] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[92] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[93] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[94] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[95] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[96] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[97] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[98] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args4[99] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[100];
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
  Rsh_Fir_array_arg_names2[53] = R_MissingArg;
  Rsh_Fir_array_arg_names2[54] = R_MissingArg;
  Rsh_Fir_array_arg_names2[55] = R_MissingArg;
  Rsh_Fir_array_arg_names2[56] = R_MissingArg;
  Rsh_Fir_array_arg_names2[57] = R_MissingArg;
  Rsh_Fir_array_arg_names2[58] = R_MissingArg;
  Rsh_Fir_array_arg_names2[59] = R_MissingArg;
  Rsh_Fir_array_arg_names2[60] = R_MissingArg;
  Rsh_Fir_array_arg_names2[61] = R_MissingArg;
  Rsh_Fir_array_arg_names2[62] = R_MissingArg;
  Rsh_Fir_array_arg_names2[63] = R_MissingArg;
  Rsh_Fir_array_arg_names2[64] = R_MissingArg;
  Rsh_Fir_array_arg_names2[65] = R_MissingArg;
  Rsh_Fir_array_arg_names2[66] = R_MissingArg;
  Rsh_Fir_array_arg_names2[67] = R_MissingArg;
  Rsh_Fir_array_arg_names2[68] = R_MissingArg;
  Rsh_Fir_array_arg_names2[69] = R_MissingArg;
  Rsh_Fir_array_arg_names2[70] = R_MissingArg;
  Rsh_Fir_array_arg_names2[71] = R_MissingArg;
  Rsh_Fir_array_arg_names2[72] = R_MissingArg;
  Rsh_Fir_array_arg_names2[73] = R_MissingArg;
  Rsh_Fir_array_arg_names2[74] = R_MissingArg;
  Rsh_Fir_array_arg_names2[75] = R_MissingArg;
  Rsh_Fir_array_arg_names2[76] = R_MissingArg;
  Rsh_Fir_array_arg_names2[77] = R_MissingArg;
  Rsh_Fir_array_arg_names2[78] = R_MissingArg;
  Rsh_Fir_array_arg_names2[79] = R_MissingArg;
  Rsh_Fir_array_arg_names2[80] = R_MissingArg;
  Rsh_Fir_array_arg_names2[81] = R_MissingArg;
  Rsh_Fir_array_arg_names2[82] = R_MissingArg;
  Rsh_Fir_array_arg_names2[83] = R_MissingArg;
  Rsh_Fir_array_arg_names2[84] = R_MissingArg;
  Rsh_Fir_array_arg_names2[85] = R_MissingArg;
  Rsh_Fir_array_arg_names2[86] = R_MissingArg;
  Rsh_Fir_array_arg_names2[87] = R_MissingArg;
  Rsh_Fir_array_arg_names2[88] = R_MissingArg;
  Rsh_Fir_array_arg_names2[89] = R_MissingArg;
  Rsh_Fir_array_arg_names2[90] = R_MissingArg;
  Rsh_Fir_array_arg_names2[91] = R_MissingArg;
  Rsh_Fir_array_arg_names2[92] = R_MissingArg;
  Rsh_Fir_array_arg_names2[93] = R_MissingArg;
  Rsh_Fir_array_arg_names2[94] = R_MissingArg;
  Rsh_Fir_array_arg_names2[95] = R_MissingArg;
  Rsh_Fir_array_arg_names2[96] = R_MissingArg;
  Rsh_Fir_array_arg_names2[97] = R_MissingArg;
  Rsh_Fir_array_arg_names2[98] = R_MissingArg;
  Rsh_Fir_array_arg_names2[99] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 100, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
