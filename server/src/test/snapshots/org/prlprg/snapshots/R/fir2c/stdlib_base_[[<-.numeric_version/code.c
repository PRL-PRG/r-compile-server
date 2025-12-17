#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner709191543_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner709191543_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner709191543_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner709191543_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner709191543_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner709191543
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner709191543_, RHO, CCP);
  // st `[[<-.numeric_version` = r
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
SEXP Rsh_Fir_user_function_inner709191543_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner709191543 dynamic dispatch ([x, `...`, value])

  return Rsh_Fir_user_version_inner709191543_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner709191543_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner709191543 version 0 (*, dots, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner709191543/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_nargs;  // nargs
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_as_numeric_version;  // as_numeric_version
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_unclass1_;  // unclass1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_value9_;  // value9
  SEXP Rsh_Fir_reg_value10_;  // value10
  SEXP Rsh_Fir_reg_anyNA;  // anyNA
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_value11_;  // value11
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_value13_;  // value13
  SEXP Rsh_Fir_reg_value14_;  // value14
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_value15_;  // value15
  SEXP Rsh_Fir_reg_value16_;  // value16
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_value17_;  // value17
  SEXP Rsh_Fir_reg_value18_;  // value18
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_value19_;  // value19
  SEXP Rsh_Fir_reg_value20_;  // value20
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_value21_;  // value21
  SEXP Rsh_Fir_reg_value22_;  // value22
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_value24_;  // value24
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_value26_;  // value26
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_value28_;  // value28
  SEXP Rsh_Fir_reg_value29_;  // value29
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_value30_;  // value30
  SEXP Rsh_Fir_reg_value31_;  // value31
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_value32_;  // value32
  SEXP Rsh_Fir_reg_value33_;  // value33
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_value34_;  // value34
  SEXP Rsh_Fir_reg_value35_;  // value35
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_c66_;  // c66
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_value36_;  // value36
  SEXP Rsh_Fir_reg_value37_;  // value37
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c67_;  // c67
  SEXP Rsh_Fir_reg_value40_;  // value40
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_value41_;  // value41
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_value44_;  // value44
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_value45_;  // value45
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c68_;  // c68
  SEXP Rsh_Fir_reg_value47_;  // value47
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_value49_;  // value49
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_value51_;  // value51
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_value53_;  // value53
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg___12_;  // __12
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_structure;  // structure
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_oldClass;  // oldClass
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r70_;  // r70

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];
  Rsh_Fir_reg_value = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf unclass
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf unclass in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L0_:;
  // st z = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf nargs
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf nargs in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L1_:;
  // r6 = `<`(r4, 4)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L44() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L44()
    goto L44_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym12 = ldf `as.integer`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base12 = ldf `as.integer` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard12 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L3_:;
  // r10 = `<`(r8, 2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c1 then L49() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L49()
    goto L49_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym9 = ldf `as.integer`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base9 = ldf `as.integer` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard9 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L5_:;
  // c3 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c3 then L53() else L6(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L53()
    goto L53_;
  } else {
  // L6(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L6_;
  }

L6_:;
  // c12 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c12 then L59() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L59()
    goto L59_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // r16 = `==`(r14, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c10 = `&&`(c8, c9)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L6(c10)
  // L6(c10)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c10_;
  goto L6_;

L8_:;
  // sym6 = ldf `is.integer`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf `is.integer` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard6 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L9_:;
  // c13 = `is.object`(r18)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c13 then L65() else L66(r18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L65()
    goto L65_;
  } else {
  // L66(r18)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r18_;
    goto L66_;
  }

L10_:;
  // st value = dx1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L11(dx1)
  // L11(dx1)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_dx1_;
  goto L11_;

L11_:;
  // goto L18()
  // L18()
  goto L18_;

L12_:;
  // r27 = `!`(r26)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c15 then L13(c15) else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L13(c15)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c15_;
    goto L13_;
  } else {
  // L72()
    goto L72_;
  }

