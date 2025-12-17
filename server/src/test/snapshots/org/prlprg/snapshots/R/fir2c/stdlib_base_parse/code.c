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
SEXP Rsh_Fir_user_function_inner2235917191_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2235917191_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2235917191_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2235917191_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_parse;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_unlink;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_srcfile;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_tryCatch;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_getParseData;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r65_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2235917191
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2235917191_, RHO, CCP);
  // st parse = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn tempfile[fileext](".Rdmped")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st fil = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   fil = ld fil;
  //   fil1 = force? fil;
  //   checkMissing(fil1);
  //   return fil1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn cat[, file]("x <- c(1, 4)\n  x ^ 3 -10 ; outer(1:7, 5:9)\n", p)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 14 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // parse = ldf parse
  Rsh_Fir_reg_parse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   fil2 = ld fil;
  //   fil3 = force? fil2;
  //   checkMissing(fil3);
  //   return fil3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn parse[file, n](p1, 3.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parse, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 21 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // unlink = ldf unlink
  Rsh_Fir_reg_unlink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p2 = prom<V +>{
  //   fil4 = ld fil;
  //   fil5 = force? fil4;
  //   checkMissing(fil5);
  //   return fil5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r7 = dyn unlink(p2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlink, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 25 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   sym = ldf identical;
  //   base = ldf identical in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L11() else L12();
  // L0():
  //   sym2 = ldf identical;
  //   base2 = ldf identical in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L15() else L16();
  // L11():
  //   str2lang = ldf str2lang;
  //   r10 = dyn str2lang("x[3] <- 1+4");
  //   sym1 = ldf quote;
  //   base1 = ldf quote in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L13() else L14();
  // L12():
  //   r8 = dyn base(<lang str2lang("x[3] <- 1+4")>, <lang quote(`<-`(`[`(x, 3.0), `+`(1.0, 4.0)))>);
  //   goto L0();
  // L1(r12):
  //   identical = ldf identical in base;
  //   r14 = dyn identical(r10, r12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0();
  // L2():
  //   sym4 = ldf identical;
  //   base4 = ldf identical in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L19() else L20();
  // L13():
  //   quote = ldf quote in base;
  //   r13 = dyn quote(<lang `<-`(`[`(x, 3.0), `+`(1.0, 4.0))>);
  //   goto L1(r13);
  // L14():
  //   r11 = dyn base1(<lang `<-`(`[`(x, 3.0), `+`(1.0, 4.0))>);
  //   goto L1(r11);
  // L15():
  //   str2lang1 = ldf str2lang;
  //   r17 = dyn str2lang1("log(y)");
  //   sym3 = ldf quote;
  //   base3 = ldf quote in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L17() else L18();
  // L16():
  //   r15 = dyn base2(<lang str2lang("log(y)")>, <lang quote(log(y))>);
  //   goto L2();
  // L3(r19):
  //   identical1 = ldf identical in base;
  //   r21 = dyn identical1(r17, r19, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L2();
  // L4():
  //   sym6 = ldf `is.symbol`;
  //   base6 = ldf `is.symbol` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L23() else L24();
  // L17():
  //   quote1 = ldf quote in base;
  //   r20 = dyn quote1(<lang log(y)>);
  //   goto L3(r20);
  // L18():
  //   r18 = dyn base3(<lang log(y)>);
  //   goto L3(r18);
  // L19():
  //   str2lang2 = ldf str2lang;
  //   r24 = dyn str2lang2("abc");
  //   sym5 = ldf quote;
  //   base5 = ldf quote in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L21() else L22();
  // L20():
  //   r22 = dyn base4(<lang str2lang("abc")>, <lang `<-`(qa, quote(abc))>);
  //   goto L4();
  // L5(r26):
  //   st qa = r26;
  //   identical2 = ldf identical in base;
  //   r28 = dyn identical2(r24, r26, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L4();
  // L6(r30):
  //   sym7 = ldf `is.call`;
  //   base7 = ldf `is.call` in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L25() else L26();
  // L21():
  //   quote2 = ldf quote in base;
  //   r27 = dyn quote2(<sym abc>);
  //   goto L5(r27);
  // L22():
  //   r25 = dyn base5(<sym abc>);
  //   goto L5(r25);
  // L23():
  //   qa = ld qa;
  //   qa1 = force? qa;
  //   checkMissing(qa1);
  //   c = `is.symbol`(qa1);
  //   goto L6(c);
  // L24():
  //   r29 = dyn base6(<sym qa>);
  //   goto L6(r29);
  // L7(r34, r35):
  //   r37 = `!`(r35);
  //   `&&`(r34, r37);
  //   sym8 = ldf identical;
  //   base8 = ldf identical in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L27() else L28();
  // L25():
  //   qa2 = ld qa;
  //   qa3 = force? qa2;
  //   checkMissing(qa3);
  //   is_call = ldf `is.call` in base;
  //   r36 = dyn is_call(qa3);
  //   goto L7(r30, r36);
  // L26():
  //   r33 = dyn base7(<sym qa>);
  //   goto L7(r30, r33);
  // L8():
  //   sym9 = ldf identical;
  //   base9 = ldf identical in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L29() else L30();
  // L27():
  //   str2lang3 = ldf str2lang;
  //   r41 = dyn str2lang3("1.375");
  //   identical3 = ldf identical in base;
  //   r42 = dyn identical3(r41, 1.375, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L8();
  // L28():
  //   r39 = dyn base8(<lang str2lang("1.375")>, 1.375);
  //   goto L8();
  // L9(r44):
  //   return r44;
  // L29():
  //   str2expression = ldf str2expression;
  //   p3 = prom<V +>{
  //     sym10 = ldf c;
  //     base10 = ldf c in base;
  //     guard10 = `==`.4(sym10, base10);
  //     if guard10 then L1() else L2();
  //   L0(r46):
  //     return r46;
  //   L1():
  //     c1 = ldf c in base;
  //     r47 = dyn c1("# a comment", "", "42");
  //     goto L0(r47);
  //   L2():
  //     r45 = dyn base10("# a comment", "", "42");
  //     goto L0(r45);
  //   };
  //   r49 = dyn str2expression(p3);
  //   sym11 = ldf expression;
  //   base11 = ldf expression in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L31() else L32();
  // L30():
  //   r43 = dyn base9(<lang str2expression(c("# a comment", "", "42"))>, <lang expression(42.0)>);
  //   goto L9(r43);
  // L10(r51):
  //   identical4 = ldf identical in base;
  //   r53 = dyn identical4(r49, r51, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L9(r53);
  // L31():
  //   expression = ldf expression in base;
  //   r52 = dyn expression(42.0);
  //   goto L10(r52);
  // L32():
  //   r50 = dyn base11(42.0);
  //   goto L10(r50);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r55 = dyn stopifnot[exprs](p4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 30 [r55]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // st txt = "\nx <- 1\nan error\n"
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_const(CCP, 45), RHO);
  (void)(Rsh_const(CCP, 45));
  // srcfile = ldf srcfile
  Rsh_Fir_reg_srcfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r56 = dyn srcfile("txt")
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_srcfile, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 37 [r56]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // st sf = r56
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // tryCatch = ldf tryCatch
  Rsh_Fir_reg_tryCatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p7 = prom<V +>{
  //   parse1 = ldf parse;
  //   p5 = prom<V +>{
  //     txt = ld txt;
  //     txt1 = force? txt;
  //     checkMissing(txt1);
  //     return txt1;
  //   };
  //   p6 = prom<V +>{
  //     sf = ld sf;
  //     sf1 = force? sf;
  //     checkMissing(sf1);
  //     return sf1;
  //   };
  //   r59 = dyn parse1[text, srcfile](p5, p6);
  //   return r59;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   r61 = clos inner3708401697;
  //   return r61;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r63 = dyn tryCatch[, error](p7, p8)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tryCatch, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 44 [r63]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // getParseData = ldf getParseData
  Rsh_Fir_reg_getParseData = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p9 = prom<V +>{
  //   sf2 = ld sf;
  //   sf3 = force? sf2;
  //   checkMissing(sf3);
  //   return sf3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r65 = dyn getParseData(p9)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getParseData, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 48 [r65]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r65
  return Rsh_Fir_reg_r65_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil;
  SEXP Rsh_Fir_reg_fil1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil = ld fil
  Rsh_Fir_reg_fil = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // fil1 = force? fil
  Rsh_Fir_reg_fil1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil);
  // checkMissing(fil1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_fil1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return fil1
  return Rsh_Fir_reg_fil1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil2_;
  SEXP Rsh_Fir_reg_fil3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil2 = ld fil
  Rsh_Fir_reg_fil2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // fil3 = force? fil2
  Rsh_Fir_reg_fil3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil2_);
  // checkMissing(fil3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_fil3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return fil3
  return Rsh_Fir_reg_fil3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil4_;
  SEXP Rsh_Fir_reg_fil5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil4 = ld fil
  Rsh_Fir_reg_fil4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // fil5 = force? fil4
  Rsh_Fir_reg_fil5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil4_);
  // checkMissing(fil5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_fil5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return fil5
  return Rsh_Fir_reg_fil5_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_str2lang;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_str2lang1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_quote1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_str2lang2_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_quote2_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_qa;
  SEXP Rsh_Fir_reg_qa1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_qa2_;
  SEXP Rsh_Fir_reg_qa3_;
  SEXP Rsh_Fir_reg_is_call;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_str2lang3_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_identical3_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_str2expression;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_expression;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_identical4_;
  SEXP Rsh_Fir_reg_r53_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L0_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L11_:;
  // str2lang = ldf str2lang
  Rsh_Fir_reg_str2lang = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r10 = dyn str2lang("x[3] <- 1+4")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str2lang, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // sym1 = ldf quote
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf quote in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L12_:;
  // r8 = dyn base(<lang str2lang("x[3] <- 1+4")>, <lang quote(`<-`(`[`(x, 3.0), `+`(1.0, 4.0)))>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L1_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r14 = dyn identical(r10, r12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args12[9];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args12[4] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args12[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args12[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args12[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args12[8] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names6[9];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_array_arg_names6[6] = R_MissingArg;
  Rsh_Fir_array_arg_names6[7] = R_MissingArg;
  Rsh_Fir_array_arg_names6[8] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L2_:;
  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard4 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L13_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r13 = dyn quote(<lang `<-`(`[`(x, 3.0), `+`(1.0, 4.0))>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r13)
  // L1(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L1_;

