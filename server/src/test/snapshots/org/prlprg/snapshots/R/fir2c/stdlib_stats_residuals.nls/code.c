#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1315580161_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1315580161_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1315580161_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1315580161_10(SEXP CCP, SEXP RHO);
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
  // r = clos inner1315580161
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1315580161_, RHO, CCP);
  // st `residuals.nls` = r
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
SEXP Rsh_Fir_user_function_inner1315580161_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1315580161 dynamic dispatch ([object, type, `...`])

  return Rsh_Fir_user_version_inner1315580161_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1315580161_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1315580161 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1315580161/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_type_isMissing;  // type_isMissing
  SEXP Rsh_Fir_reg_type_orDefault;  // type_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_type3_;  // type3
  SEXP Rsh_Fir_reg_type4_;  // type4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_as_vector;  // as_vector
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_val1_;  // val1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_val2_;  // val2
  SEXP Rsh_Fir_reg_val3_;  // val3
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_coef;  // coef
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_val4_;  // val4
  SEXP Rsh_Fir_reg_val5_;  // val5
  SEXP Rsh_Fir_reg_std;  // std
  SEXP Rsh_Fir_reg_std1_;  // std1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_naresid;  // naresid
  SEXP Rsh_Fir_reg_object11_;  // object11
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_val6_;  // val6
  SEXP Rsh_Fir_reg_val7_;  // val7
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_as_vector1_;  // as_vector1
  SEXP Rsh_Fir_reg_object15_;  // object15
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_object19_;  // object19
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_object22_;  // object22
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_object23_;  // object23
  SEXP Rsh_Fir_reg_object24_;  // object24
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_object26_;  // object26
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_naresid1_;  // naresid1
  SEXP Rsh_Fir_reg_object27_;  // object27
  SEXP Rsh_Fir_reg_object28_;  // object28
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_object30_;  // object30
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_val8_;  // val8
  SEXP Rsh_Fir_reg_val9_;  // val9
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_object31_;  // object31
  SEXP Rsh_Fir_reg_object32_;  // object32
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_lab;  // lab
  SEXP Rsh_Fir_reg_lab1_;  // lab1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_aux;  // aux
  SEXP Rsh_Fir_reg_aux1_;  // aux1
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_lab2_;  // lab2
  SEXP Rsh_Fir_reg_lab3_;  // lab3
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_val10_;  // val10
  SEXP Rsh_Fir_reg_val11_;  // val11

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_type = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if type_isMissing then L0() else L1(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("response", "pearson");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("response", "pearson");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

L2_:;
  // as_vector1 = ldf `as.vector`
  Rsh_Fir_reg_as_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L55() else D19()
  // L55()
  goto L55_;

L3_:;
  // st std = r13
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // val4 = ld val
  Rsh_Fir_reg_val4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

L4_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L5_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L6_:;
  // r35 = `-`(r30, r31)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // r36 = `/`(r29, r35)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // r37 = sqrt(r36)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L3(r37)
  // L3(r37)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r37_;
  goto L3_;

L7_:;
  // r42 = `!`(r40)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c6 then L48() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L48()
    goto L48_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // l = ld val
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L52() else D17()
  // L52()
  goto L52_;

L10_:;
  // val10 = ld val
  Rsh_Fir_reg_val10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L85() else D31()
  // L85()
  goto L85_;

L11_:;
  // r70 = `!`(r68)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r70)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c14 then L64() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L64()
    goto L64_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // st lab = "Residuals"
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_const(CCP, 13), RHO);
  (void)(Rsh_const(CCP, 13));
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard7 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L14_:;
  // r84 = `!`(r77)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c18 then L78() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L78()
    goto L78_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // c16 = `is.object`(r79)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c16 then L75() else L76(r79)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L75()
    goto L75_;
  } else {
  // L76(r79)
    Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r79_;
    goto L76_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // lab2 = ld lab
  Rsh_Fir_reg_lab2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L82() else D28()
  // L82()
  goto L82_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p1 = prom<V +>{
  //   type1 = ld type;
  //   type2 = force? type1;
  //   checkMissing(type2);
  //   return type2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L19_:;
  // st type = r5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D2_:;
  // deopt 5 [type3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_type3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r6 = `==`(type4, "pearson")
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_type4_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L2()
    goto L2_;
  }

L21_:;
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L22() else D3()
  // L22()
  goto L22_;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p2 = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   c2 = `is.object`(object2);
  //   if c2 then L1() else L2(object2);
  // L0(dx1):
  //   c3 = `is.object`(dx1);
  //   if c3 then L5() else L6(dx1);
  // L1():
  //   dr = tryDispatchBuiltin.1("$", object2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(object4):
  //   r7 = `$`(object4, <sym m>);
  //   goto L0(r7);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L4(dx5):
  //   checkFun.0(dx5);
  //   dx6 = dx5 as cls;
  //   r9 = dyn dx6();
  //   return r9;
  // L5():
  //   dr2 = tryDispatchBuiltin.1("$", dx1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L7() else L6(dr2);
  // L6(dx3):
  //   r8 = `$`(dx3, <sym resid>);
  //   goto L4(r8);
  // L7():
  //   dx4 = getTryDispatchBuiltinValue(dr2);
  //   goto L4(dx4);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_2, CCP, RHO);
  // r11 = dyn as_vector(p2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

D4_:;
  // deopt 12 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // st val = r11
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym1 = ldf sqrt
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf sqrt in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // sym2 = ldf sum
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf sum in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard2 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L25_:;
  // r12 = dyn base1(<lang `/`(sum(`^`(val, 2.0)), `(`(`-`(length(val), length(coef(object)))))>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L3_;

L26_:;
  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L27_:;
  // r14 = dyn base2(<lang `^`(val, 2.0)>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r14)
  // L4(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L4_;

D5_:;
  // deopt 17 [val]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_val;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r16 = `^`(val1, 2.0)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_val1_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r17 = dyn sum(r16)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

D6_:;
  // deopt 22 [r17]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L4(r17)
  // L4(r17)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r17_;
  goto L4_;

L30_:;
  // val2 = ld val
  Rsh_Fir_reg_val2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

L31_:;
  // r20 = dyn base3(<sym val>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r15, r20)
  // L5(r15, r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
  goto L5_;

D7_:;
  // deopt 24 [r15, val2]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_val2_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // val3 = force? val2
  Rsh_Fir_reg_val3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val2_);
  // checkMissing(val3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_val3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r23 = dyn length(val3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_val3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

