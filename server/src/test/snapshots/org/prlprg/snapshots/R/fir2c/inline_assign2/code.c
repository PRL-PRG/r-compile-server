#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (!TYPEOF(PARAMS_LIST) == VECSXP) Rsh_error("FIŘ expected a list for params");
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_main(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_f__;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // f__ = ldf `f<-`
  Rsh_Fir_reg_f__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 3 [1.0, l, 1.0]
  SEXP Rsh_Fir_array_deopt_stack[3];
  Rsh_Fir_array_deopt_stack[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack[2] = Rsh_const(CCP, 2);
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn f__(l, NULL, 1.0)
  SEXP Rsh_Fir_array_args[3];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f__, 3, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [1.0, r]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1_:;
  // st x = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 [1.0, l1, 1.0]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_const(CCP, 2);
  Rsh_Fir_deopt(10, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L2_:;
  // r1 = dyn __("pkg", "f<-")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 13 [1.0, l1, 1.0, r1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(13, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L3_:;
  // checkFun.0(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args2));
  // r2 = r1 as cls
  Rsh_Fir_reg_r2_ = Rsh_Fir_cast(Rsh_Fir_reg_r1_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r3 = dyn r2(l1, NULL, 1.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r2_, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 16 [1.0, r3]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L4_:;
  // st x = r3
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 2);
}
