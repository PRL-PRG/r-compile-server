#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1081672851_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1081672851_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1081672851_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1081672851_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1081672851_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner1081672851
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1081672851_, RHO, CCP);
  // st `.doSubNextCall` = r
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
SEXP Rsh_Fir_user_function_inner1081672851_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1081672851 dynamic dispatch ([call, method])

  return Rsh_Fir_user_version_inner1081672851_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1081672851_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1081672851 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1081672851/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_call;  // call
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_call1_;  // call1
  SEXP Rsh_Fir_reg_call2_;  // call2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_idrop;  // idrop
  SEXP Rsh_Fir_reg_idrop1_;  // idrop1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_hasDrop;  // hasDrop
  SEXP Rsh_Fir_reg_hasDrop1_;  // hasDrop1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_call3_;  // call3
  SEXP Rsh_Fir_reg_call4_;  // call4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_call6_;  // call6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_call7_;  // call7
  SEXP Rsh_Fir_reg_call8_;  // call8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_call10_;  // call10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_idrop2_;  // idrop2
  SEXP Rsh_Fir_reg_idrop3_;  // idrop3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_formalArgs;  // formalArgs
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_fnames;  // fnames
  SEXP Rsh_Fir_reg_fnames1_;  // fnames1
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_call11_;  // call11
  SEXP Rsh_Fir_reg_call12_;  // call12
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_call13_;  // call13
  SEXP Rsh_Fir_reg_call14_;  // call14
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_length__;  // length__
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_length__1_;  // length__1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_call15_;  // call15
  SEXP Rsh_Fir_reg_call16_;  // call16
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_call17_;  // call17
  SEXP Rsh_Fir_reg_call18_;  // call18
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_fnames2_;  // fnames2
  SEXP Rsh_Fir_reg_fnames3_;  // fnames3
  SEXP Rsh_Fir_reg_cnames;  // cnames
  SEXP Rsh_Fir_reg_cnames1_;  // cnames1
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_fnames4_;  // fnames4
  SEXP Rsh_Fir_reg_fnames5_;  // fnames5
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_hasDrop2_;  // hasDrop2
  SEXP Rsh_Fir_reg_hasDrop3_;  // hasDrop3
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_drop;  // drop
  SEXP Rsh_Fir_reg_drop1_;  // drop1
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_drop3_;  // drop3
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_drop5_;  // drop5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_call19_;  // call19
  SEXP Rsh_Fir_reg_call20_;  // call20
  SEXP Rsh_Fir_reg_as_call;  // as_call
  SEXP Rsh_Fir_reg_r60_;  // r60

  // Bind parameters
  Rsh_Fir_reg_call = PARAMS[0];
  Rsh_Fir_reg_method = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st call = call
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_call, RHO);
  (void)(Rsh_Fir_reg_call);
  // st method = method
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_method, RHO);
  (void)(Rsh_Fir_reg_method);
  // sym = ldf match
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf match in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
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
  // st idrop = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L1_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r5 = dyn match("drop", r3, NA_INT, NULL)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

L2_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // st hasDrop = r9
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // hasDrop = ld hasDrop
  Rsh_Fir_reg_hasDrop = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

L3_:;
  // goto L5()
  // L5()
  goto L5_;

L4_:;
  // st call = dx3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L6_:;
  // st fnames = r14
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym4 = ldf match
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base4 = ldf match in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L7_:;
  // st i = r19
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard5 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L8_:;
  // c4 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c4 then L9(c4) else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L9(c4)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c4_;
    goto L9_;
  } else {
  // L60()
    goto L60_;
  }

L9_:;
  // c13 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c13 then L67() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L67()
    goto L67_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // r27 = `>`(i6, r25)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c11 = `||`(c9, c10)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L9(c11)
  // L9(c11)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c11_;
  goto L9_;

L11_:;
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L75() else D23()
  // L75()
  goto L75_;

L12_:;
  // l = ld fnames
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // length__ = ldf `length<-`
  Rsh_Fir_reg_length__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L72() else D21()
  // L72()
  goto L72_;

L13_:;
  // fnames4 = ld fnames
  Rsh_Fir_reg_fnames4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L97() else D35()
  // L97()
  goto L97_;

