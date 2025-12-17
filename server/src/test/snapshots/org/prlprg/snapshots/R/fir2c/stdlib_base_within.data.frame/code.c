#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3771677315_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3771677315_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3771677315_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3771677315_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3771677315_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3771677315_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3771677315_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3771677315_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3771677315_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3771677315_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3771677315_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3771677315_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner3771677315
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3771677315_, RHO, CCP);
  // st `within.data.frame` = r
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
SEXP Rsh_Fir_user_function_inner3771677315_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3771677315 dynamic dispatch ([data, expr, `...`])

  return Rsh_Fir_user_version_inner3771677315_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3771677315_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3771677315 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3771677315/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_expr;  // expr
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_evalq;  // evalq
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_parent;  // parent
  SEXP Rsh_Fir_reg_parent1_;  // parent1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_e;  // e
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_as_list;  // as_list
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_is_null;  // is_null
  SEXP Rsh_Fir_reg_is_null1_;  // is_null1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_setdiff;  // setdiff
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_data3_;  // data3
  SEXP Rsh_Fir_reg_data4_;  // data4
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_nl;  // nl
  SEXP Rsh_Fir_reg_nl1_;  // nl1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_nl2_;  // nl2
  SEXP Rsh_Fir_reg_nl3_;  // nl3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_del;  // del
  SEXP Rsh_Fir_reg_del1_;  // del1
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_data5_;  // data5
  SEXP Rsh_Fir_reg_data6_;  // data6

  // Bind parameters
  Rsh_Fir_reg_data = PARAMS[0];
  Rsh_Fir_reg_expr = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st data = data
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_data, RHO);
  (void)(Rsh_Fir_reg_data);
  // st expr = expr
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_expr, RHO);
  (void)(Rsh_Fir_reg_expr);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L0_:;
  // st l = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L1_:;
  // st nl = r20
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // setdiff = ldf setdiff
  Rsh_Fir_reg_setdiff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L22() else D13()
  // L22()
  goto L22_;

L2_:;
  // st data = dx3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // l17 = ld data
  Rsh_Fir_reg_l17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c2 = `is.object`(l17)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L29() else L30(NULL, l17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L29()
    goto L29_;
  } else {
  // L30(NULL, l17)
    Rsh_Fir_reg_r30_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l17_;
    goto L30_;
  }

L3_:;
  // st data = dx5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // data5 = ld data
  Rsh_Fir_reg_data5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L33() else D18()
  // L33()
  goto L33_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // st parent = r
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // evalq = ldf evalq
  Rsh_Fir_reg_evalq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   environment = ldf environment;
  //   r1 = dyn environment();
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_, CCP, RHO);
  // p1 = prom<V +>{
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   return data2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_1, CCP, RHO);
  // p2 = prom<V +>{
  //   parent = ld parent;
  //   parent1 = force? parent;
  //   checkMissing(parent1);
  //   return parent1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_2, CCP, RHO);
  // r5 = dyn evalq(p, p1, p2)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_evalq, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // st e = r5
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p3 = prom<V +>{
  //   sym = ldf substitute;
  //   base = ldf substitute in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   substitute = ldf substitute in base;
  //   r8 = dyn substitute(<sym expr>);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base(<sym expr>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_3, CCP, RHO);
  // p4 = prom<V +>{
  //   e = ld e;
  //   e1 = force? e;
  //   checkMissing(e1);
  //   return e1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_4, CCP, RHO);
  // r11 = dyn eval(p3, p4)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 15 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // as_list = ldf `as.list`
  Rsh_Fir_reg_as_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p5 = prom<V +>{
  //   e2 = ld e;
  //   e3 = force? e2;
  //   checkMissing(e3);
  //   return e3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_5, CCP, RHO);
  // r13 = dyn as_list[, `all.names`](p5, TRUE)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

D7_:;
  // deopt 21 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // st l = r13
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // l = ld l
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

D8_:;
  // deopt 23 [l]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // l1 = force? l
  Rsh_Fir_reg_l1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l);
  // checkMissing(l1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c = `is.object`(l1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L13() else L14(l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L14(l1)
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L14_;
  }

L13_:;
  // dr = tryDispatchBuiltin.1("[", l1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L15() else L14(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L15()
    goto L15_;
  } else {
  // L14(dr)
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L14_;
  }

L14_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L16() else D9()
  // L16()
  goto L16_;

L15_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D9_:;
  // deopt 26 [l3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // p6 = prom<V +>{
  //   l4 = ld l;
  //   l5 = force? l4;
  //   checkMissing(l5);
  //   return l5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_6, CCP, RHO);
  // p7 = prom<V +>{
  //   is_null = ld `is.null`;
  //   is_null1 = force? is_null;
  //   checkMissing(is_null1);
  //   return is_null1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_7, CCP, RHO);
  // r16 = dyn vapply[, , , `USE.NAMES`](p6, p7, NA_LGL, FALSE)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 4, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L17() else D10()
  // L17()
  goto L17_;

D10_:;
  // deopt 32 [l3, r16]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // r17 = `!`(r16)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r18 = dyn __(l3, r17)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L0_;

L18_:;
  // l6 = ld l
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L20() else D11()
  // L20()
  goto L20_;

L19_:;
  // r19 = dyn base1(<sym l>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r19)
  // L1(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L1_;

D11_:;
  // deopt 38 [l6]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L20_:;
  // l7 = force? l6
  Rsh_Fir_reg_l7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l6_);
  // checkMissing(l7)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r21 = dyn names(l7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L21() else D12()
  // L21()
  goto L21_;

D12_:;
  // deopt 41 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1(r21)
  // L1(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L1_;

