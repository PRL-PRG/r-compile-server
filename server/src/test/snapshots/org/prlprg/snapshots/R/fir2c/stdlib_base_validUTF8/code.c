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
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_validUTF8_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_validEnc;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_Encoding__;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_validEnc1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_validEnc2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_Encoding__1_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_validEnc3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_try;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_try1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_G6_;
  SEXP Rsh_Fir_reg_G7_;
  SEXP Rsh_Fir_reg_nchar;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_all_equal;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r49_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2501545716
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st validUTF8 = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
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
  // st x = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // validUTF8 = ldf validUTF8
  Rsh_Fir_reg_validUTF8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L4_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c("Jetz", "no", "chli", "z\u00fcrit\u00fc\u00fctsch:", "(noch", "ein", "bi\u00dfchen", "Z\u00fc", "deutsch)", "\ufffd\ufffd\ufffd\ufffd\ufffd")
  SEXP Rsh_Fir_array_args1[10];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[5] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[6] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[7] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args1[8] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args1[9] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names[10];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_array_arg_names[9] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 10, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base("Jetz", "no", "chli", "z\u00fcrit\u00fc\u00fctsch:", "(noch", "ein", "bi\u00dfchen", "Z\u00fc", "deutsch)", "\ufffd\ufffd\ufffd\ufffd\ufffd")
  SEXP Rsh_Fir_array_args2[10];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[6] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[7] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args2[8] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args2[9] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[10];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_array_arg_names1[9] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 10, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 16 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L7_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn validUTF8(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_validUTF8_, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 21 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // validEnc = ldf validEnc
  Rsh_Fir_reg_validEnc = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r7 = dyn validEnc(p1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_validEnc, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 25 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Encoding__ = ldf `Encoding<-`
  Rsh_Fir_reg_Encoding__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 29 ["UTF-8", l, "UTF-8"]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_const(CCP, 15);
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // r8 = dyn Encoding__(l, NULL, "UTF-8")
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Encoding__, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 31 ["UTF-8", r8]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // st x = r8
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // validEnc1 = ldf validEnc
  Rsh_Fir_reg_validEnc1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D7_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p2 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r10 = dyn validEnc1(p2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_validEnc1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D8_:;
  // deopt 36 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

D9_:;
  // deopt 37 [x6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // st G = x7
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x7_, RHO);
  (void)(Rsh_Fir_reg_x7_);
  // l1 = ld G
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c1 = `is.object`(l1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args11);
  // if c1 then L16() else L17("unknown", l1, "unknown", l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L17("unknown", l1, "unknown", l1)
    Rsh_Fir_reg_r13_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l1_;
    Rsh_Fir_reg_r14_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l1_;
    goto L17_;
  }

L1_:;
  // Encoding__1 = ldf `Encoding<-`
  Rsh_Fir_reg_Encoding__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L21() else D12()
  // L21()
  goto L21_;

L16_:;
  // dr = tryDispatchBuiltin.1("[", l1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17("unknown", l1, "unknown", dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L18()
    goto L18_;
  } else {
  // L17("unknown", l1, "unknown", dr)
    Rsh_Fir_reg_r13_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l1_;
    Rsh_Fir_reg_r14_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr;
    goto L17_;
  }

L17_:;
  // validEnc2 = ldf validEnc
  Rsh_Fir_reg_validEnc2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L19() else D10()
  // L19()
  goto L19_;

