#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4098760439_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4098760439_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4098760439_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4098760439_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4098760439_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4098760439_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4098760439_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner4098760439
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4098760439_, RHO, CCP);
  // st `.transitiveSubclasses` = r
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
SEXP Rsh_Fir_user_function_inner4098760439_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4098760439 dynamic dispatch ([by, to, toExt, moreExts, strictBy])

  return Rsh_Fir_user_version_inner4098760439_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4098760439_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4098760439 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4098760439/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_by;  // by
  SEXP Rsh_Fir_reg_to;  // to
  SEXP Rsh_Fir_reg_toExt;  // toExt
  SEXP Rsh_Fir_reg_moreExts;  // moreExts
  SEXP Rsh_Fir_reg_strictBy;  // strictBy
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_moreExts1_;  // moreExts1
  SEXP Rsh_Fir_reg_moreExts2_;  // moreExts2
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_moreExts3_;  // moreExts3
  SEXP Rsh_Fir_reg_moreExts4_;  // moreExts4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_moreExts6_;  // moreExts6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg__combineExtends;  // _combineExtends
  SEXP Rsh_Fir_reg_byExt;  // byExt
  SEXP Rsh_Fir_reg_byExt1_;  // byExt1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_toExt1_;  // toExt1
  SEXP Rsh_Fir_reg_toExt2_;  // toExt2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_by1_;  // by1
  SEXP Rsh_Fir_reg_by2_;  // by2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_to1_;  // to1
  SEXP Rsh_Fir_reg_to2_;  // to2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_strictBy1_;  // strictBy1
  SEXP Rsh_Fir_reg_strictBy2_;  // strictBy2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_byExt2_;  // byExt2
  SEXP Rsh_Fir_reg_byExt3_;  // byExt3
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_byExt5_;  // byExt5
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_moreExts7_;  // moreExts7
  SEXP Rsh_Fir_reg_moreExts8_;  // moreExts8

  // Bind parameters
  Rsh_Fir_reg_by = PARAMS[0];
  Rsh_Fir_reg_to = PARAMS[1];
  Rsh_Fir_reg_toExt = PARAMS[2];
  Rsh_Fir_reg_moreExts = PARAMS[3];
  Rsh_Fir_reg_strictBy = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st by = by
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_by, RHO);
  (void)(Rsh_Fir_reg_by);
  // st to = to
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_to, RHO);
  (void)(Rsh_Fir_reg_to);
  // st toExt = toExt
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_toExt, RHO);
  (void)(Rsh_Fir_reg_toExt);
  // st moreExts = moreExts
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_moreExts, RHO);
  (void)(Rsh_Fir_reg_moreExts);
  // st strictBy = strictBy
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_strictBy, RHO);
  (void)(Rsh_Fir_reg_strictBy);
  // sym = ldf seq_along
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
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
  Rsh_Fir_reg_i = Rsh_const(CCP, 7);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c then L8() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L8()
    goto L8_;
  } else {
  // L4()
    goto L4_;
  }

L2_:;
  // st byExt = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // _combineExtends = ldf `.combineExtends`
  Rsh_Fir_reg__combineExtends = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L3_:;
  // st moreExts = dx3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L1(i14)
  // L1(i14)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i14_;
  goto L1_;

L4_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // moreExts3 = ld moreExts
  Rsh_Fir_reg_moreExts3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L5_:;
  // moreExts1 = ld moreExts
  Rsh_Fir_reg_moreExts1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<sym moreExts>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [moreExts1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_moreExts1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // moreExts2 = force? moreExts1
  Rsh_Fir_reg_moreExts2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moreExts1_);
  // checkMissing(moreExts2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_moreExts2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r2 = seq_along(moreExts2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_moreExts2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L8_:;
  // moreExts7 = ld moreExts
  Rsh_Fir_reg_moreExts7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D1_:;
  // deopt 4 [i2, moreExts3]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_moreExts3_;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // moreExts4 = force? moreExts3
  Rsh_Fir_reg_moreExts4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moreExts3_);
  // checkMissing(moreExts4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_moreExts4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(moreExts4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_moreExts4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L10() else L11(i2, moreExts4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L10()
    goto L10_;
  } else {
  // L11(i2, moreExts4)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_moreExts6_ = Rsh_Fir_reg_moreExts4_;
    goto L11_;
  }

L10_:;
  // dr = tryDispatchBuiltin.1("[[", moreExts4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_moreExts4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L12()
    goto L12_;
  } else {
  // L11(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_moreExts6_ = Rsh_Fir_reg_dr;
    goto L11_;
  }

L11_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L2(i2, dx)
  // L2(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D2_:;
  // deopt 6 [i6, moreExts6, i9]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_moreExts6_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r3 = dyn __(moreExts6, i10)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_moreExts6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(i6, r3)
  // L2(i6, r3)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L2_;

