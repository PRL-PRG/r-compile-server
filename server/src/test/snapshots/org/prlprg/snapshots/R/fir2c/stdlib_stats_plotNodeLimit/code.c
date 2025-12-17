#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2966827304_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2966827304_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2966827304_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2966827304_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2966827304_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2966827304_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2966827304_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2966827304_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner2966827304
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2966827304_, RHO, CCP);
  // st plotNodeLimit = r
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
SEXP Rsh_Fir_user_function_inner2966827304_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2966827304 dynamic dispatch ([x1, x2, subtree, center])

  return Rsh_Fir_user_version_inner2966827304_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2966827304_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2966827304 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2966827304/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_subtree;  // subtree
  SEXP Rsh_Fir_reg_center;  // center
  SEXP Rsh_Fir_reg_is_leaf;  // is_leaf
  SEXP Rsh_Fir_reg_subtree1_;  // subtree1
  SEXP Rsh_Fir_reg_subtree2_;  // subtree2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_inner;  // inner
  SEXP Rsh_Fir_reg_inner1_;  // inner1
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_subtree3_;  // subtree3
  SEXP Rsh_Fir_reg_subtree4_;  // subtree4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg__memberDend;  // _memberDend
  SEXP Rsh_Fir_reg_subtree5_;  // subtree5
  SEXP Rsh_Fir_reg_subtree6_;  // subtree6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_integer;  // integer
  SEXP Rsh_Fir_reg_K;  // K
  SEXP Rsh_Fir_reg_K1_;  // K1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_K2_;  // K2
  SEXP Rsh_Fir_reg_K3_;  // K3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg__memberDend1_;  // _memberDend1
  SEXP Rsh_Fir_reg_subtree7_;  // subtree7
  SEXP Rsh_Fir_reg_subtree8_;  // subtree8
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_subtree10_;  // subtree10
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_xx2_;  // xx2
  SEXP Rsh_Fir_reg_center1_;  // center1
  SEXP Rsh_Fir_reg_center2_;  // center2
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_mTop;  // mTop
  SEXP Rsh_Fir_reg_mTop1_;  // mTop1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_xx5_;  // xx5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_xx6_;  // xx6
  SEXP Rsh_Fir_reg_xx7_;  // xx7
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_xx9_;  // xx9
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_limit;  // limit
  SEXP Rsh_Fir_reg_limit1_;  // limit1
  SEXP Rsh_Fir_reg_limit2_;  // limit2
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_subtree11_;  // subtree11
  SEXP Rsh_Fir_reg_subtree12_;  // subtree12
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_center3_;  // center3
  SEXP Rsh_Fir_reg_center4_;  // center4
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_inner2_;  // inner2
  SEXP Rsh_Fir_reg_inner3_;  // inner3
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_mid;  // mid
  SEXP Rsh_Fir_reg_mid1_;  // mid1
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_center5_;  // center5
  SEXP Rsh_Fir_reg_center6_;  // center6
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_mean;  // mean
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_x23_;  // x23
  SEXP Rsh_Fir_reg__midDend;  // _midDend
  SEXP Rsh_Fir_reg_subtree13_;  // subtree13
  SEXP Rsh_Fir_reg_subtree14_;  // subtree14
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_limit3_;  // limit3
  SEXP Rsh_Fir_reg_limit4_;  // limit4
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r42_;  // r42

  // Bind parameters
  Rsh_Fir_reg_x1_ = PARAMS[0];
  Rsh_Fir_reg_x2_ = PARAMS[1];
  Rsh_Fir_reg_subtree = PARAMS[2];
  Rsh_Fir_reg_center = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x1 = x1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // st x2 = x2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x2_, RHO);
  (void)(Rsh_Fir_reg_x2_);
  // st subtree = subtree
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_subtree, RHO);
  (void)(Rsh_Fir_reg_subtree);
  // st center = center
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_center, RHO);
  (void)(Rsh_Fir_reg_center);
  // is_leaf = ldf `is.leaf`
  Rsh_Fir_reg_is_leaf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L0_:;
  // st inner = c2
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_c2_, RHO);
  (void)(Rsh_Fir_reg_c2_);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L1_:;
  // st limit = r5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf attr
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf attr in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L2_:;
  // x16 = ld x2
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L57() else D26()
  // L57()
  goto L57_;

