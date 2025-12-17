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
  // st makeEnvRefMethods = r
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
  SEXP Rsh_Fir_reg__envRefMethods;  // _envRefMethods
  SEXP Rsh_Fir_reg__envRefMethods1_;  // _envRefMethods1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_methods;  // methods
  SEXP Rsh_Fir_reg_methods1_;  // methods1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_allMethods;  // allMethods
  SEXP Rsh_Fir_reg_allMethods1_;  // allMethods1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_makeClassMethod;  // makeClassMethod
  SEXP Rsh_Fir_reg_methods2_;  // methods2
  SEXP Rsh_Fir_reg_methods3_;  // methods3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_methods5_;  // methods5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_method3_;  // method3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_allMethods2_;  // allMethods2
  SEXP Rsh_Fir_reg_allMethods3_;  // allMethods3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_method4_;  // method4
  SEXP Rsh_Fir_reg_method5_;  // method5
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg__methodsNamespace;  // _methodsNamespace
  SEXP Rsh_Fir_reg__methodsNamespace1_;  // _methodsNamespace1
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg__methodsNamespace3_;  // _methodsNamespace3
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_methods6_;  // methods6
  SEXP Rsh_Fir_reg_methods7_;  // methods7

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // _envRefMethods = ld `.envRefMethods`
  Rsh_Fir_reg__envRefMethods = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L0_:;
  // st allMethods = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // allMethods = ld allMethods
  Rsh_Fir_reg_allMethods = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if c then L10() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L3()
    goto L3_;
  }

L2_:;
  // st methods = dx3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L1(i8)
  // L1(i8)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i8_;
  goto L1_;

L3_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // st method = x
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // makeClassMethod = ldf makeClassMethod
  Rsh_Fir_reg_makeClassMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

D0_:;
  // deopt 0 [_envRefMethods]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg__envRefMethods;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // _envRefMethods1 = force? _envRefMethods
  Rsh_Fir_reg__envRefMethods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__envRefMethods);
  // checkMissing(_envRefMethods1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg__envRefMethods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // st methods = _envRefMethods1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg__envRefMethods1_, RHO);
  (void)(Rsh_Fir_reg__envRefMethods1_);
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // methods = ld methods
  Rsh_Fir_reg_methods = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<sym methods>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D1_:;
  // deopt 5 [methods]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_methods;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // methods1 = force? methods
  Rsh_Fir_reg_methods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methods);
  // checkMissing(methods1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_methods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn names(methods1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_methods1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

D3_:;
  // deopt 10 [allMethods]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_allMethods;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // allMethods1 = force? allMethods
  Rsh_Fir_reg_allMethods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allMethods);
  // checkMissing(allMethods1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_allMethods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // s = toForSeq(allMethods1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_allMethods1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 10);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L10_:;
  // _methodsNamespace = ld `.methodsNamespace`
  Rsh_Fir_reg__methodsNamespace = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D4_:;
  // deopt 13 [i2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // p = prom<V +>{
  //   methods2 = ld methods;
  //   methods3 = force? methods2;
  //   checkMissing(methods3);
  //   c1 = `is.object`(methods3);
  //   if c1 then L1() else L2(methods3);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", methods3);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(methods5):
  //   method = ld method;
  //   method1 = force? method;
  //   __ = ldf `[[` in base;
  //   r3 = dyn __(methods5, method1);
  //   goto L0(r3);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // p1 = prom<V +>{
  //   method2 = ld method;
  //   method3 = force? method2;
  //   checkMissing(method3);
  //   return method3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_1, CCP, RHO);
  // p2 = prom<V +>{
  //   allMethods2 = ld allMethods;
  //   allMethods3 = force? allMethods2;
  //   checkMissing(allMethods3);
  //   return allMethods3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_2, CCP, RHO);
  // r7 = dyn makeClassMethod(p, p1, "envRefClass", "", p2)
  SEXP Rsh_Fir_array_args19[5];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args19[4] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[5];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_makeClassMethod, 5, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D5_:;
  // deopt 19 [i2, r7]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L12_:;
  // l1 = ld methods
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c2 = `is.object`(l1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c2 then L13() else L14(i2, r7, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L13()
    goto L13_;
  } else {
  // L14(i2, r7, l1)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L14_;
  }

L13_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l1, r7)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L15() else L14(i2, r7, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L15()
    goto L15_;
  } else {
  // L14(i2, r7, dr2)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr2_;
    goto L14_;
  }

