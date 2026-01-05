#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_from_R_inner247789382_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_inner247789382_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner247789382_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner247789382_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_main(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_eval;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_obj;
  SEXP Rsh_Fir_reg_obj1_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_eval1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_list2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_original;
  SEXP Rsh_Fir_reg_original1_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_eval2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_obj2_;
  SEXP Rsh_Fir_reg_obj3_;
  SEXP Rsh_Fir_reg_obj4_;
  SEXP Rsh_Fir_reg_obj5_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_original2_;
  SEXP Rsh_Fir_reg_original3_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_original4_;
  SEXP Rsh_Fir_reg_original5_;
  SEXP Rsh_Fir_reg_identical3_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_identical4_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_c37_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L0_:;
  // st x2 = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // st x1 = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // l = ld x1
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args1);
  // if c then L15() else L16(2.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L16(2.0, l)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L16_;
  }

L11_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r2 = dyn list(1.0)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r = dyn base[a](1.0)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r;
  goto L0_;

D0_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L14_:;
  // st x1 = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L15_:;
  // dr = tryDispatchBuiltin.0("$<-", l, 2.0)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args4);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if dc then L17() else L16(2.0, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L17()
    goto L17_;
  } else {
  // L16(2.0, dr)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L16_;
  }

L16_:;
  // r7 = `$<-`(l2, <sym b>, 2.0)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args6);
  // goto L14(r7)
  // L14(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L14_;

D1_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L14(dx)
  // L14(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L14_;

L18_:;
  // p = prom<V +>{
  //   sym1 = ldf quote;
  //   base1 = ldf quote in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r9):
  //   return r9;
  // L1():
  //   quote = ldf quote in base;
  //   r10 = dyn quote(<lang `<-`(`$`(x2, b), 2.0)>);
  //   goto L0(r10);
  // L2():
  //   r8 = dyn base1(<lang `<-`(`$`(x2, b), 2.0)>);
  //   goto L0(r8);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r12 = dyn eval(p)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 16 [r12]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

D3_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p1 = prom<V +>{
  //   sym2 = ldf list;
  //   base2 = ldf list in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   list1 = ldf list in base;
  //   r15 = dyn list1(1.0);
  //   goto L0(r15);
  // L2():
  //   r13 = dyn base2[val](1.0);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r17 = dyn structure[, class](p1, "myobj")
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

D4_:;
  // deopt 22 [r17]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // st obj = r17
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // r18 = clos inner247789382
  Rsh_Fir_reg_r18_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner247789382_, RHO, CCP);
  // st `$<-.myobj` = r18
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // obj = ld obj
  Rsh_Fir_reg_obj = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

D5_:;
  // deopt 27 [obj]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_obj;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // obj1 = force? obj
  Rsh_Fir_reg_obj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj);
  // checkMissing(obj1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_obj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // st obj2 = obj1
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_obj1_, RHO);
  (void)(Rsh_Fir_reg_obj1_);
  // st obj1 = obj1
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_obj1_, RHO);
  (void)(Rsh_Fir_reg_obj1_);
  // l3 = ld obj1
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // c1 = `is.object`(l3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args17);
  // if c1 then L24() else L25(10.0, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L24()
    goto L24_;
  } else {
  // L25(10.0, l3)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 19);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L25_;
  }

L23_:;
  // st obj1 = dx3
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

L24_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l3, 10.0)
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args18);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc1 then L26() else L25(10.0, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L26()
    goto L26_;
  } else {
  // L25(10.0, dr2)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 19);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L25_;
  }

L25_:;
  // r23 = `$<-`(l5, <sym test>, 10.0)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args20);
  // goto L23(r23)
  // L23(r23)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r23_;
  goto L23_;

D6_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L23(dx2)
  // L23(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L23_;

L27_:;
  // p2 = prom<V +>{
  //   sym3 = ldf quote;
  //   base3 = ldf quote in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r25):
  //   return r25;
  // L1():
  //   quote1 = ldf quote in base;
  //   r26 = dyn quote1(<lang `<-`(`$`(obj2, test), 10.0)>);
  //   goto L0(r26);
  // L2():
  //   r24 = dyn base3(<lang `<-`(`$`(obj2, test), 10.0)>);
  //   goto L0(r24);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r28 = dyn eval1(p2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

D7_:;
  // deopt 39 [r28]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // sym4 = ldf list
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // base4 = ldf list in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard4 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L1_:;
  // st original = r30
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // original = ld original
  Rsh_Fir_reg_original = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

