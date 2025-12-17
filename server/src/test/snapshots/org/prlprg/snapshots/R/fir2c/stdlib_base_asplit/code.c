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
SEXP Rsh_Fir_user_function_inner2186253718_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2186253718_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2186253718_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2186253718_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2186253718_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2186253718_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2186253718_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2186253718_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2186253718_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2186253718_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2186253718_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3002224933_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3002224933_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3002224933_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3002224933_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3002224933_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_array;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_asplit;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_asplit1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_split;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_asplit2_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_split1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_split2_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r40_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2186253718
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2186253718_, RHO, CCP);
  // st asplit = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st d = <int 2, 3, 4>
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // array = ldf array
  Rsh_Fir_reg_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf seq_len;
  //   base = ldf seq_len in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r2):
  //   return r2;
  // L2():
  //   sym1 = ldf prod;
  //   base1 = ldf prod in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L4() else L5();
  // L3():
  //   r1 = dyn base(<lang prod(d)>);
  //   goto L0(r1);
  // L1(r4):
  //   r6 = seq_len(r4);
  //   goto L0(r6);
  // L4():
  //   d = ld d;
  //   d1 = force? d;
  //   checkMissing(d1);
  //   prod = ldf prod in base;
  //   r5 = dyn prod(d1);
  //   goto L1(r5);
  // L5():
  //   r3 = dyn base1(<sym d>);
  //   goto L1(r3);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   d2 = ld d;
  //   d3 = force? d2;
  //   checkMissing(d3);
  //   return d3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn array(p, p1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 10 [r9]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st x = r9
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 12 [x]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // asplit = ldf asplit
  Rsh_Fir_reg_asplit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p2 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r11 = dyn asplit(p2, 2.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asplit, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 18 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L4_:;
  // asplit1 = ldf asplit
  Rsh_Fir_reg_asplit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p3 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   c = ldf c in base;
  //   r15 = dyn c(1.0, 2.0);
  //   goto L0(r15);
  // L2():
  //   r13 = dyn base2(1.0, 2.0);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r17 = dyn asplit1(p3, p4)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asplit1_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 23 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // split = ldf split
  Rsh_Fir_reg_split = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p5 = prom<V +>{
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   return x7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   slice_index = ldf `slice.index`;
  //   p6 = prom<V +>{
  //     x8 = ld x;
  //     x9 = force? x8;
  //     checkMissing(x9);
  //     return x9;
  //   };
  //   p7 = prom<V +>{
  //     sym3 = ldf c;
  //     base3 = ldf c in base;
  //     guard3 = `==`.4(sym3, base3);
  //     if guard3 then L1() else L2();
  //   L0(r21):
  //     return r21;
  //   L1():
  //     c1 = ldf c in base;
  //     r22 = dyn c1(1.0, 2.0);
  //     goto L0(r22);
  //   L2():
  //     r20 = dyn base3(1.0, 2.0);
  //     goto L0(r20);
  //   };
  //   r24 = dyn slice_index(p6, p7);
  //   return r24;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r26 = dyn split(p5, p8)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 28 [r26]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p9 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6>;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r28 = dyn matrix(p9, 2.0, 3.0)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 34 [r28]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L10_:;
  // st x = r28
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // asplit2 = ldf asplit
  Rsh_Fir_reg_asplit2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p10 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   return x11;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r30 = dyn asplit2(p10, 1.0)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asplit2_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 40 [r30]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L12_:;
  // split1 = ldf split
  Rsh_Fir_reg_split1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p11 = prom<V +>{
  //   x12 = ld x;
  //   x13 = force? x12;
  //   checkMissing(x13);
  //   return x13;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   slice_index1 = ldf `slice.index`;
  //   p12 = prom<V +>{
  //     x14 = ld x;
  //     x15 = force? x14;
  //     checkMissing(x15);
  //     return x15;
  //   };
  //   r33 = dyn slice_index1(p12, 1.0);
  //   return r33;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r35 = dyn split1(p11, p13)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 45 [r35]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L14_:;
  // split2 = ldf split
  Rsh_Fir_reg_split2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p14 = prom<V +>{
  //   x16 = ld x;
  //   x17 = force? x16;
  //   checkMissing(x17);
  //   return x17;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   row = ldf row;
  //   p15 = prom<V +>{
  //     x18 = ld x;
  //     x19 = force? x18;
  //     checkMissing(x19);
  //     return x19;
  //   };
  //   r38 = dyn row(p15);
  //   return r38;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r40 = dyn split2(p14, p16)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split2_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L16() else D16()
  // L16()
  goto L16_;

D16_:;
  // deopt 50 [r40]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_d;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_prod;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf seq_len
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf seq_len in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r2
  return Rsh_Fir_reg_r2_;

L2_:;
  // sym1 = ldf prod
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf prod in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r1 = dyn base(<lang prod(d)>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

L1_:;
  // r6 = seq_len(r4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args3);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r6_;
  goto L0_;

L4_:;
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn prod(d1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L5_:;
  // r3 = dyn base1(<sym d>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d2_;
  SEXP Rsh_Fir_reg_d3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return d3
  return Rsh_Fir_reg_d3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r15 = dyn c(1.0, 2.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L0_;

L2_:;
  // r13 = dyn base2(1.0, 2.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return x7
  return Rsh_Fir_reg_x7_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_slice_index;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // slice_index = ldf `slice.index`
  Rsh_Fir_reg_slice_index = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p6 = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   return x9;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   c1 = ldf c in base;
  //   r22 = dyn c1(1.0, 2.0);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base3(1.0, 2.0);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r24 = dyn slice_index(p6, p7)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slice_index, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return x9
  return Rsh_Fir_reg_x9_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r22 = dyn c1(1.0, 2.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base3(1.0, 2.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6>
  return Rsh_const(CCP, 14);
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return x11
  return Rsh_Fir_reg_x11_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return x13
  return Rsh_Fir_reg_x13_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_slice_index1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // slice_index1 = ldf `slice.index`
  Rsh_Fir_reg_slice_index1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p12 = prom<V +>{
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   return x15;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r33 = dyn slice_index1(p12, 1.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slice_index1_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r33
  return Rsh_Fir_reg_r33_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return x17
  return Rsh_Fir_reg_x17_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // row = ldf row
  Rsh_Fir_reg_row = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // p15 = prom<V +>{
  //   x18 = ld x;
  //   x19 = force? x18;
  //   checkMissing(x19);
  //   return x19;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r38 = dyn row(p15)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names16, CCP, RHO);
  // return r38
  return Rsh_Fir_reg_r38_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return x19
  return Rsh_Fir_reg_x19_;
}
SEXP Rsh_Fir_user_function_inner2186253718_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2186253718 dynamic dispatch ([x, MARGIN])

  return Rsh_Fir_user_version_inner2186253718_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2186253718_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2186253718 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2186253718/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_MARGIN;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_dl;
  SEXP Rsh_Fir_reg_dl1_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_dl2_;
  SEXP Rsh_Fir_reg_dl3_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_as_array;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_x9_1;
  SEXP Rsh_Fir_reg_x10_1;
  SEXP Rsh_Fir_reg_dim1_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_x11_1;
  SEXP Rsh_Fir_reg_x12_1;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_dl4_;
  SEXP Rsh_Fir_reg_dl5_;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_MARGIN1_;
  SEXP Rsh_Fir_reg_MARGIN2_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_1;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_dn;
  SEXP Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_MARGIN3_;
  SEXP Rsh_Fir_reg_MARGIN4_;
  SEXP Rsh_Fir_reg_dnn;
  SEXP Rsh_Fir_reg_dnn1_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_1;
  SEXP Rsh_Fir_reg_MARGIN5_;
  SEXP Rsh_Fir_reg_MARGIN6_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_d1;
  SEXP Rsh_Fir_reg_d1_1;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_d3_1;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_MARGIN7_;
  SEXP Rsh_Fir_reg_MARGIN8_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_d4_;
  SEXP Rsh_Fir_reg_d5_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_d7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_MARGIN9_;
  SEXP Rsh_Fir_reg_MARGIN10_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_d_call;
  SEXP Rsh_Fir_reg_d_call1_;
  SEXP Rsh_Fir_reg_anyNA1_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_d_ans;
  SEXP Rsh_Fir_reg_d_ans1_;
  SEXP Rsh_Fir_reg_anyNA2_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_ds;
  SEXP Rsh_Fir_reg_ds1_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_ds3_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_MARGIN11_;
  SEXP Rsh_Fir_reg_MARGIN12_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_ds4_;
  SEXP Rsh_Fir_reg_ds5_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_ds7_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_MARGIN13_;
  SEXP Rsh_Fir_reg_MARGIN14_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_dn2_;
  SEXP Rsh_Fir_reg_dn3_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_dn5_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_MARGIN15_;
  SEXP Rsh_Fir_reg_MARGIN16_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_dn6_;
  SEXP Rsh_Fir_reg_dn7_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_dn9_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_MARGIN17_;
  SEXP Rsh_Fir_reg_MARGIN18_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_d_ans2_;
  SEXP Rsh_Fir_reg_d_ans3_;
  SEXP Rsh_Fir_reg_prod1;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_aperm;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_d_call2_;
  SEXP Rsh_Fir_reg_d_call3_;
  SEXP Rsh_Fir_reg_prod1_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_d8_;
  SEXP Rsh_Fir_reg_d9_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_dim__;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_lapply;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_array1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_r89_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_MARGIN = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st MARGIN = MARGIN
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_MARGIN, RHO);
  (void)(Rsh_Fir_reg_MARGIN);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L0_:;
  // st dl = r1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // dl = ld dl
  Rsh_Fir_reg_dl = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L44() else D3()
  // L44()
  goto L44_;

L37_:;
  // sym1 = ldf dim
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf dim in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard1 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L38_:;
  // r = dyn base(<lang dim(x)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D3_:;
  // deopt 11 [dl]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dl;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L1_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r5 = dyn length(r3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L43() else D2()
  // L43()
  goto L43_;

L39_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L41() else D0()
  // L41()
  goto L41_;

L40_:;
  // r2 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

L44_:;
  // dl1 = force? dl
  Rsh_Fir_reg_dl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dl);
  // checkMissing(dl1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r6 = `!`(dl1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dl1_;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args41);
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c then L45() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L45()
    goto L45_;
  } else {
  // L2()
    goto L2_;
  }

D0_:;
  // deopt 4 [x1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // sym2 = ldf `is.object`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf `is.object` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard2 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L41_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r4 = dyn dim(x2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L42() else D1()
  // L42()
  goto L42_;

L43_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r5_1;
  goto L0_;

L45_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L46() else D4()
  // L46()
  goto L46_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // if c2 then L52() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L52()
    goto L52_;
  } else {
  // L5()
    goto L5_;
  }

L42_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_1;
  goto L1_;

L46_:;
  // r7 = dyn stop("dim(x) must have a positive length")
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L47() else D5()
  // L47()
  goto L47_;

L49_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L51() else D6()
  // L51()
  goto L51_;

L50_:;
  // r9 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_1;
  goto L4_;

D5_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 21 [x3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym3 = ldf dim
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf dim in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard3 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L47_:;
  // goto L3()
  // L3()
  goto L3_;

L51_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x4_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args51);
  // goto L4(c1)
  // L4(c1)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c1_1;
  goto L4_;

L52_:;
  // dl2 = ld dl
  Rsh_Fir_reg_dl2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L53() else D7()
  // L53()
  goto L53_;

D7_:;
  // deopt 24 [dl2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_dl2_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L9_:;
  // st d = r19
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym4 = ldf dimnames
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base4 = ldf dimnames in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard4 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L53_:;
  // dl3 = force? dl2
  Rsh_Fir_reg_dl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dl2_);
  // checkMissing(dl3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r11 = `==`(dl3, 2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dl3_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args54);
  // c3 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // if c3 then L54() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L54()
    goto L54_;
  } else {
  // L6()
    goto L6_;
  }

L61_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L63() else D12()
  // L63()
  goto L63_;

L62_:;
  // r18 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D12_:;
  // deopt 41 [x9]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x9_1;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L6_:;
  // as_array = ldf `as.array`
  Rsh_Fir_reg_as_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L58() else D10()
  // L58()
  goto L58_;

L7_:;
  // st x = r14
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r14_1, RHO);
  (void)(Rsh_Fir_reg_r14_1);
  // goto L8()
  // L8()
  goto L8_;

L10_:;
  // st dn = r22
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r22_1, RHO);
  (void)(Rsh_Fir_reg_r22_1);
  // sym5 = ldf seq_len
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base5 = ldf seq_len in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard5 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L54_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L55() else D8()
  // L55()
  goto L55_;

L63_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_1);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x10_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // dim1 = ldf dim in base
  Rsh_Fir_reg_dim1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r20 = dyn dim1(x10)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x10_1;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim1_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L64() else D13()
  // L64()
  goto L64_;

L65_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L67() else D14()
  // L67()
  goto L67_;

L66_:;
  // r21 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r21_1;
  goto L10_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 44 [r20]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 48 [x11]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x11_1;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L11_:;
  // st ds = r25
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym6 = ldf `is.character`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base6 = ldf `is.character` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard6 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L55_:;
  // p = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_, 0, NULL, CCP, RHO);
  // r13 = dyn as_matrix(p)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L56() else D9()
  // L56()
  goto L56_;

L58_:;
  // p1 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_1, 0, NULL, CCP, RHO);
  // r16 = dyn as_array(p1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_array, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L59() else D11()
  // L59()
  goto L59_;

L64_:;
  // goto L9(r20)
  // L9(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_1;
  goto L9_;

L67_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_1);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x12_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r23 = dyn dimnames(x12)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_x12_1;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L68() else D15()
  // L68()
  goto L68_;

