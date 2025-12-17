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
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1910579422_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1910579422_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1910579422_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1910579422_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_tempfile;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_saveRDS;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_readRDS;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_women2_;
  SEXP Rsh_Fir_reg_women3_;
  SEXP Rsh_Fir_reg_women4_;
  SEXP Rsh_Fir_reg_women5_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_gzfile;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_readRDS1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_close;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_gzfile1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_unserialize;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_women6_;
  SEXP Rsh_Fir_reg_women7_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_close1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_gzfile2_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_readBin;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_close2_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_unserialize1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_women8_;
  SEXP Rsh_Fir_reg_women9_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_tempfile1_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_file;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_serialize;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_close3_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_women12_;
  SEXP Rsh_Fir_reg_women13_;
  SEXP Rsh_Fir_reg_readRDS2_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_identical3_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_tempfile2_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_bzfile;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_serialize1_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_close4_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_women16_;
  SEXP Rsh_Fir_reg_women17_;
  SEXP Rsh_Fir_reg_readRDS3_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_identical4_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_unlink;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r66_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1910579422
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1910579422_, RHO, CCP);
  // st readRDS = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r1 = dyn tempfile[, fileext]("women", ".rds")
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 8 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // st fil = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // saveRDS = ldf saveRDS
  Rsh_Fir_reg_saveRDS = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   women = ld women;
  //   women1 = force? women;
  //   checkMissing(women1);
  //   return women1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   fil = ld fil;
  //   fil1 = force? fil;
  //   checkMissing(fil1);
  //   return fil1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r4 = dyn saveRDS(p, p1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_saveRDS, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 14 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // readRDS = ldf readRDS
  Rsh_Fir_reg_readRDS = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p2 = prom<V +>{
  //   fil2 = ld fil;
  //   fil3 = force? fil2;
  //   checkMissing(fil3);
  //   return fil3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r6 = dyn readRDS(p2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readRDS, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

D5_:;
  // deopt 18 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // st women2 = r6
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L0_:;
  // gzfile = ldf gzfile
  Rsh_Fir_reg_gzfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L16() else D9()
  // L16()
  goto L16_;

L11_:;
  // women2 = ld women
  Rsh_Fir_reg_women2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L13() else D6()
  // L13()
  goto L13_;

L12_:;
  // r7 = dyn base(<sym women>, <sym women2>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D6_:;
  // deopt 22 [women2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_women2_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // women3 = force? women2
  Rsh_Fir_reg_women3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women2_);
  // checkMissing(women3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_women3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // women4 = ld women2
  Rsh_Fir_reg_women4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L14() else D7()
  // L14()
  goto L14_;

L16_:;
  // p3 = prom<V +>{
  //   fil4 = ld fil;
  //   fil5 = force? fil4;
  //   checkMissing(fil5);
  //   return fil5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r11 = dyn gzfile(p3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gzfile, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L17() else D10()
  // L17()
  goto L17_;

D7_:;
  // deopt 24 [women4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_women4_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 38 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // women5 = force? women4
  Rsh_Fir_reg_women5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women4_);
  // checkMissing(women5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_women5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r9 = dyn identical(women3, women5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args12[9];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_women3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_women5_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args12[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[8] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[9];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L15() else D8()
  // L15()
  goto L15_;

L17_:;
  // st con = r11
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // readRDS1 = ldf readRDS
  Rsh_Fir_reg_readRDS1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D11()
  // L18()
  goto L18_;

D8_:;
  // deopt 34 [r9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L0()
  // L0()
  goto L0_;

L18_:;
  // p4 = prom<V +>{
  //   con = ld con;
  //   con1 = force? con;
  //   checkMissing(con1);
  //   return con1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r13 = dyn readRDS1(p4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readRDS1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D12()
  // L19()
  goto L19_;

D12_:;
  // deopt 43 [r13]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // close = ldf close
  Rsh_Fir_reg_close = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L20() else D13()
  // L20()
  goto L20_;

