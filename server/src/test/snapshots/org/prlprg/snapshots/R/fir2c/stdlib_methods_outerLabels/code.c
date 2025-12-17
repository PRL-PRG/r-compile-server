#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3711709001_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3711709001_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3711709001_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3711709001_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3711709001
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3711709001_, RHO, CCP);
  // st outerLabels = r
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
SEXP Rsh_Fir_user_function_inner3711709001_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3711709001 dynamic dispatch ([labels, new])

  return Rsh_Fir_user_version_inner3711709001_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3711709001_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3711709001 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3711709001/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_new2_;  // new2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_labels3_;  // labels3
  SEXP Rsh_Fir_reg_labels4_;  // labels4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_labels6_;  // labels6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_labels9_;  // labels9
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_labels12_;  // labels12
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_rep_int1_;  // rep_int1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_new3_;  // new3
  SEXP Rsh_Fir_reg_new4_;  // new4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_new6_;  // new6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_new9_;  // new9
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_rep_int2_;  // rep_int2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r21_;  // r21

  // Bind parameters
  Rsh_Fir_reg_labels = PARAMS[0];
  Rsh_Fir_reg_new = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st labels = labels
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_labels, RHO);
  (void)(Rsh_Fir_reg_labels);
  // st new = new
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_new, RHO);
  (void)(Rsh_Fir_reg_new);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
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
  // st n = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
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
  // st m = r4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

L2_:;
  // labels1 = ld labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<sym labels>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [labels1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_labels1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // labels2 = force? labels1
  Rsh_Fir_reg_labels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels1_);
  // checkMissing(labels2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_labels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn length(labels2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_labels2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L6_:;
  // new1 = ld new
  Rsh_Fir_reg_new1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L7_:;
  // r3 = dyn base1(<sym new>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [new1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_new1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // new2 = force? new1
  Rsh_Fir_reg_new2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new1_);
  // checkMissing(new2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_new2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r5 = dyn length1(new2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_new2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   labels3 = ld labels;
  //   labels4 = force? labels3;
  //   checkMissing(labels4);
  //   c = `is.object`(labels4);
  //   if c then L3() else L4(labels4);
  // L0(dx1):
  //   return dx1;
  // L3():
  //   dr = tryDispatchBuiltin.1("[", labels4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L5() else L4(dr);
  // L4(labels6):
  //   sym2 = ldf `rep.int`;
  //   base2 = ldf `rep.int` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L6() else L7();
  // L1(labels9, r7):
  //   __ = ldf `[` in base;
  //   r13 = dyn __(labels9, r7);
  //   goto L0(r13);
  // L5():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L6():
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   r8 = `:`(1, n1);
  //   sym3 = ldf `rep.int`;
  //   base3 = ldf `rep.int` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L8() else L9();
  // L7():
  //   r6 = dyn base2(<lang `:`(1, n)>, <lang rep.int(m, n)>);
  //   goto L1(labels6, r6);
  // L2(labels12, r10):
  //   rep_int1 = ldf `rep.int` in base;
  //   r12 = dyn rep_int1(r8, r10);
  //   goto L1(labels12, r12);
  // L8():
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   rep_int = ldf `rep.int` in base;
  //   r11 = dyn rep_int(m1, n3);
  //   goto L2(labels6, r11);
  // L9():
  //   r9 = dyn base3(<sym m>, <sym n>);
  //   goto L2(labels6, r9);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3711709001_, CCP, RHO);
  // p1 = prom<V +>{
  //   new3 = ld new;
  //   new4 = force? new3;
  //   checkMissing(new4);
  //   c1 = `is.object`(new4);
  //   if c1 then L2() else L3(new4);
  // L0(dx3):
  //   return dx3;
  // L2():
  //   dr2 = tryDispatchBuiltin.1("[", new4);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L4() else L3(dr2);
  // L3(new6):
  //   sym4 = ldf `rep.int`;
  //   base4 = ldf `rep.int` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L5() else L6();
  // L1(new9, r16):
  //   __1 = ldf `[` in base;
  //   r19 = dyn __1(new9, r16);
  //   goto L0(r19);
  // L4():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // L5():
  //   m2 = ld m;
  //   m3 = force? m2;
  //   checkMissing(m3);
  //   r17 = `:`(1, m3);
  //   n4 = ld n;
  //   n5 = force? n4;
  //   checkMissing(n5);
  //   rep_int2 = ldf `rep.int` in base;
  //   r18 = dyn rep_int2(r17, n5);
  //   goto L1(new6, r18);
  // L6():
  //   r15 = dyn base4(<lang `:`(1, m)>, <sym n>);
  //   goto L1(new6, r15);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3711709001_1, CCP, RHO);
  // r21 = dyn paste[, , sep](p, p1, "#")
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 20 [r21]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_inner3711709001_(SEXP CCP, SEXP RHO) {
  // labels3 = ld labels
  Rsh_Fir_reg_labels3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // labels4 = force? labels3
  Rsh_Fir_reg_labels4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels3_);
  // checkMissing(labels4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_labels4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `is.object`(labels4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_labels4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c then L3() else L4(labels4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3()
    goto L3_;
  } else {
  // L4(labels4)
    Rsh_Fir_reg_labels6_ = Rsh_Fir_reg_labels4_;
    goto L4_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r13 = dyn __(labels9, r7)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_labels9_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r12 = dyn rep_int1(r8, r10)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(labels12, r12)
  // L1(labels12, r12)
  Rsh_Fir_reg_labels9_ = Rsh_Fir_reg_labels12_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r12_;
  goto L1_;

L3_:;
  // dr = tryDispatchBuiltin.1("[", labels4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_labels4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg_labels6_ = Rsh_Fir_reg_dr;
    goto L4_;
  }

