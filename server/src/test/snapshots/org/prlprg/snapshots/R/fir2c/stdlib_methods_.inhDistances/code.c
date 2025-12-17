#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner418102221_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner418102221_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner418102221_(SEXP CCP, SEXP RHO);
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
  // r = clos inner418102221
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner418102221_, RHO, CCP);
  // st `.inhDistances` = r
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
SEXP Rsh_Fir_user_function_inner418102221_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner418102221 dynamic dispatch ([classDef])

  return Rsh_Fir_user_version_inner418102221_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner418102221_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner418102221 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner418102221/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_classDef;  // classDef
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_contains;  // contains
  SEXP Rsh_Fir_reg_contains1_;  // contains1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_dist;  // dist
  SEXP Rsh_Fir_reg_dist1_;  // dist1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_contains2_;  // contains2
  SEXP Rsh_Fir_reg_contains3_;  // contains3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_contains5_;  // contains5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_dist2_;  // dist2
  SEXP Rsh_Fir_reg_dist3_;  // dist3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_allNames;  // allNames
  SEXP Rsh_Fir_reg_allNames1_;  // allNames1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_dist4_;  // dist4
  SEXP Rsh_Fir_reg_dist5_;  // dist5

  // Bind parameters
  Rsh_Fir_reg_classDef = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st classDef = classDef
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_classDef, RHO);
  (void)(Rsh_Fir_reg_classDef);
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r = dyn __(<sym classDef>, <sym contains>)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // st contains = r
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L0_:;
  // st dist = r7
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym2 = ldf seq_along
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf seq_along in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L1_:;
  // s = toForSeq(r10)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 7);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if c then L15() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // st ci = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r13 = dyn __2(<sym ci>, <sym distance>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // l1 = ld dist
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c2 = `is.object`(l1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c2 then L21() else L22(i8, r13, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L21()
    goto L21_;
  } else {
  // L22(i8, r13, l1)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L22_;
  }

L4_:;
  // st dist = dx3
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L2(i14)
  // L2(i14)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i14_;
  goto L2_;

L5_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // contains2 = ld contains
  Rsh_Fir_reg_contains2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

L6_:;
  // st dist = r20
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard4 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L7_:;
  // l4 = ld dist
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   sym = ldf names;
  //   base = ldf names in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   contains = ld contains;
  //   contains1 = force? contains;
  //   checkMissing(contains1);
  //   names = ldf names in base;
  //   r3 = dyn names(contains1);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<sym contains>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner418102221_, CCP, RHO);
  // r5 = dyn unique(p)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 6 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // st allNames = r5
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf rep
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf rep in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r8 = dyn rep(2.0, <lang length(allNames)>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L11_:;
  // r6 = dyn base1(2.0, <lang length(allNames)>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;

L12_:;
  // dist = ld dist
  Rsh_Fir_reg_dist = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L13_:;
  // r9 = dyn base2(<sym dist>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L1_;

D2_:;
  // deopt 13 [dist]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_dist;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // dist1 = force? dist
  Rsh_Fir_reg_dist1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dist);
  // checkMissing(dist1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dist1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r11 = seq_along(dist1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dist1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L1(r11)
  // L1(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L1_;

L15_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

D3_:;
  // deopt 16 [i2, contains2]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_contains2_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // contains3 = force? contains2
  Rsh_Fir_reg_contains3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contains2_);
  // checkMissing(contains3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_contains3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(contains3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_contains3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c1 then L17() else L18(i2, contains3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L18(i2, contains3)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_contains5_ = Rsh_Fir_reg_contains3_;
    goto L18_;
  }

L17_:;
  // dr = tryDispatchBuiltin.1("[[", contains3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_contains3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L19() else L18(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L19()
    goto L19_;
  } else {
  // L18(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_contains5_ = Rsh_Fir_reg_dr;
    goto L18_;
  }

L18_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

L19_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L3(i2, dx)
  // L3(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D4_:;
  // deopt 18 [i6, contains5, i9]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_contains5_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r12 = dyn __1(contains5, i10)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_contains5_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(i6, r12)
  // L3(i6, r12)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L3_;

L21_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l1, r13)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args28);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc1 then L23() else L22(i8, r13, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L23()
    goto L23_;
  } else {
  // L22(i8, r13, dr2)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr2_;
    goto L22_;
  }

L22_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L23_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L4(i8, dx2)
  // L4(i8, dx2)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D5_:;
  // deopt 25 [i12, r15, l3, r13, i15]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(25, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r18 = dyn ____(l3, r13, i16)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(i12, r18)
  // L4(i12, r18)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r18_;
  goto L4_;

L25_:;
  // dist2 = ld dist
  Rsh_Fir_reg_dist2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

L26_:;
  // r19 = dyn base3(0.0, <sym dist>, NA_LGL)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L6_;

D6_:;
  // deopt 35 [dist2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_dist2_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // dist3 = force? dist2
  Rsh_Fir_reg_dist3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dist2_);
  // checkMissing(dist3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dist3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r21 = dyn c3(0.0, dist3, NA_LGL)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_dist3_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

D7_:;
  // deopt 39 [r21]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L6(r21)
  // L6(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L6_;

L29_:;
  // __3 = ldf `@` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r24 = dyn __3(<sym classDef>, <sym className>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // allNames = ld allNames
  Rsh_Fir_reg_allNames = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L30_:;
  // r22 = dyn base4(<lang `@`(classDef, className)>, <sym allNames>, "ANY")
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L7_;

D8_:;
  // deopt 45 [allNames]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_allNames;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L31_:;
  // allNames1 = force? allNames
  Rsh_Fir_reg_allNames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allNames);
  // checkMissing(allNames1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_allNames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r25 = dyn c4(r24, allNames1, "ANY")
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_allNames1_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D9_:;
  // deopt 49 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L7(r25)
  // L7(r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L7_;

D10_:;
  // deopt 51 [r23, l4, r23]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(51, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L33_:;
  // r26 = dyn names__(l4, NULL, r23)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L34() else D11()
  // L34()
  goto L34_;

D11_:;
  // deopt 53 [r23, r26]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L34_:;
  // st dist = r26
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // dist4 = ld dist
  Rsh_Fir_reg_dist4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L35() else D12()
  // L35()
  goto L35_;

D12_:;
  // deopt 55 [dist4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dist4_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L35_:;
  // dist5 = force? dist4
  Rsh_Fir_reg_dist5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dist4_);
  // checkMissing(dist5)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dist5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dist5
  return Rsh_Fir_reg_dist5_;
}
SEXP Rsh_Fir_user_promise_inner418102221_(SEXP CCP, SEXP RHO) {
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // contains = ld contains
  Rsh_Fir_reg_contains = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // contains1 = force? contains
  Rsh_Fir_reg_contains1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contains);
  // checkMissing(contains1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_contains1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r3 = dyn names(contains1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_contains1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(<sym contains>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