D13_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p5 = prom<V +>{
  //   con2 = ld con;
  //   con3 = force? con2;
  //   checkMissing(con3);
  //   return con3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r15 = dyn close(p5)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L21() else D14()
  // L21()
  goto L21_;

D14_:;
  // deopt 47 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // gzfile1 = ldf gzfile
  Rsh_Fir_reg_gzfile1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L22() else D15()
  // L22()
  goto L22_;

D15_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p6 = prom<V +>{
  //   fil6 = ld fil;
  //   fil7 = force? fil6;
  //   checkMissing(fil7);
  //   return fil7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r17 = dyn gzfile1(p6, "rb")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gzfile1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L23() else D16()
  // L23()
  goto L23_;

D16_:;
  // deopt 52 [r17]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // st con = r17
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L1_:;
  // close1 = ldf close
  Rsh_Fir_reg_close1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L30() else D21()
  // L30()
  goto L30_;

L24_:;
  // unserialize = ldf unserialize
  Rsh_Fir_reg_unserialize = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L26() else D17()
  // L26()
  goto L26_;

L25_:;
  // r18 = dyn base1(<lang unserialize(con)>, <sym women>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D17_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p7 = prom<V +>{
  //   con4 = ld con;
  //   con5 = force? con4;
  //   checkMissing(con5);
  //   return con5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r21 = dyn unserialize(p7)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unserialize, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L27() else D18()
  // L27()
  goto L27_;

L30_:;
  // p8 = prom<V +>{
  //   con6 = ld con;
  //   con7 = force? con6;
  //   checkMissing(con7);
  //   return con7;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r24 = dyn close1(p8)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L31() else D22()
  // L31()
  goto L31_;

D18_:;
  // deopt 59 [r21]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 74 [r24]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L27_:;
  // women6 = ld women
  Rsh_Fir_reg_women6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L28() else D19()
  // L28()
  goto L28_;

L31_:;
  // gzfile2 = ldf gzfile
  Rsh_Fir_reg_gzfile2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L32() else D23()
  // L32()
  goto L32_;

D19_:;
  // deopt 60 [women6]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_women6_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // women7 = force? women6
  Rsh_Fir_reg_women7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women6_);
  // checkMissing(women7)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_women7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r22 = dyn identical1(r21, women7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args26[9];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_women7_;
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args26[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args26[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args26[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args26[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args26[8] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names12[9];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_array_arg_names12[5] = R_MissingArg;
  Rsh_Fir_array_arg_names12[6] = R_MissingArg;
  Rsh_Fir_array_arg_names12[7] = R_MissingArg;
  Rsh_Fir_array_arg_names12[8] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L29() else D20()
  // L29()
  goto L29_;

L32_:;
  // p9 = prom<V +>{
  //   fil8 = ld fil;
  //   fil9 = force? fil8;
  //   checkMissing(fil9);
  //   return fil9;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r26 = dyn gzfile2(p9, "rb")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gzfile2_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L33() else D24()
  // L33()
  goto L33_;

D20_:;
  // deopt 70 [r22]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 79 [r26]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L1()
  // L1()
  goto L1_;

L33_:;
  // st con = r26
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // readBin = ldf readBin
  Rsh_Fir_reg_readBin = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L34() else D25()
  // L34()
  goto L34_;

D25_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p10 = prom<V +>{
  //   con8 = ld con;
  //   con9 = force? con8;
  //   checkMissing(con9);
  //   return con9;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r28 = dyn readBin[, , n](p10, "raw", 10000.0)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readBin, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L35() else D26()
  // L35()
  goto L35_;

D26_:;
  // deopt 87 [r28]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L35_:;
  // st wm = r28
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // close2 = ldf close
  Rsh_Fir_reg_close2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L36() else D27()
  // L36()
  goto L36_;

D27_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p11 = prom<V +>{
  //   con10 = ld con;
  //   con11 = force? con10;
  //   checkMissing(con11);
  //   return con11;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r30 = dyn close2(p11)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close2_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L37() else D28()
  // L37()
  goto L37_;

D28_:;
  // deopt 92 [r30]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L37_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard2 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L2_:;
  // tempfile1 = ldf tempfile
  Rsh_Fir_reg_tempfile1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L44() else D33()
  // L44()
  goto L44_;

L38_:;
  // unserialize1 = ldf unserialize
  Rsh_Fir_reg_unserialize1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L40() else D29()
  // L40()
  goto L40_;

L39_:;
  // r31 = dyn base2(<lang unserialize(wm)>, <sym women>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D29_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p12 = prom<V +>{
  //   wm = ld wm;
  //   wm1 = force? wm;
  //   checkMissing(wm1);
  //   return wm1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r34 = dyn unserialize1(p12)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unserialize1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L41() else D30()
  // L41()
  goto L41_;

L44_:;
  // r36 = dyn tempfile1("women")
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L45() else D34()
  // L45()
  goto L45_;

D30_:;
  // deopt 98 [r34]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 113 [r36]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L41_:;
  // women8 = ld women
  Rsh_Fir_reg_women8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L42() else D31()
  // L42()
  goto L42_;

L45_:;
  // st fil2 = r36
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // file = ldf file
  Rsh_Fir_reg_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L46() else D35()
  // L46()
  goto L46_;

D31_:;
  // deopt 99 [women8]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_women8_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 116 []
  Rsh_Fir_deopt(116, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // women9 = force? women8
  Rsh_Fir_reg_women9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women8_);
  // checkMissing(women9)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_women9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r35 = dyn identical2(r34, women9, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args39[9];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_women9_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args39[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args39[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args39[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args39[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args39[8] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names19[9];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_array_arg_names19[4] = R_MissingArg;
  Rsh_Fir_array_arg_names19[5] = R_MissingArg;
  Rsh_Fir_array_arg_names19[6] = R_MissingArg;
  Rsh_Fir_array_arg_names19[7] = R_MissingArg;
  Rsh_Fir_array_arg_names19[8] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L43() else D32()
  // L43()
  goto L43_;

L46_:;
  // p13 = prom<V +>{
  //   fil10 = ld fil2;
  //   fil11 = force? fil10;
  //   checkMissing(fil11);
  //   return fil11;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r38 = dyn file(p13, "w")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L47() else D36()
  // L47()
  goto L47_;

D32_:;
  // deopt 109 [r35]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 119 [r38]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L2()
  // L2()
  goto L2_;

L47_:;
  // st con = r38
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // serialize = ldf serialize
  Rsh_Fir_reg_serialize = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L48() else D37()
  // L48()
  goto L48_;

D37_:;
  // deopt 122 []
  Rsh_Fir_deopt(122, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p14 = prom<V +>{
  //   women10 = ld women;
  //   women11 = force? women10;
  //   checkMissing(women11);
  //   return women11;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   con12 = ld con;
  //   con13 = force? con12;
  //   checkMissing(con13);
  //   return con13;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r41 = dyn serialize(p14, p15)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_serialize, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L49() else D38()
  // L49()
  goto L49_;

D38_:;
  // deopt 125 [r41]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L49_:;
  // close3 = ldf close
  Rsh_Fir_reg_close3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L50() else D39()
  // L50()
  goto L50_;

D39_:;
  // deopt 127 []
  Rsh_Fir_deopt(127, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p16 = prom<V +>{
  //   con14 = ld con;
  //   con15 = force? con14;
  //   checkMissing(con15);
  //   return con15;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r43 = dyn close3(p16)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close3_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L51() else D40()
  // L51()
  goto L51_;

D40_:;
  // deopt 129 [r43]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L51_:;
  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard3 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L3_:;
  // tempfile2 = ldf tempfile
  Rsh_Fir_reg_tempfile2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L58() else D45()
  // L58()
  goto L58_;

L52_:;
  // women12 = ld women
  Rsh_Fir_reg_women12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L54() else D41()
  // L54()
  goto L54_;

L53_:;
  // r44 = dyn base3(<sym women>, <lang readRDS(fil2)>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D41_:;
  // deopt 132 [women12]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_women12_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 148 []
  Rsh_Fir_deopt(148, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // women13 = force? women12
  Rsh_Fir_reg_women13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women12_);
  // checkMissing(women13)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_women13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // readRDS2 = ldf readRDS
  Rsh_Fir_reg_readRDS2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L55() else D42()
  // L55()
  goto L55_;

L58_:;
  // r49 = dyn tempfile2("women")
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile2_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L59() else D46()
  // L59()
  goto L59_;

D42_:;
  // deopt 135 []
  Rsh_Fir_deopt(135, 0, NULL, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 150 [r49]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L55_:;
  // p17 = prom<V +>{
  //   fil12 = ld fil2;
  //   fil13 = force? fil12;
  //   checkMissing(fil13);
  //   return fil13;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r47 = dyn readRDS2(p17)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readRDS2_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L56() else D43()
  // L56()
  goto L56_;

L59_:;
  // st fil3 = r49
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // bzfile = ldf bzfile
  Rsh_Fir_reg_bzfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L60() else D47()
  // L60()
  goto L60_;

D43_:;
  // deopt 137 [r47]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 153 []
  Rsh_Fir_deopt(153, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // identical3 = ldf identical in base
  Rsh_Fir_reg_identical3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r48 = dyn identical3(women13, r47, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args53[9];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_women13_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args53[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args53[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args53[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args53[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args53[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args53[8] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names26[9];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_array_arg_names26[4] = R_MissingArg;
  Rsh_Fir_array_arg_names26[5] = R_MissingArg;
  Rsh_Fir_array_arg_names26[6] = R_MissingArg;
  Rsh_Fir_array_arg_names26[7] = R_MissingArg;
  Rsh_Fir_array_arg_names26[8] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical3_, 9, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L57() else D44()
  // L57()
  goto L57_;

L60_:;
  // p18 = prom<V +>{
  //   fil14 = ld fil3;
  //   fil15 = force? fil14;
  //   checkMissing(fil15);
  //   return fil15;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r51 = dyn bzfile(p18, "w")
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bzfile, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L61() else D48()
  // L61()
  goto L61_;

D44_:;
  // deopt 146 [r48]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 156 [r51]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L3()
  // L3()
  goto L3_;

L61_:;
  // st con = r51
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // serialize1 = ldf serialize
  Rsh_Fir_reg_serialize1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L62() else D49()
  // L62()
  goto L62_;

D49_:;
  // deopt 159 []
  Rsh_Fir_deopt(159, 0, NULL, CCP, RHO);
  return R_NilValue;

L62_:;
  // p19 = prom<V +>{
  //   women14 = ld women;
  //   women15 = force? women14;
  //   checkMissing(women15);
  //   return women15;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // p20 = prom<V +>{
  //   con16 = ld con;
  //   con17 = force? con16;
  //   checkMissing(con17);
  //   return con17;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // r54 = dyn serialize1(p19, p20)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_serialize1_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L63() else D50()
  // L63()
  goto L63_;

D50_:;
  // deopt 162 [r54]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L63_:;
  // close4 = ldf close
  Rsh_Fir_reg_close4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L64() else D51()
  // L64()
  goto L64_;

D51_:;
  // deopt 164 []
  Rsh_Fir_deopt(164, 0, NULL, CCP, RHO);
  return R_NilValue;

L64_:;
  // p21 = prom<V +>{
  //   con18 = ld con;
  //   con19 = force? con18;
  //   checkMissing(con19);
  //   return con19;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main21, 0, NULL, CCP, RHO);
  // r56 = dyn close4(p21)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close4_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L65() else D52()
  // L65()
  goto L65_;

D52_:;
  // deopt 166 [r56]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L65_:;
  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard4 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L4_:;
  // unlink = ldf unlink
  Rsh_Fir_reg_unlink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L72() else D57()
  // L72()
  goto L72_;

L66_:;
  // women16 = ld women
  Rsh_Fir_reg_women16_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L68() else D53()
  // L68()
  goto L68_;

L67_:;
  // r57 = dyn base4(<sym women>, <lang readRDS(fil3)>)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L4()
  // L4()
  goto L4_;

D53_:;
  // deopt 169 [women16]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_women16_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 185 []
  Rsh_Fir_deopt(185, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // women17 = force? women16
  Rsh_Fir_reg_women17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women16_);
  // checkMissing(women17)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_women17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // readRDS3 = ldf readRDS
  Rsh_Fir_reg_readRDS3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L69() else D54()
  // L69()
  goto L69_;

L72_:;
  // p23 = prom<V +>{
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r63):
  //   return r63;
  // L1():
  //   fil18 = ld fil;
  //   fil19 = force? fil18;
  //   checkMissing(fil19);
  //   fil20 = ld fil2;
  //   fil21 = force? fil20;
  //   checkMissing(fil21);
  //   fil22 = ld fil3;
  //   fil23 = force? fil22;
  //   checkMissing(fil23);
  //   c = ldf c in base;
  //   r64 = dyn c(fil19, fil21, fil23);
  //   goto L0(r64);
  // L2():
  //   r62 = dyn base5(<sym fil>, <sym fil2>, <sym fil3>);
  //   goto L0(r62);
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main22, 0, NULL, CCP, RHO);
  // r66 = dyn unlink(p23)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlink, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L73() else D58()
  // L73()
  goto L73_;

D54_:;
  // deopt 172 []
  Rsh_Fir_deopt(172, 0, NULL, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 187 [r66]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L69_:;
  // p22 = prom<V +>{
  //   fil16 = ld fil3;
  //   fil17 = force? fil16;
  //   checkMissing(fil17);
  //   return fil17;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main23, 0, NULL, CCP, RHO);
  // r60 = dyn readRDS3(p22)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readRDS3_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L70() else D55()
  // L70()
  goto L70_;

L73_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r66
  return Rsh_Fir_reg_r66_;

D55_:;
  // deopt 174 [r60]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L70_:;
  // identical4 = ldf identical in base
  Rsh_Fir_reg_identical4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r61 = dyn identical4(women17, r60, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args73[9];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_women17_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args73[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args73[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args73[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args73[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args73[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args73[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args73[8] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names35[9];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_array_arg_names35[3] = R_MissingArg;
  Rsh_Fir_array_arg_names35[4] = R_MissingArg;
  Rsh_Fir_array_arg_names35[5] = R_MissingArg;
  Rsh_Fir_array_arg_names35[6] = R_MissingArg;
  Rsh_Fir_array_arg_names35[7] = R_MissingArg;
  Rsh_Fir_array_arg_names35[8] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical4_, 9, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L71() else D56()
  // L71()
  goto L71_;

D56_:;
  // deopt 183 [r61]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L4()
  // L4()
  goto L4_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_women;
  SEXP Rsh_Fir_reg_women1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // women = ld women
  Rsh_Fir_reg_women = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // women1 = force? women
  Rsh_Fir_reg_women1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women);
  // checkMissing(women1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_women1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return women1
  return Rsh_Fir_reg_women1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil;
  SEXP Rsh_Fir_reg_fil1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil = ld fil
  Rsh_Fir_reg_fil = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // fil1 = force? fil
  Rsh_Fir_reg_fil1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil);
  // checkMissing(fil1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_fil1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return fil1
  return Rsh_Fir_reg_fil1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil2_;
  SEXP Rsh_Fir_reg_fil3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil2 = ld fil
  Rsh_Fir_reg_fil2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // fil3 = force? fil2
  Rsh_Fir_reg_fil3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil2_);
  // checkMissing(fil3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_fil3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return fil3
  return Rsh_Fir_reg_fil3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil4_;
  SEXP Rsh_Fir_reg_fil5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil4 = ld fil
  Rsh_Fir_reg_fil4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // fil5 = force? fil4
  Rsh_Fir_reg_fil5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil4_);
  // checkMissing(fil5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_fil5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return fil5
  return Rsh_Fir_reg_fil5_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con;
  SEXP Rsh_Fir_reg_con1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con = ld con
  Rsh_Fir_reg_con = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con1 = force? con
  Rsh_Fir_reg_con1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con);
  // checkMissing(con1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_con1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return con1
  return Rsh_Fir_reg_con1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con2_;
  SEXP Rsh_Fir_reg_con3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con2 = ld con
  Rsh_Fir_reg_con2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con3 = force? con2
  Rsh_Fir_reg_con3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con2_);
  // checkMissing(con3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_con3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return con3
  return Rsh_Fir_reg_con3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil6_;
  SEXP Rsh_Fir_reg_fil7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil6 = ld fil
  Rsh_Fir_reg_fil6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // fil7 = force? fil6
  Rsh_Fir_reg_fil7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil6_);
  // checkMissing(fil7)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_fil7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return fil7
  return Rsh_Fir_reg_fil7_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con4_;
  SEXP Rsh_Fir_reg_con5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con4 = ld con
  Rsh_Fir_reg_con4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con5 = force? con4
  Rsh_Fir_reg_con5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con4_);
  // checkMissing(con5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_con5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return con5
  return Rsh_Fir_reg_con5_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con6_;
  SEXP Rsh_Fir_reg_con7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con6 = ld con
  Rsh_Fir_reg_con6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con7 = force? con6
  Rsh_Fir_reg_con7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con6_);
  // checkMissing(con7)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_con7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return con7
  return Rsh_Fir_reg_con7_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil8_;
  SEXP Rsh_Fir_reg_fil9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil8 = ld fil
  Rsh_Fir_reg_fil8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // fil9 = force? fil8
  Rsh_Fir_reg_fil9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil8_);
  // checkMissing(fil9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_fil9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return fil9
  return Rsh_Fir_reg_fil9_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con8_;
  SEXP Rsh_Fir_reg_con9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con8 = ld con
  Rsh_Fir_reg_con8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con9 = force? con8
  Rsh_Fir_reg_con9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con8_);
  // checkMissing(con9)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_con9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return con9
  return Rsh_Fir_reg_con9_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con10_;
  SEXP Rsh_Fir_reg_con11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con10 = ld con
  Rsh_Fir_reg_con10_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con11 = force? con10
  Rsh_Fir_reg_con11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con10_);
  // checkMissing(con11)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_con11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return con11
  return Rsh_Fir_reg_con11_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_wm;
  SEXP Rsh_Fir_reg_wm1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // wm = ld wm
  Rsh_Fir_reg_wm = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // wm1 = force? wm
  Rsh_Fir_reg_wm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wm);
  // checkMissing(wm1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_wm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return wm1
  return Rsh_Fir_reg_wm1_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil10_;
  SEXP Rsh_Fir_reg_fil11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil10 = ld fil2
  Rsh_Fir_reg_fil10_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // fil11 = force? fil10
  Rsh_Fir_reg_fil11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil10_);
  // checkMissing(fil11)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_fil11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return fil11
  return Rsh_Fir_reg_fil11_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_women10_;
  SEXP Rsh_Fir_reg_women11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // women10 = ld women
  Rsh_Fir_reg_women10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // women11 = force? women10
  Rsh_Fir_reg_women11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women10_);
  // checkMissing(women11)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_women11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return women11
  return Rsh_Fir_reg_women11_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con12_;
  SEXP Rsh_Fir_reg_con13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con12 = ld con
  Rsh_Fir_reg_con12_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con13 = force? con12
  Rsh_Fir_reg_con13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con12_);
  // checkMissing(con13)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_con13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return con13
  return Rsh_Fir_reg_con13_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con14_;
  SEXP Rsh_Fir_reg_con15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con14 = ld con
  Rsh_Fir_reg_con14_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con15 = force? con14
  Rsh_Fir_reg_con15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con14_);
  // checkMissing(con15)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_con15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return con15
  return Rsh_Fir_reg_con15_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil12_;
  SEXP Rsh_Fir_reg_fil13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil12 = ld fil2
  Rsh_Fir_reg_fil12_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // fil13 = force? fil12
  Rsh_Fir_reg_fil13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil12_);
  // checkMissing(fil13)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_fil13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return fil13
  return Rsh_Fir_reg_fil13_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil14_;
  SEXP Rsh_Fir_reg_fil15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil14 = ld fil3
  Rsh_Fir_reg_fil14_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // fil15 = force? fil14
  Rsh_Fir_reg_fil15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil14_);
  // checkMissing(fil15)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_fil15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return fil15
  return Rsh_Fir_reg_fil15_;
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_women14_;
  SEXP Rsh_Fir_reg_women15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // women14 = ld women
  Rsh_Fir_reg_women14_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // women15 = force? women14
  Rsh_Fir_reg_women15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_women14_);
  // checkMissing(women15)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_women15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return women15
  return Rsh_Fir_reg_women15_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con16_;
  SEXP Rsh_Fir_reg_con17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con16 = ld con
  Rsh_Fir_reg_con16_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con17 = force? con16
  Rsh_Fir_reg_con17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con16_);
  // checkMissing(con17)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_con17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return con17
  return Rsh_Fir_reg_con17_;
}
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con18_;
  SEXP Rsh_Fir_reg_con19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // con18 = ld con
  Rsh_Fir_reg_con18_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // con19 = force? con18
  Rsh_Fir_reg_con19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con18_);
  // checkMissing(con19)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_con19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return con19
  return Rsh_Fir_reg_con19_;
}
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_fil18_;
  SEXP Rsh_Fir_reg_fil19_;
  SEXP Rsh_Fir_reg_fil20_;
  SEXP Rsh_Fir_reg_fil21_;
  SEXP Rsh_Fir_reg_fil22_;
  SEXP Rsh_Fir_reg_fil23_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r64_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r63
  return Rsh_Fir_reg_r63_;

L1_:;
  // fil18 = ld fil
  Rsh_Fir_reg_fil18_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // fil19 = force? fil18
  Rsh_Fir_reg_fil19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil18_);
  // checkMissing(fil19)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_fil19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // fil20 = ld fil2
  Rsh_Fir_reg_fil20_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // fil21 = force? fil20
  Rsh_Fir_reg_fil21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil20_);
  // checkMissing(fil21)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_fil21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // fil22 = ld fil3
  Rsh_Fir_reg_fil22_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // fil23 = force? fil22
  Rsh_Fir_reg_fil23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil22_);
  // checkMissing(fil23)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_fil23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r64 = dyn c(fil19, fil21, fil23)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_fil19_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_fil21_;
  Rsh_Fir_array_args68[2] = Rsh_Fir_reg_fil23_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r64)
  // L0(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L0_;

