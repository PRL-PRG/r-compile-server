#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner399722262_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner399722262_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner399722262_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner399722262_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner399722262_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner399722262_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner399722262_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner399722262_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner399722262_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner399722262_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner399722262_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner399722262_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner399722262
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner399722262_, RHO, CCP);
  // st fixWindowsConcordancePaths = r
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
SEXP Rsh_Fir_user_function_inner399722262_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner399722262 dynamic dispatch ([split])

  return Rsh_Fir_user_version_inner399722262_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner399722262_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner399722262 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner399722262/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_split;  // split
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_split1_;  // split1
  SEXP Rsh_Fir_reg_split2_;  // split2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_split3_;  // split3
  SEXP Rsh_Fir_reg_split4_;  // split4
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_split5_;  // split5
  SEXP Rsh_Fir_reg_split6_;  // split6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_split8_;  // split8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_grep1_;  // grep1
  SEXP Rsh_Fir_reg_split9_;  // split9
  SEXP Rsh_Fir_reg_split10_;  // split10
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_split12_;  // split12
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_split15_;  // split15
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_split16_;  // split16
  SEXP Rsh_Fir_reg_split17_;  // split17
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_setdiff;  // setdiff
  SEXP Rsh_Fir_reg_driveletter;  // driveletter
  SEXP Rsh_Fir_reg_driveletter1_;  // driveletter1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_ofs;  // ofs
  SEXP Rsh_Fir_reg_ofs1_;  // ofs1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_driveletter2_;  // driveletter2
  SEXP Rsh_Fir_reg_driveletter3_;  // driveletter3
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_split18_;  // split18
  SEXP Rsh_Fir_reg_split19_;  // split19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_ofs2_;  // ofs2
  SEXP Rsh_Fir_reg_ofs3_;  // ofs3
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_split20_;  // split20
  SEXP Rsh_Fir_reg_split21_;  // split21
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_driveletter4_;  // driveletter4
  SEXP Rsh_Fir_reg_driveletter5_;  // driveletter5
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_split22_;  // split22
  SEXP Rsh_Fir_reg_split23_;  // split23
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_split25_;  // split25
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_split26_;  // split26
  SEXP Rsh_Fir_reg_split27_;  // split27
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_split29_;  // split29
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_split30_;  // split30
  SEXP Rsh_Fir_reg_split31_;  // split31
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_split33_;  // split33
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_split34_;  // split34
  SEXP Rsh_Fir_reg_split35_;  // split35
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_split37_;  // split37
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_split40_;  // split40
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_split41_;  // split41
  SEXP Rsh_Fir_reg_split42_;  // split42
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_driveletter6_;  // driveletter6
  SEXP Rsh_Fir_reg_driveletter7_;  // driveletter7
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_driveletter8_;  // driveletter8
  SEXP Rsh_Fir_reg_driveletter9_;  // driveletter9
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_split43_;  // split43
  SEXP Rsh_Fir_reg_split44_;  // split44
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_split46_;  // split46
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_split47_;  // split47
  SEXP Rsh_Fir_reg_split48_;  // split48
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_split50_;  // split50
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_split51_;  // split51
  SEXP Rsh_Fir_reg_split52_;  // split52
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_split54_;  // split54
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_split55_;  // split55
  SEXP Rsh_Fir_reg_split56_;  // split56
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_split58_;  // split58
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_split61_;  // split61
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_split62_;  // split62
  SEXP Rsh_Fir_reg_split63_;  // split63
  SEXP Rsh_Fir_reg_length6_;  // length6
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_split64_;  // split64
  SEXP Rsh_Fir_reg_split65_;  // split65

  // Bind parameters
  Rsh_Fir_reg_split = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st split = split
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_split, RHO);
  (void)(Rsh_Fir_reg_split);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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

L0_:;
  // r3 = `<=`(r1, 4.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L27() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L27()
    goto L27_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

L3_:;
  // r28 = `!`(r26)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L41() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L41()
    goto L41_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard3 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L6_:;
  // r34 = `!`(r32)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c4 then L7(c4) else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L7(c4)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c4_;
    goto L7_;
  } else {
  // L49()
    goto L49_;
  }

