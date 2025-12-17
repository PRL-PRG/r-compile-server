#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2529758135_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2529758135_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2529758135
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2529758135_, RHO, CCP);
  // st `.newDirectSuperclass<-` = r
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
SEXP Rsh_Fir_user_function_inner2529758135_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2529758135 dynamic dispatch ([contains, class2, superclasses2, value])

  return Rsh_Fir_user_version_inner2529758135_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2529758135_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2529758135 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2529758135/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_contains;  // contains
  SEXP Rsh_Fir_reg_class2_;  // class2
  SEXP Rsh_Fir_reg_superclasses2_;  // superclasses2
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_contains1_;  // contains1
  SEXP Rsh_Fir_reg_contains2_;  // contains2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_superclasses3_;  // superclasses3
  SEXP Rsh_Fir_reg_superclasses4_;  // superclasses4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_superclasses5_;  // superclasses5
  SEXP Rsh_Fir_reg_superclasses6_;  // superclasses6
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_superclasses7_;  // superclasses7
  SEXP Rsh_Fir_reg_superclasses8_;  // superclasses8
  SEXP Rsh_Fir_reg_superclasses9_;  // superclasses9
  SEXP Rsh_Fir_reg_superclasses10_;  // superclasses10
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_class3_;  // class3
  SEXP Rsh_Fir_reg_class4_;  // class4
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_superclasses11_;  // superclasses11
  SEXP Rsh_Fir_reg_superclasses12_;  // superclasses12
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sq;  // sq
  SEXP Rsh_Fir_reg_sq1_;  // sq1
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_sq3_;  // sq3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sq6_;  // sq6
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_superclasses13_;  // superclasses13
  SEXP Rsh_Fir_reg_superclasses14_;  // superclasses14
  SEXP Rsh_Fir_reg_superclasses15_;  // superclasses15
  SEXP Rsh_Fir_reg_superclasses16_;  // superclasses16
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_contains3_;  // contains3
  SEXP Rsh_Fir_reg_contains4_;  // contains4
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_contains6_;  // contains6
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_sq7_;  // sq7
  SEXP Rsh_Fir_reg_sq8_;  // sq8
  SEXP Rsh_Fir_reg_before;  // before
  SEXP Rsh_Fir_reg_before1_;  // before1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_value9_;  // value9
  SEXP Rsh_Fir_reg_contains7_;  // contains7
  SEXP Rsh_Fir_reg_contains8_;  // contains8
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_contains10_;  // contains10
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_sq9_;  // sq9
  SEXP Rsh_Fir_reg_sq10_;  // sq10
  SEXP Rsh_Fir_reg_before2_;  // before2
  SEXP Rsh_Fir_reg_before3_;  // before3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_superclasses17_;  // superclasses17
  SEXP Rsh_Fir_reg_superclasses18_;  // superclasses18
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_superclasses20_;  // superclasses20
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_sq11_;  // sq11
  SEXP Rsh_Fir_reg_sq12_;  // sq12
  SEXP Rsh_Fir_reg_before4_;  // before4
  SEXP Rsh_Fir_reg_before5_;  // before5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_class5_;  // class5
  SEXP Rsh_Fir_reg_class6_;  // class6
  SEXP Rsh_Fir_reg_superclasses21_;  // superclasses21
  SEXP Rsh_Fir_reg_superclasses22_;  // superclasses22
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_superclasses24_;  // superclasses24
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_sq13_;  // sq13
  SEXP Rsh_Fir_reg_sq14_;  // sq14
  SEXP Rsh_Fir_reg_before6_;  // before6
  SEXP Rsh_Fir_reg_before7_;  // before7
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_superclasses25_;  // superclasses25
  SEXP Rsh_Fir_reg_superclasses26_;  // superclasses26
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_contains11_;  // contains11
  SEXP Rsh_Fir_reg_contains12_;  // contains12

  // Bind parameters
  Rsh_Fir_reg_contains = PARAMS[0];
  Rsh_Fir_reg_class2_ = PARAMS[1];
  Rsh_Fir_reg_superclasses2_ = PARAMS[2];
  Rsh_Fir_reg_value = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st contains = contains
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_contains, RHO);
  (void)(Rsh_Fir_reg_contains);
  // st class2 = class2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_class2_, RHO);
  (void)(Rsh_Fir_reg_class2_);
  // st superclasses2 = superclasses2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_superclasses2_, RHO);
  (void)(Rsh_Fir_reg_superclasses2_);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L0_:;
  // st superclasses = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L1_:;
  // r6 = `==`(r4, 0.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L2(c) else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L2_;
  } else {
  // L29()
    goto L29_;
  }

