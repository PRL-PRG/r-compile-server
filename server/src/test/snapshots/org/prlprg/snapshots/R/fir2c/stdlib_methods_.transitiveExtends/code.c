#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1510954060_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1510954060_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1510954060_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1510954060_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1510954060_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1510954060_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1510954060_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1510954060
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1510954060_, RHO, CCP);
  // st `.transitiveExtends` = r
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
SEXP Rsh_Fir_user_function_inner1510954060_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1510954060 dynamic dispatch ([from, by, byExt, moreExts, strictBy])

  return Rsh_Fir_user_version_inner1510954060_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1510954060_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1510954060 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1510954060/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_from;  // from
  SEXP Rsh_Fir_reg_by;  // by
  SEXP Rsh_Fir_reg_byExt;  // byExt
  SEXP Rsh_Fir_reg_moreExts;  // moreExts
  SEXP Rsh_Fir_reg_strictBy;  // strictBy
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_moreExts1_;  // moreExts1
  SEXP Rsh_Fir_reg_moreExts2_;  // moreExts2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_moreExts3_;  // moreExts3
  SEXP Rsh_Fir_reg_moreExts4_;  // moreExts4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_moreExts5_;  // moreExts5
  SEXP Rsh_Fir_reg_moreExts6_;  // moreExts6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_moreExts8_;  // moreExts8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_what3_;  // what3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg__combineExtends;  // _combineExtends
  SEXP Rsh_Fir_reg_byExt1_;  // byExt1
  SEXP Rsh_Fir_reg_byExt2_;  // byExt2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_toExt;  // toExt
  SEXP Rsh_Fir_reg_toExt1_;  // toExt1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_by1_;  // by1
  SEXP Rsh_Fir_reg_by2_;  // by2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_to;  // to
  SEXP Rsh_Fir_reg_to1_;  // to1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_strictBy1_;  // strictBy1
  SEXP Rsh_Fir_reg_strictBy2_;  // strictBy2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_toExt2_;  // toExt2
  SEXP Rsh_Fir_reg_toExt3_;  // toExt3
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_toExt5_;  // toExt5
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_moreExts9_;  // moreExts9
  SEXP Rsh_Fir_reg_moreExts10_;  // moreExts10

  // Bind parameters
  Rsh_Fir_reg_from = PARAMS[0];
  Rsh_Fir_reg_by = PARAMS[1];
  Rsh_Fir_reg_byExt = PARAMS[2];
  Rsh_Fir_reg_moreExts = PARAMS[3];
  Rsh_Fir_reg_strictBy = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st from = from
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_from, RHO);
  (void)(Rsh_Fir_reg_from);
  // st by = by
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_by, RHO);
  (void)(Rsh_Fir_reg_by);
  // st byExt = byExt
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_byExt, RHO);
  (void)(Rsh_Fir_reg_byExt);
  // st moreExts = moreExts
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_moreExts, RHO);
  (void)(Rsh_Fir_reg_moreExts);
  // st strictBy = strictBy
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_strictBy, RHO);
  (void)(Rsh_Fir_reg_strictBy);
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // st what = r1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf seq_along
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf seq_along in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L1_:;
  // s = toForSeq(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 9);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if c then L14() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L6()
    goto L6_;
  }

L3_:;
  // st toExt = dx1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // what = ld what
  Rsh_Fir_reg_what = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

L4_:;
  // st to = dx3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // _combineExtends = ldf `.combineExtends`
  Rsh_Fir_reg__combineExtends = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

L5_:;
  // st moreExts = dx5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L2(i20)
  // L2(i20)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i20_;
  goto L2_;

L6_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // moreExts5 = ld moreExts
  Rsh_Fir_reg_moreExts5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L7_:;
  // moreExts1 = ld moreExts
  Rsh_Fir_reg_moreExts1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym moreExts>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [moreExts1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_moreExts1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // moreExts2 = force? moreExts1
  Rsh_Fir_reg_moreExts2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moreExts1_);
  // checkMissing(moreExts2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_moreExts2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn names(moreExts2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_moreExts2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L11_:;
  // moreExts3 = ld moreExts
  Rsh_Fir_reg_moreExts3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r3 = dyn base1(<sym moreExts>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 8 [moreExts3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_moreExts3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // moreExts4 = force? moreExts3
  Rsh_Fir_reg_moreExts4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moreExts3_);
  // checkMissing(moreExts4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_moreExts4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // r5 = seq_along(moreExts4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_moreExts4_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L14_:;
  // moreExts9 = ld moreExts
  Rsh_Fir_reg_moreExts9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

D3_:;
  // deopt 11 [i2, moreExts5]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_moreExts5_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // moreExts6 = force? moreExts5
  Rsh_Fir_reg_moreExts6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moreExts5_);
  // checkMissing(moreExts6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_moreExts6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(moreExts6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_moreExts6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c1 then L16() else L17(i2, moreExts6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L17(i2, moreExts6)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_moreExts8_ = Rsh_Fir_reg_moreExts6_;
    goto L17_;
  }

L16_:;
  // dr = tryDispatchBuiltin.1("[[", moreExts6)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_moreExts6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L18()
    goto L18_;
  } else {
  // L17(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_moreExts8_ = Rsh_Fir_reg_dr;
    goto L17_;
  }

L17_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L3(i2, dx)
  // L3(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D4_:;
  // deopt 13 [i6, moreExts8, i9]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_moreExts8_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(13, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r6 = dyn __(moreExts8, i10)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_moreExts8_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(i6, r6)
  // L3(i6, r6)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L3_;

D5_:;
  // deopt 17 [i8, what]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_what;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // what1 = force? what
  Rsh_Fir_reg_what1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what);
  // checkMissing(what1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_what1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(what1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_what1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c2 then L21() else L22(i8, what1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L21()
    goto L21_;
  } else {
  // L22(i8, what1)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_what3_ = Rsh_Fir_reg_what1_;
    goto L22_;
  }

