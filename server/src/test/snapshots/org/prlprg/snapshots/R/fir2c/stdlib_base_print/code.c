#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_ts;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_attenu;
  SEXP Rsh_Fir_reg_attenu1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_attenu3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_esoph;
  SEXP Rsh_Fir_reg_esoph1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_esoph3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_esoph4_;
  SEXP Rsh_Fir_reg_esoph5_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_esoph7_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_set_seed;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_round;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_round1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_table;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_print1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_table2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_T;
  SEXP Rsh_Fir_reg_T1_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_T4_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_round2_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_print2_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_print_table;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_table3_;
  SEXP Rsh_Fir_reg_r51_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st print = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf require
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf require in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // ts = ldf ts
  Rsh_Fir_reg_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L8_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r1 = dyn base(<sym stats>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   stats = ld stats;
  //   stats1 = force? stats;
  //   checkMissing(stats1);
  //   return stats1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

L12_:;
  // p1 = prom<V +>{
  //   r5 = `:`(1.0, 20.0);
  //   return r5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r7 = dyn ts(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 11 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0()
  // L0()
  goto L0_;

L13_:;
  // s = toForSeq(<int 1, 2, 3>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args7);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 7);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if c then L14() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args10);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L14_:;
  // attenu = ld attenu
  Rsh_Fir_reg_attenu = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D4_:;
  // deopt 15 [i2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 21 [attenu]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_attenu;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // p2 = prom<V +>{
  //   i5 = ld i;
  //   i6 = force? i5;
  //   checkMissing(i6);
  //   r8 = `:`(1.0, i6);
  //   return r8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r10 = dyn print(p2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L17_:;
  // attenu1 = force? attenu
  Rsh_Fir_reg_attenu1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_attenu);
  // checkMissing(attenu1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_attenu1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(attenu1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_attenu1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args15);
  // if c1 then L19() else L20(attenu1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L20(attenu1)
    Rsh_Fir_reg_attenu3_ = Rsh_Fir_reg_attenu1_;
    goto L20_;
  }

D5_:;
  // deopt 17 [i2, r10]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1(i2)
  // L1(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L1_;

L18_:;
  // esoph = ld esoph
  Rsh_Fir_reg_esoph = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

L19_:;
  // dr = tryDispatchBuiltin.1("$", attenu1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_attenu1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr)
    Rsh_Fir_reg_attenu3_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // r11 = `$`(attenu3, <sym station>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_attenu3_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args18);
  // goto L18()
  // L18()
  goto L18_;

D7_:;
  // deopt 24 [esoph]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_esoph;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L18()
  // L18()
  goto L18_;

L22_:;
  // esoph1 = force? esoph
  Rsh_Fir_reg_esoph1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_esoph);
  // checkMissing(esoph1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_esoph1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(esoph1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_esoph1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args21);
  // if c2 then L24() else L25(esoph1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L24()
    goto L24_;
  } else {
  // L25(esoph1)
    Rsh_Fir_reg_esoph3_ = Rsh_Fir_reg_esoph1_;
    goto L25_;
  }

L23_:;
  // c3 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args22);
  // if c3 then L27() else L28(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L27()
    goto L27_;
  } else {
  // L28(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L28_;
  }

L24_:;
  // dr2 = tryDispatchBuiltin.1("$", esoph1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_esoph1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc1 then L26() else L25(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L26()
    goto L26_;
  } else {
  // L25(dr2)
    Rsh_Fir_reg_esoph3_ = Rsh_Fir_reg_dr2_;
    goto L25_;
  }

L25_:;
  // r12 = `$`(esoph3, <sym agegp>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_esoph3_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args25);
  // goto L23(r12)
  // L23(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L23_;

L3_:;
  // esoph4 = ld esoph
  Rsh_Fir_reg_esoph4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L30() else D8()
  // L30()
  goto L30_;

L26_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L23(dx2)
  // L23(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L23_;

L27_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc2 then L29() else L28(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L28_;
  }

L28_:;
  // r13 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args29);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r14 = dyn __(dx5, r13)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D8_:;
  // deopt 32 [esoph4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_esoph4_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L3()
  // L3()
  goto L3_;

L30_:;
  // esoph5 = force? esoph4
  Rsh_Fir_reg_esoph5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_esoph4_);
  // checkMissing(esoph5)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_esoph5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(esoph5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_esoph5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args33);
  // if c4 then L32() else L33(esoph5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L32()
    goto L32_;
  } else {
  // L33(esoph5)
    Rsh_Fir_reg_esoph7_ = Rsh_Fir_reg_esoph5_;
    goto L33_;
  }

L31_:;
  // c5 = `is.object`(dx9)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args34);
  // if c5 then L35() else L36(dx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L35()
    goto L35_;
  } else {
  // L36(dx9)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    goto L36_;
  }

L32_:;
  // dr6 = tryDispatchBuiltin.1("$", esoph5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_esoph5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc3 then L34() else L33(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L34()
    goto L34_;
  } else {
  // L33(dr6)
    Rsh_Fir_reg_esoph7_ = Rsh_Fir_reg_dr6_;
    goto L33_;
  }

