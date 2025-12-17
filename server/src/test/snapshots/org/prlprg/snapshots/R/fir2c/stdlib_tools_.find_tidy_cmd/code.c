#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1334922043_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1334922043_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1334922043_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1334922043_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner1334922043
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1334922043_, RHO, CCP);
  // st `.find_tidy_cmd` = r
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
SEXP Rsh_Fir_user_function_inner1334922043_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1334922043 dynamic dispatch ([Tidy])

  return Rsh_Fir_user_version_inner1334922043_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1334922043_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1334922043 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1334922043/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_Tidy;  // Tidy
  SEXP Rsh_Fir_reg_Tidy_isMissing;  // Tidy_isMissing
  SEXP Rsh_Fir_reg_Tidy_orDefault;  // Tidy_orDefault
  SEXP Rsh_Fir_reg_Sys_getenv;  // Sys_getenv
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_Sys_which;  // Sys_which
  SEXP Rsh_Fir_reg_Tidy1_;  // Tidy1
  SEXP Rsh_Fir_reg_Tidy2_;  // Tidy2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_OK;  // OK
  SEXP Rsh_Fir_reg_OK1_;  // OK1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_system2_;  // system2
  SEXP Rsh_Fir_reg_Tidy3_;  // Tidy3
  SEXP Rsh_Fir_reg_Tidy4_;  // Tidy4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_regexec;  // regexec
  SEXP Rsh_Fir_reg_ver;  // ver
  SEXP Rsh_Fir_reg_ver1_;  // ver1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_regmatches;  // regmatches
  SEXP Rsh_Fir_reg_ver2_;  // ver2
  SEXP Rsh_Fir_reg_ver3_;  // ver3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_mat;  // mat
  SEXP Rsh_Fir_reg_mat1_;  // mat1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_ver4_;  // ver4
  SEXP Rsh_Fir_reg_ver5_;  // ver5
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_OK2_;  // OK2
  SEXP Rsh_Fir_reg_OK3_;  // OK3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_numeric_version;  // numeric_version
  SEXP Rsh_Fir_reg_ver6_;  // ver6
  SEXP Rsh_Fir_reg_ver7_;  // ver7
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_req;  // req
  SEXP Rsh_Fir_reg_req1_;  // req1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_OK4_;  // OK4
  SEXP Rsh_Fir_reg_OK5_;  // OK5
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_Tidy5_;  // Tidy5
  SEXP Rsh_Fir_reg_Tidy6_;  // Tidy6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_req2_;  // req2
  SEXP Rsh_Fir_reg_req3_;  // req3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_ver8_;  // ver8
  SEXP Rsh_Fir_reg_ver9_;  // ver9
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sprintf1_;  // sprintf1
  SEXP Rsh_Fir_reg_Tidy7_;  // Tidy7
  SEXP Rsh_Fir_reg_Tidy8_;  // Tidy8
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_sprintf2_;  // sprintf2
  SEXP Rsh_Fir_reg_Tidy9_;  // Tidy9
  SEXP Rsh_Fir_reg_Tidy10_;  // Tidy10
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_msg;  // msg
  SEXP Rsh_Fir_reg_msg1_;  // msg1
  SEXP Rsh_Fir_reg_nzchar1_;  // nzchar1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_msg2_;  // msg2
  SEXP Rsh_Fir_reg_msg3_;  // msg3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_Tidy11_;  // Tidy11
  SEXP Rsh_Fir_reg_Tidy12_;  // Tidy12

  // Bind parameters
  Rsh_Fir_reg_Tidy = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // Tidy_isMissing = missing.0(Tidy)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_Tidy;
  Rsh_Fir_reg_Tidy_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if Tidy_isMissing then L0() else L1(Tidy)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_Tidy_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(Tidy)
    Rsh_Fir_reg_Tidy_orDefault = Rsh_Fir_reg_Tidy;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   Sys_getenv = ldf `Sys.getenv`;
  //   r = dyn Sys_getenv("R_TIDYCMD", "tidy");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_Tidy_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st Tidy = Tidy_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_Tidy_orDefault, RHO);
  (void)(Rsh_Fir_reg_Tidy_orDefault);
  // st msg = ""
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_const(CCP, 5), RHO);
  (void)(Rsh_const(CCP, 5));
  // sym = ldf nzchar
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf nzchar in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L2_:;
  // st OK = r3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // OK = ld OK
  Rsh_Fir_reg_OK = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L3_:;
  // sprintf2 = ldf sprintf
  Rsh_Fir_reg_sprintf2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L52() else D21()
  // L52()
  goto L52_;

L4_:;
  // c2 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c2 then L31() else L32(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L31()
    goto L31_;
  } else {
  // L32(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L32_;
  }

