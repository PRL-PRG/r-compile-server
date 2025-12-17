#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner415126571_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner415126571_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner415126571_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner415126571_10(SEXP CCP, SEXP RHO);
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
  // r = clos inner415126571
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner415126571_, RHO, CCP);
  // st readCitationFile = r
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
SEXP Rsh_Fir_user_function_inner415126571_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner415126571 dynamic dispatch ([file, meta])

  return Rsh_Fir_user_version_inner415126571_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner415126571_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner415126571 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner415126571/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_meta;  // meta
  SEXP Rsh_Fir_reg_meta_isMissing;  // meta_isMissing
  SEXP Rsh_Fir_reg_meta_orDefault;  // meta_orDefault
  SEXP Rsh_Fir_reg_as_list;  // as_list
  SEXP Rsh_Fir_reg_meta1_;  // meta1
  SEXP Rsh_Fir_reg_meta2_;  // meta2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_meta3_;  // meta3
  SEXP Rsh_Fir_reg_meta4_;  // meta4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_meta6_;  // meta6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_new_env;  // new_env
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_meta7_;  // meta7
  SEXP Rsh_Fir_reg_meta8_;  // meta8
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_envir;  // envir
  SEXP Rsh_Fir_reg_envir1_;  // envir1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_exprs;  // exprs
  SEXP Rsh_Fir_reg_exprs1_;  // exprs1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_expr;  // expr
  SEXP Rsh_Fir_reg_expr1_;  // expr1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_envir2_;  // envir2
  SEXP Rsh_Fir_reg_envir3_;  // envir3
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_rval;  // rval
  SEXP Rsh_Fir_reg_rval1_;  // rval1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_rval2_;  // rval2
  SEXP Rsh_Fir_reg_rval3_;  // rval3
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_rlen;  // rlen
  SEXP Rsh_Fir_reg_rlen1_;  // rlen1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_rval4_;  // rval4
  SEXP Rsh_Fir_reg_rval5_;  // rval5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_rval7_;  // rval7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_rlen2_;  // rlen2
  SEXP Rsh_Fir_reg_rlen3_;  // rlen3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_do_call;  // do_call
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_rval8_;  // rval8
  SEXP Rsh_Fir_reg_rval9_;  // rval9
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg__citation;  // _citation
  SEXP Rsh_Fir_reg_rval10_;  // rval10
  SEXP Rsh_Fir_reg_rval11_;  // rval11
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_meta9_;  // meta9
  SEXP Rsh_Fir_reg_meta10_;  // meta10
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_meta12_;  // meta12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r40_;  // r40

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_meta = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st file = file
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_file, RHO);
  (void)(Rsh_Fir_reg_file);
  // meta_isMissing = missing.0(meta)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_meta;
  Rsh_Fir_reg_meta_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if meta_isMissing then L0(NULL) else L0(meta)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_meta_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_meta_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(meta)
    Rsh_Fir_reg_meta_orDefault = Rsh_Fir_reg_meta;
    goto L0_;
  }

L0_:;
  // st meta = meta_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_meta_orDefault, RHO);
  (void)(Rsh_Fir_reg_meta_orDefault);
  // as_list = ldf `as.list`
  Rsh_Fir_reg_as_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L1_:;
  // st rval = r9
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // st mheader = NULL
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // st mfooter = NULL
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // new_env = ldf `new.env`
  Rsh_Fir_reg_new_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

L3_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard4 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L4_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c1 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c1 then L3() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L3()
    goto L3_;
  } else {
  // L10()
    goto L10_;
  }

L5_:;
  // c2 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L35() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L35()
    goto L35_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L9(i7)
  // L9(i7)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i7_;
  goto L9_;

L7_:;
  // st rval = r22
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // goto L9(i12)
  // L9(i12)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i12_;
  goto L9_;

L8_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r26 = dyn c3(rval1, r24)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_rval1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L43() else D18()
  // L43()
  goto L43_;

L9_:;
  // goto L4(i16)
  // L4(i16)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i16_;
  goto L4_;

L10_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // st expr = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

L11_:;
  // st rlen = r29
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // rlen = ld rlen
  Rsh_Fir_reg_rlen = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L49() else D21()
  // L49()
  goto L49_;

L12_:;
  // rlen2 = ld rlen
  Rsh_Fir_reg_rlen2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L56() else D23()
  // L56()
  goto L56_;

L13_:;
  // st rval = dx3
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // _citation = ldf `.citation`
  Rsh_Fir_reg__citation = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L61() else D26()
  // L61()
  goto L61_;

