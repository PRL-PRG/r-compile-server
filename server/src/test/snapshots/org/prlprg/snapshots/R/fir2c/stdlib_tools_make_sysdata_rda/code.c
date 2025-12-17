#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO);
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
  // st make_sysdata_rda = r
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
  SEXP Rsh_Fir_reg_get_IANA_URI_scheme_db;  // get_IANA_URI_scheme_db
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_get_IANA_HTTP_status_code_db;  // get_IANA_HTTP_status_code_db
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_IANA_HTTP_status_code_db;  // IANA_HTTP_status_code_db
  SEXP Rsh_Fir_reg_IANA_HTTP_status_code_db1_;  // IANA_HTTP_status_code_db1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_IANA_HTTP_status_code_db3_;  // IANA_HTTP_status_code_db3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_IANA_HTTP_status_code_db4_;  // IANA_HTTP_status_code_db4
  SEXP Rsh_Fir_reg_IANA_HTTP_status_code_db5_;  // IANA_HTTP_status_code_db5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_IANA_HTTP_status_code_db7_;  // IANA_HTTP_status_code_db7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_save;  // save
  SEXP Rsh_Fir_reg_IANA_URI_scheme_db;  // IANA_URI_scheme_db
  SEXP Rsh_Fir_reg_IANA_URI_scheme_db1_;  // IANA_URI_scheme_db1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_IANA_HTTP_status_code_db8_;  // IANA_HTTP_status_code_db8
  SEXP Rsh_Fir_reg_IANA_HTTP_status_code_db9_;  // IANA_HTTP_status_code_db9
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_table_of_HTTP_status_codes;  // table_of_HTTP_status_codes
  SEXP Rsh_Fir_reg_table_of_HTTP_status_codes1_;  // table_of_HTTP_status_codes1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r8_;  // r8

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // get_IANA_URI_scheme_db = ldf get_IANA_URI_scheme_db
  Rsh_Fir_reg_get_IANA_URI_scheme_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn get_IANA_URI_scheme_db()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get_IANA_URI_scheme_db, 0, NULL, NULL, CCP, RHO);
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
  // st IANA_URI_scheme_db = r
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // get_IANA_HTTP_status_code_db = ldf get_IANA_HTTP_status_code_db
  Rsh_Fir_reg_get_IANA_HTTP_status_code_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r1 = dyn get_IANA_HTTP_status_code_db()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get_IANA_HTTP_status_code_db, 0, NULL, NULL, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // st IANA_HTTP_status_code_db = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // IANA_HTTP_status_code_db = ld IANA_HTTP_status_code_db
  Rsh_Fir_reg_IANA_HTTP_status_code_db = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 8 [IANA_HTTP_status_code_db]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_IANA_HTTP_status_code_db;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L4_:;
  // IANA_HTTP_status_code_db1 = force? IANA_HTTP_status_code_db
  Rsh_Fir_reg_IANA_HTTP_status_code_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IANA_HTTP_status_code_db);
  // checkMissing(IANA_HTTP_status_code_db1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_IANA_HTTP_status_code_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // c = `is.object`(IANA_HTTP_status_code_db1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_IANA_HTTP_status_code_db1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L6() else L7(IANA_HTTP_status_code_db1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L7(IANA_HTTP_status_code_db1)
    Rsh_Fir_reg_IANA_HTTP_status_code_db3_ = Rsh_Fir_reg_IANA_HTTP_status_code_db1_;
    goto L7_;
  }

L5_:;
  // st table_of_HTTP_status_codes = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // IANA_HTTP_status_code_db4 = ld IANA_HTTP_status_code_db
  Rsh_Fir_reg_IANA_HTTP_status_code_db4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

L6_:;
  // dr = tryDispatchBuiltin.1("$", IANA_HTTP_status_code_db1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_IANA_HTTP_status_code_db1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if dc then L8() else L7(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr)
    Rsh_Fir_reg_IANA_HTTP_status_code_db3_ = Rsh_Fir_reg_dr;
    goto L7_;
  }

L7_:;
  // r2 = `$`(IANA_HTTP_status_code_db3, <sym Description>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_IANA_HTTP_status_code_db3_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L5(r2)
  // L5(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L5_;

