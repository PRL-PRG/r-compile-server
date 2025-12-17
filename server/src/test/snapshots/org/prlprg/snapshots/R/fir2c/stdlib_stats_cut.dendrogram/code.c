#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3733460474_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3733460474_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3733460474_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3733460474_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1098492662_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1098492662_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1098492662_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1098492662_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1098492662_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1098492662_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner3733460474
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3733460474_, RHO, CCP);
  // st `cut.dendrogram` = r
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
SEXP Rsh_Fir_user_function_inner3733460474_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3733460474 dynamic dispatch ([x, h, `...`])

  return Rsh_Fir_user_version_inner3733460474_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3733460474_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3733460474 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3733460474/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_h;  // h
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_assignNodes;  // assignNodes
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_h1_;  // h1
  SEXP Rsh_Fir_reg_h2_;  // h2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_LOWER;  // LOWER
  SEXP Rsh_Fir_reg_LOWER1_;  // LOWER1
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r9_;  // r9

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_h = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st h = h
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_h, RHO);
  (void)(Rsh_Fir_reg_h);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
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
  // st LOWER = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // st X = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // r3 = clos inner1098492662
  Rsh_Fir_reg_r3_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1098492662_, RHO, CCP);
  // st assignNodes = r3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L5_:;
  // assignNodes = ldf assignNodes
  Rsh_Fir_reg_assignNodes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L6_:;
  // r4 = dyn base1[upper, lower](<lang assignNodes(x, h)>, <sym LOWER>)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D1_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3733460474_, CCP, RHO);
  // p1 = prom<V +>{
  //   h1 = ld h;
  //   h2 = force? h1;
  //   checkMissing(h2);
  //   return h2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3733460474_1, CCP, RHO);
  // r8 = dyn assignNodes(p, p1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assignNodes, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // LOWER = ld LOWER
  Rsh_Fir_reg_LOWER = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 19 [LOWER]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_LOWER;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // LOWER1 = force? LOWER
  Rsh_Fir_reg_LOWER1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LOWER);
  // checkMissing(LOWER1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_LOWER1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r9 = dyn list1(r8, LOWER1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_LOWER1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 23 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r9_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3733460474_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3733460474_1(SEXP CCP, SEXP RHO) {
  // h1 = ld h
  Rsh_Fir_reg_h1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // h2 = force? h1
  Rsh_Fir_reg_h2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h1_);
  // checkMissing(h2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_h2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return h2
  return Rsh_Fir_reg_h2_;
}
SEXP Rsh_Fir_user_function_inner1098492662_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1098492662 dynamic dispatch ([subtree, h])

  return Rsh_Fir_user_version_inner1098492662_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1098492662_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1098492662 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1098492662/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_subtree;  // subtree
  SEXP Rsh_Fir_reg_h1;  // h
  SEXP Rsh_Fir_reg_is_leaf;  // is_leaf
  SEXP Rsh_Fir_reg_subtree1_;  // subtree1
  SEXP Rsh_Fir_reg_subtree2_;  // subtree2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_subtree3_;  // subtree3
  SEXP Rsh_Fir_reg_subtree4_;  // subtree4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_K;  // K
  SEXP Rsh_Fir_reg_K1_;  // K1
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_subtree5_;  // subtree5
  SEXP Rsh_Fir_reg_subtree6_;  // subtree6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_subtree8_;  // subtree8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_sub1_;  // sub1
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_h1_1;  // h1
  SEXP Rsh_Fir_reg_h2_1;  // h2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sub2_;  // sub2
  SEXP Rsh_Fir_reg_sub3_;  // sub3
  SEXP Rsh_Fir_reg_attributes;  // attributes
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_at;  // at
  SEXP Rsh_Fir_reg_at1_;  // at1
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_at3_;  // at3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_new_mem;  // new_mem
  SEXP Rsh_Fir_reg_new_mem1_;  // new_mem1
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_new_mem3_;  // new_mem3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_new_mem5_;  // new_mem5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_X;  // X
  SEXP Rsh_Fir_reg_X1_;  // X1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_X2_;  // X2
  SEXP Rsh_Fir_reg_X3_;  // X3
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_X5_;  // X5
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_at4_;  // at4
  SEXP Rsh_Fir_reg_at5_;  // at5
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_i46_;  // i46
  SEXP Rsh_Fir_reg_at8_;  // at8
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_at9_;  // at9
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_at12_;  // at12
  SEXP Rsh_Fir_reg_l25_;  // l25
  SEXP Rsh_Fir_reg_at13_;  // at13
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_attributes__;  // attributes__
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg_at15_;  // at15
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_i52_;  // i52
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_k6_;  // k6
  SEXP Rsh_Fir_reg_k7_;  // k7
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sub4_;  // sub4
  SEXP Rsh_Fir_reg_sub5_;  // sub5
  SEXP Rsh_Fir_reg_l29_;  // l29
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg_sub7_;  // sub7
  SEXP Rsh_Fir_reg_l31_;  // l31
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_i56_;  // i56
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_X8_;  // X8
  SEXP Rsh_Fir_reg_X9_;  // X9
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_X10_;  // X10
  SEXP Rsh_Fir_reg_X11_;  // X11
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_i57_;  // i57
  SEXP Rsh_Fir_reg_assignNodes1;  // assignNodes
  SEXP Rsh_Fir_reg_sub10_;  // sub10
  SEXP Rsh_Fir_reg_sub11_;  // sub11
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_h3_;  // h3
  SEXP Rsh_Fir_reg_h4_;  // h4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_l32_;  // l32
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_i59_;  // i59
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_l34_;  // l34
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_i61_;  // i61
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_k8_;  // k8
  SEXP Rsh_Fir_reg_k9_;  // k9
  SEXP Rsh_Fir_reg_____3_;  // ____3
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_new_mem6_;  // new_mem6
  SEXP Rsh_Fir_reg_new_mem7_;  // new_mem7
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_i64_;  // i64
  SEXP Rsh_Fir_reg_new_mem10_;  // new_mem10
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_subtree9_;  // subtree9
  SEXP Rsh_Fir_reg_subtree10_;  // subtree10
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_i66_;  // i66
  SEXP Rsh_Fir_reg_new_mem12_;  // new_mem12
  SEXP Rsh_Fir_reg_subtree12_;  // subtree12
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_i68_;  // i68
  SEXP Rsh_Fir_reg_new_mem14_;  // new_mem14
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_k10_;  // k10
  SEXP Rsh_Fir_reg_k11_;  // k11
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_subtree13_;  // subtree13
  SEXP Rsh_Fir_reg_subtree14_;  // subtree14
  SEXP Rsh_Fir_reg_attr2_;  // attr2
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l35_;  // l35
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_new_mem15_;  // new_mem15
  SEXP Rsh_Fir_reg_new_mem16_;  // new_mem16
  SEXP Rsh_Fir_reg_l36_;  // l36
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_subtree15_;  // subtree15
  SEXP Rsh_Fir_reg_subtree16_;  // subtree16

  // Bind parameters
  Rsh_Fir_reg_subtree = PARAMS[0];
  Rsh_Fir_reg_h1 = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st subtree = subtree
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_subtree, RHO);
  (void)(Rsh_Fir_reg_subtree);
  // st h = h
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_h1, RHO);
  (void)(Rsh_Fir_reg_h1);
  // is_leaf = ldf `is.leaf`
  Rsh_Fir_reg_is_leaf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L0_:;
  // goto L19()
  // L19()
  goto L19_;

