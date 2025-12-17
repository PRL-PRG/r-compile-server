#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3280860523_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3280860523_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3280860523_(SEXP CCP, SEXP RHO);
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
  // st `logLik.lm` = r
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
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_object11_;  // object11
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_N;  // N
  SEXP Rsh_Fir_reg_N1_;  // N1
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_w;  // w
  SEXP Rsh_Fir_reg_w1_;  // w1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_excl;  // excl
  SEXP Rsh_Fir_reg_excl1_;  // excl1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_res2_;  // res2
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_res5_;  // res5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_excl2_;  // excl2
  SEXP Rsh_Fir_reg_excl3_;  // excl3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_res6_;  // res6
  SEXP Rsh_Fir_reg_res7_;  // res7
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_w2_;  // w2
  SEXP Rsh_Fir_reg_w3_;  // w3
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_w5_;  // w5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_excl4_;  // excl4
  SEXP Rsh_Fir_reg_excl5_;  // excl5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_N2_;  // N2
  SEXP Rsh_Fir_reg_N3_;  // N3
  SEXP Rsh_Fir_reg_REML1_;  // REML1
  SEXP Rsh_Fir_reg_REML2_;  // REML2
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_N4_;  // N4
  SEXP Rsh_Fir_reg_N5_;  // N5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_w6_;  // w6
  SEXP Rsh_Fir_reg_w7_;  // w7
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_N6_;  // N6
  SEXP Rsh_Fir_reg_N7_;  // N7
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_N10_;  // N10
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_N13_;  // N13
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_N14_;  // N14
  SEXP Rsh_Fir_reg_N15_;  // N15
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_N18_;  // N18
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_N21_;  // N21
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_w8_;  // w8
  SEXP Rsh_Fir_reg_w9_;  // w9
  SEXP Rsh_Fir_reg_res8_;  // res8
  SEXP Rsh_Fir_reg_res9_;  // res9
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_sum1_;  // sum1
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_REML3_;  // REML3
  SEXP Rsh_Fir_reg_REML4_;  // REML4
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_val1_;  // val1
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_val4_;  // val4
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_val7_;  // val7
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_val10_;  // val10
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_diag;  // diag
  SEXP Rsh_Fir_reg_object15_;  // object15
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_val12_;  // val12
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_val14_;  // val14
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_sum2_;  // sum2
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_N22_;  // N22
  SEXP Rsh_Fir_reg_N23_;  // N23
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_N24_;  // N24
  SEXP Rsh_Fir_reg_N25_;  // N25
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_attr__2_;  // attr__2
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_val15_;  // val15
  SEXP Rsh_Fir_reg_val16_;  // val16

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
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L32() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L32()
    goto L32_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

L4_:;
  // st N = r8
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L5_:;
  // c5 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c5 then L57() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L57()
    goto L57_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // w = ld w
  Rsh_Fir_reg_w = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L63() else D11()
  // L63()
  goto L63_;

L7_:;
  // st w = r14
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // N2 = ld N
  Rsh_Fir_reg_N2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L84() else D20()
  // L84()
  goto L84_;

L9_:;
  // c6 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c6 then L68() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L68()
    goto L68_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L8()
  // L8()
  goto L8_;

L11_:;
  // st res = dx7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard5 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L12_:;
  // st N = r24
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // w2 = ld w
  Rsh_Fir_reg_w2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L78() else D18()
  // L78()
  goto L78_;

L13_:;
  // st w = dx9
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L8()
  // L8()
  goto L8_;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym6 = ldf sum
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf sum in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard6 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L16_:;
  // N6 = ld N
  Rsh_Fir_reg_N6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L96() else D26()
  // L96()
  goto L96_;

L17_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r41 = dyn sum(r39)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L95() else D25()
  // L95()
  goto L95_;

L18_:;
  // r51 = `+`(r49, 1.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // sym9 = ldf log
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base9 = ldf log in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard9 then L99() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L99()
    goto L99_;
  } else {
  // L100()
    goto L100_;
  }

