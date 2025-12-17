#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3298491467_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3298491467_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3298491467_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3298491467_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3298491467_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3298491467
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3298491467_, RHO, CCP);
  // st `.genericAssign` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner3298491467_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3298491467 dynamic dispatch ([f, fdef, methods, where, deflt])

  return Rsh_Fir_user_version_inner3298491467_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3298491467_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3298491467 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3298491467/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_fdef;  // fdef
  SEXP Rsh_Fir_reg_methods;  // methods
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_deflt;  // deflt
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_fdef1_;  // fdef1
  SEXP Rsh_Fir_reg_fdef2_;  // fdef2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_methods1_;  // methods1
  SEXP Rsh_Fir_reg_methods2_;  // methods2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_ev;  // ev
  SEXP Rsh_Fir_reg_ev1_;  // ev1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_f = PARAMS[0];
  Rsh_Fir_reg_fdef = PARAMS[1];
  Rsh_Fir_reg_methods = PARAMS[2];
  Rsh_Fir_reg_where = PARAMS[3];
  Rsh_Fir_reg_deflt = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // st fdef = fdef
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_fdef, RHO);
  (void)(Rsh_Fir_reg_fdef);
  // st methods = methods
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_methods, RHO);
  (void)(Rsh_Fir_reg_methods);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // st deflt = deflt
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_deflt, RHO);
  (void)(Rsh_Fir_reg_deflt);
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   fdef1 = ld fdef;
  //   fdef2 = force? fdef1;
  //   checkMissing(fdef2);
  //   return fdef2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3298491467_, CCP, RHO);
  // r1 = dyn environment(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st ev = r1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   methods1 = ld methods;
  //   methods2 = force? methods1;
  //   checkMissing(methods2);
  //   return methods2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3298491467_1, CCP, RHO);
  // p2 = prom<V +>{
  //   ev = ld ev;
  //   ev1 = force? ev;
  //   checkMissing(ev1);
  //   return ev1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3298491467_2, CCP, RHO);
  // r4 = dyn assign(".Methods", p1, p2)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner3298491467_(SEXP CCP, SEXP RHO) {
  // fdef1 = ld fdef
  Rsh_Fir_reg_fdef1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdef2 = force? fdef1
  Rsh_Fir_reg_fdef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef1_);
  // checkMissing(fdef2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_fdef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return fdef2
  return Rsh_Fir_reg_fdef2_;
}
SEXP Rsh_Fir_user_promise_inner3298491467_1(SEXP CCP, SEXP RHO) {
  // methods1 = ld methods
  Rsh_Fir_reg_methods1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // methods2 = force? methods1
  Rsh_Fir_reg_methods2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methods1_);
  // checkMissing(methods2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_methods2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return methods2
  return Rsh_Fir_reg_methods2_;
}
SEXP Rsh_Fir_user_promise_inner3298491467_2(SEXP CCP, SEXP RHO) {
  // ev = ld ev
  Rsh_Fir_reg_ev = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // ev1 = force? ev
  Rsh_Fir_reg_ev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ev);
  // checkMissing(ev1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_ev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return ev1
  return Rsh_Fir_reg_ev1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