L13_:;
  // c24 = `as.logical`(c16)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c24 then L15(c24) else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L15(c24)
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c24_;
    goto L15_;
  } else {
  // L78()
    goto L78_;
  }

L14_:;
  // c21 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c22 = `||`(c20, c21)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L13(c22)
  // L13(c22)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c22_;
  goto L13_;

L15_:;
  // c33 = `as.logical`(c25)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c33 then L84() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L84()
    goto L84_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // r34 = `<`(r32, 0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c30 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c31 = `||`(c29, c30)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c29_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L15(c31)
  // L15(c31)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c31_;
  goto L15_;

L17_:;
  // goto L11(NULL)
  // L11(NULL)
  Rsh_Fir_reg_dx2_ = Rsh_const(CCP, 13);
  goto L11_;

L18_:;
  // value21 = ld value
  Rsh_Fir_reg_value21_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L110() else D27()
  // L110()
  goto L110_;

L19_:;
  // st value = r37
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard10 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L20_:;
  // r42 = `!=`(r40, 1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c34 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c34 then L21(c34) else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L21(c34)
    Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c34_;
    goto L21_;
  } else {
  // L97()
    goto L97_;
  }

L21_:;
  // c43 = `as.logical`(c35)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c43 then L23(c43) else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L23(c43)
    Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c43_;
    goto L23_;
  } else {
  // L103()
    goto L103_;
  }

L22_:;
  // c40 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c41 = `||`(c39, c40)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L21(c41)
  // L21(c41)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c41_;
  goto L21_;

L23_:;
  // c49 = `as.logical`(c44)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c49 then L106() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L106()
    goto L106_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L18()
  // L18()
  goto L18_;

L25_:;
  // st z = dx5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L150() else D42()
  // L150()
  goto L150_;

L27_:;
  // st value = r50
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard13 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L28_:;
  // r55 = `!=`(r53, 1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c51 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c51 then L29(c51) else L124()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L29(c51)
    Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c51_;
    goto L29_;
  } else {
  // L124()
    goto L124_;
  }

L29_:;
  // c60 = `as.logical`(c52)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c52_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c60 then L31(c60) else L130()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L31(c60)
    Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c60_;
    goto L31_;
  } else {
  // L130()
    goto L130_;
  }

L30_:;
  // c57 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // c58 = `||`(c56, c57)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_c56_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_c57_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L29(c58)
  // L29(c58)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c58_;
  goto L29_;

L31_:;
  // c66 = `as.logical`(c61)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_c61_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c66 then L133() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c66_)) {
  // L133()
    goto L133_;
  } else {
  // L32()
    goto L32_;
  }

L32_:;
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // value36 = ld value
  Rsh_Fir_reg_value36_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L137() else D38()
  // L137()
  goto L137_;

L34_:;
  // c68 = `is.object`(dx7)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c68 then L142() else L143(value44, l9, dx7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c68_)) {
  // L142()
    goto L142_;
  } else {
  // L143(value44, l9, dx7)
    Rsh_Fir_reg_value47_ = Rsh_Fir_reg_value44_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    goto L143_;
  }

L35_:;
  // c69 = `is.object`(l13)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c69 then L146() else L147(value49, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L146()
    goto L146_;
  } else {
  // L147(value49, l13)
    Rsh_Fir_reg_value51_ = Rsh_Fir_reg_value49_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L147_;
  }

L36_:;
  // st z = dx13
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L26()
  // L26()
  goto L26_;

L37_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L39() else D0()
  // L39()
  goto L39_;

L38_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L39_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn unclass(x2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L40() else D1()
  // L40()
  goto L40_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L41_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r5 = dyn nargs()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L43() else D2()
  // L43()
  goto L43_;

L42_:;
  // r3 = dyn base1()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L44_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard2 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L45_:;
  // __1 = ld `..1`
  Rsh_Fir_reg___1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L47() else D3()
  // L47()
  goto L47_;

L46_:;
  // r7 = dyn base2(<sym ..1>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D3_:;
  // deopt 15 [__1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg___1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L47_:;
  // __2 = force? __1
  Rsh_Fir_reg___2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___1_);
  // checkMissing(__2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg___2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r9 = dyn length(__2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L48() else D4()
  // L48()
  goto L48_;

