#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1204529695_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1204529695_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1204529695_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1204529695_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1204529695_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1204529695_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1204529695_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner1204529695
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1204529695_, RHO, CCP);
  // st `as.Date.character` = r
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
SEXP Rsh_Fir_user_function_inner1204529695_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1204529695 dynamic dispatch ([x, format, tryFormats, optional, `...`])

  return Rsh_Fir_user_version_inner1204529695_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1204529695_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1204529695 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1204529695/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_format;  // format
  SEXP Rsh_Fir_reg_tryFormats;  // tryFormats
  SEXP Rsh_Fir_reg_optional;  // optional
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_tryFormats_isMissing;  // tryFormats_isMissing
  SEXP Rsh_Fir_reg_tryFormats_orDefault;  // tryFormats_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_optional_isMissing;  // optional_isMissing
  SEXP Rsh_Fir_reg_optional_orDefault;  // optional_orDefault
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_charToDate;  // charToDate
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_strptime;  // strptime
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_format1_;  // format1
  SEXP Rsh_Fir_reg_format2_;  // format2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_as_Date;  // as_Date
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r15_;  // r15

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_format = PARAMS[1];
  Rsh_Fir_reg_tryFormats = PARAMS[2];
  Rsh_Fir_reg_optional = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st format = format
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_format, RHO);
  (void)(Rsh_Fir_reg_format);
  // tryFormats_isMissing = missing.0(tryFormats)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_tryFormats;
  Rsh_Fir_reg_tryFormats_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if tryFormats_isMissing then L0() else L1(tryFormats)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tryFormats_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(tryFormats)
    Rsh_Fir_reg_tryFormats_orDefault = Rsh_Fir_reg_tryFormats;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("%Y-%m-%d", "%Y/%m/%d");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("%Y-%m-%d", "%Y/%m/%d");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204529695_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_tryFormats_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st tryFormats = tryFormats_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_tryFormats_orDefault, RHO);
  (void)(Rsh_Fir_reg_tryFormats_orDefault);
  // optional_isMissing = missing.0(optional)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_optional;
  Rsh_Fir_reg_optional_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if optional_isMissing then L2(FALSE) else L2(optional)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_optional_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_optional_orDefault = Rsh_const(CCP, 7);
    goto L2_;
  } else {
  // L2(optional)
    Rsh_Fir_reg_optional_orDefault = Rsh_Fir_reg_optional;
    goto L2_;
  }