L29_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r31 = dyn list2(1.0)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L30_:;
  // r29 = dyn base4[a](1.0)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, RHO);
  // goto L1(r29)
  // L1(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L1_;

D8_:;
  // deopt 45 [r31]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 47 [original]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_original;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L1(r31)
  // L1(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L1_;

L32_:;
  // original1 = force? original
  Rsh_Fir_reg_original1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_original);
  // checkMissing(original1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_original1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // st x4 = original1
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_original1_, RHO);
  (void)(Rsh_Fir_reg_original1_);
  // st x3 = original1
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_original1_, RHO);
  (void)(Rsh_Fir_reg_original1_);
  // l6 = ld x3
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // c2 = `is.object`(l6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args30);
  // if c2 then L34() else L35(2.0, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L35(2.0, l6)
    Rsh_Fir_reg_r33_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L35_;
  }

L33_:;
  // st x3 = dx5
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // eval2 = ldf eval
  Rsh_Fir_reg_eval2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L34_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l6, 2.0)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args31);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc2 then L36() else L35(2.0, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L36()
    goto L36_;
  } else {
  // L35(2.0, dr4)
    Rsh_Fir_reg_r33_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr4_;
    goto L35_;
  }

L35_:;
  // r36 = `$<-`(l8, <sym b>, 2.0)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args33);
  // goto L33(r36)
  // L33(r36)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r36_;
  goto L33_;

D10_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L33(dx4)
  // L33(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L33_;

L37_:;
  // p3 = prom<V +>{
  //   sym5 = ldf quote;
  //   base5 = ldf quote in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r38):
  //   return r38;
  // L1():
  //   quote2 = ldf quote in base;
  //   r39 = dyn quote2(<lang `<-`(`$`(x4, b), 2.0)>);
  //   goto L0(r39);
  // L2():
  //   r37 = dyn base5(<lang `<-`(`$`(x4, b), 2.0)>);
  //   goto L0(r37);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r41 = dyn eval2(p3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names15, RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

D11_:;
  // deopt 59 [r41]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // sym6 = ldf identical
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base6 = ldf identical in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard6 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L2_:;
  // c3 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c3 then L44() else L3(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L44()
    goto L44_;
  } else {
  // L3(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L3_;
  }

L39_:;
  // x1 = ld x1
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L41() else D12()
  // L41()
  goto L41_;

L40_:;
  // r42 = dyn base6(<sym x1>, <sym x2>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names16, RHO);
  // goto L2(r42)
  // L2(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L2_;

D12_:;
  // deopt 62 [x1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L3_:;
  // c12 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c12 then L51() else L5(c12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L51()
    goto L51_;
  } else {
  // L5(c12)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c12_;
    goto L5_;
  }

L41_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // x3 = ld x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D13()
  // L42()
  goto L42_;

L44_:;
  // sym7 = ldf identical
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base7 = ldf identical in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard7 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

D13_:;
  // deopt 64 [x3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L4_:;
  // c9 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // c10 = `&&`(c8, c9)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args46);
  // goto L3(c10)
  // L3(c10)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c10_;
  goto L3_;

L5_:;
  // c21 = `as.logical`(c14)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // if c21 then L58() else L7(c21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L58()
    goto L58_;
  } else {
  // L7(c21)
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
    goto L7_;
  }