L21_:;
  // dr2 = tryDispatchBuiltin.1("[[", what1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_what1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L23() else L22(i8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L23()
    goto L23_;
  } else {
  // L22(i8, dr2)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_what3_ = Rsh_Fir_reg_dr2_;
    goto L22_;
  }

L22_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

L23_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L4(i8, dx2)
  // L4(i8, dx2)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D6_:;
  // deopt 19 [i12, what3, i15]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_what3_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(19, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L24_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r7 = dyn __1(what3, i16)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_what3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(i12, r7)
  // L4(i12, r7)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r7_;
  goto L4_;

D7_:;
  // deopt 24 [i14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L25_:;
  // p = prom<V +>{
  //   byExt1 = ld byExt;
  //   byExt2 = force? byExt1;
  //   checkMissing(byExt2);
  //   return byExt2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1510954060_, CCP, RHO);
  // p1 = prom<V +>{
  //   toExt = ld toExt;
  //   toExt1 = force? toExt;
  //   checkMissing(toExt1);
  //   return toExt1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1510954060_1, CCP, RHO);
  // p2 = prom<V +>{
  //   by1 = ld by;
  //   by2 = force? by1;
  //   checkMissing(by2);
  //   return by2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1510954060_2, CCP, RHO);
  // p3 = prom<V +>{
  //   to = ld to;
  //   to1 = force? to;
  //   checkMissing(to1);
  //   return to1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1510954060_3, CCP, RHO);
  // p4 = prom<V +>{
  //   strictBy1 = ld strictBy;
  //   strictBy2 = force? strictBy1;
  //   checkMissing(strictBy2);
  //   return strictBy2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1510954060_4, CCP, RHO);
  // r13 = dyn _combineExtends(p, p1, p2, p3, p4)
  SEXP Rsh_Fir_array_args30[5];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args30[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args30[4] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[5];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__combineExtends, 5, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

D8_:;
  // deopt 30 [i14, r13]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // st toExt = r13
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // toExt2 = ld toExt
  Rsh_Fir_reg_toExt2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D9_:;
  // deopt 32 [i14, toExt2]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_toExt2_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // toExt3 = force? toExt2
  Rsh_Fir_reg_toExt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_toExt2_);
  // checkMissing(toExt3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_toExt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // l1 = ld moreExts
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c3 = `is.object`(l1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c3 then L28() else L29(i14, toExt3, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L28()
    goto L28_;
  } else {
  // L29(i14, toExt3, l1)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_toExt5_ = Rsh_Fir_reg_toExt3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L29_;
  }

L28_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l1, toExt3)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_toExt3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args33);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc2 then L30() else L29(i14, toExt3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L30()
    goto L30_;
  } else {
  // L29(i14, toExt3, dr4)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_toExt5_ = Rsh_Fir_reg_toExt3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr4_;
    goto L29_;
  }

L29_:;
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

L30_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L5(i14, dx4)
  // L5(i14, dx4)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L5_;

D10_:;
  // deopt 35 [i18, toExt5, l3, toExt3, i21]
  SEXP Rsh_Fir_array_deopt_stack10[5];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_toExt5_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_toExt3_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(35, 5, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L31_:;
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r14 = dyn ____(l3, toExt3, i22)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_toExt3_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(i18, r14)
  // L5(i18, r14)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r14_;
  goto L5_;

D11_:;
  // deopt 42 [moreExts9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_moreExts9_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // moreExts10 = force? moreExts9
  Rsh_Fir_reg_moreExts10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_moreExts9_);
  // checkMissing(moreExts10)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_moreExts10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return moreExts10
  return Rsh_Fir_reg_moreExts10_;
}
SEXP Rsh_Fir_user_promise_inner1510954060_(SEXP CCP, SEXP RHO) {
  // byExt1 = ld byExt
  Rsh_Fir_reg_byExt1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // byExt2 = force? byExt1
  Rsh_Fir_reg_byExt2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_byExt1_);
  // checkMissing(byExt2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_byExt2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return byExt2
  return Rsh_Fir_reg_byExt2_;
}
SEXP Rsh_Fir_user_promise_inner1510954060_1(SEXP CCP, SEXP RHO) {
  // toExt = ld toExt
  Rsh_Fir_reg_toExt = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // toExt1 = force? toExt
  Rsh_Fir_reg_toExt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_toExt);
  // checkMissing(toExt1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_toExt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return toExt1
  return Rsh_Fir_reg_toExt1_;
}
SEXP Rsh_Fir_user_promise_inner1510954060_2(SEXP CCP, SEXP RHO) {
  // by1 = ld by
  Rsh_Fir_reg_by1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // by2 = force? by1
  Rsh_Fir_reg_by2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by1_);
  // checkMissing(by2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_by2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return by2
  return Rsh_Fir_reg_by2_;
}
SEXP Rsh_Fir_user_promise_inner1510954060_3(SEXP CCP, SEXP RHO) {
  // to = ld to
  Rsh_Fir_reg_to = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // to1 = force? to
  Rsh_Fir_reg_to1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to);
  // checkMissing(to1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_to1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return to1
  return Rsh_Fir_reg_to1_;
}
SEXP Rsh_Fir_user_promise_inner1510954060_4(SEXP CCP, SEXP RHO) {
  // strictBy1 = ld strictBy
  Rsh_Fir_reg_strictBy1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // strictBy2 = force? strictBy1
  Rsh_Fir_reg_strictBy2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strictBy1_);
  // checkMissing(strictBy2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_strictBy2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return strictBy2
  return Rsh_Fir_reg_strictBy2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
