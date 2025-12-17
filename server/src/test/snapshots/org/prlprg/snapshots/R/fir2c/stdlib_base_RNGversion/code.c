#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3953463003_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3953463003_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3953463003_(SEXP CCP, SEXP RHO);
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
  // r = clos inner3953463003
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3953463003_, RHO, CCP);
  // st RNGversion = r
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
SEXP Rsh_Fir_user_function_inner3953463003_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3953463003 dynamic dispatch ([vstr])

  return Rsh_Fir_user_version_inner3953463003_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3953463003_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3953463003 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3953463003/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_vstr;  // vstr
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_strsplit;  // strsplit
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_vstr1_;  // vstr1
  SEXP Rsh_Fir_reg_vstr2_;  // vstr2
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_as_numeric;  // as_numeric
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_vnum;  // vnum
  SEXP Rsh_Fir_reg_vnum1_;  // vnum1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_vnum2_;  // vnum2
  SEXP Rsh_Fir_reg_vnum3_;  // vnum3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_vnum5_;  // vnum5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_vnum6_;  // vnum6
  SEXP Rsh_Fir_reg_vnum7_;  // vnum7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_vnum9_;  // vnum9
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_RNGkind;  // RNGkind
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_vnum10_;  // vnum10
  SEXP Rsh_Fir_reg_vnum11_;  // vnum11
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_vnum13_;  // vnum13
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_vnum14_;  // vnum14
  SEXP Rsh_Fir_reg_vnum15_;  // vnum15
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_vnum17_;  // vnum17
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_vnum18_;  // vnum18
  SEXP Rsh_Fir_reg_vnum19_;  // vnum19
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_vnum21_;  // vnum21
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_RNGkind1_;  // RNGkind1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_vnum22_;  // vnum22
  SEXP Rsh_Fir_reg_vnum23_;  // vnum23
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_vnum25_;  // vnum25
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_vnum26_;  // vnum26
  SEXP Rsh_Fir_reg_vnum27_;  // vnum27
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_vnum29_;  // vnum29
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_vnum30_;  // vnum30
  SEXP Rsh_Fir_reg_vnum31_;  // vnum31
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_vnum33_;  // vnum33
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_c67_;  // c67
  SEXP Rsh_Fir_reg_c68_;  // c68
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_c70_;  // c70
  SEXP Rsh_Fir_reg_c73_;  // c73
  SEXP Rsh_Fir_reg_c74_;  // c74
  SEXP Rsh_Fir_reg_c76_;  // c76
  SEXP Rsh_Fir_reg_RNGkind2_;  // RNGkind2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_RNGkind3_;  // RNGkind3
  SEXP Rsh_Fir_reg_r36_;  // r36

  // Bind parameters
  Rsh_Fir_reg_vstr = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st vstr = vstr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_vstr, RHO);
  (void)(Rsh_Fir_reg_vstr);
  // sym = ldf `as.numeric`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf `as.numeric` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L0_:;
  // st vnum = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L1_:;
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r10 = dyn as_numeric(dx1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L28() else D2()
  // L28()
  goto L28_;

L2_:;
  // r14 = `<`(r12, 2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L33() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L33()
    goto L33_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // vnum2 = ld vnum
  Rsh_Fir_reg_vnum2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

L5_:;
  // r18 = `==`(dx3, 0.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c3 then L41() else L6(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L41()
    goto L41_;
  } else {
  // L6(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L6_;
  }

L6_:;
  // c14 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c14 then L47() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L47()
    goto L47_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // r20 = `<`(dx5, 99.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c12 = `&&`(c10, c11)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L6(c12)
  // L6(c12)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c12_;
  goto L6_;

L8_:;
  // vnum10 = ld vnum
  Rsh_Fir_reg_vnum10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

L9_:;
  // r23 = `==`(dx7, 0.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c16 then L10(c16) else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L10(c16)
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c16_;
    goto L10_;
  } else {
  // L55()
    goto L55_;
  }

L10_:;
  // c45 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c45 then L67() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L67()
    goto L67_;
  } else {
  // L14()
    goto L14_;
  }

