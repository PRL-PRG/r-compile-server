#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3445983298_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3445983298_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_arima;  // arima
  SEXP Rsh_Fir_reg_presidents;  // presidents
  SEXP Rsh_Fir_reg_presidents1_;  // presidents1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_predict;  // predict
  SEXP Rsh_Fir_reg_fit3_;  // fit3
  SEXP Rsh_Fir_reg_fit4_;  // fit4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_KalmanForecast;  // KalmanForecast
  SEXP Rsh_Fir_reg_fit5_;  // fit5
  SEXP Rsh_Fir_reg_fit6_;  // fit6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_fit8_;  // fit8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_pr;  // pr
  SEXP Rsh_Fir_reg_pr1_;  // pr1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_pr3_;  // pr3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_fit9_;  // fit9
  SEXP Rsh_Fir_reg_fit10_;  // fit10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_fit12_;  // fit12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_pr4_;  // pr4
  SEXP Rsh_Fir_reg_pr5_;  // pr5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_pr7_;  // pr7
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_fit13_;  // fit13
  SEXP Rsh_Fir_reg_fit14_;  // fit14
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_fit16_;  // fit16
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_fit17_;  // fit17
  SEXP Rsh_Fir_reg_fit18_;  // fit18
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_fit20_;  // fit20
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_KalmanForecast1_;  // KalmanForecast1
  SEXP Rsh_Fir_reg_mod;  // mod
  SEXP Rsh_Fir_reg_mod1_;  // mod1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_print;  // print
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_pr8_;  // pr8
  SEXP Rsh_Fir_reg_pr9_;  // pr9
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_pr11_;  // pr11
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_fit21_;  // fit21
  SEXP Rsh_Fir_reg_fit22_;  // fit22
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_fit24_;  // fit24
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_pr12_;  // pr12
  SEXP Rsh_Fir_reg_pr13_;  // pr13
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_pr15_;  // pr15
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_fit25_;  // fit25
  SEXP Rsh_Fir_reg_fit26_;  // fit26
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_fit28_;  // fit28
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_pr16_;  // pr16
  SEXP Rsh_Fir_reg_pr17_;  // pr17
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r42_;  // r42

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3445983298
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3445983298_, RHO, CCP);
  // st KalmanLike = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // arima = ldf arima
  Rsh_Fir_reg_arima = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L0_:;
  // `+`(dx16, dx17)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_dx17_;
  (void)(Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // sym1 = ldf sqrt
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf sqrt in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L1_:;
  // fit17 = ld fit3
  Rsh_Fir_reg_fit17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c8 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c8 then L41() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L41()
    goto L41_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // st mod = r41
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // goto L2(i7)
  // L2(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L2_;

L4_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // st y = x
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // KalmanForecast1 = ldf KalmanForecast
  Rsh_Fir_reg_KalmanForecast1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p = prom<V +>{
  //   presidents = ld presidents;
  //   presidents1 = force? presidents;
  //   checkMissing(presidents1);
  //   return presidents1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, CCP, RHO);
  // p1 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   c = ldf c in base;
  //   r4 = dyn c(3.0, 0.0, 0.0);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base(3.0, 0.0, 0.0);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, CCP, RHO);
  // r6 = dyn arima(p, p1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_arima, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 7 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // st fit3 = r6
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // predict = ldf predict
  Rsh_Fir_reg_predict = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p2 = prom<V +>{
  //   fit3 = ld fit3;
  //   fit4 = force? fit3;
  //   checkMissing(fit4);
  //   return fit4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, CCP, RHO);
  // r8 = dyn predict(p2, 12.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_predict, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 13 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // KalmanForecast = ldf KalmanForecast
  Rsh_Fir_reg_KalmanForecast = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p3 = prom<V +>{
  //   fit5 = ld fit3;
  //   fit6 = force? fit5;
  //   checkMissing(fit6);
  //   c1 = `is.object`(fit6);
  //   if c1 then L1() else L2(fit6);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", fit6);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(fit8):
  //   r9 = `$`(fit8, <sym model>);
  //   goto L0(r9);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, CCP, RHO);
  // r11 = dyn KalmanForecast(12.0, p3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_KalmanForecast, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

D5_:;
  // deopt 18 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // st pr = r11
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // pr = ld pr
  Rsh_Fir_reg_pr = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L11() else D6()
  // L11()
  goto L11_;

D6_:;
  // deopt 20 [pr]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_pr;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // pr1 = force? pr
  Rsh_Fir_reg_pr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pr);
  // checkMissing(pr1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_pr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(pr1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_pr1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c2 then L13() else L14(pr1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L13()
    goto L13_;
  } else {
  // L14(pr1)
    Rsh_Fir_reg_pr3_ = Rsh_Fir_reg_pr1_;
    goto L14_;
  }

L12_:;
  // fit9 = ld fit3
  Rsh_Fir_reg_fit9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

L13_:;
  // dr2 = tryDispatchBuiltin.1("$", pr1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_pr1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L15() else L14(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L15()
    goto L15_;
  } else {
  // L14(dr2)
    Rsh_Fir_reg_pr3_ = Rsh_Fir_reg_dr2_;
    goto L14_;
  }

L14_:;
  // r12 = `$`(pr3, <sym pred>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_pr3_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L12(r12)
  // L12(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L12_;

L15_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L12(dx2)
  // L12(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L12_;

D7_:;
  // deopt 22 [dx3, fit9]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_fit9_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // fit10 = force? fit9
  Rsh_Fir_reg_fit10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit9_);
  // checkMissing(fit10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_fit10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(fit10)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_fit10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c3 then L18() else L19(dx3, fit10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L18()
    goto L18_;
  } else {
  // L19(dx3, fit10)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_fit12_ = Rsh_Fir_reg_fit10_;
    goto L19_;
  }

