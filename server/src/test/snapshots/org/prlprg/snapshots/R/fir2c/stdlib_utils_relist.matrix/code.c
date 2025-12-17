#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3929323065_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3929323065_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3929323065_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3929323065_9(SEXP CCP, SEXP RHO);
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
  // st `relist.matrix` = r
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
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_skeleton1_;  // skeleton1
  SEXP Rsh_Fir_reg_skeleton2_;  // skeleton2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_skeleton3_;  // skeleton3
  SEXP Rsh_Fir_reg_skeleton4_;  // skeleton4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_skeleton5_;  // skeleton5
  SEXP Rsh_Fir_reg_skeleton6_;  // skeleton6
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_skeleton8_;  // skeleton8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_flesh3_;  // flesh3
  SEXP Rsh_Fir_reg_flesh4_;  // flesh4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_skeleton9_;  // skeleton9
  SEXP Rsh_Fir_reg_skeleton10_;  // skeleton10
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_skeleton11_;  // skeleton11
  SEXP Rsh_Fir_reg_skeleton12_;  // skeleton12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_unlist;  // unlist
  SEXP Rsh_Fir_reg_skeleton13_;  // skeleton13
  SEXP Rsh_Fir_reg_skeleton14_;  // skeleton14
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_skeleton16_;  // skeleton16
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_relist;  // relist
  SEXP Rsh_Fir_reg_flesh5_;  // flesh5
  SEXP Rsh_Fir_reg_flesh6_;  // flesh6
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_flesh8_;  // flesh8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_flesh11_;  // flesh11
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_skeleton17_;  // skeleton17
  SEXP Rsh_Fir_reg_skeleton18_;  // skeleton18
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_skeleton20_;  // skeleton20
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_size3_;  // size3
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_result;  // result
  SEXP Rsh_Fir_reg_result1_;  // result1

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
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L2_:;
  // c6 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c6 then L24() else L3(c6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L24()
    goto L24_;
  } else {
  // L3(c6)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L3_;
  }

L3_:;
  // c20 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c20 then L33() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L33()
    goto L33_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // c17 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c18 = `&&`(c11, c17)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L3(c18)
  // L3(c18)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c18_;
  goto L3_;

L5_:;
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r11 = dyn is_numeric(dx1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L6_:;
  // skeleton11 = ld skeleton
  Rsh_Fir_reg_skeleton11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L38() else D10()
  // L38()
  goto L38_;

L8_:;
  // s = toForSeq(r23)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 7);
  // goto L9(i)
  // L9(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L9_;

L9_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // c21 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if c21 then L42() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L42()
    goto L42_;
  } else {
  // L15()
    goto L15_;
  }

L10_:;
  // s1 = toForSeq(r26)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // i8 = 0
  Rsh_Fir_reg_i8_ = Rsh_const(CCP, 7);
  // goto L11(i7, i8)
  // L11(i7, i8)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
  goto L11_;

L11_:;
  // i11 = `+`.1(i10, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i11_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // c22 = `<`.1(l1, i11)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if c22 then L46() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L46()
    goto L46_;
  } else {
  // L14()
    goto L14_;
  }

L12_:;
  // st size = r29
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // relist = ldf relist
  Rsh_Fir_reg_relist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L52() else D16()
  // L52()
  goto L52_;

L13_:;
  // st result = dx9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L59() else D20()
  // L59()
  goto L59_;

