#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3280860523_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3280860523_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3280860523_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3280860523_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3280860523_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3280860523
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3280860523_, RHO, CCP);
  // st `logLik.nls` = r
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
SEXP Rsh_Fir_user_function_inner3280860523_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3280860523 dynamic dispatch ([object, REML, `...`])

  return Rsh_Fir_user_version_inner3280860523_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3280860523_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3280860523 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3280860523/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_REML;  // REML
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_REML_isMissing;  // REML_isMissing
  SEXP Rsh_Fir_reg_REML_orDefault;  // REML_orDefault
  SEXP Rsh_Fir_reg_REML1_;  // REML1
  SEXP Rsh_Fir_reg_REML2_;  // REML2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_N;  // N
  SEXP Rsh_Fir_reg_N1_;  // N1
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_w;  // w
  SEXP Rsh_Fir_reg_w1_;  // w1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_zw;  // zw
  SEXP Rsh_Fir_reg_zw1_;  // zw1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_N2_;  // N2
  SEXP Rsh_Fir_reg_N3_;  // N3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_N4_;  // N4
  SEXP Rsh_Fir_reg_N5_;  // N5
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_w2_;  // w2
  SEXP Rsh_Fir_reg_w3_;  // w3
  SEXP Rsh_Fir_reg_zw2_;  // zw2
  SEXP Rsh_Fir_reg_zw3_;  // zw3
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sum1_;  // sum1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_N6_;  // N6
  SEXP Rsh_Fir_reg_N7_;  // N7
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_res2_;  // res2
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_sum2_;  // sum2
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_coef;  // coef
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_N8_;  // N8
  SEXP Rsh_Fir_reg_N9_;  // N9
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_attr__2_;  // attr__2
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_val1_;  // val1

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_REML = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // REML_isMissing = missing.0(REML)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_REML;
  Rsh_Fir_reg_REML_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if REML_isMissing then L0(FALSE) else L0(REML)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_REML_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_REML_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(REML)
    Rsh_Fir_reg_REML_orDefault = Rsh_Fir_reg_REML;
    goto L0_;
  }

L0_:;
  // st REML = REML_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_REML_orDefault, RHO);
  (void)(Rsh_Fir_reg_REML_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // REML1 = ld REML
  Rsh_Fir_reg_REML1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

L3_:;
  // st N = r6
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // ____ = ldf `%||%`
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L4_:;
  // st N = r17
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // N2 = ld N
  Rsh_Fir_reg_N2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L38() else D12()
  // L38()
  goto L38_;

L5_:;
  // r27 = `+`(r25, 1.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // sym4 = ldf log
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf log in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard4 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L6_:;
  // r37 = `-`(r34, r35)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // sym5 = ldf sum
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base5 = ldf sum in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard5 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L7_:;
  // N6 = ld N
  Rsh_Fir_reg_N6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L51() else D17()
  // L51()
  goto L51_;

L8_:;
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r56 = dyn sum1(r53)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

L9_:;
  // r78 = `+`(r65, r66)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // r79 = `*`(r64, r78)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // r80 = `/`(r79, 2.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st val = r80
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard9 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L10_:;
  // r77 = log(r74, 2.718281828459045)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L9(r72, r73, r77)
  // L9(r72, r73, r77)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r77_;
  goto L9_;

L11_:;
  // r89 = `+`(r84, r85)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // l = ld val
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L63() else D23()
  // L63()
  goto L63_;

D0_:;
  // deopt 0 [REML1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_REML1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // REML2 = force? REML1
  Rsh_Fir_reg_REML2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_REML1_);
  // checkMissing(REML2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_REML2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(REML2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_REML2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L13() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L1()
    goto L1_;
  }

L13_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r = dyn stop("cannot calculate REML log-likelihood for \"nls\" objects")
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

D2_:;
  // deopt 5 [r]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L2()
  // L2()
  goto L2_;

D3_:;
  // deopt 8 [object1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L20(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L20(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L20_;
  }

