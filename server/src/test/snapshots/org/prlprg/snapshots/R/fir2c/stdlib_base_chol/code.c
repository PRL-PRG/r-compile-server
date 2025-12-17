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
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_chol;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_cm2_;
  SEXP Rsh_Fir_reg_cm3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_cm4_;
  SEXP Rsh_Fir_reg_cm5_;
  SEXP Rsh_Fir_reg_crossprod;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_matrix1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_cbind;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_letters;
  SEXP Rsh_Fir_reg_letters1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_letters3_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_colnames__;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_crossprod1_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_qr;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_try;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_chol2_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_Q;
  SEXP Rsh_Fir_reg_Q1_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_Q2_;
  SEXP Rsh_Fir_reg_Q3_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_Q5_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_order;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_crossprod2_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_matrix2_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_try1_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_chol4_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_Q6_;
  SEXP Rsh_Fir_reg_Q7_;
  SEXP Rsh_Fir_reg_crossprod3_;
  SEXP Rsh_Fir_reg_r68_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st chol = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c(5.0, 1.0, 1.0, 3.0);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(5.0, 1.0, 1.0, 3.0);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn matrix(p, 2.0, 2.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 8 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st m = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // chol = ldf chol
  Rsh_Fir_reg_chol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r7 = dyn chol(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_chol, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 13 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // st cm = r7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p2 = prom<V +>{
  //   cm = ld cm;
  //   cm1 = force? cm;
  //   checkMissing(cm1);
  //   return cm1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r9 = dyn t(p2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D5_:;
  // deopt 19 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // cm2 = ld cm
  Rsh_Fir_reg_cm2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L13() else D6()
  // L13()
  goto L13_;

D6_:;
  // deopt 20 [cm2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_cm2_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // cm3 = force? cm2
  Rsh_Fir_reg_cm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cm2_);
  // checkMissing(cm3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_cm3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%*%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r10 = dyn ___(r9, cm3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_cm3_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D7()
  // L14()
  goto L14_;

D7_:;
  // deopt 23 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // sym1 = ldf crossprod
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf crossprod in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L0_:;
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L19() else D10()
  // L19()
  goto L19_;

L15_:;
  // cm4 = ld cm
  Rsh_Fir_reg_cm4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L17() else D8()
  // L17()
  goto L17_;

L16_:;
  // r11 = dyn base1(<sym cm>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D8_:;
  // deopt 26 [cm4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_cm4_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // cm5 = force? cm4
  Rsh_Fir_reg_cm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cm4_);
  // checkMissing(cm5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_cm5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // crossprod = ldf crossprod in base
  Rsh_Fir_reg_crossprod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r13 = dyn crossprod(cm5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_cm5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_crossprod, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L18() else D9()
  // L18()
  goto L18_;

L19_:;
  // p3 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   c1 = ldf c in base;
  //   r16 = dyn c1(<int 1, 2, 3, 4, 5>, <real 1.0, 4.0, 9.0, 16.0, 25.0>);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base2(<lang `:`(1.0, 5.0)>, <lang `^`(`(`(`:`(1.0, 5.0)), 2.0)>);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r18 = dyn matrix1(p3, 5.0, 2.0)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L20() else D11()
  // L20()
  goto L20_;

D9_:;
  // deopt 29 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 35 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L0()
  // L0()
  goto L0_;

L20_:;
  // st x = r18
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L21() else D12()
  // L21()
  goto L21_;

D12_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p4 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   c2 = `is.object`(x3);
  //   if c2 then L2() else L3();
  // L0(dx1):
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   c3 = `is.object`(x7);
  //   if c3 then L5() else L6(dx1, 3.0);
  // L2():
  //   dr = tryDispatchBuiltin.1("[", x3);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L4() else L3();
  // L3():
  //   __ = ldf `[` in base;
  //   r20 = dyn __(x3, <missing>, 1.0);
  //   goto L0(r20);
  // L1(dx6, r24, dx7):
  //   r26 = `*`(r24, dx7);
  //   r27 = `+`(dx6, r26);
  //   return r27;
  // L4():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L5():
  //   dr2 = tryDispatchBuiltin.1("[", x7);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L7() else L6(dx1, 3.0);
  // L6(dx3, r22):
  //   __1 = ldf `[` in base;
  //   r25 = dyn __1(x7, <missing>, 2.0);
  //   goto L1(dx3, r22, r25);
  // L7():
  //   dx5 = getTryDispatchBuiltinValue(dr2);
  //   goto L1(dx1, 3.0, dx5);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r29 = dyn cbind(p4, p5)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L22() else D13()
  // L22()
  goto L22_;

D13_:;
  // deopt 41 [r29]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L22_:;
  // st x = r29
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // letters = ld letters
  Rsh_Fir_reg_letters = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L23() else D14()
  // L23()
  goto L23_;

D14_:;
  // deopt 43 [letters]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_letters;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // letters1 = force? letters
  Rsh_Fir_reg_letters1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_letters);
  // checkMissing(letters1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_letters1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(letters1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_letters1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args35);
  // if c4 then L24() else L25(letters1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L24()
    goto L24_;
  } else {
  // L25(letters1)
    Rsh_Fir_reg_letters3_ = Rsh_Fir_reg_letters1_;
    goto L25_;
  }