L17_:;
  // c4 = `is.object`(dx9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c4 then L21() else L22(dx8, dx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L21()
    goto L21_;
  } else {
  // L22(dx8, dx9)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx8_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx9_;
    goto L22_;
  }

L18_:;
  // dr4 = tryDispatchBuiltin.1("$", fit10)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_fit10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc2 then L20() else L19(dx3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L20()
    goto L20_;
  } else {
  // L19(dx3, dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_fit12_ = Rsh_Fir_reg_dr4_;
    goto L19_;
  }

L19_:;
  // r13 = `$`(fit12, <sym coef>)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_fit12_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L17(dx5, r13)
  // L17(dx5, r13)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r13_;
  goto L17_;

L20_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L17(dx3, dx7)
  // L17(dx3, dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
  goto L17_;

L21_:;
  // dr6 = tryDispatchBuiltin.1("[", dx9)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc3 then L23() else L22(dx8, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L23()
    goto L23_;
  } else {
  // L22(dx8, dr6)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx8_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dr6_;
    goto L22_;
  }

L22_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r14 = dyn __(dx13, 4.0)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(dx12, r14)
  // L0(dx12, r14)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r14_;
  goto L0_;

L23_:;
  // dx15 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L0(dx8, dx15)
  // L0(dx8, dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
  goto L0_;

L24_:;
  // pr4 = ld pr
  Rsh_Fir_reg_pr4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

L25_:;
  // r16 = dyn base1(<lang `*`(`$`(pr, var), `$`(fit3, sigma2))>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D8_:;
  // deopt 30 [pr4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_pr4_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // pr5 = force? pr4
  Rsh_Fir_reg_pr5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pr4_);
  // checkMissing(pr5)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_pr5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(pr5)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_pr5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c5 then L28() else L29(pr5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L28()
    goto L28_;
  } else {
  // L29(pr5)
    Rsh_Fir_reg_pr7_ = Rsh_Fir_reg_pr5_;
    goto L29_;
  }

L27_:;
  // fit13 = ld fit3
  Rsh_Fir_reg_fit13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L31() else D9()
  // L31()
  goto L31_;

L28_:;
  // dr8 = tryDispatchBuiltin.1("$", pr5)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_pr5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc4 then L30() else L29(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L30()
    goto L30_;
  } else {
  // L29(dr8)
    Rsh_Fir_reg_pr7_ = Rsh_Fir_reg_dr8_;
    goto L29_;
  }

L29_:;
  // r18 = `$`(pr7, <sym var>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_pr7_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L27(r18)
  // L27(r18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r18_;
  goto L27_;

L30_:;
  // dx18 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L27(dx18)
  // L27(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L27_;

D9_:;
  // deopt 32 [dx19, fit13]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_fit13_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // fit14 = force? fit13
  Rsh_Fir_reg_fit14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit13_);
  // checkMissing(fit14)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_fit14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(fit14)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_fit14_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c6 then L33() else L34(dx19, fit14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L33()
    goto L33_;
  } else {
  // L34(dx19, fit14)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_fit16_ = Rsh_Fir_reg_fit14_;
    goto L34_;
  }

L32_:;
  // r20 = `*`(dx24, dx25)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // r21 = sqrt(r20)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L1()
  // L1()
  goto L1_;

