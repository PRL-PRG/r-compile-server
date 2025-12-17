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
SEXP Rsh_Fir_user_function_inner1155685215_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1155685215_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1155685215_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_file;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_writeChar;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_writeChar1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_close;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_file1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_readChar;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_readChar1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_close1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_unlink;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r34_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1155685215
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1155685215_, RHO, CCP);
  // st readChar = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r1 = dyn tempfile("testchar")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st zzfil = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // file = ldf file
  Rsh_Fir_reg_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   zzfil = ld zzfil;
  //   zzfil1 = force? zzfil;
  //   checkMissing(zzfil1);
  //   return zzfil1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn file(p, "wb")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 12 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // st zz = r3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // st x = r5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L6_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r6 = dyn c("a", "this will be truncated", "abc")
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

L7_:;
  // r4 = dyn base("a", "this will be truncated", "abc")
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;

D4_:;
  // deopt 20 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L1_:;
  // st nc = r8
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // writeChar = ldf writeChar
  Rsh_Fir_reg_writeChar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

L8_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L9_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r9 = dyn c1(3.0, 10.0, 3.0)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

L10_:;
  // r7 = dyn base1(3.0, 10.0, 3.0)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;

D5_:;
  // deopt 28 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L1_;

L12_:;
  // p1 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   zz = ld zz;
  //   zz1 = force? zz;
  //   checkMissing(zz1);
  //   return zz1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   nc = ld nc;
  //   nc1 = force? nc;
  //   checkMissing(nc1);
  //   return nc1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r13 = dyn writeChar[, , , eos](p1, p2, p3, NULL)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeChar, 4, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D7_:;
  // deopt 37 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L13_:;
  // writeChar1 = ldf writeChar
  Rsh_Fir_reg_writeChar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D8_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p4 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   zz2 = ld zz;
  //   zz3 = force? zz2;
  //   checkMissing(zz3);
  //   return zz3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r16 = dyn writeChar1[, , eos](p4, p5, "\r\n")
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeChar1_, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

D9_:;
  // deopt 44 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // close = ldf close
  Rsh_Fir_reg_close = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L16() else D10()
  // L16()
  goto L16_;

