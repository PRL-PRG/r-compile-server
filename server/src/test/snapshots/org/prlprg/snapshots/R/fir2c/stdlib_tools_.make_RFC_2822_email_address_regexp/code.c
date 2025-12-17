#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner2708337952
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st `.make_RFC_2822_email_address_regexp` = r
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
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_ASCII_letters_and_digits;  // ASCII_letters_and_digits
  SEXP Rsh_Fir_reg_ASCII_letters_and_digits1_;  // ASCII_letters_and_digits1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sprintf1_;  // sprintf1
  SEXP Rsh_Fir_reg_ASCII_letters_and_digits2_;  // ASCII_letters_and_digits2
  SEXP Rsh_Fir_reg_ASCII_letters_and_digits3_;  // ASCII_letters_and_digits3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sprintf2_;  // sprintf2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_d2_;  // d2
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r8_;  // r8

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ASCII_letters_and_digits = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   ASCII_letters_and_digits = ld ASCII_letters_and_digits;
  //   ASCII_letters_and_digits1 = force? ASCII_letters_and_digits;
  //   checkMissing(ASCII_letters_and_digits1);
  //   return ASCII_letters_and_digits1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // r1 = dyn sprintf("[%s%s]", p, "!#$%*/?|^{}`~&'+=_-")
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st l = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sprintf1 = ldf sprintf
  Rsh_Fir_reg_sprintf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   ASCII_letters_and_digits2 = ld ASCII_letters_and_digits;
  //   ASCII_letters_and_digits3 = force? ASCII_letters_and_digits2;
  //   checkMissing(ASCII_letters_and_digits3);
  //   return ASCII_letters_and_digits3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_1, CCP, RHO);
  // r3 = dyn sprintf1("[%s%s]", p1, "-")
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf1_, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 15 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // st d = r3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sprintf2 = ldf sprintf
  Rsh_Fir_reg_sprintf2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   l = ld l;
  //   l1 = force? l;
  //   checkMissing(l1);
  //   return l1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_2, CCP, RHO);
  // p3 = prom<V +>{
  //   l2 = ld l;
  //   l3 = force? l2;
  //   checkMissing(l3);
  //   return l3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_3, CCP, RHO);
  // p4 = prom<V +>{
  //   d = ld d;
  //   d1 = force? d;
  //   checkMissing(d1);
  //   return d1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_4, CCP, RHO);
  // p5 = prom<V +>{
  //   d2 = ld d;
  //   d3 = force? d2;
  //   checkMissing(d3);
  //   return d3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_5, CCP, RHO);
  // r8 = dyn sprintf2("(\\\".+\\\"|(%s+\\.)*%s+)@(%s+\\.)*%s+", p2, p3, p4, p5)
  SEXP Rsh_Fir_array_args8[5];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args8[3] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args8[4] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names2[5];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf2_, 5, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 24 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // ASCII_letters_and_digits = ld ASCII_letters_and_digits
  Rsh_Fir_reg_ASCII_letters_and_digits = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // ASCII_letters_and_digits1 = force? ASCII_letters_and_digits
  Rsh_Fir_reg_ASCII_letters_and_digits1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ASCII_letters_and_digits);
  // checkMissing(ASCII_letters_and_digits1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_ASCII_letters_and_digits1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return ASCII_letters_and_digits1
  return Rsh_Fir_reg_ASCII_letters_and_digits1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO) {
  // ASCII_letters_and_digits2 = ld ASCII_letters_and_digits
  Rsh_Fir_reg_ASCII_letters_and_digits2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // ASCII_letters_and_digits3 = force? ASCII_letters_and_digits2
  Rsh_Fir_reg_ASCII_letters_and_digits3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ASCII_letters_and_digits2_);
  // checkMissing(ASCII_letters_and_digits3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_ASCII_letters_and_digits3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return ASCII_letters_and_digits3
  return Rsh_Fir_reg_ASCII_letters_and_digits3_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO) {
  // l = ld l
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // l1 = force? l
  Rsh_Fir_reg_l1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l);
  // checkMissing(l1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return l1
  return Rsh_Fir_reg_l1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_3(SEXP CCP, SEXP RHO) {
  // l2 = ld l
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // l3 = force? l2
  Rsh_Fir_reg_l3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l2_);
  // checkMissing(l3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return l3
  return Rsh_Fir_reg_l3_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_4(SEXP CCP, SEXP RHO) {
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return d1
  return Rsh_Fir_reg_d1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_5(SEXP CCP, SEXP RHO) {
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return d3
  return Rsh_Fir_reg_d3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
