#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner610803644_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner610803644_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner610803644_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner610803644_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner610803644_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner610803644_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner610803644_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner610803644_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner610803644_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner610803644_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1823727497_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1823727497_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1823727497_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1823727497_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2649136551_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2649136551_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2649136551_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2649136551_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner610803644
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner610803644_, RHO, CCP);
  // st `pairwise.table` = r
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
SEXP Rsh_Fir_user_function_inner610803644_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner610803644 dynamic dispatch ([`compare.levels`, `level.names`, `p.adjust.method`])

  return Rsh_Fir_user_version_inner610803644_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner610803644_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner610803644 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner610803644/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_compare_levels;  // compare_levels
  SEXP Rsh_Fir_reg_level_names;  // level_names
  SEXP Rsh_Fir_reg_p_adjust_method;  // p_adjust_method
  SEXP Rsh_Fir_reg_setNames;  // setNames
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_level_names1_;  // level_names1
  SEXP Rsh_Fir_reg_level_names2_;  // level_names2
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_level_names3_;  // level_names3
  SEXP Rsh_Fir_reg_level_names4_;  // level_names4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_outer;  // outer
  SEXP Rsh_Fir_reg_ix;  // ix
  SEXP Rsh_Fir_reg_ix1_;  // ix1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_ix3_;  // ix3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_ix4_;  // ix4
  SEXP Rsh_Fir_reg_ix5_;  // ix5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ix7_;  // ix7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_ix10_;  // ix10
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_ix11_;  // ix11
  SEXP Rsh_Fir_reg_ix12_;  // ix12
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_lower_tri;  // lower_tri
  SEXP Rsh_Fir_reg_pp;  // pp
  SEXP Rsh_Fir_reg_pp1_;  // pp1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p_adjust;  // p_adjust
  SEXP Rsh_Fir_reg_pp2_;  // pp2
  SEXP Rsh_Fir_reg_pp3_;  // pp3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_pp5_;  // pp5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_il_tri;  // il_tri
  SEXP Rsh_Fir_reg_il_tri1_;  // il_tri1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_p_adjust_method1_;  // p_adjust_method1
  SEXP Rsh_Fir_reg_p_adjust_method2_;  // p_adjust_method2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_il_tri2_;  // il_tri2
  SEXP Rsh_Fir_reg_il_tri3_;  // il_tri3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_pp6_;  // pp6
  SEXP Rsh_Fir_reg_pp7_;  // pp7

  // Bind parameters
  Rsh_Fir_reg_compare_levels = PARAMS[0];
  Rsh_Fir_reg_level_names = PARAMS[1];
  Rsh_Fir_reg_p_adjust_method = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `compare.levels` = compare_levels
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_compare_levels, RHO);
  (void)(Rsh_Fir_reg_compare_levels);
  // st `level.names` = level_names
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_level_names, RHO);
  (void)(Rsh_Fir_reg_level_names);
  // st `p.adjust.method` = p_adjust_method
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_p_adjust_method, RHO);
  (void)(Rsh_Fir_reg_p_adjust_method);
  // setNames = ldf setNames
  Rsh_Fir_reg_setNames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // st pp = dx7
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // pp6 = ld pp
  Rsh_Fir_reg_pp6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L13() else D9()
  // L13()
  goto L13_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   sym = ldf seq_along;
  //   base = ldf seq_along in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   level_names1 = ld `level.names`;
  //   level_names2 = force? level_names1;
  //   checkMissing(level_names2);
  //   r2 = seq_along(level_names2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym level.names>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner610803644_, CCP, RHO);
  // p1 = prom<V +>{
  //   level_names3 = ld `level.names`;
  //   level_names4 = force? level_names3;
  //   checkMissing(level_names4);
  //   return level_names4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner610803644_1, CCP, RHO);
  // r5 = dyn setNames(p, p1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setNames, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 4 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st ix = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p2 = prom<V +>{
  //   ix = ld ix;
  //   ix1 = force? ix;
  //   checkMissing(ix1);
  //   c = `is.object`(ix1);
  //   if c then L1() else L2(ix1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", ix1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(ix3):
  //   __ = ldf `[` in base;
  //   r6 = dyn __(ix3, -1);
  //   goto L0(r6);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner610803644_2, CCP, RHO);
  // p3 = prom<V +>{
  //   ix4 = ld ix;
  //   ix5 = force? ix4;
  //   checkMissing(ix5);
  //   c1 = `is.object`(ix5);
  //   if c1 then L2() else L3(ix5);
  // L0(dx3):
  //   return dx3;
  // L2():
  //   dr2 = tryDispatchBuiltin.1("[", ix5);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L4() else L3(dr2);
  // L3(ix7):
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L5() else L6();
  // L1(ix10, r9):
  //   r11 = `-`(<missing>, r9);
  //   __1 = ldf `[` in base;
  //   r12 = dyn __1(ix10, r11);
  //   goto L0(r12);
  // L4():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // L5():
  //   ix11 = ld ix;
  //   ix12 = force? ix11;
  //   checkMissing(ix12);
  //   length = ldf length in base;
  //   r10 = dyn length(ix12);
  //   goto L1(ix7, r10);
  // L6():
  //   r8 = dyn base1(<sym ix>);
  //   goto L1(ix7, r8);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner610803644_3, CCP, RHO);
  // p4 = prom<V +>{
  //   r14 = clos inner1823727497;
  //   return r14;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner610803644_4, CCP, RHO);
  // r16 = dyn outer(p2, p3, p4)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 11 [r16]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // st pp = r16
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // lower_tri = ldf `lower.tri`
  Rsh_Fir_reg_lower_tri = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p5 = prom<V +>{
  //   pp = ld pp;
  //   pp1 = force? pp;
  //   checkMissing(pp1);
  //   return pp1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner610803644_5, CCP, RHO);
  // r18 = dyn lower_tri(p5, TRUE)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lower_tri, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 17 [r18]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // st `il.tri` = r18
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // p_adjust = ldf `p.adjust`
  Rsh_Fir_reg_p_adjust = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p6 = prom<V +>{
  //   pp2 = ld pp;
  //   pp3 = force? pp2;
  //   checkMissing(pp3);
  //   c2 = `is.object`(pp3);
  //   if c2 then L1() else L2(pp3);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", pp3);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(pp5):
  //   il_tri = ld `il.tri`;
  //   il_tri1 = force? il_tri;
  //   __2 = ldf `[` in base;
  //   r19 = dyn __2(pp5, il_tri1);
  //   goto L0(r19);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner610803644_6, CCP, RHO);
  // p7 = prom<V +>{
  //   p_adjust_method1 = ld `p.adjust.method`;
  //   p_adjust_method2 = force? p_adjust_method1;
  //   checkMissing(p_adjust_method2);
  //   return p_adjust_method2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner610803644_7, CCP, RHO);
  // r22 = dyn p_adjust(p6, p7)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_p_adjust, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L8() else D7()
  // L8()
  goto L8_;

D7_:;
  // deopt 23 [r22]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // l = ld pp
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c3 = `is.object`(l)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c3 then L9() else L10(r22, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L9()
    goto L9_;
  } else {
  // L10(r22, l)
    Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L10_;
  }

L9_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l, r22)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args35[2] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args35);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc3 then L11() else L10(r22, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L11()
    goto L11_;
  } else {
  // L10(r22, dr6)
    Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L10_;
  }

