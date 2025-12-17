#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1102162496_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1102162496_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1102162496_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1102162496_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1102162496_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1102162496_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1102162496_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1102162496_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1102162496_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1102162496_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1102162496_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1102162496_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner1102162496
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1102162496_, RHO, CCP);
  // st `.makeDefaultBinding` = r
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
SEXP Rsh_Fir_user_function_inner1102162496_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1102162496 dynamic dispatch ([fieldName, fieldClass, readOnly, where])

  return Rsh_Fir_user_version_inner1102162496_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1102162496_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1102162496 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1102162496/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_fieldName;  // fieldName
  SEXP Rsh_Fir_reg_fieldClass;  // fieldClass
  SEXP Rsh_Fir_reg_readOnly;  // readOnly
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_readOnly_isMissing;  // readOnly_isMissing
  SEXP Rsh_Fir_reg_readOnly_orDefault;  // readOnly_orDefault
  SEXP Rsh_Fir_reg__bindingMetaName;  // _bindingMetaName
  SEXP Rsh_Fir_reg_fieldName1_;  // fieldName1
  SEXP Rsh_Fir_reg_fieldName2_;  // fieldName2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_readOnly1_;  // readOnly1
  SEXP Rsh_Fir_reg_readOnly2_;  // readOnly2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_eval1_;  // eval1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_substitute1_;  // substitute1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_environment__;  // environment__
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_fieldName3_;  // fieldName3
  SEXP Rsh_Fir_reg_fieldName4_;  // fieldName4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_fieldClass1_;  // fieldClass1
  SEXP Rsh_Fir_reg_fieldClass2_;  // fieldClass2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_isVirtualClass;  // isVirtualClass
  SEXP Rsh_Fir_reg_fieldClass3_;  // fieldClass3
  SEXP Rsh_Fir_reg_fieldClass4_;  // fieldClass4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_fieldName5_;  // fieldName5
  SEXP Rsh_Fir_reg_fieldName6_;  // fieldName6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_fieldClass5_;  // fieldClass5
  SEXP Rsh_Fir_reg_fieldClass6_;  // fieldClass6
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_new2_;  // new2
  SEXP Rsh_Fir_reg_fieldClass7_;  // fieldClass7
  SEXP Rsh_Fir_reg_fieldClass8_;  // fieldClass8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_init;  // init
  SEXP Rsh_Fir_reg_init1_;  // init1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_fieldName7_;  // fieldName7
  SEXP Rsh_Fir_reg_fieldName8_;  // fieldName8
  SEXP Rsh_Fir_reg_metaName;  // metaName
  SEXP Rsh_Fir_reg_metaName1_;  // metaName1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1

  // Bind parameters
  Rsh_Fir_reg_fieldName = PARAMS[0];
  Rsh_Fir_reg_fieldClass = PARAMS[1];
  Rsh_Fir_reg_readOnly = PARAMS[2];
  Rsh_Fir_reg_where = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st fieldName = fieldName
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_fieldName, RHO);
  (void)(Rsh_Fir_reg_fieldName);
  // st fieldClass = fieldClass
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_fieldClass, RHO);
  (void)(Rsh_Fir_reg_fieldClass);
  // readOnly_isMissing = missing.0(readOnly)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_readOnly;
  Rsh_Fir_reg_readOnly_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if readOnly_isMissing then L0(FALSE) else L0(readOnly)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_readOnly_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_readOnly_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(readOnly)
    Rsh_Fir_reg_readOnly_orDefault = Rsh_Fir_reg_readOnly;
    goto L0_;
  }

L0_:;
  // st readOnly = readOnly_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_readOnly_orDefault, RHO);
  (void)(Rsh_Fir_reg_readOnly_orDefault);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // _bindingMetaName = ldf `.bindingMetaName`
  Rsh_Fir_reg__bindingMetaName = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L1_:;
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

L2_:;
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

L3_:;
  // new2 = ldf new
  Rsh_Fir_reg_new2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L27() else D16()
  // L27()
  goto L27_;