L2_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c9 then L4(c9) else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L4(c9)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c9_;
    goto L4_;
  } else {
  // L35()
    goto L35_;
  }

L3_:;
  // r10 = `==`(r8, 0.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L2(c7)
  // L2(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L2_;

L4_:;
  // c24 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c24 then L48() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L48()
    goto L48_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // c21 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c22 = `||`(c14, c21)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L4(c22)
  // L4(c22)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c22_;
  goto L4_;

L6_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r19 = dyn all(r14)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

L7_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r18 = dyn is_na(r16)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L45() else D9()
  // L45()
  goto L45_;

L8_:;
  // sym6 = ldf seq_along
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf seq_along in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard6 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L9_:;
  // st contains = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // contains11 = ld contains
  Rsh_Fir_reg_contains11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L105() else D37()
  // L105()
  goto L105_;

L11_:;
  // st sq = r22
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sq = ld sq
  Rsh_Fir_reg_sq = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

L12_:;
  // c27 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c27 then L67() else L68(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L67()
    goto L67_;
  } else {
  // L68(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L68_;
  }

L13_:;
  // r27 = `>`(r25, 0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r28 = dyn __(sq6, r27)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sq6_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r28_;
  goto L12_;

L14_:;
  // st before = dx7
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard8 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L15_:;
  // st contains = r31
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard9 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L16_:;
  // value8 = ld value
  Rsh_Fir_reg_value8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L78() else D21()
  // L78()
  goto L78_;

L17_:;
  // c30 = ldf c in base
  Rsh_Fir_reg_c30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r36 = dyn c30(dx9, value9, dx11)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_value9_;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c30_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L85() else D25()
  // L85()
  goto L85_;

L18_:;
  // st superclasses = r38
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // superclasses25 = ld superclasses
  Rsh_Fir_reg_superclasses25_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L102() else D34()
  // L102()
  goto L102_;

L19_:;
  // class5 = ld class2
  Rsh_Fir_reg_class5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L94() else D29()
  // L94()
  goto L94_;

L20_:;
  // c33 = ldf c in base
  Rsh_Fir_reg_c33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r43 = dyn c33(dx13, class6, dx15)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_class6_;
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c33_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L101() else D33()
  // L101()
  goto L101_;

L21_:;
  // contains1 = ld contains
  Rsh_Fir_reg_contains1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r = dyn base(<sym contains>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [contains1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_contains1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L23_:;
  // contains2 = force? contains1
  Rsh_Fir_reg_contains2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contains1_);
  // checkMissing(contains2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_contains2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn names(contains2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_contains2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L25_:;
  // superclasses3 = ld superclasses2
  Rsh_Fir_reg_superclasses3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r3 = dyn base1(<sym superclasses2>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [superclasses3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_superclasses3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L27_:;
  // superclasses4 = force? superclasses3
  Rsh_Fir_reg_superclasses4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses3_);
  // checkMissing(superclasses4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_superclasses4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r5 = dyn length(superclasses4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_superclasses4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L29_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // superclasses5 = ld superclasses
  Rsh_Fir_reg_superclasses5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

L31_:;
  // r7 = dyn base2(<sym superclasses>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(c, r7)
  // L3(c, r7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D4_:;
  // deopt 17 [c, superclasses5]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_superclasses5_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L32_:;
  // superclasses6 = force? superclasses5
  Rsh_Fir_reg_superclasses6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses5_);
  // checkMissing(superclasses6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_superclasses6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r9 = dyn length1(superclasses6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_superclasses6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

D5_:;
  // deopt 20 [c, r9]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L3(c, r9)
  // L3(c, r9)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L3_;

L35_:;
  // sym3 = ldf all
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf all in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard3 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard4 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L37_:;
  // r11 = dyn base3(<lang is.na(match(superclasses2, superclasses))>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L5(c9, r11)
  // L5(c9, r11)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L5_;

L38_:;
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard5 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L39_:;
  // r13 = dyn base4(<lang match(superclasses2, superclasses)>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L6(c9, r13)
  // L6(c9, r13)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L6_;

L40_:;
  // superclasses7 = ld superclasses2
  Rsh_Fir_reg_superclasses7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L42() else D6()
  // L42()
  goto L42_;

L41_:;
  // r15 = dyn base5(<sym superclasses2>, <sym superclasses>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L7(c9, r15)
  // L7(c9, r15)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L7_;

D6_:;
  // deopt 30 [c9, superclasses7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_superclasses7_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L42_:;
  // superclasses8 = force? superclasses7
  Rsh_Fir_reg_superclasses8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses7_);
  // checkMissing(superclasses8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_superclasses8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // superclasses9 = ld superclasses
  Rsh_Fir_reg_superclasses9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L43() else D7()
  // L43()
  goto L43_;

