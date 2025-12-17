#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_rivers;  // rivers
  SEXP Rsh_Fir_reg_rivers1_;  // rivers1
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_type_convert;  // type_convert
  SEXP Rsh_Fir_reg_rivers2_;  // rivers2
  SEXP Rsh_Fir_reg_rivers3_;  // rivers3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_class1_;  // class1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_type_convert1_;  // type_convert1
  SEXP Rsh_Fir_reg_mtcars;  // mtcars
  SEXP Rsh_Fir_reg_mtcars1_;  // mtcars1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_str;  // str
  SEXP Rsh_Fir_reg_mtcars2_;  // mtcars2
  SEXP Rsh_Fir_reg_mtcars3_;  // mtcars3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_str1_;  // str1
  SEXP Rsh_Fir_reg_auto;  // auto
  SEXP Rsh_Fir_reg_auto1_;  // auto1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_type_convert2_;  // type_convert2
  SEXP Rsh_Fir_reg_WorldPhones;  // WorldPhones
  SEXP Rsh_Fir_reg_WorldPhones1_;  // WorldPhones1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_storage_mode;  // storage_mode
  SEXP Rsh_Fir_reg_WorldPhones2_;  // WorldPhones2
  SEXP Rsh_Fir_reg_WorldPhones3_;  // WorldPhones3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_storage_mode1_;  // storage_mode1
  SEXP Rsh_Fir_reg_phones;  // phones
  SEXP Rsh_Fir_reg_phones1_;  // phones1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_factor;  // factor
  SEXP Rsh_Fir_reg_chr;  // chr
  SEXP Rsh_Fir_reg_chr1_;  // chr1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_type_convert3_;  // type_convert3
  SEXP Rsh_Fir_reg_chr2_;  // chr2
  SEXP Rsh_Fir_reg_chr3_;  // chr3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_type_convert4_;  // type_convert4
  SEXP Rsh_Fir_reg_fac;  // fac
  SEXP Rsh_Fir_reg_fac1_;  // fac1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_type_convert5_;  // type_convert5
  SEXP Rsh_Fir_reg_chr4_;  // chr4
  SEXP Rsh_Fir_reg_chr5_;  // chr5
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_type_convert6_;  // type_convert6
  SEXP Rsh_Fir_reg_fac2_;  // fac2
  SEXP Rsh_Fir_reg_fac3_;  // fac3
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_type_convert7_;  // type_convert7
  SEXP Rsh_Fir_reg_ch2_;  // ch2
  SEXP Rsh_Fir_reg_ch3_;  // ch3
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_type_convert8_;  // type_convert8
  SEXP Rsh_Fir_reg_ch4_;  // ch4
  SEXP Rsh_Fir_reg_ch5_;  // ch5
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r40_;  // r40

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st `type.convert` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf class
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf class in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // type_convert = ldf `type.convert`
  Rsh_Fir_reg_type_convert = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L1_:;
  // type_convert1 = ldf `type.convert`
  Rsh_Fir_reg_type_convert1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

L2_:;
  // st chr = r22
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard3 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L3_:;
  // st ch2 = r25
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L32() else D20()
  // L32()
  goto L32_;

L4_:;
  // rivers = ld rivers
  Rsh_Fir_reg_rivers = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(<sym rivers>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 [rivers]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_rivers;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // rivers1 = force? rivers
  Rsh_Fir_reg_rivers1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rivers);
  // checkMissing(rivers1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_rivers1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn class(rivers1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_rivers1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0()
  // L0()
  goto L0_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   rivers2 = ld rivers;
  //   rivers3 = force? rivers2;
  //   checkMissing(rivers3);
  //   return rivers3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, CCP, RHO);
  // r5 = dyn type_convert[, `as.is`](p, TRUE)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_type_convert, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 14 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // st x = r5
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf class
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf class in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