L19_:;
  // r64 = `-`(r61, r62)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // sym10 = ldf log
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base10 = ldf log in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard10 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L20_:;
  // r91 = `+`(r74, r75)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // r92 = `*`(N18, r91)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_N18_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // r93 = `-`(r73, r92)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // r94 = `*`(r72, r93)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st val = r94
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r94_, RHO);
  (void)(Rsh_Fir_reg_r94_);
  // REML3 = ld REML
  Rsh_Fir_reg_REML3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L109() else D31()
  // L109()
  goto L109_;

L21_:;
  // r90 = log(r86, 2.718281828459045)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L20(r83, r84, N21, r85, r90)
  // L20(r83, r84, N21, r85, r90)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_N18_ = Rsh_Fir_reg_N21_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r90_;
  goto L20_;

L22_:;
  // goto L27()
  // L27()
  goto L27_;

L23_:;
  // r112 = `-`(val4, r96)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_val4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // st val = r112
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r112_, RHO);
  (void)(Rsh_Fir_reg_r112_);
  // goto L27()
  // L27()
  goto L27_;

L24_:;
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r111 = dyn sum2(r98)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L125() else D37()
  // L125()
  goto L125_;

L25_:;
  // r110 = log(r100, 2.718281828459045)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L24(val10, r110)
  // L24(val10, r110)
  Rsh_Fir_reg_val7_ = Rsh_Fir_reg_val10_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r110_;
  goto L24_;

L26_:;
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r109 = dyn abs(dx17)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L124() else D36()
  // L124()
  goto L124_;

L27_:;
  // N22 = ld N0
  Rsh_Fir_reg_N22_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L127() else D38()
  // L127()
  goto L127_;

L28_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L29_:;
  // r = dyn base(<sym object>, "mlm")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L30_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn inherits(object2, "mlm", FALSE)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L32_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r3 = dyn stop("'logLik.lm' does not support multiple responses")
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

D3_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L3()
  // L3()
  goto L3_;

D4_:;
  // deopt 14 [object3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L36_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c1 then L38() else L39(object4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L38()
    goto L38_;
  } else {
  // L39(object4)
    Rsh_Fir_reg_object6_ = Rsh_Fir_reg_object4_;
    goto L39_;
  }

L37_:;
  // st res = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D5()
  // L41()
  goto L41_;

L38_:;
  // dr = tryDispatchBuiltin.1("$", object4)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_object4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc then L40() else L39(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L40()
    goto L40_;
  } else {
  // L39(dr)
    Rsh_Fir_reg_object6_ = Rsh_Fir_reg_dr;
    goto L39_;
  }

L39_:;
  // r5 = `$`(object6, <sym residuals>)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L37(r5)
  // L37(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L37_;

L40_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L37(dx)
  // L37(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L37_;

D5_:;
  // deopt 18 [object7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_object7_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L41_:;
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(object8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c2 then L43() else L44(object8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L43()
    goto L43_;
  } else {
  // L44(object8)
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_object8_;
    goto L44_;
  }

L42_:;
  // st p = dx3
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard1 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L43_:;
  // dr2 = tryDispatchBuiltin.1("$", object8)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc1 then L45() else L44(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L45()
    goto L45_;
  } else {
  // L44(dr2)
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_dr2_;
    goto L44_;
  }

L44_:;
  // r6 = `$`(object10, <sym rank>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L42(r6)
  // L42(r6)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r6_;
  goto L42_;

L45_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L42(dx2)
  // L42(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L42_;

L46_:;
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L48() else D6()
  // L48()
  goto L48_;

L47_:;
  // r7 = dyn base1(<sym res>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D6_:;
  // deopt 24 [res]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L48_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r9 = dyn length(res1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_res1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L49() else D7()
  // L49()
  goto L49_;

D7_:;
  // deopt 27 [r9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L4_;

L50_:;
  // object11 = ld object
  Rsh_Fir_reg_object11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D8()
  // L52()
  goto L52_;

