#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3428017826_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3428017826_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3428017826_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3428017826_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3428017826
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3428017826_, RHO, CCP);
  // st nleaves = r
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
SEXP Rsh_Fir_user_function_inner3428017826_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3428017826 dynamic dispatch ([node])

  return Rsh_Fir_user_version_inner3428017826_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3428017826_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3428017826 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3428017826/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_node;  // node
  SEXP Rsh_Fir_reg_is_leaf;  // is_leaf
  SEXP Rsh_Fir_reg_node1_;  // node1
  SEXP Rsh_Fir_reg_node2_;  // node2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_node3_;  // node3
  SEXP Rsh_Fir_reg_node4_;  // node4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_node5_;  // node5
  SEXP Rsh_Fir_reg_node6_;  // node6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_node8_;  // node8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_node9_;  // node9
  SEXP Rsh_Fir_reg_node10_;  // node10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_node12_;  // node12
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_is_leaf1_;  // is_leaf1
  SEXP Rsh_Fir_reg_child;  // child
  SEXP Rsh_Fir_reg_child1_;  // child1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_count;  // count
  SEXP Rsh_Fir_reg_count1_;  // count1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_child2_;  // child2
  SEXP Rsh_Fir_reg_child3_;  // child3
  SEXP Rsh_Fir_reg_todo;  // todo
  SEXP Rsh_Fir_reg_todo1_;  // todo1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_todo2_;  // todo2
  SEXP Rsh_Fir_reg_todo3_;  // todo3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_todo4_;  // todo4
  SEXP Rsh_Fir_reg_todo5_;  // todo5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_todo7_;  // todo7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_todo8_;  // todo8
  SEXP Rsh_Fir_reg_todo9_;  // todo9
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_todo11_;  // todo11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_count2_;  // count2
  SEXP Rsh_Fir_reg_count3_;  // count3

  // Bind parameters
  Rsh_Fir_reg_node = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st node = node
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_node, RHO);
  (void)(Rsh_Fir_reg_node);
  // is_leaf = ldf `is.leaf`
  Rsh_Fir_reg_is_leaf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L0_:;
  // st todo = NULL
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 3), RHO);
  (void)(Rsh_const(CCP, 3));
  // st count = 0
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_const(CCP, 5), RHO);
  (void)(Rsh_const(CCP, 5));
  // goto L9()
  // L9()
  goto L9_;

L2_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c1 then L23() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L23()
    goto L23_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L4_:;
  // st child = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // node9 = ld node
  Rsh_Fir_reg_node9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L5_:;
  // st node = dx3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // is_leaf1 = ldf `is.leaf`
  Rsh_Fir_reg_is_leaf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L6_:;
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L7_:;
  // goto L9()
  // L9()
  goto L9_;

L8_:;
  // st todo = r14
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // goto L7()
  // L7()
  goto L7_;

L9_:;
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L10_:;
  // c6 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c6 then L46() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L46()
    goto L46_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // todo4 = ld todo
  Rsh_Fir_reg_todo4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   node1 = ld node;
  //   node2 = force? node1;
  //   checkMissing(node2);
  //   return node2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3428017826_, CCP, RHO);
  // r1 = dyn is_leaf(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_leaf, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L16() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L16()
    goto L16_;
  } else {
  // L0()
    goto L0_;
  }

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1
  return Rsh_const(CCP, 11);

L19_:;
  // node3 = ld node
  Rsh_Fir_reg_node3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L21() else D2()
  // L21()
  goto L21_;

L20_:;
  // r4 = dyn base(<sym node>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D2_:;
  // deopt 17 [node3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_node3_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L21_:;
  // node4 = force? node3
  Rsh_Fir_reg_node4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_node3_);
  // checkMissing(node4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_node4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r6 = dyn length(node4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_node4_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L22() else D3()
  // L22()
  goto L22_;

D3_:;
  // deopt 20 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L23_:;
  // node5 = ld node
  Rsh_Fir_reg_node5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

D4_:;
  // deopt 21 [node5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_node5_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // node6 = force? node5
  Rsh_Fir_reg_node6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_node5_);
  // checkMissing(node6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_node6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(node6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_node6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c2 then L25() else L26(node6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L25()
    goto L25_;
  } else {
  // L26(node6)
    Rsh_Fir_reg_node8_ = Rsh_Fir_reg_node6_;
    goto L26_;
  }

L25_:;
  // dr = tryDispatchBuiltin.1("[[", node6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_node6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr)
    Rsh_Fir_reg_node8_ = Rsh_Fir_reg_dr;
    goto L26_;
  }

L26_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r7 = dyn __(node8, 1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_node8_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L4_;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D5_:;
  // deopt 27 [node9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_node9_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // node10 = force? node9
  Rsh_Fir_reg_node10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_node9_);
  // checkMissing(node10)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_node10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(node10)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_node10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c3 then L29() else L30(node10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L30(node10)
    Rsh_Fir_reg_node12_ = Rsh_Fir_reg_node10_;
    goto L30_;
  }

L29_:;
  // dr2 = tryDispatchBuiltin.1("[", node10)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_node10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc1 then L31() else L30(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr2)
    Rsh_Fir_reg_node12_ = Rsh_Fir_reg_dr2_;
    goto L30_;
  }