L2_:;
  // st optional = optional_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_optional_orDefault, RHO);
  (void)(Rsh_Fir_reg_optional_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // r4 = clos inner2501545716
  Rsh_Fir_reg_r4_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st charToDate = r4
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L3_:;
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c1 then L8() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L8()
    goto L8_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // strptime = ldf strptime
  Rsh_Fir_reg_strptime = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L5_:;
  // st res = r10
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // as_Date = ldf `as.Date`
  Rsh_Fir_reg_as_Date = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

L6_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r7 = dyn missing(<sym format>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

L7_:;
  // r5 = dyn base1(<sym format>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

L8_:;
  // charToDate = ldf charToDate
  Rsh_Fir_reg_charToDate = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204529695_1, CCP, RHO);
  // r9 = dyn charToDate(p1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_charToDate, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 9 [r9]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p2 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204529695_2, CCP, RHO);
  // p3 = prom<V +>{
  //   format1 = ld format;
  //   format2 = force? format1;
  //   checkMissing(format2);
  //   return format2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204529695_3, CCP, RHO);
  // r13 = dyn strptime[, , tz](p2, p3, "GMT")
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strptime, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 16 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r13_;
  goto L5_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p4 = prom<V +>{
  //   res = ld res;
  //   res1 = force? res;
  //   checkMissing(res1);
  //   return res1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1204529695_4, CCP, RHO);
  // r15 = dyn as_Date(p4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_Date, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 21 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_inner1204529695_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn c("%Y-%m-%d", "%Y/%m/%d")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("%Y-%m-%d", "%Y/%m/%d")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1204529695_1(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner1204529695_2(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1204529695_3(SEXP CCP, SEXP RHO) {
  // format1 = ld format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // format2 = force? format1
  Rsh_Fir_reg_format2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_format1_);
  // checkMissing(format2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_format2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return format2
  return Rsh_Fir_reg_format2_;
}
SEXP Rsh_Fir_user_promise_inner1204529695_4(SEXP CCP, SEXP RHO) {
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return res1
  return Rsh_Fir_reg_res1_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_x2_1;  // x2
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_is_na__;  // is_na__
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_x3_1;  // x3
  SEXP Rsh_Fir_reg_x4_1;  // x4
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_xx2_;  // xx2
  SEXP Rsh_Fir_reg_xx3_;  // xx3
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_xx4_;  // xx4
  SEXP Rsh_Fir_reg_xx5_;  // xx5
  SEXP Rsh_Fir_reg_is_na2_;  // is_na2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_xx6_;  // xx6
  SEXP Rsh_Fir_reg_xx7_;  // xx7
  SEXP Rsh_Fir_reg_is_na3_;  // is_na3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_strptime1;  // strptime
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_tryFormats1;  // tryFormats
  SEXP Rsh_Fir_reg_tryFormats1_;  // tryFormats1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_strptime1_;  // strptime1
  SEXP Rsh_Fir_reg_xx8_;  // xx8
  SEXP Rsh_Fir_reg_xx9_;  // xx9
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_ff;  // ff
  SEXP Rsh_Fir_reg_ff1_;  // ff1
  SEXP Rsh_Fir_reg_p3_1;  // p3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_is_na4_;  // is_na4
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_strptime2_;  // strptime2
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_p4_1;  // p4
  SEXP Rsh_Fir_reg_ff2_;  // ff2
  SEXP Rsh_Fir_reg_ff3_;  // ff3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_optional1;  // optional
  SEXP Rsh_Fir_reg_optional1_;  // optional1
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_as_Date_character;  // as_Date_character
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r52_;  // r52

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // sym = ldf nzchar
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base = ldf nzchar in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L0_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // is_na__ = ldf `is.na<-`
  Rsh_Fir_reg_is_na__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

L1_:;
  // st xx = dx1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L2_:;
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c1 then L36() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L36()
    goto L36_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L13()
  // L13()
  goto L13_;

L4_:;
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c2 then L41() else L5(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L41()
    goto L41_;
  } else {
  // L5(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L5_;
  }

L5_:;
  // c11 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c11 then L48() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L48()
    goto L48_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // r19 = `<=`(r16, r17)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c9 = `&&`(c7, c8)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L5(c9)
  // L5(c9)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c9_;
  goto L5_;

L7_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard4 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L8_:;
  // st xx = dx3
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L10_:;
  // c13 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c13 then L59() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L59()
    goto L59_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // goto L12(NULL)
  // L12(NULL)
  Rsh_Fir_reg_r24_ = Rsh_const(CCP, 21);
  goto L12_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard5 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L14_:;
  // c14 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c14 then L66() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L66()
    goto L66_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // tryFormats = ld tryFormats
  Rsh_Fir_reg_tryFormats1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L70() else D20()
  // L70()
  goto L70_;

L16_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // c15 = `<`.1(l1, i2)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if c15 then L71() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L71()
    goto L71_;
  } else {
  // L20()
    goto L20_;
  }

L17_:;
  // r38 = `!`(r33)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c16 then L77() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L77()
    goto L77_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L16(i7)
  // L16(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L16_;

L20_:;
  // x15 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args34[4];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_x15_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // st ff = x15
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x15_, RHO);
  (void)(Rsh_Fir_reg_x15_);
  // sym6 = ldf `is.na`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base6 = ldf `is.na` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard6 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L21_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L87() else D29()
  // L87()
  goto L87_;

L22_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D0()
  // L24()
  goto L24_;

L23_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r2 = dyn nzchar(x2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

D2_:;
  // deopt 8 [r3, l, r3]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // r4 = dyn is_na__(l, NULL, r3)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na__, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 10 [r3, r4]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L27_:;
  // st x = r4
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r4_1, RHO);
  (void)(Rsh_Fir_reg_r4_1);
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

D4_:;
  // deopt 12 [x3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L28_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x4_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c then L29() else L30(x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L29()
    goto L29_;
  } else {
  // L30(x4)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_1;
    goto L30_;
  }

L29_:;
  // dr = tryDispatchBuiltin.1("[", x4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_x4_1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc then L31() else L30(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_dr;
    goto L30_;
  }

L30_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r5 = dyn __(x6, 1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_1;
  goto L1_;

L31_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L32_:;
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

L33_:;
  // r6 = dyn base1(<sym xx>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L2_;

D5_:;
  // deopt 20 [xx]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_xx;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L34_:;
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r8 = dyn is_na(xx1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_xx1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

D6_:;
  // deopt 23 [r8]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_;
  goto L2_;

L36_:;
  // st j = 1
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_const(CCP, 22), RHO);
  (void)(Rsh_const(CCP, 22));
  // goto L9()
  // L9()
  goto L9_;

L37_:;
  // xx2 = ld xx
  Rsh_Fir_reg_xx2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

L38_:;
  // r9 = dyn base2(<sym xx>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_1;
  goto L4_;

D7_:;
  // deopt 29 [xx2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_xx2_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L39_:;
  // xx3 = force? xx2
  Rsh_Fir_reg_xx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx2_);
  // checkMissing(xx3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_xx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r11 = dyn is_na1(xx3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_xx3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