L8_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D5_:;
  // deopt 12 [IANA_HTTP_status_code_db4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_IANA_HTTP_status_code_db4_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // IANA_HTTP_status_code_db5 = force? IANA_HTTP_status_code_db4
  Rsh_Fir_reg_IANA_HTTP_status_code_db5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IANA_HTTP_status_code_db4_);
  // checkMissing(IANA_HTTP_status_code_db5)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_IANA_HTTP_status_code_db5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(IANA_HTTP_status_code_db5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_IANA_HTTP_status_code_db5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c1 then L11() else L12(IANA_HTTP_status_code_db5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L12(IANA_HTTP_status_code_db5)
    Rsh_Fir_reg_IANA_HTTP_status_code_db7_ = Rsh_Fir_reg_IANA_HTTP_status_code_db5_;
    goto L12_;
  }

L10_:;
  // l = ld table_of_HTTP_status_codes
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

L11_:;
  // dr2 = tryDispatchBuiltin.1("$", IANA_HTTP_status_code_db5)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_IANA_HTTP_status_code_db5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if dc1 then L13() else L12(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L13()
    goto L13_;
  } else {
  // L12(dr2)
    Rsh_Fir_reg_IANA_HTTP_status_code_db7_ = Rsh_Fir_reg_dr2_;
    goto L12_;
  }

L12_:;
  // r3 = `$`(IANA_HTTP_status_code_db7, <sym Value>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_IANA_HTTP_status_code_db7_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L10(r3)
  // L10(r3)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r3_;
  goto L10_;

L13_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L10(dx2)
  // L10(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L10_;

D6_:;
  // deopt 16 [dx3, l, dx3]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_deopt(16, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // r4 = dyn names__(l, NULL, dx3)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 18 [dx3, r4]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // st table_of_HTTP_status_codes = r4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // save = ldf save
  Rsh_Fir_reg_save = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   IANA_URI_scheme_db = ld IANA_URI_scheme_db;
  //   IANA_URI_scheme_db1 = force? IANA_URI_scheme_db;
  //   checkMissing(IANA_URI_scheme_db1);
  //   return IANA_URI_scheme_db1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // p1 = prom<V +>{
  //   IANA_HTTP_status_code_db8 = ld IANA_HTTP_status_code_db;
  //   IANA_HTTP_status_code_db9 = force? IANA_HTTP_status_code_db8;
  //   checkMissing(IANA_HTTP_status_code_db9);
  //   return IANA_HTTP_status_code_db9;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_1, CCP, RHO);
  // p2 = prom<V +>{
  //   table_of_HTTP_status_codes = ld table_of_HTTP_status_codes;
  //   table_of_HTTP_status_codes1 = force? table_of_HTTP_status_codes;
  //   checkMissing(table_of_HTTP_status_codes1);
  //   return table_of_HTTP_status_codes1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_2, CCP, RHO);
  // r8 = dyn save[, , , file, compress](p, p1, p2, "sysdata.rda", TRUE)
  SEXP Rsh_Fir_array_args16[5];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[4] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names1[5];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names1[4] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_save, 5, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 29 [r8]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // IANA_URI_scheme_db = ld IANA_URI_scheme_db
  Rsh_Fir_reg_IANA_URI_scheme_db = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // IANA_URI_scheme_db1 = force? IANA_URI_scheme_db
  Rsh_Fir_reg_IANA_URI_scheme_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IANA_URI_scheme_db);
  // checkMissing(IANA_URI_scheme_db1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_IANA_URI_scheme_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return IANA_URI_scheme_db1
  return Rsh_Fir_reg_IANA_URI_scheme_db1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO) {
  // IANA_HTTP_status_code_db8 = ld IANA_HTTP_status_code_db
  Rsh_Fir_reg_IANA_HTTP_status_code_db8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // IANA_HTTP_status_code_db9 = force? IANA_HTTP_status_code_db8
  Rsh_Fir_reg_IANA_HTTP_status_code_db9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_IANA_HTTP_status_code_db8_);
  // checkMissing(IANA_HTTP_status_code_db9)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_IANA_HTTP_status_code_db9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return IANA_HTTP_status_code_db9
  return Rsh_Fir_reg_IANA_HTTP_status_code_db9_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO) {
  // table_of_HTTP_status_codes = ld table_of_HTTP_status_codes
  Rsh_Fir_reg_table_of_HTTP_status_codes = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // table_of_HTTP_status_codes1 = force? table_of_HTTP_status_codes
  Rsh_Fir_reg_table_of_HTTP_status_codes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table_of_HTTP_status_codes);
  // checkMissing(table_of_HTTP_status_codes1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_table_of_HTTP_status_codes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return table_of_HTTP_status_codes1
  return Rsh_Fir_reg_table_of_HTTP_status_codes1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
