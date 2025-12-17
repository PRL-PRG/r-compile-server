#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner934078868_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner934078868_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner934078868_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner934078868_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner934078868_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner934078868
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner934078868_, RHO, CCP);
  // st `qr.R` = r
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
SEXP Rsh_Fir_user_function_inner934078868_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner934078868 dynamic dispatch ([qr, complete])

  return Rsh_Fir_user_version_inner934078868_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner934078868_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner934078868 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner934078868/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_qr;  // qr
  SEXP Rsh_Fir_reg_complete;  // complete
  SEXP Rsh_Fir_reg_complete_isMissing;  // complete_isMissing
  SEXP Rsh_Fir_reg_complete_orDefault;  // complete_orDefault
  SEXP Rsh_Fir_reg_is_qr;  // is_qr
  SEXP Rsh_Fir_reg_qr1_;  // qr1
  SEXP Rsh_Fir_reg_qr2_;  // qr2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_qr3_;  // qr3
  SEXP Rsh_Fir_reg_qr4_;  // qr4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_qr6_;  // qr6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_complete1_;  // complete1
  SEXP Rsh_Fir_reg_complete2_;  // complete2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_R;  // R
  SEXP Rsh_Fir_reg_R1_;  // R1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_R3_;  // R3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_R9_;  // R9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_R12_;  // R12
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_R13_;  // R13
  SEXP Rsh_Fir_reg_R14_;  // R14
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_row;  // row
  SEXP Rsh_Fir_reg_R15_;  // R15
  SEXP Rsh_Fir_reg_R16_;  // R16
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_col;  // col
  SEXP Rsh_Fir_reg_R17_;  // R17
  SEXP Rsh_Fir_reg_R18_;  // R18
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_R19_;  // R19
  SEXP Rsh_Fir_reg_R20_;  // R20

  // Bind parameters
  Rsh_Fir_reg_qr = PARAMS[0];
  Rsh_Fir_reg_complete = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st qr = qr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_qr, RHO);
  (void)(Rsh_Fir_reg_qr);
  // complete_isMissing = missing.0(complete)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_complete;
  Rsh_Fir_reg_complete_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if complete_isMissing then L0(FALSE) else L0(complete)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_complete_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_complete_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(complete)
    Rsh_Fir_reg_complete_orDefault = Rsh_Fir_reg_complete;
    goto L0_;
  }

L0_:;
  // st complete = complete_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_complete_orDefault, RHO);
  (void)(Rsh_Fir_reg_complete_orDefault);
  // is_qr = ldf `is.qr`
  Rsh_Fir_reg_is_qr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // qr3 = ld qr
  Rsh_Fir_reg_qr3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L3_:;
  // goto L8()
  // L8()
  goto L8_;

L4_:;
  // st R = dx3
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L8()
  // L8()
  goto L8_;

L5_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r16 = dyn __(R1, r8, <missing>, FALSE)
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_R1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r16_;
  goto L4_;

L6_:;
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r15 = dyn seq_int(r10)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

L7_:;
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r14 = dyn min(r12)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

L8_:;
  // l = ld R
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c4 then L38() else L39(0.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L38()
    goto L38_;
  } else {
  // L39(0.0, l)
    Rsh_Fir_reg_r18_ = Rsh_const(CCP, 10);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L39_;
  }

L9_:;
  // st R = dx6
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // R19 = ld R
  Rsh_Fir_reg_R19_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L45() else D15()
  // L45()
  goto L45_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   qr1 = ld qr;
  //   qr2 = force? qr1;
  //   checkMissing(qr2);
  //   return qr2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner934078868_, CCP, RHO);
  // r1 = dyn is_qr(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_qr, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c then L12() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L1()
    goto L1_;
  }

L12_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // r3 = dyn stop("argument is not a QR decomposition")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L2()
  // L2()
  goto L2_;

D4_:;
  // deopt 11 [qr3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_qr3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // qr4 = force? qr3
  Rsh_Fir_reg_qr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr3_);
  // checkMissing(qr4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_qr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(qr4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_qr4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c1 then L18() else L19(qr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L18()
    goto L18_;
  } else {
  // L19(qr4)
    Rsh_Fir_reg_qr6_ = Rsh_Fir_reg_qr4_;
    goto L19_;
  }

L17_:;
  // st R = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // complete1 = ld complete
  Rsh_Fir_reg_complete1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

L18_:;
  // dr = tryDispatchBuiltin.1("$", qr4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_qr4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L20() else L19(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L20()
    goto L20_;
  } else {
  // L19(dr)
    Rsh_Fir_reg_qr6_ = Rsh_Fir_reg_dr;
    goto L19_;
  }

L19_:;
  // r5 = `$`(qr6, <sym qr>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_qr6_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L17(r5)
  // L17(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L17_;

L20_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L17(dx)
  // L17(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L17_;

D5_:;
  // deopt 15 [complete1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_complete1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L21_:;
  // complete2 = force? complete1
  Rsh_Fir_reg_complete2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_complete1_);
  // checkMissing(complete2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_complete2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // r6 = `!`(complete2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_complete2_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c2 then L22() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L22()
    goto L22_;
  } else {
  // L3()
    goto L3_;
  }

L22_:;
  // R = ld R
  Rsh_Fir_reg_R = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

