#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3742933374_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3742933374_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3742933374_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3742933374_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3742933374_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3742933374_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3742933374_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner3742933374
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3742933374_, RHO, CCP);
  // st `.makeMlist1` = r
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
SEXP Rsh_Fir_user_function_inner3742933374_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3742933374 dynamic dispatch ([arg, objects, j])

  return Rsh_Fir_user_version_inner3742933374_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3742933374_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3742933374 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3742933374/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_arg;  // arg
  SEXP Rsh_Fir_reg_objects;  // objects
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j_isMissing;  // j_isMissing
  SEXP Rsh_Fir_reg_j_orDefault;  // j_orDefault
  SEXP Rsh_Fir_reg__MlistDefunct;  // _MlistDefunct
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_objects1_;  // objects1
  SEXP Rsh_Fir_reg_objects2_;  // objects2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_objects3_;  // objects3
  SEXP Rsh_Fir_reg_objects4_;  // objects4
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_objects5_;  // objects5
  SEXP Rsh_Fir_reg_objects6_;  // objects6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_objects8_;  // objects8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_is_primitive;  // is_primitive
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sig;  // sig
  SEXP Rsh_Fir_reg_sig1_;  // sig1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sig2_;  // sig2
  SEXP Rsh_Fir_reg_sig3_;  // sig3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_sig5_;  // sig5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_mnames;  // mnames
  SEXP Rsh_Fir_reg_mnames1_;  // mnames1
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_arg1_;  // arg1
  SEXP Rsh_Fir_reg_arg2_;  // arg2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_objects9_;  // objects9
  SEXP Rsh_Fir_reg_objects10_;  // objects10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_objects11_;  // objects11
  SEXP Rsh_Fir_reg_objects12_;  // objects12
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r29_;  // r29

  // Bind parameters
  Rsh_Fir_reg_arg = PARAMS[0];
  Rsh_Fir_reg_objects = PARAMS[1];
  Rsh_Fir_reg_j = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st arg = arg
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_arg, RHO);
  (void)(Rsh_Fir_reg_arg);
  // st objects = objects
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_objects, RHO);
  (void)(Rsh_Fir_reg_objects);
  // j_isMissing = missing.0(j)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_j;
  Rsh_Fir_reg_j_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if j_isMissing then L0(1.0) else L0(j)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_j_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_j_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(j)
    Rsh_Fir_reg_j_orDefault = Rsh_Fir_reg_j;
    goto L0_;
  }

L0_:;
  // st j = j_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_j_orDefault, RHO);
  (void)(Rsh_Fir_reg_j_orDefault);
  // _MlistDefunct = ldf `.MlistDefunct`
  Rsh_Fir_reg__MlistDefunct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L1_:;
  // s = toForSeq(r7)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 6);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c then L18() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L10()
    goto L10_;
  }

L3_:;
  // st what = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // is_primitive = ldf `is.primitive`
  Rsh_Fir_reg_is_primitive = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

L4_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r13 = dyn __1(<sym what>, <sym defined>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // st sig = r13
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // goto L5(i8)
  // L5(i8)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  goto L5_;

L5_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L6_:;
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

L7_:;
  // sig2 = ld sig
  Rsh_Fir_reg_sig2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L35() else D12()
  // L35()
  goto L35_;

L8_:;
  // l1 = ld mnames
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // c5 = `is.object`(l1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c5 then L40() else L41(i19, r18, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L40()
    goto L40_;
  } else {
  // L41(i19, r18, l1)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r18_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L41_;
  }

L9_:;
  // st mnames = dx4
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // goto L2(i26)
  // L2(i26)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i26_;
  goto L2_;

L10_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // objects5 = ld objects
  Rsh_Fir_reg_objects5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // r = dyn _MlistDefunct(".makeMlist1()")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__MlistDefunct, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   objects1 = ld objects;
  //   objects2 = force? objects1;
  //   checkMissing(objects2);
  //   length = ldf length in base;
  //   r3 = dyn length(objects2);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<sym objects>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3742933374_, CCP, RHO);
  // r5 = dyn character(p)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // st mnames = r5
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf seq_along
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf seq_along in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // objects3 = ld objects
  Rsh_Fir_reg_objects3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

L16_:;
  // r6 = dyn base1(<sym objects>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L1_;

