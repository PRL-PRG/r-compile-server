#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner838928092_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner838928092_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner838928092_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner838928092
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner838928092_, RHO, CCP);
  // st `[[<-.POSIXlt` = r
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
SEXP Rsh_Fir_user_function_inner838928092_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner838928092 dynamic dispatch ([x, i, value])

  return Rsh_Fir_user_version_inner838928092_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner838928092_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner838928092 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner838928092/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_oldClass;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_nms;
  SEXP Rsh_Fir_reg_nms1_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_nms4_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_nms5_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_nms8_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_nms9_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_nms11_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_as_POSIXlt;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_unCfillPOSIXlt;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_value3_;
  SEXP Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_l16_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_i29_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_l18_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_i31_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_l20_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_i33_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_l22_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_i34_;
  SEXP Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_i37_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_l24_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg_i39_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_____2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_cl;
  SEXP Rsh_Fir_reg_cl1_;
  SEXP Rsh_Fir_reg_l25_;
  SEXP Rsh_Fir_reg_class__1_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_i = PARAMS[1];
  Rsh_Fir_reg_value = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf oldClass
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf oldClass in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L0_:;
  // st cl = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L24() else D2()
  // L24()
  goto L24_;

L1_:;
  // r7 = `!`(r5)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args1);
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c then L28() else L2(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L28()
    goto L28_;
  } else {
  // L2(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L2_;
  }

L2_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c10 then L33() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L33()
    goto L33_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // c7 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // c8 = `&&`(c5, c7)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args5);
  // goto L2(c8)
  // L2(c8)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c8_;
  goto L2_;

L4_:;
  // goto L11()
  // L11()
  goto L11_;

L5_:;
  // st nms = r11
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard4 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L6_:;
  // s = toForSeq(r15)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args8);
  // i3 = 0
  Rsh_Fir_reg_i3_ = Rsh_const(CCP, 9);
  // goto L7(i3)
  // L7(i3)
  Rsh_Fir_reg_i4_ = Rsh_Fir_reg_i3_;
  goto L7_;

L7_:;
  // i5 = `+`.1(i4, 1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i5_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // c12 = `<`.1(l1, i5)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_i5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if c12 then L46() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L46()
    goto L46_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L52() else D11()
  // L52()
  goto L52_;

L9_:;
  // st x = dx5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L7(i15)
  // L7(i15)
  Rsh_Fir_reg_i4_ = Rsh_Fir_reg_i15_;
  goto L7_;

L10_:;
  // x9 = `[[`(s, i5, NULL, TRUE)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_i5_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x9_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args11);
  // st n = x9
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x9_, RHO);
  (void)(Rsh_Fir_reg_x9_);
  // nms = ld nms
  Rsh_Fir_reg_nms = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L47() else D9()
  // L47()
  goto L47_;

L11_:;
  // sym5 = ldf unCfillPOSIXlt
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base5 = ldf unCfillPOSIXlt in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard5 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L12_:;
  // st value = r21
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard6 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L13_:;
  // s1 = toForSeq(r26)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // l11 = length(s1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l11_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args15);
  // i17 = 0
  Rsh_Fir_reg_i17_ = Rsh_const(CCP, 9);
  // goto L14(i17)
  // L14(i17)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i17_;
  goto L14_;

L14_:;
  // i19 = `+`.1(i18, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i19_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // c15 = `<`.1(l11, i19)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if c15 then L68() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L68()
    goto L68_;
  } else {
  // L19()
    goto L19_;
  }

L15_:;
  // l12 = ld x
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c17 = `is.object`(l12)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args18);
  // if c17 then L74() else L75(i25, dx7, l12, dx7, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L74()
    goto L74_;
  } else {
  // L75(i25, dx7, l12, dx7, l12)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l12_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l12_;
    goto L75_;
  }

L16_:;
  // c18 = `is.object`(dx17)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args19);
  // if c18 then L78() else L79(i29, dx15, l18, dx17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L78()
    goto L78_;
  } else {
  // L79(i29, dx15, l18, dx17)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx17_;
    goto L79_;
  }