D4_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L3_;

L49_:;
  // sym3 = ldf `is.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf `is.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard3 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L50_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L52() else D5()
  // L52()
  goto L52_;

L51_:;
  // r11 = dyn base3(<sym value>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L5_;

D5_:;
  // deopt 22 [value1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L52_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c2 = `is.character`(value2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L5(c2)
  // L5(c2)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_c2_;
  goto L5_;

L53_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard4 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L56() else D6()
  // L56()
  goto L56_;

L55_:;
  // r13 = dyn base4(<sym value>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(c3, r13)
  // L7(c3, r13)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D6_:;
  // deopt 27 [c3, value3]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L56_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r15 = dyn length1(value4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L57() else D7()
  // L57()
  goto L57_;

D7_:;
  // deopt 30 [c3, r15]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L7(c3, r15)
  // L7(c3, r15)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

L59_:;
  // sym5 = ldf unclass
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base5 = ldf unclass in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard5 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L60_:;
  // as_numeric_version = ldf `as.numeric_version`
  Rsh_Fir_reg_as_numeric_version = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L62() else D8()
  // L62()
  goto L62_;

L61_:;
  // r17 = dyn base5(<lang as.numeric_version(value)>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

D8_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L62_:;
  // p = prom<V +>{
  //   value5 = ld value;
  //   value6 = force? value5;
  //   checkMissing(value6);
  //   return value6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner709191543_, CCP, RHO);
  // r20 = dyn as_numeric_version(p)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric_version, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L63() else D9()
  // L63()
  goto L63_;

D9_:;
  // deopt 39 [r20]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L63_:;
  // unclass1 = ldf unclass in base
  Rsh_Fir_reg_unclass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r21 = dyn unclass1(r20)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass1_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L64() else D10()
  // L64()
  goto L64_;

D10_:;
  // deopt 41 [r21]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L9(r21)
  // L9(r21)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r21_;
  goto L9_;

L65_:;
  // dr = tryDispatchBuiltin.1("[[", r18)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc then L67() else L66(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L67()
    goto L67_;
  } else {
  // L66(dr)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_dr;
    goto L66_;
  }

L66_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r24 = dyn __3(r23, 1)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r24_;
  goto L10_;

L67_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L10(dx)
  // L10(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L10_;

L69_:;
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L71() else D11()
  // L71()
  goto L71_;

L70_:;
  // r25 = dyn base6(<sym value>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L12_;

D11_:;
  // deopt 47 [value7]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_value7_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L71_:;
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c14 = `is.integer`(value8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_value8_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(386, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L12(c14)
  // L12(c14)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c14_;
  goto L12_;

L72_:;
  // sym7 = ldf anyNA
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base7 = ldf anyNA in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard7 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L73_:;
  // value9 = ld value
  Rsh_Fir_reg_value9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L75() else D12()
  // L75()
  goto L75_;

L74_:;
  // r28 = dyn base7(<sym value>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L14(c15, r28)
  // L14(c15, r28)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L14_;

D12_:;
  // deopt 53 [c15, value9]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_value9_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L75_:;
  // value10 = force? value9
  Rsh_Fir_reg_value10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value9_);
  // checkMissing(value10)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_value10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r30 = dyn anyNA(value10)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_value10_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L76() else D13()
  // L76()
  goto L76_;

D13_:;
  // deopt 56 [c15, r30]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L14(c15, r30)
  // L14(c15, r30)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L14_;

L78_:;
  // sym8 = ldf any
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base8 = ldf any in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard8 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L79_:;
  // value11 = ld value
  Rsh_Fir_reg_value11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L81() else D14()
  // L81()
  goto L81_;

L80_:;
  // r31 = dyn base8(<sym value>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L16(c24, r31)
  // L16(c24, r31)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L16_;

D14_:;
  // deopt 60 [c24, value11]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_value11_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L81_:;
  // value12 = force? value11
  Rsh_Fir_reg_value12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value11_);
  // checkMissing(value12)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_value12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r33 = dyn any(value12)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_value12_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L82() else D15()
  // L82()
  goto L82_;