D7_:;
  // deopt 32 [c9, superclasses9]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_superclasses9_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L43_:;
  // superclasses10 = force? superclasses9
  Rsh_Fir_reg_superclasses10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses9_);
  // checkMissing(superclasses10)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_superclasses10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r17 = dyn match(superclasses8, superclasses10, NA_INT, NULL)
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_superclasses8_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_superclasses10_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L44() else D8()
  // L44()
  goto L44_;

D8_:;
  // deopt 37 [c9, r17]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L7(c9, r17)
  // L7(c9, r17)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L7_;

D9_:;
  // deopt 39 [c20, r18]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L6(c20, r18)
  // L6(c20, r18)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r18_;
  goto L6_;

D10_:;
  // deopt 41 [c17, r19]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L5(c17, r19)
  // L5(c17, r19)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r19_;
  goto L5_;

L48_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L49() else D11()
  // L49()
  goto L49_;

D11_:;
  // deopt 43 [value1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L49_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // l = ld contains
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c25 = `is.object`(l)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c25 then L50() else L51(value2, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L50()
    goto L50_;
  } else {
  // L51(value2, l)
    Rsh_Fir_reg_value4_ = Rsh_Fir_reg_value2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L51_;
  }

L50_:;
  // dr = tryDispatchBuiltin.0("[[<-", l, value2)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_value2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args42);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc then L52() else L51(value2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L52()
    goto L52_;
  } else {
  // L51(value2, dr)
    Rsh_Fir_reg_value4_ = Rsh_Fir_reg_value2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L51_;
  }

L51_:;
  // class3 = ld class2
  Rsh_Fir_reg_class3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

L52_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L9(value2, dx)
  // L9(value2, dx)
  Rsh_Fir_reg_value6_ = Rsh_Fir_reg_value2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L9_;

D12_:;
  // deopt 46 [value4, l2, value2, class3]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_class3_;
  Rsh_Fir_deopt(46, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L53_:;
  // class4 = force? class3
  Rsh_Fir_reg_class4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class3_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r20 = dyn ____(l2, value2, class4)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_class4_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L9(value4, r20)
  // L9(value4, r20)
  Rsh_Fir_reg_value6_ = Rsh_Fir_reg_value4_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L9_;

L55_:;
  // superclasses11 = ld superclasses
  Rsh_Fir_reg_superclasses11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

L56_:;
  // r21 = dyn base6(<sym superclasses>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L11_;

D13_:;
  // deopt 51 [superclasses11]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_superclasses11_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L57_:;
  // superclasses12 = force? superclasses11
  Rsh_Fir_reg_superclasses12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses11_);
  // checkMissing(superclasses12)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_superclasses12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r23 = seq_along(superclasses12)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_superclasses12_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L11_;

D14_:;
  // deopt 55 [sq]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_sq;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L58_:;
  // sq1 = force? sq
  Rsh_Fir_reg_sq1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sq);
  // checkMissing(sq1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sq1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(sq1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sq1_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c26 then L59() else L60(sq1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L59()
    goto L59_;
  } else {
  // L60(sq1)
    Rsh_Fir_reg_sq3_ = Rsh_Fir_reg_sq1_;
    goto L60_;
  }

L59_:;
  // dr2 = tryDispatchBuiltin.1("[", sq1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_sq1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc1 then L61() else L60(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L61()
    goto L61_;
  } else {
  // L60(dr2)
    Rsh_Fir_reg_sq3_ = Rsh_Fir_reg_dr2_;
    goto L60_;
  }

