#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1857244696_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1857244696_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1857244696_(SEXP CCP, SEXP RHO);
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
  // r = clos inner1857244696
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1857244696_, RHO, CCP);
  // st `.mergeAttrs` = r
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
SEXP Rsh_Fir_user_function_inner1857244696_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1857244696 dynamic dispatch ([value, object, explicit])

  return Rsh_Fir_user_version_inner1857244696_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1857244696_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1857244696 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1857244696/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_explicit;  // explicit
  SEXP Rsh_Fir_reg_explicit_isMissing;  // explicit_isMissing
  SEXP Rsh_Fir_reg_explicit_orDefault;  // explicit_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_attributes;  // attributes
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_explicit1_;  // explicit1
  SEXP Rsh_Fir_reg_explicit2_;  // explicit2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_explicit3_;  // explicit3
  SEXP Rsh_Fir_reg_explicit4_;  // explicit4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_explicit6_;  // explicit6
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_explicit8_;  // explicit8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_explicit13_;  // explicit13
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_explicit14_;  // explicit14
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_explicit15_;  // explicit15
  SEXP Rsh_Fir_reg_explicit16_;  // explicit16
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_attributes1_;  // attributes1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_supplied;  // supplied
  SEXP Rsh_Fir_reg_supplied1_;  // supplied1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_supplied3_;  // supplied3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_valueAttrs;  // valueAttrs
  SEXP Rsh_Fir_reg_valueAttrs1_;  // valueAttrs1
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_valueAttrs3_;  // valueAttrs3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_length__;  // length__
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_valueAttrs4_;  // valueAttrs4
  SEXP Rsh_Fir_reg_valueAttrs5_;  // valueAttrs5
  SEXP Rsh_Fir_reg_length6_;  // length6
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_valueAttrs6_;  // valueAttrs6
  SEXP Rsh_Fir_reg_valueAttrs7_;  // valueAttrs7
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_valueAttrs9_;  // valueAttrs9
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_valueAttrs11_;  // valueAttrs11
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_valueAttrs16_;  // valueAttrs16
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_valueAttrs17_;  // valueAttrs17
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_valueAttrs18_;  // valueAttrs18
  SEXP Rsh_Fir_reg_valueAttrs19_;  // valueAttrs19
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_supplied4_;  // supplied4
  SEXP Rsh_Fir_reg_supplied5_;  // supplied5
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_attributes__;  // attributes__
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_isS4_;  // isS4
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg__asS4_;  // _asS4
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_value9_;  // value9
  SEXP Rsh_Fir_reg_value10_;  // value10

  // Bind parameters
  Rsh_Fir_reg_value = PARAMS[0];
  Rsh_Fir_reg_object = PARAMS[1];
  Rsh_Fir_reg_explicit = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // explicit_isMissing = missing.0(explicit)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_explicit;
  Rsh_Fir_reg_explicit_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if explicit_isMissing then L0(NULL) else L0(explicit)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_explicit_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_explicit_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(explicit)
    Rsh_Fir_reg_explicit_orDefault = Rsh_Fir_reg_explicit;
    goto L0_;
  }

L0_:;
  // st explicit = explicit_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_explicit_orDefault, RHO);
  (void)(Rsh_Fir_reg_explicit_orDefault);
  // sym = ldf attributes
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf attributes in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L1_:;
  // st supplied = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L2_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L33() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L33()
    goto L33_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L6()
  // L6()
  goto L6_;

L4_:;
  // st supplied = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L6()
  // L6()
  goto L6_;

L5_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r9 = dyn ___(l5, explicit14, r7)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_explicit14_;
  Rsh_Fir_array_args4[2] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(explicit13, r9)
  // L4(explicit13, r9)
  Rsh_Fir_reg_explicit8_ = Rsh_Fir_reg_explicit13_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L4_;

