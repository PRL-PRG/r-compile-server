#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1985311593_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1985311593_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1985311593_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_serialize;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_unserialize;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1985311593
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1985311593_, RHO, CCP);
  // st serialize = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // serialize = ldf serialize
  Rsh_Fir_reg_serialize = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   list = ldf list in base;
  //   r3 = dyn list(1.0, 2.0, 3.0);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(1.0, 2.0, 3.0);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn serialize(p, NULL)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_serialize, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st x = r5
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // unserialize = ldf unserialize
  Rsh_Fir_reg_unserialize = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r7 = dyn unserialize(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unserialize, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
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
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn list(1.0, 2.0, 3.0)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(1.0, 2.0, 3.0)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_function_inner1985311593_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1985311593 dynamic dispatch ([object, connection, ascii, xdr, version, refhook])

  return Rsh_Fir_user_version_inner1985311593_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1985311593_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1985311593 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1985311593/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_connection;
  SEXP Rsh_Fir_reg_ascii;
  SEXP Rsh_Fir_reg_xdr;
  SEXP Rsh_Fir_reg_version;
  SEXP Rsh_Fir_reg_refhook;
  SEXP Rsh_Fir_reg_ascii_isMissing;
  SEXP Rsh_Fir_reg_ascii_orDefault;
  SEXP Rsh_Fir_reg_xdr_isMissing;
  SEXP Rsh_Fir_reg_xdr_orDefault;
  SEXP Rsh_Fir_reg_version_isMissing;
  SEXP Rsh_Fir_reg_version_orDefault;
  SEXP Rsh_Fir_reg_refhook_isMissing;
  SEXP Rsh_Fir_reg_refhook_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_connection1_;
  SEXP Rsh_Fir_reg_connection2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_connection3_;
  SEXP Rsh_Fir_reg_connection4_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_summary;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_ascii1_;
  SEXP Rsh_Fir_reg_ascii2_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_connection7_;
  SEXP Rsh_Fir_reg_connection8_;
  SEXP Rsh_Fir_reg_inherits1_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_object1_;
  SEXP Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_reg_connection9_;
  SEXP Rsh_Fir_reg_connection10_;
  SEXP Rsh_Fir_reg_xdr1_;
  SEXP Rsh_Fir_reg_xdr2_;
  SEXP Rsh_Fir_reg_version1_;
  SEXP Rsh_Fir_reg_version2_;
  SEXP Rsh_Fir_reg_refhook1_;
  SEXP Rsh_Fir_reg_refhook2_;
  SEXP Rsh_Fir_reg_serializeb;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_ascii3_;
  SEXP Rsh_Fir_reg_ascii4_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_ascii5_;
  SEXP Rsh_Fir_reg_ascii6_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_xdr3_;
  SEXP Rsh_Fir_reg_xdr4_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_object3_;
  SEXP Rsh_Fir_reg_object4_;
  SEXP Rsh_Fir_reg_connection11_;
  SEXP Rsh_Fir_reg_connection12_;
  SEXP Rsh_Fir_reg_type;
  SEXP Rsh_Fir_reg_type1_;
  SEXP Rsh_Fir_reg_version3_;
  SEXP Rsh_Fir_reg_version4_;
  SEXP Rsh_Fir_reg_refhook3_;
  SEXP Rsh_Fir_reg_refhook4_;
  SEXP Rsh_Fir_reg_serialize1;
  SEXP Rsh_Fir_reg_r34_;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_connection = PARAMS[1];
  Rsh_Fir_reg_ascii = PARAMS[2];
  Rsh_Fir_reg_xdr = PARAMS[3];
  Rsh_Fir_reg_version = PARAMS[4];
  Rsh_Fir_reg_refhook = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st connection = connection
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_connection, RHO);
  (void)(Rsh_Fir_reg_connection);
  // ascii_isMissing = missing.0(ascii)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ascii;
  Rsh_Fir_reg_ascii_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if ascii_isMissing then L0(FALSE) else L0(ascii)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ascii_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_ascii_orDefault = Rsh_const(CCP, 10);
    goto L0_;
  } else {
  // L0(ascii)
    Rsh_Fir_reg_ascii_orDefault = Rsh_Fir_reg_ascii;
    goto L0_;
  }

L0_:;
  // st ascii = ascii_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_ascii_orDefault, RHO);
  (void)(Rsh_Fir_reg_ascii_orDefault);
  // xdr_isMissing = missing.0(xdr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_xdr;
  Rsh_Fir_reg_xdr_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if xdr_isMissing then L1(TRUE) else L1(xdr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xdr_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_xdr_orDefault = Rsh_const(CCP, 12);
    goto L1_;
  } else {
  // L1(xdr)
    Rsh_Fir_reg_xdr_orDefault = Rsh_Fir_reg_xdr;
    goto L1_;
  }

