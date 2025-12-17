#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner766954739_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner766954739_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner766954739_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner766954739_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner766954739
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner766954739_, RHO, CCP);
  // st `.deleteSuperClass` = r
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
SEXP Rsh_Fir_user_function_inner766954739_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner766954739 dynamic dispatch ([cdef, superclass])

  return Rsh_Fir_user_version_inner766954739_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner766954739_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner766954739 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner766954739/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_cdef;  // cdef
  SEXP Rsh_Fir_reg_superclass;  // superclass
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_superclass1_;  // superclass1
  SEXP Rsh_Fir_reg_superclass2_;  // superclass2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_superclasses;  // superclasses
  SEXP Rsh_Fir_reg_superclasses1_;  // superclasses1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_ii;  // ii
  SEXP Rsh_Fir_reg_ii1_;  // ii1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_superclasses2_;  // superclasses2
  SEXP Rsh_Fir_reg_superclasses3_;  // superclasses3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_superclasses5_;  // superclasses5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_ii2_;  // ii2
  SEXP Rsh_Fir_reg_ii3_;  // ii3
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg__removeSuperClass;  // _removeSuperClass
  SEXP Rsh_Fir_reg_subclass;  // subclass
  SEXP Rsh_Fir_reg_subclass1_;  // subclass1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_superclass3_;  // superclass3
  SEXP Rsh_Fir_reg_superclass4_;  // superclass4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_cdef1_;  // cdef1
  SEXP Rsh_Fir_reg_cdef2_;  // cdef2

  // Bind parameters
  Rsh_Fir_reg_cdef = PARAMS[0];
  Rsh_Fir_reg_superclass = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st cdef = cdef
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_cdef, RHO);
  (void)(Rsh_Fir_reg_cdef);
  // st superclass = superclass
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_superclass, RHO);
  (void)(Rsh_Fir_reg_superclass);
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r = dyn __(<sym cdef>, <sym contains>)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // st superclasses = r
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf match
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf match in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // st ii = r2
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // ii = ld ii
  Rsh_Fir_reg_ii = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L1_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r6 = dyn match(superclass2, r4, 0, NULL)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_superclass2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 9);

L3_:;
  // l = ld cdef
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ___ = ldf `@<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

L4_:;
  // s = toForSeq(r11)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 8);
  // goto L5(i)
  // L5(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L5_;

L5_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // c2 = `<`.1(l1, i2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if c2 then L27() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st subclass = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // _removeSuperClass = ldf `.removeSuperClass`
  Rsh_Fir_reg__removeSuperClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L28() else D10()
  // L28()
  goto L28_;

L7_:;
  // superclass1 = ld superclass
  Rsh_Fir_reg_superclass1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r1 = dyn base(<sym superclass>, <lang names(superclasses)>, 0)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 5 [superclass1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_superclass1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // superclass2 = force? superclass1
  Rsh_Fir_reg_superclass2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclass1_);
  // checkMissing(superclass2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_superclass2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // superclasses = ld superclasses
  Rsh_Fir_reg_superclasses = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

L11_:;
  // r3 = dyn base1(<sym superclasses>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D1_:;
  // deopt 9 [superclasses]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_superclasses;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // superclasses1 = force? superclasses
  Rsh_Fir_reg_superclasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses);
  // checkMissing(superclasses1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_superclasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r5 = dyn names(superclasses1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_superclasses1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
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

L14_:;
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

L15_:;
  // ii1 = force? ii
  Rsh_Fir_reg_ii1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii);
  // checkMissing(ii1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_ii1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(ii1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ii1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c then L16() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L16()
    goto L16_;
  } else {
  // L2()
    goto L2_;
  }

L16_:;
  // superclasses2 = ld superclasses
  Rsh_Fir_reg_superclasses2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 20 [superclasses2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_superclasses2_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // superclasses3 = force? superclasses2
  Rsh_Fir_reg_superclasses3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses2_);
  // checkMissing(superclasses3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_superclasses3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(superclasses3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_superclasses3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c1 then L18() else L19(superclasses3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L18()
    goto L18_;
  } else {
  // L19(superclasses3)
    Rsh_Fir_reg_superclasses5_ = Rsh_Fir_reg_superclasses3_;
    goto L19_;
  }

L18_:;
  // dr = tryDispatchBuiltin.1("[", superclasses3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_superclasses3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L20() else L19(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L20()
    goto L20_;
  } else {
  // L19(dr)
    Rsh_Fir_reg_superclasses5_ = Rsh_Fir_reg_dr;
    goto L19_;
  }

L19_:;
  // ii2 = ld ii
  Rsh_Fir_reg_ii2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

L20_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D6_:;
  // deopt 22 [superclasses5, ii2]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_superclasses5_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_ii2_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // ii3 = force? ii2
  Rsh_Fir_reg_ii3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii2_);
  // checkMissing(ii3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ii3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // r7 = `-`(<missing>, ii3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_ii3_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r8 = dyn __1(superclasses5, r7)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_superclasses5_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L3_;

D7_:;
  // deopt 27 [dx1, l, dx1]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // r9 = dyn ___(l, NULL, "contains", dx1)
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args24[3] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 30 [dx1, r9]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L23_:;
  // st cdef = r9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r12 = dyn __2(<sym cdef>, <sym subclasses>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r13 = dyn names1(r12)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

L25_:;
  // r10 = dyn base2(<lang `@`(cdef, subclasses)>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L4_;

D9_:;
  // deopt 37 [r13]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r13_;
  goto L4_;

L27_:;
  // cdef1 = ld cdef
  Rsh_Fir_reg_cdef1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

D10_:;
  // deopt 39 [i2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L28_:;
  // p = prom<V +>{
  //   subclass = ld subclass;
  //   subclass1 = force? subclass;
  //   checkMissing(subclass1);
  //   return subclass1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner766954739_, CCP, RHO);
  // p1 = prom<V +>{
  //   superclass3 = ld superclass;
  //   superclass4 = force? superclass3;
  //   checkMissing(superclass4);
  //   return superclass4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner766954739_1, CCP, RHO);
  // r16 = dyn _removeSuperClass(p, p1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__removeSuperClass, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

D11_:;
  // deopt 42 [i2, r16]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L5(i2)
  // L5(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L5_;

D12_:;
  // deopt 46 [cdef1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_cdef1_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L30_:;
  // cdef2 = force? cdef1
  Rsh_Fir_reg_cdef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef1_);
  // checkMissing(cdef2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_cdef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return cdef2
  return Rsh_Fir_reg_cdef2_;
}
SEXP Rsh_Fir_user_promise_inner766954739_(SEXP CCP, SEXP RHO) {
  // subclass = ld subclass
  Rsh_Fir_reg_subclass = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // subclass1 = force? subclass
  Rsh_Fir_reg_subclass1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclass);
  // checkMissing(subclass1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_subclass1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return subclass1
  return Rsh_Fir_reg_subclass1_;
}
SEXP Rsh_Fir_user_promise_inner766954739_1(SEXP CCP, SEXP RHO) {
  // superclass3 = ld superclass
  Rsh_Fir_reg_superclass3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // superclass4 = force? superclass3
  Rsh_Fir_reg_superclass4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclass3_);
  // checkMissing(superclass4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_superclass4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return superclass4
  return Rsh_Fir_reg_superclass4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