D8_:;
  // deopt 27 [r15, r23]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L5(r15, r23)
  // L5(r15, r23)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L5_;

L34_:;
  // coef = ldf coef
  Rsh_Fir_reg_coef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L35_:;
  // r28 = dyn base4(<lang coef(object)>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r21, r22, r28)
  // L6(r21, r22, r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r28_;
  goto L6_;

D9_:;
  // deopt 30 [r21, r22]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L36_:;
  // p3 = prom<V +>{
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   return object6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_3, CCP, RHO);
  // r33 = dyn coef(p3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coef, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

D10_:;
  // deopt 32 [r21, r22, r33]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L37_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r34 = dyn length1(r33)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

D11_:;
  // deopt 34 [r21, r22, r34]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L6(r21, r22, r34)
  // L6(r21, r22, r34)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r34_;
  goto L6_;

D12_:;
  // deopt 39 [val4]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_val4_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L39_:;
  // val5 = force? val4
  Rsh_Fir_reg_val5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val4_);
  // checkMissing(val5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_val5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // std = ld std
  Rsh_Fir_reg_std = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

D13_:;
  // deopt 40 [val5, std]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_val5_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_std;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L40_:;
  // std1 = force? std
  Rsh_Fir_reg_std1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_std);
  // checkMissing(std1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_std1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r38 = `/`(val5, std1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_val5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_std1_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // st val = r38
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard5 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L41_:;
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L43() else D14()
  // L43()
  goto L43_;

L42_:;
  // r39 = dyn base5(<lang `$`(object, na.action)>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r39)
  // L7(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L7_;

D14_:;
  // deopt 45 [object7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_object7_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L43_:;
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(object8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c4 then L45() else L46(object8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L45()
    goto L45_;
  } else {
  // L46(object8)
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_object8_;
    goto L46_;
  }

L44_:;
  // c5 = `==`(dx8, NULL)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L7(c5)
  // L7(c5)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_c5_;
  goto L7_;

L45_:;
  // dr4 = tryDispatchBuiltin.1("$", object8)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc2 then L47() else L46(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L47()
    goto L47_;
  } else {
  // L46(dr4)
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_dr4_;
    goto L46_;
  }

L46_:;
  // r41 = `$`(object10, <sym na.action>)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L44(r41)
  // L44(r41)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r41_;
  goto L44_;

L47_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L44(dx7)
  // L44(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L44_;

