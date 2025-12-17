#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner726426920_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner726426920_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner726426920_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner726426920_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner726426920_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner726426920_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner726426920_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2363178285_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2363178285_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner726426920
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner726426920_, RHO, CCP);
  // st `.copyMethodDefaults` = r
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
SEXP Rsh_Fir_user_function_inner726426920_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner726426920 dynamic dispatch ([generic, method])

  return Rsh_Fir_user_version_inner726426920_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner726426920_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner726426920 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner726426920/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_generic;  // generic
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_formals;  // formals
  SEXP Rsh_Fir_reg_generic1_;  // generic1
  SEXP Rsh_Fir_reg_generic2_;  // generic2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_formals1_;  // formals1
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_mg;  // mg
  SEXP Rsh_Fir_reg_mg1_;  // mg1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_emptyDefault;  // emptyDefault
  SEXP Rsh_Fir_reg_emptyDefault1_;  // emptyDefault1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_logical;  // logical
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_mg2_;  // mg2
  SEXP Rsh_Fir_reg_mg3_;  // mg3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_mg5_;  // mg5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_emptyDef;  // emptyDef
  SEXP Rsh_Fir_reg_emptyDef1_;  // emptyDef1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_fg;  // fg
  SEXP Rsh_Fir_reg_fg1_;  // fg1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_mg6_;  // mg6
  SEXP Rsh_Fir_reg_mg7_;  // mg7
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_mg8_;  // mg8
  SEXP Rsh_Fir_reg_mg9_;  // mg9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_mg11_;  // mg11
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_mg13_;  // mg13
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_mg15_;  // mg15
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_mg18_;  // mg18
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_formals2_;  // formals2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_formals__;  // formals__
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_generic3_;  // generic3
  SEXP Rsh_Fir_reg_generic4_;  // generic4

  // Bind parameters
  Rsh_Fir_reg_generic = PARAMS[0];
  Rsh_Fir_reg_method = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st generic = generic
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_generic, RHO);
  (void)(Rsh_Fir_reg_generic);
  // st method = method
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_method, RHO);
  (void)(Rsh_Fir_reg_method);
  // r = clos inner2363178285
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2363178285_, RHO, CCP);
  // st emptyDefault = r
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // formals = ldf formals
  Rsh_Fir_reg_formals = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L0_:;
  // st mg = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf match
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf match in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L1_:;
  // st i = r13
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // mg8 = ld mg
  Rsh_Fir_reg_mg8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L31() else D13()
  // L31()
  goto L31_;

L2_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L3_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r20 = dyn match(r15, r18, NA_INT, NULL)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

L4_:;
  // l = ld generic
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // formals2 = ldf formals
  Rsh_Fir_reg_formals2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L43() else D17()
  // L43()
  goto L43_;

L5_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r26 = dyn __2(mg15, dx5)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_mg15_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L4(r26)
  // L4(r26)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r26_;
  goto L4_;

L6_:;
  // r24 = `!`(r22)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r25 = dyn __1(i6, r24)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(mg18, r25)
  // L5(mg18, r25)
  Rsh_Fir_reg_mg15_ = Rsh_Fir_reg_mg18_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r25_;
  goto L5_;

L7_:;
  // formals__ = ldf `formals<-`
  Rsh_Fir_reg_formals__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L52() else D21()
  // L52()
  goto L52_;

