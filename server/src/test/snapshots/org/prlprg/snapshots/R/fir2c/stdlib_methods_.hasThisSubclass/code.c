#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3282597222_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3282597222_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3282597222_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3282597222_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3282597222
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3282597222_, RHO, CCP);
  // st `.hasThisSubclass` = r
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
SEXP Rsh_Fir_user_function_inner3282597222_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3282597222 dynamic dispatch ([classDefs, supers, plabel])

  return Rsh_Fir_user_version_inner3282597222_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3282597222_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3282597222 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3282597222/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_classDefs;  // classDefs
  SEXP Rsh_Fir_reg_supers;  // supers
  SEXP Rsh_Fir_reg_plabel;  // plabel
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_plabel1_;  // plabel1
  SEXP Rsh_Fir_reg_plabel2_;  // plabel2
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_supers1_;  // supers1
  SEXP Rsh_Fir_reg_supers2_;  // supers2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_supers4_;  // supers4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_plabel3_;  // plabel3
  SEXP Rsh_Fir_reg_plabel4_;  // plabel4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_plabel6_;  // plabel6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_si;  // si
  SEXP Rsh_Fir_reg_si1_;  // si1
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_cl;  // cl
  SEXP Rsh_Fir_reg_cl1_;  // cl1
  SEXP Rsh_Fir_reg_si2_;  // si2
  SEXP Rsh_Fir_reg_si3_;  // si3
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_pkg1_;  // pkg1
  SEXP Rsh_Fir_reg_pki;  // pki
  SEXP Rsh_Fir_reg_pki1_;  // pki1
  SEXP Rsh_Fir_reg_identical2_;  // identical2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_getClassDef;  // getClassDef
  SEXP Rsh_Fir_reg_si4_;  // si4
  SEXP Rsh_Fir_reg_si5_;  // si5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_pki2_;  // pki2
  SEXP Rsh_Fir_reg_pki3_;  // pki3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_cli;  // cli
  SEXP Rsh_Fir_reg_cli1_;  // cli1
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i46_;  // i46
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_cl2_;  // cl2
  SEXP Rsh_Fir_reg_cl3_;  // cl3
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i49_;  // i49
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_sub1_;  // sub1
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_pkg2_;  // pkg2
  SEXP Rsh_Fir_reg_pkg3_;  // pkg3
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_identical3_;  // identical3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_c41_;  // c41

  // Bind parameters
  Rsh_Fir_reg_classDefs = PARAMS[0];
  Rsh_Fir_reg_supers = PARAMS[1];
  Rsh_Fir_reg_plabel = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st classDefs = classDefs
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_classDefs, RHO);
  (void)(Rsh_Fir_reg_classDefs);
  // st supers = supers
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_supers, RHO);
  (void)(Rsh_Fir_reg_supers);
  // st plabel = plabel
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_plabel, RHO);
  (void)(Rsh_Fir_reg_plabel);
  // sym = ldf seq_along
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
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
  // s = toForSeq(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 5);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c then L24() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L24()
    goto L24_;
  } else {
  // L20()
    goto L20_;
  }

L2_:;
  // st si = dx1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // plabel3 = ld plabel
  Rsh_Fir_reg_plabel3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

L3_:;
  // st pki = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L4_:;
  // c3 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c3 then L5(i19, c3) else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L5(i19, c3)
    Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c3_;
    goto L5_;
  } else {
  // L39()
    goto L39_;
  }

L5_:;
  // c27 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c27 then L53() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L53()
    goto L53_;
  } else {
  // L9()
    goto L9_;
  }

L6_:;
  // c9 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c9 then L45() else L7(i24, c8, c9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L45()
    goto L45_;
  } else {
  // L7(i24, c8, c9)
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c9_;
    goto L7_;
  }

L7_:;
  // c24 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c25 = `||`(c12, c24)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L5(i26, c25)
  // L5(i26, c25)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c25_;
  goto L5_;

L8_:;
  // c20 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c21 = `&&`(c19, c20)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L7(i29, c18, c21)
  // L7(i29, c18, c21)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c21_;
  goto L7_;

L9_:;
  // getClassDef = ldf getClassDef
  Rsh_Fir_reg_getClassDef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L56() else D13()
  // L56()
  goto L56_;