L48_:;
  // naresid = ldf naresid
  Rsh_Fir_reg_naresid = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

D15_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p4 = prom<V +>{
  //   object11 = ld object;
  //   object12 = force? object11;
  //   checkMissing(object12);
  //   c7 = `is.object`(object12);
  //   if c7 then L1() else L2(object12);
  // L0(dx10):
  //   return dx10;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", object12);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(object14):
  //   r43 = `$`(object14, <sym na.action>);
  //   goto L0(r43);
  // L3():
  //   dx9 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx9);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_4, CCP, RHO);
  // p5 = prom<V +>{
  //   val6 = ld val;
  //   val7 = force? val6;
  //   checkMissing(val7);
  //   return val7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_5, CCP, RHO);
  // r46 = dyn naresid(p4, p5)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_naresid, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

D16_:;
  // deopt 54 [r46]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L50_:;
  // st val = r46
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // goto L9()
  // L9()
  goto L9_;

D17_:;
  // deopt 61 ["Standardized residuals", l, "Standardized residuals"]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 30);
  Rsh_Fir_deopt(61, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L52_:;
  // r48 = dyn attr__(l, NULL, "label", "Standardized residuals")
  SEXP Rsh_Fir_array_args69[4];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args69[3] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L53() else D18()
  // L53()
  goto L53_;

D18_:;
  // deopt 64 ["Standardized residuals", r48]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L53_:;
  // st val = r48
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // goto L10()
  // L10()
  goto L10_;

D19_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p6 = prom<V +>{
  //   object15 = ld object;
  //   object16 = force? object15;
  //   checkMissing(object16);
  //   c8 = `is.object`(object16);
  //   if c8 then L1() else L2(object16);
  // L0(dx12):
  //   c9 = `is.object`(dx12);
  //   if c9 then L5() else L6(dx12);
  // L1():
  //   dr8 = tryDispatchBuiltin.1("$", object16);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(object18):
  //   r50 = `$`(object18, <sym m>);
  //   goto L0(r50);
  // L3():
  //   dx11 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx11);
  // L4(dx16):
  //   checkFun.0(dx16);
  //   dx17 = dx16 as cls;
  //   r52 = dyn dx17();
  //   object19 = ld object;
  //   object20 = force? object19;
  //   checkMissing(object20);
  //   c10 = `is.object`(object20);
  //   if c10 then L9() else L10(r52, object20);
  // L5():
  //   dr10 = tryDispatchBuiltin.1("$", dx12);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L7() else L6(dr10);
  // L6(dx14):
  //   r51 = `$`(dx14, <sym lhs>);
  //   goto L4(r51);
  // L7():
  //   dx15 = getTryDispatchBuiltinValue(dr10);
  //   goto L4(dx15);
  // L8(r56, dx19):
  //   c11 = `is.object`(dx19);
  //   if c11 then L13() else L14(r56, dx19);
  // L9():
  //   dr12 = tryDispatchBuiltin.1("$", object20);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L11() else L10(r52, dr12);
  // L10(r54, object22):
  //   r57 = `$`(object22, <sym m>);
  //   goto L8(r54, r57);
  // L11():
  //   dx18 = getTryDispatchBuiltinValue(dr12);
  //   goto L8(r52, dx18);
  // L12(r61, dx23):
  //   checkFun.0(dx23);
  //   dx24 = dx23 as cls;
  //   r63 = dyn dx24();
  //   r64 = `-`(r61, r63);
  //   return r64;
  // L13():
  //   dr14 = tryDispatchBuiltin.1("$", dx19);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L15() else L14(r56, dr14);
  // L14(r59, dx21):
  //   r62 = `$`(dx21, <sym fitted>);
  //   goto L12(r59, r62);
  // L15():
  //   dx22 = getTryDispatchBuiltinValue(dr14);
  //   goto L12(r56, dx22);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_6, CCP, RHO);
  // r66 = dyn as_vector1(p6)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector1_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L56() else D20()
  // L56()
  goto L56_;

D20_:;
  // deopt 69 [r66]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L56_:;
  // st val = r66
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args96);
  // if guard6 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // object23 = ld object
  Rsh_Fir_reg_object23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L59() else D21()
  // L59()
  goto L59_;

L58_:;
  // r67 = dyn base6(<lang `$`(object, na.action)>)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(r67)
  // L11(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L11_;

D21_:;
  // deopt 72 [object23]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_object23_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L59_:;
  // object24 = force? object23
  Rsh_Fir_reg_object24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object23_);
  // checkMissing(object24)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_object24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(object24)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_object24_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c12 then L61() else L62(object24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L61()
    goto L61_;
  } else {
  // L62(object24)
    Rsh_Fir_reg_object26_ = Rsh_Fir_reg_object24_;
    goto L62_;
  }