D10_:;
  // deopt 45 [r13, l4, r14, l5]
  SEXP Rsh_Fir_array_deopt_stack7[4];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_l5_;
  Rsh_Fir_deopt(45, 4, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 51 [r17, l7, dx1, r18]
  SEXP Rsh_Fir_array_deopt_stack8[4];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(51, 4, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L1("unknown", l1, "unknown", dx)
  // L1("unknown", l1, "unknown", dx)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 18);
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_r18_ = Rsh_const(CCP, 18);
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L19_:;
  // p3 = prom<V +>{
  //   G = ld G;
  //   G1 = force? G;
  //   checkMissing(G1);
  //   return G1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r20 = dyn validEnc2(p3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_validEnc2_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L20() else D11()
  // L20()
  goto L20_;

L21_:;
  // r23 = dyn Encoding__1(dx1, NULL, r18)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Encoding__1_, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L22() else D13()
  // L22()
  goto L22_;

D11_:;
  // deopt 47 [r13, l4, r14, l5, r20]
  SEXP Rsh_Fir_array_deopt_stack9[5];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack9[4] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(47, 5, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 53 [r17, l7, r23]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(53, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L20_:;
  // r21 = `!`(r20)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args18);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r22 = dyn __(l5, r21)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(r13, l4, r14, r22)
  // L1(r13, l4, r14, r22)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r22_;
  goto L1_;

L22_:;
  // c2 = `is.object`(l7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args20);
  // if c2 then L23() else L24(r17, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L23()
    goto L23_;
  } else {
  // L24(r17, l7)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r17_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L24_;
  }

L2_:;
  // st G = dx3
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // try = ldf try
  Rsh_Fir_reg_try = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L28() else D16()
  // L28()
  goto L28_;

L23_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l7, r23)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L25() else L24(r17, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L25()
    goto L25_;
  } else {
  // L24(r17, dr2)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r17_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr2_;
    goto L24_;
  }

L24_:;
  // validEnc3 = ldf validEnc
  Rsh_Fir_reg_validEnc3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L26() else D14()
  // L26()
  goto L26_;

D14_:;
  // deopt 55 [r25, l9, r23]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L2(dx2)
  // L2(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

L26_:;
  // p4 = prom<V +>{
  //   G2 = ld G;
  //   G3 = force? G2;
  //   checkMissing(G3);
  //   return G3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r29 = dyn validEnc3(p4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_validEnc3_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L27() else D15()
  // L27()
  goto L27_;

L28_:;
  // p6 = prom<V +>{
  //   substr = ldf substr;
  //   p5 = prom<V +>{
  //     x8 = ld x;
  //     x9 = force? x8;
  //     checkMissing(x9);
  //     return x9;
  //   };
  //   r33 = dyn substr(p5, 1.0, 1.0);
  //   return r33;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r35 = dyn try(p6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L29() else D17()
  // L29()
  goto L29_;

D15_:;
  // deopt 57 [r25, l9, r23, r29]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(57, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 64 [r35]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L27_:;
  // r30 = `!`(r29)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args29);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r31 = dyn ___(l9, r23, r30)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r31)
  // L2(r31)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r31_;
  goto L2_;

L29_:;
  // try1 = ldf try
  Rsh_Fir_reg_try1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L30() else D18()
  // L30()
  goto L30_;

D18_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p8 = prom<V +>{
  //   substr1 = ldf substr;
  //   p7 = prom<V +>{
  //     G4 = ld G;
  //     G5 = force? G4;
  //     checkMissing(G5);
  //     return G5;
  //   };
  //   r37 = dyn substr1(p7, 1.0, 1.0);
  //   return r37;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r39 = dyn try1(p8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L31() else D19()
  // L31()
  goto L31_;

D19_:;
  // deopt 68 [r39]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L31_:;
  // sym1 = ldf nchar
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base1 = ldf nchar in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard1 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L3_:;
  // all_equal = ldf `all.equal`
  Rsh_Fir_reg_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L36() else D22()
  // L36()
  goto L36_;

L32_:;
  // G6 = ld G
  Rsh_Fir_reg_G6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L34() else D20()
  // L34()
  goto L34_;

L33_:;
  // r40 = dyn base1(<sym G>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D20_:;
  // deopt 71 [G6]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_G6_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // G7 = force? G6
  Rsh_Fir_reg_G7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_G6_);
  // checkMissing(G7)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_G7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r42 = dyn nchar(G7, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args37[4];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_G7_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args37[3] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L35() else D21()
  // L35()
  goto L35_;

L36_:;
  // p10 = prom<V +>{
  //   validEnc4 = ldf validEnc;
  //   p9 = prom<V +>{
  //     x10 = ld x;
  //     x11 = force? x10;
  //     checkMissing(x11);
  //     return x11;
  //   };
  //   r44 = dyn validEnc4(p9);
  //   return r44;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   validEnc5 = ldf validEnc;
  //   p11 = prom<V +>{
  //     G8 = ld G;
  //     G9 = force? G8;
  //     checkMissing(G9);
  //     return G9;
  //   };
  //   r47 = dyn validEnc5(p11);
  //   return r47;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r49 = dyn all_equal(p10, p12)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L37() else D23()
  // L37()
  goto L37_;

D21_:;
  // deopt 77 [r42]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 82 [r49]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L3()
  // L3()
  goto L3_;

L37_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r49
  return Rsh_Fir_reg_r49_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_G;
  SEXP Rsh_Fir_reg_G1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // G = ld G
  Rsh_Fir_reg_G = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // G1 = force? G
  Rsh_Fir_reg_G1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_G);
  // checkMissing(G1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_G1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return G1
  return Rsh_Fir_reg_G1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_G2_;
  SEXP Rsh_Fir_reg_G3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // G2 = ld G
  Rsh_Fir_reg_G2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // G3 = force? G2
  Rsh_Fir_reg_G3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_G2_);
  // checkMissing(G3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_G3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return G3
  return Rsh_Fir_reg_G3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_substr;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // substr = ldf substr
  Rsh_Fir_reg_substr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // p5 = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   return x9;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r33 = dyn substr(p5, 1.0, 1.0)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r33
  return Rsh_Fir_reg_r33_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return x9
  return Rsh_Fir_reg_x9_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_substr1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r37_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // substr1 = ldf substr
  Rsh_Fir_reg_substr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // p7 = prom<V +>{
  //   G4 = ld G;
  //   G5 = force? G4;
  //   checkMissing(G5);
  //   return G5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r37 = dyn substr1(p7, 1.0, 1.0)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr1_, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_G4_;
  SEXP Rsh_Fir_reg_G5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // G4 = ld G
  Rsh_Fir_reg_G4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // G5 = force? G4
  Rsh_Fir_reg_G5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_G4_);
  // checkMissing(G5)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_G5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return G5
  return Rsh_Fir_reg_G5_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_validEnc4_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r44_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // validEnc4 = ldf validEnc
  Rsh_Fir_reg_validEnc4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // p9 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   return x11;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r44 = dyn validEnc4(p9)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_validEnc4_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r44
  return Rsh_Fir_reg_r44_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return x11
  return Rsh_Fir_reg_x11_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_validEnc5_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // validEnc5 = ldf validEnc
  Rsh_Fir_reg_validEnc5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // p11 = prom<V +>{
  //   G8 = ld G;
  //   G9 = force? G8;
  //   checkMissing(G9);
  //   return G9;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r47 = dyn validEnc5(p11)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_validEnc5_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_G8_;
  SEXP Rsh_Fir_reg_G9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // G8 = ld G
  Rsh_Fir_reg_G8_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // G9 = force? G8
  Rsh_Fir_reg_G9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_G8_);
  // checkMissing(G9)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_G9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return G9
  return Rsh_Fir_reg_G9_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_validUTF8_1;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
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
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang validUTF8(x)>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L3_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // validUTF8 = ldf validUTF8 in base
  Rsh_Fir_reg_validUTF8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r2 = dyn validUTF8(x2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_validUTF8_1, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
