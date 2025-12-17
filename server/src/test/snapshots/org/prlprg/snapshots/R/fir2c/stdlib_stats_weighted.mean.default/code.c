#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner362722233_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner362722233_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner362722233
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner362722233_, RHO, CCP);
  // st `weighted.mean.default` = r
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
SEXP Rsh_Fir_user_function_inner362722233_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner362722233 dynamic dispatch ([x, w, `...`, `na.rm`])

  return Rsh_Fir_user_version_inner362722233_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner362722233_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner362722233 version 0 (*, *, dots, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner362722233/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_w;  // w
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_na_rm;  // na_rm
  SEXP Rsh_Fir_reg_na_rm_isMissing;  // na_rm_isMissing
  SEXP Rsh_Fir_reg_na_rm_orDefault;  // na_rm_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_na_rm1_;  // na_rm1
  SEXP Rsh_Fir_reg_na_rm2_;  // na_rm2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_w1_;  // w1
  SEXP Rsh_Fir_reg_w2_;  // w2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_na_rm3_;  // na_rm3
  SEXP Rsh_Fir_reg_na_rm4_;  // na_rm4
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_w3_;  // w3
  SEXP Rsh_Fir_reg_w4_;  // w4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_w6_;  // w6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_x23_;  // x23
  SEXP Rsh_Fir_reg_w7_;  // w7
  SEXP Rsh_Fir_reg_w8_;  // w8
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_w9_;  // w9
  SEXP Rsh_Fir_reg_w10_;  // w10
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sum1_;  // sum1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_w11_;  // w11
  SEXP Rsh_Fir_reg_w12_;  // w12
  SEXP Rsh_Fir_reg_sum2_;  // sum2
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_w = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_na_rm = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st w = w
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_w, RHO);
  (void)(Rsh_Fir_reg_w);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // na_rm_isMissing = missing.0(na_rm)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_na_rm;
  Rsh_Fir_reg_na_rm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if na_rm_isMissing then L0(FALSE) else L0(na_rm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_rm_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(na_rm)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_Fir_reg_na_rm;
    goto L0_;
  }

L0_:;
  // st `na.rm` = na_rm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_na_rm_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_rm_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L24() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L24()
    goto L24_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard4 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L3_:;
  // goto L6()
  // L6()
  goto L6_;

L4_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L6()
  // L6()
  goto L6_;

L5_:;
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r7 = dyn __(x7, r6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L4_;

L6_:;
  // sym2 = ldf sum
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf sum in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L7_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L8_:;
  // r17 = `/`(r14, r15)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;

L10_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L11_:;
  // r29 = `!=`(r26, r27)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c3 then L54() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L54()
    goto L54_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // na_rm3 = ld `na.rm`
  Rsh_Fir_reg_na_rm3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

L14_:;
  // goto L18()
  // L18()
  goto L18_;

L15_:;
  // r35 = `!`(r33)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // st i = r35
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // w3 = ld w
  Rsh_Fir_reg_w3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

L16_:;
  // st w = dx4
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L69() else D19()
  // L69()
  goto L69_;

L17_:;
  // st x = dx6
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // sym7 = ldf sum
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base7 = ldf sum in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard7 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L19_:;
  // sym8 = ldf sum
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base8 = ldf sum in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard8 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L20_:;
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r45 = dyn sum1(dx9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L83() else D24()
  // L83()
  goto L83_;

L21_:;
  // r52 = `/`(r49, r50)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r52
  return Rsh_Fir_reg_r52_;

L22_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn missing(<sym w>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L23_:;
  // r = dyn base(<sym w>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L24_:;
  // na_rm1 = ld `na.rm`
  Rsh_Fir_reg_na_rm1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L25() else D0()
  // L25()
  goto L25_;

D0_:;
  // deopt 3 [na_rm1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_na_rm1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L25_:;
  // na_rm2 = force? na_rm1
  Rsh_Fir_reg_na_rm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm1_);
  // checkMissing(na_rm2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_na_rm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(na_rm2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_na_rm2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c1 then L26() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L3()
    goto L3_;
  }

L26_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D1()
  // L27()
  goto L27_;

D1_:;
  // deopt 5 [x1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L28() else L29(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L28()
    goto L28_;
  } else {
  // L29(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L29_;
  }