L2_:;
  // r62 = dyn base5(<sym fil>, <sym fil2>, <sym fil3>)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r62)
  // L0(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil16_;
  SEXP Rsh_Fir_reg_fil17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil16 = ld fil3
  Rsh_Fir_reg_fil16_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // fil17 = force? fil16
  Rsh_Fir_reg_fil17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil16_);
  // checkMissing(fil17)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_fil17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return fil17
  return Rsh_Fir_reg_fil17_;
}
SEXP Rsh_Fir_user_function_inner1910579422_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1910579422 dynamic dispatch ([file, refhook])

  return Rsh_Fir_user_version_inner1910579422_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1910579422_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1910579422 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1910579422/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_file1;
  SEXP Rsh_Fir_reg_refhook;
  SEXP Rsh_Fir_reg_refhook_isMissing;
  SEXP Rsh_Fir_reg_refhook_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_file1_;
  SEXP Rsh_Fir_reg_file2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_gzfile1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_on_exit;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_file5_;
  SEXP Rsh_Fir_reg_file6_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_file7_;
  SEXP Rsh_Fir_reg_file8_;
  SEXP Rsh_Fir_reg_inherits1_;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_gzcon;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_file11_;
  SEXP Rsh_Fir_reg_file12_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_con1;
  SEXP Rsh_Fir_reg_con1_1;
  SEXP Rsh_Fir_reg_refhook1_;
  SEXP Rsh_Fir_reg_refhook2_;
  SEXP Rsh_Fir_reg_unserializeFromConn;
  SEXP Rsh_Fir_reg_r20_;

  // Bind parameters
  Rsh_Fir_reg_file1 = PARAMS[0];
  Rsh_Fir_reg_refhook = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st file = file
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_file1, RHO);
  (void)(Rsh_Fir_reg_file1);
  // refhook_isMissing = missing.0(refhook)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_refhook;
  Rsh_Fir_reg_refhook_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args74);
  // if refhook_isMissing then L0(NULL) else L0(refhook)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_refhook_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_refhook_orDefault = Rsh_const(CCP, 34);
    goto L0_;
  } else {
  // L0(refhook)
    Rsh_Fir_reg_refhook_orDefault = Rsh_Fir_reg_refhook;
    goto L0_;
  }