L6_:;
  // sym3 = ldf attributes
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf attributes in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard3 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L7_:;
  // st valueAttrs = r11
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard4 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L8_:;
  // c3 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c3 then L55() else L9(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L55()
    goto L55_;
  } else {
  // L9(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L9_;
  }

L9_:;
  // c17 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c17 then L65() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L65()
    goto L65_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // r21 = `==`(r18, 0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c15 = `&&`(c8, c14)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L9(c15)
  // L9(c15)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c15_;
  goto L9_;

L11_:;
  // goto L17()
  // L17()
  goto L17_;

L12_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard7 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L13_:;
  // r31 = `!=`(r28, r29)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c18 then L74() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L74()
    goto L74_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L16(NULL)
  // L16(NULL)
  Rsh_Fir_reg_r50_ = Rsh_const(CCP, 3);
  goto L16_;

L15_:;
  // l6 = ld supplied
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c19 = `is.object`(l6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c19 then L80() else L81(r33, l6, r33, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L80()
    goto L80_;
  } else {
  // L81(r33, l6, r33, l6)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r33_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r33_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l6_;
    goto L81_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard9 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L18_:;
  // c21 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c21 then L95() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L95()
    goto L95_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // goto L22()
  // L22()
  goto L22_;

L20_:;
  // st supplied = dx13
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L22()
  // L22()
  goto L22_;

L21_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r63 = dyn ___1(l23, valueAttrs17, r61)
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_valueAttrs17_;
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L20(valueAttrs16, r63)
  // L20(valueAttrs16, r63)
  Rsh_Fir_reg_valueAttrs11_ = Rsh_Fir_reg_valueAttrs16_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r63_;
  goto L20_;

L22_:;
  // supplied4 = ld supplied
  Rsh_Fir_reg_supplied4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L109() else D26()
  // L109()
  goto L109_;

L23_:;
  // c24 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c24 then L116() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L116()
    goto L116_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // value9 = ld value
  Rsh_Fir_reg_value9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L120() else D33()
  // L120()
  goto L120_;

L25_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L27() else D0()
  // L27()
  goto L27_;

L26_:;
  // r = dyn base(<sym object>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
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

L27_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn attributes(object2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L29_:;
  // explicit1 = ld explicit
  Rsh_Fir_reg_explicit1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L31() else D2()
  // L31()
  goto L31_;

L30_:;
  // r3 = dyn base1(<sym explicit>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 9 [explicit1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_explicit1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // explicit2 = force? explicit1
  Rsh_Fir_reg_explicit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_explicit1_);
  // checkMissing(explicit2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_explicit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r5 = dyn length(explicit2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_explicit2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L32() else D3()
  // L32()
  goto L32_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

L33_:;
  // explicit3 = ld explicit
  Rsh_Fir_reg_explicit3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

D4_:;
  // deopt 13 [explicit3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_explicit3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L34_:;
  // explicit4 = force? explicit3
  Rsh_Fir_reg_explicit4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_explicit3_);
  // checkMissing(explicit4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_explicit4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // l = ld supplied
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c1 then L35() else L36(explicit4, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L36(explicit4, l)
    Rsh_Fir_reg_explicit6_ = Rsh_Fir_reg_explicit4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L36_;
  }

L35_:;
  // dr = tryDispatchBuiltin.0("[<-", l, explicit4)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_explicit4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args28);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc then L37() else L36(explicit4, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L37()
    goto L37_;
  } else {
  // L36(explicit4, dr)
    Rsh_Fir_reg_explicit6_ = Rsh_Fir_reg_explicit4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L36_;
  }

L36_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L37_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L4(explicit4, dx)
  // L4(explicit4, dx)
  Rsh_Fir_reg_explicit8_ = Rsh_Fir_reg_explicit4_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

L38_:;
  // explicit15 = ld explicit
  Rsh_Fir_reg_explicit15_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L40() else D5()
  // L40()
  goto L40_;

