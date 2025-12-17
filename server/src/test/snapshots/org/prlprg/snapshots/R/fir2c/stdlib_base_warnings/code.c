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
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_options;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_options1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_cat1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_cat2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_options2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_tail;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_summary;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_warnings2_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_unique;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_summary1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_options3_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_s2_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_s3_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_matrix1_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_summary2_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_options4_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r73_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1246119658
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1246119658_, RHO, CCP);
  // st warnings = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r1 = dyn options("warn")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // st ow = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // s = toForSeq(<int -1, 0, 1>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args2);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 5);
  // goto L0(i)
  // L0(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L0_;

L0_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c then L10() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args5);
  // st w = x
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // options1 = ldf options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // options2 = ldf options
  Rsh_Fir_reg_options2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L22() else D12()
  // L22()
  goto L22_;

D2_:;
  // deopt 11 [i2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p = prom<V +>{
  //   w = ld w;
  //   w1 = force? w;
  //   checkMissing(w1);
  //   return w1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn options1[warn](p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

L22_:;
  // p4 = prom<V +>{
  //   ow = ld ow;
  //   ow1 = force? ow;
  //   checkMissing(ow1);
  //   return ow1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r12 = dyn options2(p4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options2_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L23() else D13()
  // L23()
  goto L23_;

D3_:;
  // deopt 14 [i2, r3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 48 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

L23_:;
  // tail = ldf tail
  Rsh_Fir_reg_tail = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L24() else D14()
  // L24()
  goto L24_;

D4_:;
  // deopt 16 [i2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p1 = prom<V +>{
  //   w2 = ld w;
  //   w3 = force? w2;
  //   checkMissing(w3);
  //   return w3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r5 = dyn cat("\n warn =", p1, "\n")
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

L24_:;
  // p5 = prom<V +>{
  //   warnings = ldf warnings;
  //   r13 = dyn warnings();
  //   return r13;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r15 = dyn tail(p5, 2.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tail, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L25() else D15()
  // L25()
  goto L25_;

D5_:;
  // deopt 20 [i2, r5]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 53 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L14_:;
  // s1 = toForSeq(<int 1, 2, 3>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args14);
  // i5 = 0
  Rsh_Fir_reg_i5_ = Rsh_const(CCP, 5);
  // goto L1(i2, i5)
  // L1(i2, i5)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i5_;
  goto L1_;

L25_:;
  // summary = ldf summary
  Rsh_Fir_reg_summary = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L26() else D16()
  // L26()
  goto L26_;

D16_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // i8 = `+`.1(i7, 1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i8_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // c1 = `<`.1(l1, i8)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if c1 then L15() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L15()
    goto L15_;
  } else {
  // L2()
    goto L2_;
  }

L26_:;
  // p6 = prom<V +>{
  //   warnings1 = ldf warnings;
  //   r16 = dyn warnings1();
  //   return r16;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r18 = dyn summary(p6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L27() else D17()
  // L27()
  goto L27_;

D17_:;
  // deopt 57 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L2_:;
  // x1 = `[[`(s1, i8, NULL, TRUE)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args18);
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

L15_:;
  // cat2 = ldf cat
  Rsh_Fir_reg_cat2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L20() else D10()
  // L20()
  goto L20_;

L27_:;
  // warnings2 = ldf warnings
  Rsh_Fir_reg_warnings2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L28() else D18()
  // L28()
  goto L28_;

D6_:;
  // deopt 24 [i6, i8]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 39 [i6]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p2 = prom<V +>{
  //   i13 = ld i;
  //   i14 = force? i13;
  //   checkMissing(i14);
  //   return i14;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r7 = dyn cat1(p2, "..\n")
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

L20_:;
  // r10 = dyn cat2("--=--=--\n")
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L21() else D11()
  // L21()
  goto L21_;

L28_:;
  // r19 = dyn warnings2()
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warnings2_, 0, NULL, NULL, CCP, RHO);
  // check L29() else D19()
  // L29()
  goto L29_;

D7_:;
  // deopt 27 [i6, i8, r7]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 41 [i6, r10]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 60 [r19]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L17_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

