#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4196989794_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4196989794_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4196989794_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4196989794_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4196989794_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4196989794_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4196989794_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner4196989794
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4196989794_, RHO, CCP);
  // st `.matchSigLength` = r
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
SEXP Rsh_Fir_user_function_inner4196989794_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4196989794 dynamic dispatch ([sig, fdef, fenv, reset])

  return Rsh_Fir_user_version_inner4196989794_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4196989794_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4196989794 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner4196989794/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_sig;  // sig
  SEXP Rsh_Fir_reg_fdef;  // fdef
  SEXP Rsh_Fir_reg_fenv;  // fenv
  SEXP Rsh_Fir_reg_reset;  // reset
  SEXP Rsh_Fir_reg_reset_isMissing;  // reset_isMissing
  SEXP Rsh_Fir_reg_reset_orDefault;  // reset_orDefault
  SEXP Rsh_Fir_reg__getGenericSigLength;  // _getGenericSigLength
  SEXP Rsh_Fir_reg_fdef1_;  // fdef1
  SEXP Rsh_Fir_reg_fdef2_;  // fdef2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_fenv1_;  // fenv1
  SEXP Rsh_Fir_reg_fenv2_;  // fenv2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sig1_;  // sig1
  SEXP Rsh_Fir_reg_sig2_;  // sig2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_packageSlot;  // packageSlot
  SEXP Rsh_Fir_reg_sig3_;  // sig3
  SEXP Rsh_Fir_reg_sig4_;  // sig4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_nargs;  // nargs
  SEXP Rsh_Fir_reg_nargs1_;  // nargs1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_nargs2_;  // nargs2
  SEXP Rsh_Fir_reg_nargs3_;  // nargs3
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_pkgs;  // pkgs
  SEXP Rsh_Fir_reg_pkgs1_;  // pkgs1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sig5_;  // sig5
  SEXP Rsh_Fir_reg_sig6_;  // sig6
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_rep1_;  // rep1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_nargs4_;  // nargs4
  SEXP Rsh_Fir_reg_nargs5_;  // nargs5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sig7_;  // sig7
  SEXP Rsh_Fir_reg_sig8_;  // sig8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sig10_;  // sig10
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_nargs6_;  // nargs6
  SEXP Rsh_Fir_reg_nargs7_;  // nargs7
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_nargs8_;  // nargs8
  SEXP Rsh_Fir_reg_nargs9_;  // nargs9
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_length__;  // length__
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_pkgs2_;  // pkgs2
  SEXP Rsh_Fir_reg_pkgs3_;  // pkgs3
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_nargs10_;  // nargs10
  SEXP Rsh_Fir_reg_nargs11_;  // nargs11
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_length__1_;  // length__1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_nargs12_;  // nargs12
  SEXP Rsh_Fir_reg_nargs13_;  // nargs13
  SEXP Rsh_Fir_reg_sig11_;  // sig11
  SEXP Rsh_Fir_reg_sig12_;  // sig12
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sig14_;  // sig14
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_reset1_;  // reset1
  SEXP Rsh_Fir_reg_reset2_;  // reset2
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg__resetSigLength;  // _resetSigLength
  SEXP Rsh_Fir_reg_fdef3_;  // fdef3
  SEXP Rsh_Fir_reg_fdef4_;  // fdef4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_n13_;  // n13
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_n14_;  // n14
  SEXP Rsh_Fir_reg_n15_;  // n15
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_length__2_;  // length__2
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_pkgs4_;  // pkgs4
  SEXP Rsh_Fir_reg_pkgs5_;  // pkgs5
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_n16_;  // n16
  SEXP Rsh_Fir_reg_n17_;  // n17
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_length__3_;  // length__3
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_pkgs6_;  // pkgs6
  SEXP Rsh_Fir_reg_pkgs7_;  // pkgs7
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_packageSlot__;  // packageSlot__
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sig15_;  // sig15
  SEXP Rsh_Fir_reg_sig16_;  // sig16

  // Bind parameters
  Rsh_Fir_reg_sig = PARAMS[0];
  Rsh_Fir_reg_fdef = PARAMS[1];
  Rsh_Fir_reg_fenv = PARAMS[2];
  Rsh_Fir_reg_reset = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st sig = sig
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_sig, RHO);
  (void)(Rsh_Fir_reg_sig);
  // st fdef = fdef
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_fdef, RHO);
  (void)(Rsh_Fir_reg_fdef);
  // st fenv = fenv
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_fenv, RHO);
  (void)(Rsh_Fir_reg_fenv);
  // reset_isMissing = missing.0(reset)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_reset;
  Rsh_Fir_reg_reset_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if reset_isMissing then L0(FALSE) else L0(reset)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_reset_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_reset_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(reset)
    Rsh_Fir_reg_reset_orDefault = Rsh_Fir_reg_reset;
    goto L0_;
  }

