#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3051290384_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3051290384_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3051290384_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3051290384_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1468096329_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1468096329_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1468096329_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1468096329_10(SEXP CCP, SEXP RHO);
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
  // r = clos inner3051290384
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3051290384_, RHO, CCP);
  // st expandDynamicFlags = r
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
SEXP Rsh_Fir_user_function_inner3051290384_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3051290384 dynamic dispatch ([block, options])

  return Rsh_Fir_user_version_inner3051290384_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3051290384_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3051290384 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3051290384/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_block;  // block
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_options_isMissing;  // options_isMissing
  SEXP Rsh_Fir_reg_options_orDefault;  // options_orDefault
  SEXP Rsh_Fir_reg_RweaveRdDefaults;  // RweaveRdDefaults
  SEXP Rsh_Fir_reg_RweaveRdDefaults1_;  // RweaveRdDefaults1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_recurse;  // recurse
  SEXP Rsh_Fir_reg_block1_;  // block1
  SEXP Rsh_Fir_reg_block2_;  // block2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3

  // Bind parameters
  Rsh_Fir_reg_block = PARAMS[0];
  Rsh_Fir_reg_options = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st block = block
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_block, RHO);
  (void)(Rsh_Fir_reg_block);
  // options_isMissing = missing.0(options)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_options;
  Rsh_Fir_reg_options_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if options_isMissing then L0() else L1(options)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_options_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(options)
    Rsh_Fir_reg_options_orDefault = Rsh_Fir_reg_options;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   RweaveRdDefaults = ld RweaveRdDefaults;
  //   RweaveRdDefaults1 = force? RweaveRdDefaults;
  //   checkMissing(RweaveRdDefaults1);
  //   return RweaveRdDefaults1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3051290384_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_options_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st options = options_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_options_orDefault, RHO);
  (void)(Rsh_Fir_reg_options_orDefault);
  // r1 = clos inner1468096329
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1468096329_, RHO, CCP);
  // st recurse = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // recurse = ldf recurse
  Rsh_Fir_reg_recurse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   block1 = ld block;
  //   block2 = force? block1;
  //   checkMissing(block2);
  //   return block2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3051290384_1, CCP, RHO);
  // r3 = dyn recurse(p1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_recurse, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner3051290384_(SEXP CCP, SEXP RHO) {
  // RweaveRdDefaults = ld RweaveRdDefaults
  Rsh_Fir_reg_RweaveRdDefaults = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // RweaveRdDefaults1 = force? RweaveRdDefaults
  Rsh_Fir_reg_RweaveRdDefaults1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RweaveRdDefaults);
  // checkMissing(RweaveRdDefaults1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_RweaveRdDefaults1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return RweaveRdDefaults1
  return Rsh_Fir_reg_RweaveRdDefaults1_;
}
SEXP Rsh_Fir_user_promise_inner3051290384_1(SEXP CCP, SEXP RHO) {
  // block1 = ld block
  Rsh_Fir_reg_block1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // block2 = force? block1
  Rsh_Fir_reg_block2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block1_);
  // checkMissing(block2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_block2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return block2
  return Rsh_Fir_reg_block2_;
}
SEXP Rsh_Fir_user_function_inner1468096329_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1468096329 dynamic dispatch ([block])

  return Rsh_Fir_user_version_inner1468096329_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1468096329_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1468096329 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1468096329/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_block1;  // block
  SEXP Rsh_Fir_reg_getDynamicFlags;  // getDynamicFlags
  SEXP Rsh_Fir_reg_block1_1;  // block1
  SEXP Rsh_Fir_reg_block2_1;  // block2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_flags;  // flags
  SEXP Rsh_Fir_reg_flags1_;  // flags1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_flags3_;  // flags3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_block3_;  // block3
  SEXP Rsh_Fir_reg_block4_;  // block4
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_block5_;  // block5
  SEXP Rsh_Fir_reg_block6_;  // block6
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_opts;  // opts
  SEXP Rsh_Fir_reg_opts1_;  // opts1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_options1;  // options
  SEXP Rsh_Fir_reg_options1_;  // options1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_RweaveRdOptions;  // RweaveRdOptions
  SEXP Rsh_Fir_reg_RweaveRdOptions1_;  // RweaveRdOptions1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_options2_;  // options2
  SEXP Rsh_Fir_reg_options3_;  // options3
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_options5_;  // options5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_tag;  // tag
  SEXP Rsh_Fir_reg_tag1_;  // tag1
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_block7_;  // block7
  SEXP Rsh_Fir_reg_block8_;  // block8
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_options6_;  // options6
  SEXP Rsh_Fir_reg_options7_;  // options7
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_RweaveRdOptions2_;  // RweaveRdOptions2
  SEXP Rsh_Fir_reg_RweaveRdOptions3_;  // RweaveRdOptions3
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_block9_;  // block9
  SEXP Rsh_Fir_reg_block10_;  // block10
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_recurse1;  // recurse
  SEXP Rsh_Fir_reg_block11_;  // block11
  SEXP Rsh_Fir_reg_block12_;  // block12
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_block14_;  // block14
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_flags4_;  // flags4
  SEXP Rsh_Fir_reg_flags5_;  // flags5
  SEXP Rsh_Fir_reg_getDynamicFlags1_;  // getDynamicFlags1
  SEXP Rsh_Fir_reg_block15_;  // block15
  SEXP Rsh_Fir_reg_block16_;  // block16
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_block18_;  // block18
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_setDynamicFlags;  // setDynamicFlags
  SEXP Rsh_Fir_reg_block19_;  // block19
  SEXP Rsh_Fir_reg_block20_;  // block20
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_flags6_;  // flags6
  SEXP Rsh_Fir_reg_flags7_;  // flags7
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_block21_;  // block21
  SEXP Rsh_Fir_reg_block22_;  // block22

  // Bind parameters
  Rsh_Fir_reg_block1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st block = block
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_block1, RHO);
  (void)(Rsh_Fir_reg_block1);
  // getDynamicFlags = ldf getDynamicFlags
  Rsh_Fir_reg_getDynamicFlags = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