D10_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p6 = prom<V +>{
  //   zz4 = ld zz;
  //   zz5 = force? zz4;
  //   checkMissing(zz5);
  //   return zz5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r18 = dyn close(p6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L17() else D11()
  // L17()
  goto L17_;

D11_:;
  // deopt 48 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // file1 = ldf file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L18() else D12()
  // L18()
  goto L18_;

D12_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p7 = prom<V +>{
  //   zzfil2 = ld zzfil;
  //   zzfil3 = force? zzfil2;
  //   checkMissing(zzfil3);
  //   return zzfil3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r20 = dyn file1(p7, "rb")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L19() else D13()
  // L19()
  goto L19_;

D13_:;
  // deopt 53 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // st zz = r20
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // readChar = ldf readChar
  Rsh_Fir_reg_readChar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D14()
  // L20()
  goto L20_;

D14_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p8 = prom<V +>{
  //   zz6 = ld zz;
  //   zz7 = force? zz6;
  //   checkMissing(zz7);
  //   return zz7;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   nc2 = ld nc;
  //   nc3 = force? nc2;
  //   checkMissing(nc3);
  //   return nc3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r23 = dyn readChar(p8, p9)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readChar, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L21() else D15()
  // L21()
  goto L21_;

D15_:;
  // deopt 59 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // readChar1 = ldf readChar
  Rsh_Fir_reg_readChar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L22() else D16()
  // L22()
  goto L22_;

D16_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p10 = prom<V +>{
  //   zz8 = ld zz;
  //   zz9 = force? zz8;
  //   checkMissing(zz9);
  //   return zz9;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   sym2 = ldf nchar;
  //   base2 = ldf nchar in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r26):
  //   r28 = `+`(r26, 3.0);
  //   return r28;
  // L1():
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   nchar = ldf nchar in base;
  //   r27 = dyn nchar(x5, "chars", FALSE, NA_LGL);
  //   goto L0(r27);
  // L2():
  //   r25 = dyn base2(<sym x>);
  //   goto L0(r25);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r30 = dyn readChar1(p10, p11)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readChar1_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L23() else D17()
  // L23()
  goto L23_;

D17_:;
  // deopt 64 [r30]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // close1 = ldf close
  Rsh_Fir_reg_close1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L24() else D18()
  // L24()
  goto L24_;

D18_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p12 = prom<V +>{
  //   zz10 = ld zz;
  //   zz11 = force? zz10;
  //   checkMissing(zz11);
  //   return zz11;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r32 = dyn close1(p12)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L25() else D19()
  // L25()
  goto L25_;

D19_:;
  // deopt 68 [r32]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L25_:;
  // unlink = ldf unlink
  Rsh_Fir_reg_unlink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L26() else D20()
  // L26()
  goto L26_;

D20_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p13 = prom<V +>{
  //   zzfil4 = ld zzfil;
  //   zzfil5 = force? zzfil4;
  //   checkMissing(zzfil5);
  //   return zzfil5;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r34 = dyn unlink(p13)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlink, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L27() else D21()
  // L27()
  goto L27_;

D21_:;
  // deopt 72 [r34]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zzfil;
  SEXP Rsh_Fir_reg_zzfil1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zzfil = ld zzfil
  Rsh_Fir_reg_zzfil = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zzfil1 = force? zzfil
  Rsh_Fir_reg_zzfil1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zzfil);
  // checkMissing(zzfil1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_zzfil1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return zzfil1
  return Rsh_Fir_reg_zzfil1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz;
  SEXP Rsh_Fir_reg_zz1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz = ld zz
  Rsh_Fir_reg_zz = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // zz1 = force? zz
  Rsh_Fir_reg_zz1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz);
  // checkMissing(zz1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_zz1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return zz1
  return Rsh_Fir_reg_zz1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nc;
  SEXP Rsh_Fir_reg_nc1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return nc1
  return Rsh_Fir_reg_nc1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz2_;
  SEXP Rsh_Fir_reg_zz3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz2 = ld zz
  Rsh_Fir_reg_zz2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // zz3 = force? zz2
  Rsh_Fir_reg_zz3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz2_);
  // checkMissing(zz3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_zz3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return zz3
  return Rsh_Fir_reg_zz3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz4_;
  SEXP Rsh_Fir_reg_zz5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz4 = ld zz
  Rsh_Fir_reg_zz4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // zz5 = force? zz4
  Rsh_Fir_reg_zz5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz4_);
  // checkMissing(zz5)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_zz5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return zz5
  return Rsh_Fir_reg_zz5_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zzfil2_;
  SEXP Rsh_Fir_reg_zzfil3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zzfil2 = ld zzfil
  Rsh_Fir_reg_zzfil2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zzfil3 = force? zzfil2
  Rsh_Fir_reg_zzfil3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zzfil2_);
  // checkMissing(zzfil3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_zzfil3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return zzfil3
  return Rsh_Fir_reg_zzfil3_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz6_;
  SEXP Rsh_Fir_reg_zz7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz6 = ld zz
  Rsh_Fir_reg_zz6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // zz7 = force? zz6
  Rsh_Fir_reg_zz7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz6_);
  // checkMissing(zz7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_zz7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return zz7
  return Rsh_Fir_reg_zz7_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nc2_;
  SEXP Rsh_Fir_reg_nc3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nc2 = ld nc
  Rsh_Fir_reg_nc2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nc3 = force? nc2
  Rsh_Fir_reg_nc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc2_);
  // checkMissing(nc3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_nc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return nc3
  return Rsh_Fir_reg_nc3_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz8_;
  SEXP Rsh_Fir_reg_zz9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz8 = ld zz
  Rsh_Fir_reg_zz8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // zz9 = force? zz8
  Rsh_Fir_reg_zz9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz8_);
  // checkMissing(zz9)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_zz9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return zz9
  return Rsh_Fir_reg_zz9_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_nchar;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf nchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf nchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r28 = `+`(r26, 3.0)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args25);
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r27 = dyn nchar(x5, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L0_;

L2_:;
  // r25 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz10_;
  SEXP Rsh_Fir_reg_zz11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz10 = ld zz
  Rsh_Fir_reg_zz10_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // zz11 = force? zz10
  Rsh_Fir_reg_zz11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz10_);
  // checkMissing(zz11)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_zz11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return zz11
  return Rsh_Fir_reg_zz11_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zzfil4_;
  SEXP Rsh_Fir_reg_zzfil5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zzfil4 = ld zzfil
  Rsh_Fir_reg_zzfil4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // zzfil5 = force? zzfil4
  Rsh_Fir_reg_zzfil5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zzfil4_);
  // checkMissing(zzfil5)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_zzfil5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return zzfil5
  return Rsh_Fir_reg_zzfil5_;
}
SEXP Rsh_Fir_user_function_inner1155685215_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1155685215 dynamic dispatch ([con, nchars, useBytes])

  return Rsh_Fir_user_version_inner1155685215_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1155685215_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1155685215 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1155685215/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_con;
  SEXP Rsh_Fir_reg_nchars;
  SEXP Rsh_Fir_reg_useBytes;
  SEXP Rsh_Fir_reg_useBytes_isMissing;
  SEXP Rsh_Fir_reg_useBytes_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_con1_;
  SEXP Rsh_Fir_reg_con2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_file1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_on_exit;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_con5_;
  SEXP Rsh_Fir_reg_con6_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_nchars1_;
  SEXP Rsh_Fir_reg_nchars2_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_useBytes1_;
  SEXP Rsh_Fir_reg_useBytes2_;
  SEXP Rsh_Fir_reg_readChar1;
  SEXP Rsh_Fir_reg_r13_1;

  // Bind parameters
  Rsh_Fir_reg_con = PARAMS[0];
  Rsh_Fir_reg_nchars = PARAMS[1];
  Rsh_Fir_reg_useBytes = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st con = con
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_con, RHO);
  (void)(Rsh_Fir_reg_con);
  // st nchars = nchars
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_nchars, RHO);
  (void)(Rsh_Fir_reg_nchars);
  // useBytes_isMissing = missing.0(useBytes)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_useBytes;
  Rsh_Fir_reg_useBytes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args34);
  // if useBytes_isMissing then L0(FALSE) else L0(useBytes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_useBytes_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_const(CCP, 23);
    goto L0_;
  } else {
  // L0(useBytes)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_Fir_reg_useBytes;
    goto L0_;
  }

