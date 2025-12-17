#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1571354023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1571354023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1571354023_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1571354023_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1571354023_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1571354023_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1571354023_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1571354023_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1571354023_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1571354023_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1571354023_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1571354023_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner1571354023
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1571354023_, RHO, CCP);
  // st `tsdiag.arima0` = r
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
SEXP Rsh_Fir_user_function_inner1571354023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1571354023 dynamic dispatch ([object, `gof.lag`, `...`])

  return Rsh_Fir_user_version_inner1571354023_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1571354023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1571354023 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1571354023/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_gof_lag;  // gof_lag
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_gof_lag_isMissing;  // gof_lag_isMissing
  SEXP Rsh_Fir_reg_gof_lag_orDefault;  // gof_lag_orDefault
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_rs;  // rs
  SEXP Rsh_Fir_reg_rs1_;  // rs1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_rs4_;  // rs4
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_rs6_;  // rs6
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_rs8_;  // rs8
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_plot;  // plot
  SEXP Rsh_Fir_reg_stdres;  // stdres
  SEXP Rsh_Fir_reg_stdres1_;  // stdres1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_abline;  // abline
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_acf;  // acf
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_na_pass;  // na_pass
  SEXP Rsh_Fir_reg_na_pass1_;  // na_pass1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_gof_lag1_;  // gof_lag1
  SEXP Rsh_Fir_reg_gof_lag2_;  // gof_lag2
  SEXP Rsh_Fir_reg_numeric;  // numeric
  SEXP Rsh_Fir_reg_nlag;  // nlag
  SEXP Rsh_Fir_reg_nlag1_;  // nlag1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_nlag2_;  // nlag2
  SEXP Rsh_Fir_reg_nlag3_;  // nlag3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_Box_test;  // Box_test
  SEXP Rsh_Fir_reg_rs9_;  // rs9
  SEXP Rsh_Fir_reg_rs10_;  // rs10
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_plot1_;  // plot1
  SEXP Rsh_Fir_reg_nlag4_;  // nlag4
  SEXP Rsh_Fir_reg_nlag5_;  // nlag5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_pval;  // pval
  SEXP Rsh_Fir_reg_pval1_;  // pval1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_abline1_;  // abline1
  SEXP Rsh_Fir_reg_r39_;  // r39

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_gof_lag = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // gof_lag_isMissing = missing.0(gof_lag)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_gof_lag;
  Rsh_Fir_reg_gof_lag_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if gof_lag_isMissing then L0(10.0) else L0(gof_lag)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_gof_lag_isMissing)) {
  // L0(10.0)
    Rsh_Fir_reg_gof_lag_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(gof_lag)
    Rsh_Fir_reg_gof_lag_orDefault = Rsh_Fir_reg_gof_lag;
    goto L0_;
  }

L0_:;
  // st `gof.lag` = gof_lag_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_gof_lag_orDefault, RHO);
  (void)(Rsh_Fir_reg_gof_lag_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L1_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L2_:;
  // r13 = `/`(rs4, r10)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_rs4_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // st stdres = r13
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

L3_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c4 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c4 then L33() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L33()
    goto L33_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // st pval = dx13
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L3(i14)
  // L3(i14)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i14_;
  goto L3_;

L5_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // Box_test = ldf `Box.test`
  Rsh_Fir_reg_Box_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L34() else D15()
  // L34()
  goto L34_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c(3.0, 1.0);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(3.0, 1.0);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_, CCP, RHO);
  // r4 = dyn par[mfrow](p)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 4 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // st oldpar = r4
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym1 = ldf `on.exit`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf `on.exit` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r7 = dyn on_exit(<lang par(oldpar)>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

L9_:;
  // r5 = dyn base1(<lang par(oldpar)>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D2_:;
  // deopt 9 [object1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L12() else L13(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L13(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L13_;
  }