L0_:;
  // c1 = `as.logical`(dx1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L24() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L24()
    goto L24_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L17()
  // L17()
  goto L17_;

L2_:;
  // c2 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c2 then L32() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L32()
    goto L32_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // st tag = r6
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r8 = dyn identical(r6, "\\Sexpr", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args6[9];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[5] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[6] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args6[7] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[8] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[9];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

L4_:;
  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard4 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L5_:;
  // c4 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c4 then L39() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L39()
    goto L39_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // st opts = r12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // c3 = `==`(r12, NULL)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L5(c3)
  // L5(c3)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c3_;
  goto L5_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // ___ = ldf `:::`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

L9_:;
  // st flags = dx3
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // setDynamicFlags = ldf setDynamicFlags
  Rsh_Fir_reg_setDynamicFlags = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

L11_:;
  // c7 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c7 then L57() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L57()
    goto L57_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // sym5 = ldf seq_along
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf seq_along in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard5 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L13_:;
  // s = toForSeq(r46)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // l7 = length(s)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l7_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 17);
  // goto L14(i)
  // L14(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L14_;

L14_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // c8 = `<`.1(l7, i2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if c8 then L65() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L65()
    goto L65_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // st block = dx9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // flags4 = ld flags
  Rsh_Fir_reg_flags4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L72() else D21()
  // L72()
  goto L72_;

L16_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args16[4];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // recurse = ldf recurse
  Rsh_Fir_reg_recurse1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L66() else D18()
  // L66()
  goto L66_;

L17_:;
  // block21 = ld block
  Rsh_Fir_reg_block21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L78() else D26()
  // L78()
  goto L78_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p = prom<V +>{
  //   block1 = ld block;
  //   block2 = force? block1;
  //   checkMissing(block2);
  //   return block2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_, CCP, RHO);
  // r1 = dyn getDynamicFlags(p)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getDynamicFlags, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // st flags = r1
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // flags = ld flags
  Rsh_Fir_reg_flags = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D2_:;
  // deopt 5 [flags]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_flags;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // flags1 = force? flags
  Rsh_Fir_reg_flags1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flags);
  // checkMissing(flags1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_flags1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c = `is.object`(flags1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_flags1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c then L21() else L22(flags1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L22(flags1)
    Rsh_Fir_reg_flags3_ = Rsh_Fir_reg_flags1_;
    goto L22_;
  }