L3_:;
  // st K = r7
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // _memberDend = ldf `.memberDend`
  Rsh_Fir_reg__memberDend = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

L4_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c7 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c7 then L38() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L38()
    goto L38_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L49() else D22()
  // L49()
  goto L49_;

L6_:;
  // r21 = `+`(xx5, r20)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_xx5_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // st xx1 = r21
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // xx6 = ld xx1
  Rsh_Fir_reg_xx6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L50() else D23()
  // L50()
  goto L50_;

L7_:;
  // st limit = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L4(i11)
  // L4(i11)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i11_;
  goto L4_;

L8_:;
  // x11 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_x11_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // st k = x11
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x11_, RHO);
  (void)(Rsh_Fir_reg_x11_);
  // _memberDend1 = ldf `.memberDend`
  Rsh_Fir_reg__memberDend1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L39() else D14()
  // L39()
  goto L39_;

L9_:;
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r23 = dyn c11(x8, limit2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_limit2_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L58() else D27()
  // L58()
  goto L58_;

L10_:;
  // st mid = r25
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // center3 = ld center
  Rsh_Fir_reg_center3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L63() else D30()
  // L63()
  goto L63_;

L11_:;
  // st center = c13
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_c13_, RHO);
  (void)(Rsh_Fir_reg_c13_);
  // center5 = ld center
  Rsh_Fir_reg_center5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L73() else D34()
  // L73()
  goto L73_;

L12_:;
  // c30 = `as.logical`(c19)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c31 = `||`(c18, c30)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L11(c31)
  // L11(c31)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c31_;
  goto L11_;

L13_:;
  // r30 = `!`(r28)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c26 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c27 = `&&`(c25, c26)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L12(c24, c27)
  // L12(c24, c27)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c27_;
  goto L12_;

L14_:;
  // x22 = ld x1
  Rsh_Fir_reg_x22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L78() else D37()
  // L78()
  goto L78_;

L15_:;
  // st x = r36
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard5 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p = prom<V +>{
  //   subtree1 = ld subtree;
  //   subtree2 = force? subtree1;
  //   checkMissing(subtree2);
  //   return subtree2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2966827304_, CCP, RHO);
  // r1 = dyn is_leaf(p)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_leaf, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L18_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c then L19() else L0(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L19()
    goto L19_;
  } else {
  // L0(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L0_;
  }

L19_:;
  // x3 = ld x1
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D2_:;
  // deopt 5 [c, x3]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // x5 = ld x2
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

D3_:;
  // deopt 6 [c, x4, x5]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r3 = `!=`(x4, x6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c4 = `&&`(c, c3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L0(c4)
  // L0(c4)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c4_;
  goto L0_;

L23_:;
  // x7 = ld x1
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L24_:;
  // r4 = dyn base(<sym x1>, <lang if(inner, {
  //     `<-`(K, length(subtree));
  //     `<-`(mTop, .memberDend(subtree));
  //     `<-`(limit, integer(K));
  //     `<-`(xx1, x1);
  //     for(k, `:`(1, K), {
  //         `<-`(m, .memberDend(`[[`(subtree, k)));
  //         `<-`(xx1, `+`(xx1, `(`(if(center, `/`(`*`(`(`(`-`(x2, x1)), m), mTop), m))));
  //         `<-`(`[`(limit, k), xx1)
  //       });
  //     limit
  //   }, x2)>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D4_:;
  // deopt 13 [x7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // inner = ld inner
  Rsh_Fir_reg_inner = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

D5_:;
  // deopt 15 [inner]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_inner;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // inner1 = force? inner
  Rsh_Fir_reg_inner1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inner);
  // checkMissing(inner1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_inner1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c6 = `as.logical`(inner1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_inner1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c6 then L27() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L27()
    goto L27_;
  } else {
  // L2()
    goto L2_;
  }