L4_:;
  // st init = r23
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L5_:;
  // st value = r27
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard3 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L6_:;
  // l1 = ld value
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L39() else D24()
  // L39()
  goto L39_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   fieldName1 = ld fieldName;
  //   fieldName2 = force? fieldName1;
  //   checkMissing(fieldName2);
  //   return fieldName2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_, CCP, RHO);
  // r1 = dyn _bindingMetaName(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__bindingMetaName, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st metaName = r1
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // readOnly1 = ld readOnly
  Rsh_Fir_reg_readOnly1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 5 [readOnly1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_readOnly1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // readOnly2 = force? readOnly1
  Rsh_Fir_reg_readOnly2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_readOnly1_);
  // checkMissing(readOnly2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_readOnly2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(readOnly2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_readOnly2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L10() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L1()
    goto L1_;
  }

L10_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p1 = prom<V +>{
  //   sym = ldf substitute;
  //   base = ldf substitute in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   substitute = ldf substitute in base;
  //   r4 = dyn substitute(<lang function((value=), {
  //       if(missing(value), dummyFieldName, {
  //           `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, TRUE, value);
  //           value
  //         })
  //     }, NULL)>, <lang list(dummyField=metaName, thisField=fieldName, dummyClass=fieldClass, dummyFieldName=as.name(metaName))>);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base(<lang function((value=), {
  //       if(missing(value), dummyFieldName, {
  //           `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, TRUE, value);
  //           value
  //         })
  //     }, NULL)>, <lang list(dummyField=metaName, thisField=fieldName, dummyClass=fieldClass, dummyFieldName=as.name(metaName))>);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_1, CCP, RHO);
  // r6 = dyn eval(p1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 10 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // st f = r6
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // goto L2()
  // L2()
  goto L2_;

D5_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p2 = prom<V +>{
  //   sym1 = ldf substitute;
  //   base1 = ldf substitute in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r9):
  //   return r9;
  // L1():
  //   substitute1 = ldf substitute in base;
  //   r10 = dyn substitute1(<lang function((value=), {
  //       if(missing(value), dummyFieldName, {
  //           `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, FALSE, value);
  //           value
  //         })
  //     }, NULL)>, <lang list(dummyField=metaName, dummyClass=fieldClass, thisField=fieldName, dummyFieldName=as.name(metaName))>);
  //   goto L0(r10);
  // L2():
  //   r8 = dyn base1(<lang function((value=), {
  //       if(missing(value), dummyFieldName, {
  //           `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, FALSE, value);
  //           value
  //         })
  //     }, NULL)>, <lang list(dummyField=metaName, dummyClass=fieldClass, thisField=fieldName, dummyFieldName=as.name(metaName))>);
  //   goto L0(r8);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_2, CCP, RHO);
  // r12 = dyn eval1(p2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 15 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // st f = r12
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L2()
  // L2()
  goto L2_;

D7_:;
  // deopt 17 [where1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_where1_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // l = ld f
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // environment__ = ldf `environment<-`
  Rsh_Fir_reg_environment__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L17() else D8()
  // L17()
  goto L17_;

D8_:;
  // deopt 20 [where2, l, where2]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_where2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_where2_;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // r13 = dyn environment__(l, NULL, where2)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_where2_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment__, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L18() else D9()
  // L18()
  goto L18_;

D9_:;
  // deopt 22 [where2, r13]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_where2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // st f = r13
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // new = ldf new
  Rsh_Fir_reg_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L19() else D10()
  // L19()
  goto L19_;

D10_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p3 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_3, CCP, RHO);
  // p4 = prom<V +>{
  //   fieldName3 = ld fieldName;
  //   fieldName4 = force? fieldName3;
  //   checkMissing(fieldName4);
  //   return fieldName4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_4, CCP, RHO);
  // p5 = prom<V +>{
  //   fieldClass1 = ld fieldClass;
  //   fieldClass2 = force? fieldClass1;
  //   checkMissing(fieldClass2);
  //   return fieldClass2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_5, CCP, RHO);
  // r17 = dyn new[, , field, className]("defaultBindingFunction", p3, p4, p5)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args20[3] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names8[3] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new, 4, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L20() else D11()
  // L20()
  goto L20_;

D11_:;
  // deopt 32 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L20_:;
  // st f = r17
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // isVirtualClass = ldf isVirtualClass
  Rsh_Fir_reg_isVirtualClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L21() else D12()
  // L21()
  goto L21_;

D12_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p6 = prom<V +>{
  //   fieldClass3 = ld fieldClass;
  //   fieldClass4 = force? fieldClass3;
  //   checkMissing(fieldClass4);
  //   return fieldClass4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_6, CCP, RHO);
  // r19 = dyn isVirtualClass(p6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isVirtualClass, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L22() else D13()
  // L22()
  goto L22_;

D13_:;
  // deopt 37 [r19]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L22_:;
  // c1 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c1 then L23() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L23()
    goto L23_;
  } else {
  // L3()
    goto L3_;
  }

L23_:;
  // new1 = ldf new
  Rsh_Fir_reg_new1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L24() else D14()
  // L24()
  goto L24_;

D14_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p7 = prom<V +>{
  //   fieldName5 = ld fieldName;
  //   fieldName6 = force? fieldName5;
  //   checkMissing(fieldName6);
  //   return fieldName6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_7, CCP, RHO);
  // p8 = prom<V +>{
  //   fieldClass5 = ld fieldClass;
  //   fieldClass6 = force? fieldClass5;
  //   checkMissing(fieldClass6);
  //   return fieldClass6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_8, CCP, RHO);
  // r22 = dyn new1[, field, className]("uninitializedField", p7, p8)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new1_, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L25() else D15()
  // L25()
  goto L25_;

D15_:;
  // deopt 45 [r22]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L4(r22)
  // L4(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L4_;

D16_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p9 = prom<V +>{
  //   fieldClass7 = ld fieldClass;
  //   fieldClass8 = force? fieldClass7;
  //   checkMissing(fieldClass8);
  //   return fieldClass8;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1102162496_9, CCP, RHO);
  // r25 = dyn new2(p9)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L28() else D17()
  // L28()
  goto L28_;

D17_:;
  // deopt 49 [r25]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L4(r25)
  // L4(r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L4_;

L29_:;
  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L31() else D18()
  // L31()
  goto L31_;

L30_:;
  // r26 = dyn base2(<sym f>, <sym init>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L5(r26)
  // L5(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L5_;

D18_:;
  // deopt 53 [f2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_f2_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L31_:;
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // init = ld init
  Rsh_Fir_reg_init = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L32() else D19()
  // L32()
  goto L32_;

D19_:;
  // deopt 55 [init]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_init;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L32_:;
  // init1 = force? init
  Rsh_Fir_reg_init1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init);
  // checkMissing(init1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_init1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r28 = dyn list(f3, init1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_f3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_init1_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L33() else D20()
  // L33()
  goto L33_;

D20_:;
  // deopt 58 [r28]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L5(r28)
  // L5(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L5_;

L34_:;
  // fieldName7 = ld fieldName
  Rsh_Fir_reg_fieldName7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D21()
  // L36()
  goto L36_;

L35_:;
  // r29 = dyn base3(<sym fieldName>, <sym metaName>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L6(r29)
  // L6(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L6_;

D21_:;
  // deopt 62 [fieldName7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_fieldName7_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L36_:;
  // fieldName8 = force? fieldName7
  Rsh_Fir_reg_fieldName8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fieldName7_);
  // checkMissing(fieldName8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_fieldName8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // metaName = ld metaName
  Rsh_Fir_reg_metaName = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L37() else D22()
  // L37()
  goto L37_;

D22_:;
  // deopt 64 [metaName]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_metaName;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // metaName1 = force? metaName
  Rsh_Fir_reg_metaName1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_metaName);
  // checkMissing(metaName1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_metaName1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r31 = dyn c2(fieldName8, metaName1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_fieldName8_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_metaName1_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L38() else D23()
  // L38()
  goto L38_;