L14_:;
  // c15 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c15 then L85() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L85()
    goto L85_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // c14 = `==`(r38, NULL)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L14(c14)
  // L14(c14)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_c14_;
  goto L14_;

L16_:;
  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L89() else D29()
  // L89()
  goto L89_;

L17_:;
  // goto L18(r41)
  // L18(r41)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r41_;
  goto L18_;

L18_:;
  // st cnames = r43
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym12 = ldf c
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base12 = ldf c in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard12 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L19_:;
  // st fnames = r54
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // goto L13()
  // L13()
  goto L13_;

L20_:;
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // sym13 = ldf `as.call`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base13 = ldf `as.call` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard13 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r59
  return Rsh_Fir_reg_r59_;

L23_:;
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L24_:;
  // r = dyn base("drop", <lang names(call)>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L25_:;
  // call1 = ld call
  Rsh_Fir_reg_call1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D0()
  // L27()
  goto L27_;

L26_:;
  // r2 = dyn base1(<sym call>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 5 [call1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_call1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L27_:;
  // call2 = force? call1
  Rsh_Fir_reg_call2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call1_);
  // checkMissing(call2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_call2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r4 = dyn names(call2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_call2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

D1_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

D2_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L30_:;
  // idrop = ld idrop
  Rsh_Fir_reg_idrop = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L32() else D3()
  // L32()
  goto L32_;

L31_:;
  // r6 = dyn base2(<sym idrop>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D3_:;
  // deopt 16 [idrop]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_idrop;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L32_:;
  // idrop1 = force? idrop
  Rsh_Fir_reg_idrop1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_idrop);
  // checkMissing(idrop1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_idrop1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r8 = dyn is_na(idrop1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_idrop1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L33() else D4()
  // L33()
  goto L33_;

D4_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

D5_:;
  // deopt 22 [hasDrop]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_hasDrop;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L34_:;
  // hasDrop1 = force? hasDrop
  Rsh_Fir_reg_hasDrop1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hasDrop);
  // checkMissing(hasDrop1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_hasDrop1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(hasDrop1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_hasDrop1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c then L35() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L35()
    goto L35_;
  } else {
  // L3()
    goto L3_;
  }

L35_:;
  // call3 = ld call
  Rsh_Fir_reg_call3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

D6_:;
  // deopt 24 [call3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_call3_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // call4 = force? call3
  Rsh_Fir_reg_call4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call3_);
  // checkMissing(call4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_call4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(call4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_call4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c1 then L38() else L39(call4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L38()
    goto L38_;
  } else {
  // L39(call4)
    Rsh_Fir_reg_call6_ = Rsh_Fir_reg_call4_;
    goto L39_;
  }

L37_:;
  // st drop = dx1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // call7 = ld call
  Rsh_Fir_reg_call7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

L38_:;
  // dr = tryDispatchBuiltin.1("$", call4)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_call4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc then L40() else L39(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L40()
    goto L40_;
  } else {
  // L39(dr)
    Rsh_Fir_reg_call6_ = Rsh_Fir_reg_dr;
    goto L39_;
  }

L39_:;
  // r10 = `$`(call6, <sym drop>)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_call6_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L37(r10)
  // L37(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L37_;

L40_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L37(dx)
  // L37(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L37_;

D7_:;
  // deopt 28 [call7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_call7_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L41_:;
  // call8 = force? call7
  Rsh_Fir_reg_call8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call7_);
  // checkMissing(call8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_call8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(call8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_call8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c2 then L42() else L43(call8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L42()
    goto L42_;
  } else {
  // L43(call8)
    Rsh_Fir_reg_call10_ = Rsh_Fir_reg_call8_;
    goto L43_;
  }

L42_:;
  // dr2 = tryDispatchBuiltin.1("[", call8)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_call8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc1 then L44() else L43(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L44()
    goto L44_;
  } else {
  // L43(dr2)
    Rsh_Fir_reg_call10_ = Rsh_Fir_reg_dr2_;
    goto L43_;
  }

L43_:;
  // idrop2 = ld idrop
  Rsh_Fir_reg_idrop2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

L44_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D8_:;
  // deopt 30 [call10, idrop2]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_call10_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_idrop2_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L45_:;
  // idrop3 = force? idrop2
  Rsh_Fir_reg_idrop3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_idrop2_);
  // checkMissing(idrop3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_idrop3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r11 = `-`(<missing>, idrop3)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_idrop3_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r12 = dyn __(call10, r11)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_call10_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L4_;

