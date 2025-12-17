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
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner880221525_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner880221525_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner880221525_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner880221525_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner880221525_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_format;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_format1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_data_frame;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_format2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_format3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_format4_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_format5_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_format6_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_format7_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_format8_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_format9_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_letters;
  SEXP Rsh_Fir_reg_letters1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_letters3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_expression;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_format10_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_format11_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_f3_;
  SEXP Rsh_Fir_reg_f4_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_format12_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r66_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st format = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn format(p)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // format1 = ldf format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r4 = dyn format1[, trim](p1, TRUE)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format1_, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 12 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p2 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   c = ldf c in base;
  //   r7 = dyn c("aaaaa", "b");
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base("aaaaa", "b");
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r9 = dyn data_frame[`(row names)`, `check.names`](p2, FALSE)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names4, CCP, RHO);
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
  // st zz = r9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // format2 = ldf format
  Rsh_Fir_reg_format2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L13() else D6()
  // L13()
  goto L13_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p3 = prom<V +>{
  //   zz = ld zz;
  //   zz1 = force? zz;
  //   checkMissing(zz1);
  //   return zz1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r11 = dyn format2(p3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format2_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D7()
  // L14()
  goto L14_;

D7_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // format3 = ldf format
  Rsh_Fir_reg_format3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D8()
  // L15()
  goto L15_;

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p4 = prom<V +>{
  //   zz2 = ld zz;
  //   zz3 = force? zz2;
  //   checkMissing(zz3);
  //   return zz3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r13 = dyn format3[, justify](p4, "left")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format3_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L16() else D9()
  // L16()
  goto L16_;

D9_:;
  // deopt 30 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // format4 = ldf format
  Rsh_Fir_reg_format4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D10()
  // L17()
  goto L17_;

D10_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // r14 = dyn format4(13.7)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format4_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L18() else D11()
  // L18()
  goto L18_;

D11_:;
  // deopt 34 [r14]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // format5 = ldf format
  Rsh_Fir_reg_format5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L19() else D12()
  // L19()
  goto L19_;

D12_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // r15 = dyn format5[, nsmall](13.7, 3.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format5_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L20() else D13()
  // L20()
  goto L20_;

D13_:;
  // deopt 40 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // format6 = ldf format
  Rsh_Fir_reg_format6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L21() else D14()
  // L21()
  goto L21_;

D14_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p5 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   c1 = ldf c in base;
  //   r18 = dyn c1(6.0, 13.1);
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base1(6.0, 13.1);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r20 = dyn format6[, digits](p5, 2.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format6_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L22() else D15()
  // L22()
  goto L22_;

D15_:;
  // deopt 46 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // format7 = ldf format
  Rsh_Fir_reg_format7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L23() else D16()
  // L23()
  goto L23_;

D16_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p6 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   c2 = ldf c in base;
  //   r23 = dyn c2(6.0, 13.1);
  //   goto L0(r23);
  // L2():
  //   r21 = dyn base2(6.0, 13.1);
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r25 = dyn format7[, digits, nsmall](p6, 2.0, 1.0)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format7_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L24() else D17()
  // L24()
  goto L24_;

D17_:;
  // deopt 54 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L24_:;
  // format8 = ldf format
  Rsh_Fir_reg_format8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L25() else D18()
  // L25()
  goto L25_;

D18_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p7 = prom<V +>{
  //   return 2.147483647E9;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r27 = dyn format8(p7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format8_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L26() else D19()
  // L26()
  goto L26_;

D19_:;
  // deopt 58 [r27]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L26_:;
  // format9 = ldf format
  Rsh_Fir_reg_format9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L27() else D20()
  // L27()
  goto L27_;

D20_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p8 = prom<V +>{
  //   return 2.147483647E9;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r29 = dyn format9[, scientific](p8, TRUE)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format9_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L28() else D21()
  // L28()
  goto L28_;

D21_:;
  // deopt 64 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L28_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard3 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L0_:;
  // st x = r31
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L32() else D23()
  // L32()
  goto L32_;

L29_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r32 = dyn c3(100000.0, 1000.0, 10.0, 0.1, 0.001, 0.123)
  SEXP Rsh_Fir_array_args23[6];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args23[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args23[5] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names17[6];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_array_arg_names17[5] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 6, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L31() else D22()
  // L31()
  goto L31_;

L30_:;
  // r30 = dyn base3(100000.0, 1000.0, 10.0, 0.1, 0.001, 0.123)
  SEXP Rsh_Fir_array_args24[6];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args24[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args24[5] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names18[6];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_array_arg_names18[5] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 6, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L0_;

D22_:;
  // deopt 74 [r32]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L0_;

L32_:;
  // p12 = prom<V +>{
  //   sapply = ldf sapply;
  //   p10 = prom<V +>{
  //     setNames = ldf setNames;
  //     p9 = prom<V +>{
  //       return <int -4, -3, -2, -1, 0, 1>;
  //     };
  //     r34 = dyn setNames(<missing>, p9);
  //     return r34;
  //   };
  //   p11 = prom<V +>{
  //     r36 = clos inner880221525;
  //     return r36;
  //   };
  //   r38 = dyn sapply(p10, p11);
  //   return r38;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r40 = dyn t(p12)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L33() else D24()
  // L33()
  goto L33_;

D24_:;
  // deopt 79 [r40]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // sym4 = ldf list
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base4 = ldf list in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard4 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L1_:;
  // st z = r42
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // format10 = ldf format
  Rsh_Fir_reg_format10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L51() else D29()
  // L51()
  goto L51_;

L34_:;
  // letters = ld letters
  Rsh_Fir_reg_letters = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L36() else D25()
  // L36()
  goto L36_;

L35_:;
  // r41 = dyn base4[a, b, c, d, q, e](<lang `[`(letters, `:`(1.0, 3.0))>, <lang `^`(`(`(`+`(`-`(pi), 0.0i)), `(`(`/`(`(`(`:`(`-`(2.0), 2.0)), 2.0)))>, <lang c(1.0, 10.0, 100.0, 1000.0)>, <lang c("a", "longer", "character", "string")>, <lang quote(`+`(a, b))>, <lang expression(`+`(1.0, x))>)
  SEXP Rsh_Fir_array_args29[6];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args29[4] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args29[5] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names22[6];
  Rsh_Fir_array_arg_names22[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names22[3] = Rsh_const(CCP, 47);
  Rsh_Fir_array_arg_names22[4] = Rsh_const(CCP, 48);
  Rsh_Fir_array_arg_names22[5] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 6, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L1(r41)
  // L1(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L1_;

D25_:;
  // deopt 82 [letters]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_letters;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 121 []
  Rsh_Fir_deopt(121, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // letters1 = force? letters
  Rsh_Fir_reg_letters1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_letters);
  // checkMissing(letters1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_letters1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(letters1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_letters1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args31);
  // if c4 then L37() else L38(letters1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L37()
    goto L37_;
  } else {
  // L38(letters1)
    Rsh_Fir_reg_letters3_ = Rsh_Fir_reg_letters1_;
    goto L38_;
  }

L51_:;
  // p13 = prom<V +>{
  //   z = ld z;
  //   z1 = force? z;
  //   checkMissing(z1);
  //   return z1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r58 = dyn format10[, digits](p13, 2.0)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format10_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L52() else D30()
  // L52()
  goto L52_;

D30_:;
  // deopt 125 [r58]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L2_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard5 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L37_:;
  // dr = tryDispatchBuiltin.1("[", letters1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_letters1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L39() else L38(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L39()
    goto L39_;
  } else {
  // L38(dr)
    Rsh_Fir_reg_letters3_ = Rsh_Fir_reg_dr;
    goto L38_;
  }

L38_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r43 = dyn __(letters3, <int 1, 2, 3>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_letters3_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L2(r43)
  // L2(r43)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r43_;
  goto L2_;

L52_:;
  // st f1 = r58
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // format11 = ldf format
  Rsh_Fir_reg_format11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L53() else D31()
  // L53()
  goto L53_;

D31_:;
  // deopt 128 []
  Rsh_Fir_deopt(128, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard6 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L39_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

L40_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r46 = dyn c5(1.0, 10.0, 100.0, 1000.0)
  SEXP Rsh_Fir_array_args40[4];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 4, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L42() else D26()
  // L42()
  goto L42_;

L41_:;
  // r44 = dyn base5(1.0, 10.0, 100.0, 1000.0)
  SEXP Rsh_Fir_array_args41[4];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 4, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L3(r44)
  // L3(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L3_;

L53_:;
  // p14 = prom<V +>{
  //   z2 = ld z;
  //   z3 = force? z2;
  //   checkMissing(z3);
  //   return z3;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r60 = dyn format11[, digits, justify, trim](p14, 2.0, "left", FALSE)
  SEXP Rsh_Fir_array_args43[4];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args43[3] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names27[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names27[3] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format11_, 4, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L54() else D32()
  // L54()
  goto L54_;

D26_:;
  // deopt 98 [r46]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 136 [r60]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L4_:;
  // sym7 = ldf quote
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base7 = ldf quote in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard7 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L42_:;
  // goto L3(r46)
  // L3(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L3_;

L43_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r49 = dyn c6("a", "longer", "character", "string")
  SEXP Rsh_Fir_array_args45[4];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args45[3] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names28[4];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 4, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L45() else D27()
  // L45()
  goto L45_;

L44_:;
  // r47 = dyn base6("a", "longer", "character", "string")
  SEXP Rsh_Fir_array_args46[4];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args46[3] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 4, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L4(r47)
  // L4(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L4_;

L54_:;
  // st f2 = r60
  Rsh_Fir_store(Rsh_const(CCP, 60), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // f1 = ld f1
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L55() else D33()
  // L55()
  goto L55_;

D27_:;
  // deopt 107 [r49]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 138 [f1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_f1_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L5_:;
  // sym8 = ldf expression
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base8 = ldf expression in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard8 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L45_:;
  // goto L4(r49)
  // L4(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L4_;

L46_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r52 = dyn quote(<lang `+`(a, b)>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L5(r52)
  // L5(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L5_;

L47_:;
  // r50 = dyn base7(<lang `+`(a, b)>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L5(r50)
  // L5(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L5_;

L55_:;
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // f3 = ld f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // check L56() else D34()
  // L56()
  goto L56_;

D34_:;
  // deopt 139 [f2, f3]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_f2_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_f3_;
  Rsh_Fir_deopt(139, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L6_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r56 = dyn list(dx1, <cplx -0.3183098861837907-3.8981718325193755E-17i, 3.4546648380201897E-17-0.5641895835477563i, 1.0+0.0i, 1.08531496757392E-16+1.7724538509055159i, -3.141592653589793+3.8473413874435795E-16i>, r45, r48, r51, r54)
  SEXP Rsh_Fir_array_args51[6];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args51[3] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args51[4] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args51[5] = Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_array_arg_names32[6];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_array_arg_names32[3] = R_MissingArg;
  Rsh_Fir_array_arg_names32[4] = R_MissingArg;
  Rsh_Fir_array_arg_names32[5] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 6, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L50() else D28()
  // L50()
  goto L50_;

L48_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r55 = dyn expression(<lang `+`(1.0, x)>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L6(r55)
  // L6(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L6_;

L49_:;
  // r53 = dyn base8(<lang `+`(1.0, x)>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L6(r53)
  // L6(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L6_;

L56_:;
  // f4 = force? f3
  Rsh_Fir_reg_f4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f3_);
  // checkMissing(f4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_f4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // `==`(f2, f4)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_f2_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_f4_;
  (void)(Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args55));
  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L57() else D35()
  // L57()
  goto L57_;

D28_:;
  // deopt 118 [r56]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 143 []
  Rsh_Fir_deopt(143, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L1(r56)
  // L1(r56)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r56_;
  goto L1_;

L57_:;
  // r62 = dyn __1("methods", "getClassDef")
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L58() else D36()
  // L58()
  goto L58_;

D36_:;
  // deopt 146 [r62]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L58_:;
  // checkFun.0(r62)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r62_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args57));
  // r63 = r62 as cls
  Rsh_Fir_reg_r63_ = Rsh_Fir_cast(Rsh_Fir_reg_r62_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r64 = dyn r63("standardGeneric")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r63_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L59() else D37()
  // L59()
  goto L59_;

D37_:;
  // deopt 149 [r64]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L59_:;
  // st cc = r64
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // format12 = ldf format
  Rsh_Fir_reg_format12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L60() else D38()
  // L60()
  goto L60_;

D38_:;
  // deopt 152 []
  Rsh_Fir_deopt(152, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p15 = prom<V +>{
  //   cc = ld cc;
  //   cc1 = force? cc;
  //   checkMissing(cc1);
  //   return cc1;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r66 = dyn format12(p15)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format12_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L61() else D39()
  // L61()
  goto L61_;

D39_:;
  // deopt 154 [r66]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L61_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r66
  return Rsh_Fir_reg_r66_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 1);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 1);
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r7 = dyn c("aaaaa", "b")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base("aaaaa", "b")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz;
  SEXP Rsh_Fir_reg_zz1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz = ld zz
  Rsh_Fir_reg_zz = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // zz1 = force? zz
  Rsh_Fir_reg_zz1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz);
  // checkMissing(zz1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_zz1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return zz1
  return Rsh_Fir_reg_zz1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz2_;
  SEXP Rsh_Fir_reg_zz3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz2 = ld zz
  Rsh_Fir_reg_zz2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // zz3 = force? zz2
  Rsh_Fir_reg_zz3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz2_);
  // checkMissing(zz3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_zz3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return zz3
  return Rsh_Fir_reg_zz3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r17
  return Rsh_Fir_reg_r17_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r18 = dyn c1(6.0, 13.1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base1(6.0, 13.1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r23 = dyn c2(6.0, 13.1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // r21 = dyn base2(6.0, 13.1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 2.147483647E9
  return Rsh_const(CCP, 22);
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 2.147483647E9
  return Rsh_const(CCP, 22);
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sapply;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // p10 = prom<V +>{
  //   setNames = ldf setNames;
  //   p9 = prom<V +>{
  //     return <int -4, -3, -2, -1, 0, 1>;
  //   };
  //   r34 = dyn setNames(<missing>, p9);
  //   return r34;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   r36 = clos inner880221525;
  //   return r36;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r38 = dyn sapply(p10, p11)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names20, CCP, RHO);
  // return r38
  return Rsh_Fir_reg_r38_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_setNames;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // setNames = ldf setNames
  Rsh_Fir_reg_setNames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // p9 = prom<V +>{
  //   return <int -4, -3, -2, -1, 0, 1>;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r34 = dyn setNames(<missing>, p9)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setNames, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int -4, -3, -2, -1, 0, 1>
  return Rsh_const(CCP, 34);
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r36 = clos inner880221525
  Rsh_Fir_reg_r36_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner880221525_, RHO, CCP);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return z1
  return Rsh_Fir_reg_z1_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_reg_z3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return z3
  return Rsh_Fir_reg_z3_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cc;
  SEXP Rsh_Fir_reg_cc1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cc = ld cc
  Rsh_Fir_reg_cc = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // cc1 = force? cc
  Rsh_Fir_reg_cc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cc);
  // checkMissing(cc1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_cc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return cc1
  return Rsh_Fir_reg_cc1_;
}
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
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
  return Rsh_Fir_reg_r1_;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r2 = dyn UseMethod("format")
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("format")
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner880221525_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner880221525 dynamic dispatch ([sci])

  return Rsh_Fir_user_version_inner880221525_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner880221525_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner880221525 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner880221525/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_sci;
  SEXP Rsh_Fir_reg_sapply1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r3_;

  // Bind parameters
  Rsh_Fir_reg_sci = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st sci = sci
  Rsh_Fir_store(Rsh_const(CCP, 73), Rsh_Fir_reg_sci, RHO);
  (void)(Rsh_Fir_reg_sci);
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner880221525_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   format = ld format;
  //   format1 = force? format;
  //   checkMissing(format1);
  //   return format1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner880221525_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sci1 = ld sci;
  //   sci2 = force? sci1;
  //   checkMissing(sci2);
  //   return sci2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner880221525_2, 0, NULL, CCP, RHO);
  // r3 = dyn sapply[, , scientific](p, p1, p2)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply1, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner880221525_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner880221525/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x1 = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_inner880221525_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_format1;
  SEXP Rsh_Fir_reg_format1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner880221525/0: expected 0, got %d", NCAPTURES);

  // format = ld format
  Rsh_Fir_reg_format1 = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // format1 = force? format
  Rsh_Fir_reg_format1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_format1);
  // checkMissing(format1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_format1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return format1
  return Rsh_Fir_reg_format1_1;
}
SEXP Rsh_Fir_user_promise_inner880221525_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sci1_;
  SEXP Rsh_Fir_reg_sci2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner880221525/0: expected 0, got %d", NCAPTURES);

  // sci1 = ld sci
  Rsh_Fir_reg_sci1_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // sci2 = force? sci1
  Rsh_Fir_reg_sci2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sci1_);
  // checkMissing(sci2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sci2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return sci2
  return Rsh_Fir_reg_sci2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