L28_:;
  // dr = tryDispatchBuiltin.1("[", x2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L30() else L29(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L30()
    goto L30_;
  } else {
  // L29(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L29_;
  }

L29_:;
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L30_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

L31_:;
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

L32_:;
  // r3 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(x4, r3)
  // L5(x4, r3)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L5_;

D2_:;
  // deopt 9 [x4, x8]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L33_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r5 = dyn is_na(x9)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

D3_:;
  // deopt 12 [x4, r5]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L5(x4, r5)
  // L5(x4, r5)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L5_;

L36_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L38() else D4()
  // L38()
  goto L38_;

L37_:;
  // r8 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L7(r8)
  // L7(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L7_;

D4_:;
  // deopt 20 [x10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L38_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r10 = dyn sum(x11)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

D5_:;
  // deopt 23 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L7_;

L40_:;
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D6()
  // L42()
  goto L42_;

L41_:;
  // r13 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L8(r9, r13)
  // L8(r9, r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
  goto L8_;

D6_:;
  // deopt 25 [r9, x12]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L42_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r16 = dyn length(x13)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L43() else D7()
  // L43()
  goto L43_;

D7_:;
  // deopt 28 [r9, r16]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L8(r9, r16)
  // L8(r9, r16)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L8_;

L46_:;
  // w1 = ld w
  Rsh_Fir_reg_w1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L48() else D8()
  // L48()
  goto L48_;

L47_:;
  // r20 = dyn base4(<sym w>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L10_;

D8_:;
  // deopt 35 [w1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_w1_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L48_:;
  // w2 = force? w1
  Rsh_Fir_reg_w2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w1_);
  // checkMissing(w2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_w2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r22 = dyn length1(w2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_w2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

D9_:;
  // deopt 38 [r22]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L10_;

L50_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D10()
  // L52()
  goto L52_;

L51_:;
  // r25 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r21, r25)
  // L11(r21, r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r25_;
  goto L11_;

D10_:;
  // deopt 40 [r21, x14]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L52_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r28 = dyn length2(x15)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L53() else D11()
  // L53()
  goto L53_;

D11_:;
  // deopt 43 [r21, r28]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L11(r21, r28)
  // L11(r21, r28)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L11_;

L54_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L55() else D12()
  // L55()
  goto L55_;

D12_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // r30 = dyn stop("'x' and 'w' must have the same length")
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L56() else D13()
  // L56()
  goto L56_;

D13_:;
  // deopt 48 [r30]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L13()
  // L13()
  goto L13_;

D14_:;
  // deopt 51 [na_rm3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_na_rm3_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L58_:;
  // na_rm4 = force? na_rm3
  Rsh_Fir_reg_na_rm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm3_);
  // checkMissing(na_rm4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_na_rm4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(na_rm4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_na_rm4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c4 then L59() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L59()
    goto L59_;
  } else {
  // L14()
    goto L14_;
  }

L59_:;
  // sym6 = ldf `is.na`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base6 = ldf `is.na` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard6 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L60_:;
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

L61_:;
  // r32 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L15_;

D15_:;
  // deopt 55 [x16]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L62_:;
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r34 = dyn is_na1(x17)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L63() else D16()
  // L63()
  goto L63_;

D16_:;
  // deopt 58 [r34]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L15_;

D17_:;
  // deopt 61 [w3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_w3_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L64_:;
  // w4 = force? w3
  Rsh_Fir_reg_w4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w3_);
  // checkMissing(w4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_w4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(w4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_w4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c5 then L65() else L66(w4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L65()
    goto L65_;
  } else {
  // L66(w4)
    Rsh_Fir_reg_w6_ = Rsh_Fir_reg_w4_;
    goto L66_;
  }

