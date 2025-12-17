#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3929323065_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3929323065_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3929323065_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner3929323065
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3929323065_, RHO, CCP);
  // st `relist.list` = r
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
SEXP Rsh_Fir_user_function_inner3929323065_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3929323065 dynamic dispatch ([flesh, skeleton])

  return Rsh_Fir_user_version_inner3929323065_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3929323065_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3929323065 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3929323065/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_flesh;  // flesh
  SEXP Rsh_Fir_reg_skeleton;  // skeleton
  SEXP Rsh_Fir_reg_skeleton_isMissing;  // skeleton_isMissing
  SEXP Rsh_Fir_reg_skeleton_orDefault;  // skeleton_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_flesh1_;  // flesh1
  SEXP Rsh_Fir_reg_flesh2_;  // flesh2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_skeleton1_;  // skeleton1
  SEXP Rsh_Fir_reg_skeleton2_;  // skeleton2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_skeleton3_;  // skeleton3
  SEXP Rsh_Fir_reg_skeleton4_;  // skeleton4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_result;  // result
  SEXP Rsh_Fir_reg_result1_;  // result1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_result3_;  // result3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_skel_i;  // skel_i
  SEXP Rsh_Fir_reg_skel_i1_;  // skel_i1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_flesh3_;  // flesh3
  SEXP Rsh_Fir_reg_flesh4_;  // flesh4
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_flesh6_;  // flesh6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_unlist;  // unlist
  SEXP Rsh_Fir_reg_skel_i2_;  // skel_i2
  SEXP Rsh_Fir_reg_skel_i3_;  // skel_i3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_relist;  // relist
  SEXP Rsh_Fir_reg_flesh7_;  // flesh7
  SEXP Rsh_Fir_reg_flesh8_;  // flesh8
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_flesh10_;  // flesh10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_flesh13_;  // flesh13
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_skel_i4_;  // skel_i4
  SEXP Rsh_Fir_reg_skel_i5_;  // skel_i5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_size3_;  // size3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_result4_;  // result4
  SEXP Rsh_Fir_reg_result5_;  // result5

  // Bind parameters
  Rsh_Fir_reg_flesh = PARAMS[0];
  Rsh_Fir_reg_skeleton = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st flesh = flesh
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_flesh, RHO);
  (void)(Rsh_Fir_reg_flesh);
  // skeleton_isMissing = missing.0(skeleton)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_skeleton;
  Rsh_Fir_reg_skeleton_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if skeleton_isMissing then L0() else L1(skeleton)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_skeleton_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(skeleton)
    Rsh_Fir_reg_skeleton_orDefault = Rsh_Fir_reg_skeleton;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf attr;
  //   base = ldf attr in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   flesh1 = ld flesh;
  //   flesh2 = force? flesh1;
  //   checkMissing(flesh2);
  //   attr = ldf attr in base;
  //   r2 = dyn attr(flesh2, "skeleton");
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym flesh>, "skeleton");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_skeleton_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st skeleton = skeleton_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_skeleton_orDefault, RHO);
  (void)(Rsh_Fir_reg_skeleton_orDefault);
  // st ind = 1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_const(CCP, 5), RHO);
  (void)(Rsh_const(CCP, 5));
  // skeleton1 = ld skeleton
  Rsh_Fir_reg_skeleton1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L2_:;
  // s = toForSeq(r5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 7);
  // goto L3(i)
  // L3(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L3_;

L3_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if c then L16() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L16()
    goto L16_;
  } else {
  // L11()
    goto L11_;
  }

L4_:;
  // st skel_i = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L5_:;
  // c3 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c3 then L25() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L25()
    goto L25_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L8(i13)
  // L8(i13)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i13_;
  goto L8_;

L7_:;
  // st skel_i = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L8(i19)
  // L8(i19)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i19_;
  goto L8_;

L8_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard3 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L9_:;
  // st size = r12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // relist = ldf relist
  Rsh_Fir_reg_relist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L10_:;
  // st result = dx8
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

L11_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D0_:;
  // deopt 3 [skeleton1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_skeleton1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // skeleton2 = force? skeleton1
  Rsh_Fir_reg_skeleton2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skeleton1_);
  // checkMissing(skeleton2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_skeleton2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // st result = skeleton2
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_skeleton2_, RHO);
  (void)(Rsh_Fir_reg_skeleton2_);
  // sym1 = ldf seq_along
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf seq_along in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // skeleton3 = ld skeleton
  Rsh_Fir_reg_skeleton3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

L14_:;
  // r4 = dyn base1(<sym skeleton>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D1_:;
  // deopt 7 [skeleton3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_skeleton3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // skeleton4 = force? skeleton3
  Rsh_Fir_reg_skeleton4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skeleton3_);
  // checkMissing(skeleton4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_skeleton4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // r6 = seq_along(skeleton4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_skeleton4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L16_:;
  // result4 = ld result
  Rsh_Fir_reg_result4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