L5_:;
  // st ver = dx5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L6_:;
  // r21 = `!`(r19)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // st OK = r21
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // OK2 = ld OK
  Rsh_Fir_reg_OK2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L38() else D12()
  // L38()
  goto L38_;

L7_:;
  // sprintf1 = ldf sprintf
  Rsh_Fir_reg_sprintf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L49() else D19()
  // L49()
  goto L49_;

L8_:;
  // goto L9(NULL)
  // L9(NULL)
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 12);
  goto L9_;

L9_:;
  // goto L10(r30)
  // L10(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L10_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym2 = ldf nzchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf nzchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L12_:;
  // c5 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c5 then L58() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L58()
    goto L58_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // Tidy11 = ld Tidy
  Rsh_Fir_reg_Tidy11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L63() else D28()
  // L63()
  goto L63_;

L15_:;
  // Sys_which = ldf `Sys.which`
  Rsh_Fir_reg_Sys_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L16_:;
  // r2 = dyn base(<lang Sys.which(Tidy)>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D0_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p1 = prom<V +>{
  //   Tidy1 = ld Tidy;
  //   Tidy2 = force? Tidy1;
  //   checkMissing(Tidy2);
  //   return Tidy2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_1, CCP, RHO);
  // r5 = dyn Sys_which(p1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_which, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

D1_:;
  // deopt 8 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L18_:;
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r6 = dyn nzchar(r5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 10 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r6_;
  goto L2_;

D3_:;
  // deopt 12 [OK]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_OK;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // OK1 = force? OK
  Rsh_Fir_reg_OK1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OK);
  // checkMissing(OK1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_OK1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(OK1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_OK1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L21() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L3()
    goto L3_;
  }

L21_:;
  // system2 = ldf system2
  Rsh_Fir_reg_system2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p2 = prom<V +>{
  //   Tidy3 = ld Tidy;
  //   Tidy4 = force? Tidy3;
  //   checkMissing(Tidy4);
  //   return Tidy4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_2, CCP, RHO);
  // r8 = dyn system2[, , stdout](p2, "--version", TRUE)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system2_, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D5_:;
  // deopt 20 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // st ver = r8
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // regexec = ldf regexec
  Rsh_Fir_reg_regexec = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p3 = prom<V +>{
  //   ver = ld ver;
  //   ver1 = force? ver;
  //   checkMissing(ver1);
  //   return ver1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_3, CCP, RHO);
  // r10 = dyn regexec("^HTML Tidy .* (\\d+\\.\\d+\\.\\d+)$", p3)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_regexec, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 26 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // st mat = r10
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // regmatches = ldf regmatches
  Rsh_Fir_reg_regmatches = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p4 = prom<V +>{
  //   ver2 = ld ver;
  //   ver3 = force? ver2;
  //   checkMissing(ver3);
  //   return ver3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_4, CCP, RHO);
  // p5 = prom<V +>{
  //   mat = ld mat;
  //   mat1 = force? mat;
  //   checkMissing(mat1);
  //   return mat1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_5, CCP, RHO);
  // r13 = dyn regmatches(p4, p5)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_regmatches, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D9_:;
  // deopt 32 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // c1 = `is.object`(r13)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c1 then L28() else L29(r13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L28()
    goto L28_;
  } else {
  // L29(r13)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    goto L29_;
  }

L28_:;
  // dr = tryDispatchBuiltin.1("[[", r13)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc then L30() else L29(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L30()
    goto L30_;
  } else {
  // L29(dr)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_dr;
    goto L29_;
  }

L29_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r16 = dyn __(r15, 1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L4_;

L30_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

L31_:;
  // dr2 = tryDispatchBuiltin.1("[", dx1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc1 then L33() else L32(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L33()
    goto L33_;
  } else {
  // L32(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L32_;
  }

L32_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r17 = dyn __1(dx3, 2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r17_;
  goto L5_;

L33_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L5(dx4)
  // L5(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L5_;

L34_:;
  // ver4 = ld ver
  Rsh_Fir_reg_ver4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

L35_:;
  // r18 = dyn base1(<sym ver>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r18)
  // L6(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L6_;

D10_:;
  // deopt 42 [ver4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_ver4_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // ver5 = force? ver4
  Rsh_Fir_reg_ver5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver4_);
  // checkMissing(ver5)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_ver5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r20 = dyn is_na(ver5)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_ver5_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

D11_:;
  // deopt 45 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L6(r20)
  // L6(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L6_;

D12_:;
  // deopt 48 [OK2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_OK2_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // OK3 = force? OK2
  Rsh_Fir_reg_OK3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OK2_);
  // checkMissing(OK3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_OK3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(OK3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_OK3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c3 then L39() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L39()
    goto L39_;
  } else {
  // L7()
    goto L7_;
  }