L60_:;
  // c13 = `==`(dx26, NULL)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L11(c13)
  // L11(c13)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_c13_;
  goto L11_;

L61_:;
  // dr16 = tryDispatchBuiltin.1("$", object24)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_object24_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args101);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if dc8 then L63() else L62(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L63()
    goto L63_;
  } else {
  // L62(dr16)
    Rsh_Fir_reg_object26_ = Rsh_Fir_reg_dr16_;
    goto L62_;
  }

L62_:;
  // r69 = `$`(object26, <sym na.action>)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_object26_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L60(r69)
  // L60(r69)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r69_;
  goto L60_;

L63_:;
  // dx25 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L60(dx25)
  // L60(dx25)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L60_;

L64_:;
  // naresid1 = ldf naresid
  Rsh_Fir_reg_naresid1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L65() else D22()
  // L65()
  goto L65_;

D22_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p7 = prom<V +>{
  //   object27 = ld object;
  //   object28 = force? object27;
  //   checkMissing(object28);
  //   c15 = `is.object`(object28);
  //   if c15 then L1() else L2(object28);
  // L0(dx28):
  //   return dx28;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("$", object28);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(object30):
  //   r71 = `$`(object30, <sym na.action>);
  //   goto L0(r71);
  // L3():
  //   dx27 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx27);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_7, CCP, RHO);
  // p8 = prom<V +>{
  //   val8 = ld val;
  //   val9 = force? val8;
  //   checkMissing(val9);
  //   return val9;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_8, CCP, RHO);
  // r74 = dyn naresid1(p7, p8)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_naresid1_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L66() else D23()
  // L66()
  goto L66_;

D23_:;
  // deopt 81 [r74]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L66_:;
  // st val = r74
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // goto L13()
  // L13()
  goto L13_;

L68_:;
  // sym8 = ldf attr
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base8 = ldf attr in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard8 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L69_:;
  // r76 = dyn base7(<lang `<-`(aux, `$`(attr(object, "units"), y))>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L14(r76)
  // L14(r76)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r76_;
  goto L14_;

L70_:;
  // object31 = ld object
  Rsh_Fir_reg_object31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L72() else D24()
  // L72()
  goto L72_;

L71_:;
  // r78 = dyn base8(<sym object>, "units")
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(r78)
  // L15(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L15_;

D24_:;
  // deopt 91 [object31]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_object31_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L72_:;
  // object32 = force? object31
  Rsh_Fir_reg_object32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object31_);
  // checkMissing(object32)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_object32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r80 = dyn attr(object32, "units")
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_object32_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L73() else D25()
  // L73()
  goto L73_;

D25_:;
  // deopt 95 [r80]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L15(r80)
  // L15(r80)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r80_;
  goto L15_;

L74_:;
  // st aux = dx30
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_dx30_, RHO);
  (void)(Rsh_Fir_reg_dx30_);
  // c17 = `==`(dx30, NULL)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L14(c17)
  // L14(c17)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_c17_;
  goto L14_;

L75_:;
  // dr20 = tryDispatchBuiltin.1("$", r79)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args119);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if dc10 then L77() else L76(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L77()
    goto L77_;
  } else {
  // L76(dr20)
    Rsh_Fir_reg_r82_ = Rsh_Fir_reg_dr20_;
    goto L76_;
  }

L76_:;
  // r83 = `$`(r82, <sym y>)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L74(r83)
  // L74(r83)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_r83_;
  goto L74_;

L77_:;
  // dx29 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L74(dx29)
  // L74(dx29)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx29_;
  goto L74_;

L78_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L79() else D26()
  // L79()
  goto L79_;

D26_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p9 = prom<V +>{
  //   lab = ld lab;
  //   lab1 = force? lab;
  //   checkMissing(lab1);
  //   return lab1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_9, CCP, RHO);
  // p10 = prom<V +>{
  //   aux = ld aux;
  //   aux1 = force? aux;
  //   checkMissing(aux1);
  //   return aux1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1315580161_10, CCP, RHO);
  // r87 = dyn paste(p9, p10)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L80() else D27()
  // L80()
  goto L80_;

D27_:;
  // deopt 104 [r87]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L80_:;
  // st lab = r87
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r87_, RHO);
  (void)(Rsh_Fir_reg_r87_);
  // goto L17()
  // L17()
  goto L17_;