L27_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard1 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // subtree3 = ld subtree
  Rsh_Fir_reg_subtree3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L29_:;
  // r6 = dyn base1(<sym subtree>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D6_:;
  // deopt 19 [subtree3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_subtree3_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // subtree4 = force? subtree3
  Rsh_Fir_reg_subtree4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree3_);
  // checkMissing(subtree4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_subtree4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r8 = dyn length(subtree4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_subtree4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

D7_:;
  // deopt 22 [r8]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;

D8_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p1 = prom<V +>{
  //   subtree5 = ld subtree;
  //   subtree6 = force? subtree5;
  //   checkMissing(subtree6);
  //   return subtree6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2966827304_1, CCP, RHO);
  // r10 = dyn _memberDend(p1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__memberDend, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

D9_:;
  // deopt 27 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L33_:;
  // st mTop = r10
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L34() else D10()
  // L34()
  goto L34_;

D10_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p2 = prom<V +>{
  //   K = ld K;
  //   K1 = force? K;
  //   checkMissing(K1);
  //   return K1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2966827304_2, CCP, RHO);
  // r12 = dyn integer(p2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L35() else D11()
  // L35()
  goto L35_;

D11_:;
  // deopt 32 [r12]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L35_:;
  // st limit = r12
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // x9 = ld x1
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D12()
  // L36()
  goto L36_;

D12_:;
  // deopt 34 [x9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // st xx1 = x10
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x10_, RHO);
  (void)(Rsh_Fir_reg_x10_);
  // K2 = ld K
  Rsh_Fir_reg_K2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L37() else D13()
  // L37()
  goto L37_;

D13_:;
  // deopt 38 [1, K2]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_K2_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // K3 = force? K2
  Rsh_Fir_reg_K3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_K2_);
  // checkMissing(K3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_K3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // r13 = `:`(1, K3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_K3_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // s = toForSeq(r13)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 25);
  // goto L4(i)
  // L4(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L4_;

L38_:;
  // limit = ld limit
  Rsh_Fir_reg_limit = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L55() else D25()
  // L55()
  goto L55_;

D14_:;
  // deopt 42 [i2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L39_:;
  // p3 = prom<V +>{
  //   subtree7 = ld subtree;
  //   subtree8 = force? subtree7;
  //   checkMissing(subtree8);
  //   c8 = `is.object`(subtree8);
  //   if c8 then L1() else L2(subtree8);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", subtree8);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(subtree10):
  //   k = ld k;
  //   k1 = force? k;
  //   __ = ldf `[[` in base;
  //   r14 = dyn __(subtree10, k1);
  //   goto L0(r14);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2966827304_3, CCP, RHO);
  // r16 = dyn _memberDend1(p3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__memberDend1_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L40() else D15()
  // L40()
  goto L40_;

D15_:;
  // deopt 44 [i2, r16]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L40_:;
  // st m = r16
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // xx1 = ld xx1
  Rsh_Fir_reg_xx1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L41() else D16()
  // L41()
  goto L41_;

D16_:;
  // deopt 46 [i2, xx1]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_xx1_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L41_:;
  // xx2 = force? xx1
  Rsh_Fir_reg_xx2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx1_);
  // checkMissing(xx2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_xx2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // center1 = ld center
  Rsh_Fir_reg_center1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L42() else D17()
  // L42()
  goto L42_;

D17_:;
  // deopt 47 [i2, xx2, center1]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_xx2_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_center1_;
  Rsh_Fir_deopt(47, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L42_:;
  // center2 = force? center1
  Rsh_Fir_reg_center2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center1_);
  // checkMissing(center2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_center2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(center2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_center2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c9 then L43() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L43()
    goto L43_;
  } else {
  // L5()
    goto L5_;
  }

L43_:;
  // x12 = ld x2
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L44() else D18()
  // L44()
  goto L44_;