L21_:;
  // goto L0(i6)
  // L0(i6)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i6_;
  goto L0_;

L29_:;
  // st ww = r19
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L30() else D20()
  // L30()
  goto L30_;

D8_:;
  // deopt 29 [i6, i8]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p3 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7>;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r9 = dyn matrix(p3, 3.0, 4.0)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

L30_:;
  // p7 = prom<V +>{
  //   ww = ld ww;
  //   ww1 = force? ww;
  //   checkMissing(ww1);
  //   return ww1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r21 = dyn unique(p7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L31() else D21()
  // L31()
  goto L31_;

D9_:;
  // deopt 33 [i6, i8, r9]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(33, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 65 [r21]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L19_:;
  // st m = r9
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // goto L1(i6, i8)
  // L1(i6, i8)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i8_;
  goto L1_;

L31_:;
  // st uw = r21
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // summary1 = ldf summary
  Rsh_Fir_reg_summary1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L32() else D22()
  // L32()
  goto L32_;

D22_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p8 = prom<V +>{
  //   ww2 = ld ww;
  //   ww3 = force? ww2;
  //   checkMissing(ww3);
  //   return ww3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r23 = dyn summary1(p8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L33() else D23()
  // L33()
  goto L33_;

D23_:;
  // deopt 70 [r23]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L33_:;
  // st sw = r23
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L34() else D24()
  // L34()
  goto L34_;

D24_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p9 = prom<V +>{
  //   sym = ldf identical;
  //   base = ldf identical in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L6() else L7();
  // L0(r25):
  //   return r25;
  // L6():
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L8() else L9();
  // L7():
  //   r24 = dyn base(<lang c(`[`(ww, 1.0), `[`(ww, 3.0))>, <lang `[`(ww, c(1.0, 3.0))>);
  //   goto L0(r24);
  // L1(r27):
  //   ww12 = ld ww;
  //   ww13 = force? ww12;
  //   checkMissing(ww13);
  //   c5 = `is.object`(ww13);
  //   if c5 then L16() else L17(ww13);
  // L8():
  //   ww4 = ld ww;
  //   ww5 = force? ww4;
  //   checkMissing(ww5);
  //   c2 = `is.object`(ww5);
  //   if c2 then L10() else L11(ww5);
  // L9():
  //   r26 = dyn base1(<lang `[`(ww, 1.0)>, <lang `[`(ww, 3.0)>);
  //   goto L1(r26);
  // L2(dx1):
  //   ww8 = ld ww;
  //   ww9 = force? ww8;
  //   checkMissing(ww9);
  //   c3 = `is.object`(ww9);
  //   if c3 then L13() else L14(ww9);
  // L4(dx5):
  //   identical = ldf identical in base;
  //   r35 = dyn identical(r27, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r35);
  // L10():
  //   dr = tryDispatchBuiltin.1("[", ww5);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L12() else L11(dr);
  // L11(ww7):
  //   __ = ldf `[` in base;
  //   r28 = dyn __(ww7, 1.0);
  //   goto L2(r28);
  // L16():
  //   dr4 = tryDispatchBuiltin.1("[", ww13);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L18() else L17(dr4);
  // L17(ww15):
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L19() else L20();
  // L3(dx3):
  //   c4 = ldf c in base;
  //   r30 = dyn c4(dx1, dx3);
  //   goto L1(r30);
  // L5(ww18, r32):
  //   __2 = ldf `[` in base;
  //   r34 = dyn __2(ww18, r32);
  //   goto L4(r34);
  // L12():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L2(dx);
  // L13():
  //   dr2 = tryDispatchBuiltin.1("[", ww9);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L15() else L14(dr2);
  // L14(ww11):
  //   __1 = ldf `[` in base;
  //   r29 = dyn __1(ww11, 3.0);
  //   goto L3(r29);
  // L18():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L4(dx4);
  // L19():
  //   c6 = ldf c in base;
  //   r33 = dyn c6(1.0, 3.0);
  //   goto L5(ww15, r33);
  // L20():
  //   r31 = dyn base2(1.0, 3.0);
  //   goto L5(ww15, r31);
  // L15():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L3(dx2);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   sym3 = ldf length;
  //   base3 = ldf length in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r38):
  //   r40 = `==`(r38, 1.0);
  //   return r40;
  // L1():
  //   uw = ld uw;
  //   uw1 = force? uw;
  //   checkMissing(uw1);
  //   length = ldf length in base;
  //   r39 = dyn length(uw1);
  //   goto L0(r39);
  // L2():
  //   r37 = dyn base3(<sym uw>);
  //   goto L0(r37);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   sym4 = ldf nchar;
  //   base4 = ldf nchar in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L2() else L3();
  // L0(r43):
  //   r48 = `>`(r43, 10.0);
  //   return r48;
  // L2():
  //   sym5 = ldf names;
  //   base5 = ldf names in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L4() else L5();
  // L3():
  //   r42 = dyn base4(<lang names(uw)>);
  //   goto L0(r42);
  // L1(r45):
  //   nchar = ldf nchar in base;
  //   r47 = dyn nchar(r45, "chars", FALSE, NA_LGL);
  //   goto L0(r47);
  // L4():
  //   uw2 = ld uw;
  //   uw3 = force? uw2;
  //   checkMissing(uw3);
  //   names = ldf names in base;
  //   r46 = dyn names(uw3);
  //   goto L1(r46);
  // L5():
  //   r44 = dyn base5(<sym uw>);
  //   goto L1(r44);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   sym6 = ldf length;
  //   base6 = ldf length in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r51):
  //   r53 = `==`(r51, 1.0);
  //   return r53;
  // L1():
  //   sw = ld sw;
  //   sw1 = force? sw;
  //   checkMissing(sw1);
  //   length1 = ldf length in base;
  //   r52 = dyn length1(sw1);
  //   goto L0(r52);
  // L2():
  //   r50 = dyn base6(<sym sw>);
  //   goto L0(r50);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   sym7 = ldf attr;
  //   base7 = ldf attr in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r56):
  //   r58 = `==`(r56, 3.0);
  //   return r58;
  // L1():
  //   sw2 = ld sw;
  //   sw3 = force? sw2;
  //   checkMissing(sw3);
  //   attr = ldf attr in base;
  //   r57 = dyn attr(sw3, "counts");
  //   goto L0(r57);
  // L2():
  //   r55 = dyn base7(<sym sw>, "counts");
  //   goto L0(r55);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r60 = dyn stopifnot(p9, p10, p11, p12, p13)
  SEXP Rsh_Fir_array_args77[5];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args77[3] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args77[4] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names30[5];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_array_arg_names30[3] = R_MissingArg;
  Rsh_Fir_array_arg_names30[4] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 5, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L35() else D25()
  // L35()
  goto L35_;

D25_:;
  // deopt 79 [r60]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L35_:;
  // options3 = ldf options
  Rsh_Fir_reg_options3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L36() else D26()
  // L36()
  goto L36_;

D26_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r61 = dyn options3[nwarnings](10000.0)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options3_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L37() else D27()
  // L37()
  goto L37_;

D27_:;
  // deopt 84 [r61]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L37_:;
  // st op = r61
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // r62 = `:`(1.0, 36.0)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args79);
  // st x = r62
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // r63 = `:`(1.0, 13.0)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args80);
  // s2 = toForSeq(r63)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_s2_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // l2 = length(s2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_l2_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args82);
  // i15 = 0
  Rsh_Fir_reg_i15_ = Rsh_const(CCP, 5);
  // goto L4(i15)
  // L4(i15)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i15_;
  goto L4_;

L4_:;
  // i17 = `+`.1(i16, 1)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i17_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // c7 = `<`.1(l2, i17)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if c7 then L38() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L38()
    goto L38_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // x2 = `[[`(s2, i17, NULL, TRUE)
  SEXP Rsh_Fir_array_args85[4];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_args85[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args85[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_x2_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args85);
  // st n = x2
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_x2_, RHO);
  (void)(Rsh_Fir_reg_x2_);
  // r64 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args86);
  // s3 = toForSeq(r64)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_s3_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // l3 = length(s3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_reg_l3_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args88);
  // i20 = 0
  Rsh_Fir_reg_i20_ = Rsh_const(CCP, 5);
  // goto L5(i17, i20)
  // L5(i17, i20)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i20_;
  goto L5_;

L38_:;
  // summary2 = ldf summary
  Rsh_Fir_reg_summary2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L42() else D30()
  // L42()
  goto L42_;

D30_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // i23 = `+`.1(i22, 1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i23_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args89);
  // c8 = `<`.1(l3, i23)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if c8 then L39() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L39()
    goto L39_;
  } else {
  // L6()
    goto L6_;
  }

L42_:;
  // p17 = prom<V +>{
  //   warnings3 = ldf warnings;
  //   r69 = dyn warnings3();
  //   return r69;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r71 = dyn summary2(p17)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary2_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L43() else D31()
  // L43()
  goto L43_;

D31_:;
  // deopt 115 [r71]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L6_:;
  // x3 = `[[`(s3, i23, NULL, TRUE)
  SEXP Rsh_Fir_array_args92[4];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_args92[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args92[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_x3_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args92);
  // st m = x3
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_x3_, RHO);
  (void)(Rsh_Fir_reg_x3_);
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L40() else D28()
  // L40()
  goto L40_;

L39_:;
  // goto L4(i21)
  // L4(i21)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i21_;
  goto L4_;

L43_:;
  // options4 = ldf options
  Rsh_Fir_reg_options4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L44() else D32()
  // L44()
  goto L44_;

D28_:;
  // deopt 100 [i21, i23]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p14 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   return n1;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r68 = dyn matrix1(p14, p15, p16)
  SEXP Rsh_Fir_array_args96[3];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args96[2] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 3, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L41() else D29()
  // L41()
  goto L41_;

L44_:;
  // p18 = prom<V +>{
  //   op = ld op;
  //   op1 = force? op;
  //   checkMissing(op1);
  //   return op1;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r73 = dyn options4(p18)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options4_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L45() else D33()
  // L45()
  goto L45_;

D29_:;
  // deopt 104 [i21, i23, r68]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(104, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 119 [r73]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L41_:;
  // st A = r68
  Rsh_Fir_store(Rsh_const(CCP, 58), Rsh_Fir_reg_r68_, RHO);
  (void)(Rsh_Fir_reg_r68_);
  // goto L5(i21, i23)
  // L5(i21, i23)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i23_;
  goto L5_;

L45_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r73
  return Rsh_Fir_reg_r73_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_w;
  SEXP Rsh_Fir_reg_w1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // w = ld w
  Rsh_Fir_reg_w = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // w1 = force? w
  Rsh_Fir_reg_w1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w);
  // checkMissing(w1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_w1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return w1
  return Rsh_Fir_reg_w1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ow;
  SEXP Rsh_Fir_reg_ow1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ow = ld ow
  Rsh_Fir_reg_ow = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // ow1 = force? ow
  Rsh_Fir_reg_ow1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ow);
  // checkMissing(ow1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_ow1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return ow1
  return Rsh_Fir_reg_ow1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_w2_;
  SEXP Rsh_Fir_reg_w3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // w2 = ld w
  Rsh_Fir_reg_w2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // w3 = force? w2
  Rsh_Fir_reg_w3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w2_);
  // checkMissing(w3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_w3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return w3
  return Rsh_Fir_reg_w3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_warnings;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // warnings = ldf warnings
  Rsh_Fir_reg_warnings = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r13 = dyn warnings()
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warnings, 0, NULL, NULL, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_warnings1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // warnings1 = ldf warnings
  Rsh_Fir_reg_warnings1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r16 = dyn warnings1()
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warnings1_, 0, NULL, NULL, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_i14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // i13 = ld i
  Rsh_Fir_reg_i13_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // i14 = force? i13
  Rsh_Fir_reg_i14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i13_);
  // checkMissing(i14)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_i14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return i14
  return Rsh_Fir_reg_i14_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6, 7>
  return Rsh_const(CCP, 24);
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ww;
  SEXP Rsh_Fir_reg_ww1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ww = ld ww
  Rsh_Fir_reg_ww = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ww1 = force? ww
  Rsh_Fir_reg_ww1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ww);
  // checkMissing(ww1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_ww1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return ww1
  return Rsh_Fir_reg_ww1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ww2_;
  SEXP Rsh_Fir_reg_ww3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ww2 = ld ww
  Rsh_Fir_reg_ww2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ww3 = force? ww2
  Rsh_Fir_reg_ww3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ww2_);
  // checkMissing(ww3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_ww3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return ww3
  return Rsh_Fir_reg_ww3_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_ww4_;
  SEXP Rsh_Fir_reg_ww5_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_ww7_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_ww8_;
  SEXP Rsh_Fir_reg_ww9_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_ww11_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_ww12_;
  SEXP Rsh_Fir_reg_ww13_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_ww15_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_ww18_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r35_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // return r25
  return Rsh_Fir_reg_r25_;