L39_:;
  // r6 = dyn base2(<sym explicit>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(explicit6, l2, explicit4, r6)
  // L5(explicit6, l2, explicit4, r6)
  Rsh_Fir_reg_explicit13_ = Rsh_Fir_reg_explicit6_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_explicit14_ = Rsh_Fir_reg_explicit4_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L5_;

D5_:;
  // deopt 18 [explicit6, l2, explicit4, explicit15]
  SEXP Rsh_Fir_array_deopt_stack5[4];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_explicit6_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_explicit4_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_explicit15_;
  Rsh_Fir_deopt(18, 4, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L40_:;
  // explicit16 = force? explicit15
  Rsh_Fir_reg_explicit16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_explicit15_);
  // checkMissing(explicit16)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_explicit16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r8 = dyn names(explicit16)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_explicit16_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

D6_:;
  // deopt 21 [explicit6, l2, explicit4, r8]
  SEXP Rsh_Fir_array_deopt_stack6[4];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_explicit6_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_explicit4_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(21, 4, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L5(explicit6, l2, explicit4, r8)
  // L5(explicit6, l2, explicit4, r8)
  Rsh_Fir_reg_explicit13_ = Rsh_Fir_reg_explicit6_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_explicit14_ = Rsh_Fir_reg_explicit4_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L5_;

L43_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D7()
  // L45()
  goto L45_;

L44_:;
  // r10 = dyn base3(<sym value>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L7_;

D7_:;
  // deopt 28 [value1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L45_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // attributes1 = ldf attributes in base
  Rsh_Fir_reg_attributes1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r12 = dyn attributes1(value2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L46() else D8()
  // L46()
  goto L46_;

D8_:;
  // deopt 31 [r12]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L7_;

L47_:;
  // supplied = ld supplied
  Rsh_Fir_reg_supplied = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

L48_:;
  // r13 = dyn base4(<lang `$`(supplied, names)>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D9_:;
  // deopt 35 [supplied]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_supplied;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // supplied1 = force? supplied
  Rsh_Fir_reg_supplied1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_supplied);
  // checkMissing(supplied1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_supplied1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(supplied1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_supplied1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c2 then L51() else L52(supplied1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L51()
    goto L51_;
  } else {
  // L52(supplied1)
    Rsh_Fir_reg_supplied3_ = Rsh_Fir_reg_supplied1_;
    goto L52_;
  }

L50_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r16 = dyn length1(dx3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L54() else D10()
  // L54()
  goto L54_;

L51_:;
  // dr2 = tryDispatchBuiltin.1("$", supplied1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_supplied1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc1 then L53() else L52(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr2)
    Rsh_Fir_reg_supplied3_ = Rsh_Fir_reg_dr2_;
    goto L52_;
  }

L52_:;
  // r15 = `$`(supplied3, <sym names>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_supplied3_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L50(r15)
  // L50(r15)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L50_;

L53_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L50(dx2)
  // L50(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L50_;

D10_:;
  // deopt 39 [r16]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r16_;
  goto L8_;

L55_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard5 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // valueAttrs = ld valueAttrs
  Rsh_Fir_reg_valueAttrs = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L58() else D11()
  // L58()
  goto L58_;

L57_:;
  // r17 = dyn base5(<lang `$`(valueAttrs, names)>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(c3, r17)
  // L10(c3, r17)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L10_;

D11_:;
  // deopt 42 [c3, valueAttrs]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_valueAttrs;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L58_:;
  // valueAttrs1 = force? valueAttrs
  Rsh_Fir_reg_valueAttrs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valueAttrs);
  // checkMissing(valueAttrs1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_valueAttrs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(valueAttrs1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_valueAttrs1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c9 then L60() else L61(c3, valueAttrs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L60()
    goto L60_;
  } else {
  // L61(c3, valueAttrs1)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_valueAttrs3_ = Rsh_Fir_reg_valueAttrs1_;
    goto L61_;
  }