L39_:;
  // st req = "5.0.0"
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_const(CCP, 29), RHO);
  (void)(Rsh_const(CCP, 29));
  // numeric_version = ldf numeric_version
  Rsh_Fir_reg_numeric_version = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

D13_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p6 = prom<V +>{
  //   ver6 = ld ver;
  //   ver7 = force? ver6;
  //   checkMissing(ver7);
  //   return ver7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_6, CCP, RHO);
  // r23 = dyn numeric_version(p6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric_version, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L41() else D14()
  // L41()
  goto L41_;

D14_:;
  // deopt 56 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // req = ld req
  Rsh_Fir_reg_req = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L42() else D15()
  // L42()
  goto L42_;

D15_:;
  // deopt 56 [r23, req]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_req;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L42_:;
  // req1 = force? req
  Rsh_Fir_reg_req1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_req);
  // checkMissing(req1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_req1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r24 = `>=`(r23, req1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_req1_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // st OK = r24
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // OK4 = ld OK
  Rsh_Fir_reg_OK4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L43() else D16()
  // L43()
  goto L43_;

D16_:;
  // deopt 60 [OK4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_OK4_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L43_:;
  // OK5 = force? OK4
  Rsh_Fir_reg_OK5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OK4_);
  // checkMissing(OK5)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_OK5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r25 = `!`(OK5)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_OK5_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c4 then L44() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L44()
    goto L44_;
  } else {
  // L8()
    goto L8_;
  }

L44_:;
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L45() else D17()
  // L45()
  goto L45_;