L0_:;
  // st useBytes = useBytes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_useBytes_orDefault, RHO);
  (void)(Rsh_Fir_reg_useBytes_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L1_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c1 then L10() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L10()
    goto L10_;
  } else {
  // L2()
    goto L2_;
  }

L7_:;
  // con1 = ld con
  Rsh_Fir_reg_con1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym con>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [con1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_con1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L2_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L9_:;
  // con2 = force? con1
  Rsh_Fir_reg_con2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con1_);
  // checkMissing(con2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_con2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c = `is.character`(con2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_con2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args40);
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1;
  goto L1_;

L10_:;
  // file = ldf file
  Rsh_Fir_reg_file1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_1;

L11_:;
  // p = prom<V +>{
  //   con3 = ld con;
  //   con4 = force? con3;
  //   checkMissing(con4);
  //   return con4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1155685215_, 0, NULL, CCP, RHO);
  // r3 = dyn file(p, "rb")
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file1, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L16_:;
  // con5 = ld con
  Rsh_Fir_reg_con5_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L17_:;
  // r8 = dyn base2(<lang readChar(con, as.integer(nchars), useBytes)>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_1;
  goto L5_;

D2_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 17 [con5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_con5_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L12_:;
  // st con = r3
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r3_1, RHO);
  (void)(Rsh_Fir_reg_r3_1);
  // sym1 = ldf `on.exit`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base1 = ldf `on.exit` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L18_:;
  // con6 = force? con5
  Rsh_Fir_reg_con6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con5_);
  // checkMissing(con6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_con6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L6_:;
  // useBytes1 = ld useBytes
  Rsh_Fir_reg_useBytes1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L13_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r6 = dyn on_exit(<lang close(con)>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L3_;

L14_:;
  // r4 = dyn base1(<lang close(con)>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L3_;

L19_:;
  // nchars1 = ld nchars
  Rsh_Fir_reg_nchars1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

L20_:;
  // r10 = dyn base3(<sym nchars>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L6_;

D4_:;
  // deopt 21 [nchars1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_nchars1_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 25 [useBytes1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_useBytes1_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L21_:;
  // nchars2 = force? nchars1
  Rsh_Fir_reg_nchars2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nchars1_);
  // checkMissing(nchars2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_nchars2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r12 = dyn as_integer(nchars2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_nchars2_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

L23_:;
  // useBytes2 = force? useBytes1
  Rsh_Fir_reg_useBytes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useBytes1_);
  // checkMissing(useBytes2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_useBytes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // readChar = ldf readChar in base
  Rsh_Fir_reg_readChar1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r13 = dyn readChar(con6, r11, useBytes2)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_con6_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args53[2] = Rsh_Fir_reg_useBytes2_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readChar1, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

D5_:;
  // deopt 24 [r12]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 28 [r13]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L6_;

L24_:;
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r13_1;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_inner1155685215_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con3_;
  SEXP Rsh_Fir_reg_con4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1155685215/0: expected 0, got %d", NCAPTURES);

  // con3 = ld con
  Rsh_Fir_reg_con3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // con4 = force? con3
  Rsh_Fir_reg_con4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con3_);
  // checkMissing(con4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_con4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return con4
  return Rsh_Fir_reg_con4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