L60_:;
  // sym7 = ldf match
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base7 = ldf match in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard7 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L61_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L12(dx2)
  // L12(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L12_;

L62_:;
  // superclasses13 = ld superclasses
  Rsh_Fir_reg_superclasses13_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L64() else D15()
  // L64()
  goto L64_;

L63_:;
  // r24 = dyn base7(<sym superclasses>, <sym superclasses2>, 0)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args55[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L13(sq3, r24)
  // L13(sq3, r24)
  Rsh_Fir_reg_sq6_ = Rsh_Fir_reg_sq3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L13_;

D15_:;
  // deopt 59 [sq3, superclasses13]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_sq3_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_superclasses13_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L64_:;
  // superclasses14 = force? superclasses13
  Rsh_Fir_reg_superclasses14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses13_);
  // checkMissing(superclasses14)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_superclasses14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // superclasses15 = ld superclasses2
  Rsh_Fir_reg_superclasses15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L65() else D16()
  // L65()
  goto L65_;

D16_:;
  // deopt 61 [sq3, superclasses15]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_sq3_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_superclasses15_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L65_:;
  // superclasses16 = force? superclasses15
  Rsh_Fir_reg_superclasses16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses15_);
  // checkMissing(superclasses16)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_superclasses16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r26 = dyn match1(superclasses14, superclasses16, 0, NULL)
  SEXP Rsh_Fir_array_args58[4];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_superclasses14_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_superclasses16_;
  Rsh_Fir_array_args58[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args58[3] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L66() else D17()
  // L66()
  goto L66_;

D17_:;
  // deopt 66 [sq3, r26]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_sq3_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L13(sq3, r26)
  // L13(sq3, r26)
  Rsh_Fir_reg_sq6_ = Rsh_Fir_reg_sq3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L13_;

L67_:;
  // dr4 = tryDispatchBuiltin.1("[[", dx3)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc2 then L69() else L68(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L69()
    goto L69_;
  } else {
  // L68(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L68_;
  }

L68_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r29 = dyn __1(dx5, 1.0)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L14(r29)
  // L14(r29)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r29_;
  goto L14_;

L69_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L14(dx6)
  // L14(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L14_;

L70_:;
  // contains3 = ld contains
  Rsh_Fir_reg_contains3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L72() else D18()
  // L72()
  goto L72_;

L71_:;
  // r30 = dyn base8(<lang `[`(contains, `<`(sq, before))>, <sym value>, <lang `[`(contains, `>=`(sq, before))>)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L15(r30)
  // L15(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L15_;

D18_:;
  // deopt 76 [contains3]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_contains3_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L72_:;
  // contains4 = force? contains3
  Rsh_Fir_reg_contains4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contains3_);
  // checkMissing(contains4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_contains4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(contains4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_contains4_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c28 then L73() else L74(contains4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L73()
    goto L73_;
  } else {
  // L74(contains4)
    Rsh_Fir_reg_contains6_ = Rsh_Fir_reg_contains4_;
    goto L74_;
  }

L73_:;
  // dr6 = tryDispatchBuiltin.1("[", contains4)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_contains4_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc3 then L75() else L74(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L75()
    goto L75_;
  } else {
  // L74(dr6)
    Rsh_Fir_reg_contains6_ = Rsh_Fir_reg_dr6_;
    goto L74_;
  }

L74_:;
  // sq7 = ld sq
  Rsh_Fir_reg_sq7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L76() else D19()
  // L76()
  goto L76_;

L75_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L16(dx8)
  // L16(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L16_;

D19_:;
  // deopt 78 [contains6, sq7]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_contains6_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_sq7_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L76_:;
  // sq8 = force? sq7
  Rsh_Fir_reg_sq8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sq7_);
  // checkMissing(sq8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sq8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // before = ld before
  Rsh_Fir_reg_before = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L77() else D20()
  // L77()
  goto L77_;

D20_:;
  // deopt 79 [contains6, sq8, before]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_contains6_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_sq8_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_before;
  Rsh_Fir_deopt(79, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L77_:;
  // before1 = force? before
  Rsh_Fir_reg_before1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_before);
  // checkMissing(before1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_before1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r32 = `<`(sq8, before1)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sq8_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_before1_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r33 = dyn __2(contains6, r32)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_contains6_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L16(r33)
  // L16(r33)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r33_;
  goto L16_;