L69_:;
  // dl4 = ld dl
  Rsh_Fir_reg_dl4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L71() else D16()
  // L71()
  goto L71_;

L70_:;
  // r24 = dyn base5(<sym dl>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_1;
  goto L11_;

D9_:;
  // deopt 31 [r13]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 35 [r16]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 51 [r23]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 54 [dl4]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_dl4_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L12_:;
  // c5 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r28_1;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c5 then L75() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L75()
    goto L75_;
  } else {
  // L13()
    goto L13_;
  }

L56_:;
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r13_1;
  goto L7_;

L59_:;
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r16_;
  goto L7_;

L68_:;
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r23_;
  goto L10_;

L71_:;
  // dl5 = force? dl4
  Rsh_Fir_reg_dl5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dl4_);
  // checkMissing(dl5)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dl5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r26 = seq_len(dl5)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dl5_;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args71);
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_1;
  goto L11_;

L72_:;
  // MARGIN1 = ld MARGIN
  Rsh_Fir_reg_MARGIN1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L74() else D17()
  // L74()
  goto L74_;

L73_:;
  // r27 = dyn base6(<sym MARGIN>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r27_;
  goto L12_;

D17_:;
  // deopt 59 [MARGIN1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_MARGIN1_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // d = ld d
  Rsh_Fir_reg_d1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L100() else D29()
  // L100()
  goto L100_;