L1_:;
  // st xdr = xdr_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_xdr_orDefault, RHO);
  (void)(Rsh_Fir_reg_xdr_orDefault);
  // version_isMissing = missing.0(version)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_version;
  Rsh_Fir_reg_version_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if version_isMissing then L2(NULL) else L2(version)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_version_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_version_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(version)
    Rsh_Fir_reg_version_orDefault = Rsh_Fir_reg_version;
    goto L2_;
  }

L2_:;
  // st version = version_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_version_orDefault, RHO);
  (void)(Rsh_Fir_reg_version_orDefault);
  // refhook_isMissing = missing.0(refhook)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_refhook;
  Rsh_Fir_reg_refhook_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if refhook_isMissing then L3(NULL) else L3(refhook)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_refhook_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_refhook_orDefault = Rsh_const(CCP, 5);
    goto L3_;
  } else {
  // L3(refhook)
    Rsh_Fir_reg_refhook_orDefault = Rsh_Fir_reg_refhook;
    goto L3_;
  }

L3_:;
  // st refhook = refhook_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_refhook_orDefault, RHO);
  (void)(Rsh_Fir_reg_refhook_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L4_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args11);
  // c1 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c1 then L26() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L5()
    goto L5_;
  }

L23_:;
  // connection1 = ld connection
  Rsh_Fir_reg_connection1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L25() else D0()
  // L25()
  goto L25_;

L24_:;
  // r = dyn base(<sym connection>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(r)
  // L4(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L4_;

D0_:;
  // deopt 1 [connection1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_connection1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // ascii1 = ld ascii
  Rsh_Fir_reg_ascii1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L46() else D7()
  // L46()
  goto L46_;

L25_:;
  // connection2 = force? connection1
  Rsh_Fir_reg_connection2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_connection1_);
  // checkMissing(connection2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_connection2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c = `==`(connection2, NULL)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_connection2_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args15);
  // goto L4(c)
  // L4(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c;
  goto L4_;

L26_:;
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

D7_:;
  // deopt 35 [ascii1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_ascii1_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args17);
  // c2 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c2 then L31() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L31()
    goto L31_;
  } else {
  // L7()
    goto L7_;
  }

L27_:;
  // connection3 = ld connection
  Rsh_Fir_reg_connection3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L29() else D1()
  // L29()
  goto L29_;

L28_:;
  // r3 = dyn base1(<sym connection>, "connection")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r3)
  // L6(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_1;
  goto L6_;

L46_:;
  // ascii2 = force? ascii1
  Rsh_Fir_reg_ascii2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ascii1_);
  // checkMissing(ascii2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ascii2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r20 = `!`(ascii2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ascii2_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args21);
  // c5 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // if c5 then L47() else L13(c5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L47()
    goto L47_;
  } else {
  // L13(c5)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
    goto L13_;
  }

D1_:;
  // deopt 7 [connection3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_connection3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard2 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L13_:;
  // c14 = `as.logical`(c7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c14 then L53() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L53()
    goto L53_;
  } else {
  // L15()
    goto L15_;
  }

L29_:;
  // connection4 = force? connection3
  Rsh_Fir_reg_connection4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_connection3_);
  // checkMissing(connection4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_connection4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r5 = dyn inherits(connection4, "connection", FALSE)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_connection4_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L30() else D2()
  // L30()
  goto L30_;

L31_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L32() else D3()
  // L32()
  goto L32_;

L47_:;
  // sym3 = ldf inherits
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf inherits in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

D2_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // c3 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args28);
  // if c3 then L37() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L37()
    goto L37_;
  } else {
  // L10()
    goto L10_;
  }

L14_:;
  // c11 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // c12 = `&&`(c10, c11)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args30);
  // goto L13(c12)
  // L13(c12)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c12_;
  goto L13_;

L15_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard5 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L30_:;
  // goto L6(r5)
  // L6(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_1;
  goto L6_;

L32_:;
  // r7 = dyn stop("'connection' must be a connection")
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L33() else D4()
  // L33()
  goto L33_;