L33_:;
  // r15 = `$`(esoph7, <sym alcgp>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_esoph7_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args37);
  // goto L31(r15)
  // L31(r15)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r15_;
  goto L31_;

L4_:;
  // set_seed = ldf `set.seed`
  Rsh_Fir_reg_set_seed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

L34_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L31(dx8)
  // L31(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L31_;

L35_:;
  // dr8 = tryDispatchBuiltin.1("[", dx9)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc4 then L37() else L36(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L37()
    goto L37_;
  } else {
  // L36(dr8)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dr8_;
    goto L36_;
  }

L36_:;
  // r16 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args41);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r17 = dyn __1(dx11, r16)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4()
  // L4()
  goto L4_;

D9_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L4()
  // L4()
  goto L4_;

L38_:;
  // r18 = dyn set_seed(521.0)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_set_seed, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

D10_:;
  // deopt 43 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L39_:;
  // sym1 = ldf round
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf round in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard1 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L5_:;
  // st t1 = r20
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym2 = ldf round
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base2 = ldf round in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard2 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L40_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r21 = dyn round(<lang abs(rt(200.0, df=1.8))>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r21)
  // L5(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L5_;

L41_:;
  // r19 = dyn base1(<lang abs(rt(200.0, df=1.8))>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r19)
  // L5(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L5_;

L6_:;
  // st t2 = r23
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // table = ldf table
  Rsh_Fir_reg_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L44() else D11()
  // L44()
  goto L44_;

L42_:;
  // round1 = ldf round in base
  Rsh_Fir_reg_round1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r24 = dyn round1(<lang abs(rt(200.0, df=1.4))>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round1_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r24)
  // L6(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L6_;

L43_:;
  // r22 = dyn base2(<lang abs(rt(200.0, df=1.4))>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r22)
  // L6(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L6_;