L8_:;
  // r36 = `!`(r34)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r37 = dyn ___(r33, dx17, r36)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L7(dx16, l7, r37)
  // L7(dx16, l7, r37)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r37_;
  goto L7_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   generic1 = ld generic;
  //   generic2 = force? generic1;
  //   checkMissing(generic2);
  //   return generic2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner726426920_, CCP, RHO);
  // r2 = dyn formals(p)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // st fg = r2
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // formals1 = ldf formals
  Rsh_Fir_reg_formals1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p1 = prom<V +>{
  //   method1 = ld method;
  //   method2 = force? method1;
  //   checkMissing(method2);
  //   return method2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner726426920_1, CCP, RHO);
  // r4 = dyn formals1(p1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // st mg = r4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p2 = prom<V +>{
  //   mg = ld mg;
  //   mg1 = force? mg;
  //   checkMissing(mg1);
  //   return mg1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner726426920_2, CCP, RHO);
  // p3 = prom<V +>{
  //   emptyDefault = ld emptyDefault;
  //   emptyDefault1 = force? emptyDefault;
  //   checkMissing(emptyDefault1);
  //   return emptyDefault1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner726426920_3, CCP, RHO);
  // p4 = prom<V +>{
  //   logical = ldf logical;
  //   r7 = dyn logical(1);
  //   return r7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner726426920_4, CCP, RHO);
  // r9 = dyn vapply(p2, p3, p4)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // st emptyDef = r9
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // mg2 = ld mg
  Rsh_Fir_reg_mg2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 20 [mg2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_mg2_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // mg3 = force? mg2
  Rsh_Fir_reg_mg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mg2_);
  // checkMissing(mg3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_mg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c = `is.object`(mg3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_mg3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c then L16() else L17(mg3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L16()
    goto L16_;
  } else {
  // L17(mg3)
    Rsh_Fir_reg_mg5_ = Rsh_Fir_reg_mg3_;
    goto L17_;
  }

L16_:;
  // dr = tryDispatchBuiltin.1("[", mg3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_mg3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr)
    Rsh_Fir_reg_mg5_ = Rsh_Fir_reg_dr;
    goto L17_;
  }

L17_:;
  // emptyDef = ld emptyDef
  Rsh_Fir_reg_emptyDef = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D7_:;
  // deopt 22 [mg5, emptyDef]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_mg5_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_emptyDef;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // emptyDef1 = force? emptyDef
  Rsh_Fir_reg_emptyDef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_emptyDef);
  // checkMissing(emptyDef1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_emptyDef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // r10 = `!`(emptyDef1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_emptyDef1_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r11 = dyn __(mg5, r10)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_mg5_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L0_;

L20_:;
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard1 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L21_:;
  // r12 = dyn base(<lang names(fg)>, <lang names(mg)>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(r12)
  // L1(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L1_;

L22_:;
  // fg = ld fg
  Rsh_Fir_reg_fg = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L24() else D8()
  // L24()
  goto L24_;

L23_:;
  // r14 = dyn base1(<sym fg>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L2(r14)
  // L2(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L2_;

D8_:;
  // deopt 31 [fg]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_fg;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // fg1 = force? fg
  Rsh_Fir_reg_fg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fg);
  // checkMissing(fg1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_fg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r16 = dyn names(fg1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_fg1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L25() else D9()
  // L25()
  goto L25_;

D9_:;
  // deopt 34 [r16]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L2(r16)
  // L2(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L2_;

L26_:;
  // mg6 = ld mg
  Rsh_Fir_reg_mg6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L28() else D10()
  // L28()
  goto L28_;

L27_:;
  // r17 = dyn base2(<sym mg>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L3(r17)
  // L3(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L3_;

D10_:;
  // deopt 37 [mg6]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_mg6_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L28_:;
  // mg7 = force? mg6
  Rsh_Fir_reg_mg7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mg6_);
  // checkMissing(mg7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_mg7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r19 = dyn names1(mg7)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_mg7_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

D11_:;
  // deopt 40 [r19]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L3(r19)
  // L3(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L3_;

D12_:;
  // deopt 44 [r20]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L1(r20)
  // L1(r20)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r20_;
  goto L1_;

D13_:;
  // deopt 46 [mg8]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_mg8_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L31_:;
  // mg9 = force? mg8
  Rsh_Fir_reg_mg9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mg8_);
  // checkMissing(mg9)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_mg9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(mg9)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_mg9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c1 then L32() else L33(mg9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L32()
    goto L32_;
  } else {
  // L33(mg9)
    Rsh_Fir_reg_mg11_ = Rsh_Fir_reg_mg9_;
    goto L33_;
  }

L32_:;
  // dr2 = tryDispatchBuiltin.1("[", mg9)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_mg9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc1 then L34() else L33(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L34()
    goto L34_;
  } else {
  // L33(dr2)
    Rsh_Fir_reg_mg11_ = Rsh_Fir_reg_dr2_;
    goto L33_;
  }

L33_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L35() else D14()
  // L35()
  goto L35_;

L34_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D14_:;
  // deopt 48 [mg11, i]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_mg11_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L35_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(i1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c2 then L36() else L37(mg11, i1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L36()
    goto L36_;
  } else {
  // L37(mg11, i1)
    Rsh_Fir_reg_mg13_ = Rsh_Fir_reg_mg11_;
    Rsh_Fir_reg_i3_ = Rsh_Fir_reg_i1_;
    goto L37_;
  }

