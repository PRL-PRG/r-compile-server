#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3502779137_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3502779137_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3502779137_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3502779137_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3502779137_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3502779137
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3502779137_, RHO, CCP);
  // st srcfilealias = r
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
SEXP Rsh_Fir_user_function_inner3502779137_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3502779137 dynamic dispatch ([filename, srcfile])

  return Rsh_Fir_user_version_inner3502779137_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3502779137_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3502779137 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3502779137/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_filename;  // filename
  SEXP Rsh_Fir_reg_srcfile;  // srcfile
  SEXP Rsh_Fir_reg_stopifnot;  // stopifnot
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_filename1_;  // filename1
  SEXP Rsh_Fir_reg_filename2_;  // filename2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_filename3_;  // filename3
  SEXP Rsh_Fir_reg_filename4_;  // filename4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_new_env;  // new_env
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_emptyenv;  // emptyenv
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_filename5_;  // filename5
  SEXP Rsh_Fir_reg_filename6_;  // filename6
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_filename8_;  // filename8
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_srcfile1_;  // srcfile1
  SEXP Rsh_Fir_reg_srcfile2_;  // srcfile2
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_srcfile4_;  // srcfile4
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_e;  // e
  SEXP Rsh_Fir_reg_e1_;  // e1

  // Bind parameters
  Rsh_Fir_reg_filename = PARAMS[0];
  Rsh_Fir_reg_srcfile = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st filename = filename
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_filename, RHO);
  (void)(Rsh_Fir_reg_filename);
  // st srcfile = srcfile
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_srcfile, RHO);
  (void)(Rsh_Fir_reg_srcfile);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // l6 = ld e
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   sym = ldf `is.character`;
  //   base = ldf `is.character` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   filename1 = ld filename;
  //   filename2 = force? filename1;
  //   checkMissing(filename2);
  //   c = `is.character`(filename2);
  //   goto L0(c);
  // L2():
  //   r = dyn base(<sym filename>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3502779137_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r4):
  //   r6 = `==`(r4, 1);
  //   return r6;
  // L1():
  //   filename3 = ld filename;
  //   filename4 = force? filename3;
  //   checkMissing(filename4);
  //   length = ldf length in base;
  //   r5 = dyn length(filename4);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base1(<sym filename>);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3502779137_1, CCP, RHO);
  // r8 = dyn stopifnot(p, p1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 4 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // new_env = ldf `new.env`
  Rsh_Fir_reg_new_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p2 = prom<V +>{
  //   sym2 = ldf emptyenv;
  //   base2 = ldf emptyenv in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   emptyenv = ldf emptyenv in base;
  //   r11 = dyn emptyenv();
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base2();
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3502779137_2, CCP, RHO);
  // r13 = dyn new_env[parent](p2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new_env, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 9 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // st e = r13
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // filename5 = ld filename
  Rsh_Fir_reg_filename5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 11 [filename5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_filename5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // filename6 = force? filename5
  Rsh_Fir_reg_filename6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename5_);
  // checkMissing(filename6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_filename6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // l = ld e
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L7() else L8(filename6, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L7()
    goto L7_;
  } else {
  // L8(filename6, l)
    Rsh_Fir_reg_filename8_ = Rsh_Fir_reg_filename6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L8_;
  }

L6_:;
  // st e = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // srcfile1 = ld srcfile
  Rsh_Fir_reg_srcfile1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

L7_:;
  // dr = tryDispatchBuiltin.0("$<-", l, filename6)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_filename6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L9() else L8(filename6, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L9()
    goto L9_;
  } else {
  // L8(filename6, dr)
    Rsh_Fir_reg_filename8_ = Rsh_Fir_reg_filename6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L8_;
  }

L8_:;
  // r14 = `$<-`(l2, <sym filename>, filename6)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_filename6_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L6_;

L9_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D5_:;
  // deopt 16 [srcfile1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_srcfile1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // srcfile2 = force? srcfile1
  Rsh_Fir_reg_srcfile2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile1_);
  // checkMissing(srcfile2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_srcfile2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // l3 = ld e
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c2 = `is.object`(l3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c2 then L12() else L13(srcfile2, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L12()
    goto L12_;
  } else {
  // L13(srcfile2, l3)
    Rsh_Fir_reg_srcfile4_ = Rsh_Fir_reg_srcfile2_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L13_;
  }

L11_:;
  // st e = dx3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L12_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l3, srcfile2)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_srcfile2_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L14() else L13(srcfile2, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L14()
    goto L14_;
  } else {
  // L13(srcfile2, dr2)
    Rsh_Fir_reg_srcfile4_ = Rsh_Fir_reg_srcfile2_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L13_;
  }

L13_:;
  // r15 = `$<-`(l5, <sym original>, srcfile2)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_srcfile2_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L11(r15)
  // L11(r15)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L11_;

L14_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L11(dx2)
  // L11(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L11_;

L15_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r18 = dyn c3("srcfilealias", "srcfile")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

L16_:;
  // r16 = dyn base3("srcfilealias", "srcfile")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;

D6_:;
  // deopt 26 [r18]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

D7_:;
  // deopt 28 [r17, l6, r17]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(28, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // r19 = dyn class__(l6, NULL, r17)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 30 [r17, r19]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // st e = r19
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // e = ld e
  Rsh_Fir_reg_e = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 32 [e]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_e;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L20_:;
  // e1 = force? e
  Rsh_Fir_reg_e1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e);
  // checkMissing(e1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_e1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return e1
  return Rsh_Fir_reg_e1_;
}
SEXP Rsh_Fir_user_promise_inner3502779137_(SEXP CCP, SEXP RHO) {
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.character` in base
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
  // filename1 = ld filename
  Rsh_Fir_reg_filename1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // filename2 = force? filename1
  Rsh_Fir_reg_filename2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename1_);
  // checkMissing(filename2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_filename2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `is.character`(filename2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_filename2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L2_:;
  // r = dyn base(<sym filename>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3502779137_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r6 = `==`(r4, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // filename3 = ld filename
  Rsh_Fir_reg_filename3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // filename4 = force? filename3
  Rsh_Fir_reg_filename4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename3_);
  // checkMissing(filename4)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_filename4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r5 = dyn length(filename4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_filename4_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base1(<sym filename>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3502779137_2(SEXP CCP, SEXP RHO) {
  // sym2 = ldf emptyenv
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf emptyenv in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_;

L1_:;
  // emptyenv = ldf emptyenv in base
  Rsh_Fir_reg_emptyenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r11 = dyn emptyenv()
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_emptyenv, 0, NULL, NULL, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base2()
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