D8_:;
  // deopt 32 [r11]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_;
  goto L4_;

L41_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

D9_:;
  // deopt 33 [c2, j]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L42_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // checkMissing(j1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_j1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r12 = `+`(j1, 1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_j1_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // st j = r12
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard3 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L43_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

L44_:;
  // r15 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L6(c2, r12, r15)
  // L6(c2, r12, r15)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_1;
  goto L6_;

D10_:;
  // deopt 39 [c2, r12, x7]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(39, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L45_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r18 = dyn length(x8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L46() else D11()
  // L46()
  goto L46_;

D11_:;
  // deopt 42 [c2, r12, r18]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(42, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L6(c2, r12, r18)
  // L6(c2, r12, r18)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L6_;

L48_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

D12_:;
  // deopt 45 [x9]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L49_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(x10)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c12 then L50() else L51(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L50()
    goto L50_;
  } else {
  // L51(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L51_;
  }

L50_:;
  // dr2 = tryDispatchBuiltin.1("[", x10)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc1 then L52() else L51(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L52()
    goto L52_;
  } else {
  // L51(dr2)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr2_;
    goto L51_;
  }

L51_:;
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

L52_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L8(dx2)
  // L8(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

D13_:;
  // deopt 47 [x12, j2]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L53_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r20 = dyn __1(x12, j3)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r20)
  // L8(r20)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r20_;
  goto L8_;

L55_:;
  // xx4 = ld xx
  Rsh_Fir_reg_xx4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L57() else D14()
  // L57()
  goto L57_;

L56_:;
  // r21 = dyn base4(<sym xx>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L10_;

D14_:;
  // deopt 56 [xx4]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_xx4_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L57_:;
  // xx5 = force? xx4
  Rsh_Fir_reg_xx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx4_);
  // checkMissing(xx5)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_xx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r23 = dyn is_na2(xx5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_xx5_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

D15_:;
  // deopt 59 [r23]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L10_;

L59_:;
  // st f = "%Y-%m-%d"
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // goto L12("%Y-%m-%d")
  // L12("%Y-%m-%d")
  Rsh_Fir_reg_r24_ = Rsh_const(CCP, 4);
  goto L12_;

L62_:;
  // xx6 = ld xx
  Rsh_Fir_reg_xx6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L64() else D16()
  // L64()
  goto L64_;

L63_:;
  // r26 = dyn base5(<sym xx>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L14(r26)
  // L14(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L14_;

D16_:;
  // deopt 69 [xx6]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_xx6_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L64_:;
  // xx7 = force? xx6
  Rsh_Fir_reg_xx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx6_);
  // checkMissing(xx7)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_xx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // is_na3 = ldf `is.na` in base
  Rsh_Fir_reg_is_na3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r28 = dyn is_na3(xx7)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_xx7_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na3_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L65() else D17()
  // L65()
  goto L65_;

D17_:;
  // deopt 72 [r28]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L14(r28)
  // L14(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L14_;

L66_:;
  // strptime = ldf strptime
  Rsh_Fir_reg_strptime1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L67() else D18()
  // L67()
  goto L67_;

D18_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // p = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // p1 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // r31 = dyn strptime(p, p1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strptime1, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L68() else D19()
  // L68()
  goto L68_;

D19_:;
  // deopt 77 [r31]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L68_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;

D20_:;
  // deopt 78 [tryFormats]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_tryFormats1;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L70_:;
  // tryFormats1 = force? tryFormats
  Rsh_Fir_reg_tryFormats1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tryFormats1);
  // checkMissing(tryFormats1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_tryFormats1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // s = toForSeq(tryFormats1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_tryFormats1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 31);
  // goto L16(i)
  // L16(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L16_;

L71_:;
  // optional = ld optional
  Rsh_Fir_reg_optional1 = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L82() else D26()
  // L82()
  goto L82_;

L72_:;
  // strptime1 = ldf strptime
  Rsh_Fir_reg_strptime1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L74() else D21()
  // L74()
  goto L74_;

L73_:;
  // r32 = dyn base6(<lang strptime(xx, ff, tz="GMT")>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L17(i2, r32)
  // L17(i2, r32)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L17_;