L11_:;
  // r25 = `==`(dx9, 1.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c24 then L60() else L12(c23, c24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L60()
    goto L60_;
  } else {
  // L12(c23, c24)
    Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c24_;
    goto L12_;
  }

L12_:;
  // c42 = `as.logical`(c28)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c43 = `||`(c27, c42)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L10(c43)
  // L10(c43)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c43_;
  goto L10_;

L13_:;
  // r27 = `<=`(dx11, 6.0)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c38 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c39 = `&&`(c37, c38)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L12(c36, c39)
  // L12(c36, c39)
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c39_;
  goto L12_;

L14_:;
  // vnum22 = ld vnum
  Rsh_Fir_reg_vnum22_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L71() else D16()
  // L71()
  goto L71_;

L15_:;
  // r30 = `<=`(dx13, 2.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c47 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c47 then L16(c47) else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L16(c47)
    Rsh_Fir_reg_c48_ = Rsh_Fir_reg_c47_;
    goto L16_;
  } else {
  // L75()
    goto L75_;
  }

L16_:;
  // c76 = `as.logical`(c48)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c76 then L87() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c76_)) {
  // L87()
    goto L87_;
  } else {
  // L20()
    goto L20_;
  }

L17_:;
  // r32 = `==`(dx15, 3.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c55 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c55 then L80() else L18(c54, c55)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L80()
    goto L80_;
  } else {
  // L18(c54, c55)
    Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c54_;
    Rsh_Fir_reg_c59_ = Rsh_Fir_reg_c55_;
    goto L18_;
  }

L18_:;
  // c73 = `as.logical`(c59)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c74 = `||`(c58, c73)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_c73_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L16(c74)
  // L16(c74)
  Rsh_Fir_reg_c48_ = Rsh_Fir_reg_c74_;
  goto L16_;

L19_:;
  // r34 = `<=`(dx17, 5.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c69 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // c70 = `&&`(c68, c69)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c68_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_c69_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L18(c67, c70)
  // L18(c67, c70)
  Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c67_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_reg_c70_;
  goto L18_;

L20_:;
  // RNGkind3 = ldf RNGkind
  Rsh_Fir_reg_RNGkind3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L91() else D21()
  // L91()
  goto L91_;

L21_:;
  // strsplit = ldf strsplit
  Rsh_Fir_reg_strsplit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r = dyn base(<lang `[[`(strsplit(as.character(vstr), ".", fixed=TRUE), 1)>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p = prom<V +>{
  //   sym1 = ldf `as.character`;
  //   base1 = ldf `as.character` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   vstr1 = ld vstr;
  //   vstr2 = force? vstr1;
  //   checkMissing(vstr2);
  //   as_character = ldf `as.character` in base;
  //   r4 = dyn as_character(vstr2);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base1(<sym vstr>);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3953463003_, CCP, RHO);
  // r6 = dyn strsplit[, , fixed](p, ".", TRUE)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strsplit, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 8 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // c = `is.object`(r6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c then L25() else L26(r6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L25()
    goto L25_;
  } else {
  // L26(r6)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_;
    goto L26_;
  }

L25_:;
  // dr = tryDispatchBuiltin.1("[[", r6)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_dr;
    goto L26_;
  }

L26_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r9 = dyn __(r8, 1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L1_;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

D2_:;
  // deopt 13 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r10_;
  goto L0_;

L29_:;
  // vnum = ld vnum
  Rsh_Fir_reg_vnum = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

L30_:;
  // r11 = dyn base2(<sym vnum>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r11)
  // L2(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L2_;

D3_:;
  // deopt 17 [vnum]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_vnum;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // vnum1 = force? vnum
  Rsh_Fir_reg_vnum1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnum);
  // checkMissing(vnum1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_vnum1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r13 = dyn length(vnum1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_vnum1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

D4_:;
  // deopt 20 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L2_;

L33_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

D5_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // r15 = dyn stop("malformed version string")
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

D6_:;
  // deopt 26 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L4()
  // L4()
  goto L4_;