L1_:;
  // st K = r4
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r4_1, RHO);
  (void)(Rsh_Fir_reg_r4_1);
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c1 then L27() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L27()
    goto L27_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // st `new.mem` = 0
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_const(CCP, 15), RHO);
  (void)(Rsh_const(CCP, 15));
  // K = ld K
  Rsh_Fir_reg_K = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

L4_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // c2 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if c2 then L32() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L32()
    goto L32_;
  } else {
  // L17()
    goto L17_;
  }

L5_:;
  // st sub = dx1
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L6_:;
  // h1 = ld h
  Rsh_Fir_reg_h1_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

L7_:;
  // assignNodes = ldf assignNodes
  Rsh_Fir_reg_assignNodes1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L101() else D30()
  // L101()
  goto L101_;

L8_:;
  // st at = r16
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // l1 = ld at
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c5 = `is.object`(l1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c5 then L49() else L50(i16, TRUE, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L49()
    goto L49_;
  } else {
  // L50(i16, TRUE, l1)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_r19_ = Rsh_const(CCP, 21);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L50_;
  }

L9_:;
  // st subtree = dx19
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // at4 = ld at
  Rsh_Fir_reg_at4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L81() else D20()
  // L81()
  goto L81_;

L10_:;
  // attributes__ = ldf `attributes<-`
  Rsh_Fir_reg_attributes__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L86() else D22()
  // L86()
  goto L86_;

L11_:;
  // st subtree = dx23
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // l28 = ld sub
  Rsh_Fir_reg_l28_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L92() else D25()
  // L92()
  goto L92_;

L12_:;
  // sst LOWER = dx25
  Rsh_Fir_super_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // X10 = ld X
  Rsh_Fir_reg_X10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L99() else D29()
  // L99()
  goto L99_;

L13_:;
  // goto L4(i57)
  // L4(i57)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i57_;
  goto L4_;

L14_:;
  // st subtree = dx27
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // new_mem6 = ld `new.mem`
  Rsh_Fir_reg_new_mem6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L107() else D33()
  // L107()
  goto L107_;

L15_:;
  // r63 = `+`(new_mem10, r60)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_new_mem10_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // st `new.mem` = r63
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r63_, RHO);
  (void)(Rsh_Fir_reg_r63_);
  // goto L13(i64)
  // L13(i64)
  Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i64_;
  goto L13_;

L16_:;
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r62 = dyn attr1(dx29, "members")
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L115() else D36()
  // L115()
  goto L115_;

L17_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args16[4];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_x1 = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st k = x
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // subtree5 = ld subtree
  Rsh_Fir_reg_subtree5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L18_:;
  // l35 = ld subtree
  Rsh_Fir_reg_l35_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L120() else D39()
  // L120()
  goto L120_;