L6_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // r24 = dyn base(<lang c(`[`(ww, 1.0), `[`(ww, 3.0))>, <lang `[`(ww, c(1.0, 3.0))>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L0_;

L1_:;
  // ww12 = ld ww
  Rsh_Fir_reg_ww12_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ww13 = force? ww12
  Rsh_Fir_reg_ww13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ww12_);
  // checkMissing(ww13)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_ww13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(ww13)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_ww13_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args31);
  // if c5 then L16() else L17(ww13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L16()
    goto L16_;
  } else {
  // L17(ww13)
    Rsh_Fir_reg_ww15_ = Rsh_Fir_reg_ww13_;
    goto L17_;
  }

L8_:;
  // ww4 = ld ww
  Rsh_Fir_reg_ww4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ww5 = force? ww4
  Rsh_Fir_reg_ww5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ww4_);
  // checkMissing(ww5)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_ww5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(ww5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_ww5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args33);
  // if c2 then L10() else L11(ww5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L10()
    goto L10_;
  } else {
  // L11(ww5)
    Rsh_Fir_reg_ww7_ = Rsh_Fir_reg_ww5_;
    goto L11_;
  }

L9_:;
  // r26 = dyn base1(<lang `[`(ww, 1.0)>, <lang `[`(ww, 3.0)>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L1(r26)
  // L1(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L1_;

