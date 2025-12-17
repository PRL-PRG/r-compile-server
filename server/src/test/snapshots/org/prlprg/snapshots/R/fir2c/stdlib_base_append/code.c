#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3592135632_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3592135632_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3592135632_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_append;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r3_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3592135632
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3592135632_, RHO, CCP);
  // st append = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // append = ldf append
  Rsh_Fir_reg_append = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3, 4, 5>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   return <int 0, 1>;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r3 = dyn append[, , after](p, p1, 3.0)
  SEXP Rsh_Fir_array_args[3];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_append, 3, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5>
  return Rsh_const(CCP, 1);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 0, 1>
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_function_inner3592135632_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3592135632 dynamic dispatch ([x, values, after])

  return Rsh_Fir_user_version_inner3592135632_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3592135632_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3592135632 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3592135632/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_values;
  SEXP Rsh_Fir_reg_after;
  SEXP Rsh_Fir_reg_after_isMissing;
  SEXP Rsh_Fir_reg_after_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_after1_;
  SEXP Rsh_Fir_reg_after2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_values1_;
  SEXP Rsh_Fir_reg_values2_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_after3_;
  SEXP Rsh_Fir_reg_after4_;
  SEXP Rsh_Fir_reg_lengx;
  SEXP Rsh_Fir_reg_lengx1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_values3_;
  SEXP Rsh_Fir_reg_values4_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_after5_;
  SEXP Rsh_Fir_reg_after6_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_values5_;
  SEXP Rsh_Fir_reg_values6_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_after7_;
  SEXP Rsh_Fir_reg_after8_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_lengx2_;
  SEXP Rsh_Fir_reg_lengx3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r22_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_values = PARAMS[1];
  Rsh_Fir_reg_after = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st values = values
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_values, RHO);
  (void)(Rsh_Fir_reg_values);
  // after_isMissing = missing.0(after)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_after;
  Rsh_Fir_reg_after_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if after_isMissing then L0() else L1(after)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_after_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(after)
    Rsh_Fir_reg_after_orDefault = Rsh_Fir_reg_after;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   length = ldf length in base;
  //   r2 = dyn length(x2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3592135632_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_after_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st after = after_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_after_orDefault, RHO);
  (void)(Rsh_Fir_reg_after_orDefault);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L2_:;
  // st lengx = r5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // after1 = ld after
  Rsh_Fir_reg_after1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L10_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r4 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D0_:;
  // deopt 2 [x3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 7 [after1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_after1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r6 = dyn length1(x4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L14_:;
  // after2 = force? after1
  Rsh_Fir_reg_after2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_after1_);
  // checkMissing(after2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_after2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r7 = `!`(after2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_after2_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args11);
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c then L15() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L3()
    goto L3_;
  }

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L3_:;
  // after3 = ld after
  Rsh_Fir_reg_after3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

L13_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L15_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

D6_:;
  // deopt 18 [after3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_after3_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;

L16_:;
  // values1 = ld values
  Rsh_Fir_reg_values1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L17_:;
  // r8 = dyn base2(<sym values>, <sym x>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L4_;

L22_:;
  // after4 = force? after3
  Rsh_Fir_reg_after4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_after3_);
  // checkMissing(after4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_after4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // lengx = ld lengx
  Rsh_Fir_reg_lengx = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

D3_:;
  // deopt 12 [values1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_values1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 19 [after4, lengx]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_after4_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_lengx;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // values2 = force? values1
  Rsh_Fir_reg_values2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values1_);
  // checkMissing(values2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_values2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L23_:;
  // lengx1 = force? lengx
  Rsh_Fir_reg_lengx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lengx);
  // checkMissing(lengx1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_lengx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r11 = `>=`(after4, lengx1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_after4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_lengx1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args18);
  // c2 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // if c2 then L24() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L24()
    goto L24_;
  } else {
  // L5()
    goto L5_;
  }

D4_:;
  // deopt 14 [x5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L5_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard4 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L19_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r10 = dyn c1(values2, x6)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_values2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

L24_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

D5_:;
  // deopt 17 [r10]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;

L20_:;
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L4_;

L25_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

L26_:;
  // r12 = dyn base3(<sym x>, <sym values>)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L6_;

L31_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L33() else D11()
  // L33()
  goto L33_;

L32_:;
  // r15 = dyn base4(<lang `[`(x, `:`(1, after))>, <sym values>, <lang `[`(x, `:`(`(`(`+`(after, 1)), lengx))>)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L7_;

D8_:;
  // deopt 24 [x7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 32 [x9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L27_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // values3 = ld values
  Rsh_Fir_reg_values3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

L33_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(x10)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args28);
  // if c4 then L34() else L35(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L34()
    goto L34_;
  } else {
  // L35(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L35_;
  }

D9_:;
  // deopt 26 [values3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_values3_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L8_:;
  // values5 = ld values
  Rsh_Fir_reg_values5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L38() else D13()
  // L38()
  goto L38_;

L28_:;
  // values4 = force? values3
  Rsh_Fir_reg_values4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values3_);
  // checkMissing(values4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_values4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r14 = dyn c3(x8, values4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_values4_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L34_:;
  // dr = tryDispatchBuiltin.1("[", x10)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc then L36() else L35(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L36()
    goto L36_;
  } else {
  // L35(dr)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr;
    goto L35_;
  }

L35_:;
  // after5 = ld after
  Rsh_Fir_reg_after5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D10_:;
  // deopt 29 [r14]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 35 [x12, 1, after5]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_after5_;
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 39 [values5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_values5_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L6_;

L36_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

L37_:;
  // after6 = force? after5
  Rsh_Fir_reg_after6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_after5_);
  // checkMissing(after6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_after6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r17 = `:`(1, after6)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_after6_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args35);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r18 = dyn __(x12, r17)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L8_;

L38_:;
  // values6 = force? values5
  Rsh_Fir_reg_values6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values5_);
  // checkMissing(values6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_values6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L39() else D14()
  // L39()
  goto L39_;

D14_:;
  // deopt 41 [x13]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L39_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(x14)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args39);
  // if c5 then L40() else L41(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L40()
    goto L40_;
  } else {
  // L41(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L41_;
  }

L9_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r22 = dyn c6(dx1, values6, dx3)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_values6_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L45() else D17()
  // L45()
  goto L45_;

L40_:;
  // dr2 = tryDispatchBuiltin.1("[", x14)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc1 then L42() else L41(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L42()
    goto L42_;
  } else {
  // L41(dr2)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr2_;
    goto L41_;
  }

L41_:;
  // after7 = ld after
  Rsh_Fir_reg_after7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L43() else D15()
  // L43()
  goto L43_;

D15_:;
  // deopt 43 [x16, after7]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_after7_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 51 [r22]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L42_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

L43_:;
  // after8 = force? after7
  Rsh_Fir_reg_after8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_after7_);
  // checkMissing(after8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_after8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r19 = `+`(after8, 1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_after8_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args45);
  // lengx2 = ld lengx
  Rsh_Fir_reg_lengx2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L44() else D16()
  // L44()
  goto L44_;

L45_:;
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r22_;
  goto L7_;

D16_:;
  // deopt 46 [x16, r19, lengx2]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_lengx2_;
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L44_:;
  // lengx3 = force? lengx2
  Rsh_Fir_reg_lengx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lengx2_);
  // checkMissing(lengx3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_lengx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // r20 = `:`(r19, lengx3)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_lengx3_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args47);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r21 = dyn __1(x16, r20)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(r21)
  // L9(r21)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r21_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner3592135632_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3592135632/0: expected 0, got %d", NCAPTURES);

  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf length in base
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
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn length(x2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
