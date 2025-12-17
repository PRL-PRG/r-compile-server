#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1082141030_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1082141030_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1082141030_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1082141030_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1082141030_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner1082141030
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1082141030_, RHO, CCP);
  // st `[[<-.hashtab` = r
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
SEXP Rsh_Fir_user_function_inner1082141030_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1082141030 dynamic dispatch ([h, key, `...`, value])

  return Rsh_Fir_user_version_inner1082141030_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1082141030_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1082141030 version 0 (*, *, dots, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1082141030/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_h;  // h
  SEXP Rsh_Fir_reg_key;  // key
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_sethash;  // sethash
  SEXP Rsh_Fir_reg_h1_;  // h1
  SEXP Rsh_Fir_reg_h2_;  // h2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_key1_;  // key1
  SEXP Rsh_Fir_reg_key2_;  // key2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_h3_;  // h3
  SEXP Rsh_Fir_reg_h4_;  // h4

  // Bind parameters
  Rsh_Fir_reg_h = PARAMS[0];
  Rsh_Fir_reg_key = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_value = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st h = h
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_h, RHO);
  (void)(Rsh_Fir_reg_h);
  // st key = key
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_key, RHO);
  (void)(Rsh_Fir_reg_key);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sethash = ldf sethash
  Rsh_Fir_reg_sethash = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   h1 = ld h;
  //   h2 = force? h1;
  //   checkMissing(h2);
  //   return h2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1082141030_, CCP, RHO);
  // p1 = prom<V +>{
  //   key1 = ld key;
  //   key2 = force? key1;
  //   checkMissing(key2);
  //   return key2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1082141030_1, CCP, RHO);
  // p2 = prom<V +>{
  //   value1 = ld value;
  //   value2 = force? value1;
  //   checkMissing(value2);
  //   return value2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1082141030_2, CCP, RHO);
  // r3 = dyn sethash(p, p1, p2)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sethash, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // h3 = ld h
  Rsh_Fir_reg_h3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 6 [h3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_h3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // h4 = force? h3
  Rsh_Fir_reg_h4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h3_);
  // checkMissing(h4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_h4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return h4
  return Rsh_Fir_reg_h4_;
}
SEXP Rsh_Fir_user_promise_inner1082141030_(SEXP CCP, SEXP RHO) {
  // h1 = ld h
  Rsh_Fir_reg_h1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // h2 = force? h1
  Rsh_Fir_reg_h2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h1_);
  // checkMissing(h2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_h2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return h2
  return Rsh_Fir_reg_h2_;
}
SEXP Rsh_Fir_user_promise_inner1082141030_1(SEXP CCP, SEXP RHO) {
  // key1 = ld key
  Rsh_Fir_reg_key1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // key2 = force? key1
  Rsh_Fir_reg_key2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_key1_);
  // checkMissing(key2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_key2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return key2
  return Rsh_Fir_reg_key2_;
}
SEXP Rsh_Fir_user_promise_inner1082141030_2(SEXP CCP, SEXP RHO) {
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return value2
  return Rsh_Fir_reg_value2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