L11_:;
  // st rs = dx1
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // rs = ld rs
  Rsh_Fir_reg_rs = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L12_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L14() else L13(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L14()
    goto L14_;
  } else {
  // L13(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L13_;
  }

L13_:;
  // r8 = `$`(object4, <sym residuals>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L11(r8)
  // L11(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L11_;

L14_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

D3_:;
  // deopt 13 [rs]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_rs;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // rs1 = force? rs
  Rsh_Fir_reg_rs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rs);
  // checkMissing(rs1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_rs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // sym2 = ldf sqrt
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base2 = ldf sqrt in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

L17_:;
  // r9 = dyn base2(<lang `$`(object, sigma2)>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(rs1, r9)
  // L2(rs1, r9)
  Rsh_Fir_reg_rs4_ = Rsh_Fir_reg_rs1_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L2_;

D4_:;
  // deopt 15 [rs1, object5]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_rs1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(object6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L20() else L21(rs1, object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L20()
    goto L20_;
  } else {
  // L21(rs1, object6)
    Rsh_Fir_reg_rs6_ = Rsh_Fir_reg_rs1_;
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L21_;
  }

L19_:;
  // r12 = sqrt(dx3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L2(rs8, r12)
  // L2(rs8, r12)
  Rsh_Fir_reg_rs4_ = Rsh_Fir_reg_rs8_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r12_;
  goto L2_;

L20_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc1 then L22() else L21(rs1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L22()
    goto L22_;
  } else {
  // L21(rs1, dr2)
    Rsh_Fir_reg_rs6_ = Rsh_Fir_reg_rs1_;
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L21_;
  }

L21_:;
  // r11 = `$`(object8, <sym sigma2>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L19(rs6, r11)
  // L19(rs6, r11)
  Rsh_Fir_reg_rs8_ = Rsh_Fir_reg_rs6_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L19_;

L22_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L19(rs1, dx2)
  // L19(rs1, dx2)
  Rsh_Fir_reg_rs8_ = Rsh_Fir_reg_rs1_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L19_;

D5_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p1 = prom<V +>{
  //   stdres = ld stdres;
  //   stdres1 = force? stdres;
  //   checkMissing(stdres1);
  //   return stdres1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_1, CCP, RHO);
  // r15 = dyn plot[, type, main, ylab](p1, "h", "Standardized Residuals", "")
  SEXP Rsh_Fir_array_args29[4];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 4, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

D6_:;
  // deopt 30 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // abline = ldf abline
  Rsh_Fir_reg_abline = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // r16 = dyn abline[h](0.0)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abline, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

D8_:;
  // deopt 35 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // acf = ldf acf
  Rsh_Fir_reg_acf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D9_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p2 = prom<V +>{
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   c3 = `is.object`(object10);
  //   if c3 then L1() else L2(object10);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", object10);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(object12):
  //   r17 = `$`(object12, <sym residuals>);
  //   goto L0(r17);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_2, CCP, RHO);
  // p3 = prom<V +>{
  //   na_pass = ld `na.pass`;
  //   na_pass1 = force? na_pass;
  //   checkMissing(na_pass1);
  //   return na_pass1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_3, CCP, RHO);
  // r20 = dyn acf[, plot, main, `na.action`](p2, TRUE, "ACF of Residuals", p3)
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args38[3] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_arg_names8[3] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_acf, 4, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L28() else D10()
  // L28()
  goto L28_;

D10_:;
  // deopt 45 [r20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // gof_lag1 = ld `gof.lag`
  Rsh_Fir_reg_gof_lag1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

D11_:;
  // deopt 46 [gof_lag1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_gof_lag1_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L29_:;
  // gof_lag2 = force? gof_lag1
  Rsh_Fir_reg_gof_lag2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gof_lag1_);
  // checkMissing(gof_lag2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_gof_lag2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // st nlag = gof_lag2
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_gof_lag2_, RHO);
  (void)(Rsh_Fir_reg_gof_lag2_);
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