D23_:;
  // deopt 67 [r31]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L6(r31)
  // L6(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L6_;

D24_:;
  // deopt 69 [r30, l1, r30]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(69, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L39_:;
  // r32 = dyn names__(l1, NULL, r30)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L40() else D25()
  // L40()
  goto L40_;

D25_:;
  // deopt 71 [r30, r32]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L40_:;
  // st value = r32
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L41() else D26()
  // L41()
  goto L41_;

D26_:;
  // deopt 73 [value]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L41_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_(SEXP CCP, SEXP RHO) {
  // fieldName1 = ld fieldName
  Rsh_Fir_reg_fieldName1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fieldName2 = force? fieldName1
  Rsh_Fir_reg_fieldName2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fieldName1_);
  // checkMissing(fieldName2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_fieldName2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return fieldName2
  return Rsh_Fir_reg_fieldName2_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_1(SEXP CCP, SEXP RHO) {
  // sym = ldf substitute
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf substitute in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r4 = dyn substitute(<lang function((value=), {
  //     if(missing(value), dummyFieldName, {
  //         `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, TRUE, value);
  //         value
  //       })
  //   }, NULL)>, <lang list(dummyField=metaName, thisField=fieldName, dummyClass=fieldClass, dummyFieldName=as.name(metaName))>)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base(<lang function((value=), {
  //     if(missing(value), dummyFieldName, {
  //         `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, TRUE, value);
  //         value
  //       })
  //   }, NULL)>, <lang list(dummyField=metaName, thisField=fieldName, dummyClass=fieldClass, dummyFieldName=as.name(metaName))>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_2(SEXP CCP, SEXP RHO) {
  // sym1 = ldf substitute
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf substitute in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r9
  return Rsh_Fir_reg_r9_;

L1_:;
  // substitute1 = ldf substitute in base
  Rsh_Fir_reg_substitute1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r10 = dyn substitute1(<lang function((value=), {
  //     if(missing(value), dummyFieldName, {
  //         `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, FALSE, value);
  //         value
  //       })
  //   }, NULL)>, <lang list(dummyField=metaName, dummyClass=fieldClass, thisField=fieldName, dummyFieldName=as.name(metaName))>)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute1_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L0_;

L2_:;
  // r8 = dyn base1(<lang function((value=), {
  //     if(missing(value), dummyFieldName, {
  //         `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, FALSE, value);
  //         value
  //       })
  //   }, NULL)>, <lang list(dummyField=metaName, dummyClass=fieldClass, thisField=fieldName, dummyFieldName=as.name(metaName))>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_3(SEXP CCP, SEXP RHO) {
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_4(SEXP CCP, SEXP RHO) {
  // fieldName3 = ld fieldName
  Rsh_Fir_reg_fieldName3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fieldName4 = force? fieldName3
  Rsh_Fir_reg_fieldName4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fieldName3_);
  // checkMissing(fieldName4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_fieldName4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return fieldName4
  return Rsh_Fir_reg_fieldName4_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_5(SEXP CCP, SEXP RHO) {
  // fieldClass1 = ld fieldClass
  Rsh_Fir_reg_fieldClass1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fieldClass2 = force? fieldClass1
  Rsh_Fir_reg_fieldClass2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fieldClass1_);
  // checkMissing(fieldClass2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_fieldClass2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return fieldClass2
  return Rsh_Fir_reg_fieldClass2_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_6(SEXP CCP, SEXP RHO) {
  // fieldClass3 = ld fieldClass
  Rsh_Fir_reg_fieldClass3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fieldClass4 = force? fieldClass3
  Rsh_Fir_reg_fieldClass4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fieldClass3_);
  // checkMissing(fieldClass4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_fieldClass4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return fieldClass4
  return Rsh_Fir_reg_fieldClass4_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_7(SEXP CCP, SEXP RHO) {
  // fieldName5 = ld fieldName
  Rsh_Fir_reg_fieldName5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fieldName6 = force? fieldName5
  Rsh_Fir_reg_fieldName6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fieldName5_);
  // checkMissing(fieldName6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_fieldName6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return fieldName6
  return Rsh_Fir_reg_fieldName6_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_8(SEXP CCP, SEXP RHO) {
  // fieldClass5 = ld fieldClass
  Rsh_Fir_reg_fieldClass5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fieldClass6 = force? fieldClass5
  Rsh_Fir_reg_fieldClass6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fieldClass5_);
  // checkMissing(fieldClass6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_fieldClass6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return fieldClass6
  return Rsh_Fir_reg_fieldClass6_;
}
SEXP Rsh_Fir_user_promise_inner1102162496_9(SEXP CCP, SEXP RHO) {
  // fieldClass7 = ld fieldClass
  Rsh_Fir_reg_fieldClass7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fieldClass8 = force? fieldClass7
  Rsh_Fir_reg_fieldClass8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fieldClass7_);
  // checkMissing(fieldClass8)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_fieldClass8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return fieldClass8
  return Rsh_Fir_reg_fieldClass8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