L42_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r44 = dyn identical(x2, x4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args49[9];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args49[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args49[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args49[6] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args49[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args49[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names17[9];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_array_arg_names17[5] = R_MissingArg;
  Rsh_Fir_array_arg_names17[6] = R_MissingArg;
  Rsh_Fir_array_arg_names17[7] = R_MissingArg;
  Rsh_Fir_array_arg_names17[8] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names17, RHO);
  // check L43() else D14()
  // L43()
  goto L43_;

L45_:;
  // obj2 = ld obj1
  Rsh_Fir_reg_obj2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L47() else D15()
  // L47()
  goto L47_;

L46_:;
  // r45 = dyn base7(<sym obj1>, <sym obj2>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names18, RHO);
  // goto L4(c3, r45)
  // L4(c3, r45)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L4_;

L51_:;
  // sym8 = ldf identical
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base8 = ldf identical in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard8 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

D14_:;
  // deopt 74 [r44]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 77 [c3, obj2]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_obj2_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L6_:;
  // r51 = `!`(r49)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args52);
  // c18 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args53);
  // c19 = `&&`(c17, c18)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args54);
  // goto L5(c19)
  // L5(c19)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c19_;
  goto L5_;

L7_:;
  // c30 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // if c30 then L65() else L9(c30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L65()
    goto L65_;
  } else {
  // L9(c30)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c30_;
    goto L9_;
  }

L43_:;
  // goto L2(r44)
  // L2(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L2_;

L47_:;
  // obj3 = force? obj2
  Rsh_Fir_reg_obj3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj2_);
  // checkMissing(obj3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_obj3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // obj4 = ld obj2
  Rsh_Fir_reg_obj4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L48() else D16()
  // L48()
  goto L48_;

L52_:;
  // x5 = ld x3
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L54() else D18()
  // L54()
  goto L54_;

L53_:;
  // r48 = dyn base8(<sym x3>, <sym original>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names19, RHO);
  // goto L6(c12, r48)
  // L6(c12, r48)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L6_;

L58_:;
  // sym9 = ldf identical
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base9 = ldf identical in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard9 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

D16_:;
  // deopt 79 [c3, obj4]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_obj4_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 93 [c12, x5]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L8_:;
  // r55 = `!`(r53)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args59);
  // c27 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args60);
  // c28 = `&&`(c26, c27)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args61);
  // goto L7(c28)
  // L7(c28)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c28_;
  goto L7_;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c32
  return Rsh_Fir_reg_c32_;

L48_:;
  // obj5 = force? obj4
  Rsh_Fir_reg_obj5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj4_);
  // checkMissing(obj5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_obj5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r47 = dyn identical1(obj3, obj5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args63[9];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_obj3_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_obj5_;
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args63[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args63[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args63[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args63[6] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args63[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args63[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[9];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = R_MissingArg;
  Rsh_Fir_array_arg_names20[5] = R_MissingArg;
  Rsh_Fir_array_arg_names20[6] = R_MissingArg;
  Rsh_Fir_array_arg_names20[7] = R_MissingArg;
  Rsh_Fir_array_arg_names20[8] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, RHO);
  // check L49() else D17()
  // L49()
  goto L49_;

L54_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // original2 = ld original
  Rsh_Fir_reg_original2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L55() else D19()
  // L55()
  goto L55_;

L59_:;
  // x7 = ld x4
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L61() else D21()
  // L61()
  goto L61_;

L60_:;
  // r52 = dyn base9(<sym x4>, <sym original>)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names21, RHO);
  // goto L8(c21, r52)
  // L8(c21, r52)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L8_;

L65_:;
  // sym10 = ldf identical
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base10 = ldf identical in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard10 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

D17_:;
  // deopt 89 [c3, r47]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 95 [c12, original2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_original2_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 110 [c21, x7]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L10_:;
  // c36 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args67);
  // c37 = `&&`(c35, c36)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args68);
  // goto L9(c37)
  // L9(c37)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c37_;
  goto L9_;

L49_:;
  // goto L4(c3, r47)
  // L4(c3, r47)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L4_;

L55_:;
  // original3 = force? original2
  Rsh_Fir_reg_original3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_original2_);
  // checkMissing(original3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_original3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r50 = dyn identical2(x6, original3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args70[9];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_original3_;
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args70[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args70[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args70[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args70[6] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args70[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args70[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names22[9];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_array_arg_names22[5] = R_MissingArg;
  Rsh_Fir_array_arg_names22[6] = R_MissingArg;
  Rsh_Fir_array_arg_names22[7] = R_MissingArg;
  Rsh_Fir_array_arg_names22[8] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names22, RHO);
  // check L56() else D20()
  // L56()
  goto L56_;

L61_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // original4 = ld original
  Rsh_Fir_reg_original4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L62() else D22()
  // L62()
  goto L62_;

L66_:;
  // x9 = ld x3
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L68() else D24()
  // L68()
  goto L68_;

L67_:;
  // r56 = dyn base10(<sym x3>, <sym x4>)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names23, RHO);
  // goto L10(c30, r56)
  // L10(c30, r56)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L10_;

D20_:;
  // deopt 105 [c12, r50]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 112 [c21, original4]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_original4_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 127 [c30, x9]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(127, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L6(c12, r50)
  // L6(c12, r50)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L6_;

L62_:;
  // original5 = force? original4
  Rsh_Fir_reg_original5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_original4_);
  // checkMissing(original5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_original5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // identical3 = ldf identical in base
  Rsh_Fir_reg_identical3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r54 = dyn identical3(x8, original5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args74[9];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_original5_;
  Rsh_Fir_array_args74[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args74[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args74[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args74[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args74[6] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args74[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args74[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names24[9];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_array_arg_names24[6] = R_MissingArg;
  Rsh_Fir_array_arg_names24[7] = R_MissingArg;
  Rsh_Fir_array_arg_names24[8] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical3_, 9, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names24, RHO);
  // check L63() else D23()
  // L63()
  goto L63_;

L68_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // x11 = ld x4
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L69() else D25()
  // L69()
  goto L69_;

D23_:;
  // deopt 122 [c21, r54]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(122, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 129 [c30, x11]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(129, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L8(c21, r54)
  // L8(c21, r54)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L8_;

L69_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // identical4 = ldf identical in base
  Rsh_Fir_reg_identical4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r58 = dyn identical4(x10, x12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args77[9];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args77[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args77[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args77[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args77[6] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args77[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args77[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names25[9];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_array_arg_names25[5] = R_MissingArg;
  Rsh_Fir_array_arg_names25[6] = R_MissingArg;
  Rsh_Fir_array_arg_names25[7] = R_MissingArg;
  Rsh_Fir_array_arg_names25[8] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical4_, 9, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names25, RHO);
  // check L70() else D26()
  // L70()
  goto L70_;

D26_:;
  // deopt 139 [c30, r58]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(139, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L10(c30, r58)
  // L10(c30, r58)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf quote
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf quote in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
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
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r10 = dyn quote(<lang `<-`(`$`(x2, b), 2.0)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L0_;

L2_:;
  // r8 = dyn base1(<lang `<-`(`$`(x2, b), 2.0)>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r15 = dyn list1(1.0)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L0_;

L2_:;
  // r13 = dyn base2[val](1.0)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_quote1_;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf quote
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf quote in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // quote1 = ldf quote in base
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r26 = dyn quote1(<lang `<-`(`$`(obj2, test), 10.0)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L0_;

L2_:;
  // r24 = dyn base3(<lang `<-`(`$`(obj2, test), 10.0)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_quote2_;
  SEXP Rsh_Fir_reg_r39_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf quote
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base5 = ldf quote in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r38
  return Rsh_Fir_reg_r38_;

L1_:;
  // quote2 = ldf quote in base
  Rsh_Fir_reg_quote2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r39 = dyn quote2(<lang `<-`(`$`(x4, b), 2.0)>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L0_;

L2_:;
  // r37 = dyn base5(<lang `<-`(`$`(x4, b), 2.0)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names14, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_from_R_inner247789382_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR inner247789382 dynamic dispatch from R ([x, name, value])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_inner247789382_(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_inner247789382_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner247789382 dynamic dispatch ([x, name, value])

  return Rsh_Fir_user_version_inner247789382_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner247789382_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner247789382 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner247789382/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_name;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_l1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_reg_l2_1;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_name = PARAMS[1];
  Rsh_Fir_reg_value = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 0 [value1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L1_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args79);
  // if c then L2() else L3(value2, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L2()
    goto L2_;
  } else {
  // L3(value2, l)
    Rsh_Fir_reg_value4_ = Rsh_Fir_reg_value2_;
    Rsh_Fir_reg_l2_1 = Rsh_Fir_reg_l1;
    goto L3_;
  }

L0_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_dx1_1, RHO);
  (void)(Rsh_Fir_reg_dx1_1);
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

L2_:;
  // dr = tryDispatchBuiltin.0("[[<-", l, value2)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_value2_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args80);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(value2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L4()
    goto L4_;
  } else {
  // L3(value2, dr)
    Rsh_Fir_reg_value4_ = Rsh_Fir_reg_value2_;
    Rsh_Fir_reg_l2_1 = Rsh_Fir_reg_dr1;
    goto L3_;
  }

L3_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 4 [value4, l2, value2]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l2_1;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_value2_;
  Rsh_Fir_deopt(4, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 10 [x1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;

L5_:;
  // p = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_, 0, NULL, CCP, RHO);
  // r1 = dyn paste0("modified_", p)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names26, RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

L7_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x2
  return Rsh_Fir_reg_x2_1;

D2_:;
  // deopt 7 [value4, l2, value2, r1]
  SEXP Rsh_Fir_array_deopt_stack26[4];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l2_1;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(7, 4, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L6_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r2 = dyn ____(l2, value2, r1)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l2_1;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names27, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner247789382_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_name1_;
  SEXP Rsh_Fir_reg_name2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