L14_:;
  // r11 = dyn base1(<lang `<-`(`[`(x, 3.0), `+`(1.0, 4.0))>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(r11)
  // L1(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L1_;

L15_:;
  // str2lang1 = ldf str2lang
  Rsh_Fir_reg_str2lang1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r17 = dyn str2lang1("log(y)")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str2lang1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // sym3 = ldf quote
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base3 = ldf quote in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard3 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L16_:;
  // r15 = dyn base2(<lang str2lang("log(y)")>, <lang quote(log(y))>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

L3_:;
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r21 = dyn identical1(r17, r19, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args19[9];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args19[4] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args19[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args19[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args19[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args19[8] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[9];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_array_arg_names11[7] = R_MissingArg;
  Rsh_Fir_array_arg_names11[8] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

L4_:;
  // sym6 = ldf `is.symbol`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base6 = ldf `is.symbol` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard6 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L17_:;
  // quote1 = ldf quote in base
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r20 = dyn quote1(<lang log(y)>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L3(r20)
  // L3(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L3_;

L18_:;
  // r18 = dyn base3(<lang log(y)>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3(r18)
  // L3(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L3_;

L19_:;
  // str2lang2 = ldf str2lang
  Rsh_Fir_reg_str2lang2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r24 = dyn str2lang2("abc")
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str2lang2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names14, CCP, RHO);
  // sym5 = ldf quote
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base5 = ldf quote in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard5 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L20_:;
  // r22 = dyn base4(<lang str2lang("abc")>, <lang `<-`(qa, quote(abc))>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L4()
  // L4()
  goto L4_;

L5_:;
  // st qa = r26
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r28 = dyn identical2(r24, r26, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args26[9];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[4] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args26[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[8] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names16[9];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_array_arg_names16[5] = R_MissingArg;
  Rsh_Fir_array_arg_names16[6] = R_MissingArg;
  Rsh_Fir_array_arg_names16[7] = R_MissingArg;
  Rsh_Fir_array_arg_names16[8] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L4()
  // L4()
  goto L4_;

L6_:;
  // sym7 = ldf `is.call`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base7 = ldf `is.call` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard7 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L21_:;
  // quote2 = ldf quote in base
  Rsh_Fir_reg_quote2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r27 = dyn quote2(<sym abc>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L5(r27)
  // L5(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L5_;

L22_:;
  // r25 = dyn base5(<sym abc>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L5(r25)
  // L5(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L5_;

L23_:;
  // qa = ld qa
  Rsh_Fir_reg_qa = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // qa1 = force? qa
  Rsh_Fir_reg_qa1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qa);
  // checkMissing(qa1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_qa1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c = `is.symbol`(qa1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_qa1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(390, RHO, 1, Rsh_Fir_array_args31);
  // goto L6(c)
  // L6(c)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_c;
  goto L6_;

L24_:;
  // r29 = dyn base6(<sym qa>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L6(r29)
  // L6(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L6_;

L7_:;
  // r37 = `!`(r35)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args33);
  // `&&`(r34, r37)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r37_;
  (void)(Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args34));
  // sym8 = ldf identical
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base8 = ldf identical in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard8 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L25_:;
  // qa2 = ld qa
  Rsh_Fir_reg_qa2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // qa3 = force? qa2
  Rsh_Fir_reg_qa3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qa2_);
  // checkMissing(qa3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_qa3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // is_call = ldf `is.call` in base
  Rsh_Fir_reg_is_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r36 = dyn is_call(qa3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_qa3_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_call, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L7(r30, r36)
  // L7(r30, r36)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L7_;

L26_:;
  // r33 = dyn base7(<sym qa>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L7(r30, r33)
  // L7(r30, r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r33_;
  goto L7_;

L8_:;
  // sym9 = ldf identical
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base9 = ldf identical in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard9 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L27_:;
  // str2lang3 = ldf str2lang
  Rsh_Fir_reg_str2lang3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r41 = dyn str2lang3("1.375")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str2lang3_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names22, CCP, RHO);
  // identical3 = ldf identical in base
  Rsh_Fir_reg_identical3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r42 = dyn identical3(r41, 1.375, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args41[9];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args41[4] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args41[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args41[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args41[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args41[8] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names23[9];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_array_arg_names23[4] = R_MissingArg;
  Rsh_Fir_array_arg_names23[5] = R_MissingArg;
  Rsh_Fir_array_arg_names23[6] = R_MissingArg;
  Rsh_Fir_array_arg_names23[7] = R_MissingArg;
  Rsh_Fir_array_arg_names23[8] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical3_, 9, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L8()
  // L8()
  goto L8_;

L28_:;
  // r39 = dyn base8(<lang str2lang("1.375")>, 1.375)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L8()
  // L8()
  goto L8_;

L9_:;
  // return r44
  return Rsh_Fir_reg_r44_;

L29_:;
  // str2expression = ldf str2expression
  Rsh_Fir_reg_str2expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // p3 = prom<V +>{
  //   sym10 = ldf c;
  //   base10 = ldf c in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r46):
  //   return r46;
  // L1():
  //   c1 = ldf c in base;
  //   r47 = dyn c1("# a comment", "", "42");
  //   goto L0(r47);
  // L2():
  //   r45 = dyn base10("# a comment", "", "42");
  //   goto L0(r45);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r49 = dyn str2expression(p3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str2expression, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names27, CCP, RHO);
  // sym11 = ldf expression
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base11 = ldf expression in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard11 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L30_:;
  // r43 = dyn base9(<lang str2expression(c("# a comment", "", "42"))>, <lang expression(42.0)>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L9(r43)
  // L9(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L9_;

L10_:;
  // identical4 = ldf identical in base
  Rsh_Fir_reg_identical4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r53 = dyn identical4(r49, r51, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args49[9];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args49[4] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args49[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args49[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args49[7] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args49[8] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names29[9];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_array_arg_names29[4] = R_MissingArg;
  Rsh_Fir_array_arg_names29[5] = R_MissingArg;
  Rsh_Fir_array_arg_names29[6] = R_MissingArg;
  Rsh_Fir_array_arg_names29[7] = R_MissingArg;
  Rsh_Fir_array_arg_names29[8] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical4_, 9, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L9(r53)
  // L9(r53)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r53_;
  goto L9_;

L31_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r52 = dyn expression(42.0)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L10(r52)
  // L10(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L10_;

L32_:;
  // r50 = dyn base11(42.0)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L10(r50)
  // L10(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r46
  return Rsh_Fir_reg_r46_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r47 = dyn c1("# a comment", "", "42")
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L0_;

L2_:;
  // r45 = dyn base10("# a comment", "", "42")
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parse1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r59_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // parse1 = ldf parse
  Rsh_Fir_reg_parse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p5 = prom<V +>{
  //   txt = ld txt;
  //   txt1 = force? txt;
  //   checkMissing(txt1);
  //   return txt1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sf = ld sf;
  //   sf1 = force? sf;
  //   checkMissing(sf1);
  //   return sf1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r59 = dyn parse1[text, srcfile](p5, p6)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_arg_names34[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parse1_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names34, CCP, RHO);
  // return r59
  return Rsh_Fir_reg_r59_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_txt;
  SEXP Rsh_Fir_reg_txt1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // txt = ld txt
  Rsh_Fir_reg_txt = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // txt1 = force? txt
  Rsh_Fir_reg_txt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt);
  // checkMissing(txt1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_txt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return txt1
  return Rsh_Fir_reg_txt1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sf;
  SEXP Rsh_Fir_reg_sf1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sf = ld sf
  Rsh_Fir_reg_sf = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // sf1 = force? sf
  Rsh_Fir_reg_sf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sf);
  // checkMissing(sf1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return sf1
  return Rsh_Fir_reg_sf1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r61_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r61 = clos inner3708401697
  Rsh_Fir_reg_r61_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // return r61
  return Rsh_Fir_reg_r61_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sf2_;
  SEXP Rsh_Fir_reg_sf3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sf2 = ld sf
  Rsh_Fir_reg_sf2_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // sf3 = force? sf2
  Rsh_Fir_reg_sf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sf2_);
  // checkMissing(sf3)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return sf3
  return Rsh_Fir_reg_sf3_;
}
SEXP Rsh_Fir_user_function_inner2235917191_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2235917191 dynamic dispatch ([file, n, text, prompt, `keep.source`, srcfile, encoding])

  return Rsh_Fir_user_version_inner2235917191_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2235917191_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2235917191 version 0 (*, *, *, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner2235917191/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_file;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_text;
  SEXP Rsh_Fir_reg_prompt;
  SEXP Rsh_Fir_reg_keep_source;
  SEXP Rsh_Fir_reg_srcfile1;
  SEXP Rsh_Fir_reg_encoding;
  SEXP Rsh_Fir_reg_file_isMissing;
  SEXP Rsh_Fir_reg_file_orDefault;
  SEXP Rsh_Fir_reg_n_isMissing;
  SEXP Rsh_Fir_reg_n_orDefault;
  SEXP Rsh_Fir_reg_text_isMissing;
  SEXP Rsh_Fir_reg_text_orDefault;
  SEXP Rsh_Fir_reg_prompt_isMissing;
  SEXP Rsh_Fir_reg_prompt_orDefault;
  SEXP Rsh_Fir_reg_keep_source_isMissing;
  SEXP Rsh_Fir_reg_keep_source_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_srcfile_isMissing;
  SEXP Rsh_Fir_reg_srcfile_orDefault;
  SEXP Rsh_Fir_reg_encoding_isMissing;
  SEXP Rsh_Fir_reg_encoding_orDefault;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_text1_;
  SEXP Rsh_Fir_reg_text2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_text3_;
  SEXP Rsh_Fir_reg_text4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_expression1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_keep_source3_;
  SEXP Rsh_Fir_reg_keep_source4_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_srcfilecopy;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_stdin;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_file1_;
  SEXP Rsh_Fir_reg_file2_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_file3_;
  SEXP Rsh_Fir_reg_file4_;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_stdin1_;
  SEXP Rsh_Fir_reg_r29_1;
  SEXP Rsh_Fir_reg_sym5_1;
  SEXP Rsh_Fir_reg_base5_1;
  SEXP Rsh_Fir_reg_guard5_1;
  SEXP Rsh_Fir_reg_r30_1;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_file5_;
  SEXP Rsh_Fir_reg_file6_;
  SEXP Rsh_Fir_reg_file7_;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r36_1;
  SEXP Rsh_Fir_reg_sym6_1;
  SEXP Rsh_Fir_reg_base6_1;
  SEXP Rsh_Fir_reg_guard6_1;
  SEXP Rsh_Fir_reg_r37_1;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_missing2_;
  SEXP Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_filename2_;
  SEXP Rsh_Fir_reg_filename3_;
  SEXP Rsh_Fir_reg_keep_source5_;
  SEXP Rsh_Fir_reg_keep_source6_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_readLines;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r42_1;
  SEXP Rsh_Fir_reg_sym7_1;
  SEXP Rsh_Fir_reg_base7_1;
  SEXP Rsh_Fir_reg_guard7_1;
  SEXP Rsh_Fir_reg_r43_1;
  SEXP Rsh_Fir_reg_r44_1;
  SEXP Rsh_Fir_reg_text7_;
  SEXP Rsh_Fir_reg_text8_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r45_1;
  SEXP Rsh_Fir_reg_r46_1;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_close;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_r49_1;
  SEXP Rsh_Fir_reg_stdin2_;
  SEXP Rsh_Fir_reg_r50_1;
  SEXP Rsh_Fir_reg_srcfilecopy1_;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_p9_1;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r56_1;
  SEXP Rsh_Fir_reg_sym8_1;
  SEXP Rsh_Fir_reg_base8_1;
  SEXP Rsh_Fir_reg_guard8_1;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_on_exit;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_sym9_1;
  SEXP Rsh_Fir_reg_base9_1;
  SEXP Rsh_Fir_reg_guard9_1;
  SEXP Rsh_Fir_reg_r59_1;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_file12_;
  SEXP Rsh_Fir_reg_file13_;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_text11_;
  SEXP Rsh_Fir_reg_text12_;
  SEXP Rsh_Fir_reg_prompt1_;
  SEXP Rsh_Fir_reg_prompt2_;
  SEXP Rsh_Fir_reg_srcfile3_;
  SEXP Rsh_Fir_reg_srcfile4_;
  SEXP Rsh_Fir_reg_encoding3_;
  SEXP Rsh_Fir_reg_encoding4_;
  SEXP Rsh_Fir_reg_parse1;
  SEXP Rsh_Fir_reg_r61_1;

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_n = PARAMS[1];
  Rsh_Fir_reg_text = PARAMS[2];
  Rsh_Fir_reg_prompt = PARAMS[3];
  Rsh_Fir_reg_keep_source = PARAMS[4];
  Rsh_Fir_reg_srcfile1 = PARAMS[5];
  Rsh_Fir_reg_encoding = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // file_isMissing = missing.0(file)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_file;
  Rsh_Fir_reg_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args60);
  // if file_isMissing then L0("") else L0(file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_file_isMissing)) {
  // L0("")
    Rsh_Fir_reg_file_orDefault = Rsh_const(CCP, 38);
    goto L0_;
  } else {
  // L0(file)
    Rsh_Fir_reg_file_orDefault = Rsh_Fir_reg_file;
    goto L0_;
  }

L0_:;
  // st file = file_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_file_orDefault, RHO);
  (void)(Rsh_Fir_reg_file_orDefault);
  // n_isMissing = missing.0(n)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_n;
  Rsh_Fir_reg_n_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args61);
  // if n_isMissing then L1(NULL) else L1(n)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_n_orDefault = Rsh_const(CCP, 54);
    goto L1_;
  } else {
  // L1(n)
    Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_n;
    goto L1_;
  }

L1_:;
  // st n = n_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_n_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_orDefault);
  // text_isMissing = missing.0(text)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_text;
  Rsh_Fir_reg_text_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args62);
  // if text_isMissing then L2(NULL) else L2(text)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_text_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_text_orDefault = Rsh_const(CCP, 54);
    goto L2_;
  } else {
  // L2(text)
    Rsh_Fir_reg_text_orDefault = Rsh_Fir_reg_text;
    goto L2_;
  }

L2_:;
  // st text = text_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_text_orDefault, RHO);
  (void)(Rsh_Fir_reg_text_orDefault);
  // prompt_isMissing = missing.0(prompt)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_prompt;
  Rsh_Fir_reg_prompt_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args63);
  // if prompt_isMissing then L3("?") else L3(prompt)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_prompt_isMissing)) {
  // L3("?")
    Rsh_Fir_reg_prompt_orDefault = Rsh_const(CCP, 55);
    goto L3_;
  } else {
  // L3(prompt)
    Rsh_Fir_reg_prompt_orDefault = Rsh_Fir_reg_prompt;
    goto L3_;
  }

L3_:;
  // st prompt = prompt_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_prompt_orDefault, RHO);
  (void)(Rsh_Fir_reg_prompt_orDefault);
  // keep_source_isMissing = missing.0(keep_source)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_keep_source;
  Rsh_Fir_reg_keep_source_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args64);
  // if keep_source_isMissing then L4() else L5(keep_source)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_keep_source_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(keep_source)
    Rsh_Fir_reg_keep_source_orDefault = Rsh_Fir_reg_keep_source;
    goto L5_;
  }