D12_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p4 = prom<V +>{
  //   nlag = ld nlag;
  //   nlag1 = force? nlag;
  //   checkMissing(nlag1);
  //   return nlag1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_4, CCP, RHO);
  // r22 = dyn numeric(p4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L31() else D13()
  // L31()
  goto L31_;

D13_:;
  // deopt 52 [r22]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L31_:;
  // st pval = r22
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // nlag2 = ld nlag
  Rsh_Fir_reg_nlag2_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L32() else D14()
  // L32()
  goto L32_;

D14_:;
  // deopt 55 [1, nlag2]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_nlag2_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L32_:;
  // nlag3 = force? nlag2
  Rsh_Fir_reg_nlag3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlag2_);
  // checkMissing(nlag3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_nlag3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r23 = `:`(1, nlag3)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_nlag3_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // s = toForSeq(r23)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 42);
  // goto L3(i)
  // L3(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L3_;

L33_:;
  // plot1 = ldf plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L44() else D18()
  // L44()
  goto L44_;

D15_:;
  // deopt 59 [i2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L34_:;
  // p5 = prom<V +>{
  //   rs9 = ld rs;
  //   rs10 = force? rs9;
  //   checkMissing(rs10);
  //   return rs10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_5, CCP, RHO);
  // p6 = prom<V +>{
  //   i5 = ld i;
  //   i6 = force? i5;
  //   checkMissing(i6);
  //   return i6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_6, CCP, RHO);
  // r26 = dyn Box_test[, , type](p5, p6, "Ljung-Box")
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Box_test, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L35() else D16()
  // L35()
  goto L35_;

D16_:;
  // deopt 64 [i2, r26]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L35_:;
  // c5 = `is.object`(r26)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c5 then L37() else L38(i2, r26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L37()
    goto L37_;
  } else {
  // L38(i2, r26)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r26_;
    goto L38_;
  }

L36_:;
  // l1 = ld pval
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c6 = `is.object`(l1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c6 then L40() else L41(i10, dx7, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L40()
    goto L40_;
  } else {
  // L41(i10, dx7, l1)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L41_;
  }

L37_:;
  // dr6 = tryDispatchBuiltin.1("$", r26)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc3 then L39() else L38(i2, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L39()
    goto L39_;
  } else {
  // L38(i2, dr6)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_dr6_;
    goto L38_;
  }

L38_:;
  // r29 = `$`(r28, <sym p.value>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L36(i8, r29)
  // L36(i8, r29)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r29_;
  goto L36_;

L39_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L36(i2, dx6)
  // L36(i2, dx6)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L36_;

L40_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l1, dx7)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args55);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc4 then L42() else L41(i10, dx7, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L42()
    goto L42_;
  } else {
  // L41(i10, dx7, dr8)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr8_;
    goto L41_;
  }

L41_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L43() else D17()
  // L43()
  goto L43_;

L42_:;
  // dx11 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L4(i10, dx11)
  // L4(i10, dx11)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
  goto L4_;

