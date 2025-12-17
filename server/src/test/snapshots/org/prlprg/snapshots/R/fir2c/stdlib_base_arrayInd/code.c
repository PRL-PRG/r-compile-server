#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4012715982_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4012715982_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4012715982_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4012715982_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4012715982_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4012715982_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4012715982_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4012715982
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4012715982_, RHO, CCP);
  // st arrayInd = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner4012715982_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4012715982 dynamic dispatch ([ind, `.dim`, `.dimnames`, useNames])

  return Rsh_Fir_user_version_inner4012715982_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4012715982_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4012715982 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner4012715982/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ind;
  SEXP Rsh_Fir_reg__dim;
  SEXP Rsh_Fir_reg__dimnames;
  SEXP Rsh_Fir_reg_useNames;
  SEXP Rsh_Fir_reg__dimnames_isMissing;
  SEXP Rsh_Fir_reg__dimnames_orDefault;
  SEXP Rsh_Fir_reg_useNames_isMissing;
  SEXP Rsh_Fir_reg_useNames_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_reg_ind2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg__dim1_;
  SEXP Rsh_Fir_reg__dim2_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_reg_ind4_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_wh1_;
  SEXP Rsh_Fir_reg_wh2_;
  SEXP Rsh_Fir_reg__dim3_;
  SEXP Rsh_Fir_reg__dim4_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg__dim6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_useNames1_;
  SEXP Rsh_Fir_reg_useNames2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg__dimnames1_;
  SEXP Rsh_Fir_reg__dimnames2_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg__dimnames4_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_ind5_;
  SEXP Rsh_Fir_reg_ind6_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg__dimnames5_;
  SEXP Rsh_Fir_reg__dimnames6_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_nd;
  SEXP Rsh_Fir_reg_nd1_;
  SEXP Rsh_Fir_reg_nd2_;
  SEXP Rsh_Fir_reg_rank;
  SEXP Rsh_Fir_reg_rank1_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_rank6_;
  SEXP Rsh_Fir_reg_rank7_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_rank8_;
  SEXP Rsh_Fir_reg_rank9_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_denom;
  SEXP Rsh_Fir_reg_denom1_;
  SEXP Rsh_Fir_reg__dim7_;
  SEXP Rsh_Fir_reg__dim8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_denom3_;
  SEXP Rsh_Fir_reg__dim10_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_denom5_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_wh3_;
  SEXP Rsh_Fir_reg_wh4_;
  SEXP Rsh_Fir_reg_denom6_;
  SEXP Rsh_Fir_reg_denom7_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_nextd1_;
  SEXP Rsh_Fir_reg_nextd2_;
  SEXP Rsh_Fir_reg__dim11_;
  SEXP Rsh_Fir_reg__dim12_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg__dim14_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_storage_mode__;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_ind9_;
  SEXP Rsh_Fir_reg_ind10_;

  // Bind parameters
  Rsh_Fir_reg_ind = PARAMS[0];
  Rsh_Fir_reg__dim = PARAMS[1];
  Rsh_Fir_reg__dimnames = PARAMS[2];
  Rsh_Fir_reg_useNames = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ind = ind
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ind, RHO);
  (void)(Rsh_Fir_reg_ind);
  // st `.dim` = _dim
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg__dim, RHO);
  (void)(Rsh_Fir_reg__dim);
  // _dimnames_isMissing = missing.0(_dimnames)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg__dimnames;
  Rsh_Fir_reg__dimnames_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if _dimnames_isMissing then L0(NULL) else L0(_dimnames)
  if (Rsh_Fir_is_true(Rsh_Fir_reg__dimnames_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg__dimnames_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(_dimnames)
    Rsh_Fir_reg__dimnames_orDefault = Rsh_Fir_reg__dimnames;
    goto L0_;
  }

L0_:;
  // st `.dimnames` = _dimnames_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg__dimnames_orDefault, RHO);
  (void)(Rsh_Fir_reg__dimnames_orDefault);
  // useNames_isMissing = missing.0(useNames)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_useNames;
  Rsh_Fir_reg_useNames_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if useNames_isMissing then L1(FALSE) else L1(useNames)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_useNames_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_useNames_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(useNames)
    Rsh_Fir_reg_useNames_orDefault = Rsh_Fir_reg_useNames;
    goto L1_;
  }