L47_:;
  // formalArgs = ldf formalArgs
  Rsh_Fir_reg_formalArgs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

L48_:;
  // r13 = dyn base3("", <lang formalArgs(method)>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L6_;

D9_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p = prom<V +>{
  //   method1 = ld method;
  //   method2 = force? method1;
  //   checkMissing(method2);
  //   return method2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1081672851_, CCP, RHO);
  // r16 = dyn formalArgs(p)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formalArgs, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

D10_:;
  // deopt 43 [r16]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L50_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r17 = dyn c3("", r16)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

D11_:;
  // deopt 45 [r17]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r17_;
  goto L6_;

L52_:;
  // fnames = ld fnames
  Rsh_Fir_reg_fnames = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L54() else D12()
  // L54()
  goto L54_;

L53_:;
  // r18 = dyn base4("...", <sym fnames>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D12_:;
  // deopt 50 [fnames]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_fnames;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L54_:;
  // fnames1 = force? fnames
  Rsh_Fir_reg_fnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fnames);
  // checkMissing(fnames1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_fnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r20 = dyn match1("...", fnames1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args46[4];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_fnames1_;
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args46[3] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L55() else D13()
  // L55()
  goto L55_;

D13_:;
  // deopt 55 [r20]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L7_;

L56_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

L57_:;
  // r21 = dyn base5(<sym i>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L8_;

D14_:;
  // deopt 59 [i]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L58_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r23 = dyn is_na1(i1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L59() else D15()
  // L59()
  goto L59_;

D15_:;
  // deopt 62 [r23]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L8_;

L60_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L61() else D16()
  // L61()
  goto L61_;

D16_:;
  // deopt 63 [c4, i2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L61_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard6 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L62_:;
  // call11 = ld call
  Rsh_Fir_reg_call11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

L63_:;
  // r24 = dyn base6(<sym call>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(c4, i3, r24)
  // L10(c4, i3, r24)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L10_;

D17_:;
  // deopt 66 [c4, i3, call11]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_call11_;
  Rsh_Fir_deopt(66, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L64_:;
  // call12 = force? call11
  Rsh_Fir_reg_call12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call11_);
  // checkMissing(call12)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_call12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r26 = dyn length(call12)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_call12_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L65() else D18()
  // L65()
  goto L65_;

D18_:;
  // deopt 69 [c4, i3, r26]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(69, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L10(c4, i3, r26)
  // L10(c4, i3, r26)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L10_;

L67_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard7 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L68_:;
  // call13 = ld call
  Rsh_Fir_reg_call13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L70() else D19()
  // L70()
  goto L70_;

L69_:;
  // r28 = dyn base7(<sym call>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L12_;

D19_:;
  // deopt 74 [call13]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_call13_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L70_:;
  // call14 = force? call13
  Rsh_Fir_reg_call14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call13_);
  // checkMissing(call14)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_call14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r30 = dyn length1(call14)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_call14_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L71() else D20()
  // L71()
  goto L71_;

D20_:;
  // deopt 77 [r30]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L12(r30)
  // L12(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L12_;

D21_:;
  // deopt 79 [r29, l, r29]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(79, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L72_:;
  // r31 = dyn length__(l, NULL, r29)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length__, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L73() else D22()
  // L73()
  goto L73_;

D22_:;
  // deopt 81 [r29, r31]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L73_:;
  // st fnames = r31
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // goto L13()
  // L13()
  goto L13_;

D23_:;
  // deopt 83 [i7]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L75_:;
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // checkMissing(i8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_i8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r33 = `-`(i8, 1.0)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // st i = r33
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L76() else D24()
  // L76()
  goto L76_;

D24_:;
  // deopt 88 [i9]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L76_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // checkMissing(i10)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_i10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // l1 = ld fnames
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // length__1 = ldf `length<-`
  Rsh_Fir_reg_length__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L77() else D25()
  // L77()
  goto L77_;

D25_:;
  // deopt 91 [i10, l1, i10]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(91, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L77_:;
  // r34 = dyn length__1(l1, NULL, i10)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length__1_, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L78() else D26()
  // L78()
  goto L78_;