L15_:;
  // goto L14()
  // L14()
  goto L14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   meta1 = ld meta;
  //   meta2 = force? meta1;
  //   checkMissing(meta2);
  //   return meta2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_, CCP, RHO);
  // r1 = dyn as_list(p)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // st meta = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // ___ = ldf `:::`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // r2 = dyn ___("tools", ".parse_CITATION_file")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // checkFun.0(r2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r2_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args10));
  // r3 = r2 as cls
  Rsh_Fir_reg_r3_ = Rsh_Fir_cast(Rsh_Fir_reg_r2_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p1 = prom<V +>{
  //   file1 = ld file;
  //   file2 = force? file1;
  //   checkMissing(file2);
  //   return file2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_1, CCP, RHO);
  // p2 = prom<V +>{
  //   meta3 = ld meta;
  //   meta4 = force? meta3;
  //   checkMissing(meta4);
  //   c = `is.object`(meta4);
  //   if c then L1() else L2(meta4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", meta4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(meta6):
  //   r5 = `$`(meta6, <sym Encoding>);
  //   goto L0(r5);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_2, CCP, RHO);
  // r7 = dyn r3(p1, p2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r3_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

D4_:;
  // deopt 13 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // st exprs = r7
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r10 = dyn list()
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

L22_:;
  // r8 = dyn base()
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L1_;

D5_:;
  // deopt 18 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L1(r10)
  // L1(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L1_;

D6_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r11 = dyn new_env[hash](TRUE)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new_env, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 30 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // st envir = r11
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

D8_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p3 = prom<V +>{
  //   meta7 = ld meta;
  //   meta8 = force? meta7;
  //   checkMissing(meta8);
  //   return meta8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_3, CCP, RHO);
  // p4 = prom<V +>{
  //   envir = ld envir;
  //   envir1 = force? envir;
  //   checkMissing(envir1);
  //   return envir1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_4, CCP, RHO);
  // r14 = dyn assign[, , envir]("meta", p3, p4)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D9_:;
  // deopt 38 [r14]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // exprs = ld exprs
  Rsh_Fir_reg_exprs = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L28() else D10()
  // L28()
  goto L28_;

D10_:;
  // deopt 39 [exprs]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_exprs;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // exprs1 = force? exprs
  Rsh_Fir_reg_exprs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exprs);
  // checkMissing(exprs1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_exprs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // s = toForSeq(exprs1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_exprs1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 28);
  // goto L4(i)
  // L4(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L4_;

D11_:;
  // deopt 44 [i2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L29_:;
  // p5 = prom<V +>{
  //   expr = ld expr;
  //   expr1 = force? expr;
  //   checkMissing(expr1);
  //   return expr1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_5, CCP, RHO);
  // p6 = prom<V +>{
  //   envir2 = ld envir;
  //   envir3 = force? envir2;
  //   checkMissing(envir3);
  //   return envir3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_6, CCP, RHO);
  // r17 = dyn eval[, envir](p5, p6)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

D12_:;
  // deopt 48 [i2, r17]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L30_:;
  // st x = r17
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard1 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L31_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L33() else D13()
  // L33()
  goto L33_;

L32_:;
  // r18 = dyn base1(<sym x>, "bibentry")
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(i2, r18)
  // L5(i2, r18)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L5_;

D13_:;
  // deopt 52 [i2, x1]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L33_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r20 = dyn inherits(x2, "bibentry", FALSE)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L34() else D14()
  // L34()
  goto L34_;

D14_:;
  // deopt 57 [i2, r20]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L5(i2, r20)
  // L5(i2, r20)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L5_;

L35_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard2 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // rval = ld rval
  Rsh_Fir_reg_rval = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L38() else D15()
  // L38()
  goto L38_;

L37_:;
  // r21 = dyn base2(<sym rval>, <lang list(x)>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(i7, r21)
  // L7(i7, r21)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L7_;

D15_:;
  // deopt 60 [i7, rval]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_rval;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L38_:;
  // rval1 = force? rval
  Rsh_Fir_reg_rval1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rval);
  // checkMissing(rval1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_rval1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard3 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L41() else D16()
  // L41()
  goto L41_;

L40_:;
  // r23 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(i7, r23)
  // L8(i7, r23)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L8_;

D16_:;
  // deopt 64 [i7, x3]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L41_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r25 = dyn list1(x4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L42() else D17()
  // L42()
  goto L42_;

D17_:;
  // deopt 67 [i7, r25]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L8(i7, r25)
  // L8(i7, r25)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L8_;

D18_:;
  // deopt 69 [i15, r26]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L7(i15, r26)
  // L7(i15, r26)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r26_;
  goto L7_;

L45_:;
  // rval2 = ld rval
  Rsh_Fir_reg_rval2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L47() else D19()
  // L47()
  goto L47_;

L46_:;
  // r28 = dyn base4(<sym rval>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L11_;

D19_:;
  // deopt 79 [rval2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_rval2_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L47_:;
  // rval3 = force? rval2
  Rsh_Fir_reg_rval3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rval2_);
  // checkMissing(rval3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_rval3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r30 = dyn length(rval3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_rval3_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L48() else D20()
  // L48()
  goto L48_;