L7_:;
  // c13 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c13 then L55() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L55()
    goto L55_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // r38 = `>=`(r36, 6.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c11 = `||`(c9, c10)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L7(c11)
  // L7(c11)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c11_;
  goto L7_;

L9_:;
  // goto L22()
  // L22()
  goto L22_;

L10_:;
  // goto L15()
  // L15()
  goto L15_;

L11_:;
  // st split = r42
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // driveletter6 = ld driveletter
  Rsh_Fir_reg_driveletter6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L76() else D25()
  // L76()
  goto L76_;

L12_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L65() else D19()
  // L65()
  goto L65_;

L13_:;
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r57 = dyn c19(dx5, r48, dx11)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

L14_:;
  // r55 = `:`(r52, r53)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r56 = dyn __5(split40, r55)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_split40_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L13(r56)
  // L13(r56)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r56_;
  goto L13_;

L15_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L78() else D26()
  // L78()
  goto L78_;

L16_:;
  // goto L21(NULL)
  // L21(NULL)
  Rsh_Fir_reg_r79_ = Rsh_const(CCP, 11);
  goto L21_;

L17_:;
  // st split = r63
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r63_, RHO);
  (void)(Rsh_Fir_reg_r63_);
  // goto L21(r63)
  // L21(r63)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r63_;
  goto L21_;

L18_:;
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L87() else D29()
  // L87()
  goto L87_;

L19_:;
  // c25 = ldf c in base
  Rsh_Fir_reg_c25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r78 = dyn c25(dx13, r69, dx19)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c25_, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L97() else D34()
  // L97()
  goto L97_;

L20_:;
  // r76 = `:`(r73, r74)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r77 = dyn __9(split61, r76)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_split61_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L19(r77)
  // L19(r77)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r77_;
  goto L19_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // split64 = ld split
  Rsh_Fir_reg_split64_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L100() else D35()
  // L100()
  goto L100_;

L23_:;
  // split1 = ld split
  Rsh_Fir_reg_split1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L25() else D0()
  // L25()
  goto L25_;

L24_:;
  // r = dyn base(<sym split>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [split1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_split1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L25_:;
  // split2 = force? split1
  Rsh_Fir_reg_split2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split1_);
  // checkMissing(split2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_split2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn length(split2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_split2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L26() else D1()
  // L26()
  goto L26_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L27_:;
  // split3 = ld split
  Rsh_Fir_reg_split3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D2()
  // L28()
  goto L28_;

D2_:;
  // deopt 8 [split3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_split3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L28_:;
  // split4 = force? split3
  Rsh_Fir_reg_split4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split3_);
  // checkMissing(split4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_split4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return split4
  return Rsh_Fir_reg_split4_;