L65_:;
  // dr2 = tryDispatchBuiltin.1("[", w4)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_w4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc1 then L67() else L66(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L67()
    goto L67_;
  } else {
  // L66(dr2)
    Rsh_Fir_reg_w6_ = Rsh_Fir_reg_dr2_;
    goto L66_;
  }

L66_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

L67_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L16(dx3)
  // L16(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L16_;

D18_:;
  // deopt 63 [w6, i]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_w6_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L68_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r36 = dyn __1(w6, i1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_w6_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(r36)
  // L16(r36)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r36_;
  goto L16_;

D19_:;
  // deopt 67 [x18]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L69_:;
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(x19)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c6 then L70() else L71(x19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L70()
    goto L70_;
  } else {
  // L71(x19)
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_x19_;
    goto L71_;
  }

L70_:;
  // dr4 = tryDispatchBuiltin.1("[", x19)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc2 then L72() else L71(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L72()
    goto L72_;
  } else {
  // L71(dr4)
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_dr4_;
    goto L71_;
  }

L71_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

L72_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L17(dx5)
  // L17(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L17_;

D20_:;
  // deopt 69 [x21, i2]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L73_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r37 = dyn __2(x21, i3)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L17(r37)
  // L17(r37)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r37_;
  goto L17_;

L75_:;
  // x22 = ld x
  Rsh_Fir_reg_x22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L77() else D21()
  // L77()
  goto L77_;

L76_:;
  // r38 = dyn base7(<lang `[`(`(`(`*`(x, w)), `!=`(w, 0.0))>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L19(r38)
  // L19(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L19_;

D21_:;
  // deopt 77 [x22]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L77_:;
  // x23 = force? x22
  Rsh_Fir_reg_x23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x22_);
  // checkMissing(x23)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // w7 = ld w
  Rsh_Fir_reg_w7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L78() else D22()
  // L78()
  goto L78_;

D22_:;
  // deopt 78 [x23, w7]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_w7_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L78_:;
  // w8 = force? w7
  Rsh_Fir_reg_w8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w7_);
  // checkMissing(w8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_w8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r40 = `*`(x23, w8)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_w8_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // c7 = `is.object`(r40)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c7 then L79() else L80(r40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L79()
    goto L79_;
  } else {
  // L80(r40)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r40_;
    goto L80_;
  }

L79_:;
  // dr6 = tryDispatchBuiltin.1("[", r40)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc3 then L81() else L80(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L81()
    goto L81_;
  } else {
  // L80(dr6)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_dr6_;
    goto L80_;
  }

L80_:;
  // w9 = ld w
  Rsh_Fir_reg_w9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L82() else D23()
  // L82()
  goto L82_;

L81_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L20(dx8)
  // L20(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L20_;

D23_:;
  // deopt 81 [r42, w9]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_w9_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L82_:;
  // w10 = force? w9
  Rsh_Fir_reg_w10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w9_);
  // checkMissing(w10)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_w10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r43 = `!=`(w10, 0.0)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_w10_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r44 = dyn __3(r42, r43)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L20(r44)
  // L20(r44)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r44_;
  goto L20_;

D24_:;
  // deopt 87 [r45]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L19(r45)
  // L19(r45)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r45_;
  goto L19_;

L84_:;
  // w11 = ld w
  Rsh_Fir_reg_w11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L86() else D25()
  // L86()
  goto L86_;

L85_:;
  // r48 = dyn base8(<sym w>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L21(r39, r48)
  // L21(r39, r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
  goto L21_;

D25_:;
  // deopt 89 [r39, w11]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_w11_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L86_:;
  // w12 = force? w11
  Rsh_Fir_reg_w12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w11_);
  // checkMissing(w12)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_w12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r51 = dyn sum2(w12)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_w12_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L87() else D26()
  // L87()
  goto L87_;

D26_:;
  // deopt 92 [r39, r51]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(92, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L21(r39, r51)
  // L21(r39, r51)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L21_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
