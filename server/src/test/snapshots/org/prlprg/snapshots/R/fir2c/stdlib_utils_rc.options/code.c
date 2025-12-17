#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner1246119658
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1246119658_, RHO, CCP);
  // st `rc.options` = r
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
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1246119658 dynamic dispatch ([`...`])

  return Rsh_Fir_user_version_inner1246119658_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1246119658 version 0 (dots -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1246119658/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_new2_;  // new2
  SEXP Rsh_Fir_reg_new3_;  // new3
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_new4_;  // new4
  SEXP Rsh_Fir_reg_new5_;  // new5
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_new7_;  // new7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_new8_;  // new8
  SEXP Rsh_Fir_reg_new9_;  // new9
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_new11_;  // new11
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg__CompletionEnv;  // _CompletionEnv
  SEXP Rsh_Fir_reg__CompletionEnv1_;  // _CompletionEnv1
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg__CompletionEnv3_;  // _CompletionEnv3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_new12_;  // new12
  SEXP Rsh_Fir_reg_new13_;  // new13
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_old;  // old
  SEXP Rsh_Fir_reg_old1_;  // old1
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_new14_;  // new14
  SEXP Rsh_Fir_reg_new15_;  // new15
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_nm;  // nm
  SEXP Rsh_Fir_reg_nm1_;  // nm1
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_old2_;  // old2
  SEXP Rsh_Fir_reg_old3_;  // old3
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_old5_;  // old5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_unlist;  // unlist
  SEXP Rsh_Fir_reg_new16_;  // new16
  SEXP Rsh_Fir_reg_new17_;  // new17
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_nm2_;  // nm2
  SEXP Rsh_Fir_reg_nm3_;  // nm3
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_isNamed;  // isNamed
  SEXP Rsh_Fir_reg_isNamed1_;  // isNamed1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_unlist1_;  // unlist1
  SEXP Rsh_Fir_reg_new18_;  // new18
  SEXP Rsh_Fir_reg_new19_;  // new19
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_new21_;  // new21
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_isNamed2_;  // isNamed2
  SEXP Rsh_Fir_reg_isNamed3_;  // isNamed3
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_isNamed4_;  // isNamed4
  SEXP Rsh_Fir_reg_isNamed5_;  // isNamed5
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_old6_;  // old6
  SEXP Rsh_Fir_reg_old7_;  // old7
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_old9_;  // old9
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_nm4_;  // nm4
  SEXP Rsh_Fir_reg_nm5_;  // nm5
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_nm6_;  // nm6
  SEXP Rsh_Fir_reg_nm7_;  // nm7
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_nm8_;  // nm8
  SEXP Rsh_Fir_reg_nm9_;  // nm9
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_nm11_;  // nm11
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_isNamed6_;  // isNamed6
  SEXP Rsh_Fir_reg_isNamed7_;  // isNamed7
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_modifyList;  // modifyList
  SEXP Rsh_Fir_reg_old10_;  // old10
  SEXP Rsh_Fir_reg_old11_;  // old11
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_new22_;  // new22
  SEXP Rsh_Fir_reg_new23_;  // new23
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_new25_;  // new25
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_nm12_;  // nm12
  SEXP Rsh_Fir_reg_nm13_;  // nm13
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_retVal;  // retVal
  SEXP Rsh_Fir_reg_retVal1_;  // retVal1
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r66_;  // r66

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L0_:;
  // st new = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L1_:;
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L37() else L3(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L37()
    goto L37_;
  } else {
  // L3(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L3_;
  }

L2_:;
  // c = `==`(r6, NULL)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c;
  goto L1_;

L3_:;
  // c10 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c10 then L43() else L5(c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L43()
    goto L43_;
  } else {
  // L5(c10)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
    goto L5_;
  }

L4_:;
  // r11 = `==`(r9, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c6, c7)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L3(c8)
  // L3(c8)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c8_;
  goto L3_;