L0_:;
  // st reset = reset_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_reset_orDefault, RHO);
  (void)(Rsh_Fir_reg_reset_orDefault);
  // _getGenericSigLength = ldf `.getGenericSigLength`
  Rsh_Fir_reg__getGenericSigLength = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L1_:;
  // st n = r4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // packageSlot = ldf packageSlot
  Rsh_Fir_reg_packageSlot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L2_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L52() else D15()
  // L52()
  goto L52_;

L3_:;
  // st pkgs = r11
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard3 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L4_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r15 = dyn c1(pkgs1, r13)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_pkgs1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

L5_:;
  // st sig = r17
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // goto L8()
  // L8()
  goto L8_;

L6_:;
  // sym5 = ldf rep
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf rep in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard5 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L7_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r24 = dyn c2(r19, r22)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L50() else D14()
  // L50()
  goto L50_;

L8_:;
  // pkgs6 = ld pkgs
  Rsh_Fir_reg_pkgs6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L102() else D41()
  // L102()
  goto L102_;

L9_:;
  // goto L8()
  // L8()
  goto L8_;

L10_:;
  // c5 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c5 then L64() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L64()
    goto L64_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // r32 = `==`(dx1, "ANY")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r33 = dyn all(r32)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

L12_:;
  // sig11 = ld sig
  Rsh_Fir_reg_sig11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L77() else D28()
  // L77()
  goto L77_;

L13_:;
  // r37 = `!`(r36)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c7 then L71() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L71()
    goto L71_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L15(NULL)
  // L15(NULL)
  Rsh_Fir_reg_nargs12_ = Rsh_const(CCP, 14);
  goto L15_;

L15_:;
  // goto L16(nargs12)
  // L16(nargs12)
  Rsh_Fir_reg_nargs13_ = Rsh_Fir_reg_nargs12_;
  goto L16_;

L16_:;
  // goto L8()
  // L8()
  goto L8_;

L17_:;
  // r40 = `==`(dx3, "ANY")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c9 then L82() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L82()
    goto L82_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // reset1 = ld reset
  Rsh_Fir_reg_reset1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L85() else D31()
  // L85()
  goto L85_;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // n14 = ld n
  Rsh_Fir_reg_n14_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L90() else D34()
  // L90()
  goto L90_;

L21_:;
  // r49 = `!`(r48)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c12 then L96() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L96()
    goto L96_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L16(NULL)
  // L16(NULL)
  Rsh_Fir_reg_nargs13_ = Rsh_const(CCP, 14);
  goto L16_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p = prom<V +>{
  //   fdef1 = ld fdef;
  //   fdef2 = force? fdef1;
  //   checkMissing(fdef2);
  //   return fdef2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4196989794_, CCP, RHO);
  // p1 = prom<V +>{
  //   fenv1 = ld fenv;
  //   fenv2 = force? fenv1;
  //   checkMissing(fenv2);
  //   return fenv2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4196989794_1, CCP, RHO);
  // r2 = dyn _getGenericSigLength(p, p1, TRUE)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getGenericSigLength, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // st nargs = r2
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // sig1 = ld sig
  Rsh_Fir_reg_sig1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r3 = dyn base(<sym sig>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [sig1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_sig1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // sig2 = force? sig1
  Rsh_Fir_reg_sig2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig1_);
  // checkMissing(sig2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sig2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r5 = dyn length(sig2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sig2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p2 = prom<V +>{
  //   sig3 = ld sig;
  //   sig4 = force? sig3;
  //   checkMissing(sig4);
  //   return sig4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4196989794_2, CCP, RHO);
  // r7 = dyn packageSlot(p2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_packageSlot, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // st pkgs = r7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

D6_:;
  // deopt 19 [n]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // nargs = ld nargs
  Rsh_Fir_reg_nargs = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

D7_:;
  // deopt 20 [n1, nargs]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_nargs;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // nargs1 = force? nargs
  Rsh_Fir_reg_nargs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs);
  // checkMissing(nargs1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_nargs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r8 = `<`(n1, nargs1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_nargs1_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c then L33() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L33()
    goto L33_;
  } else {
  // L2()
    goto L2_;
  }