L17_:;
  // c19 = `is.object`(l22)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args20);
  // if c19 then L82() else L83(i33, dx24, l22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L82()
    goto L82_;
  } else {
  // L83(i33, dx24, l22)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx24_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
    goto L83_;
  }

L18_:;
  // st x = dx31
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // goto L14(i39)
  // L14(i39)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i39_;
  goto L14_;

L19_:;
  // x12 = `[[`(s1, i19, NULL, TRUE)
  SEXP Rsh_Fir_array_args21[4];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x12_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args21);
  // st n = x12
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x12_, RHO);
  (void)(Rsh_Fir_reg_x12_);
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L69() else D19()
  // L69()
  goto L69_;

L20_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D0()
  // L22()
  goto L22_;

L21_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn oldClass(x2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L23() else D1()
  // L23()
  goto L23_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 10 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_const(CCP, 12);
  Rsh_Fir_deopt(10, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L24_:;
  // r3 = dyn class__(l, NULL, NULL)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

D3_:;
  // deopt 12 [NULL, r3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // st x = r3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard1 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r6 = dyn missing(<sym i>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L27_:;
  // r4 = dyn base1(<sym i>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

L28_:;
  // sym2 = ldf `is.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf `is.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

L30_:;
  // r8 = dyn base2(<sym i>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(c, r8)
  // L3(c, r8)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D4_:;
  // deopt 19 [c, i1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c6 = `is.character`(i2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args32);
  // goto L3(c, c6)
  // L3(c, c6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c6_;
  goto L3_;

L33_:;
  // sym3 = ldf names
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard3 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D5()
  // L36()
  goto L36_;

L35_:;
  // r10 = dyn base3(<lang `$`(x, year)>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L5_;

D5_:;
  // deopt 25 [x3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(x4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args36);
  // if c11 then L38() else L39(x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L38()
    goto L38_;
  } else {
  // L39(x4)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    goto L39_;
  }

L37_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r13 = dyn names(dx1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

L38_:;
  // dr = tryDispatchBuiltin.1("$", x4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L40() else L39(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L40()
    goto L40_;
  } else {
  // L39(dr)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_dr;
    goto L39_;
  }

L39_:;
  // r12 = `$`(x6, <sym year>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args40);
  // goto L37(r12)
  // L37(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L37_;

L40_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L37(dx)
  // L37(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L37_;

D6_:;
  // deopt 29 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r13_;
  goto L5_;

L42_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

L43_:;
  // r14 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L6_;

D7_:;
  // deopt 33 [x7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r16 = dyn names1(x8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

D8_:;
  // deopt 36 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L6_;

L46_:;
  // goto L11()
  // L11()
  goto L11_;

D9_:;
  // deopt 37 [i5, nms]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i5_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_nms;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L47_:;
  // nms1 = force? nms
  Rsh_Fir_reg_nms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms);
  // checkMissing(nms1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_nms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c13 = `is.object`(l2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args46);
  // if c13 then L48() else L49(i5, nms1, l2, nms1, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L48()
    goto L48_;
  } else {
  // L49(i5, nms1, l2, nms1, l2)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i5_;
    Rsh_Fir_reg_nms4_ = Rsh_Fir_reg_nms1_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_nms5_ = Rsh_Fir_reg_nms1_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l2_;
    goto L49_;
  }

L48_:;
  // dr2 = tryDispatchBuiltin.1("[[", l2)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc1 then L50() else L49(i5, nms1, l2, nms1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L50()
    goto L50_;
  } else {
  // L49(i5, nms1, l2, nms1, dr2)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i5_;
    Rsh_Fir_reg_nms4_ = Rsh_Fir_reg_nms1_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_nms5_ = Rsh_Fir_reg_nms1_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr2_;
    goto L49_;
  }

L49_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L51() else D10()
  // L51()
  goto L51_;

L50_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L8(i5, nms1, l2, nms1, dx2)
  // L8(i5, nms1, l2, nms1, dx2)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i5_;
  Rsh_Fir_reg_nms8_ = Rsh_Fir_reg_nms1_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_nms9_ = Rsh_Fir_reg_nms1_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