L51_:;
  // r10 = dyn base2(<lang `<-`(w, `$`(object, weights))>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L5_;

D8_:;
  // deopt 30 [object11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_object11_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L52_:;
  // object12 = force? object11
  Rsh_Fir_reg_object12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object11_);
  // checkMissing(object12)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_object12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object12)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c3 then L54() else L55(object12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L54()
    goto L54_;
  } else {
  // L55(object12)
    Rsh_Fir_reg_object14_ = Rsh_Fir_reg_object12_;
    goto L55_;
  }

L53_:;
  // st w = dx5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // c4 = `==`(dx5, NULL)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L5(c4)
  // L5(c4)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_c4_;
  goto L5_;

L54_:;
  // dr4 = tryDispatchBuiltin.1("$", object12)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_object12_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc2 then L56() else L55(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L56()
    goto L56_;
  } else {
  // L55(dr4)
    Rsh_Fir_reg_object14_ = Rsh_Fir_reg_dr4_;
    goto L55_;
  }

L55_:;
  // r12 = `$`(object14, <sym weights>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L53(r12)
  // L53(r12)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r12_;
  goto L53_;

L56_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L53(dx4)
  // L53(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L53_;

L57_:;
  // sym3 = ldf `rep.int`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf `rep.int` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard3 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // N = ld N
  Rsh_Fir_reg_N = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L60() else D9()
  // L60()
  goto L60_;

L59_:;
  // r13 = dyn base3(1.0, <sym N>)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D9_:;
  // deopt 38 [N]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_N;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L60_:;
  // N1 = force? N
  Rsh_Fir_reg_N1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N);
  // checkMissing(N1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_N1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r15 = dyn rep_int(1.0, N1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_N1_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L61() else D10()
  // L61()
  goto L61_;

D10_:;
  // deopt 41 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

D11_:;
  // deopt 43 [w]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_w;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L63_:;
  // w1 = force? w
  Rsh_Fir_reg_w1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w);
  // checkMissing(w1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_w1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r17 = `==`(w1, 0.0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_w1_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // st excl = r17
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard4 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L64_:;
  // excl = ld excl
  Rsh_Fir_reg_excl = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L66() else D12()
  // L66()
  goto L66_;

L65_:;
  // r18 = dyn base4(<sym excl>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D12_:;
  // deopt 50 [excl]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_excl;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L66_:;
  // excl1 = force? excl
  Rsh_Fir_reg_excl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_excl);
  // checkMissing(excl1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_excl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r20 = dyn any(excl1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_excl1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L67() else D13()
  // L67()
  goto L67_;

D13_:;
  // deopt 53 [r20]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L9(r20)
  // L9(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L9_;

L68_:;
  // res2 = ld res
  Rsh_Fir_reg_res2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L69() else D14()
  // L69()
  goto L69_;

D14_:;
  // deopt 54 [res2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_res2_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L69_:;
  // res3 = force? res2
  Rsh_Fir_reg_res3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res2_);
  // checkMissing(res3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_res3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(res3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c7 then L70() else L71(res3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L70()
    goto L70_;
  } else {
  // L71(res3)
    Rsh_Fir_reg_res5_ = Rsh_Fir_reg_res3_;
    goto L71_;
  }

L70_:;
  // dr6 = tryDispatchBuiltin.1("[", res3)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_res3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args62);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc3 then L72() else L71(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L72()
    goto L72_;
  } else {
  // L71(dr6)
    Rsh_Fir_reg_res5_ = Rsh_Fir_reg_dr6_;
    goto L71_;
  }

L71_:;
  // excl2 = ld excl
  Rsh_Fir_reg_excl2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L73() else D15()
  // L73()
  goto L73_;

L72_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L11(dx6)
  // L11(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L11_;