L21_:;
  // dr = tryDispatchBuiltin.1("[", flags1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_flags1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(dr)
    Rsh_Fir_reg_flags3_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r2 = dyn __(flags3, "\\Sexpr")
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_flags3_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L24_:;
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L26_:;
  // r3 = dyn base(<lang `<-`(tag, attr(block, "Rd_tag"))>, "\\Sexpr")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_1;
  goto L2_;

L27_:;
  // block3 = ld block
  Rsh_Fir_reg_block3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

L28_:;
  // r5 = dyn base1(<sym block>, "Rd_tag")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D3_:;
  // deopt 14 [block3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_block3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // block4 = force? block3
  Rsh_Fir_reg_block4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block3_);
  // checkMissing(block4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_block4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r7 = dyn attr(block4, "Rd_tag")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_block4_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

D4_:;
  // deopt 18 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

D5_:;
  // deopt 29 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r8_;
  goto L2_;

L32_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard2 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard3 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L34_:;
  // r9 = dyn base2(<lang `<-`(opts, attr(block, "Rd_option"))>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

L35_:;
  // block5 = ld block
  Rsh_Fir_reg_block5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L37() else D6()
  // L37()
  goto L37_;

L36_:;
  // r11 = dyn base3(<sym block>, "Rd_option")
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;

D6_:;
  // deopt 33 [block5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_block5_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L37_:;
  // block6 = force? block5
  Rsh_Fir_reg_block6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block5_);
  // checkMissing(block6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_block6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r13 = dyn attr1(block6, "Rd_option")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_block6_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

D7_:;
  // deopt 37 [r13]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L6_;

L39_:;
  // st opts = ""
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_const(CCP, 28), RHO);
  (void)(Rsh_const(CCP, 28));
  // goto L8()
  // L8()
  goto L8_;

D8_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // r15 = dyn ___("utils", "SweaveParseOptions")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

D9_:;
  // deopt 49 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // checkFun.0(r15)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r15_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args38));
  // r16 = r15 as cls
  Rsh_Fir_reg_r16_ = Rsh_Fir_cast(Rsh_Fir_reg_r15_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p1 = prom<V +>{
  //   opts = ld opts;
  //   opts1 = force? opts;
  //   checkMissing(opts1);
  //   return opts1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_1, CCP, RHO);
  // p2 = prom<V +>{
  //   options = ld options;
  //   options1 = force? options;
  //   checkMissing(options1);
  //   return options1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_2, CCP, RHO);
  // p3 = prom<V +>{
  //   RweaveRdOptions = ld RweaveRdOptions;
  //   RweaveRdOptions1 = force? RweaveRdOptions;
  //   checkMissing(RweaveRdOptions1);
  //   return RweaveRdOptions1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_3, CCP, RHO);
  // r20 = dyn r16(p1, p2, p3)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r16_, 3, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L43() else D10()
  // L43()
  goto L43_;

D10_:;
  // deopt 54 [r20]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L43_:;
  // st options = r20
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // l = ld flags
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // c5 = `is.object`(l)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c5 then L44() else L45(TRUE, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L44()
    goto L44_;
  } else {
  // L45(TRUE, l)
    Rsh_Fir_reg_r22_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L45_;
  }

L44_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, TRUE)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args44);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc1 then L46() else L45(TRUE, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L46()
    goto L46_;
  } else {
  // L45(TRUE, dr2)
    Rsh_Fir_reg_r22_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L45_;
  }

L45_:;
  // options2 = ld options
  Rsh_Fir_reg_options2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

L46_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L9(TRUE, dx2)
  // L9(TRUE, dx2)
  Rsh_Fir_reg_r24_ = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

D11_:;
  // deopt 59 [r22, l2, TRUE, options2]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_options2_;
  Rsh_Fir_deopt(59, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L47_:;
  // options3 = force? options2
  Rsh_Fir_reg_options3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_options2_);
  // checkMissing(options3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_options3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(options3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_options3_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c6 then L49() else L50(r22, l2, TRUE, options3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L49()
    goto L49_;
  } else {
  // L50(r22, l2, TRUE, options3)
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r22_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_r28_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_options5_ = Rsh_Fir_reg_options3_;
    goto L50_;
  }

