#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner991933454_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner991933454_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner991933454
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner991933454_, RHO, CCP);
  // st `.deleteSubClass` = r
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
SEXP Rsh_Fir_user_function_inner991933454_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner991933454 dynamic dispatch ([cdef, subclass])

  return Rsh_Fir_user_version_inner991933454_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner991933454_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner991933454 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner991933454/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_cdef;  // cdef
  SEXP Rsh_Fir_reg_subclass;  // subclass
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_subclass1_;  // subclass1
  SEXP Rsh_Fir_reg_subclass2_;  // subclass2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_subclasses;  // subclasses
  SEXP Rsh_Fir_reg_subclasses1_;  // subclasses1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_ii;  // ii
  SEXP Rsh_Fir_reg_ii1_;  // ii1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_subclasses2_;  // subclasses2
  SEXP Rsh_Fir_reg_subclasses3_;  // subclasses3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_subclasses5_;  // subclasses5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_ii2_;  // ii2
  SEXP Rsh_Fir_reg_ii3_;  // ii3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_cdef1_;  // cdef1
  SEXP Rsh_Fir_reg_cdef2_;  // cdef2

  // Bind parameters
  Rsh_Fir_reg_cdef = PARAMS[0];
  Rsh_Fir_reg_subclass = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st cdef = cdef
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_cdef, RHO);
  (void)(Rsh_Fir_reg_cdef);
  // st subclass = subclass
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_subclass, RHO);
  (void)(Rsh_Fir_reg_subclass);
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r = dyn __(<sym cdef>, <sym subclasses>)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // st subclasses = r
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf match
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf match in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
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

L0_:;
  // st ii = r2
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // ii = ld ii
  Rsh_Fir_reg_ii = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

L1_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r6 = dyn match(subclass2, r4, 0.0, NULL)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_subclass2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 8);

L3_:;
  // l = ld cdef
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ___ = ldf `@<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

L4_:;
  // subclass1 = ld subclass
  Rsh_Fir_reg_subclass1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(<sym subclass>, <lang names(subclasses)>, 0.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 5 [subclass1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_subclass1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // subclass2 = force? subclass1
  Rsh_Fir_reg_subclass2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclass1_);
  // checkMissing(subclass2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_subclass2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // subclasses = ld subclasses
  Rsh_Fir_reg_subclasses = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L8_:;
  // r3 = dyn base1(<sym subclasses>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D1_:;
  // deopt 9 [subclasses]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_subclasses;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // subclasses1 = force? subclasses
  Rsh_Fir_reg_subclasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclasses);
  // checkMissing(subclasses1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_subclasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r5 = dyn names(subclasses1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_subclasses1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

D3_:;
  // deopt 16 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r6_;
  goto L0_;

D4_:;
  // deopt 18 [ii]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_ii;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // ii1 = force? ii
  Rsh_Fir_reg_ii1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii);
  // checkMissing(ii1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_ii1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // r7 = `>`(ii1, 0.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_ii1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c then L13() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L2()
    goto L2_;
  }

L13_:;
  // subclasses2 = ld subclasses
  Rsh_Fir_reg_subclasses2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 22 [subclasses2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_subclasses2_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // subclasses3 = force? subclasses2
  Rsh_Fir_reg_subclasses3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclasses2_);
  // checkMissing(subclasses3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_subclasses3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(subclasses3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_subclasses3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L15() else L16(subclasses3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L15()
    goto L15_;
  } else {
  // L16(subclasses3)
    Rsh_Fir_reg_subclasses5_ = Rsh_Fir_reg_subclasses3_;
    goto L16_;
  }

L15_:;
  // dr = tryDispatchBuiltin.1("[", subclasses3)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_subclasses3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L17() else L16(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L17()
    goto L17_;
  } else {
  // L16(dr)
    Rsh_Fir_reg_subclasses5_ = Rsh_Fir_reg_dr;
    goto L16_;
  }

L16_:;
  // ii2 = ld ii
  Rsh_Fir_reg_ii2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

L17_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D6_:;
  // deopt 24 [subclasses5, ii2]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_subclasses5_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_ii2_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // ii3 = force? ii2
  Rsh_Fir_reg_ii3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii2_);
  // checkMissing(ii3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_ii3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r8 = `-`(<missing>, ii3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_ii3_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r9 = dyn __1(subclasses5, r8)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_subclasses5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L3_;

D7_:;
  // deopt 29 [dx1, l, dx1]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // r10 = dyn ___(l, NULL, "subclasses", dx1)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args20[3] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D8_:;
  // deopt 32 [dx1, r10]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L20_:;
  // st cdef = r10
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // cdef1 = ld cdef
  Rsh_Fir_reg_cdef1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 34 [cdef1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_cdef1_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // cdef2 = force? cdef1
  Rsh_Fir_reg_cdef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef1_);
  // checkMissing(cdef2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_cdef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return cdef2
  return Rsh_Fir_reg_cdef2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