L19_:;
  // subtree15 = ld subtree
  Rsh_Fir_reg_subtree15_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L126() else D44()
  // L126()
  goto L126_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p = prom<V +>{
  //   subtree1 = ld subtree;
  //   subtree2 = force? subtree1;
  //   checkMissing(subtree2);
  //   return subtree2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1098492662_, CCP, RHO);
  // r1 = dyn is_leaf(p)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_leaf, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L21_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c then L22() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L0()
    goto L0_;
  }

L22_:;
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // subtree3 = ld subtree
  Rsh_Fir_reg_subtree3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

L24_:;
  // r3 = dyn base(<sym subtree>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L1_;

D2_:;
  // deopt 7 [subtree3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_subtree3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L25_:;
  // subtree4 = force? subtree3
  Rsh_Fir_reg_subtree4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree3_);
  // checkMissing(subtree4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_subtree4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r5 = dyn length(subtree4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_subtree4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

D3_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L1_;

L27_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // r7 = dyn stop("non-leaf subtree of length 0")
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L3()
  // L3()
  goto L3_;

D6_:;
  // deopt 23 [1, K]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_K;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L31_:;
  // K1 = force? K
  Rsh_Fir_reg_K1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_K);
  // checkMissing(K1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_K1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r9 = `:`(1, K1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_K1_;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // s = toForSeq(r9)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 15);
  // goto L4(i)
  // L4(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L4_;

L32_:;
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard4 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

D7_:;
  // deopt 26 [i2, subtree5]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_subtree5_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L33_:;
  // subtree6 = force? subtree5
  Rsh_Fir_reg_subtree6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree5_);
  // checkMissing(subtree6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_subtree6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(subtree6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_subtree6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c3 then L34() else L35(i2, subtree6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L34()
    goto L34_;
  } else {
  // L35(i2, subtree6)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_subtree8_ = Rsh_Fir_reg_subtree6_;
    goto L35_;
  }

L34_:;
  // dr = tryDispatchBuiltin.1("[[", subtree6)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_subtree6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc then L36() else L35(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L36()
    goto L36_;
  } else {
  // L35(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_subtree8_ = Rsh_Fir_reg_dr;
    goto L35_;
  }

L35_:;
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

L36_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L5(i2, dx)
  // L5(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D8_:;
  // deopt 28 [i6, subtree8, k]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_subtree8_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(28, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r10 = dyn __(subtree8, k1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_subtree8_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_k1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(i6, r10)
  // L5(i6, r10)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L5_;

L38_:;
  // sub = ld sub
  Rsh_Fir_reg_sub = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L40() else D9()
  // L40()
  goto L40_;

L39_:;
  // r11 = dyn base1(<sym sub>, "height")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(i8, r11)
  // L6(i8, r11)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;

D9_:;
  // deopt 34 [i8, sub]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_sub;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L40_:;
  // sub1 = force? sub
  Rsh_Fir_reg_sub1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sub);
  // checkMissing(sub1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sub1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r13 = dyn attr(sub1, "height")
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sub1_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

D10_:;
  // deopt 38 [i8, r13]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L6(i8, r13)
  // L6(i8, r13)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L6_;

D11_:;
  // deopt 38 [i11, r12, h1]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_h1_1;
  Rsh_Fir_deopt(38, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L42_:;
  // h2 = force? h1
  Rsh_Fir_reg_h2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_h1_1);
  // checkMissing(h2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_h2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r14 = `<=`(r12, h2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_h2_1;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c4 then L43() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L43()
    goto L43_;
  } else {
  // L7()
    goto L7_;
  }

L43_:;
  // sym2 = ldf attributes
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base2 = ldf attributes in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard2 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // sub2 = ld sub
  Rsh_Fir_reg_sub2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

L45_:;
  // r15 = dyn base2(<sym sub>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(i11, r15)
  // L8(i11, r15)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L8_;

D12_:;
  // deopt 43 [i11, sub2]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_sub2_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L46_:;
  // sub3 = force? sub2
  Rsh_Fir_reg_sub3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sub2_);
  // checkMissing(sub3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sub3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r17 = dyn attributes(sub3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sub3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L47() else D13()
  // L47()
  goto L47_;

D13_:;
  // deopt 46 [i11, r17]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L8(i11, r17)
  // L8(i11, r17)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L8_;

L48_:;
  // st at = dx3
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // l4 = ld at
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c6 = `is.object`(l4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c6 then L53() else L54(i20, NULL, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L53()
    goto L53_;
  } else {
  // L54(i20, NULL, l4)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_r24_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L54_;
  }

L49_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l1, TRUE)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L51() else L50(i16, TRUE, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L51()
    goto L51_;
  } else {
  // L50(i16, TRUE, dr2)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_r19_ = Rsh_const(CCP, 21);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr2_;
    goto L50_;
  }

L50_:;
  // r22 = `$<-`(l3, <sym leaf>, TRUE)
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L48(i18, r22)
  // L48(i18, r22)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L48_;

L51_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L48(i16, dx2)
  // L48(i16, dx2)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L48_;