L36_:;
  // dr4 = tryDispatchBuiltin.1("[", i1)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_i1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc2 then L38() else L37(mg11, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L38()
    goto L38_;
  } else {
  // L37(mg11, dr4)
    Rsh_Fir_reg_mg13_ = Rsh_Fir_reg_mg11_;
    Rsh_Fir_reg_i3_ = Rsh_Fir_reg_dr4_;
    goto L37_;
  }

L37_:;
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard3 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L38_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L5(mg11, dx4)
  // L5(mg11, dx4)
  Rsh_Fir_reg_mg15_ = Rsh_Fir_reg_mg11_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L5_;

L39_:;
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L41() else D15()
  // L41()
  goto L41_;

L40_:;
  // r21 = dyn base3(<sym i>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L6(mg13, i3, r21)
  // L6(mg13, i3, r21)
  Rsh_Fir_reg_mg18_ = Rsh_Fir_reg_mg13_;
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i3_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L6_;

D15_:;
  // deopt 52 [mg13, i3, i7]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_mg13_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(52, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L41_:;
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // checkMissing(i8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_i8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r23 = dyn is_na(i8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L42() else D16()
  // L42()
  goto L42_;

D16_:;
  // deopt 55 [mg13, i3, r23]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_mg13_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L6(mg13, i3, r23)
  // L6(mg13, i3, r23)
  Rsh_Fir_reg_mg18_ = Rsh_Fir_reg_mg13_;
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i3_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L6_;

D17_:;
  // deopt 60 [dx3, l, dx3]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_deopt(60, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L43_:;
  // r27 = dyn formals2(dx3, NULL)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals2_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L44() else D18()
  // L44()
  goto L44_;

D18_:;
  // deopt 62 [dx3, l, dx3, r27]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(62, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L44_:;
  // c3 = `is.object`(r27)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c3 then L45() else L46(dx3, l, r27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L45()
    goto L45_;
  } else {
  // L46(dx3, l, r27)
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r27_;
    goto L46_;
  }

L45_:;
  // dr6 = tryDispatchBuiltin.0("[<-", r27, dx3)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args48[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args48);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc3 then L47() else L46(dx3, l, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L47()
    goto L47_;
  } else {
  // L46(dx3, l, dr6)
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r29_ = Rsh_Fir_reg_dr6_;
    goto L46_;
  }

L46_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard4 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L47_:;
  // dx9 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L7(dx3, l, dx9)
  // L7(dx3, l, dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
  goto L7_;

L48_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L50() else D19()
  // L50()
  goto L50_;

L49_:;
  // r32 = dyn base4(<sym i>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(dx7, l2, r29, dx3, r32)
  // L8(dx7, l2, r29, dx3, r32)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r32_;
  goto L8_;