L10_:;
  // il_tri2 = ld `il.tri`
  Rsh_Fir_reg_il_tri2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

L11_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;

D8_:;
  // deopt 25 [r24, l2, r22, il_tri2]
  SEXP Rsh_Fir_array_deopt_stack4[4];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_il_tri2_;
  Rsh_Fir_deopt(25, 4, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // il_tri3 = force? il_tri2
  Rsh_Fir_reg_il_tri3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_il_tri2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r27 = dyn ___(l2, r22, il_tri3)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args38[2] = Rsh_Fir_reg_il_tri3_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r27_;
  goto L0_;

D9_:;
  // deopt 29 [pp6]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_pp6_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // pp7 = force? pp6
  Rsh_Fir_reg_pp7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pp6_);
  // checkMissing(pp7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_pp7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return pp7
  return Rsh_Fir_reg_pp7_;
}
SEXP Rsh_Fir_user_promise_inner610803644_(SEXP CCP, SEXP RHO) {
  // sym = ldf seq_along
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
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
  // level_names1 = ld `level.names`
  Rsh_Fir_reg_level_names1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // level_names2 = force? level_names1
  Rsh_Fir_reg_level_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_level_names1_);
  // checkMissing(level_names2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_level_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r2 = seq_along(level_names2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_level_names2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym level.names>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner610803644_1(SEXP CCP, SEXP RHO) {
  // level_names3 = ld `level.names`
  Rsh_Fir_reg_level_names3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // level_names4 = force? level_names3
  Rsh_Fir_reg_level_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_level_names3_);
  // checkMissing(level_names4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_level_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return level_names4
  return Rsh_Fir_reg_level_names4_;
}
SEXP Rsh_Fir_user_promise_inner610803644_2(SEXP CCP, SEXP RHO) {
  // ix = ld ix
  Rsh_Fir_reg_ix = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // ix1 = force? ix
  Rsh_Fir_reg_ix1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ix);
  // checkMissing(ix1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ix1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `is.object`(ix1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_ix1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(ix1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(ix1)
    Rsh_Fir_reg_ix3_ = Rsh_Fir_reg_ix1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", ix1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_ix1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_ix3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r6 = dyn __(ix3, -1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_ix3_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner610803644_3(SEXP CCP, SEXP RHO) {
  // ix4 = ld ix
  Rsh_Fir_reg_ix4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // ix5 = force? ix4
  Rsh_Fir_reg_ix5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ix4_);
  // checkMissing(ix5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_ix5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(ix5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ix5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L2() else L3(ix5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L2()
    goto L2_;
  } else {
  // L3(ix5)
    Rsh_Fir_reg_ix7_ = Rsh_Fir_reg_ix5_;
    goto L3_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // r11 = `-`(<missing>, r9)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r12 = dyn __1(ix10, r11)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ix10_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // dr2 = tryDispatchBuiltin.1("[", ix5)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_ix5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc1 then L4() else L3(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr2)
    Rsh_Fir_reg_ix7_ = Rsh_Fir_reg_dr2_;
    goto L3_;
  }

