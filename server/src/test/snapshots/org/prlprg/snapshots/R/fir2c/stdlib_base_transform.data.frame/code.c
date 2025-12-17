#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2733360753_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2733360753_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2733360753_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2733360753_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2733360753_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2733360753_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2733360753_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2733360753
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2733360753_, RHO, CCP);
  // st `transform.data.frame` = r
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
SEXP Rsh_Fir_user_function_inner2733360753_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2733360753 dynamic dispatch ([_data, `...`])

  return Rsh_Fir_user_version_inner2733360753_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2733360753_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2733360753 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2733360753/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg__data;  // _data
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg__data1_;  // _data1
  SEXP Rsh_Fir_reg__data2_;  // _data2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_e;  // e
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_tags;  // tags
  SEXP Rsh_Fir_reg_tags1_;  // tags1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg__data3_;  // _data3
  SEXP Rsh_Fir_reg__data4_;  // _data4
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_inx;  // inx
  SEXP Rsh_Fir_reg_inx1_;  // inx1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_matched;  // matched
  SEXP Rsh_Fir_reg_matched1_;  // matched1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_e5_;  // e5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_matched2_;  // matched2
  SEXP Rsh_Fir_reg_matched3_;  // matched3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_inx2_;  // inx2
  SEXP Rsh_Fir_reg_inx3_;  // inx3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_inx5_;  // inx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_matched4_;  // matched4
  SEXP Rsh_Fir_reg_matched5_;  // matched5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_data_frame;  // data_frame
  SEXP Rsh_Fir_reg__data5_;  // _data5
  SEXP Rsh_Fir_reg__data6_;  // _data6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_matched6_;  // matched6
  SEXP Rsh_Fir_reg_matched7_;  // matched7
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_e6_;  // e6
  SEXP Rsh_Fir_reg_e7_;  // e7
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_e9_;  // e9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_matched8_;  // matched8
  SEXP Rsh_Fir_reg_matched9_;  // matched9
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_do_call;  // do_call
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg__data7_;  // _data7
  SEXP Rsh_Fir_reg__data8_;  // _data8
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg__data9_;  // _data9
  SEXP Rsh_Fir_reg__data10_;  // _data10

  // Bind parameters
  Rsh_Fir_reg__data = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st _data = _data
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg__data, RHO);
  (void)(Rsh_Fir_reg__data);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L0_:;
  // st tags = r9
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym2 = ldf match
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf match in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L1_:;
  // st inx = r12
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard4 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L2_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r16 = dyn match(tags1, r14, NA_INT, NULL)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_tags1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

L3_:;
  // r20 = `!`(r18)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // st matched = r20
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard5 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L4_:;
  // c = `as.logical`(r22)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L36() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L36()
    goto L36_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L9()
  // L9()
  goto L9_;

L6_:;
  // l = ld _data
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c2 then L42() else L43(dx1, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L42()
    goto L42_;
  } else {
  // L43(dx1, l)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L43_;
  }

L7_:;
  // st _data = dx7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

L8_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r26 = dyn ___(l6, dx16, dx17)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L7(r26)
  // L7(r26)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r26_;
  goto L7_;

L9_:;
  // sym6 = ldf all
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf all in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard6 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L10_:;
  // r33 = `!`(r31)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c4 then L57() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L57()
    goto L57_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // _data9 = ld _data
  Rsh_Fir_reg__data9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L69() else D24()
  // L69()
  goto L69_;

L12_:;
  // st args = dx19
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // l7 = ld args
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c6 = `is.object`(l7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c6 then L63() else L64(FALSE, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L63()
    goto L63_;
  } else {
  // L64(FALSE, l7)
    Rsh_Fir_reg_r37_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L64_;
  }

L13_:;
  // st args = dx21
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L66() else D22()
  // L66()
  goto L66_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   sym = ldf substitute;
  //   base = ldf substitute in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   substitute = ldf substitute in base;
  //   r2 = dyn substitute(<lang list(...)>);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<lang list(...)>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2733360753_, CCP, RHO);
  // p1 = prom<V +>{
  //   _data1 = ld _data;
  //   _data2 = force? _data1;
  //   checkMissing(_data2);
  //   return _data2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2733360753_1, CCP, RHO);
  // p2 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r5 = dyn parent_frame();
  //   return r5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2733360753_2, CCP, RHO);
  // r7 = dyn eval(p, p1, p2)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 5 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // st e = r7
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // e = ld e
  Rsh_Fir_reg_e = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

L17_:;
  // r8 = dyn base1(<sym e>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;

D2_:;
  // deopt 9 [e]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_e;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // e1 = force? e
  Rsh_Fir_reg_e1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e);
  // checkMissing(e1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_e1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r10 = dyn names(e1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_e1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 12 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L0_;