L1_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L27() else D15()
  // L27()
  goto L27_;

L24_:;
  // dr4 = tryDispatchBuiltin.1("[", letters1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_letters1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc2 then L26() else L25(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L26()
    goto L26_;
  } else {
  // L25(dr4)
    Rsh_Fir_reg_letters3_ = Rsh_Fir_reg_dr4_;
    goto L25_;
  }

L25_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r30 = dyn __2(letters3, <int 20, 21, 22>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_letters3_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(r30)
  // L1(r30)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r30_;
  goto L1_;

D15_:;
  // deopt 49 [dx9, l, dx9]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L26_:;
  // dx8 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L1(dx8)
  // L1(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L1_;

L27_:;
  // r31 = dyn colnames__(l, NULL, dx9)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L28() else D16()
  // L28()
  goto L28_;

D16_:;
  // deopt 51 [dx9, r31]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L28_:;
  // st x = r31
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym3 = ldf crossprod
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf crossprod in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard3 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L2_:;
  // st m = r33
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // qr = ldf qr
  Rsh_Fir_reg_qr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L33() else D19()
  // L33()
  goto L33_;

L29_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L31() else D17()
  // L31()
  goto L31_;

L30_:;
  // r32 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L2(r32)
  // L2(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L2_;

D17_:;
  // deopt 55 [x10]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // crossprod1 = ldf crossprod in base
  Rsh_Fir_reg_crossprod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r34 = dyn crossprod1(x11)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_crossprod1_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L32() else D18()
  // L32()
  goto L32_;

L33_:;
  // p6 = prom<V +>{
  //   m2 = ld m;
  //   m3 = force? m2;
  //   checkMissing(m3);
  //   return m3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r36 = dyn qr(p6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L34() else D20()
  // L34()
  goto L34_;

D18_:;
  // deopt 58 [r34]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 63 [r36]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L2(r34)
  // L2(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L2_;

L34_:;
  // c5 = `is.object`(r36)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args47);
  // if c5 then L36() else L37(r36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L36()
    goto L36_;
  } else {
  // L37(r36)
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r36_;
    goto L37_;
  }

L35_:;
  // try = ldf try
  Rsh_Fir_reg_try = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L39() else D21()
  // L39()
  goto L39_;

L36_:;
  // dr6 = tryDispatchBuiltin.1("$", r36)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc3 then L38() else L37(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L38()
    goto L38_;
  } else {
  // L37(dr6)
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_dr6_;
    goto L37_;
  }

L37_:;
  // r39 = `$`(r38, <sym rank>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args50);
  // goto L35()
  // L35()
  goto L35_;

D21_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L35()
  // L35()
  goto L35_;

L39_:;
  // p8 = prom<V +>{
  //   chol1 = ldf chol;
  //   p7 = prom<V +>{
  //     m4 = ld m;
  //     m5 = force? m4;
  //     checkMissing(m5);
  //     return m5;
  //   };
  //   r41 = dyn chol1(p7);
  //   return r41;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r43 = dyn try(p8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L40() else D22()
  // L40()
  goto L40_;

D22_:;
  // deopt 68 [r43]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L40_:;
  // chol2 = ldf chol
  Rsh_Fir_reg_chol2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L41() else D23()
  // L41()
  goto L41_;

D23_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p9 = prom<V +>{
  //   m6 = ld m;
  //   m7 = force? m6;
  //   checkMissing(m7);
  //   return m7;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r45 = dyn chol2[, pivot](p9, TRUE)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_chol2_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L42() else D24()
  // L42()
  goto L42_;

D24_:;
  // deopt 74 [r45]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L42_:;
  // st Q = r45
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard4 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L3_:;
  // st pivot = r47
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // sym5 = ldf crossprod
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf crossprod in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard5 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L43_:;
  // Q = ld Q
  Rsh_Fir_reg_Q = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L45() else D25()
  // L45()
  goto L45_;

L44_:;
  // r46 = dyn base4(<sym Q>, "pivot")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L3(r46)
  // L3(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L3_;

D25_:;
  // deopt 78 [Q]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_Q;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L4_:;
  // matrix2 = ldf matrix
  Rsh_Fir_reg_matrix2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L56() else D31()
  // L56()
  goto L56_;

L45_:;
  // Q1 = force? Q
  Rsh_Fir_reg_Q1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Q);
  // checkMissing(Q1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_Q1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r48 = dyn attr(Q1, "pivot")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_Q1_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L46() else D26()
  // L46()
  goto L46_;