D20_:;
  // deopt 82 [r30]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L11(r30)
  // L11(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L11_;

D21_:;
  // deopt 84 [rlen]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_rlen;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L49_:;
  // rlen1 = force? rlen
  Rsh_Fir_reg_rlen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rlen);
  // checkMissing(rlen1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_rlen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r31 = `==`(rlen1, 1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_rlen1_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c4 then L50() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L50()
    goto L50_;
  } else {
  // L12()
    goto L12_;
  }

L50_:;
  // rval4 = ld rval
  Rsh_Fir_reg_rval4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L51() else D22()
  // L51()
  goto L51_;

D22_:;
  // deopt 88 [rval4]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_rval4_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L51_:;
  // rval5 = force? rval4
  Rsh_Fir_reg_rval5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rval4_);
  // checkMissing(rval5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_rval5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(rval5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_rval5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c5 then L52() else L53(rval5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L52()
    goto L52_;
  } else {
  // L53(rval5)
    Rsh_Fir_reg_rval7_ = Rsh_Fir_reg_rval5_;
    goto L53_;
  }

L52_:;
  // dr2 = tryDispatchBuiltin.1("[[", rval5)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_rval5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc1 then L54() else L53(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L54()
    goto L54_;
  } else {
  // L53(dr2)
    Rsh_Fir_reg_rval7_ = Rsh_Fir_reg_dr2_;
    goto L53_;
  }

L53_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r32 = dyn __(rval7, 1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_rval7_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(r32)
  // L13(r32)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r32_;
  goto L13_;

L54_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L13(dx2)
  // L13(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L13_;

D23_:;
  // deopt 94 [rlen2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_rlen2_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L56_:;
  // rlen3 = force? rlen2
  Rsh_Fir_reg_rlen3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rlen2_);
  // checkMissing(rlen3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_rlen3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r33 = `>`(rlen3, 1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_rlen3_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c6 then L57() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L57()
    goto L57_;
  } else {
  // L15()
    goto L15_;
  }

L57_:;
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L58() else D24()
  // L58()
  goto L58_;