L5_:;
  // c24 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c24 then L52() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L52()
    goto L52_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // c21 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c22 = `&&`(c15, c21)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L5(c22)
  // L5(c22)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c22_;
  goto L5_;

L7_:;
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r15 = dyn is_list(dx1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L50() else D7()
  // L50()
  goto L50_;

L8_:;
  // goto L10()
  // L10()
  goto L10_;

L9_:;
  // st new = dx3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // _CompletionEnv = ld `.CompletionEnv`
  Rsh_Fir_reg__CompletionEnv = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L58() else D9()
  // L58()
  goto L58_;

L11_:;
  // r21 = `==`(r19, 0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c27 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c27 then L67() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L67()
    goto L67_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard6 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L14_:;
  // st nm = r25
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard7 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L15_:;
  // c29 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c29 then L78() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L78()
    goto L78_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // sym8 = ldf nzchar
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base8 = ldf nzchar in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard8 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx8
  return Rsh_Fir_reg_dx8_;

L19_:;
  // st isNamed = r35
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // sym9 = ldf any
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base9 = ldf any in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard9 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L20_:;
  // c31 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c31 then L95() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L95()
    goto L95_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L23()
  // L23()
  goto L23_;

L22_:;
  // st nm = dx12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx12_, RHO);
  (void)(Rsh_Fir_reg_dx12_);
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // old6 = ld old
  Rsh_Fir_reg_old6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L103() else D26()
  // L103()
  goto L103_;

L24_:;
  // st retVal = dx14
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx14_, RHO);
  (void)(Rsh_Fir_reg_dx14_);
  // nm6 = ld nm
  Rsh_Fir_reg_nm6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L108() else D28()
  // L108()
  goto L108_;

L25_:;
  // st nm = dx16
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // modifyList = ldf modifyList
  Rsh_Fir_reg_modifyList = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L116() else D33()
  // L116()
  goto L116_;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r65
  return Rsh_Fir_reg_r65_;

L27_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L29() else D0()
  // L29()
  goto L29_;

L28_:;
  // r = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // r2 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L30() else D1()
  // L30()
  goto L30_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L31_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard2 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L32_:;
  // r3 = dyn base1(<lang names(new)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

L33_:;
  // new = ld new
  Rsh_Fir_reg_new = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

L34_:;
  // r5 = dyn base2(<sym new>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D2_:;
  // deopt 9 [new]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_new;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L35_:;
  // new1 = force? new
  Rsh_Fir_reg_new1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new);
  // checkMissing(new1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_new1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r7 = dyn names(new1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_new1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

D3_:;
  // deopt 12 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;

L37_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard3 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // new2 = ld new
  Rsh_Fir_reg_new2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L40() else D4()
  // L40()
  goto L40_;

L39_:;
  // r8 = dyn base3(<sym new>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(c1, r8)
  // L4(c1, r8)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L4_;

D4_:;
  // deopt 16 [c1, new2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_new2_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L40_:;
  // new3 = force? new2
  Rsh_Fir_reg_new3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new2_);
  // checkMissing(new3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_new3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r10 = dyn length(new3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_new3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L41() else D5()
  // L41()
  goto L41_;

D5_:;
  // deopt 19 [c1, r10]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L4(c1, r10)
  // L4(c1, r10)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L4_;

L43_:;
  // sym4 = ldf `is.list`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf `is.list` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard4 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // new4 = ld new
  Rsh_Fir_reg_new4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L46() else D6()
  // L46()
  goto L46_;

L45_:;
  // r12 = dyn base4(<lang `[[`(new, 1)>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(c10, r12)
  // L6(c10, r12)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L6_;

D6_:;
  // deopt 25 [c10, new4]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_new4_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L46_:;
  // new5 = force? new4
  Rsh_Fir_reg_new5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new4_);
  // checkMissing(new5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_new5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(new5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_new5_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c16 then L47() else L48(c10, new5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L47()
    goto L47_;
  } else {
  // L48(c10, new5)
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c10_;
    Rsh_Fir_reg_new7_ = Rsh_Fir_reg_new5_;
    goto L48_;
  }

