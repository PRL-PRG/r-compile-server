#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner64320599
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner64320599_, RHO, CCP);
  // st `labels.default` = r
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
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner64320599 dynamic dispatch ([object, `...`])

  return Rsh_Fir_user_version_inner64320599_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner64320599 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner64320599/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_nt;  // nt
  SEXP Rsh_Fir_reg_nt1_;  // nt1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_vector;  // vector
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_d2_;  // d2
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_nt2_;  // nt2
  SEXP Rsh_Fir_reg_nt3_;  // nt3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_nt5_;  // nt5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_d4_;  // d4
  SEXP Rsh_Fir_reg_d5_;  // d5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_d7_;  // d7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_nt6_;  // nt6
  SEXP Rsh_Fir_reg_nt7_;  // nt7
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_as_character1_;  // as_character1
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_nt8_;  // nt8
  SEXP Rsh_Fir_reg_nt9_;  // nt9

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L33() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L33()
    goto L33_;
  } else {
  // L2()
    goto L2_;
  }

L1_:;
  // st d = r3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r5 = dyn length(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

L2_:;
  // sym10 = ldf names
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base10 = ldf names in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard10 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L3_:;
  // st nt = r7
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L4_:;
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c2 then L41() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L41()
    goto L41_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L8()
  // L8()
  goto L8_;

L6_:;
  // st nt = r12
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L8()
  // L8()
  goto L8_;

L7_:;
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r16 = dyn vector("list", r14)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L48() else D8()
  // L48()
  goto L48_;

L8_:;
  // sym6 = ldf seq_along
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base6 = ldf seq_along in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard6 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L9_:;
  // s = toForSeq(r19)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 11);
  // goto L10(i)
  // L10(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L10_;

L10_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // c3 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if c3 then L53() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L53()
    goto L53_;
  } else {
  // L19()
    goto L19_;
  }

L11_:;
  // r25 = `!`(r22)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c5 then L62() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L62()
    goto L62_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r24 = dyn length2(dx1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L61() else D12()
  // L61()
  goto L61_;

L13_:;
  // goto L18(i7)
  // L18(i7)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i7_;
  goto L18_;

L14_:;
  // l1 = ld nt
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c7 = `is.object`(l1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c7 then L73() else L74(i18, r27, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L73()
    goto L73_;
  } else {
  // L74(i18, r27, l1)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L74_;
  }

L15_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r32 = dyn as_character(r29)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L72() else D15()
  // L72()
  goto L72_;

L16_:;
  // r31 = seq_len(dx3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L15(i25, r31)
  // L15(i25, r31)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r31_;
  goto L15_;

L17_:;
  // st nt = dx5
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L18(i31)
  // L18(i31)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i31_;
  goto L18_;

L18_:;
  // goto L10(i34)
  // L10(i34)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i34_;
  goto L10_;

L19_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard7 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L20_:;
  // nt8 = ld nt
  Rsh_Fir_reg_nt8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L95() else D23()
  // L95()
  goto L95_;

L21_:;
  // st nt = r40
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym11 = ldf length
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base11 = ldf length in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard11 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L22_:;
  // r45 = `!`(r43)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c8 then L87() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L87()
    goto L87_;
  } else {
  // L23()
    goto L23_;
  }

L23_:;
  // goto L20()
  // L20()
  goto L20_;

L24_:;
  // st nt = r47
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // goto L20()
  // L20()
  goto L20_;

L25_:;
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r51 = dyn as_character1(r49)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L93() else D22()
  // L93()
  goto L93_;

L26_:;
  // sym1 = ldf dim
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf dim in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard1 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L27_:;
  // r = dyn base(<lang `<-`(d, dim(object))>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L28_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L29_:;
  // r2 = dyn base1(<sym object>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 4 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L30_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r4 = dyn dim(object2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L33_:;
  // sym2 = ldf dimnames
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf dimnames in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

L35_:;
  // r6 = dyn base2(<sym object>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D3_:;
  // deopt 13 [object3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L36_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r8 = dyn dimnames(object4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_object4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

D4_:;
  // deopt 16 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;

L38_:;
  // nt = ld nt
  Rsh_Fir_reg_nt = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L40() else D5()
  // L40()
  goto L40_;

L39_:;
  // r9 = dyn base3(<sym nt>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D5_:;
  // deopt 19 [nt]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_nt;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L40_:;
  // nt1 = force? nt
  Rsh_Fir_reg_nt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt);
  // checkMissing(nt1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_nt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c1 = `==`(nt1, NULL)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_nt1_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L4(c1)
  // L4(c1)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c1_;
  goto L4_;