D15_:;
  // deopt 56 [res5, excl2]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_res5_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_excl2_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L73_:;
  // excl3 = force? excl2
  Rsh_Fir_reg_excl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_excl2_);
  // checkMissing(excl3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_excl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r21 = `!`(excl3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_excl3_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r22 = dyn __(res5, r21)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_res5_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r22_;
  goto L11_;

L74_:;
  // res6 = ld res
  Rsh_Fir_reg_res6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L76() else D16()
  // L76()
  goto L76_;

L75_:;
  // r23 = dyn base5(<sym res>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L12_;

D16_:;
  // deopt 63 [res6]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_res6_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L76_:;
  // res7 = force? res6
  Rsh_Fir_reg_res7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res6_);
  // checkMissing(res7)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_res7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r25 = dyn length1(res7)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_res7_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L77() else D17()
  // L77()
  goto L77_;

D17_:;
  // deopt 66 [r25]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L12_;

D18_:;
  // deopt 68 [w2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_w2_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L78_:;
  // w3 = force? w2
  Rsh_Fir_reg_w3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w2_);
  // checkMissing(w3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_w3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(w3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_w3_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c8 then L79() else L80(w3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L79()
    goto L79_;
  } else {
  // L80(w3)
    Rsh_Fir_reg_w5_ = Rsh_Fir_reg_w3_;
    goto L80_;
  }

L79_:;
  // dr8 = tryDispatchBuiltin.1("[", w3)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_w3_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc4 then L81() else L80(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L81()
    goto L81_;
  } else {
  // L80(dr8)
    Rsh_Fir_reg_w5_ = Rsh_Fir_reg_dr8_;
    goto L80_;
  }

L80_:;
  // excl4 = ld excl
  Rsh_Fir_reg_excl4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L82() else D19()
  // L82()
  goto L82_;

L81_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L13(dx8)
  // L13(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L13_;

D19_:;
  // deopt 70 [w5, excl4]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_w5_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_excl4_;
  Rsh_Fir_deopt(70, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L82_:;
  // excl5 = force? excl4
  Rsh_Fir_reg_excl5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_excl4_);
  // checkMissing(excl5)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_excl5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // r26 = `!`(excl5)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_excl5_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r27 = dyn __1(w5, r26)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_w5_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r27)
  // L13(r27)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r27_;
  goto L13_;

D20_:;
  // deopt 77 [N2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_N2_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L84_:;
  // N3 = force? N2
  Rsh_Fir_reg_N3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N2_);
  // checkMissing(N3)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_N3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // st N0 = N3
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_N3_, RHO);
  (void)(Rsh_Fir_reg_N3_);
  // REML1 = ld REML
  Rsh_Fir_reg_REML1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L85() else D21()
  // L85()
  goto L85_;

D21_:;
  // deopt 80 [REML1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_REML1_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L85_:;
  // REML2 = force? REML1
  Rsh_Fir_reg_REML2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_REML1_);
  // checkMissing(REML2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_REML2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(REML2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_REML2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c9 then L86() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L86()
    goto L86_;
  } else {
  // L14()
    goto L14_;
  }

L86_:;
  // N4 = ld N
  Rsh_Fir_reg_N4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L87() else D22()
  // L87()
  goto L87_;

D22_:;
  // deopt 82 [N4]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_N4_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L87_:;
  // N5 = force? N4
  Rsh_Fir_reg_N5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N4_);
  // checkMissing(N5)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_N5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // p = ld p
  Rsh_Fir_reg_p = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L88() else D23()
  // L88()
  goto L88_;

D23_:;
  // deopt 83 [N5, p]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_N5_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_p;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L88_:;
  // p1 = force? p
  Rsh_Fir_reg_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p);
  // checkMissing(p1)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // r28 = `-`(N5, p1)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_N5_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // st N = r28
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // goto L15()
  // L15()
  goto L15_;

L90_:;
  // sym7 = ldf log
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base7 = ldf log in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard7 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L91_:;
  // r32 = dyn base6(<lang log(w)>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(0.5, r32)
  // L16(0.5, r32)
  Rsh_Fir_reg_r33_ = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r32_;
  goto L16_;

