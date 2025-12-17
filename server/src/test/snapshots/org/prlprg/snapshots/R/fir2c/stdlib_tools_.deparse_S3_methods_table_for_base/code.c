#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2708337952
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st `.deparse_S3_methods_table_for_base` = r
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
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_Sys_getlocale;  // Sys_getlocale
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg__make_S3_methods_table_for_base;  // _make_S3_methods_table_for_base
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_mdb;  // mdb
  SEXP Rsh_Fir_reg_mdb1_;  // mdb1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_mdb2_;  // mdb2
  SEXP Rsh_Fir_reg_mdb3_;  // mdb3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_mdb6_;  // mdb6
  SEXP Rsh_Fir_reg_mdb7_;  // mdb7
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_rep_int1_;  // rep_int1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r33_;  // r33

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf identical in base
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
  // r4 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L9() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // _make_S3_methods_table_for_base = ldf `.make_S3_methods_table_for_base`
  Rsh_Fir_reg__make_S3_methods_table_for_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;

L4_:;
  // Sys_getlocale = ldf `Sys.getlocale`
  Rsh_Fir_reg_Sys_getlocale = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base("C", <lang Sys.getlocale("LC_COLLATE")>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r2 = dyn Sys_getlocale("LC_COLLATE")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getlocale, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn identical("C", r2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args5[9];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[5] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[6] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[7] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[8] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[9];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_array_arg_names2[8] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 15 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L9_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r5 = dyn warning("*not* using 'C' for LC_COLLATE locale")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

D4_:;
  // deopt 20 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L2()
  // L2()
  goto L2_;

D5_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // r7 = dyn _make_S3_methods_table_for_base()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__make_S3_methods_table_for_base, 0, NULL, NULL, CCP, RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 25 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // st mdb = r7
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   mdb = ld mdb;
  //   mdb1 = force? mdb;
  //   checkMissing(mdb1);
  //   return mdb1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // r9 = dyn nrow(p)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 30 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // st n = r9
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

L18_:;
  // r10 = dyn base1(<lang sprintf("%s\"%s\", \"%s\"%s", c("matrix(c(", rep.int("         ", `-`(n, 1))), `[`(mdb, , 1), `[`(mdb, , 2), c(rep.int(",", `-`(n, 1)), "),"))>, "       ncol = 2L, byrow = TRUE,", "       dimnames = list(NULL, c(\"generic\", \"class\")))")
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L3_;

D9_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p1 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r13):
  //   return r13;
  // L2():
  //   sym3 = ldf `rep.int`;
  //   base3 = ldf `rep.int` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L4() else L5();
  // L3():
  //   r12 = dyn base2("matrix(c(", <lang rep.int("         ", `-`(n, 1))>);
  //   goto L0(r12);
  // L1(r15):
  //   c1 = ldf c in base;
  //   r18 = dyn c1("matrix(c(", r15);
  //   goto L0(r18);
  // L4():
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   r16 = `-`(n1, 1);
  //   rep_int = ldf `rep.int` in base;
  //   r17 = dyn rep_int("         ", r16);
  //   goto L1(r17);
  // L5():
  //   r14 = dyn base3("         ", <lang `-`(n, 1)>);
  //   goto L1(r14);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_1, CCP, RHO);
  // p2 = prom<V +>{
  //   mdb2 = ld mdb;
  //   mdb3 = force? mdb2;
  //   checkMissing(mdb3);
  //   c2 = `is.object`(mdb3);
  //   if c2 then L1() else L2();
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", mdb3);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2();
  // L2():
  //   __ = ldf `[` in base;
  //   r20 = dyn __(mdb3, <missing>, 1);
  //   goto L0(r20);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_2, CCP, RHO);
  // p3 = prom<V +>{
  //   mdb6 = ld mdb;
  //   mdb7 = force? mdb6;
  //   checkMissing(mdb7);
  //   c3 = `is.object`(mdb7);
  //   if c3 then L1() else L2();
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", mdb7);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2();
  // L2():
  //   __1 = ldf `[` in base;
  //   r22 = dyn __1(mdb7, <missing>, 2);
  //   goto L0(r22);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L2() else L3();
  // L0(r25):
  //   return r25;
  // L2():
  //   sym5 = ldf `rep.int`;
  //   base5 = ldf `rep.int` in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L4() else L5();
  // L3():
  //   r24 = dyn base4(<lang rep.int(",", `-`(n, 1))>, "),");
  //   goto L0(r24);
  // L1(r27):
  //   c4 = ldf c in base;
  //   r30 = dyn c4(r27, "),");
  //   goto L0(r30);
  // L4():
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   r28 = `-`(n3, 1);
  //   rep_int1 = ldf `rep.int` in base;
  //   r29 = dyn rep_int1(",", r28);
  //   goto L1(r29);
  // L5():
  //   r26 = dyn base5(",", <lang `-`(n, 1)>);
  //   goto L1(r26);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_4, CCP, RHO);
  // r32 = dyn sprintf("%s\"%s\", \"%s\"%s", p1, p2, p3, p4)
  SEXP Rsh_Fir_array_args39[5];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args39[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args39[4] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[5];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 5, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L20() else D10()
  // L20()
  goto L20_;

D10_:;
  // deopt 41 [r32]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r33 = dyn c5(r32, "       ncol = 2L, byrow = TRUE,", "       dimnames = list(NULL, c(\"generic\", \"class\")))")
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L21() else D11()
  // L21()
  goto L21_;

D11_:;
  // deopt 45 [r33]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L3(r33)
  // L3(r33)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r33_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // mdb = ld mdb
  Rsh_Fir_reg_mdb = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // mdb1 = force? mdb
  Rsh_Fir_reg_mdb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdb);
  // checkMissing(mdb1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_mdb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return mdb1
  return Rsh_Fir_reg_mdb1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r18 = dyn c1("matrix(c(", r15)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // sym3 = ldf `rep.int`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf `rep.int` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard3 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r12 = dyn base2("matrix(c(", <lang rep.int("         ", `-`(n, 1))>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;

L4_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r16 = `-`(n1, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r17 = dyn rep_int("         ", r16)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r17_;
  goto L1_;

L5_:;
  // r14 = dyn base3("         ", <lang `-`(n, 1)>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(r14)
  // L1(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO) {
  // mdb2 = ld mdb
  Rsh_Fir_reg_mdb2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // mdb3 = force? mdb2
  Rsh_Fir_reg_mdb3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdb2_);
  // checkMissing(mdb3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_mdb3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(mdb3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_mdb3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", mdb3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_mdb3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r20 = dyn __(mdb3, <missing>, 1)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_mdb3_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_3(SEXP CCP, SEXP RHO) {
  // mdb6 = ld mdb
  Rsh_Fir_reg_mdb6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // mdb7 = force? mdb6
  Rsh_Fir_reg_mdb7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdb6_);
  // checkMissing(mdb7)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_mdb7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(mdb7)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_mdb7_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", mdb7)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_mdb7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r22 = dyn __1(mdb7, <missing>, 2)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_mdb7_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_4(SEXP CCP, SEXP RHO) {
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard4 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r30 = dyn c4(r27, "),")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r30_;
  goto L0_;

L2_:;
  // sym5 = ldf `rep.int`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf `rep.int` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard5 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r24 = dyn base4(<lang rep.int(",", `-`(n, 1))>, "),")
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L0_;

L4_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // r28 = `-`(n3, 1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r29 = dyn rep_int1(",", r28)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(r29)
  // L1(r29)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r29_;
  goto L1_;

L5_:;
  // r26 = dyn base5(",", <lang `-`(n, 1)>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(r26)
  // L1(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