D10_:;
  // deopt 41 [i9, nms4, l5, nms5, l6, n]
  SEXP Rsh_Fir_array_deopt_stack10[6];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_nms4_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_nms5_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack10[5] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(41, 6, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L51_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r17 = dyn __(l6, n1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(i9, nms4, l5, nms5, r17)
  // L8(i9, nms4, l5, nms5, r17)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_nms8_ = Rsh_Fir_reg_nms4_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_nms9_ = Rsh_Fir_reg_nms5_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r17_;
  goto L8_;

D11_:;
  // deopt 45 [i11, nms8, l8, dx3, nms9]
  SEXP Rsh_Fir_array_deopt_stack11[5];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_nms8_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack11[4] = Rsh_Fir_reg_nms9_;
  Rsh_Fir_deopt(45, 5, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L52_:;
  // r18 = dyn names__(dx3, NULL, nms9)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_nms9_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

D12_:;
  // deopt 47 [i11, nms8, l8, r18]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_nms8_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(47, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L53_:;
  // c14 = `is.object`(l8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args52);
  // if c14 then L54() else L55(i11, nms8, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L54()
    goto L54_;
  } else {
  // L55(i11, nms8, l8)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_nms11_ = Rsh_Fir_reg_nms8_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L55_;
  }

L54_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l8, r18)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args53[2] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args53);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc2 then L56() else L55(i11, nms8, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L56()
    goto L56_;
  } else {
  // L55(i11, nms8, dr4)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_nms11_ = Rsh_Fir_reg_nms8_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr4_;
    goto L55_;
  }

L55_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

L56_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L9(i11, dx4)
  // L9(i11, dx4)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L9_;

D13_:;
  // deopt 48 [i13, nms11, l10, r18, n2]
  SEXP Rsh_Fir_array_deopt_stack13[5];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_nms11_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack13[4] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(48, 5, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L57_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r19 = dyn ____(l10, r18, n3)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(i13, r19)
  // L9(i13, r19)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r19_;
  goto L9_;

L59_:;
  // as_POSIXlt = ldf `as.POSIXlt`
  Rsh_Fir_reg_as_POSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L61() else D14()
  // L61()
  goto L61_;

L60_:;
  // r20 = dyn base5(<lang as.POSIXlt(value)>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L12(r20)
  // L12(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L12_;

D14_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p = prom<V +>{
  //   value1 = ld value;
  //   value2 = force? value1;
  //   checkMissing(value2);
  //   return value2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner838928092_, 0, NULL, CCP, RHO);
  // r23 = dyn as_POSIXlt(p)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXlt, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

D15_:;
  // deopt 62 [r23]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L62_:;
  // unCfillPOSIXlt = ldf unCfillPOSIXlt in base
  Rsh_Fir_reg_unCfillPOSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r24 = dyn unCfillPOSIXlt(r23)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unCfillPOSIXlt, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L63() else D16()
  // L63()
  goto L63_;

D16_:;
  // deopt 64 [r24]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L12(r24)
  // L12(r24)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r24_;
  goto L12_;

L64_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L66() else D17()
  // L66()
  goto L66_;

L65_:;
  // r25 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r25)
  // L13(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L13_;

D17_:;
  // deopt 68 [x10]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L66_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r27 = dyn names2(x11)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L67() else D18()
  // L67()
  goto L67_;

D18_:;
  // deopt 71 [r27]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L13(r27)
  // L13(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L13_;

L68_:;
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L86() else D24()
  // L86()
  goto L86_;

D19_:;
  // deopt 72 [i19, value3]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L69_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(value4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args65);
  // if c16 then L70() else L71(i19, value4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L70()
    goto L70_;
  } else {
  // L71(i19, value4)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_value6_ = Rsh_Fir_reg_value4_;
    goto L71_;
  }

L70_:;
  // dr6 = tryDispatchBuiltin.1("[[", value4)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_value4_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc3 then L72() else L71(i19, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L72()
    goto L72_;
  } else {
  // L71(i19, dr6)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_value6_ = Rsh_Fir_reg_dr6_;
    goto L71_;
  }

L71_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