D13_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p8 = prom<V +>{
  //   sym2 = ldf names;
  //   base2 = ldf names in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r23):
  //   return r23;
  // L1():
  //   data3 = ld data;
  //   data4 = force? data3;
  //   checkMissing(data4);
  //   names1 = ldf names in base;
  //   r24 = dyn names1(data4);
  //   goto L0(r24);
  // L2():
  //   r22 = dyn base2(<sym data>);
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_8, CCP, RHO);
  // p9 = prom<V +>{
  //   nl = ld nl;
  //   nl1 = force? nl;
  //   checkMissing(nl1);
  //   return nl1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3771677315_9, CCP, RHO);
  // r27 = dyn setdiff(p8, p9)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setdiff, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L23() else D14()
  // L23()
  goto L23_;

D14_:;
  // deopt 47 [r27]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // st del = r27
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // l8 = ld l
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L24() else D15()
  // L24()
  goto L24_;

D15_:;
  // deopt 49 [l8]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L24_:;
  // l9 = force? l8
  Rsh_Fir_reg_l9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l8_);
  // checkMissing(l9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // l10 = ld data
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c1 = `is.object`(l10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c1 then L25() else L26(l9, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L26(l9, l10)
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l9_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l10_;
    goto L26_;
  }

L25_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l10, l9)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args33);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc1 then L27() else L26(l9, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L27()
    goto L27_;
  } else {
  // L26(l9, dr2)
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l9_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr2_;
    goto L26_;
  }

L26_:;
  // nl2 = ld nl
  Rsh_Fir_reg_nl2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L28() else D16()
  // L28()
  goto L28_;

L27_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L2(dx2)
  // L2(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

D16_:;
  // deopt 52 [l13, l14, l9, nl2]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_nl2_;
  Rsh_Fir_deopt(52, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L28_:;
  // nl3 = force? nl2
  Rsh_Fir_reg_nl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nl2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r28 = dyn ___(l14, l9, nl3)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_nl3_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r28)
  // L2(r28)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r28_;
  goto L2_;

L29_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l17, NULL)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args37);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc2 then L31() else L30(NULL, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L31()
    goto L31_;
  } else {
  // L30(NULL, dr4)
    Rsh_Fir_reg_r30_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_dr4_;
    goto L30_;
  }

L30_:;
  // del = ld del
  Rsh_Fir_reg_del = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L32() else D17()
  // L32()
  goto L32_;

L31_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L3(dx4)
  // L3(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L3_;

D17_:;
  // deopt 59 [r30, l19, NULL, del]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_del;
  Rsh_Fir_deopt(59, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L32_:;
  // del1 = force? del
  Rsh_Fir_reg_del1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_del);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r33 = dyn ___1(l19, NULL, del1)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_del1_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3(r33)
  // L3(r33)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r33_;
  goto L3_;

D18_:;
  // deopt 63 [data5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_data5_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L33_:;
  // data6 = force? data5
  Rsh_Fir_reg_data6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data5_);
  // checkMissing(data6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_data6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return data6
  return Rsh_Fir_reg_data6_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_(SEXP CCP, SEXP RHO) {
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r1 = dyn environment()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 0, NULL, NULL, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_1(SEXP CCP, SEXP RHO) {
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return data2
  return Rsh_Fir_reg_data2_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_2(SEXP CCP, SEXP RHO) {
  // parent = ld parent
  Rsh_Fir_reg_parent = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // parent1 = force? parent
  Rsh_Fir_reg_parent1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parent);
  // checkMissing(parent1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_parent1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return parent1
  return Rsh_Fir_reg_parent1_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_3(SEXP CCP, SEXP RHO) {
  // sym = ldf substitute
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf substitute in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r8 = dyn substitute(<sym expr>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base(<sym expr>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_4(SEXP CCP, SEXP RHO) {
  // e = ld e
  Rsh_Fir_reg_e = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // e1 = force? e
  Rsh_Fir_reg_e1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e);
  // checkMissing(e1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_e1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return e1
  return Rsh_Fir_reg_e1_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_5(SEXP CCP, SEXP RHO) {
  // e2 = ld e
  Rsh_Fir_reg_e2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // e3 = force? e2
  Rsh_Fir_reg_e3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e2_);
  // checkMissing(e3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_e3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return e3
  return Rsh_Fir_reg_e3_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_6(SEXP CCP, SEXP RHO) {
  // l4 = ld l
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // l5 = force? l4
  Rsh_Fir_reg_l5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l4_);
  // checkMissing(l5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return l5
  return Rsh_Fir_reg_l5_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_7(SEXP CCP, SEXP RHO) {
  // is_null = ld `is.null`
  Rsh_Fir_reg_is_null = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // is_null1 = force? is_null
  Rsh_Fir_reg_is_null1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is_null);
  // checkMissing(is_null1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_is_null1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return is_null1
  return Rsh_Fir_reg_is_null1_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_8(SEXP CCP, SEXP RHO) {
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r23
  return Rsh_Fir_reg_r23_;

L1_:;
  // data3 = ld data
  Rsh_Fir_reg_data3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // data4 = force? data3
  Rsh_Fir_reg_data4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data3_);
  // checkMissing(data4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_data4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r24 = dyn names1(data4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_data4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L0_;

L2_:;
  // r22 = dyn base2(<sym data>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3771677315_9(SEXP CCP, SEXP RHO) {
  // nl = ld nl
  Rsh_Fir_reg_nl = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // nl1 = force? nl
  Rsh_Fir_reg_nl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nl);
  // checkMissing(nl1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_nl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return nl1
  return Rsh_Fir_reg_nl1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