L47_:;
  // dr = tryDispatchBuiltin.1("[[", new5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_new5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L49() else L48(c10, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L49()
    goto L49_;
  } else {
  // L48(c10, dr)
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c10_;
    Rsh_Fir_reg_new7_ = Rsh_Fir_reg_dr;
    goto L48_;
  }

L48_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r14 = dyn __(new7, 1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_new7_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(c18, r14)
  // L7(c18, r14)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L7_;

L49_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L7(c10, dx)
  // L7(c10, dx)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D7_:;
  // deopt 31 [c20, r15]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L6(c20, r15)
  // L6(c20, r15)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L6_;

L52_:;
  // new8 = ld new
  Rsh_Fir_reg_new8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L53() else D8()
  // L53()
  goto L53_;

D8_:;
  // deopt 33 [new8]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_new8_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L53_:;
  // new9 = force? new8
  Rsh_Fir_reg_new9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new8_);
  // checkMissing(new9)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_new9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(new9)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_new9_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c25 then L54() else L55(new9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L54()
    goto L54_;
  } else {
  // L55(new9)
    Rsh_Fir_reg_new11_ = Rsh_Fir_reg_new9_;
    goto L55_;
  }

L54_:;
  // dr2 = tryDispatchBuiltin.1("[[", new9)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_new9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc1 then L56() else L55(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L56()
    goto L56_;
  } else {
  // L55(dr2)
    Rsh_Fir_reg_new11_ = Rsh_Fir_reg_dr2_;
    goto L55_;
  }

L55_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r16 = dyn __1(new11, 1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_new11_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(r16)
  // L9(r16)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r16_;
  goto L9_;

L56_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

D9_:;
  // deopt 41 [_CompletionEnv]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg__CompletionEnv;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L58_:;
  // _CompletionEnv1 = force? _CompletionEnv
  Rsh_Fir_reg__CompletionEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__CompletionEnv);
  // checkMissing(_CompletionEnv1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg__CompletionEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(_CompletionEnv1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg__CompletionEnv1_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c26 then L60() else L61(_CompletionEnv1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L60()
    goto L60_;
  } else {
  // L61(_CompletionEnv1)
    Rsh_Fir_reg__CompletionEnv3_ = Rsh_Fir_reg__CompletionEnv1_;
    goto L61_;
  }

L59_:;
  // st old = dx6
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard5 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L60_:;
  // dr4 = tryDispatchBuiltin.1("$", _CompletionEnv1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg__CompletionEnv1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc2 then L62() else L61(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L62()
    goto L62_;
  } else {
  // L61(dr4)
    Rsh_Fir_reg__CompletionEnv3_ = Rsh_Fir_reg_dr4_;
    goto L61_;
  }

L61_:;
  // r17 = `$`(_CompletionEnv3, <sym options>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg__CompletionEnv3_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L59(r17)
  // L59(r17)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r17_;
  goto L59_;

L62_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L59(dx5)
  // L59(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L59_;

L63_:;
  // new12 = ld new
  Rsh_Fir_reg_new12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L65() else D10()
  // L65()
  goto L65_;

L64_:;
  // r18 = dyn base5(<sym new>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L11(r18)
  // L11(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L11_;

D10_:;
  // deopt 47 [new12]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_new12_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L65_:;
  // new13 = force? new12
  Rsh_Fir_reg_new13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new12_);
  // checkMissing(new13)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_new13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r20 = dyn length1(new13)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_new13_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L66() else D11()
  // L66()
  goto L66_;

D11_:;
  // deopt 50 [r20]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L11_;

L67_:;
  // old = ld old
  Rsh_Fir_reg_old = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L68() else D12()
  // L68()
  goto L68_;