D17_:;
  // deopt 67 [i12, dx9, l3, dx7, i15]
  SEXP Rsh_Fir_array_deopt_stack12[5];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack12[4] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(67, 5, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L43_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r30 = dyn ___(l3, dx7, i16)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L4(i12, r30)
  // L4(i12, r30)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r30_;
  goto L4_;

D18_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p7 = prom<V +>{
  //   nlag4 = ld nlag;
  //   nlag5 = force? nlag4;
  //   checkMissing(nlag5);
  //   r31 = `:`(1, nlag5);
  //   return r31;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_7, CCP, RHO);
  // p8 = prom<V +>{
  //   pval = ld pval;
  //   pval1 = force? pval;
  //   checkMissing(pval1);
  //   return pval1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_8, CCP, RHO);
  // p9 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r35):
  //   return r35;
  // L1():
  //   c7 = ldf c in base;
  //   r36 = dyn c7(0.0, 1.0);
  //   goto L0(r36);
  // L2():
  //   r34 = dyn base3(0.0, 1.0);
  //   goto L0(r34);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1571354023_9, CCP, RHO);
  // r38 = dyn plot1[, , xlab, ylab, ylim, main](p7, p8, "lag", "p value", p9, "p values for Ljung-Box statistic")
  SEXP Rsh_Fir_array_args65[6];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args65[3] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args65[4] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args65[5] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names14[6];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 50);
  Rsh_Fir_array_arg_names14[3] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names14[4] = Rsh_const(CCP, 51);
  Rsh_Fir_array_arg_names14[5] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot1_, 6, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L45() else D19()
  // L45()
  goto L45_;

D19_:;
  // deopt 86 [r38]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L45_:;
  // abline1 = ldf abline
  Rsh_Fir_reg_abline1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L46() else D20()
  // L46()
  goto L46_;

D20_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // r39 = dyn abline1[h, lty, col](0.05, 2.0, "blue")
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args66[2] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abline1_, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L47() else D21()
  // L47()
  goto L47_;

D21_:;
  // deopt 95 [r39]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L47_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r39
  return Rsh_Fir_reg_r39_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r2 = dyn c(3.0, 1.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(3.0, 1.0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_1(SEXP CCP, SEXP RHO) {
  // stdres = ld stdres
  Rsh_Fir_reg_stdres = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // stdres1 = force? stdres
  Rsh_Fir_reg_stdres1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stdres);
  // checkMissing(stdres1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_stdres1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return stdres1
  return Rsh_Fir_reg_stdres1_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_2(SEXP CCP, SEXP RHO) {
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2(object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object10)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r17 = `$`(object12, <sym residuals>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r17_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_3(SEXP CCP, SEXP RHO) {
  // na_pass = ld `na.pass`
  Rsh_Fir_reg_na_pass = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // na_pass1 = force? na_pass
  Rsh_Fir_reg_na_pass1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_pass);
  // checkMissing(na_pass1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_na_pass1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return na_pass1
  return Rsh_Fir_reg_na_pass1_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_4(SEXP CCP, SEXP RHO) {
  // nlag = ld nlag
  Rsh_Fir_reg_nlag = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // nlag1 = force? nlag
  Rsh_Fir_reg_nlag1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlag);
  // checkMissing(nlag1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_nlag1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return nlag1
  return Rsh_Fir_reg_nlag1_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_5(SEXP CCP, SEXP RHO) {
  // rs9 = ld rs
  Rsh_Fir_reg_rs9_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // rs10 = force? rs9
  Rsh_Fir_reg_rs10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rs9_);
  // checkMissing(rs10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_rs10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return rs10
  return Rsh_Fir_reg_rs10_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_6(SEXP CCP, SEXP RHO) {
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return i6
  return Rsh_Fir_reg_i6_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_7(SEXP CCP, SEXP RHO) {
  // nlag4 = ld nlag
  Rsh_Fir_reg_nlag4_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // nlag5 = force? nlag4
  Rsh_Fir_reg_nlag5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlag4_);
  // checkMissing(nlag5)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_nlag5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // r31 = `:`(1, nlag5)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_nlag5_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // return r31
  return Rsh_Fir_reg_r31_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_8(SEXP CCP, SEXP RHO) {
  // pval = ld pval
  Rsh_Fir_reg_pval = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // pval1 = force? pval
  Rsh_Fir_reg_pval1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pval);
  // checkMissing(pval1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_pval1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return pval1
  return Rsh_Fir_reg_pval1_;
}
SEXP Rsh_Fir_user_promise_inner1571354023_9(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r35
  return Rsh_Fir_reg_r35_;

L1_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r36 = dyn c7(0.0, 1.0)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L0_;

L2_:;
  // r34 = dyn base3(0.0, 1.0)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
