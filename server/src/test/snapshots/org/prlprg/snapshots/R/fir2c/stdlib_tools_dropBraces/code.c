#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1171288635_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1171288635_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1171288635_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1171288635_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1171288635_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1171288635_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1171288635_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1171288635
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1171288635_, RHO, CCP);
  // st dropBraces = r
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
SEXP Rsh_Fir_user_function_inner1171288635_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1171288635 dynamic dispatch ([lines])

  return Rsh_Fir_user_version_inner1171288635_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1171288635_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1171288635 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1171288635/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_lines;  // lines
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_lines1_;  // lines1
  SEXP Rsh_Fir_reg_lines2_;  // lines2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_grepl;  // grepl
  SEXP Rsh_Fir_reg_lines3_;  // lines3
  SEXP Rsh_Fir_reg_lines4_;  // lines4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_grepl1_;  // grepl1
  SEXP Rsh_Fir_reg_lines5_;  // lines5
  SEXP Rsh_Fir_reg_lines6_;  // lines6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_lines7_;  // lines7
  SEXP Rsh_Fir_reg_lines8_;  // lines8
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_lines10_;  // lines10
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_lines13_;  // lines13
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_start;  // start
  SEXP Rsh_Fir_reg_start1_;  // start1
  SEXP Rsh_Fir_reg_end;  // end
  SEXP Rsh_Fir_reg_end1_;  // end1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_cumsum;  // cumsum
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_start2_;  // start2
  SEXP Rsh_Fir_reg_start3_;  // start3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_end2_;  // end2
  SEXP Rsh_Fir_reg_end3_;  // end3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sub1_;  // sub1
  SEXP Rsh_Fir_reg_lines14_;  // lines14
  SEXP Rsh_Fir_reg_lines15_;  // lines15
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_lines16_;  // lines16
  SEXP Rsh_Fir_reg_lines17_;  // lines17
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_lines19_;  // lines19
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_grepl2_;  // grepl2
  SEXP Rsh_Fir_reg_lines20_;  // lines20
  SEXP Rsh_Fir_reg_lines21_;  // lines21
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_lines22_;  // lines22
  SEXP Rsh_Fir_reg_lines23_;  // lines23

  // Bind parameters
  Rsh_Fir_reg_lines = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st lines = lines
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_lines, RHO);
  (void)(Rsh_Fir_reg_lines);
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // st lines = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sub1 = ldf sub
  Rsh_Fir_reg_sub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L20() else D12()
  // L20()
  goto L20_;

L1_:;
  // r10 = `==`(r7, 0.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // start2 = ld start
  Rsh_Fir_reg_start2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

L2_:;
  // st lines = dx3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // lines22 = ld lines
  Rsh_Fir_reg_lines22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D17()
  // L28()
  goto L28_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   lines1 = ld lines;
  //   lines2 = force? lines1;
  //   checkMissing(lines2);
  //   return lines2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1171288635_, CCP, RHO);
  // r1 = dyn sub("[{].*[}]", " ", p)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[2] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // st lines = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p1 = prom<V +>{
  //   lines3 = ld lines;
  //   lines4 = force? lines3;
  //   checkMissing(lines4);
  //   return lines4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1171288635_1, CCP, RHO);
  // r3 = dyn grepl("[{]", p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // st start = r3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // grepl1 = ldf grepl
  Rsh_Fir_reg_grepl1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p2 = prom<V +>{
  //   lines5 = ld lines;
  //   lines6 = force? lines5;
  //   checkMissing(lines6);
  //   return lines6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1171288635_2, CCP, RHO);
  // r5 = dyn grepl1("[}]", p2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 17 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // st end = r5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // lines7 = ld lines
  Rsh_Fir_reg_lines7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 19 [lines7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_lines7_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // lines8 = force? lines7
  Rsh_Fir_reg_lines8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines7_);
  // checkMissing(lines8)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_lines8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // c = `is.object`(lines8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_lines8_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c then L10() else L11(lines8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L11(lines8)
    Rsh_Fir_reg_lines10_ = Rsh_Fir_reg_lines8_;
    goto L11_;
  }

L10_:;
  // dr = tryDispatchBuiltin.1("[", lines8)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_lines8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr)
    Rsh_Fir_reg_lines10_ = Rsh_Fir_reg_dr;
    goto L11_;
  }

L11_:;
  // sym = ldf cumsum
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf cumsum in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L13_:;
  // start = ld start
  Rsh_Fir_reg_start = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

L14_:;
  // r6 = dyn base(<lang `-`(start, end)>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(lines10, r6)
  // L1(lines10, r6)
  Rsh_Fir_reg_lines13_ = Rsh_Fir_reg_lines10_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L1_;

D7_:;
  // deopt 23 [lines10, start]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_lines10_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_start;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // start1 = force? start
  Rsh_Fir_reg_start1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start);
  // checkMissing(start1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_start1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // end = ld end
  Rsh_Fir_reg_end = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 24 [lines10, start1, end]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_lines10_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_start1_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_end;
  Rsh_Fir_deopt(24, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // end1 = force? end
  Rsh_Fir_reg_end1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end);
  // checkMissing(end1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_end1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r8 = `-`(start1, end1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_start1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_end1_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // cumsum = ldf cumsum in base
  Rsh_Fir_reg_cumsum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r9 = dyn cumsum(r8)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cumsum, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 28 [lines10, r9]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_lines10_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L1(lines10, r9)
  // L1(lines10, r9)
  Rsh_Fir_reg_lines13_ = Rsh_Fir_reg_lines10_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r9_;
  goto L1_;