D12_:;
  // deopt 53 [old]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_old;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L68_:;
  // old1 = force? old
  Rsh_Fir_reg_old1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old);
  // checkMissing(old1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_old1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return old1
  return Rsh_Fir_reg_old1_;

L71_:;
  // new14 = ld new
  Rsh_Fir_reg_new14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L73() else D13()
  // L73()
  goto L73_;

L72_:;
  // r24 = dyn base6(<sym new>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L14(r24)
  // L14(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L14_;

D13_:;
  // deopt 60 [new14]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_new14_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L73_:;
  // new15 = force? new14
  Rsh_Fir_reg_new15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new14_);
  // checkMissing(new15)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_new15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r26 = dyn names1(new15)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_new15_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L74() else D14()
  // L74()
  goto L74_;

D14_:;
  // deopt 63 [r26]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L14(r26)
  // L14(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L14_;

L75_:;
  // nm = ld nm
  Rsh_Fir_reg_nm = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L77() else D15()
  // L77()
  goto L77_;

L76_:;
  // r27 = dyn base7(<sym nm>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L15(r27)
  // L15(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L15_;

D15_:;
  // deopt 66 [nm]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_nm;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L77_:;
  // nm1 = force? nm
  Rsh_Fir_reg_nm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm);
  // checkMissing(nm1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_nm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c28 = `==`(nm1, NULL)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_nm1_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L15(c28)
  // L15(c28)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c28_;
  goto L15_;

L78_:;
  // old2 = ld old
  Rsh_Fir_reg_old2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L79() else D16()
  // L79()
  goto L79_;

D16_:;
  // deopt 69 [old2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_old2_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L79_:;
  // old3 = force? old2
  Rsh_Fir_reg_old3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old2_);
  // checkMissing(old3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_old3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(old3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_old3_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c30 then L80() else L81(old3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L80()
    goto L80_;
  } else {
  // L81(old3)
    Rsh_Fir_reg_old5_ = Rsh_Fir_reg_old3_;
    goto L81_;
  }

L80_:;
  // dr6 = tryDispatchBuiltin.1("[", old3)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_old3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc3 then L82() else L81(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L82()
    goto L82_;
  } else {
  // L81(dr6)
    Rsh_Fir_reg_old5_ = Rsh_Fir_reg_dr6_;
    goto L81_;
  }

L81_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L83() else D17()
  // L83()
  goto L83_;

L82_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L17(dx7)
  // L17(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L17_;

D17_:;
  // deopt 72 [old5]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_old5_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L83_:;
  // p = prom<V +>{
  //   new16 = ld new;
  //   new17 = force? new16;
  //   checkMissing(new17);
  //   return new17;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_, CCP, RHO);
  // r30 = dyn unlist(p)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L84() else D18()
  // L84()
  goto L84_;

D18_:;
  // deopt 74 [old5, r30]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_old5_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L84_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r31 = dyn __2(old5, r30)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_old5_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L17(r31)
  // L17(r31)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r31_;
  goto L17_;

L87_:;
  // nm2 = ld nm
  Rsh_Fir_reg_nm2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L89() else D19()
  // L89()
  goto L89_;

L88_:;
  // r34 = dyn base8(<sym nm>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L19(r34)
  // L19(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L19_;

D19_:;
  // deopt 81 [nm2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_nm2_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L89_:;
  // nm3 = force? nm2
  Rsh_Fir_reg_nm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm2_);
  // checkMissing(nm3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_nm3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r36 = dyn nzchar(nm3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_nm3_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L90() else D20()
  // L90()
  goto L90_;

D20_:;
  // deopt 84 [r36]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L19(r36)
  // L19(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L19_;

L91_:;
  // isNamed = ld isNamed
  Rsh_Fir_reg_isNamed = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L93() else D21()
  // L93()
  goto L93_;

L92_:;
  // r37 = dyn base9(<lang `!`(isNamed)>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L20(r37)
  // L20(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L20_;