L74_:;
  // MARGIN2 = force? MARGIN1
  Rsh_Fir_reg_MARGIN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN1_);
  // checkMissing(MARGIN2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_MARGIN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c4 = `is.character`(MARGIN2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_MARGIN2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args74);
  // goto L12(c4)
  // L12(c4)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_c4_;
  goto L12_;

L75_:;
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard7 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

D29_:;
  // deopt 102 [d]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_d1;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L14_:;
  // c7 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r30_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c7 then L82() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L82()
    goto L82_;
  } else {
  // L16()
    goto L16_;
  }

L76_:;
  // sym8 = ldf names
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base8 = ldf names in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard8 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L77_:;
  // r29 = dyn base7(<lang `<-`(dnn, names(dn))>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L14(r29)
  // L14(r29)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r29_;
  goto L14_;

L100_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_d1);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_d1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(d1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_d1_1;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args80);
  // if c9 then L101() else L102(d1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L101()
    goto L101_;
  } else {
  // L102(d1)
    Rsh_Fir_reg_d3_1 = Rsh_Fir_reg_d1_1;
    goto L102_;
  }

L15_:;
  // st dnn = r32
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // c6 = `==`(r32, NULL)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args81);
  // goto L14(c6)
  // L14(c6)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_c6_;
  goto L14_;

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym9 = ldf match
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base9 = ldf match in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard9 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L23_:;
  // st `d.call` = dx1
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // d4 = ld d
  Rsh_Fir_reg_d4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L105() else D31()
  // L105()
  goto L105_;

L78_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L80() else D18()
  // L80()
  goto L80_;

L79_:;
  // r31 = dyn base8(<sym dn>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L15(r31)
  // L15(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L15_;

L82_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L83() else D20()
  // L83()
  goto L83_;

L101_:;
  // dr = tryDispatchBuiltin.1("[", d1)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_d1_1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc then L103() else L102(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L103()
    goto L103_;
  } else {
  // L102(dr)
    Rsh_Fir_reg_d3_1 = Rsh_Fir_reg_dr;
    goto L102_;
  }

L102_:;
  // MARGIN7 = ld MARGIN
  Rsh_Fir_reg_MARGIN7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L104() else D30()
  // L104()
  goto L104_;