L1_:;
  // st useNames = useNames_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_useNames_orDefault, RHO);
  (void)(Rsh_Fir_reg_useNames_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L2_:;
  // st m = r1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L3_:;
  // st rank = r4
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // ind3 = ld ind
  Rsh_Fir_reg_ind3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

L4_:;
  // __1 = ldf `%%` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r12 = dyn __1(wh2, dx1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_wh2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

L5_:;
  // goto L16(NULL)
  // L16(NULL)
  Rsh_Fir_reg_r37_ = Rsh_const(CCP, 3);
  goto L16_;

L6_:;
  // goto L16(r15)
  // L16(r15)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r15_;
  goto L16_;

L7_:;
  // c3 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args5);
  // if c3 then L47() else L48(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L47()
    goto L47_;
  } else {
  // L48(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L48_;
  }

L8_:;
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L9_:;
  // c4 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c4 then L61() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L61()
    goto L61_;
  } else {
  // L12()
    goto L12_;
  }

L10_:;
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r26 = dyn any(r21)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L60() else D14()
  // L60()
  goto L60_;

L11_:;
  // st nd = r23
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r25 = dyn nzchar(r23)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L59() else D13()
  // L59()
  goto L59_;

L12_:;
  // rank = ld rank
  Rsh_Fir_reg_rank = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L64() else D16()
  // L64()
  goto L64_;

L13_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r36 = dyn list(dx7, nd2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_nd2_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L72() else D20()
  // L72()
  goto L72_;

L14_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L70() else D18()
  // L70()
  goto L70_;

L15_:;
  // goto L13(r29)
  // L13(r29)
  Rsh_Fir_reg_nd2_ = Rsh_Fir_reg_r29_;
  goto L13_;

L16_:;
  // st dnms = r37
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L74() else D21()
  // L74()
  goto L74_;

L17_:;
  // goto L23()
  // L23()
  goto L23_;

L18_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // c8 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if c8 then L79() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L79()
    goto L79_;
  } else {
  // L22()
    goto L22_;
  }

L19_:;
  // r47 = `*`(denom5, dx9)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_denom5_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args13);
  // st denom = r47
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // wh3 = ld wh1
  Rsh_Fir_reg_wh3_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L86() else D28()
  // L86()
  goto L86_;

L20_:;
  // __6 = ldf `%%` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r54 = dyn __6(nextd2, dx11)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_nextd2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L95() else D34()
  // L95()
  goto L95_;

L21_:;
  // st ind = dx13
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L18(i20)
  // L18(i20)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i20_;
  goto L18_;

L22_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args15[4];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args15);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // denom = ld denom
  Rsh_Fir_reg_denom = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L80() else D25()
  // L80()
  goto L80_;

L23_:;
  // l4 = ld ind
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L101() else D36()
  // L101()
  goto L101_;

L24_:;
  // ind1 = ld ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D0()
  // L26()
  goto L26_;

L25_:;
  // r = dyn base(<sym ind>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [ind1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L26_:;
  // ind2 = force? ind1
  Rsh_Fir_reg_ind2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind1_);
  // checkMissing(ind2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_ind2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn length(ind2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_ind2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L27() else D1()
  // L27()
  goto L27_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L28_:;
  // _dim1 = ld `.dim`
  Rsh_Fir_reg__dim1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L30() else D2()
  // L30()
  goto L30_;

L29_:;
  // r3 = dyn base1(<sym .dim>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D2_:;
  // deopt 9 [_dim1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg__dim1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L30_:;
  // _dim2 = force? _dim1
  Rsh_Fir_reg__dim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__dim1_);
  // checkMissing(_dim2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg__dim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r5 = dyn length1(_dim2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg__dim2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L3_;

D4_:;
  // deopt 14 [ind3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L32_:;
  // ind4 = force? ind3
  Rsh_Fir_reg_ind4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind3_);
  // checkMissing(ind4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_ind4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // r6 = `-`(ind4, 1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args23);
  // st wh1 = r6
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // wh1 = ld wh1
  Rsh_Fir_reg_wh1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

D5_:;
  // deopt 21 [1, wh1]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_wh1_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // wh2 = force? wh1
  Rsh_Fir_reg_wh2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wh1_);
  // checkMissing(wh2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_wh2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // _dim3 = ld `.dim`
  Rsh_Fir_reg__dim3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

D6_:;
  // deopt 23 [1, _dim3]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg__dim3_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // _dim4 = force? _dim3
  Rsh_Fir_reg__dim4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__dim3_);
  // checkMissing(_dim4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__dim4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_dim4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg__dim4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args26);
  // if c then L35() else L36(1, _dim4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L35()
    goto L35_;
  } else {
  // L36(1, _dim4)
    Rsh_Fir_reg_r8_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg__dim6_ = Rsh_Fir_reg__dim4_;
    goto L36_;
  }