L59_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r20 = dyn length2(dx5)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L63() else D12()
  // L63()
  goto L63_;

L60_:;
  // dr4 = tryDispatchBuiltin.1("$", valueAttrs1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_valueAttrs1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc2 then L62() else L61(c3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L62()
    goto L62_;
  } else {
  // L61(c3, dr4)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_valueAttrs3_ = Rsh_Fir_reg_dr4_;
    goto L61_;
  }

L61_:;
  // r19 = `$`(valueAttrs3, <sym names>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_valueAttrs3_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L59(c11, r19)
  // L59(c11, r19)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r19_;
  goto L59_;

L62_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L59(c3, dx4)
  // L59(c3, dx4)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L59_;

D12_:;
  // deopt 46 [c13, r20]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L10(c13, r20)
  // L10(c13, r20)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r20_;
  goto L10_;

L65_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard6 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L66_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L68() else D13()
  // L68()
  goto L68_;

L67_:;
  // r22 = dyn base6(<sym value>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(r22)
  // L12(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L12_;

D13_:;
  // deopt 52 [value3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L68_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r24 = dyn length3(value4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L69() else D14()
  // L69()
  goto L69_;

D14_:;
  // deopt 55 [r24]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L12(r24)
  // L12(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L12_;

L70_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L72() else D15()
  // L72()
  goto L72_;

L71_:;
  // r27 = dyn base7(<sym object>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r23, r27)
  // L13(r23, r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r27_;
  goto L13_;

D15_:;
  // deopt 57 [r23, object3]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L72_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r30 = dyn length4(object4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_object4_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L73() else D16()
  // L73()
  goto L73_;

D16_:;
  // deopt 60 [r23, r30]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L13(r23, r30)
  // L13(r23, r30)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L13_;

L74_:;
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard8 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L75_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L77() else D17()
  // L77()
  goto L77_;

L76_:;
  // r32 = dyn base8(<sym value>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L15_;

D17_:;
  // deopt 64 [value5]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_value5_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L77_:;
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r34 = dyn length5(value6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L78() else D18()
  // L78()
  goto L78_;

D18_:;
  // deopt 67 [r34]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L15_;

L79_:;
  // length__ = ldf `length<-`
  Rsh_Fir_reg_length__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L83() else D19()
  // L83()
  goto L83_;

L80_:;
  // dr6 = tryDispatchBuiltin.1("$", l6)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc3 then L82() else L81(r33, l6, r33, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L82()
    goto L82_;
  } else {
  // L81(r33, l6, r33, dr6)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r33_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r33_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr6_;
    goto L81_;
  }

L81_:;
  // r43 = `$`(l10, <sym names>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L79(r37, l9, r38, r43)
  // L79(r37, l9, r38, r43)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r43_;
  goto L79_;

L82_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L79(r33, l6, r33, dx6)
  // L79(r33, l6, r33, dx6)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L79_;

D19_:;
  // deopt 72 [r41, l12, dx7, r42]
  SEXP Rsh_Fir_array_deopt_stack19[4];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(72, 4, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L83_:;
  // r44 = dyn length__(dx7, NULL, r42)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length__, 3, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L84() else D20()
  // L84()
  goto L84_;

D20_:;
  // deopt 74 [r41, l12, r44]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L84_:;
  // c20 = `is.object`(l12)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c20 then L86() else L87(r41, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L86()
    goto L86_;
  } else {
  // L87(r41, l12)
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r41_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L87_;
  }

L85_:;
  // st supplied = dx9
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L16(r48)
  // L16(r48)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
  goto L16_;

L86_:;
  // dr8 = tryDispatchBuiltin.0("$<-", l12, r44)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args72);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc4 then L88() else L87(r41, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L88()
    goto L88_;
  } else {
  // L87(r41, dr8)
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r41_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr8_;
    goto L87_;
  }

L87_:;
  // r49 = `$<-`(l14, <sym names>, r44)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args74[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L85(r46, r49)
  // L85(r46, r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r49_;
  goto L85_;