D18_:;
  // deopt 65 [dn]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 104 [d3, MARGIN7]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_d3_1;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_MARGIN7_;
  Rsh_Fir_deopt(104, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 109 [d4]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_d4_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L18_:;
  // st MARGIN = r37
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // sym10 = ldf anyNA
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base10 = ldf anyNA in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard10 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L80_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r33 = dyn names(dn1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r33_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L81() else D19()
  // L81()
  goto L81_;

L83_:;
  // r34 = dyn stop1("'x' must have named dimnames")
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L84() else D21()
  // L84()
  goto L84_;

L86_:;
  // MARGIN3 = ld MARGIN
  Rsh_Fir_reg_MARGIN3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L88() else D22()
  // L88()
  goto L88_;

L87_:;
  // r36 = dyn base9(<sym MARGIN>, <sym dnn>)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L18(r36)
  // L18(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L18_;

L103_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L23(dx)
  // L23(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L23_;

L104_:;
  // MARGIN8 = force? MARGIN7
  Rsh_Fir_reg_MARGIN8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN7_);
  // checkMissing(MARGIN8)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_MARGIN8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // r45 = `-`(<missing>, MARGIN8)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_MARGIN8_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args93);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r46 = dyn __(d3, r45)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_d3_1;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L23(r46)
  // L23(r46)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r46_;
  goto L23_;

L105_:;
  // d5 = force? d4
  Rsh_Fir_reg_d5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_d5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(d5)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args96);
  // if c10 then L106() else L107(d5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L106()
    goto L106_;
  } else {
  // L107(d5)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_d5_;
    goto L107_;
  }

D19_:;
  // deopt 68 [r33]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r33_1;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 74 [r34]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 79 [MARGIN3]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_MARGIN3_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L19_:;
  // c8 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r40_1;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args97);
  // if c8 then L95() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L95()
    goto L95_;
  } else {
  // L20()
    goto L20_;
  }

L24_:;
  // st `d.ans` = dx3
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym11 = ldf anyNA
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base11 = ldf anyNA in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard11 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L81_:;
  // goto L15(r33)
  // L15(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_1;
  goto L15_;

L84_:;
  // goto L17()
  // L17()
  goto L17_;

L88_:;
  // MARGIN4 = force? MARGIN3
  Rsh_Fir_reg_MARGIN4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN3_);
  // checkMissing(MARGIN4)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_MARGIN4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // dnn = ld dnn
  Rsh_Fir_reg_dnn = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L89() else D23()
  // L89()
  goto L89_;

L91_:;
  // MARGIN5 = ld MARGIN
  Rsh_Fir_reg_MARGIN5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L93() else D25()
  // L93()
  goto L93_;

L92_:;
  // r39 = dyn base10(<sym MARGIN>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L19(r39)
  // L19(r39)
  Rsh_Fir_reg_r40_1 = Rsh_Fir_reg_r39_;
  goto L19_;

L106_:;
  // dr2 = tryDispatchBuiltin.1("[", d5)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args101);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if dc1 then L108() else L107(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L108()
    goto L108_;
  } else {
  // L107(dr2)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_dr2_;
    goto L107_;
  }

L107_:;
  // MARGIN9 = ld MARGIN
  Rsh_Fir_reg_MARGIN9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L109() else D32()
  // L109()
  goto L109_;

D23_:;
  // deopt 81 [dnn]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_dnn;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 90 [MARGIN5]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_MARGIN5_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 111 [d7, MARGIN9]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_MARGIN9_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L21(NULL)
  // L21(NULL)
  Rsh_Fir_reg_r43_ = Rsh_const(CCP, 36);
  goto L21_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L25_:;
  // c11 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args103);
  // if c11 then L26(c11) else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L26(c11)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c11_;
    goto L26_;
  } else {
  // L114()
    goto L114_;
  }

L89_:;
  // dnn1 = force? dnn
  Rsh_Fir_reg_dnn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dnn);
  // checkMissing(dnn1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dnn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r38 = dyn match(MARGIN4, dnn1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args105[4];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_MARGIN4_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_dnn1_;
  Rsh_Fir_array_args105[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args105[3] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names39[4];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = R_MissingArg;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L90() else D24()
  // L90()
  goto L90_;

L93_:;
  // MARGIN6 = force? MARGIN5
  Rsh_Fir_reg_MARGIN6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN5_);
  // checkMissing(MARGIN6)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_MARGIN6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r41 = dyn anyNA(MARGIN6)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_MARGIN6_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L94() else D26()
  // L94()
  goto L94_;

L95_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L96() else D27()
  // L96()
  goto L96_;

L108_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L24(dx2)
  // L24(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L24_;

L109_:;
  // MARGIN10 = force? MARGIN9
  Rsh_Fir_reg_MARGIN10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN9_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r47 = dyn __1(d7, MARGIN10)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_MARGIN10_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L24(r47)
  // L24(r47)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r47_;
  goto L24_;

L110_:;
  // d_call = ld `d.call`
  Rsh_Fir_reg_d_call = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L112() else D33()
  // L112()
  goto L112_;

L111_:;
  // r48 = dyn base11(<sym d.call>)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L25(r48)
  // L25(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L25_;

D24_:;
  // deopt 86 [r38]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 93 [r41]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 95 []
  Rsh_Fir_deopt(95, 0, NULL, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 117 [d_call]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_d_call;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L26_:;
  // c20 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args111);
  // if c20 then L120() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L120()
    goto L120_;
  } else {
  // L28()
    goto L28_;
  }

L90_:;
  // goto L18(r38)
  // L18(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_1;
  goto L18_;

L94_:;
  // goto L19(r41)
  // L19(r41)
  Rsh_Fir_reg_r40_1 = Rsh_Fir_reg_r41_;
  goto L19_;

L96_:;
  // r42 = dyn stop2("not all elements of 'MARGIN' are names of dimensions")
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L97() else D28()
  // L97()
  goto L97_;

L112_:;
  // d_call1 = force? d_call
  Rsh_Fir_reg_d_call1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d_call);
  // checkMissing(d_call1)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_d_call1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // anyNA1 = ldf anyNA in base
  Rsh_Fir_reg_anyNA1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r50 = dyn anyNA1(d_call1)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_d_call1_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA1_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L113() else D34()
  // L113()
  goto L113_;