L3_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;

L5_:;
  // ix11 = ld ix
  Rsh_Fir_reg_ix11_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // ix12 = force? ix11
  Rsh_Fir_reg_ix12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ix11_);
  // checkMissing(ix12)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ix12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r10 = dyn length(ix12)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ix12_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(ix7, r10)
  // L1(ix7, r10)
  Rsh_Fir_reg_ix10_ = Rsh_Fir_reg_ix7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L1_;

L6_:;
  // r8 = dyn base1(<sym ix>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(ix7, r8)
  // L1(ix7, r8)
  Rsh_Fir_reg_ix10_ = Rsh_Fir_reg_ix7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner610803644_4(SEXP CCP, SEXP RHO) {
  // r14 = clos inner1823727497
  Rsh_Fir_reg_r14_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1823727497_, RHO, CCP);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner610803644_5(SEXP CCP, SEXP RHO) {
  // pp = ld pp
  Rsh_Fir_reg_pp = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // pp1 = force? pp
  Rsh_Fir_reg_pp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pp);
  // checkMissing(pp1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_pp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return pp1
  return Rsh_Fir_reg_pp1_;
}
SEXP Rsh_Fir_user_promise_inner610803644_6(SEXP CCP, SEXP RHO) {
  // pp2 = ld pp
  Rsh_Fir_reg_pp2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // pp3 = force? pp2
  Rsh_Fir_reg_pp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pp2_);
  // checkMissing(pp3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_pp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(pp3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_pp3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(pp3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(pp3)
    Rsh_Fir_reg_pp5_ = Rsh_Fir_reg_pp3_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", pp3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_pp3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_pp5_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // il_tri = ld `il.tri`
  Rsh_Fir_reg_il_tri = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // il_tri1 = force? il_tri
  Rsh_Fir_reg_il_tri1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_il_tri);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r19 = dyn __2(pp5, il_tri1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_pp5_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_il_tri1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r19_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner610803644_7(SEXP CCP, SEXP RHO) {
  // p_adjust_method1 = ld `p.adjust.method`
  Rsh_Fir_reg_p_adjust_method1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // p_adjust_method2 = force? p_adjust_method1
  Rsh_Fir_reg_p_adjust_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p_adjust_method1_);
  // checkMissing(p_adjust_method2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p_adjust_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return p_adjust_method2
  return Rsh_Fir_reg_p_adjust_method2_;
}
SEXP Rsh_Fir_user_function_inner1823727497_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1823727497 dynamic dispatch ([ivec, jvec])

  return Rsh_Fir_user_version_inner1823727497_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1823727497_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1823727497 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1823727497/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ivec;  // ivec
  SEXP Rsh_Fir_reg_jvec;  // jvec
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_ivec1_;  // ivec1
  SEXP Rsh_Fir_reg_ivec2_;  // ivec2
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r6_1;  // r6

  // Bind parameters
  Rsh_Fir_reg_ivec = PARAMS[0];
  Rsh_Fir_reg_jvec = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ivec = ivec
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_ivec, RHO);
  (void)(Rsh_Fir_reg_ivec);
  // st jvec = jvec
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_jvec, RHO);
  (void)(Rsh_Fir_reg_jvec);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf seq_along;
  //   base = ldf seq_along in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   ivec1 = ld ivec;
  //   ivec2 = force? ivec1;
  //   checkMissing(ivec2);
  //   r2 = seq_along(ivec2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym ivec>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1823727497_, CCP, RHO);
  // p1 = prom<V +>{
  //   r4 = clos inner2649136551;
  //   return r4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1823727497_1, CCP, RHO);
  // r6 = dyn vapply(p, p1, 0.05)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_1;
}
SEXP Rsh_Fir_user_promise_inner1823727497_(SEXP CCP, SEXP RHO) {
  // sym = ldf seq_along
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // ivec1 = ld ivec
  Rsh_Fir_reg_ivec1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // ivec2 = force? ivec1
  Rsh_Fir_reg_ivec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ivec1_);
  // checkMissing(ivec2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_ivec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // r2 = seq_along(ivec2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_ivec2_;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(<sym ivec>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1823727497_1(SEXP CCP, SEXP RHO) {
  // r4 = clos inner2649136551
  Rsh_Fir_reg_r4_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2649136551_, RHO, CCP);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_function_inner2649136551_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2649136551 dynamic dispatch ([k])

  return Rsh_Fir_user_version_inner2649136551_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2649136551_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2649136551 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2649136551/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_ivec1;  // ivec
  SEXP Rsh_Fir_reg_ivec1_1;  // ivec1
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_ivec3_;  // ivec3
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r3;  // r
  SEXP Rsh_Fir_reg_jvec1;  // jvec
  SEXP Rsh_Fir_reg_jvec1_;  // jvec1
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_jvec3_;  // jvec3
  SEXP Rsh_Fir_reg_dr2_1;  // dr2
  SEXP Rsh_Fir_reg_dc1_1;  // dc1
  SEXP Rsh_Fir_reg_dx2_1;  // dx2
  SEXP Rsh_Fir_reg_dx3_1;  // dx3
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg___1_1;  // __1
  SEXP Rsh_Fir_reg_r1_2;  // r1
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_r2_2;  // r2
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_compare_levels1;  // compare_levels
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_p2;  // p
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_p1_2;  // p1
  SEXP Rsh_Fir_reg_r5_1;  // r5

  // Bind parameters
  Rsh_Fir_reg_k = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st k = k
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_k, RHO);
  (void)(Rsh_Fir_reg_k);
  // ivec = ld ivec
  Rsh_Fir_reg_ivec1 = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // st i = dx1
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx1_1, RHO);
  (void)(Rsh_Fir_reg_dx1_1);
  // jvec = ld jvec
  Rsh_Fir_reg_jvec1 = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L1_:;
  // st j = dx3
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_dx3_1, RHO);
  (void)(Rsh_Fir_reg_dx3_1);
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NA_REAL
  return Rsh_const(CCP, 27);