L88_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L85(r41, dx8)
  // L85(r41, dx8)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L85_;

L91_:;
  // valueAttrs4 = ld valueAttrs
  Rsh_Fir_reg_valueAttrs4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L93() else D21()
  // L93()
  goto L93_;

L92_:;
  // r52 = dyn base9(<sym valueAttrs>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L18(r52)
  // L18(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L18_;

D21_:;
  // deopt 83 [valueAttrs4]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_valueAttrs4_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L93_:;
  // valueAttrs5 = force? valueAttrs4
  Rsh_Fir_reg_valueAttrs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valueAttrs4_);
  // checkMissing(valueAttrs5)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_valueAttrs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r54 = dyn length6(valueAttrs5)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_valueAttrs5_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L94() else D22()
  // L94()
  goto L94_;

D22_:;
  // deopt 86 [r54]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L18(r54)
  // L18(r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L18_;

L95_:;
  // l15 = ld valueAttrs
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c22 = `is.object`(l15)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c22 then L97() else L98(NULL, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L97()
    goto L97_;
  } else {
  // L98(NULL, l15)
    Rsh_Fir_reg_r56_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L98_;
  }

L96_:;
  // st valueAttrs = dx11
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // valueAttrs6 = ld valueAttrs
  Rsh_Fir_reg_valueAttrs6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L100() else D23()
  // L100()
  goto L100_;

L97_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l15, NULL)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args80);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc5 then L99() else L98(NULL, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L99()
    goto L99_;
  } else {
  // L98(NULL, dr10)
    Rsh_Fir_reg_r56_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr10_;
    goto L98_;
  }

L98_:;
  // r59 = `$<-`(l17, <sym class>, NULL)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L96(r59)
  // L96(r59)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r59_;
  goto L96_;

L99_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L96(dx10)
  // L96(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L96_;

D23_:;
  // deopt 92 [valueAttrs6]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_valueAttrs6_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L100_:;
  // valueAttrs7 = force? valueAttrs6
  Rsh_Fir_reg_valueAttrs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valueAttrs6_);
  // checkMissing(valueAttrs7)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_valueAttrs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // l18 = ld supplied
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c23 = `is.object`(l18)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c23 then L101() else L102(valueAttrs7, l18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L101()
    goto L101_;
  } else {
  // L102(valueAttrs7, l18)
    Rsh_Fir_reg_valueAttrs9_ = Rsh_Fir_reg_valueAttrs7_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    goto L102_;
  }

L101_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l18, valueAttrs7)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_valueAttrs7_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args86);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc6 then L103() else L102(valueAttrs7, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L103()
    goto L103_;
  } else {
  // L102(valueAttrs7, dr12)
    Rsh_Fir_reg_valueAttrs9_ = Rsh_Fir_reg_valueAttrs7_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_dr12_;
    goto L102_;
  }

L102_:;
  // sym10 = ldf names
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base10 = ldf names in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard10 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L103_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L20(valueAttrs7, dx12)
  // L20(valueAttrs7, dx12)
  Rsh_Fir_reg_valueAttrs11_ = Rsh_Fir_reg_valueAttrs7_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L20_;

L104_:;
  // valueAttrs18 = ld valueAttrs
  Rsh_Fir_reg_valueAttrs18_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L106() else D24()
  // L106()
  goto L106_;

L105_:;
  // r60 = dyn base10(<sym valueAttrs>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(valueAttrs9, l20, valueAttrs7, r60)
  // L21(valueAttrs9, l20, valueAttrs7, r60)
  Rsh_Fir_reg_valueAttrs16_ = Rsh_Fir_reg_valueAttrs9_;
  Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_valueAttrs17_ = Rsh_Fir_reg_valueAttrs7_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L21_;