D4_:;
  // deopt 10 [objects3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_objects3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // objects4 = force? objects3
  Rsh_Fir_reg_objects4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objects3_);
  // checkMissing(objects4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_objects4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r8 = seq_along(objects4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_objects4_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L1_;

L18_:;
  // mnames = ld mnames
  Rsh_Fir_reg_mnames = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L44() else D15()
  // L44()
  goto L44_;

D5_:;
  // deopt 13 [i2, objects5]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_objects5_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // objects6 = force? objects5
  Rsh_Fir_reg_objects6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objects5_);
  // checkMissing(objects6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_objects6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(objects6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_objects6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L21(i2, objects6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L21(i2, objects6)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_objects8_ = Rsh_Fir_reg_objects6_;
    goto L21_;
  }

L20_:;
  // dr = tryDispatchBuiltin.1("[[", objects6)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_objects6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc then L22() else L21(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L22()
    goto L22_;
  } else {
  // L21(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_objects8_ = Rsh_Fir_reg_dr;
    goto L21_;
  }

L21_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L22_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L3(i2, dx)
  // L3(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D6_:;
  // deopt 15 [i6, objects8, i9]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_objects8_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(15, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r9 = dyn __(objects8, i10)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_objects8_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(i6, r9)
  // L3(i6, r9)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L3_;

D7_:;
  // deopt 20 [i8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // p1 = prom<V +>{
  //   what = ld what;
  //   what1 = force? what;
  //   checkMissing(what1);
  //   return what1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3742933374_1, CCP, RHO);
  // r11 = dyn is_primitive(p1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_primitive, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

D8_:;
  // deopt 22 [i8, r11]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // c2 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c2 then L26() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L26()
    goto L26_;
  } else {
  // L4()
    goto L4_;
  }

L26_:;
  // st sig = "ANY"
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 23), RHO);
  (void)(Rsh_const(CCP, 23));
  // goto L5(i8)
  // L5(i8)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  goto L5_;

L28_:;
  // sig = ld sig
  Rsh_Fir_reg_sig = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

L29_:;
  // r14 = dyn base2(<sym sig>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(i13, r14)
  // L6(i13, r14)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L6_;

D9_:;
  // deopt 31 [i13, sig]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_sig;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // sig1 = force? sig
  Rsh_Fir_reg_sig1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig);
  // checkMissing(sig1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sig1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r16 = dyn length1(sig1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sig1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

D10_:;
  // deopt 34 [i13, r16]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L6(i13, r16)
  // L6(i13, r16)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L6_;

D11_:;
  // deopt 34 [i16, r15, j1]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_j1_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L32_:;
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r17 = `<`(r15, j2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_j2_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c3 then L33() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L33()
    goto L33_;
  } else {
  // L7()
    goto L7_;
  }

L33_:;
  // goto L8(i16, "ANY")
  // L8(i16, "ANY")
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r18_ = Rsh_const(CCP, 23);
  goto L8_;

D12_:;
  // deopt 39 [i16, sig2]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_sig2_;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L35_:;
  // sig3 = force? sig2
  Rsh_Fir_reg_sig3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig2_);
  // checkMissing(sig3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sig3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(sig3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sig3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c4 then L36() else L37(i16, sig3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L36()
    goto L36_;
  } else {
  // L37(i16, sig3)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_sig5_ = Rsh_Fir_reg_sig3_;
    goto L37_;
  }

L36_:;
  // dr2 = tryDispatchBuiltin.1("[[", sig3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_sig3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc1 then L38() else L37(i16, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L38()
    goto L38_;
  } else {
  // L37(i16, dr2)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_sig5_ = Rsh_Fir_reg_dr2_;
    goto L37_;
  }

L37_:;
  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L39() else D13()
  // L39()
  goto L39_;

L38_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L8(i16, dx2)
  // L8(i16, dx2)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_dx2_;
  goto L8_;

D13_:;
  // deopt 41 [i21, sig5, j3]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_sig5_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_j3_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L39_:;
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r19 = dyn __2(sig5, j4)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sig5_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(i21, r19)
  // L8(i21, r19)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L8_;

L40_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l1, r18)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args40);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc2 then L42() else L41(i19, r18, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L42()
    goto L42_;
  } else {
  // L41(i19, r18, dr4)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r18_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr4_;
    goto L41_;
  }