D21_:;
  // deopt 88 [isNamed]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_isNamed;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L93_:;
  // isNamed1 = force? isNamed
  Rsh_Fir_reg_isNamed1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isNamed);
  // checkMissing(isNamed1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_isNamed1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r39 = `!`(isNamed1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_isNamed1_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r40 = dyn any(r39)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L94() else D22()
  // L94()
  goto L94_;

D22_:;
  // deopt 92 [r40]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L20(r40)
  // L20(r40)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r40_;
  goto L20_;

L95_:;
  // unlist1 = ldf unlist
  Rsh_Fir_reg_unlist1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L96() else D23()
  // L96()
  goto L96_;

D23_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L96_:;
  // p1 = prom<V +>{
  //   new18 = ld new;
  //   new19 = force? new18;
  //   checkMissing(new19);
  //   c32 = `is.object`(new19);
  //   if c32 then L1() else L2(new19);
  // L0(dx10):
  //   return dx10;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", new19);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(new21):
  //   isNamed2 = ld isNamed;
  //   isNamed3 = force? isNamed2;
  //   checkMissing(isNamed3);
  //   r41 = `!`(isNamed3);
  //   __3 = ldf `[` in base;
  //   r42 = dyn __3(new21, r41);
  //   goto L0(r42);
  // L3():
  //   dx9 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx9);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_1, CCP, RHO);
  // r44 = dyn unlist1(p1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist1_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L97() else D24()
  // L97()
  goto L97_;

D24_:;
  // deopt 96 [r44]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L97_:;
  // l = ld nm
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c33 = `is.object`(l)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c33 then L98() else L99(r44, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L98()
    goto L98_;
  } else {
  // L99(r44, l)
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L99_;
  }

L98_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l, r44)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args87);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc5 then L100() else L99(r44, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L100()
    goto L100_;
  } else {
  // L99(r44, dr10)
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr10_;
    goto L99_;
  }

L99_:;
  // isNamed4 = ld isNamed
  Rsh_Fir_reg_isNamed4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L101() else D25()
  // L101()
  goto L101_;

L100_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L22(r44, dx11)
  // L22(r44, dx11)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L22_;

D25_:;
  // deopt 98 [r46, l2, r44, isNamed4]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_isNamed4_;
  Rsh_Fir_deopt(98, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L101_:;
  // isNamed5 = force? isNamed4
  Rsh_Fir_reg_isNamed5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isNamed4_);
  // checkMissing(isNamed5)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_isNamed5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // r49 = `!`(isNamed5)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_isNamed5_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r50 = dyn ___(l2, r44, r49)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L22(r46, r50)
  // L22(r46, r50)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r50_;
  goto L22_;

D26_:;
  // deopt 105 [old6]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_old6_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L103_:;
  // old7 = force? old6
  Rsh_Fir_reg_old7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old6_);
  // checkMissing(old7)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_old7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(old7)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_old7_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if c34 then L104() else L105(old7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L104()
    goto L104_;
  } else {
  // L105(old7)
    Rsh_Fir_reg_old9_ = Rsh_Fir_reg_old7_;
    goto L105_;
  }

L104_:;
  // dr12 = tryDispatchBuiltin.1("[", old7)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_old7_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args95);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc6 then L106() else L105(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L106()
    goto L106_;
  } else {
  // L105(dr12)
    Rsh_Fir_reg_old9_ = Rsh_Fir_reg_dr12_;
    goto L105_;
  }

L105_:;
  // nm4 = ld nm
  Rsh_Fir_reg_nm4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L107() else D27()
  // L107()
  goto L107_;

L106_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L24(dx13)
  // L24(dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L24_;