L33_:;
  // nargs2 = ld nargs
  Rsh_Fir_reg_nargs2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

D8_:;
  // deopt 23 [nargs2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_nargs2_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // nargs3 = force? nargs2
  Rsh_Fir_reg_nargs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs2_);
  // checkMissing(nargs3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_nargs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

D9_:;
  // deopt 24 [nargs3, n2]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_nargs3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // r9 = `-`(nargs3, n3)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_nargs3_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // st more = r9
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard1 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // pkgs = ld pkgs
  Rsh_Fir_reg_pkgs = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L38() else D10()
  // L38()
  goto L38_;

L37_:;
  // r10 = dyn base1(<sym pkgs>, <lang rep("methods", more)>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L3_;

D10_:;
  // deopt 30 [pkgs]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_pkgs;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // pkgs1 = force? pkgs
  Rsh_Fir_reg_pkgs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs);
  // checkMissing(pkgs1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_pkgs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // sym2 = ldf rep
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf rep in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r14 = dyn rep("methods", <sym more>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(r14)
  // L4(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L4_;

L40_:;
  // r12 = dyn base2("methods", <sym more>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L4_;

D11_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r15_;
  goto L3_;

L42_:;
  // sym4 = ldf `as.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base4 = ldf `as.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard4 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L43_:;
  // r16 = dyn base3(<lang as.character(sig)>, <lang rep("ANY", more)>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L5_;

L44_:;
  // sig5 = ld sig
  Rsh_Fir_reg_sig5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

L45_:;
  // r18 = dyn base4(<sym sig>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(r18)
  // L6(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L6_;

D12_:;
  // deopt 42 [sig5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_sig5_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // sig6 = force? sig5
  Rsh_Fir_reg_sig6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig5_);
  // checkMissing(sig6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sig6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r20 = dyn as_character(sig6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sig6_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L47() else D13()
  // L47()
  goto L47_;

D13_:;
  // deopt 45 [r20]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L6(r20)
  // L6(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L6_;

L48_:;
  // rep1 = ldf rep in base
  Rsh_Fir_reg_rep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r23 = dyn rep1("ANY", <sym more>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L7(r23)
  // L7(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L7_;

L49_:;
  // r21 = dyn base5("ANY", <sym more>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L7_;

D14_:;
  // deopt 50 [r24]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L5(r24)
  // L5(r24)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r24_;
  goto L5_;

D15_:;
  // deopt 52 [n4]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L52_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // nargs4 = ld nargs
  Rsh_Fir_reg_nargs4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L53() else D16()
  // L53()
  goto L53_;

D16_:;
  // deopt 53 [n5, nargs4]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_nargs4_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // nargs5 = force? nargs4
  Rsh_Fir_reg_nargs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs4_);
  // checkMissing(nargs5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_nargs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r26 = `>`(n5, nargs5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_nargs5_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c3 then L54() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L54()
    goto L54_;
  } else {
  // L9()
    goto L9_;
  }

L54_:;
  // sym6 = ldf all
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base6 = ldf all in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard6 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // sig7 = ld sig
  Rsh_Fir_reg_sig7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

L56_:;
  // r27 = dyn base6(<lang `==`(`[`(sig, `:`(`(`(`+`(nargs, 1.0)), n)), "ANY")>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r27)
  // L10(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L10_;

D17_:;
  // deopt 58 [sig7]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_sig7_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L57_:;
  // sig8 = force? sig7
  Rsh_Fir_reg_sig8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig7_);
  // checkMissing(sig8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sig8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(sig8)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sig8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c4 then L58() else L59(sig8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L58()
    goto L58_;
  } else {
  // L59(sig8)
    Rsh_Fir_reg_sig10_ = Rsh_Fir_reg_sig8_;
    goto L59_;
  }