L52_:;
  // st at = dx5
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // at = ld at
  Rsh_Fir_reg_at = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

L53_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l4, NULL)
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args52);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc2 then L55() else L54(i20, NULL, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L55()
    goto L55_;
  } else {
  // L54(i20, NULL, dr4)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_r24_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr4_;
    goto L54_;
  }

L54_:;
  // r27 = `$<-`(l6, <sym class>, NULL)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L52(i22, r27)
  // L52(i22, r27)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r27_;
  goto L52_;

L55_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L52(i20, dx4)
  // L52(i20, dx4)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L52_;

D14_:;
  // deopt 58 [i24, at]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_at;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L56_:;
  // at1 = force? at
  Rsh_Fir_reg_at1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at);
  // checkMissing(at1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_at1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(at1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_at1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c7 then L58() else L59(i24, at1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L58()
    goto L58_;
  } else {
  // L59(i24, at1)
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_at3_ = Rsh_Fir_reg_at1_;
    goto L59_;
  }

L57_:;
  // l7 = ld at
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c8 = `is.object`(l7)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c8 then L62() else L63(i28, dx7, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L62()
    goto L62_;
  } else {
  // L63(i28, dx7, l7)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L63_;
  }

L58_:;
  // dr6 = tryDispatchBuiltin.1("$", at1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_at1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc3 then L60() else L59(i24, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L60()
    goto L60_;
  } else {
  // L59(i24, dr6)
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_at3_ = Rsh_Fir_reg_dr6_;
    goto L59_;
  }

L59_:;
  // r28 = `$`(at3, <sym members>)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_at3_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L57(i26, r28)
  // L57(i26, r28)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r28_;
  goto L57_;

L60_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L57(i24, dx6)
  // L57(i24, dx6)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L57_;

L61_:;
  // st at = dx13
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // new_mem = ld `new.mem`
  Rsh_Fir_reg_new_mem = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L65() else D15()
  // L65()
  goto L65_;

L62_:;
  // dr8 = tryDispatchBuiltin.0("$<-", l7, dx7)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args63);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc4 then L64() else L63(i28, dx7, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L64()
    goto L64_;
  } else {
  // L63(i28, dx7, dr8)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr8_;
    goto L63_;
  }

L63_:;
  // r29 = `$<-`(l9, <sym x.member>, dx7)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L61(i30, r29)
  // L61(i30, r29)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r29_;
  goto L61_;

L64_:;
  // dx11 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L61(i28, dx11)
  // L61(i28, dx11)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
  goto L61_;

D15_:;
  // deopt 64 [i32, new_mem]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_new_mem;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L65_:;
  // new_mem1 = force? new_mem
  Rsh_Fir_reg_new_mem1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_mem);
  // checkMissing(new_mem1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_new_mem1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // l10 = ld at
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c9 = `is.object`(l10)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c9 then L67() else L68(i32, new_mem1, 1, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L67()
    goto L67_;
  } else {
  // L68(i32, new_mem1, 1, l10)
    Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i32_;
    Rsh_Fir_reg_new_mem3_ = Rsh_Fir_reg_new_mem1_;
    Rsh_Fir_reg_r31_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L68_;
  }

L66_:;
  // st at = dx15
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // r35 = `+`(new_mem5, r33)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_new_mem5_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // st `new.mem` = r35
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L70() else D16()
  // L70()
  goto L70_;

L67_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l10, 1)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args70);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc5 then L69() else L68(i32, new_mem1, 1, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L69()
    goto L69_;
  } else {
  // L68(i32, new_mem1, 1, dr10)
    Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i32_;
    Rsh_Fir_reg_new_mem3_ = Rsh_Fir_reg_new_mem1_;
    Rsh_Fir_reg_r31_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr10_;
    goto L68_;
  }

L68_:;
  // r34 = `$<-`(l12, <sym members>, 1)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L66(i34, new_mem3, r31, r34)
  // L66(i34, new_mem3, r31, r34)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_new_mem5_ = Rsh_Fir_reg_new_mem3_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r34_;
  goto L66_;

L69_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L66(i32, new_mem1, 1, dx14)
  // L66(i32, new_mem1, 1, dx14)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_new_mem5_ = Rsh_Fir_reg_new_mem1_;
  Rsh_Fir_reg_r33_ = Rsh_const(CCP, 17);
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L66_;

D16_:;
  // deopt 75 [i36]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L70_:;
  // p1 = prom<V +>{
  //   X = ld X;
  //   X1 = force? X;
  //   checkMissing(X1);
  //   return X1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1098492662_1, CCP, RHO);
  // r37 = dyn paste("Branch", p1)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L71() else D17()
  // L71()
  goto L71_;

D17_:;
  // deopt 78 [i36, r37]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L71_:;
  // l13 = ld at
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c10 = `is.object`(l13)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c10 then L73() else L74(i36, r37, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L73()
    goto L73_;
  } else {
  // L74(i36, r37, l13)
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i36_;
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L74_;
  }

L72_:;
  // st at = dx17
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // X2 = ld X
  Rsh_Fir_reg_X2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L76() else D18()
  // L76()
  goto L76_;