L92_:;
  // w6 = ld w
  Rsh_Fir_reg_w6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L94() else D24()
  // L94()
  goto L94_;

L93_:;
  // r37 = dyn base7(<sym w>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L17(0.5, r37)
  // L17(0.5, r37)
  Rsh_Fir_reg_r38_ = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
  goto L17_;

D24_:;
  // deopt 93 [0.5, w6]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_w6_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L94_:;
  // w7 = force? w6
  Rsh_Fir_reg_w7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w6_);
  // checkMissing(w7)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_w7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r40 = log(w7, 2.718281828459045)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_w7_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L17(0.5, r40)
  // L17(0.5, r40)
  Rsh_Fir_reg_r38_ = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L17_;

D25_:;
  // deopt 97 [r38, r41]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L16(r38, r41)
  // L16(r38, r41)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r41_;
  goto L16_;

D26_:;
  // deopt 97 [r33, r34, N6]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_N6_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L96_:;
  // N7 = force? N6
  Rsh_Fir_reg_N7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N6_);
  // checkMissing(N7)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_N7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // sym8 = ldf log
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base8 = ldf log in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard8 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L97_:;
  // r50 = log(6.283185307179586, 2.718281828459045)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L18(r33, r34, N7, r50)
  // L18(r33, r34, N7, r50)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_N10_ = Rsh_Fir_reg_N7_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L18_;

L98_:;
  // r46 = dyn base8(<lang `*`(2.0, pi)>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L18(r33, r34, N7, r46)
  // L18(r33, r34, N7, r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_N10_ = Rsh_Fir_reg_N7_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r46_;
  goto L18_;

L99_:;
  // N14 = ld N
  Rsh_Fir_reg_N14_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L101() else D27()
  // L101()
  goto L101_;

L100_:;
  // r58 = dyn base9(<sym N>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L19(r47, r48, N10, r51, r58)
  // L19(r47, r48, N10, r51, r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_N13_ = Rsh_Fir_reg_N10_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r58_;
  goto L19_;

D27_:;
  // deopt 104 [r47, r48, N10, r51, N14]
  SEXP Rsh_Fir_array_deopt_stack26[5];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_N10_;
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack26[4] = Rsh_Fir_reg_N14_;
  Rsh_Fir_deopt(104, 5, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L101_:;
  // N15 = force? N14
  Rsh_Fir_reg_N15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N14_);
  // checkMissing(N15)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_N15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // r63 = log(N15, 2.718281828459045)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_N15_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L19(r47, r48, N10, r51, r63)
  // L19(r47, r48, N10, r51, r63)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_N13_ = Rsh_Fir_reg_N10_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L19_;

L102_:;
  // sym11 = ldf sum
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base11 = ldf sum in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard11 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L103_:;
  // r71 = dyn base10(<lang sum(`*`(w, `^`(res, 2.0)))>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L20(r59, r60, N13, r64, r71)
  // L20(r59, r60, N13, r64, r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_N18_ = Rsh_Fir_reg_N13_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r71_;
  goto L20_;

L104_:;
  // w8 = ld w
  Rsh_Fir_reg_w8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L106() else D28()
  // L106()
  goto L106_;

L105_:;
  // r82 = dyn base11(<lang `*`(w, `^`(res, 2.0))>)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L21(r59, r60, N13, r64, r82)
  // L21(r59, r60, N13, r64, r82)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_N21_ = Rsh_Fir_reg_N13_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r82_;
  goto L21_;

D28_:;
  // deopt 110 [r59, r60, N13, r64, w8]
  SEXP Rsh_Fir_array_deopt_stack27[5];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_N13_;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack27[4] = Rsh_Fir_reg_w8_;
  Rsh_Fir_deopt(110, 5, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L106_:;
  // w9 = force? w8
  Rsh_Fir_reg_w9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w8_);
  // checkMissing(w9)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_w9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // res8 = ld res
  Rsh_Fir_reg_res8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L107() else D29()
  // L107()
  goto L107_;