L58_:;
  // dr = tryDispatchBuiltin.1("[", sig8)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_sig8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc then L60() else L59(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L60()
    goto L60_;
  } else {
  // L59(dr)
    Rsh_Fir_reg_sig10_ = Rsh_Fir_reg_dr;
    goto L59_;
  }

L59_:;
  // nargs6 = ld nargs
  Rsh_Fir_reg_nargs6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

L60_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

D18_:;
  // deopt 60 [sig10, nargs6]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_sig10_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_nargs6_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L61_:;
  // nargs7 = force? nargs6
  Rsh_Fir_reg_nargs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs6_);
  // checkMissing(nargs7)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_nargs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r29 = `+`(nargs7, 1.0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_nargs7_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L62() else D19()
  // L62()
  goto L62_;

D19_:;
  // deopt 63 [sig10, r29, n6]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_sig10_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(63, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L62_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r30 = `:`(r29, n7)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r31 = dyn __(sig10, r30)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sig10_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(r31)
  // L11(r31)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r31_;
  goto L11_;

D20_:;
  // deopt 70 [r33]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L10(r33)
  // L10(r33)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r33_;
  goto L10_;

L64_:;
  // nargs8 = ld nargs
  Rsh_Fir_reg_nargs8_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L65() else D21()
  // L65()
  goto L65_;

D21_:;
  // deopt 71 [nargs8]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_nargs8_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L65_:;
  // nargs9 = force? nargs8
  Rsh_Fir_reg_nargs9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs8_);
  // checkMissing(nargs9)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_nargs9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // l = ld sig
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // length__ = ldf `length<-`
  Rsh_Fir_reg_length__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L66() else D22()
  // L66()
  goto L66_;

D22_:;
  // deopt 74 [nargs9, l, nargs9]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_nargs9_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_nargs9_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L66_:;
  // r34 = dyn length__(l, NULL, nargs9)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_nargs9_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length__, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L67() else D23()
  // L67()
  goto L67_;

D23_:;
  // deopt 76 [nargs9, r34]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_nargs9_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L67_:;
  // st sig = r34
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard7 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L68_:;
  // pkgs2 = ld pkgs
  Rsh_Fir_reg_pkgs2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L70() else D24()
  // L70()
  goto L70_;

L69_:;
  // r35 = dyn base7(<sym pkgs>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L13(r35)
  // L13(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L13_;

D24_:;
  // deopt 79 [pkgs2]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_pkgs2_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L70_:;
  // pkgs3 = force? pkgs2
  Rsh_Fir_reg_pkgs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs2_);
  // checkMissing(pkgs3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_pkgs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c6 = `==`(pkgs3, NULL)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_pkgs3_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L13(c6)
  // L13(c6)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_c6_;
  goto L13_;

L71_:;
  // nargs10 = ld nargs
  Rsh_Fir_reg_nargs10_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L72() else D25()
  // L72()
  goto L72_;

D25_:;
  // deopt 83 [nargs10]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_nargs10_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L72_:;
  // nargs11 = force? nargs10
  Rsh_Fir_reg_nargs11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nargs10_);
  // checkMissing(nargs11)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_nargs11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // l1 = ld pkgs
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // length__1 = ldf `length<-`
  Rsh_Fir_reg_length__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L73() else D26()
  // L73()
  goto L73_;

D26_:;
  // deopt 86 [nargs11, l1, nargs11]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_nargs11_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_nargs11_;
  Rsh_Fir_deopt(86, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L73_:;
  // r38 = dyn length__1(l1, NULL, nargs11)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_nargs11_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length__1_, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L74() else D27()
  // L74()
  goto L74_;

D27_:;
  // deopt 88 [nargs11, r38]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_nargs11_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L74_:;
  // st pkgs = r38
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // goto L15(nargs11)
  // L15(nargs11)
  Rsh_Fir_reg_nargs12_ = Rsh_Fir_reg_nargs11_;
  goto L15_;

D28_:;
  // deopt 92 [sig11]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_sig11_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L77_:;
  // sig12 = force? sig11
  Rsh_Fir_reg_sig12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig11_);
  // checkMissing(sig12)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sig12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(sig12)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sig12_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c8 then L78() else L79(sig12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L78()
    goto L78_;
  } else {
  // L79(sig12)
    Rsh_Fir_reg_sig14_ = Rsh_Fir_reg_sig12_;
    goto L79_;
  }