L73_:;
  // dr12 = tryDispatchBuiltin.0("$<-", l13, r37)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args77);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc6 then L75() else L74(i36, r37, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L75()
    goto L75_;
  } else {
  // L74(i36, r37, dr12)
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i36_;
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr12_;
    goto L74_;
  }

L74_:;
  // r42 = `$<-`(l15, <sym label>, r37)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L72(i38, r42)
  // L72(i38, r42)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r42_;
  goto L72_;

L75_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L72(i36, dx16)
  // L72(i36, dx16)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L72_;

D18_:;
  // deopt 82 [i40, X2]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_X2_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L76_:;
  // X3 = force? X2
  Rsh_Fir_reg_X3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X2_);
  // checkMissing(X3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_X3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // l16 = ld subtree
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c11 = `is.object`(l16)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if c11 then L77() else L78(i40, X3, l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L77()
    goto L77_;
  } else {
  // L78(i40, X3, l16)
    Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i40_;
    Rsh_Fir_reg_X5_ = Rsh_Fir_reg_X3_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    goto L78_;
  }

L77_:;
  // dr14 = tryDispatchBuiltin.0("[[<-", l16, X3)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_X3_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args83);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc7 then L79() else L78(i40, X3, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L79()
    goto L79_;
  } else {
  // L78(i40, X3, dr14)
    Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i40_;
    Rsh_Fir_reg_X5_ = Rsh_Fir_reg_X3_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr14_;
    goto L78_;
  }

L78_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L80() else D19()
  // L80()
  goto L80_;

L79_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L9(i40, dx18)
  // L9(i40, dx18)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L9_;

D19_:;
  // deopt 85 [i42, X5, l18, X3, k2]
  SEXP Rsh_Fir_array_deopt_stack21[5];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i42_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_X5_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_X3_;
  Rsh_Fir_array_deopt_stack21[4] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(85, 5, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L80_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r43 = dyn ____(l18, X3, k3)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_X3_;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_k3_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(i42, r43)
  // L9(i42, r43)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i42_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r43_;
  goto L9_;

D20_:;
  // deopt 89 [i44, at4]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i44_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_at4_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L81_:;
  // at5 = force? at4
  Rsh_Fir_reg_at5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at4_);
  // checkMissing(at5)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_at5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // l19 = ld subtree
  Rsh_Fir_reg_l19_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c12 = `is.object`(l19)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if c12 then L82() else L83(i44, at5, l19, at5, l19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L82()
    goto L82_;
  } else {
  // L83(i44, at5, l19, at5, l19)
    Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i44_;
    Rsh_Fir_reg_at8_ = Rsh_Fir_reg_at5_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l19_;
    Rsh_Fir_reg_at9_ = Rsh_Fir_reg_at5_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l19_;
    goto L83_;
  }

L82_:;
  // dr16 = tryDispatchBuiltin.1("[[", l19)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args89);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if dc8 then L84() else L83(i44, at5, l19, at5, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L84()
    goto L84_;
  } else {
  // L83(i44, at5, l19, at5, dr16)
    Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i44_;
    Rsh_Fir_reg_at8_ = Rsh_Fir_reg_at5_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l19_;
    Rsh_Fir_reg_at9_ = Rsh_Fir_reg_at5_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_dr16_;
    goto L83_;
  }

L83_:;
  // k4 = ld k
  Rsh_Fir_reg_k4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L85() else D21()
  // L85()
  goto L85_;

L84_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L10(i44, at5, l19, at5, dx20)
  // L10(i44, at5, l19, at5, dx20)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i44_;
  Rsh_Fir_reg_at12_ = Rsh_Fir_reg_at5_;
  Rsh_Fir_reg_l25_ = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_at13_ = Rsh_Fir_reg_at5_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L10_;