L35_:;
  // dr = tryDispatchBuiltin.1("[", _dim4)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg__dim4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc then L37() else L36(1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L37()
    goto L37_;
  } else {
  // L36(1, dr)
    Rsh_Fir_reg_r8_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg__dim6_ = Rsh_Fir_reg_dr;
    goto L36_;
  }

L36_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r11 = dyn __(_dim6, 1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg__dim6_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r8, r11)
  // L4(r8, r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L4_;

L37_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L4(1, dx)
  // L4(1, dx)
  Rsh_Fir_reg_r10_ = Rsh_const(CCP, 18);
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D7_:;
  // deopt 29 [r10, r12]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // r13 = `+`(r10, r12)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args31);
  // st ind = r13
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // useNames1 = ld useNames
  Rsh_Fir_reg_useNames1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

D8_:;
  // deopt 32 [useNames1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_useNames1_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // useNames2 = force? useNames1
  Rsh_Fir_reg_useNames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useNames1_);
  // checkMissing(useNames2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_useNames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(useNames2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_useNames2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c1 then L40() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L40()
    goto L40_;
  } else {
  // L5()
    goto L5_;
  }

L40_:;
  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard2 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L41_:;
  // _dimnames1 = ld `.dimnames`
  Rsh_Fir_reg__dimnames1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L42_:;
  // r14 = dyn base2(<lang `[`(`[[`(.dimnames, 1), ind)>, <lang if(any(nzchar(`<-`(nd, names(.dimnames)))), nd, if(`==`(rank, 2), c("row", "col"), paste0("dim", seq_len(rank))))>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L6_;

D9_:;
  // deopt 36 [_dimnames1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg__dimnames1_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L43_:;
  // _dimnames2 = force? _dimnames1
  Rsh_Fir_reg__dimnames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__dimnames1_);
  // checkMissing(_dimnames2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg__dimnames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(_dimnames2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg__dimnames2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args37);
  // if c2 then L44() else L45(_dimnames2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L44()
    goto L44_;
  } else {
  // L45(_dimnames2)
    Rsh_Fir_reg__dimnames4_ = Rsh_Fir_reg__dimnames2_;
    goto L45_;
  }

L44_:;
  // dr2 = tryDispatchBuiltin.1("[[", _dimnames2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg__dimnames2_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc1 then L46() else L45(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr2)
    Rsh_Fir_reg__dimnames4_ = Rsh_Fir_reg_dr2_;
    goto L45_;
  }

L45_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r16 = dyn __2(_dimnames4, 1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg__dimnames4_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r16_;
  goto L7_;

L46_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L7(dx2)
  // L7(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

L47_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc2 then L49() else L48(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L49()
    goto L49_;
  } else {
  // L48(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L48_;
  }

L48_:;
  // ind5 = ld ind
  Rsh_Fir_reg_ind5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

L49_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L8(dx6)
  // L8(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L8_;

D10_:;
  // deopt 41 [dx5, ind5]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L50_:;
  // ind6 = force? ind5
  Rsh_Fir_reg_ind6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind5_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r17 = dyn __3(dx5, ind6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_ind6_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r17_;
  goto L8_;

L51_:;
  // sym4 = ldf nzchar
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base4 = ldf nzchar in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard4 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L52_:;
  // r18 = dyn base3(<lang nzchar(`<-`(nd, names(.dimnames)))>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

L53_:;
  // sym5 = ldf names
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base5 = ldf names in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard5 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L54_:;
  // r20 = dyn base4(<lang `<-`(nd, names(.dimnames))>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L10_;

L55_:;
  // _dimnames5 = ld `.dimnames`
  Rsh_Fir_reg__dimnames5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L57() else D11()
  // L57()
  goto L57_;

L56_:;
  // r22 = dyn base5(<sym .dimnames>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L11_;

D11_:;
  // deopt 50 [_dimnames5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg__dimnames5_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L57_:;
  // _dimnames6 = force? _dimnames5
  Rsh_Fir_reg__dimnames6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__dimnames5_);
  // checkMissing(_dimnames6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg__dimnames6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r24 = dyn names(_dimnames6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg__dimnames6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L58() else D12()
  // L58()
  goto L58_;

D12_:;
  // deopt 53 [r24]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L11_;

D13_:;
  // deopt 56 [r25]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L10(r25)
  // L10(r25)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r25_;
  goto L10_;

D14_:;
  // deopt 58 [r26]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L9(r26)
  // L9(r26)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r26_;
  goto L9_;

L61_:;
  // nd = ld nd
  Rsh_Fir_reg_nd = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

D15_:;
  // deopt 59 [nd]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_nd;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L62_:;
  // nd1 = force? nd
  Rsh_Fir_reg_nd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nd);
  // checkMissing(nd1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_nd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // goto L13(nd1)
  // L13(nd1)
  Rsh_Fir_reg_nd2_ = Rsh_Fir_reg_nd1_;
  goto L13_;