D3_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p = prom<V +>{
  //   split5 = ld split;
  //   split6 = force? split5;
  //   checkMissing(split6);
  //   c1 = `is.object`(split6);
  //   if c1 then L1() else L2(split6);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", split6);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(split8):
  //   __ = ldf `[` in base;
  //   r6 = dyn __(split8, <int 2, 3, 4>);
  //   goto L0(r6);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_, CCP, RHO);
  // r8 = dyn grep("^[a-zA-Z]$", p)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

D4_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L32_:;
  // r9 = `+`(r8, 1.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // st driveletter = r9
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // grep1 = ldf grep
  Rsh_Fir_reg_grep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

D5_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p1 = prom<V +>{
  //   split9 = ld split;
  //   split10 = force? split9;
  //   checkMissing(split10);
  //   c2 = `is.object`(split10);
  //   if c2 then L2() else L3(split10);
  // L0(dx3):
  //   return dx3;
  // L2():
  //   dr2 = tryDispatchBuiltin.1("[", split10);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L4() else L3(dr2);
  // L3(split12):
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L5() else L6();
  // L1(split15, r13, r14):
  //   r16 = `:`(r13, r14);
  //   __1 = ldf `[` in base;
  //   r17 = dyn __1(split15, r16);
  //   goto L0(r17);
  // L4():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // L5():
  //   split16 = ld split;
  //   split17 = force? split16;
  //   checkMissing(split17);
  //   length1 = ldf length in base;
  //   r15 = dyn length1(split17);
  //   goto L1(split12, 4.0, r15);
  // L6():
  //   r12 = dyn base1(<sym split>);
  //   goto L1(split12, 4.0, r12);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_1, CCP, RHO);
  // r19 = dyn grep1("^ofs [[:digit:]]+$", p1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

D6_:;
  // deopt 25 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L34_:;
  // r20 = `+`(r19, 3.0)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // st ofs = r20
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // setdiff = ldf setdiff
  Rsh_Fir_reg_setdiff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L35() else D7()
  // L35()
  goto L35_;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p2 = prom<V +>{
  //   driveletter = ld driveletter;
  //   driveletter1 = force? driveletter;
  //   checkMissing(driveletter1);
  //   return driveletter1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_2, CCP, RHO);
  // p3 = prom<V +>{
  //   ofs = ld ofs;
  //   ofs1 = force? ofs;
  //   checkMissing(ofs1);
  //   r22 = `-`(ofs1, 1.0);
  //   return r22;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_3, CCP, RHO);
  // r24 = dyn setdiff(p2, p3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setdiff, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L36() else D8()
  // L36()
  goto L36_;

D8_:;
  // deopt 33 [r24]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // st driveletter = r24
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard2 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // driveletter2 = ld driveletter
  Rsh_Fir_reg_driveletter2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

L38_:;
  // r25 = dyn base2(<sym driveletter>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3(r25)
  // L3(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L3_;

D9_:;
  // deopt 37 [driveletter2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_driveletter2_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // driveletter3 = force? driveletter2
  Rsh_Fir_reg_driveletter3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_driveletter2_);
  // checkMissing(driveletter3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_driveletter3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r27 = dyn length2(driveletter3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_driveletter3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

D10_:;
  // deopt 40 [r27]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L3(r27)
  // L3(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L3_;

L41_:;
  // split18 = ld split
  Rsh_Fir_reg_split18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

D11_:;
  // deopt 42 [split18]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_split18_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // split19 = force? split18
  Rsh_Fir_reg_split19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split18_);
  // checkMissing(split19)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_split19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return split19
  return Rsh_Fir_reg_split19_;

L45_:;
  // ofs2 = ld ofs
  Rsh_Fir_reg_ofs2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L47() else D12()
  // L47()
  goto L47_;

L46_:;
  // r31 = dyn base3(<sym ofs>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L6(r31)
  // L6(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L6_;

D12_:;
  // deopt 49 [ofs2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_ofs2_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L47_:;
  // ofs3 = force? ofs2
  Rsh_Fir_reg_ofs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ofs2_);
  // checkMissing(ofs3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_ofs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r33 = dyn length3(ofs3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_ofs3_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L48() else D13()
  // L48()
  goto L48_;

D13_:;
  // deopt 52 [r33]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L6(r33)
  // L6(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L6_;

L49_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard4 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L50_:;
  // split20 = ld split
  Rsh_Fir_reg_split20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D14()
  // L52()
  goto L52_;

L51_:;
  // r35 = dyn base4(<sym split>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(c4, r35)
  // L8(c4, r35)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L8_;

D14_:;
  // deopt 56 [c4, split20]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_split20_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L52_:;
  // split21 = force? split20
  Rsh_Fir_reg_split21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split20_);
  // checkMissing(split21)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_split21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r37 = dyn length4(split21)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_split21_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L53() else D15()
  // L53()
  goto L53_;

D15_:;
  // deopt 59 [c4, r37]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L8(c4, r37)
  // L8(c4, r37)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L8_;

L55_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L56() else D16()
  // L56()
  goto L56_;

D16_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p4 = prom<V +>{
  //   driveletter4 = ld driveletter;
  //   driveletter5 = force? driveletter4;
  //   checkMissing(driveletter5);
  //   return driveletter5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_4, CCP, RHO);
  // r40 = dyn _in_(2.0, p4)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

D17_:;
  // deopt 67 [r40]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L57_:;
  // c14 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c14 then L58() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L58()
    goto L58_;
  } else {
  // L10()
    goto L10_;
  }