D3_:;
  // deopt 11 [i8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   byExt = ld byExt;
  //   byExt1 = force? byExt;
  //   checkMissing(byExt1);
  //   return byExt1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4098760439_, CCP, RHO);
  // p1 = prom<V +>{
  //   toExt1 = ld toExt;
  //   toExt2 = force? toExt1;
  //   checkMissing(toExt2);
  //   return toExt2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4098760439_1, CCP, RHO);
  // p2 = prom<V +>{
  //   by1 = ld by;
  //   by2 = force? by1;
  //   checkMissing(by2);
  //   return by2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4098760439_2, CCP, RHO);
  // p3 = prom<V +>{
  //   to1 = ld to;
  //   to2 = force? to1;
  //   checkMissing(to2);
  //   return to2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4098760439_3, CCP, RHO);
  // p4 = prom<V +>{
  //   strictBy1 = ld strictBy;
  //   strictBy2 = force? strictBy1;
  //   checkMissing(strictBy2);
  //   return strictBy2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4098760439_4, CCP, RHO);
  // r9 = dyn _combineExtends(p, p1, p2, p3, p4)
  SEXP Rsh_Fir_array_args20[5];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args20[4] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names2[5];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__combineExtends, 5, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 17 [i8, r9]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // st byExt = r9
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // byExt2 = ld byExt
  Rsh_Fir_reg_byExt2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 19 [i8, byExt2]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_byExt2_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // byExt3 = force? byExt2
  Rsh_Fir_reg_byExt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_byExt2_);
  // checkMissing(byExt3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_byExt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // l1 = ld moreExts
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c2 = `is.object`(l1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L17() else L18(i8, byExt3, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L17()
    goto L17_;
  } else {
  // L18(i8, byExt3, l1)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_byExt5_ = Rsh_Fir_reg_byExt3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L18_;
  }

L17_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l1, byExt3)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_byExt3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args23);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc1 then L19() else L18(i8, byExt3, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L19()
    goto L19_;
  } else {
  // L18(i8, byExt3, dr2)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_byExt5_ = Rsh_Fir_reg_byExt3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr2_;
    goto L18_;
  }

L18_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

L19_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L3(i8, dx2)
  // L3(i8, dx2)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

D6_:;
  // deopt 22 [i12, byExt5, l3, byExt3, i15]
  SEXP Rsh_Fir_array_deopt_stack6[5];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_byExt5_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_byExt3_;
  Rsh_Fir_array_deopt_stack6[4] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(22, 5, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r10 = dyn ____(l3, byExt3, i16)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_byExt3_;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(i12, r10)
  // L3(i12, r10)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r10_;
  goto L3_;

D7_:;
  // deopt 29 [moreExts7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_moreExts7_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // moreExts8 = force? moreExts7
  Rsh_Fir_reg_moreExts8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moreExts7_);
  // checkMissing(moreExts8)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_moreExts8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return moreExts8
  return Rsh_Fir_reg_moreExts8_;
}
SEXP Rsh_Fir_user_promise_inner4098760439_(SEXP CCP, SEXP RHO) {
  // byExt = ld byExt
  Rsh_Fir_reg_byExt = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // byExt1 = force? byExt
  Rsh_Fir_reg_byExt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_byExt);
  // checkMissing(byExt1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_byExt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return byExt1
  return Rsh_Fir_reg_byExt1_;
}
SEXP Rsh_Fir_user_promise_inner4098760439_1(SEXP CCP, SEXP RHO) {
  // toExt1 = ld toExt
  Rsh_Fir_reg_toExt1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // toExt2 = force? toExt1
  Rsh_Fir_reg_toExt2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_toExt1_);
  // checkMissing(toExt2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_toExt2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return toExt2
  return Rsh_Fir_reg_toExt2_;
}
SEXP Rsh_Fir_user_promise_inner4098760439_2(SEXP CCP, SEXP RHO) {
  // by1 = ld by
  Rsh_Fir_reg_by1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // by2 = force? by1
  Rsh_Fir_reg_by2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by1_);
  // checkMissing(by2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_by2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return by2
  return Rsh_Fir_reg_by2_;
}
SEXP Rsh_Fir_user_promise_inner4098760439_3(SEXP CCP, SEXP RHO) {
  // to1 = ld to
  Rsh_Fir_reg_to1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to2 = force? to1
  Rsh_Fir_reg_to2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to1_);
  // checkMissing(to2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_to2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return to2
  return Rsh_Fir_reg_to2_;
}
SEXP Rsh_Fir_user_promise_inner4098760439_4(SEXP CCP, SEXP RHO) {
  // strictBy1 = ld strictBy
  Rsh_Fir_reg_strictBy1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // strictBy2 = force? strictBy1
  Rsh_Fir_reg_strictBy2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strictBy1_);
  // checkMissing(strictBy2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_strictBy2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return strictBy2
  return Rsh_Fir_reg_strictBy2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