D21_:;
  // deopt 93 [i46, at8, l22, at9, l23, k4]
  SEXP Rsh_Fir_array_deopt_stack23[6];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_at8_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_at9_;
  Rsh_Fir_array_deopt_stack23[4] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_deopt_stack23[5] = Rsh_Fir_reg_k4_;
  Rsh_Fir_deopt(93, 6, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L85_:;
  // k5 = force? k4
  Rsh_Fir_reg_k5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k4_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r44 = dyn __1(l23, k5)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_k5_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(i46, at8, l22, at9, r44)
  // L10(i46, at8, l22, at9, r44)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_at12_ = Rsh_Fir_reg_at8_;
  Rsh_Fir_reg_l25_ = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_at13_ = Rsh_Fir_reg_at9_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r44_;
  goto L10_;

D22_:;
  // deopt 97 [i48, at12, l25, dx21, at13]
  SEXP Rsh_Fir_array_deopt_stack24[5];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_at12_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_at13_;
  Rsh_Fir_deopt(97, 5, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L86_:;
  // r45 = dyn attributes__(dx21, NULL, at13)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_at13_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes__, 3, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L87() else D23()
  // L87()
  goto L87_;

D23_:;
  // deopt 99 [i48, at12, l25, r45]
  SEXP Rsh_Fir_array_deopt_stack25[4];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_at12_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(99, 4, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L87_:;
  // c13 = `is.object`(l25)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l25_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if c13 then L88() else L89(i48, at12, l25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L88()
    goto L88_;
  } else {
  // L89(i48, at12, l25)
    Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i48_;
    Rsh_Fir_reg_at15_ = Rsh_Fir_reg_at12_;
    Rsh_Fir_reg_l27_ = Rsh_Fir_reg_l25_;
    goto L89_;
  }

L88_:;
  // dr18 = tryDispatchBuiltin.0("[[<-", l25, r45)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_args95[2] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args95);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc9 then L90() else L89(i48, at12, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L90()
    goto L90_;
  } else {
  // L89(i48, at12, dr18)
    Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i48_;
    Rsh_Fir_reg_at15_ = Rsh_Fir_reg_at12_;
    Rsh_Fir_reg_l27_ = Rsh_Fir_reg_dr18_;
    goto L89_;
  }

L89_:;
  // k6 = ld k
  Rsh_Fir_reg_k6_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L91() else D24()
  // L91()
  goto L91_;

L90_:;
  // dx22 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L11(i48, dx22)
  // L11(i48, dx22)
  Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L11_;

D24_:;
  // deopt 100 [i50, at15, l27, r45, k6]
  SEXP Rsh_Fir_array_deopt_stack26[5];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i50_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_at15_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_deopt_stack26[4] = Rsh_Fir_reg_k6_;
  Rsh_Fir_deopt(100, 5, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L91_:;
  // k7 = force? k6
  Rsh_Fir_reg_k7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k6_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r46 = dyn ____1(l27, r45, k7)
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args98[2] = Rsh_Fir_reg_k7_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L11(i50, r46)
  // L11(i50, r46)
  Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i50_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r46_;
  goto L11_;

D25_:;
  // deopt 107 [i52, "dendrogram", l28, "dendrogram"]
  SEXP Rsh_Fir_array_deopt_stack27[4];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_const(CCP, 46);
  Rsh_Fir_deopt(107, 4, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L92_:;
  // r47 = dyn class__(l28, NULL, "dendrogram")
  SEXP Rsh_Fir_array_args99[3];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args99[2] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L93() else D26()
  // L93()
  goto L93_;

D26_:;
  // deopt 109 [i52, "dendrogram", r47]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(109, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L93_:;
  // st sub = r47
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // sub4 = ld sub
  Rsh_Fir_reg_sub4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L94() else D27()
  // L94()
  goto L94_;

D27_:;
  // deopt 111 [i52, sub4]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_sub4_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L94_:;
  // sub5 = force? sub4
  Rsh_Fir_reg_sub5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sub4_);
  // checkMissing(sub5)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sub5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // l29 = sld LOWER
  Rsh_Fir_reg_l29_ = Rsh_Fir_super_load(Rsh_const(CCP, 5), RHO);
  // c14 = `is.object`(l29)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_l29_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if c14 then L95() else L96(i52, sub5, l29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L95()
    goto L95_;
  } else {
  // L96(i52, sub5, l29)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i52_;
    Rsh_Fir_reg_sub7_ = Rsh_Fir_reg_sub5_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_l29_;
    goto L96_;
  }

L95_:;
  // dr20 = tryDispatchBuiltin.0("[[<-", l29, sub5)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_sub5_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args102);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if dc10 then L97() else L96(i52, sub5, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L97()
    goto L97_;
  } else {
  // L96(i52, sub5, dr20)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i52_;
    Rsh_Fir_reg_sub7_ = Rsh_Fir_reg_sub5_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_dr20_;
    goto L96_;
  }

L96_:;
  // X8 = ld X
  Rsh_Fir_reg_X8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L98() else D28()
  // L98()
  goto L98_;

L97_:;
  // dx24 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L12(i52, dx24)
  // L12(i52, dx24)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i52_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L12_;

D28_:;
  // deopt 114 [i54, sub7, l31, sub5, X8]
  SEXP Rsh_Fir_array_deopt_stack30[5];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i54_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_sub7_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_sub5_;
  Rsh_Fir_array_deopt_stack30[4] = Rsh_Fir_reg_X8_;
  Rsh_Fir_deopt(114, 5, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L98_:;
  // X9 = force? X8
  Rsh_Fir_reg_X9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X8_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r48 = dyn ____2(l31, sub5, X9)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_sub5_;
  Rsh_Fir_array_args105[2] = Rsh_Fir_reg_X9_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(i54, r48)
  // L12(i54, r48)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r48_;
  goto L12_;

D29_:;
  // deopt 118 [i56, X10]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i56_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_X10_;
  Rsh_Fir_deopt(118, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L99_:;
  // X11 = force? X10
  Rsh_Fir_reg_X11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X10_);
  // checkMissing(X11)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_X11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // r49 = `+`(X11, 1.0)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_X11_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // sst X = r49
  Rsh_Fir_super_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // goto L13(i56)
  // L13(i56)
  Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i56_;
  goto L13_;

D30_:;
  // deopt 124 [i11]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L101_:;
  // p2 = prom<V +>{
  //   sub10 = ld sub;
  //   sub11 = force? sub10;
  //   checkMissing(sub11);
  //   return sub11;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1098492662_2, CCP, RHO);
  // p3 = prom<V +>{
  //   h3 = ld h;
  //   h4 = force? h3;
  //   checkMissing(h4);
  //   return h4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1098492662_3, CCP, RHO);
  // r53 = dyn assignNodes(p2, p3)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assignNodes1, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L102() else D31()
  // L102()
  goto L102_;

D31_:;
  // deopt 127 [i11, r53]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(127, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L102_:;
  // l32 = ld subtree
  Rsh_Fir_reg_l32_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c15 = `is.object`(l32)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_l32_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c15 then L103() else L104(i11, r53, l32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L103()
    goto L103_;
  } else {
  // L104(i11, r53, l32)
    Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r53_;
    Rsh_Fir_reg_l34_ = Rsh_Fir_reg_l32_;
    goto L104_;
  }

L103_:;
  // dr22 = tryDispatchBuiltin.0("[[<-", l32, r53)
  SEXP Rsh_Fir_array_args112[3];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_l32_;
  Rsh_Fir_array_args112[2] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args112);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc11 then L105() else L104(i11, r53, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L105()
    goto L105_;
  } else {
  // L104(i11, r53, dr22)
    Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r53_;
    Rsh_Fir_reg_l34_ = Rsh_Fir_reg_dr22_;
    goto L104_;
  }