D17_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p7 = prom<V +>{
  //   Tidy5 = ld Tidy;
  //   Tidy6 = force? Tidy5;
  //   checkMissing(Tidy6);
  //   return Tidy6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_7, CCP, RHO);
  // p8 = prom<V +>{
  //   req2 = ld req;
  //   req3 = force? req2;
  //   checkMissing(req3);
  //   return req3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_8, CCP, RHO);
  // p9 = prom<V +>{
  //   ver8 = ld ver;
  //   ver9 = force? ver8;
  //   checkMissing(ver9);
  //   return ver9;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_9, CCP, RHO);
  // r29 = dyn sprintf("'%s' is too old: need version %s, found %s", p7, p8, p9)
  SEXP Rsh_Fir_array_args45[4];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args45[3] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 4, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L46() else D18()
  // L46()
  goto L46_;

D18_:;
  // deopt 69 [r29]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L46_:;
  // st msg = r29
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // goto L9(r29)
  // L9(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L9_;

D19_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p10 = prom<V +>{
  //   Tidy7 = ld Tidy;
  //   Tidy8 = force? Tidy7;
  //   checkMissing(Tidy8);
  //   return Tidy8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_10, CCP, RHO);
  // r33 = dyn sprintf1("'%s' doesn't look like recent enough HTML Tidy", p10)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L50() else D20()
  // L50()
  goto L50_;

D20_:;
  // deopt 77 [r33]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L50_:;
  // st msg = r33
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // goto L10(r33)
  // L10(r33)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r33_;
  goto L10_;

D21_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p11 = prom<V +>{
  //   Tidy9 = ld Tidy;
  //   Tidy10 = force? Tidy9;
  //   checkMissing(Tidy10);
  //   return Tidy10;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1334922043_11, CCP, RHO);
  // r36 = dyn sprintf2("no command '%s' found", p11)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf2_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L53() else D22()
  // L53()
  goto L53_;

D22_:;
  // deopt 83 [r36]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // st msg = r36
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // goto L11()
  // L11()
  goto L11_;

L54_:;
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L56() else D23()
  // L56()
  goto L56_;

L55_:;
  // r37 = dyn base2(<sym msg>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(r37)
  // L12(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L12_;

D23_:;
  // deopt 87 [msg]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_msg;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L56_:;
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // nzchar1 = ldf nzchar in base
  Rsh_Fir_reg_nzchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r39 = dyn nzchar1(msg1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L57() else D24()
  // L57()
  goto L57_;

D24_:;
  // deopt 90 [r39]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L12(r39)
  // L12(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L12_;

L58_:;
  // st Tidy = ""
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 5), RHO);
  (void)(Rsh_const(CCP, 5));
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L59() else D25()
  // L59()
  goto L59_;

D25_:;
  // deopt 94 [msg2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L59_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // l = ld Tidy
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L60() else D26()
  // L60()
  goto L60_;

D26_:;
  // deopt 97 [msg3, l, msg3]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L60_:;
  // r40 = dyn attr__(l, NULL, "msg", msg3)
  SEXP Rsh_Fir_array_args54[4];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args54[3] = Rsh_Fir_reg_msg3_;
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L61() else D27()
  // L61()
  goto L61_;

D27_:;
  // deopt 100 [msg3, r40]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L61_:;
  // st Tidy = r40
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L14()
  // L14()
  goto L14_;

D28_:;
  // deopt 104 [Tidy11]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_Tidy11_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L63_:;
  // Tidy12 = force? Tidy11
  Rsh_Fir_reg_Tidy12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Tidy11_);
  // checkMissing(Tidy12)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_Tidy12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return Tidy12
  return Rsh_Fir_reg_Tidy12_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_(SEXP CCP, SEXP RHO) {
  // Sys_getenv = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // r = dyn Sys_getenv("R_TIDYCMD", "tidy")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1334922043_1(SEXP CCP, SEXP RHO) {
  // Tidy1 = ld Tidy
  Rsh_Fir_reg_Tidy1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Tidy2 = force? Tidy1
  Rsh_Fir_reg_Tidy2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Tidy1_);
  // checkMissing(Tidy2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_Tidy2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return Tidy2
  return Rsh_Fir_reg_Tidy2_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_2(SEXP CCP, SEXP RHO) {
  // Tidy3 = ld Tidy
  Rsh_Fir_reg_Tidy3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Tidy4 = force? Tidy3
  Rsh_Fir_reg_Tidy4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Tidy3_);
  // checkMissing(Tidy4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_Tidy4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return Tidy4
  return Rsh_Fir_reg_Tidy4_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_3(SEXP CCP, SEXP RHO) {
  // ver = ld ver
  Rsh_Fir_reg_ver = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // ver1 = force? ver
  Rsh_Fir_reg_ver1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver);
  // checkMissing(ver1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ver1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return ver1
  return Rsh_Fir_reg_ver1_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_4(SEXP CCP, SEXP RHO) {
  // ver2 = ld ver
  Rsh_Fir_reg_ver2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // ver3 = force? ver2
  Rsh_Fir_reg_ver3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver2_);
  // checkMissing(ver3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_ver3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return ver3
  return Rsh_Fir_reg_ver3_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_5(SEXP CCP, SEXP RHO) {
  // mat = ld mat
  Rsh_Fir_reg_mat = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // mat1 = force? mat
  Rsh_Fir_reg_mat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mat);
  // checkMissing(mat1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_mat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return mat1
  return Rsh_Fir_reg_mat1_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_6(SEXP CCP, SEXP RHO) {
  // ver6 = ld ver
  Rsh_Fir_reg_ver6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // ver7 = force? ver6
  Rsh_Fir_reg_ver7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver6_);
  // checkMissing(ver7)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_ver7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return ver7
  return Rsh_Fir_reg_ver7_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_7(SEXP CCP, SEXP RHO) {
  // Tidy5 = ld Tidy
  Rsh_Fir_reg_Tidy5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Tidy6 = force? Tidy5
  Rsh_Fir_reg_Tidy6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Tidy5_);
  // checkMissing(Tidy6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_Tidy6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return Tidy6
  return Rsh_Fir_reg_Tidy6_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_8(SEXP CCP, SEXP RHO) {
  // req2 = ld req
  Rsh_Fir_reg_req2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // req3 = force? req2
  Rsh_Fir_reg_req3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_req2_);
  // checkMissing(req3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_req3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return req3
  return Rsh_Fir_reg_req3_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_9(SEXP CCP, SEXP RHO) {
  // ver8 = ld ver
  Rsh_Fir_reg_ver8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // ver9 = force? ver8
  Rsh_Fir_reg_ver9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver8_);
  // checkMissing(ver9)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_ver9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return ver9
  return Rsh_Fir_reg_ver9_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_10(SEXP CCP, SEXP RHO) {
  // Tidy7 = ld Tidy
  Rsh_Fir_reg_Tidy7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Tidy8 = force? Tidy7
  Rsh_Fir_reg_Tidy8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Tidy7_);
  // checkMissing(Tidy8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_Tidy8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return Tidy8
  return Rsh_Fir_reg_Tidy8_;
}
SEXP Rsh_Fir_user_promise_inner1334922043_11(SEXP CCP, SEXP RHO) {
  // Tidy9 = ld Tidy
  Rsh_Fir_reg_Tidy9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Tidy10 = force? Tidy9
  Rsh_Fir_reg_Tidy10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Tidy9_);
  // checkMissing(Tidy10)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_Tidy10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return Tidy10
  return Rsh_Fir_reg_Tidy10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