L4_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("keep.source");
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_, 0, NULL, CCP, RHO);
  // goto L5(p)
  // L5(p)
  Rsh_Fir_reg_keep_source_orDefault = Rsh_Fir_reg_p1;
  goto L5_;

L5_:;
  // st `keep.source` = keep_source_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 59), Rsh_Fir_reg_keep_source_orDefault, RHO);
  (void)(Rsh_Fir_reg_keep_source_orDefault);
  // srcfile_isMissing = missing.0(srcfile)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_srcfile1;
  Rsh_Fir_reg_srcfile_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args66);
  // if srcfile_isMissing then L6(NULL) else L6(srcfile)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_srcfile_isMissing)) {
  // L6(NULL)
    Rsh_Fir_reg_srcfile_orDefault = Rsh_const(CCP, 54);
    goto L6_;
  } else {
  // L6(srcfile)
    Rsh_Fir_reg_srcfile_orDefault = Rsh_Fir_reg_srcfile1;
    goto L6_;
  }

L6_:;
  // st srcfile = srcfile_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_srcfile_orDefault, RHO);
  (void)(Rsh_Fir_reg_srcfile_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args67);
  // if encoding_isMissing then L7("unknown") else L7(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L7("unknown")
    Rsh_Fir_reg_encoding_orDefault = Rsh_const(CCP, 60);
    goto L7_;
  } else {
  // L7(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L7_;
  }