L14_:;
  // x1 = `[[`(s1, i11, NULL, TRUE)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard5 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L15_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // st j = x
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym4 = ldf seq_len
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf seq_len in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard4 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p1 = prom<V +>{
  //   skeleton1 = ld skeleton;
  //   skeleton2 = force? skeleton1;
  //   checkMissing(skeleton2);
  //   return skeleton2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_1, CCP, RHO);
  // r5 = dyn nrow(p1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // st n = r5
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p2 = prom<V +>{
  //   skeleton3 = ld skeleton;
  //   skeleton4 = force? skeleton3;
  //   checkMissing(skeleton4);
  //   return skeleton4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_2, CCP, RHO);
  // r7 = dyn ncol(p2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 8 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // st m = r7
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

D4_:;
  // deopt 10 [n]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(n1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c then L21() else L2(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L2(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L2_;
  }

L21_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

D5_:;
  // deopt 12 [c, m]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(m1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // c4 = `&&`(c, c3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L2(c4)
  // L2(c4)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c4_;
  goto L2_;

L24_:;
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // skeleton5 = ld skeleton
  Rsh_Fir_reg_skeleton5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

L26_:;
  // r8 = dyn base1(<lang `[`(skeleton, 1.0, 1.0)>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(c6, r8)
  // L4(c6, r8)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L4_;

D6_:;
  // deopt 17 [c6, skeleton5]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_skeleton5_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // skeleton6 = force? skeleton5
  Rsh_Fir_reg_skeleton6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skeleton5_);
  // checkMissing(skeleton6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_skeleton6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(skeleton6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_skeleton6_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c12 then L28() else L29(c6, skeleton6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L28()
    goto L28_;
  } else {
  // L29(c6, skeleton6)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_skeleton8_ = Rsh_Fir_reg_skeleton6_;
    goto L29_;
  }

L28_:;
  // dr = tryDispatchBuiltin.1("[", skeleton6)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_skeleton6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L30() else L29(c6, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L30()
    goto L30_;
  } else {
  // L29(c6, dr)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_skeleton8_ = Rsh_Fir_reg_dr;
    goto L29_;
  }

L29_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r10 = dyn __(skeleton8, 1.0, 1.0)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_skeleton8_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(c14, r10)
  // L5(c14, r10)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L5_;

L30_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L5(c6, dx)
  // L5(c6, dx)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D7_:;
  // deopt 24 [c16, r11]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L4(c16, r11)
  // L4(c16, r11)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r11_;
  goto L4_;

L33_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p3 = prom<V +>{
  //   flesh3 = ld flesh;
  //   flesh4 = force? flesh3;
  //   checkMissing(flesh4);
  //   return flesh4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_3, CCP, RHO);
  // p4 = prom<V +>{
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   return n3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_4, CCP, RHO);
  // p5 = prom<V +>{
  //   m2 = ld m;
  //   m3 = force? m2;
  //   checkMissing(m3);
  //   return m3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_5, CCP, RHO);
  // p6 = prom<V +>{
  //   sym2 = ldf dimnames;
  //   base2 = ldf dimnames in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   skeleton9 = ld skeleton;
  //   skeleton10 = force? skeleton9;
  //   checkMissing(skeleton10);
  //   dimnames = ldf dimnames in base;
  //   r17 = dyn dimnames(skeleton10);
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base2(<sym skeleton>);
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_6, CCP, RHO);
  // r19 = dyn matrix[, nrow, ncol, dimnames](p3, p4, p5, p6)
  SEXP Rsh_Fir_array_args46[4];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args46[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args46[3] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names9[3] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 4, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

D9_:;
  // deopt 35 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_;

D10_:;
  // deopt 39 [skeleton11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_skeleton11_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // skeleton12 = force? skeleton11
  Rsh_Fir_reg_skeleton12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skeleton11_);
  // checkMissing(skeleton12)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_skeleton12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // st result = skeleton12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_skeleton12_, RHO);
  (void)(Rsh_Fir_reg_skeleton12_);
  // st ind = 1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 8), RHO);
  (void)(Rsh_const(CCP, 8));
  // sym3 = ldf seq_len
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf seq_len in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard3 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

L40_:;
  // r22 = dyn base3(<sym m>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L8_;

D11_:;
  // deopt 46 [m4]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_m4_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L41_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r24 = seq_len(m5)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_m5_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L8(r24)
  // L8(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L8_;