D28_:;
  // deopt 108 [lab2]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_lab2_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L82_:;
  // lab3 = force? lab2
  Rsh_Fir_reg_lab3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lab2_);
  // checkMissing(lab3)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_lab3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // l1 = ld val
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L83() else D29()
  // L83()
  goto L83_;

D29_:;
  // deopt 111 [lab3, l1, lab3]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_lab3_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_lab3_;
  Rsh_Fir_deopt(111, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L83_:;
  // r89 = dyn attr__1(l1, NULL, "label", lab3)
  SEXP Rsh_Fir_array_args127[4];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args127[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args127[3] = Rsh_Fir_reg_lab3_;
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L84() else D30()
  // L84()
  goto L84_;

D30_:;
  // deopt 114 [lab3, r89]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_lab3_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L84_:;
  // st val = r89
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r89_, RHO);
  (void)(Rsh_Fir_reg_r89_);
  // goto L10()
  // L10()
  goto L10_;

D31_:;
  // deopt 116 [val10]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_val10_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L85_:;
  // val11 = force? val10
  Rsh_Fir_reg_val11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val10_);
  // checkMissing(val11)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_val11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return val11
  return Rsh_Fir_reg_val11_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
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
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn c("response", "pearson")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("response", "pearson")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_1(SEXP CCP, SEXP RHO) {
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return type2
  return Rsh_Fir_reg_type2_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_2(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(object2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L2_;
  }

L0_:;
  // c3 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c3 then L5() else L6(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L6_;
  }

L1_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r7 = `$`(object4, <sym m>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L4_:;
  // checkFun.0(dx5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx5_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args29));
  // dx6 = dx5 as cls
  Rsh_Fir_reg_dx6_ = Rsh_Fir_cast(Rsh_Fir_reg_dx5_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r9 = dyn dx6()
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx6_, 0, NULL, NULL, CCP, RHO);
  // return r9
  return Rsh_Fir_reg_r9_;

L5_:;
  // dr2 = tryDispatchBuiltin.1("$", dx1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc1 then L7() else L6(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L6_;
  }

L6_:;
  // r8 = `$`(dx3, <sym resid>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r8_;
  goto L4_;

L7_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L4(dx4)
  // L4(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_3(SEXP CCP, SEXP RHO) {
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return object6
  return Rsh_Fir_reg_object6_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_4(SEXP CCP, SEXP RHO) {
  // object11 = ld object
  Rsh_Fir_reg_object11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object12 = force? object11
  Rsh_Fir_reg_object12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object11_);
  // checkMissing(object12)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_object12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(object12)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c7 then L1() else L2(object12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object12)
    Rsh_Fir_reg_object14_ = Rsh_Fir_reg_object12_;
    goto L2_;
  }

L0_:;
  // return dx10
  return Rsh_Fir_reg_dx10_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", object12)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_object12_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_object14_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r43 = `$`(object14, <sym na.action>)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r43_;
  goto L0_;

L3_:;
  // dx9 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L0(dx9)
  // L0(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_5(SEXP CCP, SEXP RHO) {
  // val6 = ld val
  Rsh_Fir_reg_val6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // val7 = force? val6
  Rsh_Fir_reg_val7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val6_);
  // checkMissing(val7)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_val7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return val7
  return Rsh_Fir_reg_val7_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_6(SEXP CCP, SEXP RHO) {
  // object15 = ld object
  Rsh_Fir_reg_object15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object16 = force? object15
  Rsh_Fir_reg_object16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object15_);
  // checkMissing(object16)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_object16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(object16)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(object16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object16)
    Rsh_Fir_reg_object18_ = Rsh_Fir_reg_object16_;
    goto L2_;
  }

L0_:;
  // c9 = `is.object`(dx12)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c9 then L5() else L6(dx12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx12)
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx12_;
    goto L6_;
  }

L1_:;
  // dr8 = tryDispatchBuiltin.1("$", object16)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_object16_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_object18_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // r50 = `$`(object18, <sym m>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r50_;
  goto L0_;

L3_:;
  // dx11 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L0(dx11)
  // L0(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L0_;