D7_:;
  // deopt 29 [vnum2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_vnum2_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L37_:;
  // vnum3 = force? vnum2
  Rsh_Fir_reg_vnum3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnum2_);
  // checkMissing(vnum3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_vnum3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(vnum3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_vnum3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c2 then L38() else L39(vnum3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L38()
    goto L38_;
  } else {
  // L39(vnum3)
    Rsh_Fir_reg_vnum5_ = Rsh_Fir_reg_vnum3_;
    goto L39_;
  }

L38_:;
  // dr2 = tryDispatchBuiltin.1("[", vnum3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_vnum3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L40() else L39(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L40()
    goto L40_;
  } else {
  // L39(dr2)
    Rsh_Fir_reg_vnum5_ = Rsh_Fir_reg_dr2_;
    goto L39_;
  }

L39_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r17 = dyn __1(vnum5, 1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_vnum5_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r17_;
  goto L5_;

L40_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L5(dx2)
  // L5(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

L41_:;
  // vnum6 = ld vnum
  Rsh_Fir_reg_vnum6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

D8_:;
  // deopt 36 [c3, vnum6]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_vnum6_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L42_:;
  // vnum7 = force? vnum6
  Rsh_Fir_reg_vnum7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnum6_);
  // checkMissing(vnum7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_vnum7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(vnum7)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_vnum7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c6 then L43() else L44(c3, vnum7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L43()
    goto L43_;
  } else {
  // L44(c3, vnum7)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_vnum9_ = Rsh_Fir_reg_vnum7_;
    goto L44_;
  }

L43_:;
  // dr4 = tryDispatchBuiltin.1("[", vnum7)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_vnum7_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc2 then L45() else L44(c3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L45()
    goto L45_;
  } else {
  // L44(c3, dr4)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_vnum9_ = Rsh_Fir_reg_dr4_;
    goto L44_;
  }

L44_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r19 = dyn __2(vnum9, 2)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_vnum9_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(c8, r19)
  // L7(c8, r19)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r19_;
  goto L7_;

L45_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L7(c3, dx4)
  // L7(c3, dx4)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L7_;

L47_:;
  // RNGkind = ldf RNGkind
  Rsh_Fir_reg_RNGkind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

D9_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // r21 = dyn RNGkind("Wichmann-Hill", "Buggy Kinderman-Ramage", "Rounding")
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args58[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_RNGkind, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L49() else D10()
  // L49()
  goto L49_;

D10_:;
  // deopt 49 [r21]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L49_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;

D11_:;
  // deopt 50 [vnum10]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_vnum10_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L51_:;
  // vnum11 = force? vnum10
  Rsh_Fir_reg_vnum11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnum10_);
  // checkMissing(vnum11)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_vnum11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(vnum11)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_vnum11_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c15 then L52() else L53(vnum11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L52()
    goto L52_;
  } else {
  // L53(vnum11)
    Rsh_Fir_reg_vnum13_ = Rsh_Fir_reg_vnum11_;
    goto L53_;
  }

L52_:;
  // dr6 = tryDispatchBuiltin.1("[", vnum11)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_vnum11_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc3 then L54() else L53(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L54()
    goto L54_;
  } else {
  // L53(dr6)
    Rsh_Fir_reg_vnum13_ = Rsh_Fir_reg_dr6_;
    goto L53_;
  }

L53_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r22 = dyn __3(vnum13, 1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_vnum13_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(r22)
  // L9(r22)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r22_;
  goto L9_;

L54_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L9(dx6)
  // L9(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L9_;

L55_:;
  // vnum14 = ld vnum
  Rsh_Fir_reg_vnum14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L56() else D12()
  // L56()
  goto L56_;

D12_:;
  // deopt 57 [c16, vnum14]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_vnum14_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L56_:;
  // vnum15 = force? vnum14
  Rsh_Fir_reg_vnum15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnum14_);
  // checkMissing(vnum15)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_vnum15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(vnum15)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_vnum15_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c19 then L57() else L58(c16, vnum15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L57()
    goto L57_;
  } else {
  // L58(c16, vnum15)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c16_;
    Rsh_Fir_reg_vnum17_ = Rsh_Fir_reg_vnum15_;
    goto L58_;
  }