D24_:;
  // deopt 99 []
  Rsh_Fir_deopt(99, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p7 = prom<V +>{
  //   c7 = ld c;
  //   c8 = force? c7;
  //   checkMissing(c8);
  //   return c8;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_7, CCP, RHO);
  // p8 = prom<V +>{
  //   rval8 = ld rval;
  //   rval9 = force? rval8;
  //   checkMissing(rval9);
  //   return rval9;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_8, CCP, RHO);
  // r36 = dyn do_call(p7, p8)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L59() else D25()
  // L59()
  goto L59_;

D25_:;
  // deopt 102 [r36]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L59_:;
  // st rval = r36
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // goto L14()
  // L14()
  goto L14_;

D26_:;
  // deopt 107 []
  Rsh_Fir_deopt(107, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p9 = prom<V +>{
  //   rval10 = ld rval;
  //   rval11 = force? rval10;
  //   checkMissing(rval11);
  //   return rval11;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_9, CCP, RHO);
  // p10 = prom<V +>{
  //   meta9 = ld meta;
  //   meta10 = force? meta9;
  //   checkMissing(meta10);
  //   c9 = `is.object`(meta10);
  //   if c9 then L1() else L2(meta10);
  // L0(dx6):
  //   return dx6;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", meta10);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(meta12):
  //   r38 = `$`(meta12, <sym Package>);
  //   goto L0(r38);
  // L3():
  //   dx5 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx5);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner415126571_10, CCP, RHO);
  // r40 = dyn _citation(p9, p10)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__citation, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L62() else D27()
  // L62()
  goto L62_;

D27_:;
  // deopt 110 [r40]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L62_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_inner415126571_(SEXP CCP, SEXP RHO) {
  // meta1 = ld meta
  Rsh_Fir_reg_meta1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // meta2 = force? meta1
  Rsh_Fir_reg_meta2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_meta1_);
  // checkMissing(meta2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_meta2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return meta2
  return Rsh_Fir_reg_meta2_;
}
SEXP Rsh_Fir_user_promise_inner415126571_1(SEXP CCP, SEXP RHO) {
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return file2
  return Rsh_Fir_reg_file2_;
}
SEXP Rsh_Fir_user_promise_inner415126571_2(SEXP CCP, SEXP RHO) {
  // meta3 = ld meta
  Rsh_Fir_reg_meta3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // meta4 = force? meta3
  Rsh_Fir_reg_meta4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_meta3_);
  // checkMissing(meta4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_meta4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c = `is.object`(meta4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_meta4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(meta4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(meta4)
    Rsh_Fir_reg_meta6_ = Rsh_Fir_reg_meta4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", meta4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_meta4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_meta6_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r5 = `$`(meta6, <sym Encoding>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_meta6_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner415126571_3(SEXP CCP, SEXP RHO) {
  // meta7 = ld meta
  Rsh_Fir_reg_meta7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // meta8 = force? meta7
  Rsh_Fir_reg_meta8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_meta7_);
  // checkMissing(meta8)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_meta8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return meta8
  return Rsh_Fir_reg_meta8_;
}
SEXP Rsh_Fir_user_promise_inner415126571_4(SEXP CCP, SEXP RHO) {
  // envir = ld envir
  Rsh_Fir_reg_envir = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // envir1 = force? envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir);
  // checkMissing(envir1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_envir1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return envir1
  return Rsh_Fir_reg_envir1_;
}
SEXP Rsh_Fir_user_promise_inner415126571_5(SEXP CCP, SEXP RHO) {
  // expr = ld expr
  Rsh_Fir_reg_expr = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // expr1 = force? expr
  Rsh_Fir_reg_expr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr);
  // checkMissing(expr1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_expr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return expr1
  return Rsh_Fir_reg_expr1_;
}
SEXP Rsh_Fir_user_promise_inner415126571_6(SEXP CCP, SEXP RHO) {
  // envir2 = ld envir
  Rsh_Fir_reg_envir2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // envir3 = force? envir2
  Rsh_Fir_reg_envir3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir2_);
  // checkMissing(envir3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_envir3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return envir3
  return Rsh_Fir_reg_envir3_;
}
SEXP Rsh_Fir_user_promise_inner415126571_7(SEXP CCP, SEXP RHO) {
  // c7 = ld c
  Rsh_Fir_reg_c7_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c8 = force? c7
  Rsh_Fir_reg_c8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c7_);
  // checkMissing(c8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_c8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return c8
  return Rsh_Fir_reg_c8_;
}
SEXP Rsh_Fir_user_promise_inner415126571_8(SEXP CCP, SEXP RHO) {
  // rval8 = ld rval
  Rsh_Fir_reg_rval8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // rval9 = force? rval8
  Rsh_Fir_reg_rval9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rval8_);
  // checkMissing(rval9)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_rval9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return rval9
  return Rsh_Fir_reg_rval9_;
}
SEXP Rsh_Fir_user_promise_inner415126571_9(SEXP CCP, SEXP RHO) {
  // rval10 = ld rval
  Rsh_Fir_reg_rval10_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // rval11 = force? rval10
  Rsh_Fir_reg_rval11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rval10_);
  // checkMissing(rval11)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_rval11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return rval11
  return Rsh_Fir_reg_rval11_;
}
SEXP Rsh_Fir_user_promise_inner415126571_10(SEXP CCP, SEXP RHO) {
  // meta9 = ld meta
  Rsh_Fir_reg_meta9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // meta10 = force? meta9
  Rsh_Fir_reg_meta10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_meta9_);
  // checkMissing(meta10)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_meta10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(meta10)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_meta10_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c9 then L1() else L2(meta10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2(meta10)
    Rsh_Fir_reg_meta12_ = Rsh_Fir_reg_meta10_;
    goto L2_;
  }

L0_:;
  // return dx6
  return Rsh_Fir_reg_dx6_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", meta10)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_meta10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args62);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_meta12_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r38 = `$`(meta12, <sym Package>)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_meta12_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r38_;
  goto L0_;

L3_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L0(dx5)
  // L0(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