L41_:;
  // sym4 = ldf vector
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf vector in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard4 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard5 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L43_:;
  // r11 = dyn base4("list", <lang length(d)>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;

L44_:;
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L46() else D6()
  // L46()
  goto L46_;

L45_:;
  // r13 = dyn base5(<sym d>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D6_:;
  // deopt 27 [d]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L46_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r15 = dyn length1(d1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L47() else D7()
  // L47()
  goto L47_;

D7_:;
  // deopt 30 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

D8_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r16_;
  goto L6_;

L50_:;
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L52() else D9()
  // L52()
  goto L52_;

L51_:;
  // r18 = dyn base6(<sym d>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D9_:;
  // deopt 37 [d2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_d2_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L52_:;
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r20 = seq_along(d3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L9(r20)
  // L9(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L9_;

L53_:;
  // goto L20()
  // L20()
  goto L20_;

L54_:;
  // nt2 = ld nt
  Rsh_Fir_reg_nt2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L56() else D10()
  // L56()
  goto L56_;

L55_:;
  // r21 = dyn base7(<lang `[[`(nt, i)>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(i2, r21)
  // L11(i2, r21)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L11_;

D10_:;
  // deopt 42 [i2, nt2]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_nt2_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L56_:;
  // nt3 = force? nt2
  Rsh_Fir_reg_nt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt2_);
  // checkMissing(nt3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_nt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(nt3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_nt3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c4 then L57() else L58(i2, nt3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L57()
    goto L57_;
  } else {
  // L58(i2, nt3)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_nt5_ = Rsh_Fir_reg_nt3_;
    goto L58_;
  }

L57_:;
  // dr = tryDispatchBuiltin.1("[[", nt3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_nt3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc then L59() else L58(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L59()
    goto L59_;
  } else {
  // L58(i2, dr)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_nt5_ = Rsh_Fir_reg_dr;
    goto L58_;
  }

L58_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L60() else D11()
  // L60()
  goto L60_;

L59_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L12(i2, dx)
  // L12(i2, dx)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L12_;

D11_:;
  // deopt 44 [i9, nt5, i12]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_nt5_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(44, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L60_:;
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r23 = dyn __(nt5, i13)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_nt5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(i9, r23)
  // L12(i9, r23)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r23_;
  goto L12_;

D12_:;
  // deopt 48 [i11, r24]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L11(i11, r24)
  // L11(i11, r24)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r24_;
  goto L11_;

L62_:;
  // sym8 = ldf `as.character`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base8 = ldf `as.character` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard8 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // sym9 = ldf seq_len
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base9 = ldf seq_len in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard9 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L64_:;
  // r26 = dyn base8(<lang seq_len(`[`(d, i))>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(i7, r26)
  // L14(i7, r26)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L14_;

L65_:;
  // d4 = ld d
  Rsh_Fir_reg_d4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L67() else D13()
  // L67()
  goto L67_;

L66_:;
  // r28 = dyn base9(<lang `[`(d, i)>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(i7, r28)
  // L15(i7, r28)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L15_;

D13_:;
  // deopt 53 [i7, d4]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_d4_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L67_:;
  // d5 = force? d4
  Rsh_Fir_reg_d5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_d5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(d5)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c6 then L68() else L69(i7, d5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L68()
    goto L68_;
  } else {
  // L69(i7, d5)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_d5_;
    goto L69_;
  }