L33_:;
  // dr10 = tryDispatchBuiltin.1("$", fit14)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_fit14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc5 then L35() else L34(dx19, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L35()
    goto L35_;
  } else {
  // L34(dx19, dr10)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_fit16_ = Rsh_Fir_reg_dr10_;
    goto L34_;
  }

L34_:;
  // r19 = `$`(fit16, <sym sigma2>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_fit16_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L32(dx21, r19)
  // L32(dx21, r19)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r19_;
  goto L32_;

L35_:;
  // dx23 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L32(dx19, dx23)
  // L32(dx19, dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
  goto L32_;

D10_:;
  // deopt 37 [fit17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_fit17_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L36_:;
  // fit18 = force? fit17
  Rsh_Fir_reg_fit18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit17_);
  // checkMissing(fit18)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_fit18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(fit18)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_fit18_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c7 then L38() else L39(fit18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L38()
    goto L38_;
  } else {
  // L39(fit18)
    Rsh_Fir_reg_fit20_ = Rsh_Fir_reg_fit18_;
    goto L39_;
  }

L37_:;
  // st mod = dx27
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // s = toForSeq(<int 1, 2, 3>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 28);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L38_:;
  // dr12 = tryDispatchBuiltin.1("$", fit18)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_fit18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc6 then L40() else L39(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L40()
    goto L40_;
  } else {
  // L39(dr12)
    Rsh_Fir_reg_fit20_ = Rsh_Fir_reg_dr12_;
    goto L39_;
  }

L39_:;
  // r22 = `$`(fit20, <sym model>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_fit20_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L37(r22)
  // L37(r22)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r22_;
  goto L37_;

L40_:;
  // dx26 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L37(dx26)
  // L37(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L37_;

L41_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return i2
  return Rsh_Fir_reg_i2_;

D11_:;
  // deopt 44 [i2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // p4 = prom<V +>{
  //   mod = ld mod;
  //   mod1 = force? mod;
  //   checkMissing(mod1);
  //   return mod1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, CCP, RHO);
  // r24 = dyn KalmanForecast1(4.0, p4, TRUE)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_KalmanForecast1_, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L43() else D12()
  // L43()
  goto L43_;

D12_:;
  // deopt 48 [i2, r24]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L43_:;
  // st pr = r24
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L44() else D13()
  // L44()
  goto L44_;

D13_:;
  // deopt 51 [i2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L44_:;
  // p5 = prom<V +>{
  //   sym2 = ldf list;
  //   base2 = ldf list in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L3() else L4();
  // L0(r26):
  //   return r26;
  // L3():
  //   pr8 = ld pr;
  //   pr9 = force? pr8;
  //   checkMissing(pr9);
  //   c9 = `is.object`(pr9);
  //   if c9 then L6() else L7(pr9);
  // L4():
  //   r25 = dyn base2[pred, se](<lang `+`(`$`(pr, pred), `[`(`$`(fit3, coef), "intercept"))>, <lang sqrt(`*`(`$`(pr, var), `$`(fit3, sigma2)))>);
  //   goto L0(r25);
  // L5(dx29):
  //   fit21 = ld fit3;
  //   fit22 = force? fit21;
  //   checkMissing(fit22);
  //   c10 = `is.object`(fit22);
  //   if c10 then L10() else L11(dx29, fit22);
  // L6():
  //   dr14 = tryDispatchBuiltin.1("$", pr9);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L8() else L7(dr14);
  // L7(pr11):
  //   r27 = `$`(pr11, <sym pred>);
  //   goto L5(r27);
  // L8():
  //   dx28 = getTryDispatchBuiltinValue(dr14);
  //   goto L5(dx28);
  // L9(dx34, dx35):
  //   c11 = `is.object`(dx35);
  //   if c11 then L13() else L14(dx34, dx35);
  // L10():
  //   dr16 = tryDispatchBuiltin.1("$", fit22);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L12() else L11(dx29, dr16);
  // L11(dx31, fit24):
  //   r28 = `$`(fit24, <sym coef>);
  //   goto L9(dx31, r28);
  // L1(dx42, dx43):
  //   r30 = `+`(dx42, dx43);
  //   sym3 = ldf sqrt;
  //   base3 = ldf sqrt in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L16() else L17();
  // L12():
  //   dx33 = getTryDispatchBuiltinValue(dr16);
  //   goto L9(dx29, dx33);
  // L13():
  //   dr18 = tryDispatchBuiltin.1("[", dx35);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L15() else L14(dx34, dr18);
  // L14(dx38, dx39):
  //   __1 = ldf `[` in base;
  //   r29 = dyn __1(dx39, "intercept");
  //   goto L1(dx38, r29);
  // L2(r32):
  //   list = ldf list in base;
  //   r37 = dyn list(r30, r32);
  //   goto L0(r37);
  // L15():
  //   dx41 = getTryDispatchBuiltinValue(dr18);
  //   goto L1(dx34, dx41);
  // L16():
  //   pr12 = ld pr;
  //   pr13 = force? pr12;
  //   checkMissing(pr13);
  //   c12 = `is.object`(pr13);
  //   if c12 then L19() else L20(pr13);
  // L17():
  //   r31 = dyn base3(<lang `*`(`$`(pr, var), `$`(fit3, sigma2))>);
  //   goto L2(r31);
  // L18(dx45):
  //   fit25 = ld fit3;
  //   fit26 = force? fit25;
  //   checkMissing(fit26);
  //   c13 = `is.object`(fit26);
  //   if c13 then L23() else L24(dx45, fit26);
  // L19():
  //   dr20 = tryDispatchBuiltin.1("$", pr13);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L21() else L20(dr20);
  // L20(pr15):
  //   r33 = `$`(pr15, <sym var>);
  //   goto L18(r33);
  // L21():
  //   dx44 = getTryDispatchBuiltinValue(dr20);
  //   goto L18(dx44);
  // L22(dx50, dx51):
  //   r35 = `*`(dx50, dx51);
  //   r36 = sqrt(r35);
  //   goto L2(r36);
  // L23():
  //   dr22 = tryDispatchBuiltin.1("$", fit26);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L25() else L24(dx45, dr22);
  // L24(dx47, fit28):
  //   r34 = `$`(fit28, <sym sigma2>);
  //   goto L22(dx47, r34);
  // L25():
  //   dx49 = getTryDispatchBuiltinValue(dr22);
  //   goto L22(dx45, dx49);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, CCP, RHO);
  // r39 = dyn print(p5)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L45() else D14()
  // L45()
  goto L45_;