L42_:;
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L61() else D22()
  // L61()
  goto L61_;

L43_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L45() else D12()
  // L45()
  goto L45_;

L44_:;
  // r25 = dyn base4(<sym n>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(i2, r25)
  // L10(i2, r25)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L10_;

D12_:;
  // deopt 50 [i2, n4]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L45_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r27 = seq_len(n5)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L10(i2, r27)
  // L10(i2, r27)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L10_;

L46_:;
  // goto L9(i9)
  // L9(i9)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i9_;
  goto L9_;

L47_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

L48_:;
  // r28 = dyn base5(<lang unlist(`[[`(skeleton, i, j))>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(i9, i11, r28)
  // L12(i9, i11, r28)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L12_;

D13_:;
  // deopt 56 [i9, i11]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // p7 = prom<V +>{
  //   skeleton13 = ld skeleton;
  //   skeleton14 = force? skeleton13;
  //   checkMissing(skeleton14);
  //   c23 = `is.object`(skeleton14);
  //   if c23 then L1() else L2(skeleton14);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[[", skeleton14);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(skeleton16):
  //   i22 = ld i;
  //   i23 = force? i22;
  //   j = ld j;
  //   j1 = force? j;
  //   __1 = ldf `[[` in base;
  //   r30 = dyn __1(skeleton16, i23, j1);
  //   goto L0(r30);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_7, CCP, RHO);
  // r32 = dyn unlist(p7)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L50() else D14()
  // L50()
  goto L50_;

D14_:;
  // deopt 58 [i9, i11, r32]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(58, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r33 = dyn length(r32)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L51() else D15()
  // L51()
  goto L51_;

D15_:;
  // deopt 60 [i9, i11, r33]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(60, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L12(i9, i11, r33)
  // L12(i9, i11, r33)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r33_;
  goto L12_;

D16_:;
  // deopt 63 [i20, i21]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L52_:;
  // p8 = prom<V +>{
  //   flesh5 = ld flesh;
  //   flesh6 = force? flesh5;
  //   checkMissing(flesh6);
  //   c24 = `is.object`(flesh6);
  //   if c24 then L2() else L3(flesh6);
  // L0(dx5):
  //   return dx5;
  // L2():
  //   dr4 = tryDispatchBuiltin.1("[", flesh6);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L4() else L3(dr4);
  // L3(flesh8):
  //   sym6 = ldf `seq.int`;
  //   base6 = ldf `seq.int` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L5() else L6();
  // L1(flesh11, r35):
  //   __2 = ldf `[` in base;
  //   r37 = dyn __2(flesh11, r35);
  //   goto L0(r37);
  // L4():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // L5():
  //   ind = ld ind;
  //   ind1 = force? ind;
  //   checkMissing(ind1);
  //   size = ld size;
  //   size1 = force? size;
  //   checkMissing(size1);
  //   seq_int = ldf `seq.int` in base;
  //   r36 = dyn seq_int(ind1, size1);
  //   goto L1(flesh8, r36);
  // L6():
  //   r34 = dyn base6[, `length.out`](<sym ind>, <sym size>);
  //   goto L1(flesh8, r34);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_8, CCP, RHO);
  // p9 = prom<V +>{
  //   skeleton17 = ld skeleton;
  //   skeleton18 = force? skeleton17;
  //   checkMissing(skeleton18);
  //   c25 = `is.object`(skeleton18);
  //   if c25 then L1() else L2(skeleton18);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", skeleton18);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(skeleton20):
  //   i24 = ld i;
  //   i25 = force? i24;
  //   j2 = ld j;
  //   j3 = force? j2;
  //   __3 = ldf `[[` in base;
  //   r39 = dyn __3(skeleton20, i25, j3);
  //   goto L0(r39);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3929323065_9, CCP, RHO);
  // r41 = dyn relist(p8, p9)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_relist, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L53() else D17()
  // L53()
  goto L53_;