L72_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L15(i19, dx6)
  // L15(i19, dx6)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L15_;

D20_:;
  // deopt 74 [i23, value6, n4]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_value6_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L73_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r28 = dyn __1(value6, n5)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_value6_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(i23, r28)
  // L15(i23, r28)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r28_;
  goto L15_;

L74_:;
  // dr8 = tryDispatchBuiltin.1("[[", l12)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc4 then L76() else L75(i25, dx7, l12, dx7, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L76()
    goto L76_;
  } else {
  // L75(i25, dx7, l12, dx7, dr8)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l12_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_dr8_;
    goto L75_;
  }

L75_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L77() else D21()
  // L77()
  goto L77_;

L76_:;
  // dx14 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L16(i25, dx7, l12, dx7, dx14)
  // L16(i25, dx7, l12, dx7, dx14)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx14_;
  goto L16_;

D21_:;
  // deopt 79 [i27, dx10, l15, dx11, l16, n6]
  SEXP Rsh_Fir_array_deopt_stack20[6];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack20[3] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack20[4] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_deopt_stack20[5] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(79, 6, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L77_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r29 = dyn __2(l16, n7)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L16(i27, dx10, l15, dx11, r29)
  // L16(i27, dx10, l15, dx11, r29)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx10_;
  Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r29_;
  goto L16_;

L78_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", dx17, dx16)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args74[2] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args74);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc5 then L80() else L79(i29, dx15, l18, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L80()
    goto L80_;
  } else {
  // L79(i29, dx15, l18, dr10)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dr10_;
    goto L79_;
  }

L79_:;
  // i34 = ld i
  Rsh_Fir_reg_i34_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L81() else D22()
  // L81()
  goto L81_;

L80_:;
  // dx23 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L17(i29, dx15, l18, dx23)
  // L17(i29, dx15, l18, dx23)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
  goto L17_;

D22_:;
  // deopt 83 [i31, dx20, l20, dx21, dx16, i34]
  SEXP Rsh_Fir_array_deopt_stack21[6];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack21[4] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack21[5] = Rsh_Fir_reg_i34_;
  Rsh_Fir_deopt(83, 6, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L81_:;
  // i35 = force? i34
  Rsh_Fir_reg_i35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i34_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r30 = dyn ____1(dx21, dx16, i35)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L17(i31, dx20, l20, r30)
  // L17(i31, dx20, l20, r30)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r30_;
  goto L17_;

L82_:;
  // dr12 = tryDispatchBuiltin.0("[[<-", l22, dx25)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args78);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc6 then L84() else L83(i33, dx24, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L84()
    goto L84_;
  } else {
  // L83(i33, dx24, dr12)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx24_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_dr12_;
    goto L83_;
  }

L83_:;
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L85() else D23()
  // L85()
  goto L85_;

L84_:;
  // dx29 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L18(i33, dx29)
  // L18(i33, dx29)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
  goto L18_;

D23_:;
  // deopt 86 [i37, dx27, l24, dx25, n8]
  SEXP Rsh_Fir_array_deopt_stack22[5];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_deopt_stack22[4] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(86, 5, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L85_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r31 = dyn ____2(l24, dx25, n9)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L18(i37, r31)
  // L18(i37, r31)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r31_;
  goto L18_;

D24_:;
  // deopt 93 [cl]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_cl;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L86_:;
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // l25 = ld x
  Rsh_Fir_reg_l25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__1 = ldf `class<-`
  Rsh_Fir_reg_class__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L87() else D25()
  // L87()
  goto L87_;

D25_:;
  // deopt 96 [cl1, l25, cl1]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_deopt(96, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L87_:;
  // r32 = dyn class__1(l25, NULL, cl1)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_cl1_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__1_, 3, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L88() else D26()
  // L88()
  goto L88_;

D26_:;
  // deopt 98 [cl1, r32]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L88_:;
  // st x = r32
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L89() else D27()
  // L89()
  goto L89_;

D27_:;
  // deopt 100 [x13]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L89_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner838928092_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_value2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner838928092/0: expected 0, got %d", NCAPTURES);

  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return value2
  return Rsh_Fir_reg_value2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