L57_:;
  // dr8 = tryDispatchBuiltin.1("[", vnum15)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_vnum15_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc4 then L59() else L58(c16, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L59()
    goto L59_;
  } else {
  // L58(c16, dr8)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c16_;
    Rsh_Fir_reg_vnum17_ = Rsh_Fir_reg_dr8_;
    goto L58_;
  }

L58_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r24 = dyn __4(vnum17, 1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_vnum17_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(c21, r24)
  // L11(c21, r24)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r24_;
  goto L11_;

L59_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L11(c16, dx8)
  // L11(c16, dx8)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L11_;

L60_:;
  // vnum18 = ld vnum
  Rsh_Fir_reg_vnum18_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L61() else D13()
  // L61()
  goto L61_;

D13_:;
  // deopt 64 [c23, c24, vnum18]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_vnum18_;
  Rsh_Fir_deopt(64, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L61_:;
  // vnum19 = force? vnum18
  Rsh_Fir_reg_vnum19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnum18_);
  // checkMissing(vnum19)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_vnum19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(vnum19)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_vnum19_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c29 then L62() else L63(c23, c24, vnum19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L62()
    goto L62_;
  } else {
  // L63(c23, c24, vnum19)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c24_;
    Rsh_Fir_reg_vnum21_ = Rsh_Fir_reg_vnum19_;
    goto L63_;
  }

L62_:;
  // dr10 = tryDispatchBuiltin.1("[", vnum19)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_vnum19_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc5 then L64() else L63(c23, c24, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L64()
    goto L64_;
  } else {
  // L63(c23, c24, dr10)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c24_;
    Rsh_Fir_reg_vnum21_ = Rsh_Fir_reg_dr10_;
    goto L63_;
  }

L63_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r26 = dyn __5(vnum21, 2)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_vnum21_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(c32, c33, r26)
  // L13(c32, c33, r26)
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r26_;
  goto L13_;

L64_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L13(c23, c24, dx10)
  // L13(c23, c24, dx10)
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L13_;

L67_:;
  // RNGkind1 = ldf RNGkind
  Rsh_Fir_reg_RNGkind1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L68() else D14()
  // L68()
  goto L68_;

D14_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // r28 = dyn RNGkind1("Marsaglia-Multicarry", "Buggy Kinderman-Ramage", "Rounding")
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_RNGkind1_, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L69() else D15()
  // L69()
  goto L69_;

D15_:;
  // deopt 78 [r28]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L69_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r28
  return Rsh_Fir_reg_r28_;

D16_:;
  // deopt 79 [vnum22]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_vnum22_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L71_:;
  // vnum23 = force? vnum22
  Rsh_Fir_reg_vnum23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnum22_);
  // checkMissing(vnum23)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_vnum23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(vnum23)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_vnum23_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c46 then L72() else L73(vnum23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L72()
    goto L72_;
  } else {
  // L73(vnum23)
    Rsh_Fir_reg_vnum25_ = Rsh_Fir_reg_vnum23_;
    goto L73_;
  }

L72_:;
  // dr12 = tryDispatchBuiltin.1("[", vnum23)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_vnum23_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc6 then L74() else L73(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L74()
    goto L74_;
  } else {
  // L73(dr12)
    Rsh_Fir_reg_vnum25_ = Rsh_Fir_reg_dr12_;
    goto L73_;
  }

L73_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r29 = dyn __6(vnum25, 1)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_vnum25_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r29)
  // L15(r29)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r29_;
  goto L15_;

L74_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L15(dx12)
  // L15(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L15_;

L75_:;
  // vnum26 = ld vnum
  Rsh_Fir_reg_vnum26_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L76() else D17()
  // L76()
  goto L76_;