L20_:;
  // tags = ld tags
  Rsh_Fir_reg_tags = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

L21_:;
  // r11 = dyn base2(<sym tags>, <lang names(_data)>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r11)
  // L1(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L1_;

D4_:;
  // deopt 16 [tags]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_tags;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // tags1 = force? tags
  Rsh_Fir_reg_tags1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tags);
  // checkMissing(tags1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_tags1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // sym3 = ldf names
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard3 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // _data3 = ld _data
  Rsh_Fir_reg__data3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

L24_:;
  // r13 = dyn base3(<sym _data>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L2_;

D5_:;
  // deopt 20 [_data3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg__data3_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // _data4 = force? _data3
  Rsh_Fir_reg__data4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__data3_);
  // checkMissing(_data4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__data4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r15 = dyn names1(_data4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg__data4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

D6_:;
  // deopt 23 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L2(r15)
  // L2(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L2_;

D7_:;
  // deopt 27 [r16]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L1(r16)
  // L1(r16)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r16_;
  goto L1_;

L28_:;
  // inx = ld inx
  Rsh_Fir_reg_inx = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L30() else D8()
  // L30()
  goto L30_;

L29_:;
  // r17 = dyn base4(<sym inx>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L3(r17)
  // L3(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L3_;

D8_:;
  // deopt 31 [inx]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_inx;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // inx1 = force? inx
  Rsh_Fir_reg_inx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inx);
  // checkMissing(inx1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_inx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r19 = dyn is_na(inx1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_inx1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L31() else D9()
  // L31()
  goto L31_;

D9_:;
  // deopt 34 [r19]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L3(r19)
  // L3(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L3_;

L32_:;
  // matched = ld matched
  Rsh_Fir_reg_matched = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L34() else D10()
  // L34()
  goto L34_;

L33_:;
  // r21 = dyn base5(<sym matched>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L4(r21)
  // L4(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L4_;

D10_:;
  // deopt 39 [matched]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_matched;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L34_:;
  // matched1 = force? matched
  Rsh_Fir_reg_matched1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_matched);
  // checkMissing(matched1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_matched1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r23 = dyn any(matched1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_matched1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L35() else D11()
  // L35()
  goto L35_;

D11_:;
  // deopt 42 [r23]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L4(r23)
  // L4(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L4_;

L36_:;
  // e2 = ld e
  Rsh_Fir_reg_e2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D12_:;
  // deopt 43 [e2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_e2_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L37_:;
  // e3 = force? e2
  Rsh_Fir_reg_e3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e2_);
  // checkMissing(e3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_e3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(e3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_e3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c1 then L38() else L39(e3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L38()
    goto L38_;
  } else {
  // L39(e3)
    Rsh_Fir_reg_e5_ = Rsh_Fir_reg_e3_;
    goto L39_;
  }

L38_:;
  // dr = tryDispatchBuiltin.1("[", e3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_e3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L40() else L39(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L40()
    goto L40_;
  } else {
  // L39(dr)
    Rsh_Fir_reg_e5_ = Rsh_Fir_reg_dr;
    goto L39_;
  }

L39_:;
  // matched2 = ld matched
  Rsh_Fir_reg_matched2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L41() else D13()
  // L41()
  goto L41_;

L40_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D13_:;
  // deopt 45 [e5, matched2]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_matched2_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L41_:;
  // matched3 = force? matched2
  Rsh_Fir_reg_matched3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_matched2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r24 = dyn __(e5, matched3)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_matched3_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L6(r24)
  // L6(r24)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r24_;
  goto L6_;

L42_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, dx1)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args39);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc1 then L44() else L43(dx1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L44()
    goto L44_;
  } else {
  // L43(dx1, dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L43_;
  }