D2_:;
  // deopt 10 [i2, result]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(result1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_result1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c1 then L18() else L19(i2, result1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L18()
    goto L18_;
  } else {
  // L19(i2, result1)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_result3_ = Rsh_Fir_reg_result1_;
    goto L19_;
  }

L18_:;
  // dr = tryDispatchBuiltin.1("[[", result1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_result1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc then L20() else L19(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L20()
    goto L20_;
  } else {
  // L19(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_result3_ = Rsh_Fir_reg_dr;
    goto L19_;
  }

L19_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

L20_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L4(i2, dx)
  // L4(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D3_:;
  // deopt 12 [i6, result3, i9]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_result3_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(12, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L21_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r7 = dyn __(result3, i10)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_result3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(i6, r7)
  // L4(i6, r7)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L4_;

L22_:;
  // skel_i = ld skel_i
  Rsh_Fir_reg_skel_i = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L23_:;
  // r8 = dyn base2(<sym skel_i>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(i8, r8)
  // L5(i8, r8)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L5_;

D4_:;
  // deopt 17 [i8, skel_i]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_skel_i;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // skel_i1 = force? skel_i
  Rsh_Fir_reg_skel_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skel_i);
  // checkMissing(skel_i1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_skel_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c2 = `==`(skel_i1, NULL)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_skel_i1_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L5(i8, c2)
  // L5(i8, c2)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c2_;
  goto L5_;

L25_:;
  // flesh3 = ld flesh
  Rsh_Fir_reg_flesh3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

D5_:;
  // deopt 20 [i13, flesh3]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_flesh3_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // flesh4 = force? flesh3
  Rsh_Fir_reg_flesh4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flesh3_);
  // checkMissing(flesh4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_flesh4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(flesh4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_flesh4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c4 then L27() else L28(i13, flesh4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L27()
    goto L27_;
  } else {
  // L28(i13, flesh4)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_flesh6_ = Rsh_Fir_reg_flesh4_;
    goto L28_;
  }

L27_:;
  // dr2 = tryDispatchBuiltin.1("[", flesh4)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_flesh4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc1 then L29() else L28(i13, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L29()
    goto L29_;
  } else {
  // L28(i13, dr2)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_flesh6_ = Rsh_Fir_reg_dr2_;
    goto L28_;
  }

L28_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r10 = dyn __1(flesh6, 0.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_flesh6_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(i17, r10)
  // L7(i17, r10)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r10_;
  goto L7_;

L29_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L7(i13, dx2)
  // L7(i13, dx2)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

L31_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

L32_:;
  // r11 = dyn base3(<lang unlist(skel_i)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L9(i20, r11)
  // L9(i20, r11)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L9_;

D6_:;
  // deopt 31 [i20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // p1 = prom<V +>{
  //   skel_i2 = ld skel_i;
  //   skel_i3 = force? skel_i2;
  //   checkMissing(skel_i3);
  //   return skel_i3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_1, CCP, RHO);
  // r14 = dyn unlist(p1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

D7_:;
  // deopt 33 [i20, r14]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L34_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r15 = dyn length(r14)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

D8_:;
  // deopt 35 [i20, r15]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L9(i20, r15)
  // L9(i20, r15)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r15_;
  goto L9_;

D9_:;
  // deopt 38 [i23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // p2 = prom<V +>{
  //   flesh7 = ld flesh;
  //   flesh8 = force? flesh7;
  //   checkMissing(flesh8);
  //   c5 = `is.object`(flesh8);
  //   if c5 then L2() else L3(flesh8);
  // L0(dx6):
  //   return dx6;
  // L2():
  //   dr4 = tryDispatchBuiltin.1("[", flesh8);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L4() else L3(dr4);
  // L3(flesh10):
  //   sym4 = ldf `seq.int`;
  //   base4 = ldf `seq.int` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L5() else L6();
  // L1(flesh13, r17):
  //   __2 = ldf `[` in base;
  //   r19 = dyn __2(flesh13, r17);
  //   goto L0(r19);
  // L4():
  //   dx5 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx5);
  // L5():
  //   ind = ld ind;
  //   ind1 = force? ind;
  //   checkMissing(ind1);
  //   size = ld size;
  //   size1 = force? size;
  //   checkMissing(size1);
  //   seq_int = ldf `seq.int` in base;
  //   r18 = dyn seq_int(ind1, size1);
  //   goto L1(flesh10, r18);
  // L6():
  //   r16 = dyn base4[, `length.out`](<sym ind>, <sym size>);
  //   goto L1(flesh10, r16);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_2, CCP, RHO);
  // p3 = prom<V +>{
  //   skel_i4 = ld skel_i;
  //   skel_i5 = force? skel_i4;
  //   checkMissing(skel_i5);
  //   return skel_i5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_3, CCP, RHO);
  // r22 = dyn relist(p2, p3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_relist, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

D10_:;
  // deopt 41 [i23, r22]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // l1 = ld result
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c6 = `is.object`(l1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c6 then L38() else L39(i23, r22, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L38()
    goto L38_;
  } else {
  // L39(i23, r22, l1)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i23_;
    Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L39_;
  }

L38_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l1, r22)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args51);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc3 then L40() else L39(i23, r22, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L40()
    goto L40_;
  } else {
  // L39(i23, r22, dr6)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i23_;
    Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr6_;
    goto L39_;
  }