D14_:;
  // deopt 53 [i2, r39]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L45_:;
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args99);
  // if guard4 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // pr16 = ld pr
  Rsh_Fir_reg_pr16_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L48() else D15()
  // L48()
  goto L48_;

L47_:;
  // r40 = dyn base4(<sym pr>, "mod")
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3(i2, r40)
  // L3(i2, r40)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L3_;

D15_:;
  // deopt 56 [i2, pr16]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_pr16_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L48_:;
  // pr17 = force? pr16
  Rsh_Fir_reg_pr17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pr16_);
  // checkMissing(pr17)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_pr17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r42 = dyn attr(pr17, "mod")
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_pr17_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L49() else D16()
  // L49()
  goto L49_;

D16_:;
  // deopt 60 [i2, r42]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L3(i2, r42)
  // L3(i2, r42)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO) {
  // presidents = ld presidents
  Rsh_Fir_reg_presidents = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // presidents1 = force? presidents
  Rsh_Fir_reg_presidents1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_presidents);
  // checkMissing(presidents1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_presidents1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return presidents1
  return Rsh_Fir_reg_presidents1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r4 = dyn c(3.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base(3.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO) {
  // fit3 = ld fit3
  Rsh_Fir_reg_fit3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fit4 = force? fit3
  Rsh_Fir_reg_fit4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit3_);
  // checkMissing(fit4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_fit4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return fit4
  return Rsh_Fir_reg_fit4_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO) {
  // fit5 = ld fit3
  Rsh_Fir_reg_fit5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fit6 = force? fit5
  Rsh_Fir_reg_fit6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit5_);
  // checkMissing(fit6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_fit6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(fit6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_fit6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(fit6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(fit6)
    Rsh_Fir_reg_fit8_ = Rsh_Fir_reg_fit6_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", fit6)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_fit6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_fit8_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r9 = `$`(fit8, <sym model>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_fit8_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO) {
  // mod = ld mod
  Rsh_Fir_reg_mod = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // mod1 = force? mod
  Rsh_Fir_reg_mod1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mod);
  // checkMissing(mod1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_mod1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return mod1
  return Rsh_Fir_reg_mod1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO) {
  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard2 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r26
  return Rsh_Fir_reg_r26_;

L1_:;
  // r30 = `+`(dx42, dx43)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dx42_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // sym3 = ldf sqrt
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base3 = ldf sqrt in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard3 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r37 = dyn list(r30, r32)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r37_;
  goto L0_;

L3_:;
  // pr8 = ld pr
  Rsh_Fir_reg_pr8_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // pr9 = force? pr8
  Rsh_Fir_reg_pr9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pr8_);
  // checkMissing(pr9)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_pr9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(pr9)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_pr9_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c9 then L6() else L7(pr9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L6()
    goto L6_;
  } else {
  // L7(pr9)
    Rsh_Fir_reg_pr11_ = Rsh_Fir_reg_pr9_;
    goto L7_;
  }

