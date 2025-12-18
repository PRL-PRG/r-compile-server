#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1776297553_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1776297553_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1776297553_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1776297553_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner1776297553
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1776297553_, RHO, CCP);
  // st `.GenericAssign` = r
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
SEXP Rsh_Fir_user_function_inner1776297553_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1776297553 dynamic dispatch ([name, fdef, where])

  return Rsh_Fir_user_version_inner1776297553_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1776297553_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1776297553 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1776297553/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_fdef;  // fdef
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_fdef1_;  // fdef1
  SEXP Rsh_Fir_reg_fdef2_;  // fdef2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg__cacheGeneric;  // _cacheGeneric
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_fdef3_;  // fdef3
  SEXP Rsh_Fir_reg_fdef4_;  // fdef4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_assignMethodsMetaData;  // assignMethodsMetaData
  SEXP Rsh_Fir_reg_name5_;  // name5
  SEXP Rsh_Fir_reg_name6_;  // name6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_methods;  // methods
  SEXP Rsh_Fir_reg_methods1_;  // methods1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_fdef5_;  // fdef5
  SEXP Rsh_Fir_reg_fdef6_;  // fdef6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg__assignMethodsTableMetaData;  // _assignMethodsTableMetaData
  SEXP Rsh_Fir_reg_name7_;  // name7
  SEXP Rsh_Fir_reg_name8_;  // name8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_fdef7_;  // fdef7
  SEXP Rsh_Fir_reg_fdef8_;  // fdef8
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_name9_;  // name9
  SEXP Rsh_Fir_reg_name10_;  // name10

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_fdef = PARAMS[1];
  Rsh_Fir_reg_where = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st fdef = fdef
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_fdef, RHO);
  (void)(Rsh_Fir_reg_fdef);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_, CCP, RHO);
  // p1 = prom<V +>{
  //   fdef1 = ld fdef;
  //   fdef2 = force? fdef1;
  //   checkMissing(fdef2);
  //   return fdef2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_1, CCP, RHO);
  // p2 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_2, CCP, RHO);
  // r3 = dyn assign(p, p1, p2)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
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
  // _cacheGeneric = ldf `.cacheGeneric`
  Rsh_Fir_reg__cacheGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p3 = prom<V +>{
  //   name3 = ld name;
  //   name4 = force? name3;
  //   checkMissing(name4);
  //   return name4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_3, CCP, RHO);
  // p4 = prom<V +>{
  //   fdef3 = ld fdef;
  //   fdef4 = force? fdef3;
  //   checkMissing(fdef4);
  //   return fdef4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_4, CCP, RHO);
  // r6 = dyn _cacheGeneric(p3, p4)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__cacheGeneric, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 10 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r7 = dyn __(<sym fdef>, <sym default>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // st methods = r7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // assignMethodsMetaData = ldf assignMethodsMetaData
  Rsh_Fir_reg_assignMethodsMetaData = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p5 = prom<V +>{
  //   name5 = ld name;
  //   name6 = force? name5;
  //   checkMissing(name6);
  //   return name6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_5, CCP, RHO);
  // p6 = prom<V +>{
  //   methods = ld methods;
  //   methods1 = force? methods;
  //   checkMissing(methods1);
  //   return methods1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_6, CCP, RHO);
  // p7 = prom<V +>{
  //   fdef5 = ld fdef;
  //   fdef6 = force? fdef5;
  //   checkMissing(fdef6);
  //   return fdef6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_7, CCP, RHO);
  // p8 = prom<V +>{
  //   where3 = ld where;
  //   where4 = force? where3;
  //   checkMissing(where4);
  //   return where4;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_8, CCP, RHO);
  // r12 = dyn assignMethodsMetaData(p5, p6, p7, p8)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assignMethodsMetaData, 4, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 20 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // _assignMethodsTableMetaData = ldf `.assignMethodsTableMetaData`
  Rsh_Fir_reg__assignMethodsTableMetaData = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p9 = prom<V +>{
  //   name7 = ld name;
  //   name8 = force? name7;
  //   checkMissing(name8);
  //   return name8;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_9, CCP, RHO);
  // p10 = prom<V +>{
  //   fdef7 = ld fdef;
  //   fdef8 = force? fdef7;
  //   checkMissing(fdef8);
  //   return fdef8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_10, CCP, RHO);
  // p11 = prom<V +>{
  //   where5 = ld where;
  //   where6 = force? where5;
  //   checkMissing(where6);
  //   return where6;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1776297553_11, CCP, RHO);
  // r16 = dyn _assignMethodsTableMetaData(p9, p10, p11)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__assignMethodsTableMetaData, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 26 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // name9 = ld name
  Rsh_Fir_reg_name9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 27 [name9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_name9_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // name10 = force? name9
  Rsh_Fir_reg_name10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name9_);
  // checkMissing(name10)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_name10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return name10
  return Rsh_Fir_reg_name10_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_(SEXP CCP, SEXP RHO) {
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_1(SEXP CCP, SEXP RHO) {
  // fdef1 = ld fdef
  Rsh_Fir_reg_fdef1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdef2 = force? fdef1
  Rsh_Fir_reg_fdef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef1_);
  // checkMissing(fdef2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_fdef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return fdef2
  return Rsh_Fir_reg_fdef2_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_2(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_3(SEXP CCP, SEXP RHO) {
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return name4
  return Rsh_Fir_reg_name4_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_4(SEXP CCP, SEXP RHO) {
  // fdef3 = ld fdef
  Rsh_Fir_reg_fdef3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdef4 = force? fdef3
  Rsh_Fir_reg_fdef4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef3_);
  // checkMissing(fdef4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_fdef4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return fdef4
  return Rsh_Fir_reg_fdef4_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_5(SEXP CCP, SEXP RHO) {
  // name5 = ld name
  Rsh_Fir_reg_name5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name6 = force? name5
  Rsh_Fir_reg_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name5_);
  // checkMissing(name6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_name6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return name6
  return Rsh_Fir_reg_name6_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_6(SEXP CCP, SEXP RHO) {
  // methods = ld methods
  Rsh_Fir_reg_methods = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // methods1 = force? methods
  Rsh_Fir_reg_methods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methods);
  // checkMissing(methods1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_methods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return methods1
  return Rsh_Fir_reg_methods1_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_7(SEXP CCP, SEXP RHO) {
  // fdef5 = ld fdef
  Rsh_Fir_reg_fdef5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdef6 = force? fdef5
  Rsh_Fir_reg_fdef6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef5_);
  // checkMissing(fdef6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_fdef6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return fdef6
  return Rsh_Fir_reg_fdef6_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_8(SEXP CCP, SEXP RHO) {
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return where4
  return Rsh_Fir_reg_where4_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_9(SEXP CCP, SEXP RHO) {
  // name7 = ld name
  Rsh_Fir_reg_name7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name8 = force? name7
  Rsh_Fir_reg_name8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name7_);
  // checkMissing(name8)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_name8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return name8
  return Rsh_Fir_reg_name8_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_10(SEXP CCP, SEXP RHO) {
  // fdef7 = ld fdef
  Rsh_Fir_reg_fdef7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdef8 = force? fdef7
  Rsh_Fir_reg_fdef8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef7_);
  // checkMissing(fdef8)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_fdef8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return fdef8
  return Rsh_Fir_reg_fdef8_;
}
SEXP Rsh_Fir_user_promise_inner1776297553_11(SEXP CCP, SEXP RHO) {
  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return where6
  return Rsh_Fir_reg_where6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