L0_:;
  // st refhook = refhook_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_refhook_orDefault, RHO);
  (void)(Rsh_Fir_reg_refhook_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L1_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c1 then L14() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L2()
    goto L2_;
  }

L11_:;
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r = dyn base(<sym file>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [file1]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_file1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L2_:;
  // sym2 = ldf inherits
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base2 = ldf inherits in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L4_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard4 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L13_:;
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c = `is.character`(file2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_file2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args81);
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1;
  goto L1_;

L14_:;
  // gzfile = ldf gzfile
  Rsh_Fir_reg_gzfile1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // c2 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args82);
  // if c2 then L24() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L24()
    goto L24_;
  } else {
  // L6()
    goto L6_;
  }

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_;

L15_:;
  // p = prom<V +>{
  //   file3 = ld file;
  //   file4 = force? file3;
  //   checkMissing(file4);
  //   return file4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1910579422_, 0, NULL, CCP, RHO);
  // r3 = dyn gzfile(p, "rb")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gzfile1, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L20_:;
  // file5 = ld file
  Rsh_Fir_reg_file5_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L22() else D3()
  // L22()
  goto L22_;

L21_:;
  // r8 = dyn base2(<sym file>, "connection")
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L5_;

L37_:;
  // con = ld con
  Rsh_Fir_reg_con1 = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