D0_:;
  // deopt 0 [ivec]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_ivec1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L3_:;
  // ivec1 = force? ivec
  Rsh_Fir_reg_ivec1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_ivec1);
  // checkMissing(ivec1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_ivec1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c = `is.object`(ivec1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_ivec1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c then L4() else L5(ivec1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L4()
    goto L4_;
  } else {
  // L5(ivec1)
    Rsh_Fir_reg_ivec3_ = Rsh_Fir_reg_ivec1_1;
    goto L5_;
  }

L4_:;
  // dr = tryDispatchBuiltin.1("[", ivec1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_ivec1_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_ivec3_ = Rsh_Fir_reg_dr1;
    goto L5_;
  }

L5_:;
  // k1 = ld k
  Rsh_Fir_reg_k1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;

D1_:;
  // deopt 2 [ivec3, k1]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_ivec3_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_k1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L7_:;
  // k2 = force? k1
  Rsh_Fir_reg_k2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k1_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r = dyn __(ivec3, k2)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_ivec3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_k2_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r3 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r3;
  goto L0_;

D2_:;
  // deopt 6 [jvec]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_jvec1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L8_:;
  // jvec1 = force? jvec
  Rsh_Fir_reg_jvec1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jvec1);
  // checkMissing(jvec1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_jvec1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(jvec1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_jvec1_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c1 then L9() else L10(jvec1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L9()
    goto L9_;
  } else {
  // L10(jvec1)
    Rsh_Fir_reg_jvec3_ = Rsh_Fir_reg_jvec1_;
    goto L10_;
  }