D19_:;
  // deopt 66 [dx7, l2, r29, dx3, i9]
  SEXP Rsh_Fir_array_deopt_stack16[5];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack16[4] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(66, 5, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L50_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // checkMissing(i10)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_i10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r35 = dyn is_na1(i10)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L51() else D20()
  // L51()
  goto L51_;

D20_:;
  // deopt 69 [dx7, l2, r29, dx3, r35]
  SEXP Rsh_Fir_array_deopt_stack17[5];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack17[4] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(69, 5, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L8(dx7, l2, r29, dx3, r35)
  // L8(dx7, l2, r29, dx3, r35)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L8_;

D21_:;
  // deopt 72 [dx10, l4, dx11]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_deopt(72, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L52_:;
  // r38 = dyn formals__(l4, NULL, dx11)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals__, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L53() else D22()
  // L53()
  goto L53_;

D22_:;
  // deopt 74 [dx10, r38]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L53_:;
  // st generic = r38
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // generic3 = ld generic
  Rsh_Fir_reg_generic3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L54() else D23()
  // L54()
  goto L54_;

D23_:;
  // deopt 76 [generic3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_generic3_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L54_:;
  // generic4 = force? generic3
  Rsh_Fir_reg_generic4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_generic3_);
  // checkMissing(generic4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_generic4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return generic4
  return Rsh_Fir_reg_generic4_;
}
SEXP Rsh_Fir_user_promise_inner726426920_(SEXP CCP, SEXP RHO) {
  // generic1 = ld generic
  Rsh_Fir_reg_generic1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // generic2 = force? generic1
  Rsh_Fir_reg_generic2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_generic1_);
  // checkMissing(generic2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_generic2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return generic2
  return Rsh_Fir_reg_generic2_;
}
SEXP Rsh_Fir_user_promise_inner726426920_1(SEXP CCP, SEXP RHO) {
  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return method2
  return Rsh_Fir_reg_method2_;
}
SEXP Rsh_Fir_user_promise_inner726426920_2(SEXP CCP, SEXP RHO) {
  // mg = ld mg
  Rsh_Fir_reg_mg = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // mg1 = force? mg
  Rsh_Fir_reg_mg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mg);
  // checkMissing(mg1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_mg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return mg1
  return Rsh_Fir_reg_mg1_;
}
SEXP Rsh_Fir_user_promise_inner726426920_3(SEXP CCP, SEXP RHO) {
  // emptyDefault = ld emptyDefault
  Rsh_Fir_reg_emptyDefault = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // emptyDefault1 = force? emptyDefault
  Rsh_Fir_reg_emptyDefault1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_emptyDefault);
  // checkMissing(emptyDefault1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_emptyDefault1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return emptyDefault1
  return Rsh_Fir_reg_emptyDefault1_;
}
SEXP Rsh_Fir_user_promise_inner726426920_4(SEXP CCP, SEXP RHO) {
  // logical = ldf logical
  Rsh_Fir_reg_logical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // r7 = dyn logical(1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_logical, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_function_inner2363178285_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2363178285 dynamic dispatch ([value])

  return Rsh_Fir_user_version_inner2363178285_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2363178285_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2363178285 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2363178285/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym3_1;  // sym3
  SEXP Rsh_Fir_reg_base3_1;  // base3
  SEXP Rsh_Fir_reg_guard3_1;  // guard3
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c29_;  // c29

  // Bind parameters
  Rsh_Fir_reg_value = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf missing
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c then L1(c) else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L1(c)
    Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c1;
    goto L1_;
  } else {
  // L8()
    goto L8_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c1
  return Rsh_Fir_reg_c1_1;

L2_:;
  // c7 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c7 then L12() else L3(c5, c7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L12()
    goto L12_;
  } else {
  // L3(c5, c7)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c7_;
    goto L3_;
  }

L3_:;
  // c28 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // c29 = `||`(c10, c28)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L1(c29)
  // L1(c29)
  Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c29_;
  goto L1_;

L4_:;
  // c24 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // c25 = `&&`(c17, c24)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L3(c16, c25)
  // L3(c16, c25)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c25_;
  goto L3_;

L5_:;
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r10 = dyn nzchar(r8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L6_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r2 = dyn missing(<sym value>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L0_;

L7_:;
  // r = dyn base(<sym value>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2;
  goto L0_;

L8_:;
  // sym1 = ldf `is.name`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base1 = ldf `is.name` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r3 = dyn base1(<sym value>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L2(c, r3)
  // L2(c, r3)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_;
  goto L2_;

D0_:;
  // deopt 4 [c, value1]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L11_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c6 = `is.symbol`(value2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(390, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L2(c, c6)
  // L2(c, c6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_c6_;
  goto L2_;

L12_:;
  // sym2 = ldf nzchar
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base2 = ldf nzchar in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard2 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // sym3 = ldf `as.character`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf `as.character` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard3 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L14_:;
  // r5 = dyn base2(<lang as.character(value)>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L4(c5, c7, r5)
  // L4(c5, c7, r5)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L4_;

L15_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

L16_:;
  // r7 = dyn base3(<sym value>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L5(c5, c7, r7)
  // L5(c5, c7, r7)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_1;
  goto L5_;

D1_:;
  // deopt 11 [c5, c7, value3]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(11, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L17_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r9 = dyn as_character(value4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D2_:;
  // deopt 14 [c5, c7, r9]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(14, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L5(c5, c7, r9)
  // L5(c5, c7, r9)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_1;
  goto L5_;

D3_:;
  // deopt 16 [c22, c23, r10]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(16, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L4(c22, c23, r10)
  // L4(c22, c23, r10)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r10_1;
  goto L4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