D29_:;
  // deopt 111 [r59, r60, N13, r64, w9, res8]
  SEXP Rsh_Fir_array_deopt_stack28[6];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_N13_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack28[4] = Rsh_Fir_reg_w9_;
  Rsh_Fir_array_deopt_stack28[5] = Rsh_Fir_reg_res8_;
  Rsh_Fir_deopt(111, 6, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L107_:;
  // res9 = force? res8
  Rsh_Fir_reg_res9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res8_);
  // checkMissing(res9)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_res9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // r87 = `^`(res9, 2.0)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_res9_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // r88 = `*`(w9, r87)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_w9_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r89 = dyn sum1(r88)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L108() else D30()
  // L108()
  goto L108_;

D30_:;
  // deopt 117 [r59, r60, N13, r64, r89]
  SEXP Rsh_Fir_array_deopt_stack29[5];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_N13_;
  Rsh_Fir_array_deopt_stack29[3] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack29[4] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(117, 5, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L21(r59, r60, N13, r64, r89)
  // L21(r59, r60, N13, r64, r89)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_N21_ = Rsh_Fir_reg_N13_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r89_;
  goto L21_;

D31_:;
  // deopt 124 [REML3]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_REML3_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L109_:;
  // REML4 = force? REML3
  Rsh_Fir_reg_REML4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_REML3_);
  // checkMissing(REML4)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_REML4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c10 = `as.logical`(REML4)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_REML4_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c10 then L110() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L110()
    goto L110_;
  } else {
  // L22()
    goto L22_;
  }

L110_:;
  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L111() else D32()
  // L111()
  goto L111_;

D32_:;
  // deopt 126 [val]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_val;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L111_:;
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // sym12 = ldf sum
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base12 = ldf sum in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args108);
  // if guard12 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L112_:;
  // sym13 = ldf log
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base13 = ldf log in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args109);
  // if guard13 then L114() else L115()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L114()
    goto L114_;
  } else {
  // L115()
    goto L115_;
  }

L113_:;
  // r95 = dyn base12(<lang log(abs(`[`(diag(`$`(`$`(object, qr), qr)), `:`(1, p))))>)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L23(val1, r95)
  // L23(val1, r95)
  Rsh_Fir_reg_val4_ = Rsh_Fir_reg_val1_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L23_;

L114_:;
  // sym14 = ldf abs
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base14 = ldf abs in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard14 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L115_:;
  // r97 = dyn base13(<lang abs(`[`(diag(`$`(`$`(object, qr), qr)), `:`(1, p)))>)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L24(val1, r97)
  // L24(val1, r97)
  Rsh_Fir_reg_val7_ = Rsh_Fir_reg_val1_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r97_;
  goto L24_;

L116_:;
  // diag = ldf diag
  Rsh_Fir_reg_diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L118() else D33()
  // L118()
  goto L118_;

L117_:;
  // r99 = dyn base14(<lang `[`(diag(`$`(`$`(object, qr), qr)), `:`(1, p))>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L25(val1, r99)
  // L25(val1, r99)
  Rsh_Fir_reg_val10_ = Rsh_Fir_reg_val1_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L25_;

D33_:;
  // deopt 133 [val1]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_val1_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L118_:;
  // p2 = prom<V +>{
  //   object15 = ld object;
  //   object16 = force? object15;
  //   checkMissing(object16);
  //   c11 = `is.object`(object16);
  //   if c11 then L1() else L2(object16);
  // L0(dx11):
  //   c12 = `is.object`(dx11);
  //   if c12 then L5() else L6(dx11);
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", object16);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(object18):
  //   r101 = `$`(object18, <sym qr>);
  //   goto L0(r101);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // L4(dx15):
  //   return dx15;
  // L5():
  //   dr12 = tryDispatchBuiltin.1("$", dx11);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L7() else L6(dr12);
  // L6(dx13):
  //   r102 = `$`(dx13, <sym qr>);
  //   goto L4(r102);
  // L7():
  //   dx14 = getTryDispatchBuiltinValue(dr12);
  //   goto L4(dx14);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3280860523_, CCP, RHO);
  // r104 = dyn diag(p2)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L119() else D34()
  // L119()
  goto L119_;