L4_:;
  // r25 = dyn base2[pred, se](<lang `+`(`$`(pr, pred), `[`(`$`(fit3, coef), "intercept"))>, <lang sqrt(`*`(`$`(pr, var), `$`(fit3, sigma2)))>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L0_;

L5_:;
  // fit21 = ld fit3
  Rsh_Fir_reg_fit21_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fit22 = force? fit21
  Rsh_Fir_reg_fit22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit21_);
  // checkMissing(fit22)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_fit22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(fit22)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_fit22_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c10 then L10() else L11(dx29, fit22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L10()
    goto L10_;
  } else {
  // L11(dx29, fit22)
    Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_fit24_ = Rsh_Fir_reg_fit22_;
    goto L11_;
  }

L6_:;
  // dr14 = tryDispatchBuiltin.1("$", pr9)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_pr9_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc7 then L8() else L7(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr14)
    Rsh_Fir_reg_pr11_ = Rsh_Fir_reg_dr14_;
    goto L7_;
  }

L7_:;
  // r27 = `$`(pr11, <sym pred>)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_pr11_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L5(r27)
  // L5(r27)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r27_;
  goto L5_;

L8_:;
  // dx28 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L5(dx28)
  // L5(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L5_;

L9_:;
  // c11 = `is.object`(dx35)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c11 then L13() else L14(dx34, dx35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L13()
    goto L13_;
  } else {
  // L14(dx34, dx35)
    Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx34_;
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx35_;
    goto L14_;
  }

L10_:;
  // dr16 = tryDispatchBuiltin.1("$", fit22)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_fit22_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args75);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc8 then L12() else L11(dx29, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L12()
    goto L12_;
  } else {
  // L11(dx29, dr16)
    Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_fit24_ = Rsh_Fir_reg_dr16_;
    goto L11_;
  }

L11_:;
  // r28 = `$`(fit24, <sym coef>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_fit24_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L9(dx31, r28)
  // L9(dx31, r28)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r28_;
  goto L9_;

L12_:;
  // dx33 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L9(dx29, dx33)
  // L9(dx29, dx33)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx33_;
  goto L9_;

L13_:;
  // dr18 = tryDispatchBuiltin.1("[", dx35)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc9 then L15() else L14(dx34, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L15()
    goto L15_;
  } else {
  // L14(dx34, dr18)
    Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx34_;
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dr18_;
    goto L14_;
  }

L14_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r29 = dyn __1(dx39, "intercept")
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(dx38, r29)
  // L1(dx38, r29)
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r29_;
  goto L1_;

L15_:;
  // dx41 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L1(dx34, dx41)
  // L1(dx34, dx41)
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx34_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx41_;
  goto L1_;

L16_:;
  // pr12 = ld pr
  Rsh_Fir_reg_pr12_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // pr13 = force? pr12
  Rsh_Fir_reg_pr13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pr12_);
  // checkMissing(pr13)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_pr13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(pr13)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_pr13_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c12 then L19() else L20(pr13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L19()
    goto L19_;
  } else {
  // L20(pr13)
    Rsh_Fir_reg_pr15_ = Rsh_Fir_reg_pr13_;
    goto L20_;
  }

L17_:;
  // r31 = dyn base3(<lang `*`(`$`(pr, var), `$`(fit3, sigma2))>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L2(r31)
  // L2(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L2_;

L18_:;
  // fit25 = ld fit3
  Rsh_Fir_reg_fit25_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fit26 = force? fit25
  Rsh_Fir_reg_fit26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit25_);
  // checkMissing(fit26)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_fit26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(fit26)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_fit26_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if c13 then L23() else L24(dx45, fit26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L23()
    goto L23_;
  } else {
  // L24(dx45, fit26)
    Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx45_;
    Rsh_Fir_reg_fit28_ = Rsh_Fir_reg_fit26_;
    goto L24_;
  }

L19_:;
  // dr20 = tryDispatchBuiltin.1("$", pr13)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_pr13_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args88);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc10 then L21() else L20(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr20)
    Rsh_Fir_reg_pr15_ = Rsh_Fir_reg_dr20_;
    goto L20_;
  }

L20_:;
  // r33 = `$`(pr15, <sym var>)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_pr15_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L18(r33)
  // L18(r33)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r33_;
  goto L18_;

L21_:;
  // dx44 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L18(dx44)
  // L18(dx44)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L18_;