D21_:;
  // deopt 83 [value8]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_value8_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L78_:;
  // value9 = force? value8
  Rsh_Fir_reg_value9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value8_);
  // checkMissing(value9)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_value9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // contains7 = ld contains
  Rsh_Fir_reg_contains7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L79() else D22()
  // L79()
  goto L79_;

D22_:;
  // deopt 85 [contains7]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_contains7_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L79_:;
  // contains8 = force? contains7
  Rsh_Fir_reg_contains8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contains7_);
  // checkMissing(contains8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_contains8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(contains8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_contains8_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if c29 then L80() else L81(contains8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L80()
    goto L80_;
  } else {
  // L81(contains8)
    Rsh_Fir_reg_contains10_ = Rsh_Fir_reg_contains8_;
    goto L81_;
  }

L80_:;
  // dr8 = tryDispatchBuiltin.1("[", contains8)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_contains8_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args76);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if dc4 then L82() else L81(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L82()
    goto L82_;
  } else {
  // L81(dr8)
    Rsh_Fir_reg_contains10_ = Rsh_Fir_reg_dr8_;
    goto L81_;
  }

L81_:;
  // sq9 = ld sq
  Rsh_Fir_reg_sq9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L83() else D23()
  // L83()
  goto L83_;

L82_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L17(dx10)
  // L17(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L17_;

D23_:;
  // deopt 87 [contains10, sq9]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_contains10_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_sq9_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L83_:;
  // sq10 = force? sq9
  Rsh_Fir_reg_sq10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sq9_);
  // checkMissing(sq10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sq10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // before2 = ld before
  Rsh_Fir_reg_before2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L84() else D24()
  // L84()
  goto L84_;

D24_:;
  // deopt 88 [contains10, sq10, before2]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_contains10_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_sq10_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_before2_;
  Rsh_Fir_deopt(88, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L84_:;
  // before3 = force? before2
  Rsh_Fir_reg_before3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_before2_);
  // checkMissing(before3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_before3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r34 = `>=`(sq10, before3)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sq10_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_before3_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r35 = dyn __3(contains10, r34)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_contains10_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L17(r35)
  // L17(r35)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r35_;
  goto L17_;

D25_:;
  // deopt 93 [r36]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L15(r36)
  // L15(r36)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r36_;
  goto L15_;

L86_:;
  // superclasses17 = ld superclasses
  Rsh_Fir_reg_superclasses17_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L88() else D26()
  // L88()
  goto L88_;

L87_:;
  // r37 = dyn base9(<lang `[`(superclasses, `<`(sq, before))>, <sym class2>, <lang `[`(superclasses, `>=`(sq, before))>)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 3, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L18(r37)
  // L18(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L18_;

D26_:;
  // deopt 97 [superclasses17]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_superclasses17_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L88_:;
  // superclasses18 = force? superclasses17
  Rsh_Fir_reg_superclasses18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses17_);
  // checkMissing(superclasses18)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_superclasses18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(superclasses18)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_superclasses18_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c31 then L89() else L90(superclasses18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L89()
    goto L89_;
  } else {
  // L90(superclasses18)
    Rsh_Fir_reg_superclasses20_ = Rsh_Fir_reg_superclasses18_;
    goto L90_;
  }

L89_:;
  // dr10 = tryDispatchBuiltin.1("[", superclasses18)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_superclasses18_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc5 then L91() else L90(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L91()
    goto L91_;
  } else {
  // L90(dr10)
    Rsh_Fir_reg_superclasses20_ = Rsh_Fir_reg_dr10_;
    goto L90_;
  }

L90_:;
  // sq11 = ld sq
  Rsh_Fir_reg_sq11_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L92() else D27()
  // L92()
  goto L92_;

L91_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L19(dx12)
  // L19(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L19_;

D27_:;
  // deopt 99 [superclasses20, sq11]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_superclasses20_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_sq11_;
  Rsh_Fir_deopt(99, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L92_:;
  // sq12 = force? sq11
  Rsh_Fir_reg_sq12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sq11_);
  // checkMissing(sq12)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sq12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // before4 = ld before
  Rsh_Fir_reg_before4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L93() else D28()
  // L93()
  goto L93_;