D15_:;
  // deopt 63 [c24, r33]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L16(c24, r33)
  // L16(c24, r33)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L16_;

L84_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L85() else D16()
  // L85()
  goto L85_;

D16_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L85_:;
  // r35 = dyn stop("invalid 'value'")
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L86() else D17()
  // L86()
  goto L86_;

D17_:;
  // deopt 70 [r35]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L11(r35)
  // L11(r35)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_r35_;
  goto L11_;

L89_:;
  // value13 = ld value
  Rsh_Fir_reg_value13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L91() else D18()
  // L91()
  goto L91_;

L90_:;
  // r36 = dyn base9(<sym value>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L19(r36)
  // L19(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L19_;

D18_:;
  // deopt 75 [value13]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_value13_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L91_:;
  // value14 = force? value13
  Rsh_Fir_reg_value14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value13_);
  // checkMissing(value14)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_value14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r38 = dyn as_integer(value14)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_value14_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L92() else D19()
  // L92()
  goto L92_;

D19_:;
  // deopt 78 [r38]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L19(r38)
  // L19(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L19_;

L93_:;
  // value15 = ld value
  Rsh_Fir_reg_value15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L95() else D20()
  // L95()
  goto L95_;

L94_:;
  // r39 = dyn base10(<sym value>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L20(r39)
  // L20(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L20_;

D20_:;
  // deopt 82 [value15]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_value15_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L95_:;
  // value16 = force? value15
  Rsh_Fir_reg_value16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value15_);
  // checkMissing(value16)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_value16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r41 = dyn length2(value16)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_value16_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L96() else D21()
  // L96()
  goto L96_;

D21_:;
  // deopt 85 [r41]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L20(r41)
  // L20(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L20_;

L97_:;
  // sym11 = ldf `is.na`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base11 = ldf `is.na` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard11 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L98_:;
  // value17 = ld value
  Rsh_Fir_reg_value17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L100() else D22()
  // L100()
  goto L100_;

L99_:;
  // r43 = dyn base11(<sym value>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L22(c34, r43)
  // L22(c34, r43)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L22_;

D22_:;
  // deopt 90 [c34, value17]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_value17_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L100_:;
  // value18 = force? value17
  Rsh_Fir_reg_value18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value17_);
  // checkMissing(value18)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_value18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r45 = dyn is_na(value18)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_value18_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L101() else D23()
  // L101()
  goto L101_;

D23_:;
  // deopt 93 [c34, r45]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L22(c34, r45)
  // L22(c34, r45)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L22_;

L103_:;
  // value19 = ld value
  Rsh_Fir_reg_value19_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L104() else D24()
  // L104()
  goto L104_;

D24_:;
  // deopt 95 [c43, value19]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c43_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_value19_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L104_:;
  // value20 = force? value19
  Rsh_Fir_reg_value20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value19_);
  // checkMissing(value20)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_value20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // r46 = `<`(value20, 0)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_value20_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // c46 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // c47 = `||`(c43, c46)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_c43_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_c46_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L23(c47)
  // L23(c47)
  Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c47_;
  goto L23_;

L106_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L107() else D25()
  // L107()
  goto L107_;

D25_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

L107_:;
  // r47 = dyn stop1("invalid 'value'")
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L108() else D26()
  // L108()
  goto L108_;

D26_:;
  // deopt 103 [r47]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L18()
  // L18()
  goto L18_;