L2_:;
  // ww8 = ld ww
  Rsh_Fir_reg_ww8_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ww9 = force? ww8
  Rsh_Fir_reg_ww9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ww8_);
  // checkMissing(ww9)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_ww9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(ww9)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_ww9_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args36);
  // if c3 then L13() else L14(ww9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L13()
    goto L13_;
  } else {
  // L14(ww9)
    Rsh_Fir_reg_ww11_ = Rsh_Fir_reg_ww9_;
    goto L14_;
  }

L4_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r35 = dyn identical(r27, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args37[9];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args37[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args37[4] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args37[5] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args37[6] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args37[7] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args37[8] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names13[9];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_array_arg_names13[6] = R_MissingArg;
  Rsh_Fir_array_arg_names13[7] = R_MissingArg;
  Rsh_Fir_array_arg_names13[8] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r35_;
  goto L0_;

L10_:;
  // dr = tryDispatchBuiltin.1("[", ww5)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_ww5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr)
    Rsh_Fir_reg_ww7_ = Rsh_Fir_reg_dr;
    goto L11_;
  }

L11_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r28 = dyn __(ww7, 1.0)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ww7_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L2(r28)
  // L2(r28)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r28_;
  goto L2_;

L16_:;
  // dr4 = tryDispatchBuiltin.1("[", ww13)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_ww13_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc2 then L18() else L17(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr4)
    Rsh_Fir_reg_ww15_ = Rsh_Fir_reg_dr4_;
    goto L17_;
  }