L58_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard5 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L59_:;
  // split22 = ld split
  Rsh_Fir_reg_split22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

L60_:;
  // r41 = dyn base5(<lang `[`(split, 1.0)>, <lang paste(`[`(split, 2.0), `[`(split, 3.0), sep=":")>, <lang `[`(split, `:`(4.0, length(split)))>)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(r41)
  // L11(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L11_;

D18_:;
  // deopt 70 [split22]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_split22_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L61_:;
  // split23 = force? split22
  Rsh_Fir_reg_split23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split22_);
  // checkMissing(split23)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_split23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(split23)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_split23_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c15 then L62() else L63(split23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L62()
    goto L62_;
  } else {
  // L63(split23)
    Rsh_Fir_reg_split25_ = Rsh_Fir_reg_split23_;
    goto L63_;
  }

L62_:;
  // dr4 = tryDispatchBuiltin.1("[", split23)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_split23_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc2 then L64() else L63(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L64()
    goto L64_;
  } else {
  // L63(dr4)
    Rsh_Fir_reg_split25_ = Rsh_Fir_reg_dr4_;
    goto L63_;
  }

L63_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r43 = dyn __2(split25, 1.0)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_split25_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L12(r43)
  // L12(r43)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r43_;
  goto L12_;

L64_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L12(dx4)
  // L12(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L12_;

D19_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p5 = prom<V +>{
  //   split26 = ld split;
  //   split27 = force? split26;
  //   checkMissing(split27);
  //   c16 = `is.object`(split27);
  //   if c16 then L1() else L2(split27);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", split27);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(split29):
  //   __3 = ldf `[` in base;
  //   r44 = dyn __3(split29, 2.0);
  //   goto L0(r44);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_5, CCP, RHO);
  // p6 = prom<V +>{
  //   split30 = ld split;
  //   split31 = force? split30;
  //   checkMissing(split31);
  //   c17 = `is.object`(split31);
  //   if c17 then L1() else L2(split31);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", split31);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(split33):
  //   __4 = ldf `[` in base;
  //   r46 = dyn __4(split33, 3.0);
  //   goto L0(r46);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_6, CCP, RHO);
  // r48 = dyn paste[, , sep](p5, p6, ":")
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L66() else D20()
  // L66()
  goto L66_;

D20_:;
  // deopt 81 [r48]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L66_:;
  // split34 = ld split
  Rsh_Fir_reg_split34_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L67() else D21()
  // L67()
  goto L67_;

D21_:;
  // deopt 82 [split34]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_split34_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L67_:;
  // split35 = force? split34
  Rsh_Fir_reg_split35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split34_);
  // checkMissing(split35)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_split35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(split35)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_split35_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c18 then L68() else L69(split35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L68()
    goto L68_;
  } else {
  // L69(split35)
    Rsh_Fir_reg_split37_ = Rsh_Fir_reg_split35_;
    goto L69_;
  }

L68_:;
  // dr10 = tryDispatchBuiltin.1("[", split35)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_split35_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc5 then L70() else L69(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L70()
    goto L70_;
  } else {
  // L69(dr10)
    Rsh_Fir_reg_split37_ = Rsh_Fir_reg_dr10_;
    goto L69_;
  }

L69_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard6 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L70_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L13(dx10)
  // L13(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L13_;

L71_:;
  // split41 = ld split
  Rsh_Fir_reg_split41_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L73() else D22()
  // L73()
  goto L73_;

L72_:;
  // r51 = dyn base6(<sym split>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L14(split37, 4.0, r51)
  // L14(split37, 4.0, r51)
  Rsh_Fir_reg_split40_ = Rsh_Fir_reg_split37_;
  Rsh_Fir_reg_r52_ = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
  goto L14_;

D22_:;
  // deopt 87 [split37, 4.0, split41]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_split37_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_split41_;
  Rsh_Fir_deopt(87, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L73_:;
  // split42 = force? split41
  Rsh_Fir_reg_split42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split41_);
  // checkMissing(split42)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_split42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r54 = dyn length5(split42)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_split42_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L74() else D23()
  // L74()
  goto L74_;