D28_:;
  // deopt 100 [superclasses20, sq12, before4]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_superclasses20_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_sq12_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_before4_;
  Rsh_Fir_deopt(100, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L93_:;
  // before5 = force? before4
  Rsh_Fir_reg_before5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_before4_);
  // checkMissing(before5)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_before5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // r39 = `<`(sq12, before5)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sq12_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_before5_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r40 = dyn __4(superclasses20, r39)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_superclasses20_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L19(r40)
  // L19(r40)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r40_;
  goto L19_;

D29_:;
  // deopt 104 [class5]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_class5_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L94_:;
  // class6 = force? class5
  Rsh_Fir_reg_class6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class5_);
  // checkMissing(class6)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_class6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // superclasses21 = ld superclasses
  Rsh_Fir_reg_superclasses21_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L95() else D30()
  // L95()
  goto L95_;

D30_:;
  // deopt 106 [superclasses21]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_superclasses21_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L95_:;
  // superclasses22 = force? superclasses21
  Rsh_Fir_reg_superclasses22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses21_);
  // checkMissing(superclasses22)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_superclasses22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(superclasses22)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_superclasses22_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if c32 then L96() else L97(superclasses22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L96()
    goto L96_;
  } else {
  // L97(superclasses22)
    Rsh_Fir_reg_superclasses24_ = Rsh_Fir_reg_superclasses22_;
    goto L97_;
  }

L96_:;
  // dr12 = tryDispatchBuiltin.1("[", superclasses22)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_superclasses22_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc6 then L98() else L97(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L98()
    goto L98_;
  } else {
  // L97(dr12)
    Rsh_Fir_reg_superclasses24_ = Rsh_Fir_reg_dr12_;
    goto L97_;
  }

L97_:;
  // sq13 = ld sq
  Rsh_Fir_reg_sq13_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L99() else D31()
  // L99()
  goto L99_;

L98_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L20(dx14)
  // L20(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L20_;

D31_:;
  // deopt 108 [superclasses24, sq13]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_superclasses24_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_sq13_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L99_:;
  // sq14 = force? sq13
  Rsh_Fir_reg_sq14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sq13_);
  // checkMissing(sq14)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_sq14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // before6 = ld before
  Rsh_Fir_reg_before6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L100() else D32()
  // L100()
  goto L100_;

D32_:;
  // deopt 109 [superclasses24, sq14, before6]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_superclasses24_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_sq14_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_before6_;
  Rsh_Fir_deopt(109, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L100_:;
  // before7 = force? before6
  Rsh_Fir_reg_before7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_before6_);
  // checkMissing(before7)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_before7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // r41 = `>=`(sq14, before7)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sq14_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_before7_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r42 = dyn __5(superclasses24, r41)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_superclasses24_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L20(r42)
  // L20(r42)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r42_;
  goto L20_;

D33_:;
  // deopt 114 [r43]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L18(r43)
  // L18(r43)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r43_;
  goto L18_;

D34_:;
  // deopt 116 [superclasses25]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_superclasses25_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L102_:;
  // superclasses26 = force? superclasses25
  Rsh_Fir_reg_superclasses26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses25_);
  // checkMissing(superclasses26)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_superclasses26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // l3 = ld contains
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L103() else D35()
  // L103()
  goto L103_;

D35_:;
  // deopt 119 [superclasses26, l3, superclasses26]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_superclasses26_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_superclasses26_;
  Rsh_Fir_deopt(119, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L103_:;
  // r44 = dyn names__(l3, NULL, superclasses26)
  SEXP Rsh_Fir_array_args104[3];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args104[2] = Rsh_Fir_reg_superclasses26_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L104() else D36()
  // L104()
  goto L104_;

D36_:;
  // deopt 121 [superclasses26, r44]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_superclasses26_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L104_:;
  // st contains = r44
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // goto L10()
  // L10()
  goto L10_;

D37_:;
  // deopt 123 [contains11]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_contains11_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L105_:;
  // contains12 = force? contains11
  Rsh_Fir_reg_contains12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contains11_);
  // checkMissing(contains12)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_contains12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return contains12
  return Rsh_Fir_reg_contains12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