L68_:;
  // dr2 = tryDispatchBuiltin.1("[", d5)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc1 then L70() else L69(i7, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L70()
    goto L70_;
  } else {
  // L69(i7, dr2)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_dr2_;
    goto L69_;
  }

L69_:;
  // i26 = ld i
  Rsh_Fir_reg_i26_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L71() else D14()
  // L71()
  goto L71_;

L70_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L16(i7, dx2)
  // L16(i7, dx2)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L16_;

D14_:;
  // deopt 55 [i23, d7, i26]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_i26_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L71_:;
  // i27 = force? i26
  Rsh_Fir_reg_i27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i26_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r30 = dyn __1(d7, i27)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L16(i23, r30)
  // L16(i23, r30)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r30_;
  goto L16_;

D15_:;
  // deopt 60 [i21, r32]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L14(i21, r32)
  // L14(i21, r32)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r32_;
  goto L14_;

L73_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l1, r27)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args62[2] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args62);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc2 then L75() else L74(i18, r27, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L75()
    goto L75_;
  } else {
  // L74(i18, r27, dr4)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr4_;
    goto L74_;
  }

L74_:;
  // i32 = ld i
  Rsh_Fir_reg_i32_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L76() else D16()
  // L76()
  goto L76_;

L75_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L17(i18, r27, dx4)
  // L17(i18, r27, dx4)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L17_;

D16_:;
  // deopt 62 [i29, r34, l3, r27, i32]
  SEXP Rsh_Fir_array_deopt_stack16[5];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack16[4] = Rsh_Fir_reg_i32_;
  Rsh_Fir_deopt(62, 5, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L76_:;
  // i33 = force? i32
  Rsh_Fir_reg_i33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i32_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r37 = dyn ____(l3, r27, i33)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_i33_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L17(i29, r34, r37)
  // L17(i29, r34, r37)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r37_;
  goto L17_;

L79_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L81() else D17()
  // L81()
  goto L81_;

L80_:;
  // r39 = dyn base10(<sym object>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L21(r39)
  // L21(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L21_;

D17_:;
  // deopt 73 [object5]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L81_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r41 = dyn names(object6)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_object6_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L82() else D18()
  // L82()
  goto L82_;

D18_:;
  // deopt 76 [r41]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L21(r41)
  // L21(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L21_;

L83_:;
  // nt6 = ld nt
  Rsh_Fir_reg_nt6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L85() else D19()
  // L85()
  goto L85_;

L84_:;
  // r42 = dyn base11(<sym nt>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L22(r42)
  // L22(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L22_;

D19_:;
  // deopt 80 [nt6]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_nt6_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L85_:;
  // nt7 = force? nt6
  Rsh_Fir_reg_nt7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt6_);
  // checkMissing(nt7)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_nt7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r44 = dyn length3(nt7)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_nt7_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L86() else D20()
  // L86()
  goto L86_;

D20_:;
  // deopt 83 [r44]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L22(r44)
  // L22(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L22_;

L87_:;
  // sym12 = ldf `as.character`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base12 = ldf `as.character` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard12 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L88_:;
  // sym13 = ldf seq_along
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base13 = ldf seq_along in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard13 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L89_:;
  // r46 = dyn base12(<lang seq_along(object)>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L24(r46)
  // L24(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L24_;

L90_:;
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L92() else D21()
  // L92()
  goto L92_;

L91_:;
  // r48 = dyn base13(<sym object>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L25(r48)
  // L25(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L25_;

D21_:;
  // deopt 88 [object7]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_object7_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L92_:;
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // r50 = seq_along(object8)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L25(r50)
  // L25(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L25_;

D22_:;
  // deopt 92 [r51]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L24(r51)
  // L24(r51)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r51_;
  goto L24_;

D23_:;
  // deopt 96 [nt8]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_nt8_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L95_:;
  // nt9 = force? nt8
  Rsh_Fir_reg_nt9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt8_);
  // checkMissing(nt9)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_nt9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return nt9
  return Rsh_Fir_reg_nt9_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