D18_:;
  // deopt 49 [i2, xx2, x12]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_xx2_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L44_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // x14 = ld x1
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D19()
  // L45()
  goto L45_;

D19_:;
  // deopt 50 [i2, xx2, x13, x14]
  SEXP Rsh_Fir_array_deopt_stack16[4];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_xx2_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(50, 4, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L45_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r17 = `-`(x13, x15)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_x15_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L46() else D20()
  // L46()
  goto L46_;

D20_:;
  // deopt 52 [i2, xx2, r17, m]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_xx2_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(52, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L46_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r18 = `*`(r17, m1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // mTop = ld mTop
  Rsh_Fir_reg_mTop = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L47() else D21()
  // L47()
  goto L47_;

D21_:;
  // deopt 54 [i2, xx2, r18, mTop]
  SEXP Rsh_Fir_array_deopt_stack18[4];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_xx2_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_mTop;
  Rsh_Fir_deopt(54, 4, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L47_:;
  // mTop1 = force? mTop
  Rsh_Fir_reg_mTop1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mTop);
  // checkMissing(mTop1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_mTop1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r19 = `/`(r18, mTop1)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_mTop1_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L6(i2, xx2, r19)
  // L6(i2, xx2, r19)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_xx5_ = Rsh_Fir_reg_xx2_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L6_;

D22_:;
  // deopt 57 [i2, xx2, m2]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_xx2_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(57, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L49_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // goto L6(i2, xx2, m3)
  // L6(i2, xx2, m3)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_xx5_ = Rsh_Fir_reg_xx2_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_m3_;
  goto L6_;

D23_:;
  // deopt 62 [i7, xx6]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_xx6_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L50_:;
  // xx7 = force? xx6
  Rsh_Fir_reg_xx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx6_);
  // checkMissing(xx7)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_xx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // l1 = ld limit
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c10 = `is.object`(l1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c10 then L51() else L52(i7, xx7, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L51()
    goto L51_;
  } else {
  // L52(i7, xx7, l1)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_xx9_ = Rsh_Fir_reg_xx7_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L52_;
  }

L51_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l1, xx7)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_xx7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args59);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc1 then L53() else L52(i7, xx7, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L53()
    goto L53_;
  } else {
  // L52(i7, xx7, dr2)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_xx9_ = Rsh_Fir_reg_xx7_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr2_;
    goto L52_;
  }

L52_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L54() else D24()
  // L54()
  goto L54_;

L53_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L7(i7, dx2)
  // L7(i7, dx2)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D24_:;
  // deopt 65 [i9, xx9, l3, xx7, k2]
  SEXP Rsh_Fir_array_deopt_stack21[5];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_xx9_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_xx7_;
  Rsh_Fir_array_deopt_stack21[4] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(65, 5, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L54_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r22 = dyn ___(l3, xx7, k3)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_xx7_;
  Rsh_Fir_array_args62[2] = Rsh_Fir_reg_k3_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(i9, r22)
  // L7(i9, r22)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L7_;

D25_:;
  // deopt 73 [limit]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_limit;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L55_:;
  // limit1 = force? limit
  Rsh_Fir_reg_limit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_limit);
  // checkMissing(limit1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_limit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // goto L9(limit1)
  // L9(limit1)
  Rsh_Fir_reg_limit2_ = Rsh_Fir_reg_limit1_;
  goto L9_;

D26_:;
  // deopt 75 [x16]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L57_:;
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // goto L9(x17)
  // L9(x17)
  Rsh_Fir_reg_limit2_ = Rsh_Fir_reg_x17_;
  goto L9_;

D27_:;
  // deopt 78 [r23]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L1(r23)
  // L1(r23)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r23_;
  goto L1_;

L59_:;
  // subtree11 = ld subtree
  Rsh_Fir_reg_subtree11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L61() else D28()
  // L61()
  goto L61_;

L60_:;
  // r24 = dyn base2(<sym subtree>, "midpoint")
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L10_;