L18_:;
  // c2 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c2 then L23() else L24(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L23()
    goto L23_;
  } else {
  // L24(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L24_;
  }

L19_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // r2 = `$`(object4, <sym m>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L18(r2)
  // L18(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L18_;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L18(dx)
  // L18(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L18_;

L22_:;
  // checkFun.0(dx5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx5_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args22));
  // dx6 = dx5 as cls
  Rsh_Fir_reg_dx6_ = Rsh_Fir_cast(Rsh_Fir_reg_dx5_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r4 = dyn dx6()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx6_, 0, NULL, NULL, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

L23_:;
  // dr2 = tryDispatchBuiltin.1("$", dx1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc1 then L25() else L24(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L25()
    goto L25_;
  } else {
  // L24(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L24_;
  }

L24_:;
  // r3 = `$`(dx3, <sym resid>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L22(r3)
  // L22(r3)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r3_;
  goto L22_;

L25_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L22(dx4)
  // L22(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L22_;

D4_:;
  // deopt 13 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L26_:;
  // st res = r4
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

L28_:;
  // r5 = dyn base(<sym res>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D5_:;
  // deopt 17 [res]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L29_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r7 = dyn length(res1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_res1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

D6_:;
  // deopt 20 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

D7_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p = prom<V +>{
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   c3 = `is.object`(object6);
  //   if c3 then L1() else L2(object6);
  // L0(dx8):
  //   return dx8;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", object6);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(object8):
  //   r8 = `$`(object8, <sym weights>);
  //   goto L0(r8);
  // L3():
  //   dx7 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx7);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3280860523_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf rep_len;
  //   base1 = ldf rep_len in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   N = ld N;
  //   N1 = force? N;
  //   checkMissing(N1);
  //   rep_len = ldf rep_len in base;
  //   r12 = dyn rep_len(1.0, N1);
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base1(1.0, <sym N>);
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3280860523_1, CCP, RHO);
  // r14 = dyn ____(p, p1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 26 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // st w = r14
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // w = ld w
  Rsh_Fir_reg_w = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

D9_:;
  // deopt 28 [w]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_w;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L33_:;
  // w1 = force? w
  Rsh_Fir_reg_w1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w);
  // checkMissing(w1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_w1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r15 = `==`(w1, 0.0)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_w1_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // st zw = r15
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym2 = ldf sum
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf sum in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // zw = ld zw
  Rsh_Fir_reg_zw = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

L35_:;
  // r16 = dyn base2(<lang `!`(zw)>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L4_;

D10_:;
  // deopt 35 [zw]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_zw;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // zw1 = force? zw
  Rsh_Fir_reg_zw1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zw);
  // checkMissing(zw1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_zw1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // r18 = `!`(zw1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_zw1_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r19 = dyn sum(r18)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

D11_:;
  // deopt 39 [r19]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L4(r19)
  // L4(r19)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r19_;
  goto L4_;

D12_:;
  // deopt 41 [N2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_N2_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // N3 = force? N2
  Rsh_Fir_reg_N3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N2_);
  // checkMissing(N3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_N3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // r20 = `-`(<missing>, N3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_N3_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // sym3 = ldf log
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf log in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard3 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // r26 = log(6.283185307179586, 2.718281828459045)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L5(r20, r26)
  // L5(r20, r26)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L5_;

L40_:;
  // r23 = dyn base3(<lang `*`(2.0, pi)>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r20, r23)
  // L5(r20, r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
  goto L5_;

L41_:;
  // N4 = ld N
  Rsh_Fir_reg_N4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L43() else D13()
  // L43()
  goto L43_;

L42_:;
  // r32 = dyn base4(<sym N>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r24, r27, r32)
  // L6(r24, r27, r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r32_;
  goto L6_;

D13_:;
  // deopt 49 [r24, r27, N4]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_N4_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L43_:;
  // N5 = force? N4
  Rsh_Fir_reg_N5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N4_);
  // checkMissing(N5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_N5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // r36 = log(N5, 2.718281828459045)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_N5_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L6(r24, r27, r36)
  // L6(r24, r27, r36)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L6_;