D26_:;
  // deopt 93 [i10, r34]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L78_:;
  // st fnames = r34
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard8 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L79_:;
  // sym9 = ldf names
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base9 = ldf names in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard9 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L80_:;
  // r35 = dyn base8(<lang names(call)>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L14(r35)
  // L14(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L14_;

L81_:;
  // call15 = ld call
  Rsh_Fir_reg_call15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L83() else D27()
  // L83()
  goto L83_;

L82_:;
  // r37 = dyn base9(<sym call>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L15(r37)
  // L15(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L15_;

D27_:;
  // deopt 98 [call15]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_call15_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L83_:;
  // call16 = force? call15
  Rsh_Fir_reg_call16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call15_);
  // checkMissing(call16)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_call16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r39 = dyn names1(call16)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_call16_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L84() else D28()
  // L84()
  goto L84_;

D28_:;
  // deopt 101 [r39]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L15(r39)
  // L15(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L15_;

L85_:;
  // sym10 = ldf rep
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base10 = ldf rep in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard10 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L86_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r42 = dyn rep("", <lang `-`(length(call), i)>)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L17(r42)
  // L17(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L17_;

L87_:;
  // r40 = dyn base10("", <lang `-`(length(call), i)>)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L17(r40)
  // L17(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L17_;

D29_:;
  // deopt 107 []
  Rsh_Fir_deopt(107, 0, NULL, CCP, RHO);
  return R_NilValue;

L89_:;
  // r44 = dyn __1("utils", "tail")
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L90() else D30()
  // L90()
  goto L90_;

D30_:;
  // deopt 110 [r44]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L90_:;
  // checkFun.0(r44)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r44_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args74));
  // r45 = r44 as cls
  Rsh_Fir_reg_r45_ = Rsh_Fir_cast(Rsh_Fir_reg_r44_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p1 = prom<V +>{
  //   sym11 = ldf names;
  //   base11 = ldf names in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L1() else L2();
  // L0(r47):
  //   return r47;
  // L1():
  //   call17 = ld call;
  //   call18 = force? call17;
  //   checkMissing(call18);
  //   names2 = ldf names in base;
  //   r48 = dyn names2(call18);
  //   goto L0(r48);
  // L2():
  //   r46 = dyn base11(<sym call>);
  //   goto L0(r46);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1081672851_1, CCP, RHO);
  // p2 = prom<V +>{
  //   i11 = ld i;
  //   i12 = force? i11;
  //   checkMissing(i12);
  //   r50 = `-`(<missing>, i12);
  //   return r50;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1081672851_2, CCP, RHO);
  // r52 = dyn r45(p1, p2)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r45_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L91() else D31()
  // L91()
  goto L91_;

D31_:;
  // deopt 114 [r52]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L18(r52)
  // L18(r52)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r52_;
  goto L18_;

L92_:;
  // fnames2 = ld fnames
  Rsh_Fir_reg_fnames2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L94() else D32()
  // L94()
  goto L94_;

L93_:;
  // r53 = dyn base12(<sym fnames>, <sym cnames>)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L19(r53)
  // L19(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L19_;

D32_:;
  // deopt 118 [fnames2]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_fnames2_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L94_:;
  // fnames3 = force? fnames2
  Rsh_Fir_reg_fnames3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fnames2_);
  // checkMissing(fnames3)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_fnames3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // cnames = ld cnames
  Rsh_Fir_reg_cnames = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L95() else D33()
  // L95()
  goto L95_;

D33_:;
  // deopt 120 [cnames]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_cnames;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L95_:;
  // cnames1 = force? cnames
  Rsh_Fir_reg_cnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cnames);
  // checkMissing(cnames1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_cnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c16 = ldf c in base
  Rsh_Fir_reg_c16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r55 = dyn c16(fnames3, cnames1)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_fnames3_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_cnames1_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c16_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L96() else D34()
  // L96()
  goto L96_;

D34_:;
  // deopt 123 [r55]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L19(r55)
  // L19(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L19_;

D35_:;
  // deopt 125 [fnames4]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_fnames4_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L97_:;
  // fnames5 = force? fnames4
  Rsh_Fir_reg_fnames5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fnames4_);
  // checkMissing(fnames5)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_fnames5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // l2 = ld call
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L98() else D36()
  // L98()
  goto L98_;

