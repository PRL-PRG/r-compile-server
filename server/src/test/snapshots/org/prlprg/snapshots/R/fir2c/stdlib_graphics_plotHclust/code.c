#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner108593464_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner108593464_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner108593464_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner108593464_12(SEXP CCP, SEXP RHO);
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
  // r = clos inner108593464
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner108593464_, RHO, CCP);
  // st plotHclust = r
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
SEXP Rsh_Fir_user_function_inner108593464_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner108593464 dynamic dispatch ([n, merge, height, order, hang, labels, `...`])

  return Rsh_Fir_user_version_inner108593464_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner108593464_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner108593464 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner108593464/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_merge;  // merge
  SEXP Rsh_Fir_reg_height;  // height
  SEXP Rsh_Fir_reg_order;  // order
  SEXP Rsh_Fir_reg_hang;  // hang
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg__External_graphics;  // _External_graphics
  SEXP Rsh_Fir_reg_C_dendwindow;  // C_dendwindow
  SEXP Rsh_Fir_reg_C_dendwindow1_;  // C_dendwindow1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_merge1_;  // merge1
  SEXP Rsh_Fir_reg_merge2_;  // merge2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_height1_;  // height1
  SEXP Rsh_Fir_reg_height2_;  // height2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_hang1_;  // hang1
  SEXP Rsh_Fir_reg_hang2_;  // hang2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg__External_graphics1_;  // _External_graphics1
  SEXP Rsh_Fir_reg_C_dend;  // C_dend
  SEXP Rsh_Fir_reg_C_dend1_;  // C_dend1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_merge3_;  // merge3
  SEXP Rsh_Fir_reg_merge4_;  // merge4
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_height3_;  // height3
  SEXP Rsh_Fir_reg_height4_;  // height4
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_order1_;  // order1
  SEXP Rsh_Fir_reg_order2_;  // order2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_hang3_;  // hang3
  SEXP Rsh_Fir_reg_hang4_;  // hang4
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_labels3_;  // labels3
  SEXP Rsh_Fir_reg_labels4_;  // labels4
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r18_;  // r18

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_merge = PARAMS[1];
  Rsh_Fir_reg_height = PARAMS[2];
  Rsh_Fir_reg_order = PARAMS[3];
  Rsh_Fir_reg_hang = PARAMS[4];
  Rsh_Fir_reg_labels = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st merge = merge
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_merge, RHO);
  (void)(Rsh_Fir_reg_merge);
  // st height = height
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_height, RHO);
  (void)(Rsh_Fir_reg_height);
  // st order = order
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_order, RHO);
  (void)(Rsh_Fir_reg_order);
  // st hang = hang
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_hang, RHO);
  (void)(Rsh_Fir_reg_hang);
  // st labels = labels
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_labels, RHO);
  (void)(Rsh_Fir_reg_labels);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `.External.graphics`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `.External.graphics` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // sym1 = ldf `.External.graphics`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `.External.graphics` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