L114_:;
  // sym12 = ldf anyNA
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base12 = ldf anyNA in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args115);
  // if guard12 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

D28_:;
  // deopt 97 [r42]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 120 [r50]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L27_:;
  // c17 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args116);
  // c18 = `||`(c16, c17)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args117);
  // goto L26(c18)
  // L26(c18)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c18_;
  goto L26_;

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // ds = ld ds
  Rsh_Fir_reg_ds = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L124() else D39()
  // L124()
  goto L124_;

L97_:;
  // goto L21(r42)
  // L21(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L21_;

L113_:;
  // goto L25(r50)
  // L25(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L25_;

L115_:;
  // d_ans = ld `d.ans`
  Rsh_Fir_reg_d_ans = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L117() else D35()
  // L117()
  goto L117_;

L116_:;
  // r51 = dyn base12(<sym d.ans>)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L27(c11, r51)
  // L27(c11, r51)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L27_;

L120_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L121() else D37()
  // L121()
  goto L121_;

D35_:;
  // deopt 123 [c11, d_ans]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_d_ans;
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 129 []
  Rsh_Fir_deopt(129, 0, NULL, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 134 [ds]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_ds;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L117_:;
  // d_ans1 = force? d_ans
  Rsh_Fir_reg_d_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d_ans);
  // checkMissing(d_ans1)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_d_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // anyNA2 = ldf anyNA in base
  Rsh_Fir_reg_anyNA2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r53 = dyn anyNA2(d_ans1)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_d_ans1_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA2_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L118() else D36()
  // L118()
  goto L118_;

L121_:;
  // r54 = dyn stop3("'MARGIN' does not match dim(X)")
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L122() else D38()
  // L122()
  goto L122_;

L124_:;
  // ds1 = force? ds
  Rsh_Fir_reg_ds1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ds);
  // checkMissing(ds1)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_ds1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(ds1)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_ds1_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args123);
  // if c21 then L125() else L126(ds1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L125()
    goto L125_;
  } else {
  // L126(ds1)
    Rsh_Fir_reg_ds3_ = Rsh_Fir_reg_ds1_;
    goto L126_;
  }

D36_:;
  // deopt 126 [c11, r53]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 131 [r54]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L30_:;
  // st `s.call` = dx5
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // ds4 = ld ds
  Rsh_Fir_reg_ds4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L129() else D41()
  // L129()
  goto L129_;

L118_:;
  // goto L27(c11, r53)
  // L27(c11, r53)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L27_;

L122_:;
  // goto L29()
  // L29()
  goto L29_;

L125_:;
  // dr4 = tryDispatchBuiltin.1("[", ds1)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_ds1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args124);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if dc2 then L127() else L126(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L127()
    goto L127_;
  } else {
  // L126(dr4)
    Rsh_Fir_reg_ds3_ = Rsh_Fir_reg_dr4_;
    goto L126_;
  }

L126_:;
  // MARGIN11 = ld MARGIN
  Rsh_Fir_reg_MARGIN11_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L128() else D40()
  // L128()
  goto L128_;

D40_:;
  // deopt 136 [ds3, MARGIN11]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_ds3_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_MARGIN11_;
  Rsh_Fir_deopt(136, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 141 [ds4]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_ds4_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L127_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // goto L30(dx4)
  // L30(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L30_;

L128_:;
  // MARGIN12 = force? MARGIN11
  Rsh_Fir_reg_MARGIN12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN11_);
  // checkMissing(MARGIN12)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_MARGIN12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // r56 = `-`(<missing>, MARGIN12)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_MARGIN12_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args128);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r57 = dyn __2(ds3, r56)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_ds3_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L30(r57)
  // L30(r57)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r57_;
  goto L30_;

L129_:;
  // ds5 = force? ds4
  Rsh_Fir_reg_ds5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ds4_);
  // checkMissing(ds5)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_ds5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(ds5)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_ds5_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args131);
  // if c22 then L130() else L131(ds5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L130()
    goto L130_;
  } else {
  // L131(ds5)
    Rsh_Fir_reg_ds7_ = Rsh_Fir_reg_ds5_;
    goto L131_;
  }

L31_:;
  // st `s.ans` = dx7
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // dn2 = ld dn
  Rsh_Fir_reg_dn2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L134() else D43()
  // L134()
  goto L134_;

L130_:;
  // dr6 = tryDispatchBuiltin.1("[", ds5)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_ds5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc3 then L132() else L131(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L132()
    goto L132_;
  } else {
  // L131(dr6)
    Rsh_Fir_reg_ds7_ = Rsh_Fir_reg_dr6_;
    goto L131_;
  }

L131_:;
  // MARGIN13 = ld MARGIN
  Rsh_Fir_reg_MARGIN13_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L133() else D42()
  // L133()
  goto L133_;

D42_:;
  // deopt 143 [ds7, MARGIN13]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_ds7_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_MARGIN13_;
  Rsh_Fir_deopt(143, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 147 [dn2]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_dn2_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L132_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // goto L31(dx6)
  // L31(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L31_;

L133_:;
  // MARGIN14 = force? MARGIN13
  Rsh_Fir_reg_MARGIN14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN13_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r58 = dyn __3(ds7, MARGIN14)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_ds7_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_MARGIN14_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L31(r58)
  // L31(r58)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r58_;
  goto L31_;

L134_:;
  // dn3 = force? dn2
  Rsh_Fir_reg_dn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn2_);
  // checkMissing(dn3)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(dn3)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args137);
  // if c23 then L135() else L136(dn3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L135()
    goto L135_;
  } else {
  // L136(dn3)
    Rsh_Fir_reg_dn5_ = Rsh_Fir_reg_dn3_;
    goto L136_;
  }