L22_:;
  // r35 = `*`(dx50, dx51)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dx50_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_dx51_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // r36 = sqrt(r35)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L2(r36)
  // L2(r36)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r36_;
  goto L2_;

L23_:;
  // dr22 = tryDispatchBuiltin.1("$", fit26)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_fit26_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc11 then L25() else L24(dx45, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L25()
    goto L25_;
  } else {
  // L24(dx45, dr22)
    Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx45_;
    Rsh_Fir_reg_fit28_ = Rsh_Fir_reg_dr22_;
    goto L24_;
  }

L24_:;
  // r34 = `$`(fit28, <sym sigma2>)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_fit28_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L22(dx47, r34)
  // L22(dx47, r34)
  Rsh_Fir_reg_dx50_ = Rsh_Fir_reg_dx47_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_r34_;
  goto L22_;

L25_:;
  // dx49 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx49_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L22(dx45, dx49)
  // L22(dx45, dx49)
  Rsh_Fir_reg_dx50_ = Rsh_Fir_reg_dx45_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx49_;
  goto L22_;
}
SEXP Rsh_Fir_user_function_inner3445983298_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3445983298 dynamic dispatch ([y, mod, nit, update])

  return Rsh_Fir_user_version_inner3445983298_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3445983298_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3445983298 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3445983298/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_mod1;  // mod
  SEXP Rsh_Fir_reg_nit;  // nit
  SEXP Rsh_Fir_reg_update;  // update
  SEXP Rsh_Fir_reg_nit_isMissing;  // nit_isMissing
  SEXP Rsh_Fir_reg_nit_orDefault;  // nit_orDefault
  SEXP Rsh_Fir_reg_update_isMissing;  // update_isMissing
  SEXP Rsh_Fir_reg_update_orDefault;  // update_orDefault
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_KalmanLike;  // C_KalmanLike
  SEXP Rsh_Fir_reg_C_KalmanLike1_;  // C_KalmanLike1
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_mod1_1;  // mod1
  SEXP Rsh_Fir_reg_mod2_;  // mod2
  SEXP Rsh_Fir_reg_nit1_;  // nit1
  SEXP Rsh_Fir_reg_nit2_;  // nit2
  SEXP Rsh_Fir_reg_update1_;  // update1
  SEXP Rsh_Fir_reg_update2_;  // update2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r14_1;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_dr2_1;  // dr2
  SEXP Rsh_Fir_reg_dc1_1;  // dc1
  SEXP Rsh_Fir_reg_dx2_1;  // dx2
  SEXP Rsh_Fir_reg_r22_1;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_dx3_1;  // dx3
  SEXP Rsh_Fir_reg___1_1;  // __1
  SEXP Rsh_Fir_reg_r24_1;  // r24
  SEXP Rsh_Fir_reg_r25_1;  // r25
  SEXP Rsh_Fir_reg_r26_1;  // r26
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_dr4_1;  // dr4
  SEXP Rsh_Fir_reg_dc2_1;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_1;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r27_1;  // r27
  SEXP Rsh_Fir_reg_list1;  // list
  SEXP Rsh_Fir_reg_r28_1;  // r28
  SEXP Rsh_Fir_reg_update3_;  // update3
  SEXP Rsh_Fir_reg_update4_;  // update4
  SEXP Rsh_Fir_reg_c3_1;  // c3
  SEXP Rsh_Fir_reg_sym3_1;  // sym3
  SEXP Rsh_Fir_reg_base3_1;  // base3
  SEXP Rsh_Fir_reg_guard3_1;  // guard3
  SEXP Rsh_Fir_reg_r29_1;  // r29
  SEXP Rsh_Fir_reg_r30_1;  // r30
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_attr1;  // attr
  SEXP Rsh_Fir_reg_r31_1;  // r31
  SEXP Rsh_Fir_reg_l1;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r32_1;  // r32
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1

  // Bind parameters
  Rsh_Fir_reg_y = PARAMS[0];
  Rsh_Fir_reg_mod1 = PARAMS[1];
  Rsh_Fir_reg_nit = PARAMS[2];
  Rsh_Fir_reg_update = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // st mod = mod
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_mod1, RHO);
  (void)(Rsh_Fir_reg_mod1);
  // nit_isMissing = missing.0(nit)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_nit;
  Rsh_Fir_reg_nit_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args103);
  // if nit_isMissing then L0(0) else L0(nit)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nit_isMissing)) {
  // L0(0)
    Rsh_Fir_reg_nit_orDefault = Rsh_const(CCP, 28);
    goto L0_;
  } else {
  // L0(nit)
    Rsh_Fir_reg_nit_orDefault = Rsh_Fir_reg_nit;
    goto L0_;
  }