L7_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 61), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L35() else D0()
  // L35()
  goto L35_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p1 = prom<V +>{
  //   keep_source1 = ld `keep.source`;
  //   keep_source2 = force? keep_source1;
  //   checkMissing(keep_source2);
  //   return keep_source2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_1, 0, NULL, CCP, RHO);
  // r3 = dyn isTRUE(p1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L36() else D1()
  // L36()
  goto L36_;

D1_:;
  // deopt 3 [r3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // st `keep.source` = r3
  Rsh_Fir_store(Rsh_const(CCP, 59), Rsh_Fir_reg_r3_1, RHO);
  (void)(Rsh_Fir_reg_r3_1);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L8_:;
  // r6 = `!`(r5)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args71);
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // if c1 then L40() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L40()
    goto L40_;
  } else {
  // L9()
    goto L9_;
  }

L37_:;
  // text1 = ld text
  Rsh_Fir_reg_text1_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L39() else D2()
  // L39()
  goto L39_;

L38_:;
  // r4 = dyn base(<sym text>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L8(r4)
  // L8(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_;
  goto L8_;

D2_:;
  // deopt 6 [text1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_text1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L9_:;
  // sym4 = ldf `is.character`
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base4 = ldf `is.character` in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard4 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L19_:;
  // sym9 = ldf `.Internal`
  Rsh_Fir_reg_sym9_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // base9 = ldf `.Internal` in base
  Rsh_Fir_reg_base9_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym9_1;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base9_1;
  Rsh_Fir_reg_guard9_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard9 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_1)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L39_:;
  // text2 = force? text1
  Rsh_Fir_reg_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1_);
  // checkMissing(text2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // c = `==`(text2, NULL)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_text2_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args77);
  // goto L8(c)
  // L8(c)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_c1;
  goto L8_;