L32_:;
  // st `dn.call` = dx9
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // dn6 = ld dn
  Rsh_Fir_reg_dn6_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L139() else D45()
  // L139()
  goto L139_;

L135_:;
  // dr8 = tryDispatchBuiltin.1("[", dn3)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args138);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc4 then L137() else L136(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L137()
    goto L137_;
  } else {
  // L136(dr8)
    Rsh_Fir_reg_dn5_ = Rsh_Fir_reg_dr8_;
    goto L136_;
  }

L136_:;
  // MARGIN15 = ld MARGIN
  Rsh_Fir_reg_MARGIN15_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L138() else D44()
  // L138()
  goto L138_;

D44_:;
  // deopt 149 [dn5, MARGIN15]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_MARGIN15_;
  Rsh_Fir_deopt(149, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 154 [dn6]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_dn6_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L137_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L32(dx8)
  // L32(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L32_;

L138_:;
  // MARGIN16 = force? MARGIN15
  Rsh_Fir_reg_MARGIN16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN15_);
  // checkMissing(MARGIN16)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_MARGIN16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // r59 = `-`(<missing>, MARGIN16)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_MARGIN16_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args142);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r60 = dyn __4(dn5, r59)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L32(r60)
  // L32(r60)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r60_;
  goto L32_;

L139_:;
  // dn7 = force? dn6
  Rsh_Fir_reg_dn7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn6_);
  // checkMissing(dn7)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dn7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(dn7)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dn7_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args145);
  // if c24 then L140() else L141(dn7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L140()
    goto L140_;
  } else {
  // L141(dn7)
    Rsh_Fir_reg_dn9_ = Rsh_Fir_reg_dn7_;
    goto L141_;
  }

L33_:;
  // st `dn.ans` = dx11
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L144() else D47()
  // L144()
  goto L144_;

L140_:;
  // dr10 = tryDispatchBuiltin.1("[", dn7)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_dn7_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args146);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // if dc5 then L142() else L141(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L142()
    goto L142_;
  } else {
  // L141(dr10)
    Rsh_Fir_reg_dn9_ = Rsh_Fir_reg_dr10_;
    goto L141_;
  }

L141_:;
  // MARGIN17 = ld MARGIN
  Rsh_Fir_reg_MARGIN17_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L143() else D46()
  // L143()
  goto L143_;

D46_:;
  // deopt 156 [dn9, MARGIN17]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_dn9_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_MARGIN17_;
  Rsh_Fir_deopt(156, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 163 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack50[3];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_const(CCP, 36);
  Rsh_Fir_deopt(163, 3, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L142_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L33(dx10)
  // L33(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L33_;

L143_:;
  // MARGIN18 = force? MARGIN17
  Rsh_Fir_reg_MARGIN18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN17_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r61 = dyn __5(dn9, MARGIN18)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dn9_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_MARGIN18_;
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L33(r61)
  // L33(r61)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r61_;
  goto L33_;

L144_:;
  // r62 = dyn dimnames__(l, NULL, NULL)
  SEXP Rsh_Fir_array_args150[3];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args150[2] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names52[3];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_array_arg_names52[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L145() else D48()
  // L145()
  goto L145_;

D48_:;
  // deopt 165 [NULL, r62]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(165, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L145_:;
  // st x = r62
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // sym13 = ldf prod
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base13 = ldf prod in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args151);
  // if guard13 then L146() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L146()
    goto L146_;
  } else {
  // L147()
    goto L147_;
  }

L34_:;
  // st d2 = r64
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // aperm = ldf aperm
  Rsh_Fir_reg_aperm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L150() else D51()
  // L150()
  goto L150_;

L146_:;
  // d_ans2 = ld `d.ans`
  Rsh_Fir_reg_d_ans2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L148() else D49()
  // L148()
  goto L148_;

L147_:;
  // r63 = dyn base13(<sym d.ans>)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L34(r63)
  // L34(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L34_;

D49_:;
  // deopt 169 [d_ans2]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_d_ans2_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 175 []
  Rsh_Fir_deopt(175, 0, NULL, CCP, RHO);
  return R_NilValue;

L148_:;
  // d_ans3 = force? d_ans2
  Rsh_Fir_reg_d_ans3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d_ans2_);
  // checkMissing(d_ans3)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_d_ans3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // prod = ldf prod in base
  Rsh_Fir_reg_prod1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r65 = dyn prod(d_ans3)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_d_ans3_;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod1, 1, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L149() else D50()
  // L149()
  goto L149_;

L150_:;
  // p2 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym14 = ldf c;
  //   base14 = ldf c in base;
  //   guard14 = `==`.4(sym14, base14);
  //   if guard14 then L1() else L2();
  // L0(r68):
  //   return r68;
  // L1():
  //   s_call = ld `s.call`;
  //   s_call1 = force? s_call;
  //   checkMissing(s_call1);
  //   s_ans = ld `s.ans`;
  //   s_ans1 = force? s_ans;
  //   checkMissing(s_ans1);
  //   c25 = ldf c in base;
  //   r69 = dyn c25(s_call1, s_ans1);
  //   goto L0(r69);
  // L2():
  //   r67 = dyn base14(<sym s.call>, <sym s.ans>);
  //   goto L0(r67);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_3, 0, NULL, CCP, RHO);
  // r71 = dyn aperm(p2, p3)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_aperm, 2, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L151() else D52()
  // L151()
  goto L151_;

D50_:;
  // deopt 172 [r65]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 178 [r71]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L149_:;
  // goto L34(r65)
  // L34(r65)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L34_;

L151_:;
  // st newx = r71
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r71_, RHO);
  (void)(Rsh_Fir_reg_r71_);
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args162);
  // if guard15 then L152() else L153()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L152()
    goto L152_;
  } else {
  // L153()
    goto L153_;
  }

L35_:;
  // l1 = ld newx
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L160() else D57()
  // L160()
  goto L160_;