L9_:;
  // dr2 = tryDispatchBuiltin.1("[", jvec1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_jvec1_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc1 then L11() else L10(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L11()
    goto L11_;
  } else {
  // L10(dr2)
    Rsh_Fir_reg_jvec3_ = Rsh_Fir_reg_dr2_1;
    goto L10_;
  }

L10_:;
  // k3 = ld k
  Rsh_Fir_reg_k3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

L11_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L1_;

D3_:;
  // deopt 8 [jvec3, k3]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_jvec3_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_k3_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L12_:;
  // k4 = force? k3
  Rsh_Fir_reg_k4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k3_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r1 = dyn __1(jvec3, k4)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_jvec3_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_k4_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(r1)
  // L1(r1)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r1_2;
  goto L1_;

D4_:;
  // deopt 12 [i]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L13_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 13 [i1, j]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L14_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // checkMissing(j1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_j1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r2 = `>`(i1, j1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_j1_;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c2 then L15() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L15()
    goto L15_;
  } else {
  // L2()
    goto L2_;
  }

L15_:;
  // compare_levels = ldf `compare.levels`
  Rsh_Fir_reg_compare_levels1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

D6_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   i2 = ld i;
  //   i3 = force? i2;
  //   checkMissing(i3);
  //   return i3;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2649136551_, CCP, RHO);
  // p1 = prom<V +>{
  //   j2 = ld j;
  //   j3 = force? j2;
  //   checkMissing(j3);
  //   return j3;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2649136551_1, CCP, RHO);
  // r5 = dyn compare_levels(p, p1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_compare_levels1, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D7_:;
  // deopt 20 [r5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_1;
}
SEXP Rsh_Fir_user_promise_inner2649136551_(SEXP CCP, SEXP RHO) {
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return i3
  return Rsh_Fir_reg_i3_;
}
SEXP Rsh_Fir_user_promise_inner2649136551_1(SEXP CCP, SEXP RHO) {
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // checkMissing(j3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_j3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return j3
  return Rsh_Fir_reg_j3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