D16_:;
  // deopt 61 [rank]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_rank;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L64_:;
  // rank1 = force? rank
  Rsh_Fir_reg_rank1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank);
  // checkMissing(rank1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_rank1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r27 = `==`(rank1, 2)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_rank1_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args55);
  // c5 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // if c5 then L65() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L65()
    goto L65_;
  } else {
  // L14()
    goto L14_;
  }

L65_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard6 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L66_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r30 = dyn c6("row", "col")
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L68() else D17()
  // L68()
  goto L68_;

L67_:;
  // r28 = dyn base6("row", "col")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(r28)
  // L15(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L15_;

D17_:;
  // deopt 70 [r30]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L15(r30)
  // L15(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L15_;

D18_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // p = prom<V +>{
  //   sym7 = ldf seq_len;
  //   base7 = ldf seq_len in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   rank2 = ld rank;
  //   rank3 = force? rank2;
  //   checkMissing(rank3);
  //   r33 = seq_len(rank3);
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base7(<sym rank>);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4012715982_, 0, NULL, CCP, RHO);
  // r35 = dyn paste0("dim", p)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L71() else D19()
  // L71()
  goto L71_;

D19_:;
  // deopt 75 [r35]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L13(r35)
  // L13(r35)
  Rsh_Fir_reg_nd2_ = Rsh_Fir_reg_r35_;
  goto L13_;

D20_:;
  // deopt 77 [r36]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L6(r36)
  // L6(r36)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r36_;
  goto L6_;

D21_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p1 = prom<V +>{
  //   ind7 = ld ind;
  //   ind8 = force? ind7;
  //   checkMissing(ind8);
  //   return ind8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4012715982_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4012715982_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   rank4 = ld rank;
  //   rank5 = force? rank4;
  //   checkMissing(rank5);
  //   return rank5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4012715982_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   dnms = ld dnms;
  //   dnms1 = force? dnms;
  //   checkMissing(dnms1);
  //   return dnms1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4012715982_4, 0, NULL, CCP, RHO);
  // r42 = dyn matrix[, nrow, ncol, dimnames](p1, p2, p3, p4)
  SEXP Rsh_Fir_array_args69[4];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args69[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 40);
  Rsh_Fir_array_arg_names21[3] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 4, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L75() else D22()
  // L75()
  goto L75_;

D22_:;
  // deopt 90 [r42]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L75_:;
  // st ind = r42
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // rank6 = ld rank
  Rsh_Fir_reg_rank6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L76() else D23()
  // L76()
  goto L76_;

D23_:;
  // deopt 92 [rank6]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_rank6_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L76_:;
  // rank7 = force? rank6
  Rsh_Fir_reg_rank7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank6_);
  // checkMissing(rank7)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_rank7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r43 = `>=`(rank7, 2)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_rank7_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args71);
  // c7 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // if c7 then L77() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L77()
    goto L77_;
  } else {
  // L17()
    goto L17_;
  }

L77_:;
  // st denom = 1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_const(CCP, 18), RHO);
  (void)(Rsh_const(CCP, 18));
  // rank8 = ld rank
  Rsh_Fir_reg_rank8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L78() else D24()
  // L78()
  goto L78_;

D24_:;
  // deopt 100 [2, rank8]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_rank8_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L78_:;
  // rank9 = force? rank8
  Rsh_Fir_reg_rank9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank8_);
  // checkMissing(rank9)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_rank9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // r44 = `:`(2, rank9)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_rank9_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args74);
  // s = toForSeq(r44)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args76);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 42);
  // goto L18(i)
  // L18(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L18_;

L79_:;
  // goto L23()
  // L23()
  goto L23_;