L35_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r11 = dyn missing(<sym ascii>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(r11)
  // L9(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L9_;

L36_:;
  // r9 = dyn base2(<sym ascii>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L9(r9)
  // L9(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L9_;

L48_:;
  // connection7 = ld connection
  Rsh_Fir_reg_connection7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L50() else D8()
  // L50()
  goto L50_;

L49_:;
  // r21 = dyn base3(<sym connection>, "sockconn")
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L14(c5, r21)
  // L14(c5, r21)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L14_;

L53_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard4 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

D4_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 40 [c5, connection7]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_connection7_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L11(NULL)
  // L11(NULL)
  Rsh_Fir_reg_r18_ = Rsh_const(CCP, 5);
  goto L11_;

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;

L17_:;
  // c15 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args37);
  // if c15 then L67() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L67()
    goto L67_;
  } else {
  // L18()
    goto L18_;
  }

L33_:;
  // goto L8()
  // L8()
  goto L8_;

L37_:;
  // summary = ldf summary
  Rsh_Fir_reg_summary = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

L50_:;
  // connection8 = force? connection7
  Rsh_Fir_reg_connection8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_connection7_);
  // checkMissing(connection8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_connection8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r23 = dyn inherits1(connection8, "sockconn", FALSE)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_connection8_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L51() else D9()
  // L51()
  goto L51_;

L54_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L56() else D10()
  // L56()
  goto L56_;

L55_:;
  // r24 = dyn base4(<lang serializeb(object, connection, xdr, version, refhook)>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L16(r24)
  // L16(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L16_;

L63_:;
  // ascii3 = ld ascii
  Rsh_Fir_reg_ascii3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L65() else D16()
  // L65()
  goto L65_;

L64_:;
  // r27 = dyn base5(<sym ascii>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L17(r27)
  // L17(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L17_;

D5_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 45 [c5, r23]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 49 [object1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 63 [ascii3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_ascii3_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L18_:;
  // ascii5 = ld ascii
  Rsh_Fir_reg_ascii5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L69() else D18()
  // L69()
  goto L69_;

L19_:;
  // st type = r30
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // sym6 = ldf `.Internal`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base6 = ldf `.Internal` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard6 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L38_:;
  // p = prom<V +>{
  //   connection5 = ld connection;
  //   connection6 = force? connection5;
  //   checkMissing(connection6);
  //   return connection6;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1985311593_, 0, NULL, CCP, RHO);
  // r13 = dyn summary(p)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

L51_:;
  // goto L14(c5, r23)
  // L14(c5, r23)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L14_;

L56_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // connection9 = ld connection
  Rsh_Fir_reg_connection9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L57() else D11()
  // L57()
  goto L57_;

L65_:;
  // ascii4 = force? ascii3
  Rsh_Fir_reg_ascii4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ascii3_);
  // checkMissing(ascii4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_ascii4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r29 = dyn is_na(ascii4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_ascii4_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L66() else D17()
  // L66()
  goto L66_;

L67_:;
  // goto L19(2)
  // L19(2)
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 28);
  goto L19_;

D6_:;
  // deopt 26 [r13]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 51 [connection9]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_connection9_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 66 [r29]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 69 [ascii5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_ascii5_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r33
  return Rsh_Fir_reg_r33_;

L39_:;
  // c4 = `is.object`(r13)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args48);
  // if c4 then L41() else L42(r13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L41()
    goto L41_;
  } else {
  // L42(r13)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    goto L42_;
  }

L57_:;
  // connection10 = force? connection9
  Rsh_Fir_reg_connection10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_connection9_);
  // checkMissing(connection10)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_connection10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // xdr1 = ld xdr
  Rsh_Fir_reg_xdr1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L58() else D12()
  // L58()
  goto L58_;

L66_:;
  // goto L17(r29)
  // L17(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L17_;

L69_:;
  // ascii6 = force? ascii5
  Rsh_Fir_reg_ascii6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ascii5_);
  // checkMissing(ascii6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_ascii6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c16 = `as.logical`(ascii6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_ascii6_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // if c16 then L70() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L70()
    goto L70_;
  } else {
  // L20()
    goto L20_;
  }

L75_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L77() else D20()
  // L77()
  goto L77_;

L76_:;
  // r32 = dyn base6(<lang serialize(object, connection, type, version, refhook)>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L22(r32)
  // L22(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L22_;

D12_:;
  // deopt 53 [xdr1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_xdr1_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 83 [object3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L20_:;
  // xdr3 = ld xdr
  Rsh_Fir_reg_xdr3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L72() else D19()
  // L72()
  goto L72_;

L40_:;
  // r17 = `==`(dx1, "text")
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args53);
  // st ascii = r17
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // goto L11(r17)
  // L11(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L11_;

L41_:;
  // dr = tryDispatchBuiltin.1("$", r13)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc then L43() else L42(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L43()
    goto L43_;
  } else {
  // L42(dr)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_dr;
    goto L42_;
  }

L42_:;
  // r16 = `$`(r15, <sym text>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args56);
  // goto L40(r16)
  // L40(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L40_;