L0_:;
  // st nit = nit_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_nit_orDefault, RHO);
  (void)(Rsh_Fir_reg_nit_orDefault);
  // update_isMissing = missing.0(update)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_update;
  Rsh_Fir_reg_update_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args104);
  // if update_isMissing then L1(FALSE) else L1(update)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_update_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_update_orDefault = Rsh_const(CCP, 38);
    goto L1_;
  } else {
  // L1(update)
    Rsh_Fir_reg_update_orDefault = Rsh_Fir_reg_update;
    goto L1_;
  }

L1_:;
  // st update = update_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_update_orDefault, RHO);
  (void)(Rsh_Fir_reg_update_orDefault);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L2_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L3_:;
  // st z = r4
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r4_1, RHO);
  (void)(Rsh_Fir_reg_r4_1);
  // update3 = ld update
  Rsh_Fir_reg_update3_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

L4_:;
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

L5_:;
  // r15 = log(dx1, 2.718281828459045)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L4(r13, r15)
  // L4(r13, r15)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r15_;
  goto L4_;

L6_:;
  // r25 = `+`(r23, dx3)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_dx3_1;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // r26 = `*`(r22, r25)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_r25_1;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

L7_:;
  // list = ldf list in base
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r28 = dyn list(r26, dx5)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_dx5_1;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

L8_:;
  // goto L10()
  // L10()
  goto L10_;

L9_:;
  // l = ld z
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L41() else D12()
  // L41()
  goto L41_;

L10_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

L11_:;
  // C_KalmanLike = ld C_KalmanLike
  Rsh_Fir_reg_C_KalmanLike = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r = dyn base(<sym C_KalmanLike>, <sym y>, <sym mod>, <sym nit>, FALSE, <sym update>)
  SEXP Rsh_Fir_array_args111[6];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args111[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args111[3] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args111[4] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args111[5] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names16[6];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_array_arg_names16[5] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 6, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 1 [C_KalmanLike]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_C_KalmanLike;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L13_:;
  // C_KalmanLike1 = force? C_KalmanLike
  Rsh_Fir_reg_C_KalmanLike1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_KalmanLike);
  // checkMissing(C_KalmanLike1)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_C_KalmanLike1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 2 [C_KalmanLike1, y1]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_C_KalmanLike1_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L14_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // mod1 = ld mod
  Rsh_Fir_reg_mod1_1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

D2_:;
  // deopt 3 [C_KalmanLike1, y2, mod1]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_C_KalmanLike1_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_mod1_1;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L15_:;
  // mod2 = force? mod1
  Rsh_Fir_reg_mod2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mod1_1);
  // checkMissing(mod2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_mod2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // nit1 = ld nit
  Rsh_Fir_reg_nit1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

D3_:;
  // deopt 4 [C_KalmanLike1, y2, mod2, nit1]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_C_KalmanLike1_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_mod2_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_nit1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L16_:;
  // nit2 = force? nit1
  Rsh_Fir_reg_nit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nit1_);
  // checkMissing(nit2)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_nit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // update1 = ld update
  Rsh_Fir_reg_update1_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

D4_:;
  // deopt 6 [C_KalmanLike1, y2, mod2, nit2, FALSE, update1]
  SEXP Rsh_Fir_array_deopt_stack18[6];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_C_KalmanLike1_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_mod2_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_nit2_;
  Rsh_Fir_array_deopt_stack18[4] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack18[5] = Rsh_Fir_reg_update1_;
  Rsh_Fir_deopt(6, 6, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L17_:;
  // update2 = force? update1
  Rsh_Fir_reg_update2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update1_);
  // checkMissing(update2)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_update2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // vargs = dots[y2, mod2, nit2, FALSE, update2]
  SEXP Rsh_Fir_array_vector_values[5];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_mod2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_nit2_;
  Rsh_Fir_array_vector_values[3] = Rsh_const(CCP, 38);
  Rsh_Fir_array_vector_values[4] = Rsh_Fir_reg_update2_;
  SEXP Rsh_Fir_array_vector_names[5];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_KalmanLike1, vargs, <missing>)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_C_KalmanLike1_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args117[2] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L2_;

L18_:;
  // sym2 = ldf log
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base2 = ldf log in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L19_:;
  // r3 = dyn base1[Lik, s2](<lang `*`(0.5, `(`(`+`(log(`[`(x, 1)), `[`(x, 2))))>, <lang `[`(x, 1)>)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L3_;

L20_:;
  // x = ld x
  Rsh_Fir_reg_x1 = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