L40_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard1 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L10_:;
  // r10 = `==`(r8, 0)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 67);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args79);
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args80);
  // if c2 then L45() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L45()
    goto L45_;
  } else {
  // L11()
    goto L11_;
  }

L20_:;
  // c6 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r27_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args81);
  // if c6 then L65() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L65()
    goto L65_;
  } else {
  // L21()
    goto L21_;
  }

L34_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r60
  return Rsh_Fir_reg_r60_;

L41_:;
  // text3 = ld text
  Rsh_Fir_reg_text3_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L43() else D3()
  // L43()
  goto L43_;

L42_:;
  // r7 = dyn base1(<sym text>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L10(r7)
  // L10(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_1;
  goto L10_;

L62_:;
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L64() else D10()
  // L64()
  goto L64_;

L63_:;
  // r26 = dyn base4(<sym file>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L20(r26)
  // L20(r26)
  Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_r26_1;
  goto L20_;

L103_:;
  // file12 = ld file
  Rsh_Fir_reg_file12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L105() else D29()
  // L105()
  goto L105_;

L104_:;
  // r59 = dyn base9(<lang parse(file, n, text, prompt, srcfile, encoding)>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r59_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_1, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L34(r59)
  // L34(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_1;
  goto L34_;

D3_:;
  // deopt 12 [text3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_text3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 47 [file1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_file1_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 130 [file12]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_file12_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L11_:;
  // sym3 = ldf missing
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base3 = ldf missing in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard3 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L21_:;
  // goto L19()
  // L19()
  goto L19_;

L43_:;
  // text4 = force? text3
  Rsh_Fir_reg_text4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text3_);
  // checkMissing(text4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_text4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r9 = dyn length(text4)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_text4_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L44() else D4()
  // L44()
  goto L44_;

L45_:;
  // sym2 = ldf expression
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base2 = ldf expression in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard2 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L64_:;
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c5 = `is.character`(file2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_file2_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args90);
  // goto L20(c5)
  // L20(c5)
  Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_c5_;
  goto L20_;

L65_:;
  // file3 = ld file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L66() else D11()
  // L66()
  goto L66_;

L105_:;
  // file13 = force? file12
  Rsh_Fir_reg_file13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file12_);
  // checkMissing(file13)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_file13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L106() else D30()
  // L106()
  goto L106_;

D4_:;
  // deopt 15 [r9]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 50 [file3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_file3_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 132 [n1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_1;

L14_:;
  // c3 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args92);
  // if c3 then L52() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L52()
    goto L52_;
  } else {
  // L15()
    goto L15_;
  }

L44_:;
  // goto L10(r9)
  // L10(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_;
  goto L10_;

L46_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r13 = dyn expression()
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression1, 0, NULL, NULL, CCP, RHO);
  // goto L12(r13)
  // L12(r13)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r13_1;
  goto L12_;

L47_:;
  // r11 = dyn base2()
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 0, NULL, NULL, CCP, RHO);
  // goto L12(r11)
  // L12(r11)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r11_1;
  goto L12_;

L50_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r18 = dyn missing(<sym srcfile>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L14(r18)
  // L14(r18)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r18_1;
  goto L14_;

L51_:;
  // r16 = dyn base3(<sym srcfile>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L14(r16)
  // L14(r16)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r16_;
  goto L14_;

L66_:;
  // file4 = force? file3
  Rsh_Fir_reg_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file3_);
  // checkMissing(file4)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // r28 = `==`(file4, "")
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_file4_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args96);
  // c7 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r28_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args97);
  // if c7 then L67() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L67()
    goto L67_;
  } else {
  // L22()
    goto L22_;
  }