L2_:;
  // _External_graphics = ldf `.External.graphics`
  Rsh_Fir_reg__External_graphics = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<sym C_dendwindow>, <sym n>, <sym merge>, <sym height>, <sym hang>, <sym labels>, <sym ...>)
  SEXP Rsh_Fir_array_args2[7];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[6] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[7];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 7, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   C_dendwindow = ld C_dendwindow;
  //   C_dendwindow1 = force? C_dendwindow;
  //   checkMissing(C_dendwindow1);
  //   return C_dendwindow1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_, CCP, RHO);
  // p1 = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   return n2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_1, CCP, RHO);
  // p2 = prom<V +>{
  //   merge1 = ld merge;
  //   merge2 = force? merge1;
  //   checkMissing(merge2);
  //   return merge2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_2, CCP, RHO);
  // p3 = prom<V +>{
  //   height1 = ld height;
  //   height2 = force? height1;
  //   checkMissing(height2);
  //   return height2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_3, CCP, RHO);
  // p4 = prom<V +>{
  //   hang1 = ld hang;
  //   hang2 = force? hang1;
  //   checkMissing(hang2);
  //   return hang2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_4, CCP, RHO);
  // p5 = prom<V +>{
  //   labels1 = ld labels;
  //   labels2 = force? labels1;
  //   checkMissing(labels2);
  //   return labels2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_5, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r8 = dyn _External_graphics[, , , , , , `...`](p, p1, p2, p3, p4, p5, ddd1)
  SEXP Rsh_Fir_array_args9[7];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args9[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args9[4] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args9[5] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args9[6] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names1[7];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External_graphics, 7, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 10 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // _External_graphics1 = ldf `.External.graphics`
  Rsh_Fir_reg__External_graphics1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L7_:;
  // r9 = dyn base1(<sym C_dend>, <sym n>, <sym merge>, <sym height>, <sym order>, <sym hang>, <sym labels>, <sym ...>)
  SEXP Rsh_Fir_array_args10[8];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args10[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args10[5] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args10[6] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args10[7] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[8];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 8, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L1_;

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p6 = prom<V +>{
  //   C_dend = ld C_dend;
  //   C_dend1 = force? C_dend;
  //   checkMissing(C_dend1);
  //   return C_dend1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_6, CCP, RHO);
  // p7 = prom<V +>{
  //   n3 = ld n;
  //   n4 = force? n3;
  //   checkMissing(n4);
  //   return n4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_7, CCP, RHO);
  // p8 = prom<V +>{
  //   merge3 = ld merge;
  //   merge4 = force? merge3;
  //   checkMissing(merge4);
  //   return merge4;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_8, CCP, RHO);
  // p9 = prom<V +>{
  //   height3 = ld height;
  //   height4 = force? height3;
  //   checkMissing(height4);
  //   return height4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_9, CCP, RHO);
  // p10 = prom<V +>{
  //   order1 = ld order;
  //   order2 = force? order1;
  //   checkMissing(order2);
  //   return order2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_10, CCP, RHO);
  // p11 = prom<V +>{
  //   hang3 = ld hang;
  //   hang4 = force? hang3;
  //   checkMissing(hang4);
  //   return hang4;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_11, CCP, RHO);
  // p12 = prom<V +>{
  //   labels3 = ld labels;
  //   labels4 = force? labels3;
  //   checkMissing(labels4);
  //   return labels4;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner108593464_12, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r18 = dyn _External_graphics1[, , , , , , , `...`](p6, p7, p8, p9, p10, p11, p12, ddd2)
  SEXP Rsh_Fir_array_args18[8];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args18[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args18[4] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args18[5] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args18[6] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args18[7] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names3[8];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_array_arg_names3[7] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External_graphics1_, 8, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 22 [r18]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L1(r18)
  // L1(r18)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r18_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner108593464_(SEXP CCP, SEXP RHO) {
  // C_dendwindow = ld C_dendwindow
  Rsh_Fir_reg_C_dendwindow = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // C_dendwindow1 = force? C_dendwindow
  Rsh_Fir_reg_C_dendwindow1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_dendwindow);
  // checkMissing(C_dendwindow1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_C_dendwindow1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return C_dendwindow1
  return Rsh_Fir_reg_C_dendwindow1_;
}
SEXP Rsh_Fir_user_promise_inner108593464_1(SEXP CCP, SEXP RHO) {
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return n2
  return Rsh_Fir_reg_n2_;
}
SEXP Rsh_Fir_user_promise_inner108593464_2(SEXP CCP, SEXP RHO) {
  // merge1 = ld merge
  Rsh_Fir_reg_merge1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // merge2 = force? merge1
  Rsh_Fir_reg_merge2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_merge1_);
  // checkMissing(merge2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_merge2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return merge2
  return Rsh_Fir_reg_merge2_;
}
SEXP Rsh_Fir_user_promise_inner108593464_3(SEXP CCP, SEXP RHO) {
  // height1 = ld height
  Rsh_Fir_reg_height1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // height2 = force? height1
  Rsh_Fir_reg_height2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_height1_);
  // checkMissing(height2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_height2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return height2
  return Rsh_Fir_reg_height2_;
}
SEXP Rsh_Fir_user_promise_inner108593464_4(SEXP CCP, SEXP RHO) {
  // hang1 = ld hang
  Rsh_Fir_reg_hang1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // hang2 = force? hang1
  Rsh_Fir_reg_hang2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hang1_);
  // checkMissing(hang2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_hang2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return hang2
  return Rsh_Fir_reg_hang2_;
}
SEXP Rsh_Fir_user_promise_inner108593464_5(SEXP CCP, SEXP RHO) {
  // labels1 = ld labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // labels2 = force? labels1
  Rsh_Fir_reg_labels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels1_);
  // checkMissing(labels2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_labels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return labels2
  return Rsh_Fir_reg_labels2_;
}
SEXP Rsh_Fir_user_promise_inner108593464_6(SEXP CCP, SEXP RHO) {
  // C_dend = ld C_dend
  Rsh_Fir_reg_C_dend = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // C_dend1 = force? C_dend
  Rsh_Fir_reg_C_dend1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_dend);
  // checkMissing(C_dend1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_C_dend1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return C_dend1
  return Rsh_Fir_reg_C_dend1_;
}
SEXP Rsh_Fir_user_promise_inner108593464_7(SEXP CCP, SEXP RHO) {
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return n4
  return Rsh_Fir_reg_n4_;
}
SEXP Rsh_Fir_user_promise_inner108593464_8(SEXP CCP, SEXP RHO) {
  // merge3 = ld merge
  Rsh_Fir_reg_merge3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // merge4 = force? merge3
  Rsh_Fir_reg_merge4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_merge3_);
  // checkMissing(merge4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_merge4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return merge4
  return Rsh_Fir_reg_merge4_;
}
SEXP Rsh_Fir_user_promise_inner108593464_9(SEXP CCP, SEXP RHO) {
  // height3 = ld height
  Rsh_Fir_reg_height3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // height4 = force? height3
  Rsh_Fir_reg_height4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_height3_);
  // checkMissing(height4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_height4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return height4
  return Rsh_Fir_reg_height4_;
}
SEXP Rsh_Fir_user_promise_inner108593464_10(SEXP CCP, SEXP RHO) {
  // order1 = ld order
  Rsh_Fir_reg_order1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // order2 = force? order1
  Rsh_Fir_reg_order2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order1_);
  // checkMissing(order2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_order2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return order2
  return Rsh_Fir_reg_order2_;
}
SEXP Rsh_Fir_user_promise_inner108593464_11(SEXP CCP, SEXP RHO) {
  // hang3 = ld hang
  Rsh_Fir_reg_hang3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // hang4 = force? hang3
  Rsh_Fir_reg_hang4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hang3_);
  // checkMissing(hang4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_hang4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return hang4
  return Rsh_Fir_reg_hang4_;
}
SEXP Rsh_Fir_user_promise_inner108593464_12(SEXP CCP, SEXP RHO) {
  // labels3 = ld labels
  Rsh_Fir_reg_labels3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // labels4 = force? labels3
  Rsh_Fir_reg_labels4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels3_);
  // checkMissing(labels4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_labels4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return labels4
  return Rsh_Fir_reg_labels4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