L43_:;
  // inx2 = ld inx
  Rsh_Fir_reg_inx2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L45() else D14()
  // L45()
  goto L45_;

L44_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L7(dx5)
  // L7(dx5)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
  goto L7_;

D14_:;
  // deopt 49 [dx3, l2, dx1, inx2]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_inx2_;
  Rsh_Fir_deopt(49, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L45_:;
  // inx3 = force? inx2
  Rsh_Fir_reg_inx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inx2_);
  // checkMissing(inx3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_inx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(inx3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_inx3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c3 then L46() else L47(dx3, l2, dx1, inx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L46()
    goto L46_;
  } else {
  // L47(dx3, l2, dx1, inx3)
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_inx5_ = Rsh_Fir_reg_inx3_;
    goto L47_;
  }

L46_:;
  // dr4 = tryDispatchBuiltin.1("[", inx3)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_inx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args44);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc2 then L48() else L47(dx3, l2, dx1, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L48()
    goto L48_;
  } else {
  // L47(dx3, l2, dx1, dr4)
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_inx5_ = Rsh_Fir_reg_dr4_;
    goto L47_;
  }

L47_:;
  // matched4 = ld matched
  Rsh_Fir_reg_matched4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

L48_:;
  // dx14 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L8(dx3, l2, dx1, dx14)
  // L8(dx3, l2, dx1, dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx14_;
  goto L8_;

D15_:;
  // deopt 51 [dx10, l4, dx11, inx5, matched4]
  SEXP Rsh_Fir_array_deopt_stack14[5];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_inx5_;
  Rsh_Fir_array_deopt_stack14[4] = Rsh_Fir_reg_matched4_;
  Rsh_Fir_deopt(51, 5, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L49_:;
  // matched5 = force? matched4
  Rsh_Fir_reg_matched5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_matched4_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r25 = dyn __1(inx5, matched5)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_inx5_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_matched5_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L8(dx10, l4, dx11, r25)
  // L8(dx10, l4, dx11, r25)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx10_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r25_;
  goto L8_;

D16_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p3 = prom<V +>{
  //   _data5 = ld _data;
  //   _data6 = force? _data5;
  //   checkMissing(_data6);
  //   return _data6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2733360753_3, CCP, RHO);
  // r28 = dyn data_frame[, `check.names`](p3, FALSE)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L51() else D17()
  // L51()
  goto L51_;

D17_:;
  // deopt 61 [r28]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L51_:;
  // st _data = r28
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // goto L9()
  // L9()
  goto L9_;

L53_:;
  // matched6 = ld matched
  Rsh_Fir_reg_matched6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L55() else D18()
  // L55()
  goto L55_;

L54_:;
  // r30 = dyn base6(<sym matched>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L10(r30)
  // L10(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L10_;

D18_:;
  // deopt 67 [matched6]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_matched6_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // matched7 = force? matched6
  Rsh_Fir_reg_matched7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_matched6_);
  // checkMissing(matched7)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_matched7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r32 = dyn all(matched7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_matched7_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L56() else D19()
  // L56()
  goto L56_;

D19_:;
  // deopt 70 [r32]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L10(r32)
  // L10(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L10_;

L57_:;
  // e6 = ld e
  Rsh_Fir_reg_e6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L58() else D20()
  // L58()
  goto L58_;

D20_:;
  // deopt 72 [e6]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_e6_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L58_:;
  // e7 = force? e6
  Rsh_Fir_reg_e7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e6_);
  // checkMissing(e7)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_e7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(e7)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_e7_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c5 then L59() else L60(e7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L59()
    goto L59_;
  } else {
  // L60(e7)
    Rsh_Fir_reg_e9_ = Rsh_Fir_reg_e7_;
    goto L60_;
  }

L59_:;
  // dr6 = tryDispatchBuiltin.1("[", e7)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_e7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc3 then L61() else L60(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L61()
    goto L61_;
  } else {
  // L60(dr6)
    Rsh_Fir_reg_e9_ = Rsh_Fir_reg_dr6_;
    goto L60_;
  }

L60_:;
  // matched8 = ld matched
  Rsh_Fir_reg_matched8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L62() else D21()
  // L62()
  goto L62_;

L61_:;
  // dx18 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L12(dx18)
  // L12(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L12_;