D36_:;
  // deopt 128 [fnames5, l2, fnames5]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_fnames5_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_fnames5_;
  Rsh_Fir_deopt(128, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L98_:;
  // r56 = dyn names__(l2, NULL, fnames5)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_fnames5_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L99() else D37()
  // L99()
  goto L99_;

D37_:;
  // deopt 130 [fnames5, r56]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_fnames5_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(130, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L99_:;
  // st call = r56
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // hasDrop2 = ld hasDrop
  Rsh_Fir_reg_hasDrop2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L100() else D38()
  // L100()
  goto L100_;

D38_:;
  // deopt 132 [hasDrop2]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_hasDrop2_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L100_:;
  // hasDrop3 = force? hasDrop2
  Rsh_Fir_reg_hasDrop3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hasDrop2_);
  // checkMissing(hasDrop3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_hasDrop3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // c17 = `as.logical`(hasDrop3)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_hasDrop3_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c17 then L101() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L101()
    goto L101_;
  } else {
  // L20()
    goto L20_;
  }

L101_:;
  // drop = ld drop
  Rsh_Fir_reg_drop = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L102() else D39()
  // L102()
  goto L102_;

D39_:;
  // deopt 134 [drop]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_drop;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L102_:;
  // drop1 = force? drop
  Rsh_Fir_reg_drop1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop);
  // checkMissing(drop1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_drop1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // l3 = ld call
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c18 = `is.object`(l3)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c18 then L104() else L105(drop1, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L104()
    goto L104_;
  } else {
  // L105(drop1, l3)
    Rsh_Fir_reg_drop3_ = Rsh_Fir_reg_drop1_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L105_;
  }

L103_:;
  // st call = dx6
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // goto L21()
  // L21()
  goto L21_;

L104_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l3, drop1)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_drop1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args92);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc2 then L106() else L105(drop1, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L106()
    goto L106_;
  } else {
  // L105(drop1, dr4)
    Rsh_Fir_reg_drop3_ = Rsh_Fir_reg_drop1_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr4_;
    goto L105_;
  }

L105_:;
  // r57 = `$<-`(l5, <sym drop>, drop1)
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args94[2] = Rsh_Fir_reg_drop1_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L103(drop3, r57)
  // L103(drop3, r57)
  Rsh_Fir_reg_drop5_ = Rsh_Fir_reg_drop3_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r57_;
  goto L103_;

L106_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L103(drop1, dx5)
  // L103(drop1, dx5)
  Rsh_Fir_reg_drop5_ = Rsh_Fir_reg_drop1_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L103_;

L108_:;
  // call19 = ld call
  Rsh_Fir_reg_call19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L110() else D40()
  // L110()
  goto L110_;

L109_:;
  // r58 = dyn base13(<sym call>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L22(r58)
  // L22(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L22_;

D40_:;
  // deopt 143 [call19]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_call19_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L110_:;
  // call20 = force? call19
  Rsh_Fir_reg_call20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call19_);
  // checkMissing(call20)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_call20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // as_call = ldf `as.call` in base
  Rsh_Fir_reg_as_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r60 = dyn as_call(call20)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_call20_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_call, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L111() else D41()
  // L111()
  goto L111_;

D41_:;
  // deopt 146 [r60]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L22(r60)
  // L22(r60)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r60_;
  goto L22_;
}
SEXP Rsh_Fir_user_promise_inner1081672851_(SEXP CCP, SEXP RHO) {
  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return method2
  return Rsh_Fir_reg_method2_;
}
SEXP Rsh_Fir_user_promise_inner1081672851_1(SEXP CCP, SEXP RHO) {
  // sym11 = ldf names
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base11 = ldf names in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard11 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r47
  return Rsh_Fir_reg_r47_;

L1_:;
  // call17 = ld call
  Rsh_Fir_reg_call17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // call18 = force? call17
  Rsh_Fir_reg_call18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call17_);
  // checkMissing(call18)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_call18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r48 = dyn names2(call18)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_call18_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L0_;

L2_:;
  // r46 = dyn base11(<sym call>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1081672851_2(SEXP CCP, SEXP RHO) {
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // checkMissing(i12)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_i12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r50 = `-`(<missing>, i12)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // return r50
  return Rsh_Fir_reg_r50_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