L44_:;
  // sym6 = ldf log
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base6 = ldf log in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard6 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L45_:;
  // r42 = dyn base5(<lang log(`+`(w, zw))>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(r33, r37, r42)
  // L7(r33, r37, r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r42_;
  goto L7_;

L46_:;
  // w2 = ld w
  Rsh_Fir_reg_w2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L48() else D14()
  // L48()
  goto L48_;

L47_:;
  // r50 = dyn base6(<lang `+`(w, zw)>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r33, r37, r50)
  // L8(r33, r37, r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r50_;
  goto L8_;

D14_:;
  // deopt 55 [r33, r37, w2]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_w2_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L48_:;
  // w3 = force? w2
  Rsh_Fir_reg_w3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w2_);
  // checkMissing(w3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_w3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // zw2 = ld zw
  Rsh_Fir_reg_zw2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

D15_:;
  // deopt 56 [r33, r37, w3, zw2]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_w3_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_zw2_;
  Rsh_Fir_deopt(56, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L49_:;
  // zw3 = force? zw2
  Rsh_Fir_reg_zw3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zw2_);
  // checkMissing(zw3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_zw3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r54 = `+`(w3, zw3)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_w3_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_zw3_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // r55 = log(r54, 2.718281828459045)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L8(r33, r37, r55)
  // L8(r33, r37, r55)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r55_;
  goto L8_;

D16_:;
  // deopt 61 [r51, r52, r56]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(61, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L7(r51, r52, r56)
  // L7(r51, r52, r56)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r56_;
  goto L7_;

D17_:;
  // deopt 61 [r43, r44, r45, N6]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_N6_;
  Rsh_Fir_deopt(61, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L51_:;
  // N7 = force? N6
  Rsh_Fir_reg_N7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N6_);
  // checkMissing(N7)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_N7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r57 = `/`(r45, N7)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_N7_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // r58 = `-`(r44, r57)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // sym7 = ldf log
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base7 = ldf log in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard7 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L52_:;
  // sym8 = ldf sum
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base8 = ldf sum in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard8 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L53_:;
  // r63 = dyn base7(<lang sum(`^`(res, 2.0))>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(r43, r58, r63)
  // L9(r43, r58, r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r63_;
  goto L9_;

L54_:;
  // res2 = ld res
  Rsh_Fir_reg_res2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L56() else D18()
  // L56()
  goto L56_;

L55_:;
  // r71 = dyn base8(<lang `^`(res, 2.0)>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(r43, r58, r71)
  // L10(r43, r58, r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r71_;
  goto L10_;

D18_:;
  // deopt 67 [r43, r58, res2]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_res2_;
  Rsh_Fir_deopt(67, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L56_:;
  // res3 = force? res2
  Rsh_Fir_reg_res3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res2_);
  // checkMissing(res3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_res3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // r75 = `^`(res3, 2.0)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r76 = dyn sum2(r75)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L57() else D19()
  // L57()
  goto L57_;

D19_:;
  // deopt 72 [r43, r58, r76]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(72, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L10(r43, r58, r76)
  // L10(r43, r58, r76)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r76_;
  goto L10_;

L58_:;
  // coef = ldf coef
  Rsh_Fir_reg_coef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L60() else D20()
  // L60()
  goto L60_;

L59_:;
  // r83 = dyn base9(<lang coef(object)>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(1, r83)
  // L11(1, r83)
  Rsh_Fir_reg_r84_ = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r83_;
  goto L11_;

D20_:;
  // deopt 83 [1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 36);
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L60_:;
  // p2 = prom<V +>{
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   return object10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3280860523_2, CCP, RHO);
  // r87 = dyn coef(p2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coef, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L61() else D21()
  // L61()
  goto L61_;

D21_:;
  // deopt 85 [1, r87]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L61_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r88 = dyn length1(r87)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L62() else D22()
  // L62()
  goto L62_;