D28_:;
  // deopt 82 [subtree11]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_subtree11_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L61_:;
  // subtree12 = force? subtree11
  Rsh_Fir_reg_subtree12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree11_);
  // checkMissing(subtree12)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_subtree12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r26 = dyn attr(subtree12, "midpoint")
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_subtree12_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L62() else D29()
  // L62()
  goto L62_;

D29_:;
  // deopt 86 [r26]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L10(r26)
  // L10(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L10_;

D30_:;
  // deopt 88 [center3]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_center3_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L63_:;
  // center4 = force? center3
  Rsh_Fir_reg_center4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center3_);
  // checkMissing(center4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_center4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c12 = `as.logical`(center4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_center4_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c12 then L11(c12) else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L11(c12)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c12_;
    goto L11_;
  } else {
  // L64()
    goto L64_;
  }

L64_:;
  // inner2 = ld inner
  Rsh_Fir_reg_inner2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L65() else D31()
  // L65()
  goto L65_;

D31_:;
  // deopt 90 [c12, inner2]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_inner2_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L65_:;
  // inner3 = force? inner2
  Rsh_Fir_reg_inner3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inner2_);
  // checkMissing(inner3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_inner3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c15 = `as.logical`(inner3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_inner3_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c15 then L66() else L12(c12, c15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L66()
    goto L66_;
  } else {
  // L12(c12, c15)
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c12_;
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c15_;
    goto L12_;
  }

L66_:;
  // sym3 = ldf `is.numeric`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base3 = ldf `is.numeric` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard3 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L67_:;
  // mid = ld mid
  Rsh_Fir_reg_mid = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L69() else D32()
  // L69()
  goto L69_;

L68_:;
  // r27 = dyn base3(<sym mid>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L13(c12, c15, r27)
  // L13(c12, c15, r27)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L13_;

D32_:;
  // deopt 94 [c12, c15, mid]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_mid;
  Rsh_Fir_deopt(94, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L69_:;
  // mid1 = force? mid
  Rsh_Fir_reg_mid1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mid);
  // checkMissing(mid1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_mid1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r29 = dyn is_numeric(mid1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_mid1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L70() else D33()
  // L70()
  goto L70_;

D33_:;
  // deopt 97 [c12, c15, r29]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L13(c12, c15, r29)
  // L13(c12, c15, r29)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L13_;

D34_:;
  // deopt 102 [center5]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_center5_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L73_:;
  // center6 = force? center5
  Rsh_Fir_reg_center6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center5_);
  // checkMissing(center6)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_center6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // c33 = `as.logical`(center6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_center6_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c33 then L74() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L74()
    goto L74_;
  } else {
  // L14()
    goto L14_;
  }

L74_:;
  // mean = ldf mean
  Rsh_Fir_reg_mean = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L75() else D35()
  // L75()
  goto L75_;

D35_:;
  // deopt 105 []
  Rsh_Fir_deopt(105, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p4 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   x18 = ld x1;
  //   x19 = force? x18;
  //   checkMissing(x19);
  //   x20 = ld x2;
  //   x21 = force? x20;
  //   checkMissing(x21);
  //   c34 = ldf c in base;
  //   r33 = dyn c34(x19, x21);
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base4(<sym x1>, <sym x2>);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2966827304_4, CCP, RHO);
  // r35 = dyn mean(p4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mean, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L76() else D36()
  // L76()
  goto L76_;

D36_:;
  // deopt 107 [r35]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L15(r35)
  // L15(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L15_;

D37_:;
  // deopt 108 [x22]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L78_:;
  // x23 = force? x22
  Rsh_Fir_reg_x23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x22_);
  // checkMissing(x23)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // _midDend = ldf `.midDend`
  Rsh_Fir_reg__midDend = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L79() else D38()
  // L79()
  goto L79_;