D27_:;
  // deopt 106 [value21]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_value21_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L110_:;
  // value22 = force? value21
  Rsh_Fir_reg_value22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value21_);
  // checkMissing(value22)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_value22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // l = ld z
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c50 = `is.object`(l)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c50 then L111() else L112(value22, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L111()
    goto L111_;
  } else {
  // L112(value22, l)
    Rsh_Fir_reg_value24_ = Rsh_Fir_reg_value22_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L112_;
  }

L111_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l, value22)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args93);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc1 then L113() else L112(value22, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L113()
    goto L113_;
  } else {
  // L112(value22, dr2)
    Rsh_Fir_reg_value24_ = Rsh_Fir_reg_value22_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L112_;
  }

L112_:;
  // __4 = ld `..1`
  Rsh_Fir_reg___4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L114() else D28()
  // L114()
  goto L114_;

L113_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L25(value22, dx4)
  // L25(value22, dx4)
  Rsh_Fir_reg_value26_ = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L25_;

D28_:;
  // deopt 109 [value24, l2, value22, __4]
  SEXP Rsh_Fir_array_deopt_stack25[4];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_value24_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_value22_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg___4_;
  Rsh_Fir_deopt(109, 4, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L114_:;
  // __5 = force? __4
  Rsh_Fir_reg___5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___4_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r48 = dyn ____(l2, value22, __5)
  SEXP Rsh_Fir_array_args96[3];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_value22_;
  Rsh_Fir_array_args96[2] = Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L25(value24, r48)
  // L25(value24, r48)
  Rsh_Fir_reg_value26_ = Rsh_Fir_reg_value24_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r48_;
  goto L25_;

L116_:;
  // value28 = ld value
  Rsh_Fir_reg_value28_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L118() else D29()
  // L118()
  goto L118_;

L117_:;
  // r49 = dyn base12(<sym value>)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L27(r49)
  // L27(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L27_;

D29_:;
  // deopt 115 [value28]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_value28_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L118_:;
  // value29 = force? value28
  Rsh_Fir_reg_value29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value28_);
  // checkMissing(value29)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_value29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r51 = dyn as_integer1(value29)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_value29_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L119() else D30()
  // L119()
  goto L119_;

D30_:;
  // deopt 118 [r51]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L27(r51)
  // L27(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L27_;

L120_:;
  // value30 = ld value
  Rsh_Fir_reg_value30_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L122() else D31()
  // L122()
  goto L122_;

L121_:;
  // r52 = dyn base13(<sym value>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L28(r52)
  // L28(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L28_;

D31_:;
  // deopt 122 [value30]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_value30_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L122_:;
  // value31 = force? value30
  Rsh_Fir_reg_value31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value30_);
  // checkMissing(value31)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_value31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r54 = dyn length3(value31)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_value31_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L123() else D32()
  // L123()
  goto L123_;

D32_:;
  // deopt 125 [r54]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L28(r54)
  // L28(r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L28_;

L124_:;
  // sym14 = ldf `is.na`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base14 = ldf `is.na` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard14 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L125_:;
  // value32 = ld value
  Rsh_Fir_reg_value32_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L127() else D33()
  // L127()
  goto L127_;

L126_:;
  // r56 = dyn base14(<sym value>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L30(c51, r56)
  // L30(c51, r56)
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L30_;

D33_:;
  // deopt 130 [c51, value32]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_value32_;
  Rsh_Fir_deopt(130, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L127_:;
  // value33 = force? value32
  Rsh_Fir_reg_value33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value32_);
  // checkMissing(value33)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_value33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r58 = dyn is_na1(value33)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_value33_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L128() else D34()
  // L128()
  goto L128_;

D34_:;
  // deopt 133 [c51, r58]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(133, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L128_:;
  // goto L30(c51, r58)
  // L30(c51, r58)
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L30_;

L130_:;
  // value34 = ld value
  Rsh_Fir_reg_value34_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L131() else D35()
  // L131()
  goto L131_;