L78_:;
  // dr2 = tryDispatchBuiltin.1("[[", sig12)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_sig12_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc1 then L80() else L79(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L80()
    goto L80_;
  } else {
  // L79(dr2)
    Rsh_Fir_reg_sig14_ = Rsh_Fir_reg_dr2_;
    goto L79_;
  }

L79_:;
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L81() else D29()
  // L81()
  goto L81_;

L80_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L17(dx2)
  // L17(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L17_;

D29_:;
  // deopt 94 [sig14, n8]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_sig14_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L81_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r39 = dyn __1(sig14, n9)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sig14_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L17(r39)
  // L17(r39)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r39_;
  goto L17_;

L82_:;
  // n10 = ld n
  Rsh_Fir_reg_n10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L83() else D30()
  // L83()
  goto L83_;

D30_:;
  // deopt 99 [n10]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L83_:;
  // n11 = force? n10
  Rsh_Fir_reg_n11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n10_);
  // checkMissing(n11)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_n11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // r41 = `-`(n11, 1.0)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_n11_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // st n = r41
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // goto L12()
  // L12()
  goto L12_;

D31_:;
  // deopt 107 [reset1]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_reset1_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L85_:;
  // reset2 = force? reset1
  Rsh_Fir_reg_reset2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reset1_);
  // checkMissing(reset2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_reset2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c10 = `as.logical`(reset2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_reset2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c10 then L86() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L86()
    goto L86_;
  } else {
  // L19()
    goto L19_;
  }

L86_:;
  // _resetSigLength = ldf `.resetSigLength`
  Rsh_Fir_reg__resetSigLength = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L87() else D32()
  // L87()
  goto L87_;

D32_:;
  // deopt 110 []
  Rsh_Fir_deopt(110, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // p3 = prom<V +>{
  //   fdef3 = ld fdef;
  //   fdef4 = force? fdef3;
  //   checkMissing(fdef4);
  //   return fdef4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4196989794_3, CCP, RHO);
  // p4 = prom<V +>{
  //   n12 = ld n;
  //   n13 = force? n12;
  //   checkMissing(n13);
  //   return n13;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4196989794_4, CCP, RHO);
  // r44 = dyn _resetSigLength(p3, p4)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__resetSigLength, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L88() else D33()
  // L88()
  goto L88_;

D33_:;
  // deopt 113 [r44]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L20()
  // L20()
  goto L20_;

D34_:;
  // deopt 116 [n14]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_n14_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L90_:;
  // n15 = force? n14
  Rsh_Fir_reg_n15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n14_);
  // checkMissing(n15)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_n15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // l2 = ld sig
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // length__2 = ldf `length<-`
  Rsh_Fir_reg_length__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L91() else D35()
  // L91()
  goto L91_;

D35_:;
  // deopt 119 [n15, l2, n15]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_n15_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_n15_;
  Rsh_Fir_deopt(119, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L91_:;
  // r46 = dyn length__2(l2, NULL, n15)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_n15_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length__2_, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L92() else D36()
  // L92()
  goto L92_;

D36_:;
  // deopt 121 [n15, r46]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_n15_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L92_:;
  // st sig = r46
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard8 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L93_:;
  // pkgs4 = ld pkgs
  Rsh_Fir_reg_pkgs4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L95() else D37()
  // L95()
  goto L95_;

L94_:;
  // r47 = dyn base8(<sym pkgs>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(r47)
  // L21(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L21_;

D37_:;
  // deopt 124 [pkgs4]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_pkgs4_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L95_:;
  // pkgs5 = force? pkgs4
  Rsh_Fir_reg_pkgs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs4_);
  // checkMissing(pkgs5)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_pkgs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c11 = `==`(pkgs5, NULL)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_pkgs5_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L21(c11)
  // L21(c11)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_c11_;
  goto L21_;

L96_:;
  // n16 = ld n
  Rsh_Fir_reg_n16_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L97() else D38()
  // L97()
  goto L97_;

D38_:;
  // deopt 128 [n16]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_n16_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L97_:;
  // n17 = force? n16
  Rsh_Fir_reg_n17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n16_);
  // checkMissing(n17)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_n17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // l3 = ld pkgs
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // length__3 = ldf `length<-`
  Rsh_Fir_reg_length__3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L98() else D39()
  // L98()
  goto L98_;