D34_:;
  // deopt 135 [val1, r104]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_val1_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(135, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L119_:;
  // c13 = `is.object`(r104)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if c13 then L120() else L121(val1, r104)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L120()
    goto L120_;
  } else {
  // L121(val1, r104)
    Rsh_Fir_reg_val12_ = Rsh_Fir_reg_val1_;
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r104_;
    goto L121_;
  }

L120_:;
  // dr14 = tryDispatchBuiltin.1("[", r104)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args127);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc7 then L122() else L121(val1, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L122()
    goto L122_;
  } else {
  // L121(val1, dr14)
    Rsh_Fir_reg_val12_ = Rsh_Fir_reg_val1_;
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_dr14_;
    goto L121_;
  }

L121_:;
  // p3 = ld p
  Rsh_Fir_reg_p3_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L123() else D35()
  // L123()
  goto L123_;

L122_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L26(val1, dx16)
  // L26(val1, dx16)
  Rsh_Fir_reg_val14_ = Rsh_Fir_reg_val1_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L26_;

D35_:;
  // deopt 137 [val12, r106, 1, p3]
  SEXP Rsh_Fir_array_deopt_stack34[4];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_val12_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_deopt_stack34[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_deopt(137, 4, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L123_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // r107 = `:`(1, p4)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r108 = dyn __2(r106, r107)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L26(val12, r108)
  // L26(val12, r108)
  Rsh_Fir_reg_val14_ = Rsh_Fir_reg_val12_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r108_;
  goto L26_;

D36_:;
  // deopt 142 [val14, r109]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_val14_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(142, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L25(val14, r109)
  // L25(val14, r109)
  Rsh_Fir_reg_val10_ = Rsh_Fir_reg_val14_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r109_;
  goto L25_;

D37_:;
  // deopt 145 [val7, r111]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_val7_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(145, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L23(val7, r111)
  // L23(val7, r111)
  Rsh_Fir_reg_val4_ = Rsh_Fir_reg_val7_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r111_;
  goto L23_;

D38_:;
  // deopt 150 [N22]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_N22_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L127_:;
  // N23 = force? N22
  Rsh_Fir_reg_N23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N22_);
  // checkMissing(N23)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_N23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // l = ld val
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L128() else D39()
  // L128()
  goto L128_;

D39_:;
  // deopt 153 [N23, l, N23]
  SEXP Rsh_Fir_array_deopt_stack38[3];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_N23_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_N23_;
  Rsh_Fir_deopt(153, 3, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L128_:;
  // r114 = dyn attr__(l, NULL, "nall", N23)
  SEXP Rsh_Fir_array_args134[4];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args134[2] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args134[3] = Rsh_Fir_reg_N23_;
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L129() else D40()
  // L129()
  goto L129_;

D40_:;
  // deopt 156 [N23, r114]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_N23_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r114_;
  Rsh_Fir_deopt(156, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L129_:;
  // st val = r114
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r114_, RHO);
  (void)(Rsh_Fir_reg_r114_);
  // N24 = ld N
  Rsh_Fir_reg_N24_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L130() else D41()
  // L130()
  goto L130_;

D41_:;
  // deopt 158 [N24]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_N24_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L130_:;
  // N25 = force? N24
  Rsh_Fir_reg_N25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N24_);
  // checkMissing(N25)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_N25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // l1 = ld val
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L131() else D42()
  // L131()
  goto L131_;

D42_:;
  // deopt 161 [N25, l1, N25]
  SEXP Rsh_Fir_array_deopt_stack41[3];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_N25_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_N25_;
  Rsh_Fir_deopt(161, 3, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L131_:;
  // r115 = dyn attr__1(l1, NULL, "nobs", N25)
  SEXP Rsh_Fir_array_args136[4];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args136[2] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args136[3] = Rsh_Fir_reg_N25_;
  SEXP Rsh_Fir_array_arg_names30[4];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_array_arg_names30[3] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L132() else D43()
  // L132()
  goto L132_;

D43_:;
  // deopt 164 [N25, r115]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_N25_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r115_;
  Rsh_Fir_deopt(164, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L132_:;
  // st val = r115
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r115_, RHO);
  (void)(Rsh_Fir_reg_r115_);
  // p5 = ld p
  Rsh_Fir_reg_p5_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L133() else D44()
  // L133()
  goto L133_;

D44_:;
  // deopt 166 [p5]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L133_:;
  // p6 = force? p5
  Rsh_Fir_reg_p6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p5_);
  // checkMissing(p6)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_p6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // r116 = `+`(p6, 1.0)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // l2 = ld val
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // attr__2 = ldf `attr<-`
  Rsh_Fir_reg_attr__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L134() else D45()
  // L134()
  goto L134_;

D45_:;
  // deopt 171 [r116, l2, r116]
  SEXP Rsh_Fir_array_deopt_stack44[3];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(171, 3, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L134_:;
  // r117 = dyn attr__2(l2, NULL, "df", r116)
  SEXP Rsh_Fir_array_args139[4];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args139[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args139[2] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args139[3] = Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_array_arg_names31[4];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_array_arg_names31[3] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__2_, 4, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L135() else D46()
  // L135()
  goto L135_;

D46_:;
  // deopt 174 [r116, r117]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(174, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L135_:;
  // st val = r117
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r117_, RHO);
  (void)(Rsh_Fir_reg_r117_);
  // l3 = ld val
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L136() else D47()
  // L136()
  goto L136_;

D47_:;
  // deopt 179 ["logLik", l3, "logLik"]
  SEXP Rsh_Fir_array_deopt_stack46[3];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_const(CCP, 52);
  Rsh_Fir_deopt(179, 3, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L136_:;
  // r118 = dyn class__(l3, NULL, "logLik")
  SEXP Rsh_Fir_array_args140[3];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args140[2] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L137() else D48()
  // L137()
  goto L137_;

D48_:;
  // deopt 181 ["logLik", r118]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r118_;
  Rsh_Fir_deopt(181, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L137_:;
  // st val = r118
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r118_, RHO);
  (void)(Rsh_Fir_reg_r118_);
  // val15 = ld val
  Rsh_Fir_reg_val15_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L138() else D49()
  // L138()
  goto L138_;

D49_:;
  // deopt 183 [val15]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_val15_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L138_:;
  // val16 = force? val15
  Rsh_Fir_reg_val16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val15_);
  // checkMissing(val16)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_val16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return val16
  return Rsh_Fir_reg_val16_;
}
SEXP Rsh_Fir_user_promise_inner3280860523_(SEXP CCP, SEXP RHO) {
  // object15 = ld object
  Rsh_Fir_reg_object15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object16 = force? object15
  Rsh_Fir_reg_object16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object15_);
  // checkMissing(object16)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_object16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(object16)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if c11 then L1() else L2(object16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object16)
    Rsh_Fir_reg_object18_ = Rsh_Fir_reg_object16_;
    goto L2_;
  }

L0_:;
  // c12 = `is.object`(dx11)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c12 then L5() else L6(dx11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx11)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    goto L6_;
  }

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", object16)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_object16_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args117);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_object18_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // r101 = `$`(object18, <sym qr>)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L0(r101)
  // L0(r101)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r101_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;

L4_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L5_:;
  // dr12 = tryDispatchBuiltin.1("$", dx11)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args121);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc6 then L7() else L6(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr12)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dr12_;
    goto L6_;
  }

L6_:;
  // r102 = `$`(dx13, <sym qr>)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L4(r102)
  // L4(r102)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r102_;
  goto L4_;

L7_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L4(dx14)
  // L4(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