L30_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r8 = dyn __1(node12, -1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_node12_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r8_;
  goto L5_;

L31_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L5(dx2)
  // L5(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

D6_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p1 = prom<V +>{
  //   child = ld child;
  //   child1 = force? child;
  //   checkMissing(child1);
  //   return child1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3428017826_1, CCP, RHO);
  // r10 = dyn is_leaf1(p1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_leaf1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

D7_:;
  // deopt 36 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // c4 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c4 then L34() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L34()
    goto L34_;
  } else {
  // L6()
    goto L6_;
  }

L34_:;
  // count = ld count
  Rsh_Fir_reg_count = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

D8_:;
  // deopt 37 [count]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_count;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // count1 = force? count
  Rsh_Fir_reg_count1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_count);
  // checkMissing(count1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_count1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r11 = `+`(count1, 1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_count1_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // st count = r11
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // goto L7()
  // L7()
  goto L7_;

L37_:;
  // child2 = ld child
  Rsh_Fir_reg_child2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

L38_:;
  // r13 = dyn base1[node, todo](<sym child>, <sym todo>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D9_:;
  // deopt 44 [child2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_child2_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L39_:;
  // child3 = force? child2
  Rsh_Fir_reg_child3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_child2_);
  // checkMissing(child3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_child3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // todo = ld todo
  Rsh_Fir_reg_todo = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

D10_:;
  // deopt 47 [todo]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_todo;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L40_:;
  // todo1 = force? todo
  Rsh_Fir_reg_todo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_todo);
  // checkMissing(todo1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_todo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r15 = dyn list(child3, todo1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_child3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_todo1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

D11_:;
  // deopt 51 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L8_;

L43_:;
  // todo2 = ld todo
  Rsh_Fir_reg_todo2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L45() else D12()
  // L45()
  goto L45_;

L44_:;
  // r16 = dyn base2(<sym todo>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L10(r16)
  // L10(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L10_;

D12_:;
  // deopt 57 [todo2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_todo2_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L45_:;
  // todo3 = force? todo2
  Rsh_Fir_reg_todo3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_todo2_);
  // checkMissing(todo3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_todo3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c5 = `==`(todo3, NULL)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_todo3_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L10(c5)
  // L10(c5)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_c5_;
  goto L10_;

L46_:;
  // count2 = ld count
  Rsh_Fir_reg_count2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L60() else D15()
  // L60()
  goto L60_;

D13_:;
  // deopt 62 [todo4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_todo4_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L49_:;
  // todo5 = force? todo4
  Rsh_Fir_reg_todo5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_todo4_);
  // checkMissing(todo5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_todo5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(todo5)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_todo5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c7 then L51() else L52(todo5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L51()
    goto L51_;
  } else {
  // L52(todo5)
    Rsh_Fir_reg_todo7_ = Rsh_Fir_reg_todo5_;
    goto L52_;
  }

L50_:;
  // st node = dx5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // todo8 = ld todo
  Rsh_Fir_reg_todo8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

L51_:;
  // dr4 = tryDispatchBuiltin.1("$", todo5)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_todo5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc2 then L53() else L52(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr4)
    Rsh_Fir_reg_todo7_ = Rsh_Fir_reg_dr4_;
    goto L52_;
  }

L52_:;
  // r19 = `$`(todo7, <sym node>)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_todo7_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L50(r19)
  // L50(r19)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r19_;
  goto L50_;

L53_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L50(dx4)
  // L50(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L50_;

D14_:;
  // deopt 66 [todo8]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_todo8_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // todo9 = force? todo8
  Rsh_Fir_reg_todo9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_todo8_);
  // checkMissing(todo9)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_todo9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(todo9)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_todo9_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c8 then L56() else L57(todo9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L56()
    goto L56_;
  } else {
  // L57(todo9)
    Rsh_Fir_reg_todo11_ = Rsh_Fir_reg_todo9_;
    goto L57_;
  }

L55_:;
  // st todo = dx7
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L9()
  // L9()
  goto L9_;

L56_:;
  // dr6 = tryDispatchBuiltin.1("$", todo9)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_todo9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc3 then L58() else L57(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L58()
    goto L58_;
  } else {
  // L57(dr6)
    Rsh_Fir_reg_todo11_ = Rsh_Fir_reg_dr6_;
    goto L57_;
  }

L57_:;
  // r20 = `$`(todo11, <sym todo>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_todo11_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L55(r20)
  // L55(r20)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r20_;
  goto L55_;

L58_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L55(dx6)
  // L55(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L55_;

D15_:;
  // deopt 73 [count2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_count2_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L60_:;
  // count3 = force? count2
  Rsh_Fir_reg_count3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_count2_);
  // checkMissing(count3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_count3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return count3
  return Rsh_Fir_reg_count3_;
}
SEXP Rsh_Fir_user_promise_inner3428017826_(SEXP CCP, SEXP RHO) {
  // node1 = ld node
  Rsh_Fir_reg_node1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // node2 = force? node1
  Rsh_Fir_reg_node2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_node1_);
  // checkMissing(node2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_node2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return node2
  return Rsh_Fir_reg_node2_;
}
SEXP Rsh_Fir_user_promise_inner3428017826_1(SEXP CCP, SEXP RHO) {
  // child = ld child
  Rsh_Fir_reg_child = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // child1 = force? child
  Rsh_Fir_reg_child1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_child);
  // checkMissing(child1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_child1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return child1
  return Rsh_Fir_reg_child1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