L38_:;
  // r18 = dyn base4(<lang unserializeFromConn(con, refhook)>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L10(r18)
  // L10(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_1;
  goto L10_;

D2_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 15 [file5]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_file5_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 42 [con]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_con1;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L6_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

L16_:;
  // st con = r3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym1 = ldf `on.exit`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base1 = ldf `on.exit` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L22_:;
  // file6 = force? file5
  Rsh_Fir_reg_file6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file5_);
  // checkMissing(file6)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_file6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r10 = dyn inherits(file6, "connection", FALSE)
  SEXP Rsh_Fir_array_args89[3];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_file6_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args89[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L24_:;
  // sym3 = ldf inherits
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base3 = ldf inherits in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L39_:;
  // con1 = force? con
  Rsh_Fir_reg_con1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_con1);
  // checkMissing(con1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_con1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // refhook1 = ld refhook
  Rsh_Fir_reg_refhook1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

D4_:;
  // deopt 20 [r10]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 44 [refhook1]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_refhook1_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L7_:;
  // c3 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args92);
  // if c3 then L29() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L8()
    goto L8_;
  }

L17_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r6 = dyn on_exit(<lang close(con)>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_1;
  goto L3_;

L18_:;
  // r4 = dyn base1(<lang close(con)>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_1;
  goto L3_;

L23_:;
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_;
  goto L5_;

L25_:;
  // file7 = ld file
  Rsh_Fir_reg_file7_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

L26_:;
  // r11 = dyn base3(<sym file>, "url")
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_1;
  goto L7_;

L35_:;
  // r17 = dyn stop("bad 'file' argument")
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

L40_:;
  // refhook2 = force? refhook1
  Rsh_Fir_reg_refhook2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_refhook1_);
  // checkMissing(refhook2)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_refhook2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // unserializeFromConn = ldf unserializeFromConn in base
  Rsh_Fir_reg_unserializeFromConn = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r20 = dyn unserializeFromConn(con1, refhook2)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_con1_1;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_refhook2_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unserializeFromConn, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L41() else D14()
  // L41()
  goto L41_;