L17_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L3_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r30 = dyn c4(dx1, dx3)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(r30)
  // L1(r30)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r30_;
  goto L1_;

L5_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r34 = dyn __2(ww18, r32)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_ww18_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L4(r34)
  // L4(r34)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r34_;
  goto L4_;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

L13_:;
  // dr2 = tryDispatchBuiltin.1("[", ww9)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_ww9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc1 then L15() else L14(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L15()
    goto L15_;
  } else {
  // L14(dr2)
    Rsh_Fir_reg_ww11_ = Rsh_Fir_reg_dr2_;
    goto L14_;
  }

L14_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r29 = dyn __1(ww11, 3.0)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_ww11_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L3(r29)
  // L3(r29)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r29_;
  goto L3_;

L18_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L4(dx4)
  // L4(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L4_;

L19_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r33 = dyn c6(1.0, 3.0)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L5(ww15, r33)
  // L5(ww15, r33)
  Rsh_Fir_reg_ww18_ = Rsh_Fir_reg_ww15_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L5_;

L20_:;
  // r31 = dyn base2(1.0, 3.0)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L5(ww15, r31)
  // L5(ww15, r31)
  Rsh_Fir_reg_ww18_ = Rsh_Fir_reg_ww15_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L5_;

L15_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_uw;
  SEXP Rsh_Fir_reg_uw1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r40 = `==`(r38, 1.0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args55);
  // return r40
  return Rsh_Fir_reg_r40_;

