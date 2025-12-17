#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3943625592_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3943625592_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3943625592_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3943625592_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3943625592_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3943625592_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3943625592_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3943625592_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3943625592_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3943625592_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3618118985_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3618118985_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3618118985_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3618118985_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3618118985_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3943625592
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3943625592_, RHO, CCP);
  // st `.removeSuperclassBackRefs` = r
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
SEXP Rsh_Fir_user_function_inner3943625592_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3943625592 dynamic dispatch ([Class, classDef, classWhere])

  return Rsh_Fir_user_version_inner3943625592_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3943625592_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3943625592 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3943625592/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_Class;  // Class
  SEXP Rsh_Fir_reg_classDef;  // classDef
  SEXP Rsh_Fir_reg_classWhere;  // classWhere
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_superclasses;  // superclasses
  SEXP Rsh_Fir_reg_superclasses1_;  // superclasses1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg__getClassFromCache;  // _getClassFromCache
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_classWhere1_;  // classWhere1
  SEXP Rsh_Fir_reg_classWhere2_;  // classWhere2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_cdef;  // cdef
  SEXP Rsh_Fir_reg_cdef1_;  // cdef1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg__removeSubClass;  // _removeSubClass
  SEXP Rsh_Fir_reg_what2_;  // what2
  SEXP Rsh_Fir_reg_what3_;  // what3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_Class1_;  // Class1
  SEXP Rsh_Fir_reg_Class2_;  // Class2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_cdef2_;  // cdef2
  SEXP Rsh_Fir_reg_cdef3_;  // cdef3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_cdef4_;  // cdef4
  SEXP Rsh_Fir_reg_cdef5_;  // cdef5
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_cdef6_;  // cdef6
  SEXP Rsh_Fir_reg_cdef7_;  // cdef7
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r24_;  // r24

  // Bind parameters
  Rsh_Fir_reg_Class = PARAMS[0];
  Rsh_Fir_reg_classDef = PARAMS[1];
  Rsh_Fir_reg_classWhere = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st Class = Class
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_Class, RHO);
  (void)(Rsh_Fir_reg_Class);
  // st classDef = classDef
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_classDef, RHO);
  (void)(Rsh_Fir_reg_classDef);
  // st classWhere = classWhere
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_classWhere, RHO);
  (void)(Rsh_Fir_reg_classWhere);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L13() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L9()
  // L9()
  goto L9_;

L2_:;
  // st superclasses = r5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // superclasses = ld superclasses
  Rsh_Fir_reg_superclasses = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

L3_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c1 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c1 then L18() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L18()
    goto L18_;
  } else {
  // L8()
    goto L8_;
  }

L4_:;
  // sym2 = ldf `is.list`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.list` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L5_:;
  // goto L3(i7)
  // L3(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L3_;

L6_:;
  // c3 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c3 then L31() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L31()
    goto L31_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // goto L5(i10)
  // L5(i10)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i10_;
  goto L5_;

L8_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // st what = x
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // _getClassFromCache = ldf `.getClassFromCache`
  Rsh_Fir_reg__getClassFromCache = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 8);