D35_:;
  // deopt 135 [c60, value34]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_c60_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_value34_;
  Rsh_Fir_deopt(135, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L131_:;
  // value35 = force? value34
  Rsh_Fir_reg_value35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value34_);
  // checkMissing(value35)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_value35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // r59 = `<`(value35, 0)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_value35_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // c63 = `as.logical`(r59)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // c64 = `||`(c60, c63)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_c60_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L31(c64)
  // L31(c64)
  Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c64_;
  goto L31_;

L133_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L134() else D36()
  // L134()
  goto L134_;

D36_:;
  // deopt 141 []
  Rsh_Fir_deopt(141, 0, NULL, CCP, RHO);
  return R_NilValue;

L134_:;
  // r60 = dyn stop2("invalid 'value'")
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L135() else D37()
  // L135()
  goto L135_;

D37_:;
  // deopt 143 [r60]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L135_:;
  // goto L33()
  // L33()
  goto L33_;

D38_:;
  // deopt 146 [value36]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_value36_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L137_:;
  // value37 = force? value36
  Rsh_Fir_reg_value37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value36_);
  // checkMissing(value37)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_value37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // l3 = ld z
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c67 = `is.object`(l3)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if c67 then L138() else L139(value37, l3, value37, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c67_)) {
  // L138()
    goto L138_;
  } else {
  // L139(value37, l3, value37, l3)
    Rsh_Fir_reg_value40_ = Rsh_Fir_reg_value37_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_value41_ = Rsh_Fir_reg_value37_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l3_;
    goto L139_;
  }

L138_:;
  // dr4 = tryDispatchBuiltin.1("[[", l3)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args114);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if dc2 then L140() else L139(value37, l3, value37, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L140()
    goto L140_;
  } else {
  // L139(value37, l3, value37, dr4)
    Rsh_Fir_reg_value40_ = Rsh_Fir_reg_value37_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_value41_ = Rsh_Fir_reg_value37_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr4_;
    goto L139_;
  }

L139_:;
  // __6 = ld `..1`
  Rsh_Fir_reg___6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L141() else D39()
  // L141()
  goto L141_;

L140_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L34(value37, l3, value37, dx6)
  // L34(value37, l3, value37, dx6)
  Rsh_Fir_reg_value44_ = Rsh_Fir_reg_value37_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_value45_ = Rsh_Fir_reg_value37_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L34_;

D39_:;
  // deopt 150 [value40, l6, value41, l7, __6]
  SEXP Rsh_Fir_array_deopt_stack35[5];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_value40_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_value41_;
  Rsh_Fir_array_deopt_stack35[3] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack35[4] = Rsh_Fir_reg___6_;
  Rsh_Fir_deopt(150, 5, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L141_:;
  // __7 = force? __6
  Rsh_Fir_reg___7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___6_);
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r62 = dyn __8(l7, __7)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L34(value40, l6, value41, r62)
  // L34(value40, l6, value41, r62)
  Rsh_Fir_reg_value44_ = Rsh_Fir_reg_value40_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_value45_ = Rsh_Fir_reg_value41_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r62_;
  goto L34_;

L142_:;
  // dr6 = tryDispatchBuiltin.0("[<-", dx7, value45)
  SEXP Rsh_Fir_array_args118[3];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args118[2] = Rsh_Fir_reg_value45_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args118);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if dc3 then L144() else L143(value44, l9, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L144()
    goto L144_;
  } else {
  // L143(value44, l9, dr6)
    Rsh_Fir_reg_value47_ = Rsh_Fir_reg_value44_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dr6_;
    goto L143_;
  }

L143_:;
  // __9 = ld `..2`
  Rsh_Fir_reg___9_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L145() else D40()
  // L145()
  goto L145_;

L144_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L35(value44, l9, dx10)
  // L35(value44, l9, dx10)
  Rsh_Fir_reg_value49_ = Rsh_Fir_reg_value44_;
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L35_;