L104_:;
  // k8 = ld k
  Rsh_Fir_reg_k8_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L106() else D32()
  // L106()
  goto L106_;

L105_:;
  // dx26 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L14(i11, dx26)
  // L14(i11, dx26)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L14_;

D32_:;
  // deopt 129 [i59, r55, l34, r53, k8]
  SEXP Rsh_Fir_array_deopt_stack34[5];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i59_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_l34_;
  Rsh_Fir_array_deopt_stack34[3] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack34[4] = Rsh_Fir_reg_k8_;
  Rsh_Fir_deopt(129, 5, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L106_:;
  // k9 = force? k8
  Rsh_Fir_reg_k9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k8_);
  // ____3 = ldf `[[<-` in base
  Rsh_Fir_reg_____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r58 = dyn ____3(l34, r53, k9)
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_l34_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args115[2] = Rsh_Fir_reg_k9_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____3_, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L14(i59, r58)
  // L14(i59, r58)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i59_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r58_;
  goto L14_;

D33_:;
  // deopt 133 [i61, new_mem6]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_new_mem6_;
  Rsh_Fir_deopt(133, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L107_:;
  // new_mem7 = force? new_mem6
  Rsh_Fir_reg_new_mem7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_mem6_);
  // checkMissing(new_mem7)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_new_mem7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args117);
  // if guard3 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L108_:;
  // subtree9 = ld subtree
  Rsh_Fir_reg_subtree9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L110() else D34()
  // L110()
  goto L110_;

L109_:;
  // r59 = dyn base3(<lang `[[`(subtree, k)>, "members")
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L15(i61, new_mem7, r59)
  // L15(i61, new_mem7, r59)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_new_mem10_ = Rsh_Fir_reg_new_mem7_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L15_;

D34_:;
  // deopt 136 [i61, new_mem7, subtree9]
  SEXP Rsh_Fir_array_deopt_stack36[3];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_new_mem7_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_subtree9_;
  Rsh_Fir_deopt(136, 3, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L110_:;
  // subtree10 = force? subtree9
  Rsh_Fir_reg_subtree10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree9_);
  // checkMissing(subtree10)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_subtree10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(subtree10)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_subtree10_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if c16 then L111() else L112(i61, new_mem7, subtree10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L111()
    goto L111_;
  } else {
  // L112(i61, new_mem7, subtree10)
    Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i61_;
    Rsh_Fir_reg_new_mem12_ = Rsh_Fir_reg_new_mem7_;
    Rsh_Fir_reg_subtree12_ = Rsh_Fir_reg_subtree10_;
    goto L112_;
  }

L111_:;
  // dr24 = tryDispatchBuiltin.1("[[", subtree10)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_subtree10_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args121);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc12 then L113() else L112(i61, new_mem7, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L113()
    goto L113_;
  } else {
  // L112(i61, new_mem7, dr24)
    Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i61_;
    Rsh_Fir_reg_new_mem12_ = Rsh_Fir_reg_new_mem7_;
    Rsh_Fir_reg_subtree12_ = Rsh_Fir_reg_dr24_;
    goto L112_;
  }

L112_:;
  // k10 = ld k
  Rsh_Fir_reg_k10_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L114() else D35()
  // L114()
  goto L114_;

L113_:;
  // dx28 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L16(i61, new_mem7, dx28)
  // L16(i61, new_mem7, dx28)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_new_mem14_ = Rsh_Fir_reg_new_mem7_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L16_;