D6_:;
  // deopt 18 [R]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_R;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // R1 = force? R
  Rsh_Fir_reg_R1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R);
  // checkMissing(R1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_R1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(R1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_R1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c3 then L24() else L25(R1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L24()
    goto L24_;
  } else {
  // L25(R1)
    Rsh_Fir_reg_R3_ = Rsh_Fir_reg_R1_;
    goto L25_;
  }

L24_:;
  // dr2 = tryDispatchBuiltin.1("[", R1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_R1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L26() else L25(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L26()
    goto L26_;
  } else {
  // L25(dr2)
    Rsh_Fir_reg_R3_ = Rsh_Fir_reg_dr2_;
    goto L25_;
  }

L25_:;
  // sym = ldf `seq.int`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `seq.int` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L26_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

L27_:;
  // sym1 = ldf min
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf min in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L28_:;
  // r7 = dyn base(<lang min(dim(R))>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L5_;

L29_:;
  // sym2 = ldf dim
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf dim in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L30_:;
  // r9 = dyn base1(<lang dim(R)>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(R3, r9)
  // L6(R3, r9)
  Rsh_Fir_reg_R9_ = Rsh_Fir_reg_R3_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L6_;

L31_:;
  // R13 = ld R
  Rsh_Fir_reg_R13_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L32_:;
  // r11 = dyn base2(<sym R>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(R3, r11)
  // L7(R3, r11)
  Rsh_Fir_reg_R12_ = Rsh_Fir_reg_R3_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L7_;

D7_:;
  // deopt 26 [R3, R13]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_R3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_R13_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // R14 = force? R13
  Rsh_Fir_reg_R14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R13_);
  // checkMissing(R14)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_R14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r13 = dyn dim(R14)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_R14_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

D8_:;
  // deopt 29 [R3, r13]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_R3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L7(R3, r13)
  // L7(R3, r13)
  Rsh_Fir_reg_R12_ = Rsh_Fir_reg_R3_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L7_;

D9_:;
  // deopt 31 [R12, r14]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_R12_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L6(R12, r14)
  // L6(R12, r14)
  Rsh_Fir_reg_R9_ = Rsh_Fir_reg_R12_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r14_;
  goto L6_;

D10_:;
  // deopt 33 [R9, r15]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_R9_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L5(r15)
  // L5(r15)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r15_;
  goto L5_;

L38_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l, 0.0)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args32);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc2 then L40() else L39(0.0, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L40()
    goto L40_;
  } else {
  // L39(0.0, dr4)
    Rsh_Fir_reg_r18_ = Rsh_const(CCP, 10);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L39_;
  }

L39_:;
  // row = ldf row
  Rsh_Fir_reg_row = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

L40_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L9(dx5)
  // L9(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L9_;

D11_:;
  // deopt 46 [r18, l2, 0.0]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_const(CCP, 10);
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // p1 = prom<V +>{
  //   R15 = ld R;
  //   R16 = force? R15;
  //   checkMissing(R16);
  //   return R16;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner934078868_1, CCP, RHO);
  // r22 = dyn row(p1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

D12_:;
  // deopt 48 [r18, l2, 0.0, r22]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(48, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L42_:;
  // col = ldf col
  Rsh_Fir_reg_col = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L43() else D13()
  // L43()
  goto L43_;

D13_:;
  // deopt 49 [r18, l2, 0.0, r22]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(49, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L43_:;
  // p2 = prom<V +>{
  //   R17 = ld R;
  //   R18 = force? R17;
  //   checkMissing(R18);
  //   return R18;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner934078868_2, CCP, RHO);
  // r24 = dyn col(p2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_col, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

D14_:;
  // deopt 51 [r18, l2, 0.0, r22, r24]
  SEXP Rsh_Fir_array_deopt_stack12[5];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack12[4] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(51, 5, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L44_:;
  // r25 = `>`(r22, r24)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r26 = dyn ___(l2, 0.0, r25)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(r26)
  // L9(r26)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r26_;
  goto L9_;

D15_:;
  // deopt 55 [R19]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_R19_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L45_:;
  // R20 = force? R19
  Rsh_Fir_reg_R20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R19_);
  // checkMissing(R20)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_R20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return R20
  return Rsh_Fir_reg_R20_;
}
SEXP Rsh_Fir_user_promise_inner934078868_(SEXP CCP, SEXP RHO) {
  // qr1 = ld qr
  Rsh_Fir_reg_qr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr2 = force? qr1
  Rsh_Fir_reg_qr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr1_);
  // checkMissing(qr2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_qr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return qr2
  return Rsh_Fir_reg_qr2_;
}
SEXP Rsh_Fir_user_promise_inner934078868_1(SEXP CCP, SEXP RHO) {
  // R15 = ld R
  Rsh_Fir_reg_R15_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // R16 = force? R15
  Rsh_Fir_reg_R16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R15_);
  // checkMissing(R16)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_R16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return R16
  return Rsh_Fir_reg_R16_;
}
SEXP Rsh_Fir_user_promise_inner934078868_2(SEXP CCP, SEXP RHO) {
  // R17 = ld R
  Rsh_Fir_reg_R17_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // R18 = force? R17
  Rsh_Fir_reg_R18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R17_);
  // checkMissing(R18)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_R18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return R18
  return Rsh_Fir_reg_R18_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