D22_:;
  // deopt 87 [1, r88]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L11(1, r88)
  // L11(1, r88)
  Rsh_Fir_reg_r84_ = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r88_;
  goto L11_;

D23_:;
  // deopt 90 [r89, l, r89]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(90, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L63_:;
  // r90 = dyn attr__(l, NULL, "df", r89)
  SEXP Rsh_Fir_array_args78[4];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args78[2] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args78[3] = Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L64() else D24()
  // L64()
  goto L64_;

D24_:;
  // deopt 93 [r89, r90]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L64_:;
  // st val = r90
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // N8 = ld N
  Rsh_Fir_reg_N8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L65() else D25()
  // L65()
  goto L65_;

D25_:;
  // deopt 95 [N8]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_N8_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L65_:;
  // N9 = force? N8
  Rsh_Fir_reg_N9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N8_);
  // checkMissing(N9)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_N9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // l1 = ld val
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L66() else D26()
  // L66()
  goto L66_;

D26_:;
  // deopt 98 [N9, l1, N9]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_N9_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_N9_;
  Rsh_Fir_deopt(98, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L66_:;
  // r91 = dyn attr__1(l1, NULL, "nall", N9)
  SEXP Rsh_Fir_array_args80[4];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args80[3] = Rsh_Fir_reg_N9_;
  SEXP Rsh_Fir_array_arg_names20[4];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L67() else D27()
  // L67()
  goto L67_;

D27_:;
  // deopt 101 [N9, r91]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_N9_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L67_:;
  // st val = r91
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r91_, RHO);
  (void)(Rsh_Fir_reg_r91_);
  // l2 = ld val
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // attr__2 = ldf `attr<-`
  Rsh_Fir_reg_attr__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L68() else D28()
  // L68()
  goto L68_;

D28_:;
  // deopt 104 [N9, l2, N9]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_N9_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_N9_;
  Rsh_Fir_deopt(104, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L68_:;
  // r92 = dyn attr__2(l2, NULL, "nobs", N9)
  SEXP Rsh_Fir_array_args81[4];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args81[2] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args81[3] = Rsh_Fir_reg_N9_;
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__2_, 4, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L69() else D29()
  // L69()
  goto L69_;

D29_:;
  // deopt 107 [N9, r92]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_N9_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(107, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L69_:;
  // st val = r92
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r92_, RHO);
  (void)(Rsh_Fir_reg_r92_);
  // l3 = ld val
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L70() else D30()
  // L70()
  goto L70_;

D30_:;
  // deopt 112 ["logLik", l3, "logLik"]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_const(CCP, 42);
  Rsh_Fir_deopt(112, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L70_:;
  // r93 = dyn class__(l3, NULL, "logLik")
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L71() else D31()
  // L71()
  goto L71_;

D31_:;
  // deopt 114 ["logLik", r93]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L71_:;
  // st val = r93
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r93_, RHO);
  (void)(Rsh_Fir_reg_r93_);
  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L72() else D32()
  // L72()
  goto L72_;

D32_:;
  // deopt 116 [val]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_val;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L72_:;
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return val1
  return Rsh_Fir_reg_val1_;
}
SEXP Rsh_Fir_user_promise_inner3280860523_(SEXP CCP, SEXP RHO) {
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L2_;
  }

L0_:;
  // return dx8
  return Rsh_Fir_reg_dx8_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_object6_;
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
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r8 = `$`(object8, <sym weights>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r8_;
  goto L0_;

L3_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L0(dx7)
  // L0(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3280860523_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf rep_len
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base1 = ldf rep_len in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r11
  return Rsh_Fir_reg_r11_;

L1_:;
  // N = ld N
  Rsh_Fir_reg_N = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // N1 = force? N
  Rsh_Fir_reg_N1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N);
  // checkMissing(N1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_N1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r12 = dyn rep_len(1.0, N1)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_N1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // r10 = dyn base1(1.0, <sym N>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3280860523_2(SEXP CCP, SEXP RHO) {
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return object10
  return Rsh_Fir_reg_object10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