D23_:;
  // deopt 90 [split37, 4.0, r54]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_split37_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(90, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L14(split37, 4.0, r54)
  // L14(split37, 4.0, r54)
  Rsh_Fir_reg_split40_ = Rsh_Fir_reg_split37_;
  Rsh_Fir_reg_r52_ = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L14_;

D24_:;
  // deopt 94 [r57]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L11(r57)
  // L11(r57)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r57_;
  goto L11_;

D25_:;
  // deopt 96 [driveletter6]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_driveletter6_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L76_:;
  // driveletter7 = force? driveletter6
  Rsh_Fir_reg_driveletter7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_driveletter6_);
  // checkMissing(driveletter7)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_driveletter7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // r58 = `-`(driveletter7, 1.0)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_driveletter7_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // st driveletter = r58
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // goto L15()
  // L15()
  goto L15_;

D26_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // p7 = prom<V +>{
  //   driveletter8 = ld driveletter;
  //   driveletter9 = force? driveletter8;
  //   checkMissing(driveletter9);
  //   return driveletter9;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_7, CCP, RHO);
  // r61 = dyn _in_1(3.0, p7)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L79() else D27()
  // L79()
  goto L79_;

D27_:;
  // deopt 107 [r61]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L79_:;
  // c20 = `as.logical`(r61)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if c20 then L80() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L80()
    goto L80_;
  } else {
  // L16()
    goto L16_;
  }

L80_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard7 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L81_:;
  // split43 = ld split
  Rsh_Fir_reg_split43_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L83() else D28()
  // L83()
  goto L83_;

L82_:;
  // r62 = dyn base7(<lang `[`(split, `:`(1.0, 2.0))>, <lang paste(`[`(split, 3.0), `[`(split, 4.0), sep=":")>, <lang `[`(split, `:`(5.0, length(split)))>)
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args98[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L17(r62)
  // L17(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L17_;

D28_:;
  // deopt 110 [split43]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_split43_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L83_:;
  // split44 = force? split43
  Rsh_Fir_reg_split44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split43_);
  // checkMissing(split44)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_split44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(split44)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_split44_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if c21 then L84() else L85(split44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L84()
    goto L84_;
  } else {
  // L85(split44)
    Rsh_Fir_reg_split46_ = Rsh_Fir_reg_split44_;
    goto L85_;
  }

L84_:;
  // dr12 = tryDispatchBuiltin.1("[", split44)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_split44_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args101);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if dc6 then L86() else L85(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L86()
    goto L86_;
  } else {
  // L85(dr12)
    Rsh_Fir_reg_split46_ = Rsh_Fir_reg_dr12_;
    goto L85_;
  }

L85_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r64 = dyn __6(split46, <int 1, 2>)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_split46_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L18(r64)
  // L18(r64)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r64_;
  goto L18_;

L86_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L18(dx12)
  // L18(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L18_;

D29_:;
  // deopt 116 []
  Rsh_Fir_deopt(116, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // p8 = prom<V +>{
  //   split47 = ld split;
  //   split48 = force? split47;
  //   checkMissing(split48);
  //   c22 = `is.object`(split48);
  //   if c22 then L1() else L2(split48);
  // L0(dx15):
  //   return dx15;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[", split48);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(split50):
  //   __7 = ldf `[` in base;
  //   r65 = dyn __7(split50, 3.0);
  //   goto L0(r65);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_8, CCP, RHO);
  // p9 = prom<V +>{
  //   split51 = ld split;
  //   split52 = force? split51;
  //   checkMissing(split52);
  //   c23 = `is.object`(split52);
  //   if c23 then L1() else L2(split52);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", split52);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(split54):
  //   __8 = ldf `[` in base;
  //   r67 = dyn __8(split54, 4.0);
  //   goto L0(r67);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner399722262_9, CCP, RHO);
  // r69 = dyn paste1[, , sep](p8, p9, ":")
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args117[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 3, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L88() else D30()
  // L88()
  goto L88_;

D30_:;
  // deopt 121 [r69]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L88_:;
  // split55 = ld split
  Rsh_Fir_reg_split55_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L89() else D31()
  // L89()
  goto L89_;

D31_:;
  // deopt 122 [split55]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_split55_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L89_:;
  // split56 = force? split55
  Rsh_Fir_reg_split56_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split55_);
  // checkMissing(split56)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_split56_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(split56)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_split56_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if c24 then L90() else L91(split56)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L90()
    goto L90_;
  } else {
  // L91(split56)
    Rsh_Fir_reg_split58_ = Rsh_Fir_reg_split56_;
    goto L91_;
  }