L152_:;
  // sym16 = ldf prod
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base16 = ldf prod in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args163);
  // if guard16 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L153_:;
  // r72 = dyn base15(<lang prod(d.call)>, <sym d2>)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args164[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L35(r72)
  // L35(r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r72_;
  goto L35_;

D57_:;
  // deopt 193 [r73, l1, r73]
  SEXP Rsh_Fir_array_deopt_stack55[3];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(193, 3, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L36_:;
  // d8 = ld d2
  Rsh_Fir_reg_d8_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L158() else D55()
  // L158()
  goto L158_;

L154_:;
  // d_call2 = ld `d.call`
  Rsh_Fir_reg_d_call2_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L156() else D53()
  // L156()
  goto L156_;

L155_:;
  // r74 = dyn base16(<sym d.call>)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L36(r74)
  // L36(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L36_;

L160_:;
  // r78 = dyn dim__(l1, NULL, r73)
  SEXP Rsh_Fir_array_args166[3];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args166[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args166[2] = Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_array_arg_names60[3];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_array_arg_names60[2] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L161() else D58()
  // L161()
  goto L161_;

D53_:;
  // deopt 184 [d_call2]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_d_call2_;
  Rsh_Fir_deopt(184, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 188 [d8]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_d8_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 195 [r73, r78]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(195, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L156_:;
  // d_call3 = force? d_call2
  Rsh_Fir_reg_d_call3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d_call2_);
  // checkMissing(d_call3)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_d_call3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // prod1 = ldf prod in base
  Rsh_Fir_reg_prod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r76 = dyn prod1(d_call3)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_d_call3_;
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod1_, 1, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L157() else D54()
  // L157()
  goto L157_;

L158_:;
  // d9 = force? d8
  Rsh_Fir_reg_d9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d8_);
  // checkMissing(d9)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_d9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // c26 = ldf c in base
  Rsh_Fir_reg_c26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r77 = dyn c26(r75, d9)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_d9_;
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c26_, 2, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L159() else D56()
  // L159()
  goto L159_;

L161_:;
  // st newx = r78
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L162() else D59()
  // L162()
  goto L162_;

D54_:;
  // deopt 187 [r76]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 191 [r77]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 198 []
  Rsh_Fir_deopt(198, 0, NULL, CCP, RHO);
  return R_NilValue;

L157_:;
  // goto L36(r76)
  // L36(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L36_;

L159_:;
  // goto L35(r77)
  // L35(r77)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r77_;
  goto L35_;

L162_:;
  // p4 = prom<V +>{
  //   sym17 = ldf seq_len;
  //   base17 = ldf seq_len in base;
  //   guard17 = `==`.4(sym17, base17);
  //   if guard17 then L1() else L2();
  // L0(r80):
  //   return r80;
  // L1():
  //   d10 = ld d2;
  //   d11 = force? d10;
  //   checkMissing(d11);
  //   r81 = seq_len(d11);
  //   goto L0(r81);
  // L2():
  //   r79 = dyn base17(<sym d2>);
  //   goto L0(r79);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   r83 = clos inner3002224933;
  //   return r83;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_5, 0, NULL, CCP, RHO);
  // r85 = dyn lapply(p4, p5)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L163() else D60()
  // L163()
  goto L163_;

D60_:;
  // deopt 201 [r85]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L163_:;
  // st ans = r85
  Rsh_Fir_store(Rsh_const(CCP, 59), Rsh_Fir_reg_r85_, RHO);
  (void)(Rsh_Fir_reg_r85_);
  // array = ldf array
  Rsh_Fir_reg_array1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L164() else D61()
  // L164()
  goto L164_;

D61_:;
  // deopt 204 []
  Rsh_Fir_deopt(204, 0, NULL, CCP, RHO);
  return R_NilValue;

L164_:;
  // p6 = prom<V +>{
  //   ans = ld ans;
  //   ans1 = force? ans;
  //   checkMissing(ans1);
  //   return ans1;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   d_ans4 = ld `d.ans`;
  //   d_ans5 = force? d_ans4;
  //   checkMissing(d_ans5);
  //   return d_ans5;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   dn_ans = ld `dn.ans`;
  //   dn_ans1 = force? dn_ans;
  //   checkMissing(dn_ans1);
  //   return dn_ans1;
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_8, 0, NULL, CCP, RHO);
  // r89 = dyn array(p6, p7, p8)
  SEXP Rsh_Fir_array_args179[3];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args179[2] = Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_array_arg_names65[3];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_array_arg_names65[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array1, 3, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L165() else D62()
  // L165()
  goto L165_;

D62_:;
  // deopt 208 [r89]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L165_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r89
  return Rsh_Fir_reg_r89_;
}
SEXP Rsh_Fir_user_promise_inner2186253718_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_1;
  SEXP Rsh_Fir_reg_x6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_1;
}
SEXP Rsh_Fir_user_promise_inner2186253718_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_1;
  SEXP Rsh_Fir_reg_x8_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_1);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x8_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_1;
}
SEXP Rsh_Fir_user_promise_inner2186253718_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x13_1;
  SEXP Rsh_Fir_reg_x14_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // x13 = ld x
  Rsh_Fir_reg_x13_1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_1);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_x14_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_1;
}
SEXP Rsh_Fir_user_promise_inner2186253718_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_s_call;
  SEXP Rsh_Fir_reg_s_call1_;
  SEXP Rsh_Fir_reg_s_ans;
  SEXP Rsh_Fir_reg_s_ans1_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_r69_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // sym14 = ldf c
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base14 = ldf c in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args156);
  // if guard14 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r68
  return Rsh_Fir_reg_r68_;

L1_:;
  // s_call = ld `s.call`
  Rsh_Fir_reg_s_call = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // s_call1 = force? s_call
  Rsh_Fir_reg_s_call1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_call);
  // checkMissing(s_call1)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_s_call1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // s_ans = ld `s.ans`
  Rsh_Fir_reg_s_ans = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // s_ans1 = force? s_ans
  Rsh_Fir_reg_s_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_ans);
  // checkMissing(s_ans1)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_s_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // c25 = ldf c in base
  Rsh_Fir_reg_c25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r69 = dyn c25(s_call1, s_ans1)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_s_call1_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_s_ans1_;
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c25_, 2, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L0(r69)
  // L0(r69)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r69_;
  goto L0_;