L10_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r2 = dyn __(<sym classDef>, <sym contains>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r3 = dyn length(r2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r = dyn base(<lang `@`(classDef, contains)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L13_:;
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r6 = dyn __1(<sym classDef>, <sym contains>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r7 = dyn names(r6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

L15_:;
  // r4 = dyn base1(<lang `@`(classDef, contains)>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D1_:;
  // deopt 11 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r7_;
  goto L2_;

D2_:;
  // deopt 13 [superclasses]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_superclasses;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // superclasses1 = force? superclasses
  Rsh_Fir_reg_superclasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses);
  // checkMissing(superclasses1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_superclasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // s = toForSeq(superclasses1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_superclasses1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 16);
  // goto L3(i)
  // L3(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L3_;

L18_:;
  // goto L9()
  // L9()
  goto L9_;

D3_:;
  // deopt 16 [i2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // p = prom<V +>{
  //   what = ld what;
  //   what1 = force? what;
  //   checkMissing(what1);
  //   return what1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3943625592_, CCP, RHO);
  // p1 = prom<V +>{
  //   classWhere1 = ld classWhere;
  //   classWhere2 = force? classWhere1;
  //   checkMissing(classWhere2);
  //   return classWhere2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3943625592_1, CCP, RHO);
  // r10 = dyn _getClassFromCache[, , `resolve.confl`](p, p1, "all")
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getClassFromCache, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

D4_:;
  // deopt 21 [i2, r10]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // st cdef = r10
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

D5_:;
  // deopt 24 [i2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // p2 = prom<V +>{
  //   cdef = ld cdef;
  //   cdef1 = force? cdef;
  //   checkMissing(cdef1);
  //   return cdef1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3943625592_2, CCP, RHO);
  // r12 = dyn is(p2, "classRepresentation")
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

D6_:;
  // deopt 27 [i2, r12]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L23() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L23()
    goto L23_;
  } else {
  // L4()
    goto L4_;
  }

L23_:;
  // _removeSubClass = ldf `.removeSubClass`
  Rsh_Fir_reg__removeSubClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

D7_:;
  // deopt 29 [i2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // p3 = prom<V +>{
  //   what2 = ld what;
  //   what3 = force? what2;
  //   checkMissing(what3);
  //   return what3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3943625592_3, CCP, RHO);
  // p4 = prom<V +>{
  //   Class1 = ld Class;
  //   Class2 = force? Class1;
  //   checkMissing(Class2);
  //   return Class2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3943625592_4, CCP, RHO);
  // p5 = prom<V +>{
  //   cdef2 = ld cdef;
  //   cdef3 = force? cdef2;
  //   checkMissing(cdef3);
  //   return cdef3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3943625592_5, CCP, RHO);
  // r16 = dyn _removeSubClass(p3, p4, p5)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__removeSubClass, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

D8_:;
  // deopt 33 [i2, r16]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L5(i2)
  // L5(i2)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  goto L5_;

L27_:;
  // cdef4 = ld cdef
  Rsh_Fir_reg_cdef4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L29() else D9()
  // L29()
  goto L29_;

L28_:;
  // r18 = dyn base2(<sym cdef>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(i2, r18)
  // L6(i2, r18)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L6_;

D9_:;
  // deopt 36 [i2, cdef4]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_cdef4_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L29_:;
  // cdef5 = force? cdef4
  Rsh_Fir_reg_cdef5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef4_);
  // checkMissing(cdef5)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_cdef5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r20 = dyn is_list(cdef5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_cdef5_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L30() else D10()
  // L30()
  goto L30_;

D10_:;
  // deopt 39 [i2, r20]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L6(i2, r20)
  // L6(i2, r20)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L6_;

L31_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

D11_:;
  // deopt 41 [i10]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // p6 = prom<V +>{
  //   cdef6 = ld cdef;
  //   cdef7 = force? cdef6;
  //   checkMissing(cdef7);
  //   return cdef7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3943625592_6, CCP, RHO);
  // p7 = prom<V +>{
  //   r22 = clos inner3618118985;
  //   return r22;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3943625592_7, CCP, RHO);
  // r24 = dyn lapply(p6, p7)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L33() else D12()
  // L33()
  goto L33_;

D12_:;
  // deopt 44 [i10, r24]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L5(i10)
  // L5(i10)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i10_;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_inner3943625592_(SEXP CCP, SEXP RHO) {
  // what = ld what
  Rsh_Fir_reg_what = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // what1 = force? what
  Rsh_Fir_reg_what1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what);
  // checkMissing(what1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_what1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return what1
  return Rsh_Fir_reg_what1_;
}
SEXP Rsh_Fir_user_promise_inner3943625592_1(SEXP CCP, SEXP RHO) {
  // classWhere1 = ld classWhere
  Rsh_Fir_reg_classWhere1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // classWhere2 = force? classWhere1
  Rsh_Fir_reg_classWhere2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classWhere1_);
  // checkMissing(classWhere2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_classWhere2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return classWhere2
  return Rsh_Fir_reg_classWhere2_;
}
SEXP Rsh_Fir_user_promise_inner3943625592_2(SEXP CCP, SEXP RHO) {
  // cdef = ld cdef
  Rsh_Fir_reg_cdef = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // cdef1 = force? cdef
  Rsh_Fir_reg_cdef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef);
  // checkMissing(cdef1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_cdef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return cdef1
  return Rsh_Fir_reg_cdef1_;
}
SEXP Rsh_Fir_user_promise_inner3943625592_3(SEXP CCP, SEXP RHO) {
  // what2 = ld what
  Rsh_Fir_reg_what2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // what3 = force? what2
  Rsh_Fir_reg_what3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what2_);
  // checkMissing(what3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_what3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return what3
  return Rsh_Fir_reg_what3_;
}
SEXP Rsh_Fir_user_promise_inner3943625592_4(SEXP CCP, SEXP RHO) {
  // Class1 = ld Class
  Rsh_Fir_reg_Class1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // Class2 = force? Class1
  Rsh_Fir_reg_Class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class1_);
  // checkMissing(Class2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_Class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return Class2
  return Rsh_Fir_reg_Class2_;
}
SEXP Rsh_Fir_user_promise_inner3943625592_5(SEXP CCP, SEXP RHO) {
  // cdef2 = ld cdef
  Rsh_Fir_reg_cdef2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // cdef3 = force? cdef2
  Rsh_Fir_reg_cdef3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef2_);
  // checkMissing(cdef3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_cdef3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return cdef3
  return Rsh_Fir_reg_cdef3_;
}
SEXP Rsh_Fir_user_promise_inner3943625592_6(SEXP CCP, SEXP RHO) {
  // cdef6 = ld cdef
  Rsh_Fir_reg_cdef6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // cdef7 = force? cdef6
  Rsh_Fir_reg_cdef7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef6_);
  // checkMissing(cdef7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_cdef7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return cdef7
  return Rsh_Fir_reg_cdef7_;
}
SEXP Rsh_Fir_user_promise_inner3943625592_7(SEXP CCP, SEXP RHO) {
  // r22 = clos inner3618118985
  Rsh_Fir_reg_r22_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3618118985_, RHO, CCP);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_function_inner3618118985_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3618118985 dynamic dispatch ([cl])

  return Rsh_Fir_user_version_inner3618118985_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3618118985_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3618118985 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3618118985/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_cl;  // cl
  SEXP Rsh_Fir_reg__removeSubClass1;  // _removeSubClass
  SEXP Rsh_Fir_reg_what1;  // what
  SEXP Rsh_Fir_reg_what1_1;  // what1
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_Class1;  // Class
  SEXP Rsh_Fir_reg_Class1_1;  // Class1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_cl1_;  // cl1
  SEXP Rsh_Fir_reg_cl2_;  // cl2
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r3_1;  // r3

  // Bind parameters
  Rsh_Fir_reg_cl = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st cl = cl
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_cl, RHO);
  (void)(Rsh_Fir_reg_cl);
  // _removeSubClass = ldf `.removeSubClass`
  Rsh_Fir_reg__removeSubClass1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   what = ld what;
  //   what1 = force? what;
  //   checkMissing(what1);
  //   return what1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3618118985_, CCP, RHO);
  // p1 = prom<V +>{
  //   Class = ld Class;
  //   Class1 = force? Class;
  //   checkMissing(Class1);
  //   return Class1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3618118985_1, CCP, RHO);
  // p2 = prom<V +>{
  //   cl1 = ld cl;
  //   cl2 = force? cl1;
  //   checkMissing(cl2);
  //   return cl2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3618118985_2, CCP, RHO);
  // r3 = dyn _removeSubClass(p, p1, p2)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args35[2] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__removeSubClass1, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_promise_inner3618118985_(SEXP CCP, SEXP RHO) {
  // what = ld what
  Rsh_Fir_reg_what1 = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // what1 = force? what
  Rsh_Fir_reg_what1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_what1);
  // checkMissing(what1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_what1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return what1
  return Rsh_Fir_reg_what1_1;
}
SEXP Rsh_Fir_user_promise_inner3618118985_1(SEXP CCP, SEXP RHO) {
  // Class = ld Class
  Rsh_Fir_reg_Class1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // Class1 = force? Class
  Rsh_Fir_reg_Class1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class1);
  // checkMissing(Class1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_Class1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return Class1
  return Rsh_Fir_reg_Class1_1;
}
SEXP Rsh_Fir_user_promise_inner3618118985_2(SEXP CCP, SEXP RHO) {
  // cl1 = ld cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // cl2 = force? cl1
  Rsh_Fir_reg_cl2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl1_);
  // checkMissing(cl2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_cl2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return cl2
  return Rsh_Fir_reg_cl2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