L90_:;
  // dr18 = tryDispatchBuiltin.1("[", split56)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_split56_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc9 then L92() else L91(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L92()
    goto L92_;
  } else {
  // L91(dr18)
    Rsh_Fir_reg_split58_ = Rsh_Fir_reg_dr18_;
    goto L91_;
  }

L91_:;
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard8 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L92_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L19(dx18)
  // L19(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L19_;

L93_:;
  // split62 = ld split
  Rsh_Fir_reg_split62_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L95() else D32()
  // L95()
  goto L95_;

L94_:;
  // r72 = dyn base8(<sym split>)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L20(split58, 5.0, r72)
  // L20(split58, 5.0, r72)
  Rsh_Fir_reg_split61_ = Rsh_Fir_reg_split58_;
  Rsh_Fir_reg_r73_ = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r72_;
  goto L20_;

D32_:;
  // deopt 127 [split58, 5.0, split62]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_split58_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_split62_;
  Rsh_Fir_deopt(127, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L95_:;
  // split63 = force? split62
  Rsh_Fir_reg_split63_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split62_);
  // checkMissing(split63)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_split63_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r75 = dyn length6(split63)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_split63_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L96() else D33()
  // L96()
  goto L96_;

D33_:;
  // deopt 130 [split58, 5.0, r75]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_split58_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(130, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L20(split58, 5.0, r75)
  // L20(split58, 5.0, r75)
  Rsh_Fir_reg_split61_ = Rsh_Fir_reg_split58_;
  Rsh_Fir_reg_r73_ = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r75_;
  goto L20_;

D34_:;
  // deopt 134 [r78]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L17(r78)
  // L17(r78)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r78_;
  goto L17_;

D35_:;
  // deopt 140 [split64]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_split64_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L100_:;
  // split65 = force? split64
  Rsh_Fir_reg_split65_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split64_);
  // checkMissing(split65)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_split65_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return split65
  return Rsh_Fir_reg_split65_;
}
SEXP Rsh_Fir_user_promise_inner399722262_(SEXP CCP, SEXP RHO) {
  // split5 = ld split
  Rsh_Fir_reg_split5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // split6 = force? split5
  Rsh_Fir_reg_split6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split5_);
  // checkMissing(split6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_split6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(split6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_split6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(split6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(split6)
    Rsh_Fir_reg_split8_ = Rsh_Fir_reg_split6_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", split6)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_split6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_split8_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r6 = dyn __(split8, <int 2, 3, 4>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_split8_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner399722262_1(SEXP CCP, SEXP RHO) {
  // split9 = ld split
  Rsh_Fir_reg_split9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // split10 = force? split9
  Rsh_Fir_reg_split10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split9_);
  // checkMissing(split10)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_split10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(split10)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_split10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c2 then L2() else L3(split10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L2()
    goto L2_;
  } else {
  // L3(split10)
    Rsh_Fir_reg_split12_ = Rsh_Fir_reg_split10_;
    goto L3_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // r16 = `:`(r13, r14)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r17 = dyn __1(split15, r16)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_split15_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // dr2 = tryDispatchBuiltin.1("[", split10)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_split10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc1 then L4() else L3(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr2)
    Rsh_Fir_reg_split12_ = Rsh_Fir_reg_dr2_;
    goto L3_;
  }

L3_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;

L5_:;
  // split16 = ld split
  Rsh_Fir_reg_split16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // split17 = force? split16
  Rsh_Fir_reg_split17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split16_);
  // checkMissing(split17)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_split17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r15 = dyn length1(split17)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_split17_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(split12, 4.0, r15)
  // L1(split12, 4.0, r15)
  Rsh_Fir_reg_split15_ = Rsh_Fir_reg_split12_;
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L1_;