D21_:;
  // deopt 74 [e9, matched8]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_e9_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_matched8_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L62_:;
  // matched9 = force? matched8
  Rsh_Fir_reg_matched9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_matched8_);
  // checkMissing(matched9)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_matched9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r34 = `!`(matched9)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_matched9_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r35 = dyn __2(e9, r34)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_e9_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r35_;
  goto L12_;

L63_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l7, FALSE)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args61);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc4 then L65() else L64(FALSE, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L65()
    goto L65_;
  } else {
  // L64(FALSE, dr8)
    Rsh_Fir_reg_r37_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr8_;
    goto L64_;
  }

L64_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r40 = dyn ____(l9, FALSE, "check.names")
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L13(r40)
  // L13(r40)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r40_;
  goto L13_;

L65_:;
  // dx20 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L13(dx20)
  // L13(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L13_;

D22_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // p4 = prom<V +>{
  //   sym7 = ldf c;
  //   base7 = ldf c in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L2() else L3();
  // L0(r42):
  //   return r42;
  // L2():
  //   sym8 = ldf list;
  //   base8 = ldf list in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L4() else L5();
  // L3():
  //   r41 = dyn base7(<lang list(_data)>, <sym args>);
  //   goto L0(r41);
  // L1(r44):
  //   args = ld args;
  //   args1 = force? args;
  //   checkMissing(args1);
  //   c7 = ldf c in base;
  //   r46 = dyn c7(r44, args1);
  //   goto L0(r46);
  // L4():
  //   _data7 = ld _data;
  //   _data8 = force? _data7;
  //   checkMissing(_data8);
  //   list = ldf list in base;
  //   r45 = dyn list(_data8);
  //   goto L1(r45);
  // L5():
  //   r43 = dyn base8(<sym _data>);
  //   goto L1(r43);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2733360753_4, CCP, RHO);
  // r48 = dyn do_call("data.frame", p4)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L67() else D23()
  // L67()
  goto L67_;

D23_:;
  // deopt 90 [r48]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L67_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r48
  return Rsh_Fir_reg_r48_;

D24_:;
  // deopt 91 [_data9]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg__data9_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L69_:;
  // _data10 = force? _data9
  Rsh_Fir_reg__data10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__data9_);
  // checkMissing(_data10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg__data10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return _data10
  return Rsh_Fir_reg__data10_;
}
SEXP Rsh_Fir_user_promise_inner2733360753_(SEXP CCP, SEXP RHO) {
  // sym = ldf substitute
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base = ldf substitute in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
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
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r2 = dyn substitute(<lang list(...)>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<lang list(...)>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2733360753_1(SEXP CCP, SEXP RHO) {
  // _data1 = ld _data
  Rsh_Fir_reg__data1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // _data2 = force? _data1
  Rsh_Fir_reg__data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__data1_);
  // checkMissing(_data2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg__data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return _data2
  return Rsh_Fir_reg__data2_;
}
SEXP Rsh_Fir_user_promise_inner2733360753_2(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // r5 = dyn parent_frame()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_inner2733360753_3(SEXP CCP, SEXP RHO) {
  // _data5 = ld _data
  Rsh_Fir_reg__data5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // _data6 = force? _data5
  Rsh_Fir_reg__data6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__data5_);
  // checkMissing(_data6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg__data6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return _data6
  return Rsh_Fir_reg__data6_;
}
SEXP Rsh_Fir_user_promise_inner2733360753_4(SEXP CCP, SEXP RHO) {
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard7 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r42
  return Rsh_Fir_reg_r42_;

L1_:;
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r46 = dyn c7(r44, args1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r46_;
  goto L0_;

L2_:;
  // sym8 = ldf list
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base8 = ldf list in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard8 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r41 = dyn base7(<lang list(_data)>, <sym args>)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L0_;

L4_:;
  // _data7 = ld _data
  Rsh_Fir_reg__data7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // _data8 = force? _data7
  Rsh_Fir_reg__data8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__data7_);
  // checkMissing(_data8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg__data8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r45 = dyn list(_data8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg__data8_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L1(r45)
  // L1(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L1_;

L5_:;
  // r43 = dyn base8(<sym _data>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L1(r43)
  // L1(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