L106_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // text11 = ld text
  Rsh_Fir_reg_text11_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L107() else D31()
  // L107()
  goto L107_;

D31_:;
  // deopt 134 [text11]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_text11_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // stdin = ldf stdin
  Rsh_Fir_reg_stdin = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // check L59() else D8()
  // L59()
  goto L59_;

L22_:;
  // file5 = ld file
  Rsh_Fir_reg_file5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L75() else D14()
  // L75()
  goto L75_;

L26_:;
  // goto L19()
  // L19()
  goto L19_;

L52_:;
  // st srcfile = "<text>"
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_const(CCP, 71), RHO);
  (void)(Rsh_const(CCP, 71));
  // keep_source3 = ld `keep.source`
  Rsh_Fir_reg_keep_source3_ = Rsh_Fir_load(Rsh_const(CCP, 59), RHO);
  // check L53() else D5()
  // L53()
  goto L53_;

L67_:;
  // stdin1 = ldf stdin
  Rsh_Fir_reg_stdin1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // check L68() else D12()
  // L68()
  goto L68_;

L107_:;
  // text12 = force? text11
  Rsh_Fir_reg_text12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text11_);
  // checkMissing(text12)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_text12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // prompt1 = ld prompt
  Rsh_Fir_reg_prompt1_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L108() else D32()
  // L108()
  goto L108_;

D5_:;
  // deopt 30 [keep_source3]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_keep_source3_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 66 [file5]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_file5_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 136 [prompt1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_prompt1_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L53_:;
  // keep_source4 = force? keep_source3
  Rsh_Fir_reg_keep_source4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep_source3_);
  // checkMissing(keep_source4)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_keep_source4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(keep_source4)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_keep_source4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args101);
  // if c4 then L54() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L54()
    goto L54_;
  } else {
  // L16()
    goto L16_;
  }

L59_:;
  // r24 = dyn stdin()
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stdin, 0, NULL, NULL, CCP, RHO);
  // check L60() else D9()
  // L60()
  goto L60_;

L68_:;
  // r29 = dyn stdin1()
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stdin1_, 0, NULL, NULL, CCP, RHO);
  // check L69() else D13()
  // L69()
  goto L69_;

L75_:;
  // file6 = force? file5
  Rsh_Fir_reg_file6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file5_);
  // checkMissing(file6)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_file6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // st filename = file6
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_file6_, RHO);
  (void)(Rsh_Fir_reg_file6_);
  // file7 = ldf file
  Rsh_Fir_reg_file7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L76() else D15()
  // L76()
  goto L76_;

L108_:;
  // prompt2 = force? prompt1
  Rsh_Fir_reg_prompt2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prompt1_);
  // checkMissing(prompt2)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_prompt2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // srcfile3 = ld srcfile
  Rsh_Fir_reg_srcfile3_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L109() else D33()
  // L109()
  goto L109_;

D9_:;
  // deopt 44 [r24]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 56 [r29]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r29_1;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 138 [srcfile3]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_srcfile3_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L17(NULL)
  // L17(NULL)
  Rsh_Fir_reg_r22_1 = Rsh_const(CCP, 54);
  goto L17_;

L17_:;
  // goto L18()
  // L18()
  goto L18_;

L54_:;
  // srcfilecopy = ldf srcfilecopy
  Rsh_Fir_reg_srcfilecopy = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // check L55() else D6()
  // L55()
  goto L55_;

L60_:;
  // st file = r24
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r24_1, RHO);
  (void)(Rsh_Fir_reg_r24_1);
  // goto L19()
  // L19()
  goto L19_;

L69_:;
  // st file = r29
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r29_1, RHO);
  (void)(Rsh_Fir_reg_r29_1);
  // sym5 = ldf missing
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base5 = ldf missing in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args104);
  // if guard5 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L76_:;
  // p4 = prom<V +>{
  //   filename = ld filename;
  //   filename1 = force? filename;
  //   checkMissing(filename1);
  //   return filename1;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_2, 0, NULL, CCP, RHO);
  // r36 = dyn file7(p4, "r")
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r36_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file7_, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L77() else D16()
  // L77()
  goto L77_;

L109_:;
  // srcfile4 = force? srcfile3
  Rsh_Fir_reg_srcfile4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile3_);
  // checkMissing(srcfile4)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_srcfile4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // encoding3 = ld encoding
  Rsh_Fir_reg_encoding3_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // check L110() else D34()
  // L110()
  goto L110_;

D6_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 73 [r36]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r36_1;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 140 [encoding3]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_encoding3_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L23_:;
  // c8 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args108);
  // if c8 then L72() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L72()
    goto L72_;
  } else {
  // L24()
    goto L24_;
  }

L55_:;
  // p2 = prom<V +>{
  //   srcfile1 = ld srcfile;
  //   srcfile2 = force? srcfile1;
  //   checkMissing(srcfile2);
  //   return srcfile2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   text5 = ld text;
  //   text6 = force? text5;
  //   checkMissing(text6);
  //   return text6;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_4, 0, NULL, CCP, RHO);
  // r21 = dyn srcfilecopy(p2, p3)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_srcfilecopy, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L56() else D7()
  // L56()
  goto L56_;

L70_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r32 = dyn missing1(<sym srcfile>)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L23(r32)
  // L23(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L23_;

L71_:;
  // r30 = dyn base5(<sym srcfile>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r30_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L23(r30)
  // L23(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_1;
  goto L23_;

L77_:;
  // st file = r36
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r36_1, RHO);
  (void)(Rsh_Fir_reg_r36_1);
  // sym6 = ldf missing
  Rsh_Fir_reg_sym6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base6 = ldf missing in base
  Rsh_Fir_reg_base6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_sym6_1;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_base6_1;
  Rsh_Fir_reg_guard6_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args114);
  // if guard6 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_1)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L110_:;
  // encoding4 = force? encoding3
  Rsh_Fir_reg_encoding4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding3_);
  // checkMissing(encoding4)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_encoding4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // parse = ldf parse in base
  Rsh_Fir_reg_parse1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r61 = dyn parse(file13, n2, text12, prompt2, srcfile4, encoding4)
  SEXP Rsh_Fir_array_args116[6];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_file13_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args116[2] = Rsh_Fir_reg_text12_;
  Rsh_Fir_array_args116[3] = Rsh_Fir_reg_prompt2_;
  Rsh_Fir_array_args116[4] = Rsh_Fir_reg_srcfile4_;
  Rsh_Fir_array_args116[5] = Rsh_Fir_reg_encoding4_;
  SEXP Rsh_Fir_array_arg_names50[6];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_array_arg_names50[3] = R_MissingArg;
  Rsh_Fir_array_arg_names50[4] = R_MissingArg;
  Rsh_Fir_array_arg_names50[5] = R_MissingArg;
  Rsh_Fir_reg_r61_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parse1, 6, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L111() else D35()
  // L111()
  goto L111_;