L4_:;
  // sym2 = ldf `rep.int`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf `rep.int` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard2 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L6_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // r8 = `:`(1, n1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // sym3 = ldf `rep.int`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf `rep.int` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard3 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // r6 = dyn base2(<lang `:`(1, n)>, <lang rep.int(m, n)>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(labels6, r6)
  // L1(labels6, r6)
  Rsh_Fir_reg_labels9_ = Rsh_Fir_reg_labels6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L1_;

L8_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r11 = dyn rep_int(m1, n3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(labels6, r11)
  // L2(labels6, r11)
  Rsh_Fir_reg_labels12_ = Rsh_Fir_reg_labels6_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L2_;

L9_:;
  // r9 = dyn base3(<sym m>, <sym n>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2(labels6, r9)
  // L2(labels6, r9)
  Rsh_Fir_reg_labels12_ = Rsh_Fir_reg_labels6_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner3711709001_1(SEXP CCP, SEXP RHO) {
  // new3 = ld new
  Rsh_Fir_reg_new3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // new4 = force? new3
  Rsh_Fir_reg_new4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new3_);
  // checkMissing(new4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_new4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(new4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_new4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c1 then L2() else L3(new4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L2()
    goto L2_;
  } else {
  // L3(new4)
    Rsh_Fir_reg_new6_ = Rsh_Fir_reg_new4_;
    goto L3_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r19 = dyn __1(new9, r16)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_new9_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // dr2 = tryDispatchBuiltin.1("[", new4)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_new4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc1 then L4() else L3(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr2)
    Rsh_Fir_reg_new6_ = Rsh_Fir_reg_dr2_;
    goto L3_;
  }

L3_:;
  // sym4 = ldf `rep.int`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf `rep.int` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard4 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;

L5_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r17 = `:`(1, m3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_m3_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // rep_int2 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r18 = dyn rep_int2(r17, n5)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int2_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(new6, r18)
  // L1(new6, r18)
  Rsh_Fir_reg_new9_ = Rsh_Fir_reg_new6_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r18_;
  goto L1_;

L6_:;
  // r15 = dyn base4(<lang `:`(1, m)>, <sym n>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(new6, r15)
  // L1(new6, r15)
  Rsh_Fir_reg_new9_ = Rsh_Fir_reg_new6_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