D25_:;
  // deopt 103 [i2, denom]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_denom;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L80_:;
  // denom1 = force? denom
  Rsh_Fir_reg_denom1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_denom);
  // checkMissing(denom1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_denom1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // _dim7 = ld `.dim`
  Rsh_Fir_reg__dim7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L81() else D26()
  // L81()
  goto L81_;

D26_:;
  // deopt 104 [i2, denom1, _dim7]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_denom1_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg__dim7_;
  Rsh_Fir_deopt(104, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L81_:;
  // _dim8 = force? _dim7
  Rsh_Fir_reg__dim8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__dim7_);
  // checkMissing(_dim8)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg__dim8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(_dim8)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg__dim8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args79);
  // if c9 then L82() else L83(i2, denom1, _dim8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L82()
    goto L82_;
  } else {
  // L83(i2, denom1, _dim8)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_denom3_ = Rsh_Fir_reg_denom1_;
    Rsh_Fir_reg__dim10_ = Rsh_Fir_reg__dim8_;
    goto L83_;
  }

L82_:;
  // dr6 = tryDispatchBuiltin.1("[", _dim8)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg__dim8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc3 then L84() else L83(i2, denom1, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L84()
    goto L84_;
  } else {
  // L83(i2, denom1, dr6)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_denom3_ = Rsh_Fir_reg_denom1_;
    Rsh_Fir_reg__dim10_ = Rsh_Fir_reg_dr6_;
    goto L83_;
  }

L83_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L85() else D27()
  // L85()
  goto L85_;

L84_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L19(i2, denom1, dx8)
  // L19(i2, denom1, dx8)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_denom5_ = Rsh_Fir_reg_denom1_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L19_;

D27_:;
  // deopt 106 [i6, denom3, _dim10, i9]
  SEXP Rsh_Fir_array_deopt_stack25[4];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_denom3_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg__dim10_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(106, 4, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L85_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // checkMissing(i10)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_i10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // r45 = `-`(i10, 1)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args84);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r46 = dyn __4(_dim10, r45)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg__dim10_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L19(i6, denom3, r46)
  // L19(i6, denom3, r46)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_denom5_ = Rsh_Fir_reg_denom3_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r46_;
  goto L19_;

D28_:;
  // deopt 114 [i8, wh3]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_wh3_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L86_:;
  // wh4 = force? wh3
  Rsh_Fir_reg_wh4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wh3_);
  // checkMissing(wh4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_wh4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // denom6 = ld denom
  Rsh_Fir_reg_denom6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L87() else D29()
  // L87()
  goto L87_;

D29_:;
  // deopt 116 [i8, denom6]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_denom6_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L87_:;
  // denom7 = force? denom6
  Rsh_Fir_reg_denom7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_denom6_);
  // checkMissing(denom7)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_denom7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%/%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r48 = dyn ___(wh4, denom7)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_wh4_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_denom7_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L88() else D30()
  // L88()
  goto L88_;

D30_:;
  // deopt 119 [i8, r48]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L88_:;
  // st nextd1 = r48
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // nextd1 = ld nextd1
  Rsh_Fir_reg_nextd1_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L89() else D31()
  // L89()
  goto L89_;

D31_:;
  // deopt 123 [i8, 1, nextd1]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_nextd1_;
  Rsh_Fir_deopt(123, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L89_:;
  // nextd2 = force? nextd1
  Rsh_Fir_reg_nextd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nextd1_);
  // checkMissing(nextd2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_nextd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // _dim11 = ld `.dim`
  Rsh_Fir_reg__dim11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L90() else D32()
  // L90()
  goto L90_;

D32_:;
  // deopt 125 [i8, 1, _dim11]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg__dim11_;
  Rsh_Fir_deopt(125, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L90_:;
  // _dim12 = force? _dim11
  Rsh_Fir_reg__dim12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__dim11_);
  // checkMissing(_dim12)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg__dim12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(_dim12)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg__dim12_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args91);
  // if c10 then L91() else L92(i8, 1, _dim12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L91()
    goto L91_;
  } else {
  // L92(i8, 1, _dim12)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_r50_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg__dim14_ = Rsh_Fir_reg__dim12_;
    goto L92_;
  }

L91_:;
  // dr8 = tryDispatchBuiltin.1("[", _dim12)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg__dim12_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc4 then L93() else L92(i8, 1, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L93()
    goto L93_;
  } else {
  // L92(i8, 1, dr8)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_r50_ = Rsh_const(CCP, 18);
    Rsh_Fir_reg__dim14_ = Rsh_Fir_reg_dr8_;
    goto L92_;
  }

L92_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L94() else D33()
  // L94()
  goto L94_;