L47_:;
  // Q2 = ld Q
  Rsh_Fir_reg_Q2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L49() else D27()
  // L49()
  goto L49_;

L48_:;
  // r49 = dyn base5(<lang `[`(Q, , order(pivot))>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L4()
  // L4()
  goto L4_;

D26_:;
  // deopt 82 [r48]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 86 [Q2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_Q2_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L3(r48)
  // L3(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L3_;

L49_:;
  // Q3 = force? Q2
  Rsh_Fir_reg_Q3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Q2_);
  // checkMissing(Q3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_Q3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(Q3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_Q3_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args64);
  // if c6 then L50() else L51(Q3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L50()
    goto L50_;
  } else {
  // L51(Q3)
    Rsh_Fir_reg_Q5_ = Rsh_Fir_reg_Q3_;
    goto L51_;
  }

L56_:;
  // p11 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r56):
  //   return r56;
  // L1():
  //   c7 = ldf c in base;
  //   r57 = dyn c7(5.0, -5.0, -5.0, 3.0);
  //   goto L0(r57);
  // L2():
  //   r55 = dyn base6(5.0, <lang `-`(5.0)>, <lang `-`(5.0)>, 3.0);
  //   goto L0(r55);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r59 = dyn matrix2(p11, 2.0, 2.0)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args68[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix2_, 3, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L57() else D32()
  // L57()
  goto L57_;

D32_:;
  // deopt 102 [r59]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L5_:;
  // crossprod2 = ldf crossprod in base
  Rsh_Fir_reg_crossprod2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r54 = dyn crossprod2(dx13)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_crossprod2_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L55() else D30()
  // L55()
  goto L55_;

L50_:;
  // dr8 = tryDispatchBuiltin.1("[", Q3)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_Q3_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc4 then L52() else L51(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L52()
    goto L52_;
  } else {
  // L51(dr8)
    Rsh_Fir_reg_Q5_ = Rsh_Fir_reg_dr8_;
    goto L51_;
  }

L51_:;
  // order = ldf order
  Rsh_Fir_reg_order = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L53() else D28()
  // L53()
  goto L53_;

L57_:;
  // st m = r59
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // try1 = ldf try
  Rsh_Fir_reg_try1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L58() else D33()
  // L58()
  goto L58_;

D28_:;
  // deopt 90 [Q5]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_Q5_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 96 [r54]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 105 []
  Rsh_Fir_deopt(105, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L5(dx12)
  // L5(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L5_;

L53_:;
  // p10 = prom<V +>{
  //   pivot = ld pivot;
  //   pivot1 = force? pivot;
  //   checkMissing(pivot1);
  //   return pivot1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r52 = dyn order(p10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_order, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L54() else D29()
  // L54()
  goto L54_;

L55_:;
  // goto L4()
  // L4()
  goto L4_;

L58_:;
  // p13 = prom<V +>{
  //   chol3 = ldf chol;
  //   p12 = prom<V +>{
  //     m8 = ld m;
  //     m9 = force? m8;
  //     checkMissing(m9);
  //     return m9;
  //   };
  //   r61 = dyn chol3(p12);
  //   return r61;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r63 = dyn try1(p13)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try1_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L59() else D34()
  // L59()
  goto L59_;

D29_:;
  // deopt 92 [Q5, r52]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_Q5_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(92, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 107 [r63]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L54_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r53 = dyn __3(Q3, <missing>, r52)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_Q3_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L5(r53)
  // L5(r53)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r53_;
  goto L5_;

L59_:;
  // chol4 = ldf chol
  Rsh_Fir_reg_chol4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L60() else D35()
  // L60()
  goto L60_;

D35_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p14 = prom<V +>{
  //   m10 = ld m;
  //   m11 = force? m10;
  //   checkMissing(m11);
  //   return m11;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r65 = dyn chol4[, pivot](p14, TRUE)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_chol4_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L61() else D36()
  // L61()
  goto L61_;

D36_:;
  // deopt 113 [r65]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L61_:;
  // st Q = r65
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r65_, RHO);
  (void)(Rsh_Fir_reg_r65_);
  // sym7 = ldf crossprod
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base7 = ldf crossprod in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard7 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r67
  return Rsh_Fir_reg_r67_;

L62_:;
  // Q6 = ld Q
  Rsh_Fir_reg_Q6_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L64() else D37()
  // L64()
  goto L64_;

L63_:;
  // r66 = dyn base7(<sym Q>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L6(r66)
  // L6(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L6_;

D37_:;
  // deopt 117 [Q6]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_Q6_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L64_:;
  // Q7 = force? Q6
  Rsh_Fir_reg_Q7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Q6_);
  // checkMissing(Q7)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_Q7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // crossprod3 = ldf crossprod in base
  Rsh_Fir_reg_crossprod3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r68 = dyn crossprod3(Q7)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_Q7_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_crossprod3_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L65() else D38()
  // L65()
  goto L65_;