D11_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p3 = prom<V +>{
  //   t1 = ld t1;
  //   t2 = force? t1;
  //   checkMissing(t2);
  //   return t2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   t3 = ld t2;
  //   t4 = force? t3;
  //   checkMissing(t4);
  //   return t4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r27 = dyn table(p3, p4)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L45() else D12()
  // L45()
  goto L45_;

D12_:;
  // deopt 56 [r27]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L45_:;
  // print1 = ldf print
  Rsh_Fir_reg_print1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L46() else D13()
  // L46()
  goto L46_;

D13_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p7 = prom<V +>{
  //   table1 = ldf table;
  //   p5 = prom<V +>{
  //     t5 = ld t1;
  //     t6 = force? t5;
  //     checkMissing(t6);
  //     return t6;
  //   };
  //   p6 = prom<V +>{
  //     t7 = ld t2;
  //     t8 = force? t7;
  //     checkMissing(t8);
  //     return t8;
  //   };
  //   r30 = dyn table1(p5, p6);
  //   return r30;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r32 = dyn print1[, `zero.print`](p7, ".")
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print1_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L47() else D14()
  // L47()
  goto L47_;

D14_:;
  // deopt 62 [r32]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L47_:;
  // table2 = ldf table
  Rsh_Fir_reg_table2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L48() else D15()
  // L48()
  goto L48_;

D15_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p8 = prom<V +>{
  //   t9 = ld t2;
  //   t10 = force? t9;
  //   checkMissing(t10);
  //   return t10;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   t11 = ld t1;
  //   t12 = force? t11;
  //   checkMissing(t12);
  //   return t12;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r35 = dyn table2(p8, p9)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table2_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L49() else D16()
  // L49()
  goto L49_;

D16_:;
  // deopt 67 [r35]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // st T = r35
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // T = ld T
  Rsh_Fir_reg_T = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L50() else D17()
  // L50()
  goto L50_;

D17_:;
  // deopt 69 [T]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_T;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // T1 = force? T
  Rsh_Fir_reg_T1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_T);
  // checkMissing(T1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_T1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // sym3 = ldf round
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf round in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard3 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L7_:;
  // r42 = `/`(r40, 4.0)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args63);
  // r43 = `+`(r39, r42)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args64);
  // r44 = `*`(T4, r43)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_T4_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args65);
  // st T = r44
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // print2 = ldf print
  Rsh_Fir_reg_print2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L53() else D18()
  // L53()
  goto L53_;

L51_:;
  // round2 = ldf round in base
  Rsh_Fir_reg_round2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r41 = dyn round2(<lang rlnorm(length(T))>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round2_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7(T1, 1.0, r41)
  // L7(T1, 1.0, r41)
  Rsh_Fir_reg_T4_ = Rsh_Fir_reg_T1_;
  Rsh_Fir_reg_r39_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L7_;

L52_:;
  // r38 = dyn base3(<lang rlnorm(length(T))>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L7(T1, 1.0, r38)
  // L7(T1, 1.0, r38)
  Rsh_Fir_reg_T4_ = Rsh_Fir_reg_T1_;
  Rsh_Fir_reg_r39_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
  goto L7_;

D18_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p10 = prom<V +>{
  //   T5 = ld T;
  //   T6 = force? T5;
  //   checkMissing(T6);
  //   return T6;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r46 = dyn print2[, `zero.print`](p10, ".")
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print2_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L54() else D19()
  // L54()
  goto L54_;

D19_:;
  // deopt 84 [r46]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // print_table = ldf `print.table`
  Rsh_Fir_reg_print_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L55() else D20()
  // L55()
  goto L55_;

D20_:;
  // deopt 86 []
  Rsh_Fir_deopt(86, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p11 = prom<V +>{
  //   T7 = ld T;
  //   T8 = force? T7;
  //   checkMissing(T8);
  //   c6 = `is.object`(T8);
  //   if c6 then L1() else L2();
  // L0(dx15):
  //   r48 = `*`(dx15, 1.0E9);
  //   return r48;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", T8);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2();
  // L2():
  //   __2 = ldf `[` in base;
  //   r47 = dyn __2(T8, <missing>, <int 2, 3, 4, 5, 6, 7, 8>);
  //   goto L0(r47);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r50 = dyn print_table[, digits, `zero.print`](p11, 3.0, ".")
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print_table, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L56() else D21()
  // L56()
  goto L56_;

D21_:;
  // deopt 92 [r50]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L56_:;
  // table3 = ldf table
  Rsh_Fir_reg_table3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L57() else D22()
  // L57()
  goto L57_;

D22_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // r51 = dyn table3(1.0, NA_LGL)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table3_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L58() else D23()
  // L58()
  goto L58_;

D23_:;
  // deopt 97 [r51]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L58_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r51
  return Rsh_Fir_reg_r51_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stats;
  SEXP Rsh_Fir_reg_stats1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stats = ld stats
  Rsh_Fir_reg_stats = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // stats1 = force? stats
  Rsh_Fir_reg_stats1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stats);
  // checkMissing(stats1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_stats1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return stats1
  return Rsh_Fir_reg_stats1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r5 = `:`(1.0, 20.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args4);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // r8 = `:`(1.0, i6)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args12);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t1_;
  SEXP Rsh_Fir_reg_t2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // t1 = ld t1
  Rsh_Fir_reg_t1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // t2 = force? t1
  Rsh_Fir_reg_t2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t1_);
  // checkMissing(t2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_t2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return t2
  return Rsh_Fir_reg_t2_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t3_;
  SEXP Rsh_Fir_reg_t4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // t3 = ld t2
  Rsh_Fir_reg_t3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // t4 = force? t3
  Rsh_Fir_reg_t4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t3_);
  // checkMissing(t4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_t4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return t4
  return Rsh_Fir_reg_t4_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_table1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // table1 = ldf table
  Rsh_Fir_reg_table1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // p5 = prom<V +>{
  //   t5 = ld t1;
  //   t6 = force? t5;
  //   checkMissing(t6);
  //   return t6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   t7 = ld t2;
  //   t8 = force? t7;
  //   checkMissing(t8);
  //   return t8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r30 = dyn table1(p5, p6)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table1_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t5_;
  SEXP Rsh_Fir_reg_t6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // t5 = ld t1
  Rsh_Fir_reg_t5_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // t6 = force? t5
  Rsh_Fir_reg_t6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t5_);
  // checkMissing(t6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_t6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return t6
  return Rsh_Fir_reg_t6_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t7_;
  SEXP Rsh_Fir_reg_t8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // t7 = ld t2
  Rsh_Fir_reg_t7_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // t8 = force? t7
  Rsh_Fir_reg_t8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t7_);
  // checkMissing(t8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_t8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return t8
  return Rsh_Fir_reg_t8_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t9_;
  SEXP Rsh_Fir_reg_t10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // t9 = ld t2
  Rsh_Fir_reg_t9_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // t10 = force? t9
  Rsh_Fir_reg_t10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t9_);
  // checkMissing(t10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_t10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return t10
  return Rsh_Fir_reg_t10_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t11_;
  SEXP Rsh_Fir_reg_t12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // t11 = ld t1
  Rsh_Fir_reg_t11_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // t12 = force? t11
  Rsh_Fir_reg_t12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t11_);
  // checkMissing(t12)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_t12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return t12
  return Rsh_Fir_reg_t12_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_T5_;
  SEXP Rsh_Fir_reg_T6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // T5 = ld T
  Rsh_Fir_reg_T5_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // T6 = force? T5
  Rsh_Fir_reg_T6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_T5_);
  // checkMissing(T6)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_T6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return T6
  return Rsh_Fir_reg_T6_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_T7_;
  SEXP Rsh_Fir_reg_T8_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // T7 = ld T
  Rsh_Fir_reg_T7_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // T8 = force? T7
  Rsh_Fir_reg_T8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_T7_);
  // checkMissing(T8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_T8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(T8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_T8_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args71);
  // if c6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r48 = `*`(dx15, 1.0E9)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args72);
  // return r48
  return Rsh_Fir_reg_r48_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", T8)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_T8_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r47 = dyn __2(T8, <missing>, <int 2, 3, 4, 5, 6, 7, 8>)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_T8_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args75[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r47_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r2 = dyn UseMethod("print")
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("print")
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
