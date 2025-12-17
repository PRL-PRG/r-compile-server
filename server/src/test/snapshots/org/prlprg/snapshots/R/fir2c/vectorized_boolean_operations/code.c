#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_r6_;  // r6

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // st y = r4
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L2_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r2 = dyn c()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 0, NULL, NULL, CCP, RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base()
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r;
  goto L0_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L5_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r5 = dyn c1()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 0, NULL, NULL, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L6_:;
  // r3 = dyn base1()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D1_:;
  // deopt 8 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

D2_:;
  // deopt 10 [x]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 11 [x1, y]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // r6 = `&&`(x1, y1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
