#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2289067196_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2289067196_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2289067196_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2289067196_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2289067196_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2289067196_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2289067196_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2289067196
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2289067196_, RHO, CCP);
  // st `.get_requires_with_version_from_package_db` = r
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
SEXP Rsh_Fir_user_function_inner2289067196_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2289067196 dynamic dispatch ([db, category])

  return Rsh_Fir_user_version_inner2289067196_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2289067196_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2289067196 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2289067196/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_category;  // category
  SEXP Rsh_Fir_reg_category_isMissing;  // category_isMissing
  SEXP Rsh_Fir_reg_category_orDefault;  // category_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_category1_;  // category1
  SEXP Rsh_Fir_reg_category2_;  // category2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_category3_;  // category3
  SEXP Rsh_Fir_reg_category4_;  // category4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_db2_;  // db2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__split_dependencies;  // _split_dependencies
  SEXP Rsh_Fir_reg_db3_;  // db3
  SEXP Rsh_Fir_reg_db4_;  // db4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_db6_;  // db6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_category5_;  // category5
  SEXP Rsh_Fir_reg_category6_;  // category6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_category7_;  // category7
  SEXP Rsh_Fir_reg_category8_;  // category8
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_res6_;  // res6
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_res7_;  // res7
  SEXP Rsh_Fir_reg_res8_;  // res8
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_res9_;  // res9
  SEXP Rsh_Fir_reg_res10_;  // res10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r23_;  // r23

  // Bind parameters
  Rsh_Fir_reg_db = PARAMS[0];
  Rsh_Fir_reg_category = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st db = db
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_db, RHO);
  (void)(Rsh_Fir_reg_db);
  // category_isMissing = missing.0(category)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_category;
  Rsh_Fir_reg_category_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if category_isMissing then L0() else L1(category)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_category_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(category)
    Rsh_Fir_reg_category_orDefault = Rsh_Fir_reg_category;
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
  //   r2 = dyn c("Depends", "Imports", "LinkingTo", "VignetteBuilder", "Suggests", "Enhances");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("Depends", "Imports", "LinkingTo", "VignetteBuilder", "Suggests", "Enhances");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2289067196_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_category_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st category = category_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_category_orDefault, RHO);
  (void)(Rsh_Fir_reg_category_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L2_:;
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L3_:;
  // res9 = ld res
  Rsh_Fir_reg_res9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx3
  return Rsh_Fir_reg_dx3_;

L5_:;
  // r19 = `!=`(r17, "R")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r20 = dyn __1(res6, r19)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_res6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r20)
  // L4(r20)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r20_;
  goto L4_;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p1 = prom<V +>{
  //   category1 = ld category;
  //   category2 = force? category1;
  //   checkMissing(category2);
  //   return category2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2289067196_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st category = r5
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p2 = prom<V +>{
  //   category3 = ld category;
  //   category4 = force? category3;
  //   checkMissing(category4);
  //   return category4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2289067196_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym1 = ldf names;
  //   base1 = ldf names in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   db1 = ld db;
  //   db2 = force? db1;
  //   checkMissing(db2);
  //   names = ldf names in base;
  //   r9 = dyn names(db2);
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base1(<sym db>);
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2289067196_3, CCP, RHO);
  // r11 = dyn _in_(p2, p3)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 9 [r11]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c1 then L11() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L2()
    goto L2_;
  }

L11_:;
  // _split_dependencies = ldf `.split_dependencies`
  Rsh_Fir_reg__split_dependencies = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p4 = prom<V +>{
  //   db3 = ld db;
  //   db4 = force? db3;
  //   checkMissing(db4);
  //   c2 = `is.object`(db4);
  //   if c2 then L1() else L2(db4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", db4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(db6):
  //   category5 = ld category;
  //   category6 = force? category5;
  //   __ = ldf `[` in base;
  //   r12 = dyn __(db6, category6);
  //   goto L0(r12);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2289067196_4, CCP, RHO);
  // r14 = dyn _split_dependencies(p4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__split_dependencies, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 13 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // st res = r14
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // category7 = ld category
  Rsh_Fir_reg_category7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 15 [category7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_category7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // category8 = force? category7
  Rsh_Fir_reg_category8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_category7_);
  // checkMissing(category8)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_category8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r15 = `==`(category8, "Depends")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_category8_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c3 then L15() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L15()
    goto L15_;
  } else {
  // L3()
    goto L3_;
  }

L15_:;
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

D7_:;
  // deopt 19 [res]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(res1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c4 then L17() else L18(res1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L17()
    goto L17_;
  } else {
  // L18(res1)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_res1_;
    goto L18_;
  }