L14_:;
  // method4 = ld method
  Rsh_Fir_reg_method4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

L15_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L2(i2, dx2)
  // L2(i2, dx2)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

D6_:;
  // deopt 21 [i6, r9, l3, r7, method4]
  SEXP Rsh_Fir_array_deopt_stack6[5];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack6[4] = Rsh_Fir_reg_method4_;
  Rsh_Fir_deopt(21, 5, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // method5 = force? method4
  Rsh_Fir_reg_method5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method4_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r12 = dyn ____(l3, r7, method5)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_method5_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(i6, r12)
  // L2(i6, r12)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L2_;

D7_:;
  // deopt 28 [_methodsNamespace]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg__methodsNamespace;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // _methodsNamespace1 = force? _methodsNamespace
  Rsh_Fir_reg__methodsNamespace1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__methodsNamespace);
  // checkMissing(_methodsNamespace1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__methodsNamespace1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // l4 = ld methods
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c3 = `is.object`(l4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c3 then L19() else L20(_methodsNamespace1, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L19()
    goto L19_;
  } else {
  // L20(_methodsNamespace1, l4)
    Rsh_Fir_reg__methodsNamespace3_ = Rsh_Fir_reg__methodsNamespace1_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L20_;
  }

L18_:;
  // st methods = dx5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // l7 = ld methods
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c4 = `is.object`(l7)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c4 then L23() else L24("methods", l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L23()
    goto L23_;
  } else {
  // L24("methods", l7)
    Rsh_Fir_reg_r15_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L24_;
  }

L19_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l4, _methodsNamespace1)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg__methodsNamespace1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args28);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc2 then L21() else L20(_methodsNamespace1, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L21()
    goto L21_;
  } else {
  // L20(_methodsNamespace1, dr4)
    Rsh_Fir_reg__methodsNamespace3_ = Rsh_Fir_reg__methodsNamespace1_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr4_;
    goto L20_;
  }

L20_:;
  // r13 = `$<-`(l6, <sym .objectParent>, _methodsNamespace1)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg__methodsNamespace1_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L18(r13)
  // L18(r13)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r13_;
  goto L18_;

L21_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L18(dx4)
  // L18(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L18_;

L22_:;
  // st methods = dx7
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // methods6 = ld methods
  Rsh_Fir_reg_methods6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

L23_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l7, "methods")
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args32);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc3 then L25() else L24("methods", dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L25()
    goto L25_;
  } else {
  // L24("methods", dr6)
    Rsh_Fir_reg_r15_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr6_;
    goto L24_;
  }

L24_:;
  // r18 = `$<-`(l9, <sym .objectPackage>, "methods")
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L22(r18)
  // L22(r18)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r18_;
  goto L22_;

L25_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L22(dx6)
  // L22(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L22_;

D8_:;
  // deopt 38 [methods6]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_methods6_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // methods7 = force? methods6
  Rsh_Fir_reg_methods7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methods6_);
  // checkMissing(methods7)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_methods7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return methods7
  return Rsh_Fir_reg_methods7_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // methods2 = ld methods
  Rsh_Fir_reg_methods2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // methods3 = force? methods2
  Rsh_Fir_reg_methods3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methods2_);
  // checkMissing(methods3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_methods3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(methods3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_methods3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(methods3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(methods3)
    Rsh_Fir_reg_methods5_ = Rsh_Fir_reg_methods3_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", methods3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_methods3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_methods5_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // method = ld method
  Rsh_Fir_reg_method = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // method1 = force? method
  Rsh_Fir_reg_method1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r3 = dyn __(methods5, method1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_methods5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_method1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO) {
  // method2 = ld method
  Rsh_Fir_reg_method2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // method3 = force? method2
  Rsh_Fir_reg_method3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method2_);
  // checkMissing(method3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_method3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return method3
  return Rsh_Fir_reg_method3_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO) {
  // allMethods2 = ld allMethods
  Rsh_Fir_reg_allMethods2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // allMethods3 = force? allMethods2
  Rsh_Fir_reg_allMethods3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allMethods2_);
  // checkMissing(allMethods3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_allMethods3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return allMethods3
  return Rsh_Fir_reg_allMethods3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