L93_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L20(i8, 1, dx10)
  // L20(i8, 1, dx10)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r52_ = Rsh_const(CCP, 18);
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L20_;

D33_:;
  // deopt 127 [i12, r50, _dim14, i15]
  SEXP Rsh_Fir_array_deopt_stack31[4];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg__dim14_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(127, 4, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L94_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r53 = dyn __5(_dim14, i16)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg__dim14_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L20(i12, r50, r53)
  // L20(i12, r50, r53)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r53_;
  goto L20_;

D34_:;
  // deopt 131 [i14, r52, r54]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(131, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L95_:;
  // r55 = `+`(r52, r54)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args96);
  // l1 = ld ind
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c11 = `is.object`(l1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args97);
  // if c11 then L96() else L97(i14, r55, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L96()
    goto L96_;
  } else {
  // L97(i14, r55, l1)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L97_;
  }

L96_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l1, r55)
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args98[2] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args98);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc5 then L98() else L97(i14, r55, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L98()
    goto L98_;
  } else {
  // L97(i14, r55, dr10)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr10_;
    goto L97_;
  }

L97_:;
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L99() else D35()
  // L99()
  goto L99_;

L98_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L21(i14, dx12)
  // L21(i14, dx12)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L21_;

D35_:;
  // deopt 135 [i18, r57, l3, r55, i21]
  SEXP Rsh_Fir_array_deopt_stack33[5];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack33[4] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(135, 5, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L99_:;
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r60 = dyn ___1(l1, <missing>, i22, r55)
  SEXP Rsh_Fir_array_args101[4];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args101[2] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_args101[3] = Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L21(i18, r60)
  // L21(i18, r60)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r60_;
  goto L21_;

D36_:;
  // deopt 148 ["integer", l4, "integer"]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_const(CCP, 48);
  Rsh_Fir_deopt(148, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L101_:;
  // r61 = dyn storage_mode__(l4, NULL, "integer")
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args102[2] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L102() else D37()
  // L102()
  goto L102_;

D37_:;
  // deopt 150 ["integer", r61]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(150, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L102_:;
  // st ind = r61
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // ind9 = ld ind
  Rsh_Fir_reg_ind9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L103() else D38()
  // L103()
  goto L103_;

D38_:;
  // deopt 152 [ind9]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_ind9_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L103_:;
  // ind10 = force? ind9
  Rsh_Fir_reg_ind10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind9_);
  // checkMissing(ind10)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_ind10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ind10
  return Rsh_Fir_reg_ind10_;
}
SEXP Rsh_Fir_user_promise_inner4012715982_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_rank2_;
  SEXP Rsh_Fir_reg_rank3_;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4012715982/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf seq_len
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base7 = ldf seq_len in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // rank2 = ld rank
  Rsh_Fir_reg_rank2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // rank3 = force? rank2
  Rsh_Fir_reg_rank3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank2_);
  // checkMissing(rank3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_rank3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r33 = seq_len(rank3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_rank3_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args62);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base7(<sym rank>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4012715982_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ind7_;
  SEXP Rsh_Fir_reg_ind8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4012715982/0: expected 0, got %d", NCAPTURES);

  // ind7 = ld ind
  Rsh_Fir_reg_ind7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ind8 = force? ind7
  Rsh_Fir_reg_ind8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind7_);
  // checkMissing(ind8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_ind8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return ind8
  return Rsh_Fir_reg_ind8_;
}
SEXP Rsh_Fir_user_promise_inner4012715982_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4012715982/0: expected 0, got %d", NCAPTURES);

  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_inner4012715982_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rank4_;
  SEXP Rsh_Fir_reg_rank5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4012715982/0: expected 0, got %d", NCAPTURES);

  // rank4 = ld rank
  Rsh_Fir_reg_rank4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // rank5 = force? rank4
  Rsh_Fir_reg_rank5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank4_);
  // checkMissing(rank5)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_rank5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return rank5
  return Rsh_Fir_reg_rank5_;
}
SEXP Rsh_Fir_user_promise_inner4012715982_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dnms;
  SEXP Rsh_Fir_reg_dnms1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4012715982/0: expected 0, got %d", NCAPTURES);

  // dnms = ld dnms
  Rsh_Fir_reg_dnms = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // dnms1 = force? dnms
  Rsh_Fir_reg_dnms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dnms);
  // checkMissing(dnms1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dnms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return dnms1
  return Rsh_Fir_reg_dnms1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