L48_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r34 = dyn ___1(l6, r32, dx5)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(r31, r34)
  // L9(r31, r34)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r34_;
  goto L9_;

L49_:;
  // dr4 = tryDispatchBuiltin.1("$", options3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_options3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc2 then L51() else L50(r22, l2, TRUE, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L51()
    goto L51_;
  } else {
  // L50(r22, l2, TRUE, dr4)
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r22_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_r28_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_options5_ = Rsh_Fir_reg_dr4_;
    goto L50_;
  }

L50_:;
  // r33 = `$`(options5, <sym stage>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_options5_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L48(r27, l4, r28, r33)
  // L48(r27, l4, r28, r33)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r33_;
  goto L48_;

L51_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L48(r22, l2, TRUE, dx4)
  // L48(r22, l2, TRUE, dx4)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r32_ = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L48_;

L53_:;
  // tag = ld tag
  Rsh_Fir_reg_tag = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L55() else D12()
  // L55()
  goto L55_;

L54_:;
  // r36 = dyn base4(<sym tag>, "\\RdOpts")
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r36)
  // L11(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L11_;

D12_:;
  // deopt 66 [tag]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_tag;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L55_:;
  // tag1 = force? tag
  Rsh_Fir_reg_tag1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag);
  // checkMissing(tag1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_tag1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r38 = dyn identical1(tag1, "\\RdOpts", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args56[9];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_tag1_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args56[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args56[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args56[5] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args56[6] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args56[7] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args56[8] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names14[9];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_array_arg_names14[5] = R_MissingArg;
  Rsh_Fir_array_arg_names14[6] = R_MissingArg;
  Rsh_Fir_array_arg_names14[7] = R_MissingArg;
  Rsh_Fir_array_arg_names14[8] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L56() else D13()
  // L56()
  goto L56_;

D13_:;
  // deopt 77 [r38]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L11(r38)
  // L11(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L11_;

L57_:;
  // ___2 = ldf `:::`
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

D14_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // r39 = dyn ___2("utils", "SweaveParseOptions")
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L59() else D15()
  // L59()
  goto L59_;