D35_:;
  // deopt 138 [i66, new_mem12, subtree12, k10]
  SEXP Rsh_Fir_array_deopt_stack37[4];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i66_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_new_mem12_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_subtree12_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_k10_;
  Rsh_Fir_deopt(138, 4, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L114_:;
  // k11 = force? k10
  Rsh_Fir_reg_k11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k10_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r61 = dyn __2(subtree12, k11)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_subtree12_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_k11_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L16(i66, new_mem12, r61)
  // L16(i66, new_mem12, r61)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i66_;
  Rsh_Fir_reg_new_mem14_ = Rsh_Fir_reg_new_mem12_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r61_;
  goto L16_;

D36_:;
  // deopt 143 [i68, new_mem14, r62]
  SEXP Rsh_Fir_array_deopt_stack38[3];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_new_mem14_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(143, 3, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L115_:;
  // goto L15(i68, new_mem14, r62)
  // L15(i68, new_mem14, r62)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i68_;
  Rsh_Fir_reg_new_mem10_ = Rsh_Fir_reg_new_mem14_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r62_;
  goto L15_;

L116_:;
  // subtree13 = ld subtree
  Rsh_Fir_reg_subtree13_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L118() else D37()
  // L118()
  goto L118_;

L117_:;
  // r64 = dyn base4(<sym subtree>, "members")
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L18(r64)
  // L18(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L18_;

D37_:;
  // deopt 151 [subtree13]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_subtree13_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L118_:;
  // subtree14 = force? subtree13
  Rsh_Fir_reg_subtree14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree13_);
  // checkMissing(subtree14)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_subtree14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r66 = dyn attr2(subtree14, "members")
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_subtree14_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L119() else D38()
  // L119()
  goto L119_;

D38_:;
  // deopt 155 [r66]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L18(r66)
  // L18(r66)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r66_;
  goto L18_;

D39_:;
  // deopt 157 [r65, l35, r65]
  SEXP Rsh_Fir_array_deopt_stack41[3];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(157, 3, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L120_:;
  // r67 = dyn attr__(l35, NULL, "x.member", r65)
  SEXP Rsh_Fir_array_args128[4];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_args128[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args128[2] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args128[3] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L121() else D40()
  // L121()
  goto L121_;

D40_:;
  // deopt 160 [r65, r67]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(160, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L121_:;
  // st subtree = r67
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // new_mem15 = ld `new.mem`
  Rsh_Fir_reg_new_mem15_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L122() else D41()
  // L122()
  goto L122_;

D41_:;
  // deopt 162 [new_mem15]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_new_mem15_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L122_:;
  // new_mem16 = force? new_mem15
  Rsh_Fir_reg_new_mem16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_mem15_);
  // checkMissing(new_mem16)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_new_mem16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // l36 = ld subtree
  Rsh_Fir_reg_l36_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L123() else D42()
  // L123()
  goto L123_;

D42_:;
  // deopt 165 [new_mem16, l36, new_mem16]
  SEXP Rsh_Fir_array_deopt_stack44[3];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_new_mem16_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_l36_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_new_mem16_;
  Rsh_Fir_deopt(165, 3, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L123_:;
  // r68 = dyn attr__1(l36, NULL, "members", new_mem16)
  SEXP Rsh_Fir_array_args130[4];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_l36_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args130[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args130[3] = Rsh_Fir_reg_new_mem16_;
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L124() else D43()
  // L124()
  goto L124_;

D43_:;
  // deopt 168 [new_mem16, r68]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_new_mem16_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(168, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L124_:;
  // st subtree = r68
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r68_, RHO);
  (void)(Rsh_Fir_reg_r68_);
  // goto L19()
  // L19()
  goto L19_;

D44_:;
  // deopt 172 [subtree15]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_subtree15_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L126_:;
  // subtree16 = force? subtree15
  Rsh_Fir_reg_subtree16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree15_);
  // checkMissing(subtree16)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_subtree16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return subtree16
  return Rsh_Fir_reg_subtree16_;
}
SEXP Rsh_Fir_user_promise_inner1098492662_(SEXP CCP, SEXP RHO) {
  // subtree1 = ld subtree
  Rsh_Fir_reg_subtree1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // subtree2 = force? subtree1
  Rsh_Fir_reg_subtree2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree1_);
  // checkMissing(subtree2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_subtree2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return subtree2
  return Rsh_Fir_reg_subtree2_;
}
SEXP Rsh_Fir_user_promise_inner1098492662_1(SEXP CCP, SEXP RHO) {
  // X = ld X
  Rsh_Fir_reg_X = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // X1 = force? X
  Rsh_Fir_reg_X1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X);
  // checkMissing(X1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_X1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return X1
  return Rsh_Fir_reg_X1_;
}
SEXP Rsh_Fir_user_promise_inner1098492662_2(SEXP CCP, SEXP RHO) {
  // sub10 = ld sub
  Rsh_Fir_reg_sub10_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // sub11 = force? sub10
  Rsh_Fir_reg_sub11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sub10_);
  // checkMissing(sub11)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_sub11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // return sub11
  return Rsh_Fir_reg_sub11_;
}
SEXP Rsh_Fir_user_promise_inner1098492662_3(SEXP CCP, SEXP RHO) {
  // h3 = ld h
  Rsh_Fir_reg_h3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // h4 = force? h3
  Rsh_Fir_reg_h4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h3_);
  // checkMissing(h4)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_h4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return h4
  return Rsh_Fir_reg_h4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