D38_:;
  // deopt 120 [r68]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L6(r68)
  // L6(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn c(5.0, 1.0, 1.0, 3.0)
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(5.0, 1.0, 1.0, 3.0)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cm;
  SEXP Rsh_Fir_reg_cm1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cm = ld cm
  Rsh_Fir_reg_cm = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // cm1 = force? cm
  Rsh_Fir_reg_cm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cm);
  // checkMissing(cm1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_cm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return cm1
  return Rsh_Fir_reg_cm1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r16 = dyn c1(<int 1, 2, 3, 4, 5>, <real 1.0, 4.0, 9.0, 16.0, 25.0>)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base2(<lang `:`(1.0, 5.0)>, <lang `^`(`(`(`:`(1.0, 5.0)), 2.0)>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args20);
  // if c2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(x7)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args22);
  // if c3 then L5() else L6(dx1, 3.0)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx1, 3.0)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_r22_ = Rsh_const(CCP, 5);
    goto L6_;
  }

L2_:;
  // dr = tryDispatchBuiltin.1("[", x3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L4()
    goto L4_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r20 = dyn __(x3, <missing>, 1.0)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L0_;

L1_:;
  // r26 = `*`(r24, dx7)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args26);
  // r27 = `+`(dx6, r26)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args27);
  // return r27
  return Rsh_Fir_reg_r27_;

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L5_:;
  // dr2 = tryDispatchBuiltin.1("[", x7)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc1 then L7() else L6(dx1, 3.0)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dx1, 3.0)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_r22_ = Rsh_const(CCP, 5);
    goto L6_;
  }

L6_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r25 = dyn __1(x7, <missing>, 2.0)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L1(dx3, r22, r25)
  // L1(dx3, r22, r25)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r25_;
  goto L1_;

L7_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L1(dx1, 3.0, dx5)
  // L1(dx1, 3.0, dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r24_ = Rsh_const(CCP, 5);
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_m3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return m3
  return Rsh_Fir_reg_m3_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_chol1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r41_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // chol1 = ldf chol
  Rsh_Fir_reg_chol1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p7 = prom<V +>{
  //   m4 = ld m;
  //   m5 = force? m4;
  //   checkMissing(m5);
  //   return m5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r41 = dyn chol1(p7)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_chol1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r41
  return Rsh_Fir_reg_r41_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m4_;
  SEXP Rsh_Fir_reg_m5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return m5
  return Rsh_Fir_reg_m5_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m6_;
  SEXP Rsh_Fir_reg_m7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m6 = ld m
  Rsh_Fir_reg_m6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // m7 = force? m6
  Rsh_Fir_reg_m7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m6_);
  // checkMissing(m7)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_m7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return m7
  return Rsh_Fir_reg_m7_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r57_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r56
  return Rsh_Fir_reg_r56_;

L1_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r57 = dyn c7(5.0, -5.0, -5.0, 3.0)
  SEXP Rsh_Fir_array_args66[4];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args66[2] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args66[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 4, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L0_;

L2_:;
  // r55 = dyn base6(5.0, <lang `-`(5.0)>, <lang `-`(5.0)>, 3.0)
  SEXP Rsh_Fir_array_args67[4];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args67[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 4, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pivot;
  SEXP Rsh_Fir_reg_pivot1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // pivot = ld pivot
  Rsh_Fir_reg_pivot = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // pivot1 = force? pivot
  Rsh_Fir_reg_pivot1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pivot);
  // checkMissing(pivot1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_pivot1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return pivot1
  return Rsh_Fir_reg_pivot1_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_chol3_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r61_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // chol3 = ldf chol
  Rsh_Fir_reg_chol3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p12 = prom<V +>{
  //   m8 = ld m;
  //   m9 = force? m8;
  //   checkMissing(m9);
  //   return m9;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r61 = dyn chol3(p12)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_chol3_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names30, CCP, RHO);
  // return r61
  return Rsh_Fir_reg_r61_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m8_;
  SEXP Rsh_Fir_reg_m9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m8 = ld m
  Rsh_Fir_reg_m8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // m9 = force? m8
  Rsh_Fir_reg_m9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m8_);
  // checkMissing(m9)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_m9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return m9
  return Rsh_Fir_reg_m9_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m10_;
  SEXP Rsh_Fir_reg_m11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m10 = ld m
  Rsh_Fir_reg_m10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // m11 = force? m10
  Rsh_Fir_reg_m11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m10_);
  // checkMissing(m11)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_m11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return m11
  return Rsh_Fir_reg_m11_;
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
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r2 = dyn UseMethod("chol")
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("chol")
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