D15_:;
  // deopt 82 [r39]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L59_:;
  // checkFun.0(r39)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r39_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args58));
  // r40 = r39 as cls
  Rsh_Fir_reg_r40_ = Rsh_Fir_cast(Rsh_Fir_reg_r39_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p4 = prom<V +>{
  //   block7 = ld block;
  //   block8 = force? block7;
  //   checkMissing(block8);
  //   return block8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_4, CCP, RHO);
  // p5 = prom<V +>{
  //   options6 = ld options;
  //   options7 = force? options6;
  //   checkMissing(options7);
  //   return options7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_5, CCP, RHO);
  // p6 = prom<V +>{
  //   RweaveRdOptions2 = ld RweaveRdOptions;
  //   RweaveRdOptions3 = force? RweaveRdOptions2;
  //   checkMissing(RweaveRdOptions3);
  //   return RweaveRdOptions3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_6, CCP, RHO);
  // r44 = dyn r40(p4, p5, p6)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args62[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r40_, 3, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L60() else D16()
  // L60()
  goto L60_;

D16_:;
  // deopt 87 [r44]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L60_:;
  // sst options = r44
  Rsh_Fir_super_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // goto L10()
  // L10()
  goto L10_;

L62_:;
  // block9 = ld block
  Rsh_Fir_reg_block9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

L63_:;
  // r45 = dyn base5(<sym block>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L13(r45)
  // L13(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L13_;

D17_:;
  // deopt 90 [block9]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_block9_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L64_:;
  // block10 = force? block9
  Rsh_Fir_reg_block10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block9_);
  // checkMissing(block10)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_block10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r47 = seq_along(block10)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_block10_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L13(r47)
  // L13(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L13_;

L65_:;
  // goto L10()
  // L10()
  goto L10_;

D18_:;
  // deopt 94 [i2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L66_:;
  // p7 = prom<V +>{
  //   block11 = ld block;
  //   block12 = force? block11;
  //   checkMissing(block12);
  //   c9 = `is.object`(block12);
  //   if c9 then L1() else L2(block12);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", block12);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(block14):
  //   i5 = ld i;
  //   i6 = force? i5;
  //   __1 = ldf `[[` in base;
  //   r48 = dyn __1(block14, i6);
  //   goto L0(r48);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_7, CCP, RHO);
  // r50 = dyn recurse(p7)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_recurse1, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L67() else D19()
  // L67()
  goto L67_;

D19_:;
  // deopt 96 [i2, r50]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L67_:;
  // l8 = ld block
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c10 = `is.object`(l8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c10 then L68() else L69(i2, r50, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L68()
    goto L68_;
  } else {
  // L69(i2, r50, l8)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L69_;
  }

L68_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l8, r50)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args74[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args74);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc4 then L70() else L69(i2, r50, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L70()
    goto L70_;
  } else {
  // L69(i2, r50, dr8)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr8_;
    goto L69_;
  }

L69_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L71() else D20()
  // L71()
  goto L71_;

L70_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L15(i2, dx8)
  // L15(i2, dx8)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L15_;

D20_:;
  // deopt 98 [i8, r52, l10, r50, i11]
  SEXP Rsh_Fir_array_deopt_stack18[5];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack18[4] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(98, 5, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L71_:;
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r55 = dyn ____(l10, r50, i12)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L15(i8, r55)
  // L15(i8, r55)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r55_;
  goto L15_;

D21_:;
  // deopt 102 [i10, flags4]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_flags4_;
  Rsh_Fir_deopt(102, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L72_:;
  // flags5 = force? flags4
  Rsh_Fir_reg_flags5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flags4_);
  // checkMissing(flags5)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_flags5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // getDynamicFlags1 = ldf getDynamicFlags
  Rsh_Fir_reg_getDynamicFlags1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L73() else D22()
  // L73()
  goto L73_;

D22_:;
  // deopt 104 [i10, flags5]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_flags5_;
  Rsh_Fir_deopt(104, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L73_:;
  // p8 = prom<V +>{
  //   block15 = ld block;
  //   block16 = force? block15;
  //   checkMissing(block16);
  //   c11 = `is.object`(block16);
  //   if c11 then L1() else L2(block16);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[[", block16);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(block18):
  //   i13 = ld i;
  //   i14 = force? i13;
  //   __2 = ldf `[[` in base;
  //   r56 = dyn __2(block18, i14);
  //   goto L0(r56);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_8, CCP, RHO);
  // r58 = dyn getDynamicFlags1(p8)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getDynamicFlags1_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L74() else D23()
  // L74()
  goto L74_;

D23_:;
  // deopt 106 [i10, flags5, r58]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_flags5_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(106, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L74_:;
  // r59 = `||`(flags5, r58)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_flags5_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // st flags = r59
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // goto L14(i10)
  // L14(i10)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i10_;
  goto L14_;

D24_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p9 = prom<V +>{
  //   block19 = ld block;
  //   block20 = force? block19;
  //   checkMissing(block20);
  //   return block20;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_9, CCP, RHO);
  // p10 = prom<V +>{
  //   flags6 = ld flags;
  //   flags7 = force? flags6;
  //   checkMissing(flags7);
  //   return flags7;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1468096329_10, CCP, RHO);
  // r62 = dyn setDynamicFlags(p9, p10)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setDynamicFlags, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L76() else D25()
  // L76()
  goto L76_;

D25_:;
  // deopt 116 [r62]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L76_:;
  // st block = r62
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // goto L17()
  // L17()
  goto L17_;

D26_:;
  // deopt 120 [block21]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_block21_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L78_:;
  // block22 = force? block21
  Rsh_Fir_reg_block22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block21_);
  // checkMissing(block22)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_block22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return block22
  return Rsh_Fir_reg_block22_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_(SEXP CCP, SEXP RHO) {
  // block1 = ld block
  Rsh_Fir_reg_block1_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // block2 = force? block1
  Rsh_Fir_reg_block2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_block1_1);
  // checkMissing(block2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_block2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return block2
  return Rsh_Fir_reg_block2_1;
}
SEXP Rsh_Fir_user_promise_inner1468096329_1(SEXP CCP, SEXP RHO) {
  // opts = ld opts
  Rsh_Fir_reg_opts = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts1 = force? opts
  Rsh_Fir_reg_opts1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts);
  // checkMissing(opts1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_opts1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return opts1
  return Rsh_Fir_reg_opts1_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_2(SEXP CCP, SEXP RHO) {
  // options = ld options
  Rsh_Fir_reg_options1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // options1 = force? options
  Rsh_Fir_reg_options1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_options1);
  // checkMissing(options1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_options1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return options1
  return Rsh_Fir_reg_options1_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_3(SEXP CCP, SEXP RHO) {
  // RweaveRdOptions = ld RweaveRdOptions
  Rsh_Fir_reg_RweaveRdOptions = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // RweaveRdOptions1 = force? RweaveRdOptions
  Rsh_Fir_reg_RweaveRdOptions1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RweaveRdOptions);
  // checkMissing(RweaveRdOptions1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_RweaveRdOptions1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return RweaveRdOptions1
  return Rsh_Fir_reg_RweaveRdOptions1_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_4(SEXP CCP, SEXP RHO) {
  // block7 = ld block
  Rsh_Fir_reg_block7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // block8 = force? block7
  Rsh_Fir_reg_block8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block7_);
  // checkMissing(block8)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_block8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return block8
  return Rsh_Fir_reg_block8_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_5(SEXP CCP, SEXP RHO) {
  // options6 = ld options
  Rsh_Fir_reg_options6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // options7 = force? options6
  Rsh_Fir_reg_options7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_options6_);
  // checkMissing(options7)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_options7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return options7
  return Rsh_Fir_reg_options7_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_6(SEXP CCP, SEXP RHO) {
  // RweaveRdOptions2 = ld RweaveRdOptions
  Rsh_Fir_reg_RweaveRdOptions2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // RweaveRdOptions3 = force? RweaveRdOptions2
  Rsh_Fir_reg_RweaveRdOptions3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RweaveRdOptions2_);
  // checkMissing(RweaveRdOptions3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_RweaveRdOptions3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return RweaveRdOptions3
  return Rsh_Fir_reg_RweaveRdOptions3_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_7(SEXP CCP, SEXP RHO) {
  // block11 = ld block
  Rsh_Fir_reg_block11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // block12 = force? block11
  Rsh_Fir_reg_block12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block11_);
  // checkMissing(block12)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_block12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(block12)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_block12_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c9 then L1() else L2(block12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2(block12)
    Rsh_Fir_reg_block14_ = Rsh_Fir_reg_block12_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", block12)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_block12_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_block14_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r48 = dyn __1(block14, i6)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_block14_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r48_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_8(SEXP CCP, SEXP RHO) {
  // block15 = ld block
  Rsh_Fir_reg_block15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // block16 = force? block15
  Rsh_Fir_reg_block16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block15_);
  // checkMissing(block16)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_block16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(block16)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_block16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c11 then L1() else L2(block16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(block16)
    Rsh_Fir_reg_block18_ = Rsh_Fir_reg_block16_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[[", block16)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_block16_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args81);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_block18_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // i13 = ld i
  Rsh_Fir_reg_i13_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // i14 = force? i13
  Rsh_Fir_reg_i14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i13_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r56 = dyn __2(block18, i14)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_block18_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r56_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_9(SEXP CCP, SEXP RHO) {
  // block19 = ld block
  Rsh_Fir_reg_block19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // block20 = force? block19
  Rsh_Fir_reg_block20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block19_);
  // checkMissing(block20)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_block20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return block20
  return Rsh_Fir_reg_block20_;
}
SEXP Rsh_Fir_user_promise_inner1468096329_10(SEXP CCP, SEXP RHO) {
  // flags6 = ld flags
  Rsh_Fir_reg_flags6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // flags7 = force? flags6
  Rsh_Fir_reg_flags7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flags6_);
  // checkMissing(flags7)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_flags7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // return flags7
  return Rsh_Fir_reg_flags7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