L4_:;
  // checkFun.0(dx16)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dx16_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args77));
  // dx17 = dx16 as cls
  Rsh_Fir_reg_dx17_ = Rsh_Fir_cast(Rsh_Fir_reg_dx16_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r52 = dyn dx17()
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx17_, 0, NULL, NULL, CCP, RHO);
  // object19 = ld object
  Rsh_Fir_reg_object19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object20 = force? object19
  Rsh_Fir_reg_object20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object19_);
  // checkMissing(object20)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_object20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(object20)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c10 then L9() else L10(r52, object20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L9()
    goto L9_;
  } else {
  // L10(r52, object20)
    Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r52_;
    Rsh_Fir_reg_object22_ = Rsh_Fir_reg_object20_;
    goto L10_;
  }

L5_:;
  // dr10 = tryDispatchBuiltin.1("$", dx12)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc5 then L7() else L6(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr10)
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dr10_;
    goto L6_;
  }

L6_:;
  // r51 = `$`(dx14, <sym lhs>)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L4(r51)
  // L4(r51)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r51_;
  goto L4_;

L7_:;
  // dx15 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L4(dx15)
  // L4(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L4_;

L8_:;
  // c11 = `is.object`(dx19)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c11 then L13() else L14(r56, dx19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L13()
    goto L13_;
  } else {
  // L14(r56, dx19)
    Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r56_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    goto L14_;
  }

L9_:;
  // dr12 = tryDispatchBuiltin.1("$", object20)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_object20_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc6 then L11() else L10(r52, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L11()
    goto L11_;
  } else {
  // L10(r52, dr12)
    Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r52_;
    Rsh_Fir_reg_object22_ = Rsh_Fir_reg_dr12_;
    goto L10_;
  }

L10_:;
  // r57 = `$`(object22, <sym m>)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_object22_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L8(r54, r57)
  // L8(r54, r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r57_;
  goto L8_;

L11_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L8(r52, dx18)
  // L8(r52, dx18)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L8_;

L12_:;
  // checkFun.0(dx23)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dx23_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args89));
  // dx24 = dx23 as cls
  Rsh_Fir_reg_dx24_ = Rsh_Fir_cast(Rsh_Fir_reg_dx23_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r63 = dyn dx24()
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx24_, 0, NULL, NULL, CCP, RHO);
  // r64 = `-`(r61, r63)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // return r64
  return Rsh_Fir_reg_r64_;

L13_:;
  // dr14 = tryDispatchBuiltin.1("$", dx19)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args91);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if dc7 then L15() else L14(r56, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L15()
    goto L15_;
  } else {
  // L14(r56, dr14)
    Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r56_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dr14_;
    goto L14_;
  }

L14_:;
  // r62 = `$`(dx21, <sym fitted>)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L12(r59, r62)
  // L12(r59, r62)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r62_;
  goto L12_;

L15_:;
  // dx22 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L12(r56, dx22)
  // L12(r56, dx22)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_7(SEXP CCP, SEXP RHO) {
  // object27 = ld object
  Rsh_Fir_reg_object27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object28 = force? object27
  Rsh_Fir_reg_object28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object27_);
  // checkMissing(object28)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_object28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(object28)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_object28_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c15 then L1() else L2(object28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object28)
    Rsh_Fir_reg_object30_ = Rsh_Fir_reg_object28_;
    goto L2_;
  }

L0_:;
  // return dx28
  return Rsh_Fir_reg_dx28_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("$", object28)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_object28_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_object30_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // r71 = `$`(object30, <sym na.action>)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_object30_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L0(r71)
  // L0(r71)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r71_;
  goto L0_;

L3_:;
  // dx27 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L0(dx27)
  // L0(dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_8(SEXP CCP, SEXP RHO) {
  // val8 = ld val
  Rsh_Fir_reg_val8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // val9 = force? val8
  Rsh_Fir_reg_val9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val8_);
  // checkMissing(val9)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_val9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // return val9
  return Rsh_Fir_reg_val9_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_9(SEXP CCP, SEXP RHO) {
  // lab = ld lab
  Rsh_Fir_reg_lab = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // lab1 = force? lab
  Rsh_Fir_reg_lab1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lab);
  // checkMissing(lab1)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_lab1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // return lab1
  return Rsh_Fir_reg_lab1_;
}
SEXP Rsh_Fir_user_promise_inner1315580161_10(SEXP CCP, SEXP RHO) {
  // aux = ld aux
  Rsh_Fir_reg_aux = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // aux1 = force? aux
  Rsh_Fir_reg_aux1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aux);
  // checkMissing(aux1)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_aux1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // return aux1
  return Rsh_Fir_reg_aux1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