L11_:;
  // r6 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D4_:;
  // deopt 18 [x]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // class1 = ldf class in base
  Rsh_Fir_reg_class1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r8 = dyn class1(x1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 21 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L1()
  // L1()
  goto L1_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p1 = prom<V +>{
  //   mtcars = ld mtcars;
  //   mtcars1 = force? mtcars;
  //   checkMissing(mtcars1);
  //   return mtcars1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, CCP, RHO);
  // r10 = dyn type_convert1[, `as.is`](p1, TRUE)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_type_convert1_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 27 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // st auto = r10
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // str = ldf str
  Rsh_Fir_reg_str = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p2 = prom<V +>{
  //   mtcars2 = ld mtcars;
  //   mtcars3 = force? mtcars2;
  //   checkMissing(mtcars3);
  //   return mtcars3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, CCP, RHO);
  // r12 = dyn str(p2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 32 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // str1 = ldf str
  Rsh_Fir_reg_str1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

D10_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p3 = prom<V +>{
  //   auto = ld auto;
  //   auto1 = force? auto;
  //   checkMissing(auto1);
  //   return auto1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, CCP, RHO);
  // r14 = dyn str1(p3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L19() else D11()
  // L19()
  goto L19_;

D11_:;
  // deopt 36 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // type_convert2 = ldf `type.convert`
  Rsh_Fir_reg_type_convert2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D12()
  // L20()
  goto L20_;

D12_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p4 = prom<V +>{
  //   WorldPhones = ld WorldPhones;
  //   WorldPhones1 = force? WorldPhones;
  //   checkMissing(WorldPhones1);
  //   return WorldPhones1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, CCP, RHO);
  // r16 = dyn type_convert2[, `as.is`](p4, TRUE)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_type_convert2_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L21() else D13()
  // L21()
  goto L21_;

D13_:;
  // deopt 42 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // st phones = r16
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // storage_mode = ldf `storage.mode`
  Rsh_Fir_reg_storage_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L22() else D14()
  // L22()
  goto L22_;

D14_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p5 = prom<V +>{
  //   WorldPhones2 = ld WorldPhones;
  //   WorldPhones3 = force? WorldPhones2;
  //   checkMissing(WorldPhones3);
  //   return WorldPhones3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, CCP, RHO);
  // r18 = dyn storage_mode(p5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L23() else D15()
  // L23()
  goto L23_;

D15_:;
  // deopt 47 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // storage_mode1 = ldf `storage.mode`
  Rsh_Fir_reg_storage_mode1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L24() else D16()
  // L24()
  goto L24_;

D16_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p6 = prom<V +>{
  //   phones = ld phones;
  //   phones1 = force? phones;
  //   checkMissing(phones1);
  //   return phones1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, CCP, RHO);
  // r20 = dyn storage_mode1(p6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L25() else D17()
  // L25()
  goto L25_;

D17_:;
  // deopt 51 [r20]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L25_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard2 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r23 = dyn c("A", "B", "B", "A")
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L28() else D18()
  // L28()
  goto L28_;

L27_:;
  // r21 = dyn base2("A", "B", "B", "A")
  SEXP Rsh_Fir_array_args25[4];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args25[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 4, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r21)
  // L2(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L2_;

D18_:;
  // deopt 59 [r23]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L2(r23)
  // L2(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L2_;

L29_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r26 = dyn c1("F", "F", "NA", "F")
  SEXP Rsh_Fir_array_args26[4];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 4, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L31() else D19()
  // L31()
  goto L31_;

L30_:;
  // r24 = dyn base3("F", "F", "NA", "F")
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L3(r24)
  // L3(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L3_;

D19_:;
  // deopt 68 [r26]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L3(r26)
  // L3(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L3_;

D20_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p7 = prom<V +>{
  //   chr = ld chr;
  //   chr1 = force? chr;
  //   checkMissing(chr1);
  //   return chr1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, CCP, RHO);
  // r28 = dyn factor(p7)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L33() else D21()
  // L33()
  goto L33_;

D21_:;
  // deopt 73 [r28]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L33_:;
  // st fac = r28
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // type_convert3 = ldf `type.convert`
  Rsh_Fir_reg_type_convert3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L34() else D22()
  // L34()
  goto L34_;

D22_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p8 = prom<V +>{
  //   chr2 = ld chr;
  //   chr3 = force? chr2;
  //   checkMissing(chr3);
  //   return chr3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, CCP, RHO);
  // r30 = dyn type_convert3[, `as.is`](p8, FALSE)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_type_convert3_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L35() else D23()
  // L35()
  goto L35_;

D23_:;
  // deopt 80 [r30]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L35_:;
  // type_convert4 = ldf `type.convert`
  Rsh_Fir_reg_type_convert4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L36() else D24()
  // L36()
  goto L36_;

D24_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p9 = prom<V +>{
  //   fac = ld fac;
  //   fac1 = force? fac;
  //   checkMissing(fac1);
  //   return fac1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, CCP, RHO);
  // r32 = dyn type_convert4[, `as.is`](p9, FALSE)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_type_convert4_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L37() else D25()
  // L37()
  goto L37_;

D25_:;
  // deopt 86 [r32]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // type_convert5 = ldf `type.convert`
  Rsh_Fir_reg_type_convert5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L38() else D26()
  // L38()
  goto L38_;

D26_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p10 = prom<V +>{
  //   chr4 = ld chr;
  //   chr5 = force? chr4;
  //   checkMissing(chr5);
  //   return chr5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, CCP, RHO);
  // r34 = dyn type_convert5[, `as.is`](p10, TRUE)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_type_convert5_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L39() else D27()
  // L39()
  goto L39_;

D27_:;
  // deopt 92 [r34]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L39_:;
  // type_convert6 = ldf `type.convert`
  Rsh_Fir_reg_type_convert6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L40() else D28()
  // L40()
  goto L40_;

D28_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p11 = prom<V +>{
  //   fac2 = ld fac;
  //   fac3 = force? fac2;
  //   checkMissing(fac3);
  //   return fac3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, CCP, RHO);
  // r36 = dyn type_convert6[, `as.is`](p11, TRUE)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_type_convert6_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L41() else D29()
  // L41()
  goto L41_;

D29_:;
  // deopt 98 [r36]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L41_:;
  // type_convert7 = ldf `type.convert`
  Rsh_Fir_reg_type_convert7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L42() else D30()
  // L42()
  goto L42_;

D30_:;
  // deopt 100 []
  Rsh_Fir_deopt(100, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p12 = prom<V +>{
  //   ch2 = ld ch2;
  //   ch3 = force? ch2;
  //   checkMissing(ch3);
  //   return ch3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, CCP, RHO);
  // r38 = dyn type_convert7[, `as.is`](p12, TRUE)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_type_convert7_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L43() else D31()
  // L43()
  goto L43_;

D31_:;
  // deopt 104 [r38]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L43_:;
  // type_convert8 = ldf `type.convert`
  Rsh_Fir_reg_type_convert8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L44() else D32()
  // L44()
  goto L44_;

D32_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p13 = prom<V +>{
  //   ch4 = ld ch2;
  //   ch5 = force? ch4;
  //   checkMissing(ch5);
  //   return ch5;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, CCP, RHO);
  // r40 = dyn type_convert8[, `as.is`, tryLogical](p13, TRUE, FALSE)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_type_convert8_, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L45() else D33()
  // L45()
  goto L45_;

D33_:;
  // deopt 112 [r40]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L45_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO) {
  // rivers2 = ld rivers
  Rsh_Fir_reg_rivers2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // rivers3 = force? rivers2
  Rsh_Fir_reg_rivers3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rivers2_);
  // checkMissing(rivers3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_rivers3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return rivers3
  return Rsh_Fir_reg_rivers3_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO) {
  // mtcars = ld mtcars
  Rsh_Fir_reg_mtcars = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // mtcars1 = force? mtcars
  Rsh_Fir_reg_mtcars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars);
  // checkMissing(mtcars1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_mtcars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return mtcars1
  return Rsh_Fir_reg_mtcars1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO) {
  // mtcars2 = ld mtcars
  Rsh_Fir_reg_mtcars2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // mtcars3 = force? mtcars2
  Rsh_Fir_reg_mtcars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtcars2_);
  // checkMissing(mtcars3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_mtcars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return mtcars3
  return Rsh_Fir_reg_mtcars3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO) {
  // auto = ld auto
  Rsh_Fir_reg_auto = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // auto1 = force? auto
  Rsh_Fir_reg_auto1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_auto);
  // checkMissing(auto1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_auto1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return auto1
  return Rsh_Fir_reg_auto1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO) {
  // WorldPhones = ld WorldPhones
  Rsh_Fir_reg_WorldPhones = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // WorldPhones1 = force? WorldPhones
  Rsh_Fir_reg_WorldPhones1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_WorldPhones);
  // checkMissing(WorldPhones1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_WorldPhones1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return WorldPhones1
  return Rsh_Fir_reg_WorldPhones1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO) {
  // WorldPhones2 = ld WorldPhones
  Rsh_Fir_reg_WorldPhones2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // WorldPhones3 = force? WorldPhones2
  Rsh_Fir_reg_WorldPhones3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_WorldPhones2_);
  // checkMissing(WorldPhones3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_WorldPhones3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return WorldPhones3
  return Rsh_Fir_reg_WorldPhones3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO) {
  // phones = ld phones
  Rsh_Fir_reg_phones = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // phones1 = force? phones
  Rsh_Fir_reg_phones1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_phones);
  // checkMissing(phones1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_phones1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return phones1
  return Rsh_Fir_reg_phones1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO) {
  // chr = ld chr
  Rsh_Fir_reg_chr = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // chr1 = force? chr
  Rsh_Fir_reg_chr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_chr);
  // checkMissing(chr1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_chr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return chr1
  return Rsh_Fir_reg_chr1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO) {
  // chr2 = ld chr
  Rsh_Fir_reg_chr2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // chr3 = force? chr2
  Rsh_Fir_reg_chr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_chr2_);
  // checkMissing(chr3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_chr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return chr3
  return Rsh_Fir_reg_chr3_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO) {
  // fac = ld fac
  Rsh_Fir_reg_fac = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // fac1 = force? fac
  Rsh_Fir_reg_fac1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fac);
  // checkMissing(fac1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_fac1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return fac1
  return Rsh_Fir_reg_fac1_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO) {
  // chr4 = ld chr
  Rsh_Fir_reg_chr4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // chr5 = force? chr4
  Rsh_Fir_reg_chr5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_chr4_);
  // checkMissing(chr5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_chr5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return chr5
  return Rsh_Fir_reg_chr5_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO) {
  // fac2 = ld fac
  Rsh_Fir_reg_fac2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // fac3 = force? fac2
  Rsh_Fir_reg_fac3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fac2_);
  // checkMissing(fac3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_fac3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return fac3
  return Rsh_Fir_reg_fac3_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO) {
  // ch2 = ld ch2
  Rsh_Fir_reg_ch2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // ch3 = force? ch2
  Rsh_Fir_reg_ch3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ch2_);
  // checkMissing(ch3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ch3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return ch3
  return Rsh_Fir_reg_ch3_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO) {
  // ch4 = ld ch2
  Rsh_Fir_reg_ch4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // ch5 = force? ch4
  Rsh_Fir_reg_ch5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ch4_);
  // checkMissing(ch5)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ch5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return ch5
  return Rsh_Fir_reg_ch5_;
}
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_UseMethod;  // UseMethod
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r2 = dyn UseMethod("type.convert")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("type.convert")
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