D27_:;
  // deopt 107 [old9, nm4]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_old9_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_nm4_;
  Rsh_Fir_deopt(107, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L107_:;
  // nm5 = force? nm4
  Rsh_Fir_reg_nm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm4_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r52 = dyn __4(old9, nm5)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_old9_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_nm5_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L24(r52)
  // L24(r52)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r52_;
  goto L24_;

D28_:;
  // deopt 111 [nm6]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_nm6_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L108_:;
  // nm7 = force? nm6
  Rsh_Fir_reg_nm7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm6_);
  // checkMissing(nm7)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_nm7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // l3 = ld retVal
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L109() else D29()
  // L109()
  goto L109_;

D29_:;
  // deopt 114 [nm7, l3, nm7]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_nm7_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_nm7_;
  Rsh_Fir_deopt(114, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L109_:;
  // r53 = dyn names__(l3, NULL, nm7)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args100[2] = Rsh_Fir_reg_nm7_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L110() else D30()
  // L110()
  goto L110_;

D30_:;
  // deopt 116 [nm7, r53]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_nm7_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L110_:;
  // st retVal = r53
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // nm8 = ld nm
  Rsh_Fir_reg_nm8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L111() else D31()
  // L111()
  goto L111_;

D31_:;
  // deopt 118 [nm8]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_nm8_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L111_:;
  // nm9 = force? nm8
  Rsh_Fir_reg_nm9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm8_);
  // checkMissing(nm9)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_nm9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(nm9)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_nm9_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c35 then L112() else L113(nm9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L112()
    goto L112_;
  } else {
  // L113(nm9)
    Rsh_Fir_reg_nm11_ = Rsh_Fir_reg_nm9_;
    goto L113_;
  }

L112_:;
  // dr14 = tryDispatchBuiltin.1("[", nm9)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_nm9_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args103);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc7 then L114() else L113(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L114()
    goto L114_;
  } else {
  // L113(dr14)
    Rsh_Fir_reg_nm11_ = Rsh_Fir_reg_dr14_;
    goto L113_;
  }

L113_:;
  // isNamed6 = ld isNamed
  Rsh_Fir_reg_isNamed6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L115() else D32()
  // L115()
  goto L115_;

L114_:;
  // dx15 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L25(dx15)
  // L25(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L25_;

D32_:;
  // deopt 120 [nm11, isNamed6]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_nm11_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_isNamed6_;
  Rsh_Fir_deopt(120, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L115_:;
  // isNamed7 = force? isNamed6
  Rsh_Fir_reg_isNamed7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isNamed6_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r54 = dyn __5(nm11, isNamed7)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_nm11_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_isNamed7_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L25(r54)
  // L25(r54)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r54_;
  goto L25_;

D33_:;
  // deopt 125 []
  Rsh_Fir_deopt(125, 0, NULL, CCP, RHO);
  return R_NilValue;

L116_:;
  // p2 = prom<V +>{
  //   old10 = ld old;
  //   old11 = force? old10;
  //   checkMissing(old11);
  //   return old11;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_2, CCP, RHO);
  // p3 = prom<V +>{
  //   new22 = ld new;
  //   new23 = force? new22;
  //   checkMissing(new23);
  //   c36 = `is.object`(new23);
  //   if c36 then L1() else L2(new23);
  // L0(dx18):
  //   return dx18;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", new23);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(new25):
  //   nm12 = ld nm;
  //   nm13 = force? nm12;
  //   __6 = ldf `[` in base;
  //   r56 = dyn __6(new25, nm13);
  //   goto L0(r56);
  // L3():
  //   dx17 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx17);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_3, CCP, RHO);
  // r58 = dyn modifyList(p2, p3)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_modifyList, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L117() else D34()
  // L117()
  goto L117_;

D34_:;
  // deopt 128 [r58]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L117_:;
  // l4 = ld `.CompletionEnv`
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c37 = `is.object`(l4)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if c37 then L119() else L120(r58, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L119()
    goto L119_;
  } else {
  // L120(r58, l4)
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r58_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L120_;
  }

L118_:;
  // st `.CompletionEnv` = dx20
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx20_, RHO);
  (void)(Rsh_Fir_reg_dx20_);
  // sym10 = ldf invisible
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base10 = ldf invisible in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args116);
  // if guard10 then L122() else L123()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L122()
    goto L122_;
  } else {
  // L123()
    goto L123_;
  }