L11_:;
  // c29 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c29 then L61() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L61()
    goto L61_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // __4 = ldf `@` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r24 = dyn __4(<sym cli>, <sym subclasses>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // c30 = `is.object`(r24)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c30 then L64() else L65(i38, r24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L64()
    goto L64_;
  } else {
  // L65(i38, r24)
    Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i38_;
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r24_;
    goto L65_;
  }

L14_:;
  // st sub = dx5
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard5 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L15_:;
  // c32 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c32 then L16(i49, c32) else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L16(i49, c32)
    Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i49_;
    Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c32_;
    goto L16_;
  } else {
  // L71()
    goto L71_;
  }

L16_:;
  // c41 = `as.logical`(c33)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c41 then L77() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L77()
    goto L77_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // r34 = `!`(r31)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c38 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c39 = `||`(c37, c38)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L16(i54, c39)
  // L16(i54, c39)
  Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c39_;
  goto L16_;

L18_:;
  // goto L1(i50)
  // L1(i50)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i50_;
  goto L1_;

L20_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args22[4];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r3 = dyn __(<lang `[[`(classDefs, i)>, <sym package>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names1, CCP, RHO);
  // st pkg = r3
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r4 = dyn __1(<lang `[[`(classDefs, i)>, <sym className>)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names2, CCP, RHO);
  // st cl = r4
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // supers1 = ld supers
  Rsh_Fir_reg_supers1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

L21_:;
  // plabel1 = ld plabel
  Rsh_Fir_reg_plabel1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r = dyn base(<sym plabel>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [plabel1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_plabel1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L23_:;
  // plabel2 = force? plabel1
  Rsh_Fir_reg_plabel2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_plabel1_);
  // checkMissing(plabel2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_plabel2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r2 = seq_along(plabel2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_plabel2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 17);

D1_:;
  // deopt 10 [i2, supers1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_supers1_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L25_:;
  // supers2 = force? supers1
  Rsh_Fir_reg_supers2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_supers1_);
  // checkMissing(supers2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_supers2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(supers2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_supers2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c1 then L26() else L27(i2, supers2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L27(i2, supers2)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_supers4_ = Rsh_Fir_reg_supers2_;
    goto L27_;
  }

L26_:;
  // dr = tryDispatchBuiltin.1("[[", supers2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_supers2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc then L28() else L27(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L28()
    goto L28_;
  } else {
  // L27(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_supers4_ = Rsh_Fir_reg_dr;
    goto L27_;
  }

L27_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

L28_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L2(i2, dx)
  // L2(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D2_:;
  // deopt 12 [i6, supers4, i9]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_supers4_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(12, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L29_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r5 = dyn __2(supers4, i10)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_supers4_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(i6, r5)
  // L2(i6, r5)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L2_;

D3_:;
  // deopt 16 [i8, plabel3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_plabel3_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // plabel4 = force? plabel3
  Rsh_Fir_reg_plabel4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_plabel3_);
  // checkMissing(plabel4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_plabel4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(plabel4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_plabel4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c2 then L31() else L32(i8, plabel4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L31()
    goto L31_;
  } else {
  // L32(i8, plabel4)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_plabel6_ = Rsh_Fir_reg_plabel4_;
    goto L32_;
  }

L31_:;
  // dr2 = tryDispatchBuiltin.1("[[", plabel4)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_plabel4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc1 then L33() else L32(i8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L33()
    goto L33_;
  } else {
  // L32(i8, dr2)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_plabel6_ = Rsh_Fir_reg_dr2_;
    goto L32_;
  }

L32_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

L33_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L3(i8, dx2)
  // L3(i8, dx2)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

D4_:;
  // deopt 18 [i12, plabel6, i15]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_plabel6_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L34_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r6 = dyn __3(plabel6, i16)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_plabel6_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(i12, r6)
  // L3(i12, r6)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r6_;
  goto L3_;

L35_:;
  // si = ld si
  Rsh_Fir_reg_si = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