L58_:;
  // xdr2 = force? xdr1
  Rsh_Fir_reg_xdr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xdr1_);
  // checkMissing(xdr2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_xdr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // version1 = ld version
  Rsh_Fir_reg_version1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L59() else D13()
  // L59()
  goto L59_;

L70_:;
  // goto L19(1)
  // L19(1)
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 33);
  goto L19_;

L77_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // connection11 = ld connection
  Rsh_Fir_reg_connection11_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L78() else D21()
  // L78()
  goto L78_;

D13_:;
  // deopt 55 [version1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_version1_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 73 [xdr3]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_xdr3_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 85 [connection11]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_connection11_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L43_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L40(dx)
  // L40(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L40_;

L59_:;
  // version2 = force? version1
  Rsh_Fir_reg_version2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_version1_);
  // checkMissing(version2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_version2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // refhook1 = ld refhook
  Rsh_Fir_reg_refhook1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L60() else D14()
  // L60()
  goto L60_;

L72_:;
  // xdr4 = force? xdr3
  Rsh_Fir_reg_xdr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xdr3_);
  // checkMissing(xdr4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_xdr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r31 = `!`(xdr4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_xdr4_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args62);
  // c17 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // if c17 then L73() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L73()
    goto L73_;
  } else {
  // L21()
    goto L21_;
  }

L78_:;
  // connection12 = force? connection11
  Rsh_Fir_reg_connection12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_connection11_);
  // checkMissing(connection12)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_connection12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // type = ld type
  Rsh_Fir_reg_type = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L79() else D22()
  // L79()
  goto L79_;

D14_:;
  // deopt 57 [refhook1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_refhook1_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 87 [type]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_type;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L19(0)
  // L19(0)
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 34);
  goto L19_;

L60_:;
  // refhook2 = force? refhook1
  Rsh_Fir_reg_refhook2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_refhook1_);
  // checkMissing(refhook2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_refhook2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // serializeb = ldf serializeb in base
  Rsh_Fir_reg_serializeb = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r26 = dyn serializeb(object2, connection10, xdr2, version2, refhook2)
  SEXP Rsh_Fir_array_args66[5];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_connection10_;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_xdr2_;
  Rsh_Fir_array_args66[3] = Rsh_Fir_reg_version2_;
  Rsh_Fir_array_args66[4] = Rsh_Fir_reg_refhook2_;
  SEXP Rsh_Fir_array_arg_names17[5];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_serializeb, 5, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L61() else D15()
  // L61()
  goto L61_;

L73_:;
  // goto L19(3)
  // L19(3)
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 36);
  goto L19_;

L79_:;
  // type1 = force? type
  Rsh_Fir_reg_type1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type);
  // checkMissing(type1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_type1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // version3 = ld version
  Rsh_Fir_reg_version3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L80() else D23()
  // L80()
  goto L80_;

D15_:;
  // deopt 60 [r26]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 89 [version3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_version3_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L16(r26)
  // L16(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L16_;

L80_:;
  // version4 = force? version3
  Rsh_Fir_reg_version4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_version3_);
  // checkMissing(version4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_version4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // refhook3 = ld refhook
  Rsh_Fir_reg_refhook3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L81() else D24()
  // L81()
  goto L81_;

D24_:;
  // deopt 91 [refhook3]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_refhook3_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L81_:;
  // refhook4 = force? refhook3
  Rsh_Fir_reg_refhook4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_refhook3_);
  // checkMissing(refhook4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_refhook4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // serialize = ldf serialize in base
  Rsh_Fir_reg_serialize1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r34 = dyn serialize(object4, connection12, type1, version4, refhook4)
  SEXP Rsh_Fir_array_args70[5];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_connection12_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_type1_;
  Rsh_Fir_array_args70[3] = Rsh_Fir_reg_version4_;
  Rsh_Fir_array_args70[4] = Rsh_Fir_reg_refhook4_;
  SEXP Rsh_Fir_array_arg_names18[5];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_serialize1, 5, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L82() else D25()
  // L82()
  goto L82_;

D25_:;
  // deopt 94 [r34]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L22(r34)
  // L22(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L22_;
}
SEXP Rsh_Fir_user_promise_inner1985311593_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_connection5_;
  SEXP Rsh_Fir_reg_connection6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1985311593/0: expected 0, got %d", NCAPTURES);

  // connection5 = ld connection
  Rsh_Fir_reg_connection5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // connection6 = force? connection5
  Rsh_Fir_reg_connection6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_connection5_);
  // checkMissing(connection6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_connection6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return connection6
  return Rsh_Fir_reg_connection6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