L39_:;
  // i28 = ld i
  Rsh_Fir_reg_i28_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

L40_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L10(i23, dx7)
  // L10(i23, dx7)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L10_;

D11_:;
  // deopt 43 [i25, r24, l3, r22, i28]
  SEXP Rsh_Fir_array_deopt_stack11[5];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack11[4] = Rsh_Fir_reg_i28_;
  Rsh_Fir_deopt(43, 5, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L41_:;
  // i29 = force? i28
  Rsh_Fir_reg_i29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i28_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r27 = dyn ____(l3, r22, i29)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_i29_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(i25, r27)
  // L10(i25, r27)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r27_;
  goto L10_;

D12_:;
  // deopt 47 [i27, ind2]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L42_:;
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // checkMissing(ind3)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ind3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // size2 = ld size
  Rsh_Fir_reg_size2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L43() else D13()
  // L43()
  goto L43_;

D13_:;
  // deopt 48 [i27, ind3, size2]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_size2_;
  Rsh_Fir_deopt(48, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L43_:;
  // size3 = force? size2
  Rsh_Fir_reg_size3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size2_);
  // checkMissing(size3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_size3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r28 = `+`(ind3, size3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_size3_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // st ind = r28
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // goto L3(i27)
  // L3(i27)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i27_;
  goto L3_;

D14_:;
  // deopt 55 [result4]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_result4_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L44_:;
  // result5 = force? result4
  Rsh_Fir_reg_result5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result4_);
  // checkMissing(result5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_result5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result5
  return Rsh_Fir_reg_result5_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_(SEXP CCP, SEXP RHO) {
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf attr in base
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
  // flesh1 = ld flesh
  Rsh_Fir_reg_flesh1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // flesh2 = force? flesh1
  Rsh_Fir_reg_flesh2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flesh1_);
  // checkMissing(flesh2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_flesh2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn attr(flesh2, "skeleton")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_flesh2_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym flesh>, "skeleton")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_1(SEXP CCP, SEXP RHO) {
  // skel_i2 = ld skel_i
  Rsh_Fir_reg_skel_i2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // skel_i3 = force? skel_i2
  Rsh_Fir_reg_skel_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skel_i2_);
  // checkMissing(skel_i3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_skel_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return skel_i3
  return Rsh_Fir_reg_skel_i3_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_2(SEXP CCP, SEXP RHO) {
  // flesh7 = ld flesh
  Rsh_Fir_reg_flesh7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // flesh8 = force? flesh7
  Rsh_Fir_reg_flesh8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flesh7_);
  // checkMissing(flesh8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_flesh8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(flesh8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_flesh8_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c5 then L2() else L3(flesh8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L2()
    goto L2_;
  } else {
  // L3(flesh8)
    Rsh_Fir_reg_flesh10_ = Rsh_Fir_reg_flesh8_;
    goto L3_;
  }

L0_:;
  // return dx6
  return Rsh_Fir_reg_dx6_;

L1_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r19 = dyn __2(flesh13, r17)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_flesh13_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // dr4 = tryDispatchBuiltin.1("[", flesh8)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_flesh8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc2 then L4() else L3(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr4)
    Rsh_Fir_reg_flesh10_ = Rsh_Fir_reg_dr4_;
    goto L3_;
  }

L3_:;
  // sym4 = ldf `seq.int`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base4 = ldf `seq.int` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard4 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L0(dx5)
  // L0(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L0_;

L5_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // size = ld size
  Rsh_Fir_reg_size = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // size1 = force? size
  Rsh_Fir_reg_size1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size);
  // checkMissing(size1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_size1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r18 = dyn seq_int(ind1, size1)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_size1_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(flesh10, r18)
  // L1(flesh10, r18)
  Rsh_Fir_reg_flesh13_ = Rsh_Fir_reg_flesh10_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L1_;

L6_:;
  // r16 = dyn base4[, `length.out`](<sym ind>, <sym size>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(flesh10, r16)
  // L1(flesh10, r16)
  Rsh_Fir_reg_flesh13_ = Rsh_Fir_reg_flesh10_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_3(SEXP CCP, SEXP RHO) {
  // skel_i4 = ld skel_i
  Rsh_Fir_reg_skel_i4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // skel_i5 = force? skel_i4
  Rsh_Fir_reg_skel_i5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skel_i4_);
  // checkMissing(skel_i5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_skel_i5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return skel_i5
  return Rsh_Fir_reg_skel_i5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