L17_:;
  // dr2 = tryDispatchBuiltin.1("[", res1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc1 then L19() else L18(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L19()
    goto L19_;
  } else {
  // L18(dr2)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_dr2_;
    goto L18_;
  }

L18_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L19_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

L20_:;
  // res7 = ld res
  Rsh_Fir_reg_res7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

L21_:;
  // r16 = dyn base2(<sym res>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(res3, r16)
  // L5(res3, r16)
  Rsh_Fir_reg_res6_ = Rsh_Fir_reg_res3_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L5_;

D8_:;
  // deopt 23 [res3, res7]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_res7_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // res8 = force? res7
  Rsh_Fir_reg_res8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res7_);
  // checkMissing(res8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_res8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r18 = dyn names1(res8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_res8_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L23() else D9()
  // L23()
  goto L23_;

D9_:;
  // deopt 26 [res3, r18]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L5(res3, r18)
  // L5(res3, r18)
  Rsh_Fir_reg_res6_ = Rsh_Fir_reg_res3_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L5_;

D10_:;
  // deopt 30 [res9]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_res9_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L25_:;
  // res10 = force? res9
  Rsh_Fir_reg_res10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res9_);
  // checkMissing(res10)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_res10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res10
  return Rsh_Fir_reg_res10_;

L27_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r23 = dyn list()
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

L28_:;
  // r21 = dyn base3()
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 0, NULL, NULL, CCP, RHO);
  // goto L6(r21)
  // L6(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L6_;

D11_:;
  // deopt 35 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L6(r23)
  // L6(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner2289067196_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn c("Depends", "Imports", "LinkingTo", "VignetteBuilder", "Suggests", "Enhances")
  SEXP Rsh_Fir_array_args2[6];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[6];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 6, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("Depends", "Imports", "LinkingTo", "VignetteBuilder", "Suggests", "Enhances")
  SEXP Rsh_Fir_array_args3[6];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[5] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[6];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 6, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2289067196_1(SEXP CCP, SEXP RHO) {
  // category1 = ld category
  Rsh_Fir_reg_category1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // category2 = force? category1
  Rsh_Fir_reg_category2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_category1_);
  // checkMissing(category2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_category2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return category2
  return Rsh_Fir_reg_category2_;
}
SEXP Rsh_Fir_user_promise_inner2289067196_2(SEXP CCP, SEXP RHO) {
  // category3 = ld category
  Rsh_Fir_reg_category3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // category4 = force? category3
  Rsh_Fir_reg_category4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_category3_);
  // checkMissing(category4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_category4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return category4
  return Rsh_Fir_reg_category4_;
}
SEXP Rsh_Fir_user_promise_inner2289067196_3(SEXP CCP, SEXP RHO) {
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // db1 = ld db
  Rsh_Fir_reg_db1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // db2 = force? db1
  Rsh_Fir_reg_db2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db1_);
  // checkMissing(db2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_db2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r9 = dyn names(db2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_db2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base1(<sym db>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2289067196_4(SEXP CCP, SEXP RHO) {
  // db3 = ld db
  Rsh_Fir_reg_db3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // db4 = force? db3
  Rsh_Fir_reg_db4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db3_);
  // checkMissing(db4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_db4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(db4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_db4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(db4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(db4)
    Rsh_Fir_reg_db6_ = Rsh_Fir_reg_db4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", db4)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_db4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_db6_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // category5 = ld category
  Rsh_Fir_reg_category5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // category6 = force? category5
  Rsh_Fir_reg_category6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_category5_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r12 = dyn __(db6, category6)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_db6_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_category6_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