D40_:;
  // deopt 154 [value47, l11, dx9, value45, __9]
  SEXP Rsh_Fir_array_deopt_stack36[5];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_value47_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_value45_;
  Rsh_Fir_array_deopt_stack36[4] = Rsh_Fir_reg___9_;
  Rsh_Fir_deopt(154, 5, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L145_:;
  // __10 = force? __9
  Rsh_Fir_reg___10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___9_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r63 = dyn ___(dx9, value45, __10)
  SEXP Rsh_Fir_array_args121[3];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_value45_;
  Rsh_Fir_array_args121[2] = Rsh_Fir_reg___10_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L35(value47, l11, r63)
  // L35(value47, l11, r63)
  Rsh_Fir_reg_value49_ = Rsh_Fir_reg_value47_;
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r63_;
  goto L35_;

L146_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l13, dx11)
  SEXP Rsh_Fir_array_args122[3];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args122[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args122);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if dc4 then L148() else L147(value49, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L148()
    goto L148_;
  } else {
  // L147(value49, dr8)
    Rsh_Fir_reg_value51_ = Rsh_Fir_reg_value49_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr8_;
    goto L147_;
  }

L147_:;
  // __11 = ld `..1`
  Rsh_Fir_reg___11_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L149() else D41()
  // L149()
  goto L149_;

L148_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L36(value49, dx12)
  // L36(value49, dx12)
  Rsh_Fir_reg_value53_ = Rsh_Fir_reg_value49_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L36_;

D41_:;
  // deopt 157 [value51, l15, dx11, __11]
  SEXP Rsh_Fir_array_deopt_stack37[4];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_value51_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg___11_;
  Rsh_Fir_deopt(157, 4, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L149_:;
  // __12 = force? __11
  Rsh_Fir_reg___12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___11_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r64 = dyn ____1(l15, dx11, __12)
  SEXP Rsh_Fir_array_args125[3];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args125[2] = Rsh_Fir_reg___12_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L36(value51, r64)
  // L36(value51, r64)
  Rsh_Fir_reg_value53_ = Rsh_Fir_reg_value51_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r64_;
  goto L36_;

D42_:;
  // deopt 162 []
  Rsh_Fir_deopt(162, 0, NULL, CCP, RHO);
  return R_NilValue;

L150_:;
  // p1 = prom<V +>{
  //   z = ld z;
  //   z1 = force? z;
  //   checkMissing(z1);
  //   return z1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner709191543_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym15 = ldf oldClass;
  //   base15 = ldf oldClass in base;
  //   guard15 = `==`.4(sym15, base15);
  //   if guard15 then L1() else L2();
  // L0(r67):
  //   return r67;
  // L1():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   oldClass = ldf oldClass in base;
  //   r68 = dyn oldClass(x4);
  //   goto L0(r68);
  // L2():
  //   r66 = dyn base15(<sym x>);
  //   goto L0(r66);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner709191543_2, CCP, RHO);
  // r70 = dyn structure[, class](p1, p2)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L151() else D43()
  // L151()
  goto L151_;

D43_:;
  // deopt 166 [r70]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L151_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r70
  return Rsh_Fir_reg_r70_;
}
SEXP Rsh_Fir_user_promise_inner709191543_(SEXP CCP, SEXP RHO) {
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return value6
  return Rsh_Fir_reg_value6_;
}
SEXP Rsh_Fir_user_promise_inner709191543_1(SEXP CCP, SEXP RHO) {
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // return z1
  return Rsh_Fir_reg_z1_;
}
SEXP Rsh_Fir_user_promise_inner709191543_2(SEXP CCP, SEXP RHO) {
  // sym15 = ldf oldClass
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base15 = ldf oldClass in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args127);
  // if guard15 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r67
  return Rsh_Fir_reg_r67_;

L1_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r68 = dyn oldClass(x4)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r68)
  // L0(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L0_;

L2_:;
  // r66 = dyn base15(<sym x>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r66)
  // L0(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
