#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1476891869_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1476891869_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1476891869_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1476891869_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1476891869_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1476891869_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1476891869_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1476891869_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner1476891869
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1476891869_, RHO, CCP);
  // st toLatexPDlist = r
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
SEXP Rsh_Fir_user_function_inner1476891869_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1476891869 dynamic dispatch ([pdList, sep])

  return Rsh_Fir_user_version_inner1476891869_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1476891869_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1476891869 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1476891869/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_pdList;  // pdList
  SEXP Rsh_Fir_reg_sep;  // sep
  SEXP Rsh_Fir_reg_sep_isMissing;  // sep_isMissing
  SEXP Rsh_Fir_reg_sep_orDefault;  // sep_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_pdList1_;  // pdList1
  SEXP Rsh_Fir_reg_pdList2_;  // pdList2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_ver;  // ver
  SEXP Rsh_Fir_reg_ver1_;  // ver1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ver3_;  // ver3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sort;  // sort
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_ver4_;  // ver4
  SEXP Rsh_Fir_reg_ver5_;  // ver5
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_ver6_;  // ver6
  SEXP Rsh_Fir_reg_ver7_;  // ver7
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ver8_;  // ver8
  SEXP Rsh_Fir_reg_ver9_;  // ver9
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sep1_;  // sep1
  SEXP Rsh_Fir_reg_sep2_;  // sep2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_ver10_;  // ver10
  SEXP Rsh_Fir_reg_ver11_;  // ver11

  // Bind parameters
  Rsh_Fir_reg_pdList = PARAMS[0];
  Rsh_Fir_reg_sep = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st pdList = pdList
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_pdList, RHO);
  (void)(Rsh_Fir_reg_pdList);
  // sep_isMissing = missing.0(sep)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sep;
  Rsh_Fir_reg_sep_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if sep_isMissing then L0("~") else L0(sep)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sep_isMissing)) {
  // L0("~")
    Rsh_Fir_reg_sep_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(sep)
    Rsh_Fir_reg_sep_orDefault = Rsh_Fir_reg_sep;
    goto L0_;
  }

L0_:;
  // st sep = sep_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_sep_orDefault, RHO);
  (void)(Rsh_Fir_reg_sep_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L9() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // ver10 = ld ver
  Rsh_Fir_reg_ver10_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

L3_:;
  // st ver = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

L4_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<lang `<-`(ver, vapply(pdList, `[[`, "", "Version"))>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   pdList1 = ld pdList;
  //   pdList2 = force? pdList1;
  //   checkMissing(pdList2);
  //   return pdList2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1476891869_, CCP, RHO);
  // p1 = prom<V +>{
  //   __ = ld `[[`;
  //   __1 = force? __;
  //   checkMissing(__1);
  //   return __1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1476891869_1, CCP, RHO);
  // r4 = dyn vapply(p, p1, "", "Version")
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 4, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // st ver = r4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r5 = dyn length(r4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L1_;

L9_:;
  // ver = ld ver
  Rsh_Fir_reg_ver = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 12 [ver]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_ver;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // ver1 = force? ver
  Rsh_Fir_reg_ver1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver);
  // checkMissing(ver1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_ver1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(ver1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_ver1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c1 then L11() else L12(ver1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L12(ver1)
    Rsh_Fir_reg_ver3_ = Rsh_Fir_reg_ver1_;
    goto L12_;
  }

L11_:;
  // dr = tryDispatchBuiltin.1("[", ver1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_ver1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc then L13() else L12(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L13()
    goto L13_;
  } else {
  // L12(dr)
    Rsh_Fir_reg_ver3_ = Rsh_Fir_reg_dr;
    goto L12_;
  }

L12_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

L13_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D4_:;
  // deopt 15 [ver3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_ver3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // p2 = prom<V +>{
  //   sym1 = ldf names;
  //   base1 = ldf names in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   ver4 = ld ver;
  //   ver5 = force? ver4;
  //   checkMissing(ver5);
  //   names = ldf names in base;
  //   r8 = dyn names(ver5);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1(<sym ver>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1476891869_2, CCP, RHO);
  // r10 = dyn sort(p2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 17 [ver3, r10]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_ver3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r11 = dyn __2(ver3, r10)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_ver3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L3_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p3 = prom<V +>{
  //   sym2 = ldf names;
  //   base2 = ldf names in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   ver6 = ld ver;
  //   ver7 = force? ver6;
  //   checkMissing(ver7);
  //   names1 = ldf names in base;
  //   r14 = dyn names1(ver7);
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base2(<sym ver>);
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1476891869_3, CCP, RHO);
  // p4 = prom<V +>{
  //   ver8 = ld ver;
  //   ver9 = force? ver8;
  //   checkMissing(ver9);
  //   return ver9;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1476891869_4, CCP, RHO);
  // p5 = prom<V +>{
  //   sep1 = ld sep;
  //   sep2 = force? sep1;
  //   checkMissing(sep2);
  //   return sep2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1476891869_5, CCP, RHO);
  // r18 = dyn paste[, , sep, collapse](p3, p4, p5, ", ")
  SEXP Rsh_Fir_array_args25[4];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args25[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names9[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 4, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D7_:;
  // deopt 28 [r18]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_;

D8_:;
  // deopt 29 [ver10]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_ver10_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // ver11 = force? ver10
  Rsh_Fir_reg_ver11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver10_);
  // checkMissing(ver11)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_ver11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ver11
  return Rsh_Fir_reg_ver11_;
}
SEXP Rsh_Fir_user_promise_inner1476891869_(SEXP CCP, SEXP RHO) {
  // pdList1 = ld pdList
  Rsh_Fir_reg_pdList1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // pdList2 = force? pdList1
  Rsh_Fir_reg_pdList2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pdList1_);
  // checkMissing(pdList2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_pdList2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return pdList2
  return Rsh_Fir_reg_pdList2_;
}
SEXP Rsh_Fir_user_promise_inner1476891869_1(SEXP CCP, SEXP RHO) {
  // __ = ld `[[`
  Rsh_Fir_reg___ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // __1 = force? __
  Rsh_Fir_reg___1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___);
  // checkMissing(__1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg___1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return __1
  return Rsh_Fir_reg___1_;
}
SEXP Rsh_Fir_user_promise_inner1476891869_2(SEXP CCP, SEXP RHO) {
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // ver4 = ld ver
  Rsh_Fir_reg_ver4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // ver5 = force? ver4
  Rsh_Fir_reg_ver5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver4_);
  // checkMissing(ver5)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_ver5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r8 = dyn names(ver5)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ver5_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1(<sym ver>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1476891869_3(SEXP CCP, SEXP RHO) {
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // ver6 = ld ver
  Rsh_Fir_reg_ver6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // ver7 = force? ver6
  Rsh_Fir_reg_ver7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver6_);
  // checkMissing(ver7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ver7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r14 = dyn names1(ver7)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ver7_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base2(<sym ver>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1476891869_4(SEXP CCP, SEXP RHO) {
  // ver8 = ld ver
  Rsh_Fir_reg_ver8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // ver9 = force? ver8
  Rsh_Fir_reg_ver9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver8_);
  // checkMissing(ver9)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_ver9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return ver9
  return Rsh_Fir_reg_ver9_;
}
SEXP Rsh_Fir_user_promise_inner1476891869_5(SEXP CCP, SEXP RHO) {
  // sep1 = ld sep
  Rsh_Fir_reg_sep1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // sep2 = force? sep1
  Rsh_Fir_reg_sep2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep1_);
  // checkMissing(sep2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sep2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return sep2
  return Rsh_Fir_reg_sep2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
