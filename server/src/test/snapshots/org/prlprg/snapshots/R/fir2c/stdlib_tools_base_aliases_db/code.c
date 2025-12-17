#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3913899244_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3913899244_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3913899244_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3913899244_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3913899244_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3913899244_3(SEXP CCP, SEXP RHO);
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
  // st base_aliases_db = r
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
  SEXP Rsh_Fir_reg__get_standard_package_names;  // _get_standard_package_names
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_packages;  // packages
  SEXP Rsh_Fir_reg_packages1_;  // packages1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_packages2_;  // packages2
  SEXP Rsh_Fir_reg_packages3_;  // packages3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_aliases;  // aliases
  SEXP Rsh_Fir_reg_aliases1_;  // aliases1

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // _get_standard_package_names = ldf `.get_standard_package_names`
  Rsh_Fir_reg__get_standard_package_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn _get_standard_package_names()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__get_standard_package_names, 0, NULL, NULL, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // c = `is.object`(r)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c then L3() else L4(r)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3()
    goto L3_;
  } else {
  // L4(r)
    Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1;
    goto L4_;
  }

L2_:;
  // st packages = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

L3_:;
  // dr = tryDispatchBuiltin.1("$", r)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg_r2_ = Rsh_Fir_reg_dr;
    goto L4_;
  }

L4_:;
  // r3 = `$`(r2, <sym base>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L2_;

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   packages = ld packages;
  //   packages1 = force? packages;
  //   checkMissing(packages1);
  //   return packages1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // p1 = prom<V +>{
  //   r5 = clos inner3913899244;
  //   return r5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_1, CCP, RHO);
  // r7 = dyn lapply(p, p1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 9 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // st aliases = r7
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // packages2 = ld packages
  Rsh_Fir_reg_packages2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 11 [packages2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_packages2_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // packages3 = force? packages2
  Rsh_Fir_reg_packages3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packages2_);
  // checkMissing(packages3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_packages3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // l = ld aliases
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 14 [packages3, l, packages3]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_packages3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_packages3_;
  Rsh_Fir_deopt(14, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // r8 = dyn names__(l, NULL, packages3)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_packages3_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 16 [packages3, r8]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_packages3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // st aliases = r8
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // aliases = ld aliases
  Rsh_Fir_reg_aliases = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

D7_:;
  // deopt 18 [aliases]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_aliases;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // aliases1 = force? aliases
  Rsh_Fir_reg_aliases1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aliases);
  // checkMissing(aliases1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_aliases1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return aliases1
  return Rsh_Fir_reg_aliases1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // packages = ld packages
  Rsh_Fir_reg_packages = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // packages1 = force? packages
  Rsh_Fir_reg_packages1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packages);
  // checkMissing(packages1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_packages1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return packages1
  return Rsh_Fir_reg_packages1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO) {
  // r5 = clos inner3913899244
  Rsh_Fir_reg_r5_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3913899244_, RHO, CCP);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_function_inner3913899244_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3913899244 dynamic dispatch ([p])

  return Rsh_Fir_user_version_inner3913899244_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3913899244_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3913899244 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3913899244/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_Rd_db;  // Rd_db
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg__Library;  // _Library
  SEXP Rsh_Fir_reg__Library1_;  // _Library1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_lapply1;  // lapply
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg__Rd_get_metadata;  // _Rd_get_metadata
  SEXP Rsh_Fir_reg__Rd_get_metadata1_;  // _Rd_get_metadata1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_aliases1;  // aliases
  SEXP Rsh_Fir_reg_aliases1_1;  // aliases1

  // Bind parameters
  Rsh_Fir_reg_p1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st p = p
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_p1, RHO);
  (void)(Rsh_Fir_reg_p1);
  // Rd_db = ldf Rd_db
  Rsh_Fir_reg_Rd_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p3 = prom<V +>{
  //   p1 = ld p;
  //   p2 = force? p1;
  //   checkMissing(p2);
  //   return p2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_, CCP, RHO);
  // p4 = prom<V +>{
  //   _Library = ld `.Library`;
  //   _Library1 = force? _Library;
  //   checkMissing(_Library1);
  //   return _Library1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_1, CCP, RHO);
  // r2 = dyn Rd_db[, `lib.loc`](p3, p4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Rd_db, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L1_:;
  // st db = r2
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r2_1, RHO);
  (void)(Rsh_Fir_reg_r2_1);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p5 = prom<V +>{
  //   db = ld db;
  //   db1 = force? db;
  //   checkMissing(db1);
  //   return db1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_2, CCP, RHO);
  // p6 = prom<V +>{
  //   _Rd_get_metadata = ld `.Rd_get_metadata`;
  //   _Rd_get_metadata1 = force? _Rd_get_metadata;
  //   checkMissing(_Rd_get_metadata1);
  //   return _Rd_get_metadata1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_3, CCP, RHO);
  // r5 = dyn lapply(p5, p6, "alias")
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply1, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L3_:;
  // st aliases = r5
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r5_1, RHO);
  (void)(Rsh_Fir_reg_r5_1);
  // aliases = ld aliases
  Rsh_Fir_reg_aliases1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 [aliases]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_aliases1;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L4_:;
  // aliases1 = force? aliases
  Rsh_Fir_reg_aliases1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_aliases1);
  // checkMissing(aliases1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_aliases1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return aliases1
  return Rsh_Fir_reg_aliases1_1;
}
SEXP Rsh_Fir_user_promise_inner3913899244_(SEXP CCP, SEXP RHO) {
  // p1 = ld p
  Rsh_Fir_reg_p1_1 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // p2 = force? p1
  Rsh_Fir_reg_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p1_1);
  // checkMissing(p2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return p2
  return Rsh_Fir_reg_p2_;
}
SEXP Rsh_Fir_user_promise_inner3913899244_1(SEXP CCP, SEXP RHO) {
  // _Library = ld `.Library`
  Rsh_Fir_reg__Library = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // _Library1 = force? _Library
  Rsh_Fir_reg__Library1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Library);
  // checkMissing(_Library1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg__Library1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return _Library1
  return Rsh_Fir_reg__Library1_;
}
SEXP Rsh_Fir_user_promise_inner3913899244_2(SEXP CCP, SEXP RHO) {
  // db = ld db
  Rsh_Fir_reg_db = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return db1
  return Rsh_Fir_reg_db1_;
}
SEXP Rsh_Fir_user_promise_inner3913899244_3(SEXP CCP, SEXP RHO) {
  // _Rd_get_metadata = ld `.Rd_get_metadata`
  Rsh_Fir_reg__Rd_get_metadata = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // _Rd_get_metadata1 = force? _Rd_get_metadata
  Rsh_Fir_reg__Rd_get_metadata1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Rd_get_metadata);
  // checkMissing(_Rd_get_metadata1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg__Rd_get_metadata1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return _Rd_get_metadata1
  return Rsh_Fir_reg__Rd_get_metadata1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