D38_:;
  // deopt 110 [x23]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L79_:;
  // p5 = prom<V +>{
  //   subtree13 = ld subtree;
  //   subtree14 = force? subtree13;
  //   checkMissing(subtree14);
  //   return subtree14;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2966827304_5, CCP, RHO);
  // r38 = dyn _midDend(p5)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__midDend, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L80() else D39()
  // L80()
  goto L80_;

D39_:;
  // deopt 112 [x23, r38]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L80_:;
  // r39 = `+`(x23, r38)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L15(r39)
  // L15(r39)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r39_;
  goto L15_;

L81_:;
  // x24 = ld x
  Rsh_Fir_reg_x24_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L83() else D40()
  // L83()
  goto L83_;

L82_:;
  // r40 = dyn base5[x, limit](<sym x>, <sym limit>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L16(r40)
  // L16(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L16_;

D40_:;
  // deopt 117 [x24]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L83_:;
  // x25 = force? x24
  Rsh_Fir_reg_x25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x24_);
  // checkMissing(x25)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // limit3 = ld limit
  Rsh_Fir_reg_limit3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L84() else D41()
  // L84()
  goto L84_;

D41_:;
  // deopt 120 [limit3]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_limit3_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L84_:;
  // limit4 = force? limit3
  Rsh_Fir_reg_limit4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_limit3_);
  // checkMissing(limit4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_limit4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r42 = dyn list(x25, limit4)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_limit4_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L85() else D42()
  // L85()
  goto L85_;

D42_:;
  // deopt 124 [r42]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L16(r42)
  // L16(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L16_;
}
SEXP Rsh_Fir_user_promise_inner2966827304_(SEXP CCP, SEXP RHO) {
  // subtree1 = ld subtree
  Rsh_Fir_reg_subtree1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // subtree2 = force? subtree1
  Rsh_Fir_reg_subtree2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree1_);
  // checkMissing(subtree2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_subtree2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return subtree2
  return Rsh_Fir_reg_subtree2_;
}
SEXP Rsh_Fir_user_promise_inner2966827304_1(SEXP CCP, SEXP RHO) {
  // subtree5 = ld subtree
  Rsh_Fir_reg_subtree5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // subtree6 = force? subtree5
  Rsh_Fir_reg_subtree6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree5_);
  // checkMissing(subtree6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_subtree6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return subtree6
  return Rsh_Fir_reg_subtree6_;
}
SEXP Rsh_Fir_user_promise_inner2966827304_2(SEXP CCP, SEXP RHO) {
  // K = ld K
  Rsh_Fir_reg_K = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // K1 = force? K
  Rsh_Fir_reg_K1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_K);
  // checkMissing(K1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_K1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return K1
  return Rsh_Fir_reg_K1_;
}
SEXP Rsh_Fir_user_promise_inner2966827304_3(SEXP CCP, SEXP RHO) {
  // subtree7 = ld subtree
  Rsh_Fir_reg_subtree7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // subtree8 = force? subtree7
  Rsh_Fir_reg_subtree8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree7_);
  // checkMissing(subtree8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_subtree8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(subtree8)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_subtree8_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(subtree8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(subtree8)
    Rsh_Fir_reg_subtree10_ = Rsh_Fir_reg_subtree8_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", subtree8)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_subtree8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_subtree10_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r14 = dyn __(subtree10, k1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_subtree10_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_k1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2966827304_4(SEXP CCP, SEXP RHO) {
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // x18 = ld x1
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // x20 = ld x2
  Rsh_Fir_reg_x20_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x21 = force? x20
  Rsh_Fir_reg_x21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x20_);
  // checkMissing(x21)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c34 = ldf c in base
  Rsh_Fir_reg_c34_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r33 = dyn c34(x19, x21)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c34_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base4(<sym x1>, <sym x2>)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2966827304_5(SEXP CCP, SEXP RHO) {
  // subtree13 = ld subtree
  Rsh_Fir_reg_subtree13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // subtree14 = force? subtree13
  Rsh_Fir_reg_subtree14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subtree13_);
  // checkMissing(subtree14)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_subtree14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return subtree14
  return Rsh_Fir_reg_subtree14_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