L1_:;
  // uw = ld uw
  Rsh_Fir_reg_uw = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // uw1 = force? uw
  Rsh_Fir_reg_uw1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uw);
  // checkMissing(uw1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_uw1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r39 = dyn length(uw1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_uw1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L0_;

L2_:;
  // r37 = dyn base3(<sym uw>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_uw2_;
  SEXP Rsh_Fir_reg_uw3_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_nchar;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf nchar
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base4 = ldf nchar in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard4 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // r48 = `>`(r43, 10.0)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args60);
  // return r48
  return Rsh_Fir_reg_r48_;

L2_:;
  // sym5 = ldf names
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base5 = ldf names in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard5 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r42 = dyn base4(<lang names(uw)>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L0_;

L1_:;
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r47 = dyn nchar(r45, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args63[4];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args63[3] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r47_;
  goto L0_;

L4_:;
  // uw2 = ld uw
  Rsh_Fir_reg_uw2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // uw3 = force? uw2
  Rsh_Fir_reg_uw3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uw2_);
  // checkMissing(uw3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_uw3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r46 = dyn names(uw3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_uw3_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L1(r46)
  // L1(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L1_;

L5_:;
  // r44 = dyn base5(<sym uw>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L1(r44)
  // L1(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_sw;
  SEXP Rsh_Fir_reg_sw1_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r53 = `==`(r51, 1.0)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args68);
  // return r53
  return Rsh_Fir_reg_r53_;

L1_:;
  // sw = ld sw
  Rsh_Fir_reg_sw = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // sw1 = force? sw
  Rsh_Fir_reg_sw1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sw);
  // checkMissing(sw1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sw1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r52 = dyn length1(sw1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sw1_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L0_;

L2_:;
  // r50 = dyn base6(<sym sw>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_sw2_;
  SEXP Rsh_Fir_reg_sw3_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf attr
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base7 = ldf attr in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r58 = `==`(r56, 3.0)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args73);
  // return r58
  return Rsh_Fir_reg_r58_;

L1_:;
  // sw2 = ld sw
  Rsh_Fir_reg_sw2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // sw3 = force? sw2
  Rsh_Fir_reg_sw3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sw2_);
  // checkMissing(sw3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sw3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r57 = dyn attr(sw3, "counts")
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sw3_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L0_;