L36_:;
  // r7 = dyn base1(<sym si>, "ANY")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(i14, r7)
  // L4(i14, r7)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D5_:;
  // deopt 24 [i14, si]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_si;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L37_:;
  // si1 = force? si
  Rsh_Fir_reg_si1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_si);
  // checkMissing(si1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_si1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r9 = dyn identical(si1, "ANY", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args42[9];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_si1_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args42[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args42[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args42[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args42[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args42[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args42[8] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names7[9];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_array_arg_names7[4] = R_MissingArg;
  Rsh_Fir_array_arg_names7[5] = R_MissingArg;
  Rsh_Fir_array_arg_names7[6] = R_MissingArg;
  Rsh_Fir_array_arg_names7[7] = R_MissingArg;
  Rsh_Fir_array_arg_names7[8] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

D6_:;
  // deopt 35 [i14, r9]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L4(i14, r9)
  // L4(i14, r9)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L4_;

L39_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard2 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

L41_:;
  // r10 = dyn base2(<sym cl>, <sym si>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(i19, c3, r10)
  // L6(i19, c3, r10)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L6_;

D7_:;
  // deopt 38 [i19, c3, cl]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_cl;
  Rsh_Fir_deopt(38, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L42_:;
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // si2 = ld si
  Rsh_Fir_reg_si2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

D8_:;
  // deopt 40 [i19, c3, si2]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_si2_;
  Rsh_Fir_deopt(40, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // si3 = force? si2
  Rsh_Fir_reg_si3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_si2_);
  // checkMissing(si3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_si3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r12 = dyn identical1(cl1, si3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args47[9];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_si3_;
  Rsh_Fir_array_args47[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args47[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args47[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args47[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args47[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args47[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args47[8] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names9[9];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_array_arg_names9[6] = R_MissingArg;
  Rsh_Fir_array_arg_names9[7] = R_MissingArg;
  Rsh_Fir_array_arg_names9[8] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

D9_:;
  // deopt 50 [i19, c3, r12]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(50, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L6(i19, c3, r12)
  // L6(i19, c3, r12)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L6_;

L45_:;
  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard3 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // pkg = ld pkg
  Rsh_Fir_reg_pkg = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L48() else D10()
  // L48()
  goto L48_;

L47_:;
  // r13 = dyn base3(<sym pkg>, <sym pki>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(i24, c8, c9, r13)
  // L8(i24, c8, c9, r13)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D10_:;
  // deopt 53 [i24, c8, c9, pkg]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_pkg;
  Rsh_Fir_deopt(53, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L48_:;
  // pkg1 = force? pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg);
  // checkMissing(pkg1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_pkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // pki = ld pki
  Rsh_Fir_reg_pki = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L49() else D11()
  // L49()
  goto L49_;

D11_:;
  // deopt 55 [i24, c8, c9, pki]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_pki;
  Rsh_Fir_deopt(55, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L49_:;
  // pki1 = force? pki
  Rsh_Fir_reg_pki1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pki);
  // checkMissing(pki1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_pki1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r15 = dyn identical2(pkg1, pki1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args52[9];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_pkg1_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_pki1_;
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args52[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[8] = Rsh_const(CCP, 27);
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
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

D12_:;
  // deopt 65 [i24, c8, c9, r15]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(65, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L8(i24, c8, c9, r15)
  // L8(i24, c8, c9, r15)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L8_;

L53_:;
  // goto L1(i20)
  // L1(i20)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i20_;
  goto L1_;

D13_:;
  // deopt 73 [i20]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L56_:;
  // p = prom<V +>{
  //   si4 = ld si;
  //   si5 = force? si4;
  //   checkMissing(si5);
  //   return si5;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3282597222_, CCP, RHO);
  // p1 = prom<V +>{
  //   pki2 = ld pki;
  //   pki3 = force? pki2;
  //   checkMissing(pki3);
  //   return pki3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3282597222_1, CCP, RHO);
  // r19 = dyn getClassDef[, package](p, p1)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClassDef, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L57() else D14()
  // L57()
  goto L57_;

D14_:;
  // deopt 77 [i20, r19]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L57_:;
  // st cli = r19
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard4 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // cli = ld cli
  Rsh_Fir_reg_cli = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L60() else D15()
  // L60()
  goto L60_;

L59_:;
  // r20 = dyn base4(<sym cli>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(i20, r20)
  // L11(i20, r20)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L11_;

D15_:;
  // deopt 80 [i20, cli]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_cli;
  Rsh_Fir_deopt(80, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L60_:;
  // cli1 = force? cli
  Rsh_Fir_reg_cli1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cli);
  // checkMissing(cli1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_cli1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c28 = `==`(cli1, NULL)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_cli1_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L11(i20, c28)
  // L11(i20, c28)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_c28_;
  goto L11_;

L61_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 27);

L64_:;
  // dr4 = tryDispatchBuiltin.1("[[", r24)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc2 then L66() else L65(i38, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L66()
    goto L66_;
  } else {
  // L65(i38, dr4)
    Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i38_;
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_dr4_;
    goto L65_;
  }

L65_:;
  // cl2 = ld cl
  Rsh_Fir_reg_cl2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L67() else D16()
  // L67()
  goto L67_;

L66_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L14(i38, dx4)
  // L14(i38, dx4)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L14_;

D16_:;
  // deopt 90 [i44, r26, cl2]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i44_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_cl2_;
  Rsh_Fir_deopt(90, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L67_:;
  // cl3 = force? cl2
  Rsh_Fir_reg_cl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl2_);
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r27 = dyn __5(r26, cl3)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_cl3_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L14(i44, r27)
  // L14(i44, r27)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i44_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r27_;
  goto L14_;

L68_:;
  // sub = ld sub
  Rsh_Fir_reg_sub = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L70() else D17()
  // L70()
  goto L70_;

L69_:;
  // r28 = dyn base5(<sym sub>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L15(i46, r28)
  // L15(i46, r28)
  Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L15_;

D17_:;
  // deopt 95 [i46, sub]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_sub;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L70_:;
  // sub1 = force? sub
  Rsh_Fir_reg_sub1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sub);
  // checkMissing(sub1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sub1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c31 = `==`(sub1, NULL)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sub1_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L15(i46, c31)
  // L15(i46, c31)
  Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_c31_;
  goto L15_;

L71_:;
  // sym6 = ldf identical
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base6 = ldf identical in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard6 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L72_:;
  // pkg2 = ld pkg
  Rsh_Fir_reg_pkg2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L74() else D18()
  // L74()
  goto L74_;

L73_:;
  // r30 = dyn base6(<sym pkg>, <lang `@`(sub, package)>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L17(i49, c32, r30)
  // L17(i49, c32, r30)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L17_;

D18_:;
  // deopt 100 [i49, c32, pkg2]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_pkg2_;
  Rsh_Fir_deopt(100, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L74_:;
  // pkg3 = force? pkg2
  Rsh_Fir_reg_pkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg2_);
  // checkMissing(pkg3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_pkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // __6 = ldf `@` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r32 = dyn __6(<sym sub>, <sym package>)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names17, CCP, RHO);
  // identical3 = ldf identical in base
  Rsh_Fir_reg_identical3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r33 = dyn identical3(pkg3, r32, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args71[9];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args71[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args71[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args71[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args71[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args71[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args71[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args71[8] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names18[9];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_array_arg_names18[5] = R_MissingArg;
  Rsh_Fir_array_arg_names18[6] = R_MissingArg;
  Rsh_Fir_array_arg_names18[7] = R_MissingArg;
  Rsh_Fir_array_arg_names18[8] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical3_, 9, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L75() else D19()
  // L75()
  goto L75_;

D19_:;
  // deopt 112 [i49, c32, r33]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(112, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L17(i49, c32, r33)
  // L17(i49, c32, r33)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r33_;
  goto L17_;

L77_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 27);
}
SEXP Rsh_Fir_user_promise_inner3282597222_(SEXP CCP, SEXP RHO) {
  // si4 = ld si
  Rsh_Fir_reg_si4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // si5 = force? si4
  Rsh_Fir_reg_si5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_si4_);
  // checkMissing(si5)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_si5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return si5
  return Rsh_Fir_reg_si5_;
}
SEXP Rsh_Fir_user_promise_inner3282597222_1(SEXP CCP, SEXP RHO) {
  // pki2 = ld pki
  Rsh_Fir_reg_pki2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // pki3 = force? pki2
  Rsh_Fir_reg_pki3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pki2_);
  // checkMissing(pki3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_pki3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return pki3
  return Rsh_Fir_reg_pki3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