D39_:;
  // deopt 131 [n17, l3, n17]
  SEXP Rsh_Fir_array_deopt_stack36[3];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_n17_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_n17_;
  Rsh_Fir_deopt(131, 3, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L98_:;
  // r50 = dyn length__3(l3, NULL, n17)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_n17_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length__3_, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L99() else D40()
  // L99()
  goto L99_;

D40_:;
  // deopt 133 [n17, r50]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_n17_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(133, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L99_:;
  // st pkgs = r50
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // goto L16(n17)
  // L16(n17)
  Rsh_Fir_reg_nargs13_ = Rsh_Fir_reg_n17_;
  goto L16_;

D41_:;
  // deopt 139 [pkgs6]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_pkgs6_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L102_:;
  // pkgs7 = force? pkgs6
  Rsh_Fir_reg_pkgs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs6_);
  // checkMissing(pkgs7)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_pkgs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // l4 = ld sig
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // packageSlot__ = ldf `packageSlot<-`
  Rsh_Fir_reg_packageSlot__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L103() else D42()
  // L103()
  goto L103_;

D42_:;
  // deopt 142 [pkgs7, l4, pkgs7]
  SEXP Rsh_Fir_array_deopt_stack39[3];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_pkgs7_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_pkgs7_;
  Rsh_Fir_deopt(142, 3, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L103_:;
  // r51 = dyn packageSlot__(l4, NULL, pkgs7)
  SEXP Rsh_Fir_array_args89[3];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args89[2] = Rsh_Fir_reg_pkgs7_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_packageSlot__, 3, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L104() else D43()
  // L104()
  goto L104_;

D43_:;
  // deopt 144 [pkgs7, r51]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_pkgs7_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(144, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L104_:;
  // st sig = r51
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // sig15 = ld sig
  Rsh_Fir_reg_sig15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L105() else D44()
  // L105()
  goto L105_;

D44_:;
  // deopt 146 [sig15]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_sig15_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L105_:;
  // sig16 = force? sig15
  Rsh_Fir_reg_sig16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig15_);
  // checkMissing(sig16)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sig16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return sig16
  return Rsh_Fir_reg_sig16_;
}
SEXP Rsh_Fir_user_promise_inner4196989794_(SEXP CCP, SEXP RHO) {
  // fdef1 = ld fdef
  Rsh_Fir_reg_fdef1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdef2 = force? fdef1
  Rsh_Fir_reg_fdef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef1_);
  // checkMissing(fdef2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_fdef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return fdef2
  return Rsh_Fir_reg_fdef2_;
}
SEXP Rsh_Fir_user_promise_inner4196989794_1(SEXP CCP, SEXP RHO) {
  // fenv1 = ld fenv
  Rsh_Fir_reg_fenv1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fenv2 = force? fenv1
  Rsh_Fir_reg_fenv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fenv1_);
  // checkMissing(fenv2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_fenv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return fenv2
  return Rsh_Fir_reg_fenv2_;
}
SEXP Rsh_Fir_user_promise_inner4196989794_2(SEXP CCP, SEXP RHO) {
  // sig3 = ld sig
  Rsh_Fir_reg_sig3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // sig4 = force? sig3
  Rsh_Fir_reg_sig4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig3_);
  // checkMissing(sig4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sig4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return sig4
  return Rsh_Fir_reg_sig4_;
}
SEXP Rsh_Fir_user_promise_inner4196989794_3(SEXP CCP, SEXP RHO) {
  // fdef3 = ld fdef
  Rsh_Fir_reg_fdef3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdef4 = force? fdef3
  Rsh_Fir_reg_fdef4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef3_);
  // checkMissing(fdef4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_fdef4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return fdef4
  return Rsh_Fir_reg_fdef4_;
}
SEXP Rsh_Fir_user_promise_inner4196989794_4(SEXP CCP, SEXP RHO) {
  // n12 = ld n
  Rsh_Fir_reg_n12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // n13 = force? n12
  Rsh_Fir_reg_n13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n12_);
  // checkMissing(n13)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_n13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return n13
  return Rsh_Fir_reg_n13_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