D21_:;
  // deopt 83 [i2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L74_:;
  // p2 = prom<V +>{
  //   xx8 = ld xx;
  //   xx9 = force? xx8;
  //   checkMissing(xx9);
  //   return xx9;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // p3 = prom<V +>{
  //   ff = ld ff;
  //   ff1 = force? ff;
  //   checkMissing(ff1);
  //   return ff1;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_3, CCP, RHO);
  // r36 = dyn strptime1[, , tz](p2, p3, "GMT")
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args79[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strptime1_, 3, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L75() else D22()
  // L75()
  goto L75_;

D22_:;
  // deopt 88 [i2, r36]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L75_:;
  // is_na4 = ldf `is.na` in base
  Rsh_Fir_reg_is_na4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r37 = dyn is_na4(r36)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na4_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L76() else D23()
  // L76()
  goto L76_;

D23_:;
  // deopt 90 [i2, r37]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L17(i2, r37)
  // L17(i2, r37)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r37_;
  goto L17_;

L77_:;
  // strptime2 = ldf strptime
  Rsh_Fir_reg_strptime2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L78() else D24()
  // L78()
  goto L78_;

D24_:;
  // deopt 93 [i7]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L78_:;
  // p4 = prom<V +>{
  //   x16 = ld x;
  //   x17 = force? x16;
  //   checkMissing(x17);
  //   return x17;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_4, CCP, RHO);
  // p5 = prom<V +>{
  //   ff2 = ld ff;
  //   ff3 = force? ff2;
  //   checkMissing(ff3);
  //   return ff3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_5, CCP, RHO);
  // r41 = dyn strptime2(p4, p5)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strptime2_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L79() else D25()
  // L79()
  goto L79_;

D25_:;
  // deopt 96 [i7, r41]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L79_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;

D26_:;
  // deopt 103 [optional]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_optional1;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L82_:;
  // optional1 = force? optional
  Rsh_Fir_reg_optional1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional1);
  // checkMissing(optional1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_optional1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c17 = `as.logical`(optional1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_optional1_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c17 then L83() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L83()
    goto L83_;
  } else {
  // L21()
    goto L21_;
  }

L83_:;
  // as_Date_character = ldf `as.Date.character`
  Rsh_Fir_reg_as_Date_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L84() else D27()
  // L84()
  goto L84_;

D27_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L84_:;
  // p6 = prom<V +>{
  //   sym7 = ldf `rep.int`;
  //   base7 = ldf `rep.int` in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L2() else L3();
  // L0(r45):
  //   return r45;
  // L2():
  //   sym8 = ldf length;
  //   base8 = ldf length in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L4() else L5();
  // L3():
  //   r44 = dyn base7(NA_STR, <lang length(x)>);
  //   goto L0(r44);
  // L1(r47):
  //   rep_int = ldf `rep.int` in base;
  //   r49 = dyn rep_int(NA_STR, r47);
  //   goto L0(r49);
  // L4():
  //   x18 = ld x;
  //   x19 = force? x18;
  //   checkMissing(x19);
  //   length1 = ldf length in base;
  //   r48 = dyn length1(x19);
  //   goto L1(r48);
  // L5():
  //   r46 = dyn base8(<sym x>);
  //   goto L1(r46);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_6, CCP, RHO);
  // r51 = dyn as_Date_character(p6, "%Y-%m-%d")
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_Date_character, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L85() else D28()
  // L85()
  goto L85_;

D28_:;
  // deopt 109 [r51]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L85_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r51
  return Rsh_Fir_reg_r51_;

D29_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // r52 = dyn stop("character string is not in a standard unambiguous format")
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L88() else D30()
  // L88()
  goto L88_;

D30_:;
  // deopt 113 [r52]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L88_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r52
  return Rsh_Fir_reg_r52_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // xx8 = ld xx
  Rsh_Fir_reg_xx8_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // xx9 = force? xx8
  Rsh_Fir_reg_xx9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx8_);
  // checkMissing(xx9)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_xx9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return xx9
  return Rsh_Fir_reg_xx9_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO) {
  // ff = ld ff
  Rsh_Fir_reg_ff = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // ff1 = force? ff
  Rsh_Fir_reg_ff1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ff);
  // checkMissing(ff1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_ff1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return ff1
  return Rsh_Fir_reg_ff1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_4(SEXP CCP, SEXP RHO) {
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return x17
  return Rsh_Fir_reg_x17_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_5(SEXP CCP, SEXP RHO) {
  // ff2 = ld ff
  Rsh_Fir_reg_ff2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // ff3 = force? ff2
  Rsh_Fir_reg_ff3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ff2_);
  // checkMissing(ff3)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_ff3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return ff3
  return Rsh_Fir_reg_ff3_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_6(SEXP CCP, SEXP RHO) {
  // sym7 = ldf `rep.int`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base7 = ldf `rep.int` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard7 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r45
  return Rsh_Fir_reg_r45_;

L1_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r49 = dyn rep_int(NA_STR, r47)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r49_;
  goto L0_;

L2_:;
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard8 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r44 = dyn base7(NA_STR, <lang length(x)>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L0_;

L4_:;
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r48 = dyn length1(x19)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L1(r48)
  // L1(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L1_;

L5_:;
  // r46 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L1(r46)
  // L1(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