L21_:;
  // r7 = dyn base2(<lang `[`(x, 1)>)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L4(0.5, r7)
  // L4(0.5, r7)
  Rsh_Fir_reg_r8_1 = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r7_;
  goto L4_;

D5_:;
  // deopt 14 [0.5, x]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_x1;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L22_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x1)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if c then L23() else L24(0.5, x1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L23()
    goto L23_;
  } else {
  // L24(0.5, x1)
    Rsh_Fir_reg_r11_1 = Rsh_const(CCP, 52);
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_x1_;
    goto L24_;
  }

L23_:;
  // dr = tryDispatchBuiltin.1("[", x1)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args123);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // if dc then L25() else L24(0.5, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L25()
    goto L25_;
  } else {
  // L24(0.5, dr)
    Rsh_Fir_reg_r11_1 = Rsh_const(CCP, 52);
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_dr1;
    goto L24_;
  }

L24_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r14 = dyn __(x3, 1)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L5(r11, r14)
  // L5(r11, r14)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r14_1;
  goto L5_;

L25_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // goto L5(0.5, dx)
  // L5(0.5, dx)
  Rsh_Fir_reg_r13_1 = Rsh_const(CCP, 52);
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L5_;

D6_:;
  // deopt 19 [r8, r9, x4]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(19, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L26_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x5)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c1 then L27() else L28(r8, r9, x5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L27()
    goto L27_;
  } else {
  // L28(r8, r9, x5)
    Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r8_1;
    Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r9_1;
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x5_;
    goto L28_;
  }

L27_:;
  // dr2 = tryDispatchBuiltin.1("[", x5)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args129);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if dc1 then L29() else L28(r8, r9, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L29()
    goto L29_;
  } else {
  // L28(r8, r9, dr2)
    Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r8_1;
    Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r9_1;
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_dr2_1;
    goto L28_;
  }

L28_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r24 = dyn __1(x7, 2)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L6(r18, r19, r24)
  // L6(r18, r19, r24)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r18_1;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r24_1;
  goto L6_;

L29_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L6(r8, r9, dx2)
  // L6(r8, r9, dx2)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L6_;

D7_:;
  // deopt 27 [x8]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L30_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x9)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if c2 then L31() else L32(x9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L31()
    goto L31_;
  } else {
  // L32(x9)
    Rsh_Fir_reg_x11_ = Rsh_Fir_reg_x9_;
    goto L32_;
  }

L31_:;
  // dr4 = tryDispatchBuiltin.1("[", x9)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc2 then L33() else L32(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L33()
    goto L33_;
  } else {
  // L32(dr4)
    Rsh_Fir_reg_x11_ = Rsh_Fir_reg_dr4_1;
    goto L32_;
  }

L32_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r27 = dyn __2(x11, 1)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L7(r27)
  // L7(r27)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_r27_1;
  goto L7_;

L33_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L7(dx4)
  // L7(dx4)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_dx4_;
  goto L7_;

D8_:;
  // deopt 34 [r28]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r28_1;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L3(r28)
  // L3(r28)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r28_1;
  goto L3_;

D9_:;
  // deopt 36 [update3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_update3_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L35_:;
  // update4 = force? update3
  Rsh_Fir_reg_update4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update3_);
  // checkMissing(update4)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_update4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(update4)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_update4_;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c3 then L36() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L36()
    goto L36_;
  } else {
  // L8()
    goto L8_;
  }

L36_:;
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args141);
  // if guard3 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

L38_:;
  // r29 = dyn base3(<sym x>, "mod")
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args142[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 2, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L9(r29)
  // L9(r29)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r29_1;
  goto L9_;

D10_:;
  // deopt 40 [x12]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L39_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r31 = dyn attr(x13, "mod")
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L40() else D11()
  // L40()
  goto L40_;

D11_:;
  // deopt 44 [r31]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r31_1;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L9(r31)
  // L9(r31)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r31_1;
  goto L9_;

D12_:;
  // deopt 46 [r30, l, r30]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r30_1;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r30_1;
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L41_:;
  // r32 = dyn attr__(l, NULL, "mod", r30)
  SEXP Rsh_Fir_array_args145[4];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args145[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args145[3] = Rsh_Fir_reg_r30_1;
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_reg_r32_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L42() else D13()
  // L42()
  goto L42_;

D13_:;
  // deopt 49 [r30, r32]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r30_1;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r32_1;
  Rsh_Fir_deopt(49, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L42_:;
  // st z = r32
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r32_1, RHO);
  (void)(Rsh_Fir_reg_r32_1);
  // goto L10()
  // L10()
  goto L10_;

D14_:;
  // deopt 53 [z]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L44_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z1
  return Rsh_Fir_reg_z1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