D24_:;
  // deopt 97 [valueAttrs9, l20, valueAttrs7, valueAttrs18]
  SEXP Rsh_Fir_array_deopt_stack24[4];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_valueAttrs9_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_valueAttrs7_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_valueAttrs18_;
  Rsh_Fir_deopt(97, 4, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L106_:;
  // valueAttrs19 = force? valueAttrs18
  Rsh_Fir_reg_valueAttrs19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valueAttrs18_);
  // checkMissing(valueAttrs19)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_valueAttrs19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r62 = dyn names1(valueAttrs19)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_valueAttrs19_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L107() else D25()
  // L107()
  goto L107_;

D25_:;
  // deopt 100 [valueAttrs9, l20, valueAttrs7, r62]
  SEXP Rsh_Fir_array_deopt_stack25[4];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_valueAttrs9_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_valueAttrs7_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(100, 4, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L107_:;
  // goto L21(valueAttrs9, l20, valueAttrs7, r62)
  // L21(valueAttrs9, l20, valueAttrs7, r62)
  Rsh_Fir_reg_valueAttrs16_ = Rsh_Fir_reg_valueAttrs9_;
  Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_valueAttrs17_ = Rsh_Fir_reg_valueAttrs7_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L21_;

D26_:;
  // deopt 105 [supplied4]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_supplied4_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L109_:;
  // supplied5 = force? supplied4
  Rsh_Fir_reg_supplied5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_supplied4_);
  // checkMissing(supplied5)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_supplied5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // l24 = ld value
  Rsh_Fir_reg_l24_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attributes__ = ldf `attributes<-`
  Rsh_Fir_reg_attributes__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L110() else D27()
  // L110()
  goto L110_;

D27_:;
  // deopt 108 [supplied5, l24, supplied5]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_supplied5_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_supplied5_;
  Rsh_Fir_deopt(108, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L110_:;
  // r64 = dyn attributes__(l24, NULL, supplied5)
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args94[2] = Rsh_Fir_reg_supplied5_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes__, 3, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L111() else D28()
  // L111()
  goto L111_;

D28_:;
  // deopt 110 [supplied5, r64]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_supplied5_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L111_:;
  // st value = r64
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // sym11 = ldf isS4
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base11 = ldf isS4 in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args95);
  // if guard11 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L112_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L114() else D29()
  // L114()
  goto L114_;

L113_:;
  // r65 = dyn base11(<sym object>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L23(r65)
  // L23(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L23_;

D29_:;
  // deopt 114 [object5]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L114_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // isS4 = ldf isS4 in base
  Rsh_Fir_reg_isS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r67 = dyn isS4(object6)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_object6_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isS4_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L115() else D30()
  // L115()
  goto L115_;

D30_:;
  // deopt 117 [r67]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L115_:;
  // goto L23(r67)
  // L23(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L23_;

L116_:;
  // _asS4 = ldf `.asS4`
  Rsh_Fir_reg__asS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L117() else D31()
  // L117()
  goto L117_;

D31_:;
  // deopt 119 []
  Rsh_Fir_deopt(119, 0, NULL, CCP, RHO);
  return R_NilValue;

L117_:;
  // p = prom<V +>{
  //   value7 = ld value;
  //   value8 = force? value7;
  //   checkMissing(value8);
  //   return value8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1857244696_, CCP, RHO);
  // r69 = dyn _asS4(p)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__asS4_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L118() else D32()
  // L118()
  goto L118_;

D32_:;
  // deopt 121 [r69]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L118_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r69
  return Rsh_Fir_reg_r69_;

D33_:;
  // deopt 122 [value9]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_value9_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L120_:;
  // value10 = force? value9
  Rsh_Fir_reg_value10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value9_);
  // checkMissing(value10)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_value10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value10
  return Rsh_Fir_reg_value10_;
}
SEXP Rsh_Fir_user_promise_inner1857244696_(SEXP CCP, SEXP RHO) {
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // return value8
  return Rsh_Fir_reg_value8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