D7_:;
  // deopt 36 [r21]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 143 [r61]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r61_1;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L25(NULL)
  // L25(NULL)
  Rsh_Fir_reg_r33_1 = Rsh_const(CCP, 54);
  goto L25_;

L25_:;
  // goto L26(r33)
  // L26(r33)
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r33_1;
  goto L26_;

L27_:;
  // c9 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args117);
  // if c9 then L80() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L80()
    goto L80_;
  } else {
  // L28()
    goto L28_;
  }

L56_:;
  // st srcfile = r21
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r21_1, RHO);
  (void)(Rsh_Fir_reg_r21_1);
  // goto L17(r21)
  // L17(r21)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r21_1;
  goto L17_;

L72_:;
  // st srcfile = "<stdin>"
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_const(CCP, 75), RHO);
  (void)(Rsh_const(CCP, 75));
  // goto L25("<stdin>")
  // L25("<stdin>")
  Rsh_Fir_reg_r33_1 = Rsh_const(CCP, 75);
  goto L25_;

L78_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r39 = dyn missing2(<sym srcfile>)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r39_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L27(r39)
  // L27(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_1;
  goto L27_;

L79_:;
  // r37 = dyn base6(<sym srcfile>)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r37_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_1, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L27(r37)
  // L27(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_1;
  goto L27_;

L111_:;
  // goto L34(r61)
  // L34(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_1;
  goto L34_;

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // keep_source5 = ld `keep.source`
  Rsh_Fir_reg_keep_source5_ = Rsh_Fir_load(Rsh_const(CCP, 59), RHO);
  // check L83() else D18()
  // L83()
  goto L83_;

L80_:;
  // filename2 = ld filename
  Rsh_Fir_reg_filename2_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // check L81() else D17()
  // L81()
  goto L81_;

D17_:;
  // deopt 78 [filename2]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_filename2_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 83 [keep_source5]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_keep_source5_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L81_:;
  // filename3 = force? filename2
  Rsh_Fir_reg_filename3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename2_);
  // checkMissing(filename3)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_filename3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // st srcfile = filename3
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_filename3_, RHO);
  (void)(Rsh_Fir_reg_filename3_);
  // goto L29()
  // L29()
  goto L29_;

L83_:;
  // keep_source6 = force? keep_source5
  Rsh_Fir_reg_keep_source6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep_source5_);
  // checkMissing(keep_source6)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_keep_source6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // c10 = `as.logical`(keep_source6)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_keep_source6_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args122);
  // if c10 then L84() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L84()
    goto L84_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // sym8 = ldf `on.exit`
  Rsh_Fir_reg_sym8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 76), RHO);
  // base8 = ldf `on.exit` in base
  Rsh_Fir_reg_base8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_sym8_1;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_base8_1;
  Rsh_Fir_reg_guard8_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args123);
  // if guard8 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_1)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L84_:;
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // check L85() else D19()
  // L85()
  goto L85_;

D19_:;
  // deopt 86 []
  Rsh_Fir_deopt(86, 0, NULL, CCP, RHO);
  return R_NilValue;

L85_:;
  // p5 = prom<V +>{
  //   file8 = ld file;
  //   file9 = force? file8;
  //   checkMissing(file9);
  //   return file9;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   encoding1 = ld encoding;
  //   encoding2 = force? encoding1;
  //   checkMissing(encoding2);
  //   return encoding2;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_6, 0, NULL, CCP, RHO);
  // r42 = dyn readLines[, warn, encoding](p5, FALSE, p6)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names53[3];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = Rsh_const(CCP, 78);
  Rsh_Fir_array_arg_names53[2] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r42_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 3, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L86() else D20()
  // L86()
  goto L86_;

L100_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r58 = dyn on_exit(<lang close(file)>)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L26(r58)
  // L26(r58)
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r58_;
  goto L26_;

L101_:;
  // r57 = dyn base8(<lang close(file)>)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_1, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L26(r57)
  // L26(r57)
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r57_;
  goto L26_;

D20_:;
  // deopt 92 [r42]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r42_1;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L86_:;
  // st text = r42
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r42_1, RHO);
  (void)(Rsh_Fir_reg_r42_1);
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym7_1;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base7_1;
  Rsh_Fir_reg_guard7_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard7 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_1)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L31_:;
  // r46 = `!`(r44)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_r44_1;
  Rsh_Fir_reg_r46_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args130);
  // c11 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r46_1;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args131);
  // if c11 then L91() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L91()
    goto L91_;
  } else {
  // L32()
    goto L32_;
  }

L87_:;
  // text7 = ld text
  Rsh_Fir_reg_text7_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L89() else D21()
  // L89()
  goto L89_;

L88_:;
  // r43 = dyn base7(<sym text>)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r43_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_1, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L31(r43)
  // L31(r43)
  Rsh_Fir_reg_r44_1 = Rsh_Fir_reg_r43_1;
  goto L31_;

D21_:;
  // deopt 96 [text7]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_text7_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // close = ldf close
  Rsh_Fir_reg_close = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // check L93() else D23()
  // L93()
  goto L93_;

L89_:;
  // text8 = force? text7
  Rsh_Fir_reg_text8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text7_);
  // checkMissing(text8)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_text8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r45 = dyn length1(text8)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_text8_;
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r45_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L90() else D22()
  // L90()
  goto L90_;

L91_:;
  // st text = ""
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_const(CCP, 38), RHO);
  (void)(Rsh_const(CCP, 38));
  // goto L33()
  // L33()
  goto L33_;