D5_:;
  // deopt 23 [file7]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_file7_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 39 [r17]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 47 [r20]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L8_:;
  // file11 = ld file
  Rsh_Fir_reg_file11_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

L9_:;
  // st con = r16
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // goto L4()
  // L4()
  goto L4_;

L27_:;
  // file8 = force? file7
  Rsh_Fir_reg_file8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file7_);
  // checkMissing(file8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_file8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r13 = dyn inherits1(file8, "url", FALSE)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_file8_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args100[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names46[3];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

L29_:;
  // gzcon = ldf gzcon
  Rsh_Fir_reg_gzcon = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

L36_:;
  // goto L4()
  // L4()
  goto L4_;

L41_:;
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L10_;

D6_:;
  // deopt 28 [r13]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 33 [file11]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_file11_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_1;
  goto L7_;

L30_:;
  // p1 = prom<V +>{
  //   file9 = ld file;
  //   file10 = force? file9;
  //   checkMissing(file10);
  //   return file10;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1910579422_1, 0, NULL, CCP, RHO);
  // r15 = dyn gzcon(p1)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gzcon, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L33_:;
  // file12 = force? file11
  Rsh_Fir_reg_file12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file11_);
  // checkMissing(file12)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_file12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // goto L9(file12)
  // L9(file12)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_file12_;
  goto L9_;

D8_:;
  // deopt 32 [r15]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_1;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner1910579422_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file3_;
  SEXP Rsh_Fir_reg_file4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1910579422/0: expected 0, got %d", NCAPTURES);

  // file3 = ld file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // file4 = force? file3
  Rsh_Fir_reg_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file3_);
  // checkMissing(file4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return file4
  return Rsh_Fir_reg_file4_;
}
SEXP Rsh_Fir_user_promise_inner1910579422_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file9_;
  SEXP Rsh_Fir_reg_file10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1910579422/0: expected 0, got %d", NCAPTURES);

  // file9 = ld file
  Rsh_Fir_reg_file9_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // file10 = force? file9
  Rsh_Fir_reg_file10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file9_);
  // checkMissing(file10)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_file10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // return file10
  return Rsh_Fir_reg_file10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