D17_:;
  // deopt 66 [i20, i21, r41]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(66, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // l2 = ld result
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c26 = `is.object`(l2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if c26 then L54() else L55(i20, i21, r41, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L54()
    goto L54_;
  } else {
  // L55(i20, i21, r41, l2)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r41_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L55_;
  }

L54_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l2, r41)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args83);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc4 then L56() else L55(i20, i21, r41, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L56()
    goto L56_;
  } else {
  // L55(i20, i21, r41, dr8)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r41_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr8_;
    goto L55_;
  }

L55_:;
  // i34 = ld i
  Rsh_Fir_reg_i34_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L57() else D18()
  // L57()
  goto L57_;

L56_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L13(i20, i21, dx8)
  // L13(i20, i21, dx8)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L13_;

D18_:;
  // deopt 68 [i28, i29, r43, l4, r41, i34]
  SEXP Rsh_Fir_array_deopt_stack15[6];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack15[4] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack15[5] = Rsh_Fir_reg_i34_;
  Rsh_Fir_deopt(68, 6, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L57_:;
  // i35 = force? i34
  Rsh_Fir_reg_i35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i34_);
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L58() else D19()
  // L58()
  goto L58_;

D19_:;
  // deopt 69 [i28, i29, r43, l4, r41, i35, j4]
  SEXP Rsh_Fir_array_deopt_stack16[7];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack16[4] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack16[5] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack16[6] = Rsh_Fir_reg_j4_;
  Rsh_Fir_deopt(69, 7, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L58_:;
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r46 = dyn ____(l4, r41, i35, j5)
  SEXP Rsh_Fir_array_args86[4];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_args86[3] = Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 4, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L13(i28, i29, r46)
  // L13(i28, i29, r46)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r46_;
  goto L13_;

D20_:;
  // deopt 73 [i32, i33, ind2]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_deopt(73, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L59_:;
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // checkMissing(ind3)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_ind3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // size2 = ld size
  Rsh_Fir_reg_size2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L60() else D21()
  // L60()
  goto L60_;

D21_:;
  // deopt 74 [i32, i33, ind3, size2]
  SEXP Rsh_Fir_array_deopt_stack18[4];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_size2_;
  Rsh_Fir_deopt(74, 4, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L60_:;
  // size3 = force? size2
  Rsh_Fir_reg_size3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size2_);
  // checkMissing(size3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_size3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r47 = `+`(ind3, size3)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_size3_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // st ind = r47
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // goto L11(i32, i33)
  // L11(i32, i33)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i33_;
  goto L11_;

D22_:;
  // deopt 84 [result]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L61_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result1
  return Rsh_Fir_reg_result1_;
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
  // skeleton1 = ld skeleton
  Rsh_Fir_reg_skeleton1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // skeleton2 = force? skeleton1
  Rsh_Fir_reg_skeleton2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skeleton1_);
  // checkMissing(skeleton2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_skeleton2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return skeleton2
  return Rsh_Fir_reg_skeleton2_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_2(SEXP CCP, SEXP RHO) {
  // skeleton3 = ld skeleton
  Rsh_Fir_reg_skeleton3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // skeleton4 = force? skeleton3
  Rsh_Fir_reg_skeleton4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skeleton3_);
  // checkMissing(skeleton4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_skeleton4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return skeleton4
  return Rsh_Fir_reg_skeleton4_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_3(SEXP CCP, SEXP RHO) {
  // flesh3 = ld flesh
  Rsh_Fir_reg_flesh3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // flesh4 = force? flesh3
  Rsh_Fir_reg_flesh4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flesh3_);
  // checkMissing(flesh4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_flesh4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return flesh4
  return Rsh_Fir_reg_flesh4_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_4(SEXP CCP, SEXP RHO) {
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return n3
  return Rsh_Fir_reg_n3_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_5(SEXP CCP, SEXP RHO) {
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return m3
  return Rsh_Fir_reg_m3_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_6(SEXP CCP, SEXP RHO) {
  // sym2 = ldf dimnames
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base2 = ldf dimnames in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // skeleton9 = ld skeleton
  Rsh_Fir_reg_skeleton9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // skeleton10 = force? skeleton9
  Rsh_Fir_reg_skeleton10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skeleton9_);
  // checkMissing(skeleton10)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_skeleton10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r17 = dyn dimnames(skeleton10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_skeleton10_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r15 = dyn base2(<sym skeleton>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_7(SEXP CCP, SEXP RHO) {
  // skeleton13 = ld skeleton
  Rsh_Fir_reg_skeleton13_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // skeleton14 = force? skeleton13
  Rsh_Fir_reg_skeleton14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skeleton13_);
  // checkMissing(skeleton14)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_skeleton14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(skeleton14)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_skeleton14_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c23 then L1() else L2(skeleton14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L1()
    goto L1_;
  } else {
  // L2(skeleton14)
    Rsh_Fir_reg_skeleton16_ = Rsh_Fir_reg_skeleton14_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[[", skeleton14)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_skeleton14_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_skeleton16_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // i22 = ld i
  Rsh_Fir_reg_i22_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // i23 = force? i22
  Rsh_Fir_reg_i23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i22_);
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r30 = dyn __1(skeleton16, i23, j1)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_skeleton16_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r30_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_8(SEXP CCP, SEXP RHO) {
  // flesh5 = ld flesh
  Rsh_Fir_reg_flesh5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // flesh6 = force? flesh5
  Rsh_Fir_reg_flesh6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flesh5_);
  // checkMissing(flesh6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_flesh6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(flesh6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_flesh6_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c24 then L2() else L3(flesh6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L2()
    goto L2_;
  } else {
  // L3(flesh6)
    Rsh_Fir_reg_flesh8_ = Rsh_Fir_reg_flesh6_;
    goto L3_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r37 = dyn __2(flesh11, r35)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_flesh11_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r37_;
  goto L0_;

L2_:;
  // dr4 = tryDispatchBuiltin.1("[", flesh6)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_flesh6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc2 then L4() else L3(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr4)
    Rsh_Fir_reg_flesh8_ = Rsh_Fir_reg_dr4_;
    goto L3_;
  }

L3_:;
  // sym6 = ldf `seq.int`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base6 = ldf `seq.int` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard6 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;

L5_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // size = ld size
  Rsh_Fir_reg_size = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // size1 = force? size
  Rsh_Fir_reg_size1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size);
  // checkMissing(size1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_size1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r36 = dyn seq_int(ind1, size1)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_size1_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L1(flesh8, r36)
  // L1(flesh8, r36)
  Rsh_Fir_reg_flesh11_ = Rsh_Fir_reg_flesh8_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L1_;

L6_:;
  // r34 = dyn base6[, `length.out`](<sym ind>, <sym size>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L1(flesh8, r34)
  // L1(flesh8, r34)
  Rsh_Fir_reg_flesh11_ = Rsh_Fir_reg_flesh8_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3929323065_9(SEXP CCP, SEXP RHO) {
  // skeleton17 = ld skeleton
  Rsh_Fir_reg_skeleton17_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // skeleton18 = force? skeleton17
  Rsh_Fir_reg_skeleton18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skeleton17_);
  // checkMissing(skeleton18)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_skeleton18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(skeleton18)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_skeleton18_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c25 then L1() else L2(skeleton18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L1()
    goto L1_;
  } else {
  // L2(skeleton18)
    Rsh_Fir_reg_skeleton20_ = Rsh_Fir_reg_skeleton18_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", skeleton18)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_skeleton18_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_skeleton20_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // i24 = ld i
  Rsh_Fir_reg_i24_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // i25 = force? i24
  Rsh_Fir_reg_i25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i24_);
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r39 = dyn __3(skeleton20, i25, j3)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_skeleton20_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r39_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