D10_:;
  // deopt 30 [lines13, r10, start2]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_lines13_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_start2_;
  Rsh_Fir_deopt(30, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // start3 = force? start2
  Rsh_Fir_reg_start3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start2_);
  // checkMissing(start3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_start3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r11 = `||`(r10, start3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_start3_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // end2 = ld end
  Rsh_Fir_reg_end2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L19() else D11()
  // L19()
  goto L19_;

D11_:;
  // deopt 32 [lines13, r11, end2]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_lines13_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_end2_;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // end3 = force? end2
  Rsh_Fir_reg_end3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end2_);
  // checkMissing(end3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_end3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r12 = `||`(r11, end3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_end3_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r13 = dyn __(lines13, r12)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_lines13_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_;
  goto L0_;

D12_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p3 = prom<V +>{
  //   lines14 = ld lines;
  //   lines15 = force? lines14;
  //   checkMissing(lines15);
  //   return lines15;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1171288635_3, CCP, RHO);
  // r15 = dyn sub1("[{].*", "", p3)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub1_, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L21() else D13()
  // L21()
  goto L21_;

D13_:;
  // deopt 42 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // st lines = r15
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // lines16 = ld lines
  Rsh_Fir_reg_lines16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D14()
  // L22()
  goto L22_;

D14_:;
  // deopt 44 [lines16]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_lines16_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L22_:;
  // lines17 = force? lines16
  Rsh_Fir_reg_lines17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines16_);
  // checkMissing(lines17)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_lines17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(lines17)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_lines17_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c1 then L23() else L24(lines17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L23()
    goto L23_;
  } else {
  // L24(lines17)
    Rsh_Fir_reg_lines19_ = Rsh_Fir_reg_lines17_;
    goto L24_;
  }

L23_:;
  // dr2 = tryDispatchBuiltin.1("[", lines17)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_lines17_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc1 then L25() else L24(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L25()
    goto L25_;
  } else {
  // L24(dr2)
    Rsh_Fir_reg_lines19_ = Rsh_Fir_reg_dr2_;
    goto L24_;
  }

L24_:;
  // grepl2 = ldf grepl
  Rsh_Fir_reg_grepl2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L26() else D15()
  // L26()
  goto L26_;

L25_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L2(dx2)
  // L2(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

D15_:;
  // deopt 47 [lines19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_lines19_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L26_:;
  // p4 = prom<V +>{
  //   lines20 = ld lines;
  //   lines21 = force? lines20;
  //   checkMissing(lines21);
  //   return lines21;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1171288635_4, CCP, RHO);
  // r17 = dyn grepl2(".*[}]", p4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl2_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L27() else D16()
  // L27()
  goto L27_;

D16_:;
  // deopt 50 [lines19, r17]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_lines19_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L27_:;
  // r18 = `!`(r17)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r19 = dyn __1(lines19, r18)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_lines19_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2(r19)
  // L2(r19)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r19_;
  goto L2_;

D17_:;
  // deopt 54 [lines22]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_lines22_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L28_:;
  // lines23 = force? lines22
  Rsh_Fir_reg_lines23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines22_);
  // checkMissing(lines23)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_lines23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return lines23
  return Rsh_Fir_reg_lines23_;
}
SEXP Rsh_Fir_user_promise_inner1171288635_(SEXP CCP, SEXP RHO) {
  // lines1 = ld lines
  Rsh_Fir_reg_lines1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lines2 = force? lines1
  Rsh_Fir_reg_lines2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines1_);
  // checkMissing(lines2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_lines2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return lines2
  return Rsh_Fir_reg_lines2_;
}
SEXP Rsh_Fir_user_promise_inner1171288635_1(SEXP CCP, SEXP RHO) {
  // lines3 = ld lines
  Rsh_Fir_reg_lines3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lines4 = force? lines3
  Rsh_Fir_reg_lines4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines3_);
  // checkMissing(lines4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_lines4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return lines4
  return Rsh_Fir_reg_lines4_;
}
SEXP Rsh_Fir_user_promise_inner1171288635_2(SEXP CCP, SEXP RHO) {
  // lines5 = ld lines
  Rsh_Fir_reg_lines5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lines6 = force? lines5
  Rsh_Fir_reg_lines6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines5_);
  // checkMissing(lines6)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_lines6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return lines6
  return Rsh_Fir_reg_lines6_;
}
SEXP Rsh_Fir_user_promise_inner1171288635_3(SEXP CCP, SEXP RHO) {
  // lines14 = ld lines
  Rsh_Fir_reg_lines14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lines15 = force? lines14
  Rsh_Fir_reg_lines15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines14_);
  // checkMissing(lines15)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_lines15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return lines15
  return Rsh_Fir_reg_lines15_;
}
SEXP Rsh_Fir_user_promise_inner1171288635_4(SEXP CCP, SEXP RHO) {
  // lines20 = ld lines
  Rsh_Fir_reg_lines20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lines21 = force? lines20
  Rsh_Fir_reg_lines21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines20_);
  // checkMissing(lines21)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_lines21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return lines21
  return Rsh_Fir_reg_lines21_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