L6_:;
  // r12 = dyn base1(<sym split>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(split12, 4.0, r12)
  // L1(split12, 4.0, r12)
  Rsh_Fir_reg_split15_ = Rsh_Fir_reg_split12_;
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner399722262_2(SEXP CCP, SEXP RHO) {
  // driveletter = ld driveletter
  Rsh_Fir_reg_driveletter = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // driveletter1 = force? driveletter
  Rsh_Fir_reg_driveletter1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_driveletter);
  // checkMissing(driveletter1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_driveletter1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return driveletter1
  return Rsh_Fir_reg_driveletter1_;
}
SEXP Rsh_Fir_user_promise_inner399722262_3(SEXP CCP, SEXP RHO) {
  // ofs = ld ofs
  Rsh_Fir_reg_ofs = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // ofs1 = force? ofs
  Rsh_Fir_reg_ofs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ofs);
  // checkMissing(ofs1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_ofs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r22 = `-`(ofs1, 1.0)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_ofs1_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_inner399722262_4(SEXP CCP, SEXP RHO) {
  // driveletter4 = ld driveletter
  Rsh_Fir_reg_driveletter4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // driveletter5 = force? driveletter4
  Rsh_Fir_reg_driveletter5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_driveletter4_);
  // checkMissing(driveletter5)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_driveletter5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return driveletter5
  return Rsh_Fir_reg_driveletter5_;
}
SEXP Rsh_Fir_user_promise_inner399722262_5(SEXP CCP, SEXP RHO) {
  // split26 = ld split
  Rsh_Fir_reg_split26_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // split27 = force? split26
  Rsh_Fir_reg_split27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split26_);
  // checkMissing(split27)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_split27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(split27)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_split27_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c16 then L1() else L2(split27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L1()
    goto L1_;
  } else {
  // L2(split27)
    Rsh_Fir_reg_split29_ = Rsh_Fir_reg_split27_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", split27)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_split27_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_split29_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r44 = dyn __3(split29, 2.0)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_split29_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r44_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner399722262_6(SEXP CCP, SEXP RHO) {
  // split30 = ld split
  Rsh_Fir_reg_split30_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // split31 = force? split30
  Rsh_Fir_reg_split31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split30_);
  // checkMissing(split31)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_split31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(split31)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_split31_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c17 then L1() else L2(split31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L1()
    goto L1_;
  } else {
  // L2(split31)
    Rsh_Fir_reg_split33_ = Rsh_Fir_reg_split31_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", split31)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_split31_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_split33_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r46 = dyn __4(split33, 3.0)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_split33_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r46_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner399722262_7(SEXP CCP, SEXP RHO) {
  // driveletter8 = ld driveletter
  Rsh_Fir_reg_driveletter8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // driveletter9 = force? driveletter8
  Rsh_Fir_reg_driveletter9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_driveletter8_);
  // checkMissing(driveletter9)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_driveletter9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // return driveletter9
  return Rsh_Fir_reg_driveletter9_;
}
SEXP Rsh_Fir_user_promise_inner399722262_8(SEXP CCP, SEXP RHO) {
  // split47 = ld split
  Rsh_Fir_reg_split47_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // split48 = force? split47
  Rsh_Fir_reg_split48_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split47_);
  // checkMissing(split48)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_split48_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(split48)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_split48_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c22 then L1() else L2(split48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L1()
    goto L1_;
  } else {
  // L2(split48)
    Rsh_Fir_reg_split50_ = Rsh_Fir_reg_split48_;
    goto L2_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[", split48)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_split48_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_split50_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r65 = dyn __7(split50, 3.0)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_split50_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r65)
  // L0(r65)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r65_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner399722262_9(SEXP CCP, SEXP RHO) {
  // split51 = ld split
  Rsh_Fir_reg_split51_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // split52 = force? split51
  Rsh_Fir_reg_split52_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split51_);
  // checkMissing(split52)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_split52_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(split52)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_split52_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if c23 then L1() else L2(split52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L1()
    goto L1_;
  } else {
  // L2(split52)
    Rsh_Fir_reg_split54_ = Rsh_Fir_reg_split52_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", split52)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_split52_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_split54_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r67 = dyn __8(split54, 4.0)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_split54_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r67)
  // L0(r67)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r67_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