L119_:;
  // dr18 = tryDispatchBuiltin.0("$<-", l4, r58)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args117);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc9 then L121() else L120(r58, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L121()
    goto L121_;
  } else {
  // L120(r58, dr18)
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r58_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr18_;
    goto L120_;
  }

L120_:;
  // r63 = `$<-`(l6, <sym options>, r58)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L118(r63)
  // L118(r63)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r63_;
  goto L118_;

L121_:;
  // dx19 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L118(dx19)
  // L118(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L118_;

L122_:;
  // retVal = ld retVal
  Rsh_Fir_reg_retVal = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L124() else D35()
  // L124()
  goto L124_;

L123_:;
  // r64 = dyn base10(<sym retVal>)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L26(r64)
  // L26(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L26_;

D35_:;
  // deopt 134 [retVal]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_retVal;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L124_:;
  // retVal1 = force? retVal
  Rsh_Fir_reg_retVal1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_retVal);
  // checkMissing(retVal1)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_retVal1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r66 = dyn invisible(retVal1)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_retVal1_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L125() else D36()
  // L125()
  goto L125_;

D36_:;
  // deopt 137 [r66]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L26(r66)
  // L26(r66)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r66_;
  goto L26_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO) {
  // new16 = ld new
  Rsh_Fir_reg_new16_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // new17 = force? new16
  Rsh_Fir_reg_new17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new16_);
  // checkMissing(new17)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_new17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return new17
  return Rsh_Fir_reg_new17_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO) {
  // new18 = ld new
  Rsh_Fir_reg_new18_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // new19 = force? new18
  Rsh_Fir_reg_new19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new18_);
  // checkMissing(new19)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_new19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(new19)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_new19_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c32 then L1() else L2(new19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L1()
    goto L1_;
  } else {
  // L2(new19)
    Rsh_Fir_reg_new21_ = Rsh_Fir_reg_new19_;
    goto L2_;
  }

L0_:;
  // return dx10
  return Rsh_Fir_reg_dx10_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", new19)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_new19_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_new21_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // isNamed2 = ld isNamed
  Rsh_Fir_reg_isNamed2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // isNamed3 = force? isNamed2
  Rsh_Fir_reg_isNamed3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isNamed2_);
  // checkMissing(isNamed3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_isNamed3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // r41 = `!`(isNamed3)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_isNamed3_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r42 = dyn __3(new21, r41)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_new21_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r42_;
  goto L0_;

L3_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L0(dx9)
  // L0(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO) {
  // old10 = ld old
  Rsh_Fir_reg_old10_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // old11 = force? old10
  Rsh_Fir_reg_old11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old10_);
  // checkMissing(old11)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_old11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // return old11
  return Rsh_Fir_reg_old11_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO) {
  // new22 = ld new
  Rsh_Fir_reg_new22_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // new23 = force? new22
  Rsh_Fir_reg_new23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new22_);
  // checkMissing(new23)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_new23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(new23)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_new23_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if c36 then L1() else L2(new23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L1()
    goto L1_;
  } else {
  // L2(new23)
    Rsh_Fir_reg_new25_ = Rsh_Fir_reg_new23_;
    goto L2_;
  }

L0_:;
  // return dx18
  return Rsh_Fir_reg_dx18_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", new23)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_new23_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args110);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_new25_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // nm12 = ld nm
  Rsh_Fir_reg_nm12_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // nm13 = force? nm12
  Rsh_Fir_reg_nm13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm12_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r56 = dyn __6(new25, nm13)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_new25_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_nm13_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r56_;
  goto L0_;

L3_:;
  // dx17 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L0(dx17)
  // L0(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