L41_:;
  // i27 = ld i
  Rsh_Fir_reg_i27_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L43() else D14()
  // L43()
  goto L43_;

L42_:;
  // dx3 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L9(i19, dx3)
  // L9(i19, dx3)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L9_;

D14_:;
  // deopt 45 [i24, r21, l3, r18, i27]
  SEXP Rsh_Fir_array_deopt_stack12[5];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack12[4] = Rsh_Fir_reg_i27_;
  Rsh_Fir_deopt(45, 5, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L43_:;
  // i28 = force? i27
  Rsh_Fir_reg_i28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i27_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r24 = dyn ____(l3, r18, i28)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_i28_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(i24, r24)
  // L9(i24, r24)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r24_;
  goto L9_;

D15_:;
  // deopt 52 [mnames]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_mnames;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L44_:;
  // mnames1 = force? mnames
  Rsh_Fir_reg_mnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mnames);
  // checkMissing(mnames1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_mnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // l4 = ld objects
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L45() else D16()
  // L45()
  goto L45_;

D16_:;
  // deopt 55 [mnames1, l4, mnames1]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_mnames1_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_mnames1_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L45_:;
  // r25 = dyn names__(l4, NULL, mnames1)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_mnames1_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L46() else D17()
  // L46()
  goto L46_;

D17_:;
  // deopt 57 [mnames1, r25]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_mnames1_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L46_:;
  // st objects = r25
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // new = ldf new
  Rsh_Fir_reg_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L47() else D18()
  // L47()
  goto L47_;

D18_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p2 = prom<V +>{
  //   arg1 = ld arg;
  //   arg2 = force? arg1;
  //   checkMissing(arg2);
  //   return arg2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3742933374_2, CCP, RHO);
  // p3 = prom<V +>{
  //   objects9 = ld objects;
  //   objects10 = force? objects9;
  //   checkMissing(objects10);
  //   return objects10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3742933374_3, CCP, RHO);
  // p4 = prom<V +>{
  //   objects11 = ld objects;
  //   objects12 = force? objects11;
  //   checkMissing(objects12);
  //   return objects12;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3742933374_4, CCP, RHO);
  // r29 = dyn new[, argument, methods, allMethods]("MethodsList", p2, p3, p4)
  SEXP Rsh_Fir_array_args49[4];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args49[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new, 4, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L48() else D19()
  // L48()
  goto L48_;

D19_:;
  // deopt 68 [r29]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L48_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_inner3742933374_(SEXP CCP, SEXP RHO) {
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
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
  // objects1 = ld objects
  Rsh_Fir_reg_objects1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // objects2 = force? objects1
  Rsh_Fir_reg_objects2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objects1_);
  // checkMissing(objects2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_objects2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r3 = dyn length(objects2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_objects2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(<sym objects>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3742933374_1(SEXP CCP, SEXP RHO) {
  // what = ld what
  Rsh_Fir_reg_what = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // what1 = force? what
  Rsh_Fir_reg_what1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what);
  // checkMissing(what1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_what1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return what1
  return Rsh_Fir_reg_what1_;
}
SEXP Rsh_Fir_user_promise_inner3742933374_2(SEXP CCP, SEXP RHO) {
  // arg1 = ld arg
  Rsh_Fir_reg_arg1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // arg2 = force? arg1
  Rsh_Fir_reg_arg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arg1_);
  // checkMissing(arg2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_arg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return arg2
  return Rsh_Fir_reg_arg2_;
}
SEXP Rsh_Fir_user_promise_inner3742933374_3(SEXP CCP, SEXP RHO) {
  // objects9 = ld objects
  Rsh_Fir_reg_objects9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // objects10 = force? objects9
  Rsh_Fir_reg_objects10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objects9_);
  // checkMissing(objects10)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_objects10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return objects10
  return Rsh_Fir_reg_objects10_;
}
SEXP Rsh_Fir_user_promise_inner3742933374_4(SEXP CCP, SEXP RHO) {
  // objects11 = ld objects
  Rsh_Fir_reg_objects11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // objects12 = force? objects11
  Rsh_Fir_reg_objects12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objects11_);
  // checkMissing(objects12)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_objects12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return objects12
  return Rsh_Fir_reg_objects12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