D22_:;
  // deopt 99 [r45]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r45_1;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 107 []
  Rsh_Fir_deopt(107, 0, NULL, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L31(r45)
  // L31(r45)
  Rsh_Fir_reg_r44_1 = Rsh_Fir_reg_r45_1;
  goto L31_;

L93_:;
  // p7 = prom<V +>{
  //   file10 = ld file;
  //   file11 = force? file10;
  //   checkMissing(file11);
  //   return file11;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_7, 0, NULL, CCP, RHO);
  // r49 = dyn close(p7)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r49_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L94() else D24()
  // L94()
  goto L94_;

D24_:;
  // deopt 109 [r49]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r49_1;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L94_:;
  // stdin2 = ldf stdin
  Rsh_Fir_reg_stdin2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // check L95() else D25()
  // L95()
  goto L95_;

D25_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L95_:;
  // r50 = dyn stdin2()
  Rsh_Fir_reg_r50_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stdin2_, 0, NULL, NULL, CCP, RHO);
  // check L96() else D26()
  // L96()
  goto L96_;

D26_:;
  // deopt 112 [r50]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r50_1;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L96_:;
  // st file = r50
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r50_1, RHO);
  (void)(Rsh_Fir_reg_r50_1);
  // srcfilecopy1 = ldf srcfilecopy
  Rsh_Fir_reg_srcfilecopy1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // check L97() else D27()
  // L97()
  goto L97_;

D27_:;
  // deopt 115 []
  Rsh_Fir_deopt(115, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // p8 = prom<V +>{
  //   filename5 = ld filename;
  //   filename6 = force? filename5;
  //   checkMissing(filename6);
  //   return filename6;
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   text9 = ld text;
  //   text10 = force? text9;
  //   checkMissing(text10);
  //   return text10;
  // }
  Rsh_Fir_reg_p9_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_9, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   file_mtime = ldf `file.mtime`;
  //   p10 = prom<V +>{
  //     filename7 = ld filename;
  //     filename8 = force? filename7;
  //     checkMissing(filename8);
  //     return filename8;
  //   };
  //   r54 = dyn file_mtime(p10);
  //   return r54;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_10, 0, NULL, CCP, RHO);
  // r56 = dyn srcfilecopy1[, , , isFile](p8, p9, p11, TRUE)
  SEXP Rsh_Fir_array_args141[4];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_p8_1;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_p9_1;
  Rsh_Fir_array_args141[2] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args141[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names60[4];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_array_arg_names60[2] = R_MissingArg;
  Rsh_Fir_array_arg_names60[3] = Rsh_const(CCP, 82);
  Rsh_Fir_reg_r56_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_srcfilecopy1_, 4, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L98() else D28()
  // L98()
  goto L98_;

D28_:;
  // deopt 121 [r56]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r56_1;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L98_:;
  // st srcfile = r56
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r56_1, RHO);
  (void)(Rsh_Fir_reg_r56_1);
  // goto L26(r56)
  // L26(r56)
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r56_1;
  goto L26_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // r = dyn getOption("keep.source")
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names37, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2235917191_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_keep_source1_;
  SEXP Rsh_Fir_reg_keep_source2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // keep_source1 = ld `keep.source`
  Rsh_Fir_reg_keep_source1_ = Rsh_Fir_load(Rsh_const(CCP, 59), RHO);
  // keep_source2 = force? keep_source1
  Rsh_Fir_reg_keep_source2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep_source1_);
  // checkMissing(keep_source2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_keep_source2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return keep_source2
  return Rsh_Fir_reg_keep_source2_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_filename;
  SEXP Rsh_Fir_reg_filename1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // filename = ld filename
  Rsh_Fir_reg_filename = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // filename1 = force? filename
  Rsh_Fir_reg_filename1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename);
  // checkMissing(filename1)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_filename1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return filename1
  return Rsh_Fir_reg_filename1_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_srcfile1_;
  SEXP Rsh_Fir_reg_srcfile2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // srcfile1 = ld srcfile
  Rsh_Fir_reg_srcfile1_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // srcfile2 = force? srcfile1
  Rsh_Fir_reg_srcfile2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile1_);
  // checkMissing(srcfile2)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_srcfile2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return srcfile2
  return Rsh_Fir_reg_srcfile2_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_text5_;
  SEXP Rsh_Fir_reg_text6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // text5 = ld text
  Rsh_Fir_reg_text5_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // text6 = force? text5
  Rsh_Fir_reg_text6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text5_);
  // checkMissing(text6)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_text6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return text6
  return Rsh_Fir_reg_text6_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file8_;
  SEXP Rsh_Fir_reg_file9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // file8 = ld file
  Rsh_Fir_reg_file8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // file9 = force? file8
  Rsh_Fir_reg_file9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file8_);
  // checkMissing(file9)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_file9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // return file9
  return Rsh_Fir_reg_file9_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_encoding1_;
  SEXP Rsh_Fir_reg_encoding2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // return encoding2
  return Rsh_Fir_reg_encoding2_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file10_;
  SEXP Rsh_Fir_reg_file11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // file10 = ld file
  Rsh_Fir_reg_file10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // file11 = force? file10
  Rsh_Fir_reg_file11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file10_);
  // checkMissing(file11)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_file11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // return file11
  return Rsh_Fir_reg_file11_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_filename5_;
  SEXP Rsh_Fir_reg_filename6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // filename5 = ld filename
  Rsh_Fir_reg_filename5_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // filename6 = force? filename5
  Rsh_Fir_reg_filename6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename5_);
  // checkMissing(filename6)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_filename6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // return filename6
  return Rsh_Fir_reg_filename6_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_text9_;
  SEXP Rsh_Fir_reg_text10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // text9 = ld text
  Rsh_Fir_reg_text9_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // text10 = force? text9
  Rsh_Fir_reg_text10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text9_);
  // checkMissing(text10)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_text10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // return text10
  return Rsh_Fir_reg_text10_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_mtime;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r54_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // file_mtime = ldf `file.mtime`
  Rsh_Fir_reg_file_mtime = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 81), RHO);
  // p10 = prom<V +>{
  //   filename7 = ld filename;
  //   filename8 = force? filename7;
  //   checkMissing(filename8);
  //   return filename8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2235917191_11, 0, NULL, CCP, RHO);
  // r54 = dyn file_mtime(p10)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_mtime, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names59, CCP, RHO);
  // return r54
  return Rsh_Fir_reg_r54_;
}
SEXP Rsh_Fir_user_promise_inner2235917191_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_filename7_;
  SEXP Rsh_Fir_reg_filename8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2235917191/0: expected 0, got %d", NCAPTURES);

  // filename7 = ld filename
  Rsh_Fir_reg_filename7_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // filename8 = force? filename7
  Rsh_Fir_reg_filename8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename7_);
  // checkMissing(filename8)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_filename8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // return filename8
  return Rsh_Fir_reg_filename8_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_e;

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 83), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "Syntax error."
  return Rsh_const(CCP, 84);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