L2_:;
  // r67 = dyn base14(<sym s.call>, <sym s.ans>)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r67)
  // L0(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2186253718_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_d10_;
  SEXP Rsh_Fir_reg_d11_;
  SEXP Rsh_Fir_reg_r81_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // sym17 = ldf seq_len
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base17 = ldf seq_len in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args171);
  // if guard17 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r80
  return Rsh_Fir_reg_r80_;

L1_:;
  // d10 = ld d2
  Rsh_Fir_reg_d10_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // d11 = force? d10
  Rsh_Fir_reg_d11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d10_);
  // checkMissing(d11)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_d11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // r81 = seq_len(d11)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_d11_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args173);
  // goto L0(r81)
  // L0(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L0_;

L2_:;
  // r79 = dyn base17(<sym d2>)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L0(r79)
  // L0(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2186253718_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r83_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // r83 = clos inner3002224933
  Rsh_Fir_reg_r83_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3002224933_, RHO, CCP);
  // return r83
  return Rsh_Fir_reg_r83_;
}
SEXP Rsh_Fir_user_promise_inner2186253718_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ans;
  SEXP Rsh_Fir_reg_ans1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 59), RHO);
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // return ans1
  return Rsh_Fir_reg_ans1_;
}
SEXP Rsh_Fir_user_promise_inner2186253718_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d_ans4_;
  SEXP Rsh_Fir_reg_d_ans5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // d_ans4 = ld `d.ans`
  Rsh_Fir_reg_d_ans4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // d_ans5 = force? d_ans4
  Rsh_Fir_reg_d_ans5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d_ans4_);
  // checkMissing(d_ans5)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_d_ans5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // return d_ans5
  return Rsh_Fir_reg_d_ans5_;
}
SEXP Rsh_Fir_user_promise_inner2186253718_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dn_ans;
  SEXP Rsh_Fir_reg_dn_ans1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // dn_ans = ld `dn.ans`
  Rsh_Fir_reg_dn_ans = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // dn_ans1 = force? dn_ans
  Rsh_Fir_reg_dn_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn_ans);
  // checkMissing(dn_ans1)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dn_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // return dn_ans1
  return Rsh_Fir_reg_dn_ans1_;
}
SEXP Rsh_Fir_user_function_inner3002224933_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3002224933 dynamic dispatch ([i])

  return Rsh_Fir_user_version_inner3002224933_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3002224933_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3002224933 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3002224933/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_array2;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_reg_r4_2;

  // Bind parameters
  Rsh_Fir_reg_i = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 60), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // array = ldf array
  Rsh_Fir_reg_array2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   newx = ld newx;
  //   newx1 = force? newx;
  //   checkMissing(newx1);
  //   c = `is.object`(newx1);
  //   if c then L1() else L2();
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", newx1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2();
  // L2():
  //   i1 = ld i;
  //   i2 = force? i1;
  //   __ = ldf `[` in base;
  //   r = dyn __(newx1, <missing>, i2);
  //   goto L0(r);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3002224933_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   d_call = ld `d.call`;
  //   d_call1 = force? d_call;
  //   checkMissing(d_call1);
  //   return d_call1;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3002224933_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   dn_call = ld `dn.call`;
  //   dn_call1 = force? dn_call;
  //   checkMissing(dn_call1);
  //   return dn_call1;
  // }
  Rsh_Fir_reg_p2_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3002224933_2, 0, NULL, CCP, RHO);
  // r4 = dyn array(p, p1, p2)
  SEXP Rsh_Fir_array_args188[3];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_p1_2;
  Rsh_Fir_array_args188[2] = Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_array_arg_names67[3];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_array_arg_names67[2] = R_MissingArg;
  Rsh_Fir_reg_r4_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array2, 3, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r4_2;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_2;
}
SEXP Rsh_Fir_user_promise_inner3002224933_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_newx;
  SEXP Rsh_Fir_reg_newx1_;
  SEXP Rsh_Fir_reg_c2;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3002224933/0: expected 0, got %d", NCAPTURES);

  // newx = ld newx
  Rsh_Fir_reg_newx = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // newx1 = force? newx
  Rsh_Fir_reg_newx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newx);
  // checkMissing(newx1)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_newx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // c = `is.object`(newx1)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_newx1_;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args181);
  // if c then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // dr = tryDispatchBuiltin.1("[", newx1)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_newx1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args182);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r = dyn __(newx1, <missing>, i2)
  SEXP Rsh_Fir_array_args184[3];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_newx1_;
  Rsh_Fir_array_args184[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args184[2] = Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_array_arg_names66[3];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_array_arg_names66[2] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 3, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r2;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3002224933_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d_call1;
  SEXP Rsh_Fir_reg_d_call1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3002224933/0: expected 0, got %d", NCAPTURES);

  // d_call = ld `d.call`
  Rsh_Fir_reg_d_call1 = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // d_call1 = force? d_call
  Rsh_Fir_reg_d_call1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_d_call1);
  // checkMissing(d_call1)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_d_call1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // return d_call1
  return Rsh_Fir_reg_d_call1_1;
}
SEXP Rsh_Fir_user_promise_inner3002224933_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dn_call;
  SEXP Rsh_Fir_reg_dn_call1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3002224933/0: expected 0, got %d", NCAPTURES);

  // dn_call = ld `dn.call`
  Rsh_Fir_reg_dn_call = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // dn_call1 = force? dn_call
  Rsh_Fir_reg_dn_call1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn_call);
  // checkMissing(dn_call1)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_dn_call1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // return dn_call1
  return Rsh_Fir_reg_dn_call1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