L2_:;
  // r55 = dyn base7(<sym sw>, "counts")
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_warnings3_;
  SEXP Rsh_Fir_reg_r69_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // warnings3 = ldf warnings
  Rsh_Fir_reg_warnings3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r69 = dyn warnings3()
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warnings3_, 0, NULL, NULL, CCP, RHO);
  // return r69
  return Rsh_Fir_reg_r69_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // return n1
  return Rsh_Fir_reg_n1_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_op;
  SEXP Rsh_Fir_reg_op1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // op = ld op
  Rsh_Fir_reg_op = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // op1 = force? op
  Rsh_Fir_reg_op1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op);
  // checkMissing(op1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_op1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return op1
  return Rsh_Fir_reg_op1_;
}
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1246119658 dynamic dispatch ([`...`])

  return Rsh_Fir_user_version_inner1246119658_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1246119658 version 0 (dots -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1246119658/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r17_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 59), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p2 = prom<V +>{
  //   ____ = ldf `%||%`;
  //   p = prom<V +>{
  //     sym = ldf baseenv;
  //     base = ldf baseenv in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L2() else L3();
  //   L0(r1):
  //     c = `is.object`(r1);
  //     if c then L4() else L5(r1);
  //   L2():
  //     baseenv = ldf baseenv in base;
  //     r2 = dyn baseenv();
  //     goto L0(r2);
  //   L3():
  //     r = dyn base();
  //     goto L0(r);
  //   L1(dx1):
  //     return dx1;
  //   L4():
  //     dr = tryDispatchBuiltin.1("[[", r1);
  //     dc = getTryDispatchBuiltinDispatched(dr);
  //     if dc then L6() else L5(dr);
  //   L5(r4):
  //     __ = ldf `[[` in base;
  //     r5 = dyn __(r4, "last.warning");
  //     goto L1(r5);
  //   L6():
  //     dx = getTryDispatchBuiltinValue(dr);
  //     goto L1(dx);
  //   };
  //   p1 = prom<V +>{
  //     sym1 = ldf list;
  //     base1 = ldf list in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r8):
  //     return r8;
  //   L1():
  //     list = ldf list in base;
  //     r9 = dyn list();
  //     goto L0(r9);
  //   L2():
  //     r7 = dyn base1();
  //     goto L0(r7);
  //   };
  //   r11 = dyn ____(p, p1);
  //   return r11;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym2 = ldf list;
  //   base2 = ldf list in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   list1 = ldf list;
  //   ddd1 = ld `...`;
  //   r15 = dyn list1[`...`](ddd1);
  //   goto L0(r15);
  // L2():
  //   r13 = dyn base2(<sym ...>);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_3, 0, NULL, CCP, RHO);
  // r17 = dyn structure[, dots, class](p2, p3, "warnings")
  SEXP Rsh_Fir_array_args110[3];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args110[2] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_arg_names39[2] = Rsh_const(CCP, 69);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 3, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r17]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // ____ = ldf `%||%`
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // p = prom<V +>{
  //   sym = ldf baseenv;
  //   base = ldf baseenv in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r1):
  //   c = `is.object`(r1);
  //   if c then L4() else L5(r1);
  // L2():
  //   baseenv = ldf baseenv in base;
  //   r2 = dyn baseenv();
  //   goto L0(r2);
  // L3():
  //   r = dyn base();
  //   goto L0(r);
  // L1(dx1):
  //   return dx1;
  // L4():
  //   dr = tryDispatchBuiltin.1("[[", r1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(r4):
  //   __ = ldf `[[` in base;
  //   r5 = dyn __(r4, "last.warning");
  //   goto L1(r5);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_1, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   list = ldf list in base;
  //   r9 = dyn list();
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base1();
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_2, 0, NULL, CCP, RHO);
  // r11 = dyn ____(p, p1)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names36, CCP, RHO);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_baseenv;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r5_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // sym = ldf baseenv
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // base = ldf baseenv in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 62), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args99);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c = `is.object`(r1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args100);
  // if c then L4() else L5(r1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L4()
    goto L4_;
  } else {
  // L5(r1)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r1_1;
    goto L5_;
  }

L2_:;
  // baseenv = ldf baseenv in base
  Rsh_Fir_reg_baseenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 62), RHO);
  // r2 = dyn baseenv()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_baseenv, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L3_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

L1_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L4_:;
  // dr = tryDispatchBuiltin.1("[[", r1)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args101);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_dr1;
    goto L5_;
  }

L5_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r5 = dyn __(r4, "last.warning")
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r5_1;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r9_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r9 = dyn list()
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_1;
  goto L0_;

L2_:;
  // r7 = dyn base1()
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 0, NULL, NULL, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r15_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf list
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // list1 = ldf list
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 59), RHO);
  // r15 = dyn list1[`...`](ddd1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_1;
  goto L0_;

L2_:;
  // r13 = dyn base2(<sym ...>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