D17_:;
  // deopt 86 [c47, vnum26]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_vnum26_;
  Rsh_Fir_deopt(86, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L76_:;
  // vnum27 = force? vnum26
  Rsh_Fir_reg_vnum27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnum26_);
  // checkMissing(vnum27)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_vnum27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(vnum27)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_vnum27_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c50 then L77() else L78(c47, vnum27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L77()
    goto L77_;
  } else {
  // L78(c47, vnum27)
    Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c47_;
    Rsh_Fir_reg_vnum29_ = Rsh_Fir_reg_vnum27_;
    goto L78_;
  }

L77_:;
  // dr14 = tryDispatchBuiltin.1("[", vnum27)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_vnum27_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc7 then L79() else L78(c47, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L79()
    goto L79_;
  } else {
  // L78(c47, dr14)
    Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c47_;
    Rsh_Fir_reg_vnum29_ = Rsh_Fir_reg_dr14_;
    goto L78_;
  }

L78_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r31 = dyn __7(vnum29, 1)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_vnum29_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L17(c52, r31)
  // L17(c52, r31)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c52_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r31_;
  goto L17_;

L79_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L17(c47, dx14)
  // L17(c47, dx14)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L17_;

L80_:;
  // vnum30 = ld vnum
  Rsh_Fir_reg_vnum30_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L81() else D18()
  // L81()
  goto L81_;

D18_:;
  // deopt 93 [c54, c55, vnum30]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c54_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_c55_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_vnum30_;
  Rsh_Fir_deopt(93, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L81_:;
  // vnum31 = force? vnum30
  Rsh_Fir_reg_vnum31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vnum30_);
  // checkMissing(vnum31)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_vnum31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c60 = `is.object`(vnum31)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_vnum31_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c60 then L82() else L83(c54, c55, vnum31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L82()
    goto L82_;
  } else {
  // L83(c54, c55, vnum31)
    Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c54_;
    Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c55_;
    Rsh_Fir_reg_vnum33_ = Rsh_Fir_reg_vnum31_;
    goto L83_;
  }

L82_:;
  // dr16 = tryDispatchBuiltin.1("[", vnum31)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_vnum31_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc8 then L84() else L83(c54, c55, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L84()
    goto L84_;
  } else {
  // L83(c54, c55, dr16)
    Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c54_;
    Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c55_;
    Rsh_Fir_reg_vnum33_ = Rsh_Fir_reg_dr16_;
    goto L83_;
  }

L83_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r33 = dyn __8(vnum33, 2)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_vnum33_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L19(c63, c64, r33)
  // L19(c63, c64, r33)
  Rsh_Fir_reg_c67_ = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_reg_c64_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r33_;
  goto L19_;

L84_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L19(c54, c55, dx16)
  // L19(c54, c55, dx16)
  Rsh_Fir_reg_c67_ = Rsh_Fir_reg_c54_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_reg_c55_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L19_;

L87_:;
  // RNGkind2 = ldf RNGkind
  Rsh_Fir_reg_RNGkind2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L88() else D19()
  // L88()
  goto L88_;

D19_:;
  // deopt 103 []
  Rsh_Fir_deopt(103, 0, NULL, CCP, RHO);
  return R_NilValue;

L88_:;
  // r35 = dyn RNGkind2("Mersenne-Twister", "Inversion", "Rounding")
  SEXP Rsh_Fir_array_args96[3];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args96[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_RNGkind2_, 3, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L89() else D20()
  // L89()
  goto L89_;

D20_:;
  // deopt 107 [r35]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L89_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r35
  return Rsh_Fir_reg_r35_;

D21_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // r36 = dyn RNGkind3("Mersenne-Twister", "Inversion", "Rejection")
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args97[2] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_RNGkind3_, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L92() else D22()
  // L92()
  goto L92_;

D22_:;
  // deopt 113 [r36]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L92_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_user_promise_inner3953463003_(SEXP CCP, SEXP RHO) {
  // sym1 = ldf `as.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf `as.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // vstr1 = ld vstr
  Rsh_Fir_reg_vstr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // vstr2 = force? vstr1
  Rsh_Fir_reg_vstr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vstr1_);
  // checkMissing(vstr2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_vstr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r4 = dyn as_character(vstr2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_vstr2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base1(<sym vstr>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
