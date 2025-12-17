#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3577279877_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3577279877_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3577279877_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3577279877_19(SEXP CCP, SEXP RHO);
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
  // r = clos inner3577279877
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3577279877_, RHO, CCP);
  // st `.removeSuperClass` = r
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
SEXP Rsh_Fir_user_function_inner3577279877_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3577279877 dynamic dispatch ([class, superclass])

  return Rsh_Fir_user_version_inner3577279877_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3577279877_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3577279877 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3577279877/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_superclass;  // superclass
  SEXP Rsh_Fir_reg_getClassDef;  // getClassDef
  SEXP Rsh_Fir_reg_class1_;  // class1
  SEXP Rsh_Fir_reg_class2_;  // class2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_cdef;  // cdef
  SEXP Rsh_Fir_reg_cdef1_;  // cdef1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__deleteSuperClass;  // _deleteSuperClass
  SEXP Rsh_Fir_reg_cdef2_;  // cdef2
  SEXP Rsh_Fir_reg_cdef3_;  // cdef3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_superclass1_;  // superclass1
  SEXP Rsh_Fir_reg_superclass2_;  // superclass2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_newdef;  // newdef
  SEXP Rsh_Fir_reg_newdef1_;  // newdef1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg__cacheClass;  // _cacheClass
  SEXP Rsh_Fir_reg_class3_;  // class3
  SEXP Rsh_Fir_reg_class4_;  // class4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_newdef2_;  // newdef2
  SEXP Rsh_Fir_reg_newdef3_;  // newdef3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_signature;  // signature
  SEXP Rsh_Fir_reg_class5_;  // class5
  SEXP Rsh_Fir_reg_class6_;  // class6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_superclass3_;  // superclass3
  SEXP Rsh_Fir_reg_superclass4_;  // superclass4
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_existsMethod;  // existsMethod
  SEXP Rsh_Fir_reg_sig;  // sig
  SEXP Rsh_Fir_reg_sig1_;  // sig1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg__removeCachedMethod;  // _removeCachedMethod
  SEXP Rsh_Fir_reg_sig2_;  // sig2
  SEXP Rsh_Fir_reg_sig3_;  // sig3
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_existsMethod1_;  // existsMethod1
  SEXP Rsh_Fir_reg_sig4_;  // sig4
  SEXP Rsh_Fir_reg_sig5_;  // sig5
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg__removeCachedMethod1_;  // _removeCachedMethod1
  SEXP Rsh_Fir_reg_sig6_;  // sig6
  SEXP Rsh_Fir_reg_sig7_;  // sig7
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_findClass;  // findClass
  SEXP Rsh_Fir_reg_class7_;  // class7
  SEXP Rsh_Fir_reg_class8_;  // class8
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg__GlobalEnv;  // _GlobalEnv
  SEXP Rsh_Fir_reg__GlobalEnv1_;  // _GlobalEnv1
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_classMetaName;  // classMetaName
  SEXP Rsh_Fir_reg_class9_;  // class9
  SEXP Rsh_Fir_reg_class10_;  // class10
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_evv;  // evv
  SEXP Rsh_Fir_reg_evv1_;  // evv1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_mname;  // mname
  SEXP Rsh_Fir_reg_mname1_;  // mname1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg__deleteSuperClass1_;  // _deleteSuperClass1
  SEXP Rsh_Fir_reg_cdef4_;  // cdef4
  SEXP Rsh_Fir_reg_cdef5_;  // cdef5
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_superclass5_;  // superclass5
  SEXP Rsh_Fir_reg_superclass6_;  // superclass6
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_newdef4_;  // newdef4
  SEXP Rsh_Fir_reg_newdef5_;  // newdef5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_assignClassDef;  // assignClassDef
  SEXP Rsh_Fir_reg_class11_;  // class11
  SEXP Rsh_Fir_reg_class12_;  // class12
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_newdef6_;  // newdef6
  SEXP Rsh_Fir_reg_newdef7_;  // newdef7
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_where7_;  // where7
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_i20_;  // i20

  // Bind parameters
  Rsh_Fir_reg_class = PARAMS[0];
  Rsh_Fir_reg_superclass = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st class = class
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_class, RHO);
  (void)(Rsh_Fir_reg_class);
  // st superclass = superclass
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_superclass, RHO);
  (void)(Rsh_Fir_reg_superclass);
  // getClassDef = ldf getClassDef
  Rsh_Fir_reg_getClassDef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

L0_:;
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c1 then L23() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L23()
    goto L23_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // _deleteSuperClass = ldf `.deleteSuperClass`
  Rsh_Fir_reg__deleteSuperClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

L2_:;
  // signature = ldf signature
  Rsh_Fir_reg_signature = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

L3_:;
  // r10 = `!`(r9)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c3 then L30() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L30()
    goto L30_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L2()
  // L2()
  goto L2_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // existsMethod1 = ldf existsMethod
  Rsh_Fir_reg_existsMethod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L42() else D14()
  // L42()
  goto L42_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // findClass = ldf findClass
  Rsh_Fir_reg_findClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

L9_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c6 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c6 then L53() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L53()
    goto L53_;
  } else {
  // L17()
    goto L17_;
  }

L10_:;
  // r36 = `!`(r34)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c9 then L61() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L61()
    goto L61_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // st cdef = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c8 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L10(i11, c8)
  // L10(i11, c8)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_c8_;
  goto L10_;

L12_:;
  // goto L16(i7)
  // L16(i7)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i7_;
  goto L16_;

L13_:;
  // r42 = `!`(r41)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c11 then L67() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L67()
    goto L67_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L15(i16, NULL)
  // L15(i16, NULL)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r47_ = Rsh_const(CCP, 10);
  goto L15_;

L15_:;
  // goto L16(i19)
  // L16(i19)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i19_;
  goto L16_;

L16_:;
  // goto L9(i20)
  // L9(i20)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i20_;
  goto L9_;

L17_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // st where = x
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p = prom<V +>{
  //   class1 = ld class;
  //   class2 = force? class1;
  //   checkMissing(class2);
  //   return class2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_, CCP, RHO);
  // r1 = dyn getClassDef(p)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClassDef, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L19_:;
  // st cdef = r1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // cdef = ld cdef
  Rsh_Fir_reg_cdef = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L21_:;
  // r2 = dyn base(<sym cdef>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 6 [cdef]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_cdef;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L22_:;
  // cdef1 = force? cdef
  Rsh_Fir_reg_cdef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef);
  // checkMissing(cdef1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_cdef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c = `==`(cdef1, NULL)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_cdef1_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c;
  goto L0_;

L23_:;
  // goto L2()
  // L2()
  goto L2_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p1 = prom<V +>{
  //   cdef2 = ld cdef;
  //   cdef3 = force? cdef2;
  //   checkMissing(cdef3);
  //   return cdef3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_1, CCP, RHO);
  // p2 = prom<V +>{
  //   superclass1 = ld superclass;
  //   superclass2 = force? superclass1;
  //   checkMissing(superclass2);
  //   return superclass2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_2, CCP, RHO);
  // r7 = dyn _deleteSuperClass(p1, p2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__deleteSuperClass, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

D4_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // st newdef = r7
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // newdef = ld newdef
  Rsh_Fir_reg_newdef = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

L28_:;
  // r8 = dyn base1(<sym newdef>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D5_:;
  // deopt 18 [newdef]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_newdef;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // newdef1 = force? newdef
  Rsh_Fir_reg_newdef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdef);
  // checkMissing(newdef1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_newdef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c2 = `==`(newdef1, NULL)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_newdef1_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L3(c2)
  // L3(c2)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c2_;
  goto L3_;

L30_:;
  // _cacheClass = ldf `.cacheClass`
  Rsh_Fir_reg__cacheClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p3 = prom<V +>{
  //   class3 = ld class;
  //   class4 = force? class3;
  //   checkMissing(class4);
  //   return class4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_3, CCP, RHO);
  // p4 = prom<V +>{
  //   newdef2 = ld newdef;
  //   newdef3 = force? newdef2;
  //   checkMissing(newdef3);
  //   return newdef3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_4, CCP, RHO);
  // p5 = prom<V +>{
  //   where = ld where;
  //   where1 = force? where;
  //   checkMissing(where1);
  //   return where1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_5, CCP, RHO);
  // r14 = dyn _cacheClass(p3, p4, FALSE, p5)
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args28[3] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__cacheClass, 4, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

D7_:;
  // deopt 28 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L2()
  // L2()
  goto L2_;

D8_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p6 = prom<V +>{
  //   class5 = ld class;
  //   class6 = force? class5;
  //   checkMissing(class6);
  //   return class6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_6, CCP, RHO);
  // p7 = prom<V +>{
  //   superclass3 = ld superclass;
  //   superclass4 = force? superclass3;
  //   checkMissing(superclass4);
  //   return superclass4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_7, CCP, RHO);
  // r17 = dyn signature[from, to](p6, p7)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_signature, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

D9_:;
  // deopt 37 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L35_:;
  // st sig = r17
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // existsMethod = ldf existsMethod
  Rsh_Fir_reg_existsMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

D10_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p8 = prom<V +>{
  //   sig = ld sig;
  //   sig1 = force? sig;
  //   checkMissing(sig1);
  //   return sig1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_8, CCP, RHO);
  // r19 = dyn existsMethod("coerce", p8)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_existsMethod, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

D11_:;
  // deopt 43 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L37_:;
  // c4 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c4 then L38() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L38()
    goto L38_;
  } else {
  // L5()
    goto L5_;
  }

L38_:;
  // _removeCachedMethod = ldf `.removeCachedMethod`
  Rsh_Fir_reg__removeCachedMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

D12_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p9 = prom<V +>{
  //   sig2 = ld sig;
  //   sig3 = force? sig2;
  //   checkMissing(sig3);
  //   return sig3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_9, CCP, RHO);
  // r21 = dyn _removeCachedMethod("coerce", p9)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__removeCachedMethod, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

D13_:;
  // deopt 48 [r21]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L6()
  // L6()
  goto L6_;

D14_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p10 = prom<V +>{
  //   sig4 = ld sig;
  //   sig5 = force? sig4;
  //   checkMissing(sig5);
  //   return sig5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_10, CCP, RHO);
  // r24 = dyn existsMethod1("coerce<-", p10)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_existsMethod1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L43() else D15()
  // L43()
  goto L43_;

D15_:;
  // deopt 55 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // c5 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c5 then L44() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L44()
    goto L44_;
  } else {
  // L7()
    goto L7_;
  }

L44_:;
  // _removeCachedMethod1 = ldf `.removeCachedMethod`
  Rsh_Fir_reg__removeCachedMethod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L45() else D16()
  // L45()
  goto L45_;

D16_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p11 = prom<V +>{
  //   sig6 = ld sig;
  //   sig7 = force? sig6;
  //   checkMissing(sig7);
  //   return sig7;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_11, CCP, RHO);
  // r26 = dyn _removeCachedMethod1("coerce<-", p11)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__removeCachedMethod1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L46() else D17()
  // L46()
  goto L46_;

D17_:;
  // deopt 60 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L8()
  // L8()
  goto L8_;

D18_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p12 = prom<V +>{
  //   class7 = ld class;
  //   class8 = force? class7;
  //   checkMissing(class8);
  //   return class8;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_12, CCP, RHO);
  // p13 = prom<V +>{
  //   _GlobalEnv = ld `.GlobalEnv`;
  //   _GlobalEnv1 = force? _GlobalEnv;
  //   checkMissing(_GlobalEnv1);
  //   return _GlobalEnv1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_13, CCP, RHO);
  // r30 = dyn findClass(p12, p13)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_findClass, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L49() else D19()
  // L49()
  goto L49_;

D19_:;
  // deopt 67 [r30]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // st evv = r30
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // classMetaName = ldf classMetaName
  Rsh_Fir_reg_classMetaName = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L50() else D20()
  // L50()
  goto L50_;

D20_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p14 = prom<V +>{
  //   class9 = ld class;
  //   class10 = force? class9;
  //   checkMissing(class10);
  //   return class10;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_14, CCP, RHO);
  // r32 = dyn classMetaName(p14)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_classMetaName, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L51() else D21()
  // L51()
  goto L51_;

D21_:;
  // deopt 72 [r32]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L51_:;
  // st mname = r32
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // evv = ld evv
  Rsh_Fir_reg_evv = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L52() else D22()
  // L52()
  goto L52_;

D22_:;
  // deopt 74 [evv]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_evv;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L52_:;
  // evv1 = force? evv
  Rsh_Fir_reg_evv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_evv);
  // checkMissing(evv1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_evv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // s = toForSeq(evv1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_evv1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 27);
  // goto L9(i)
  // L9(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L9_;

L53_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 10);

L54_:;
  // where2 = ld where
  Rsh_Fir_reg_where2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L56() else D23()
  // L56()
  goto L56_;

L55_:;
  // r33 = dyn base2(<lang `<-`(cdef, `[[`(where, mname))>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(i2, r33)
  // L10(i2, r33)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L10_;

D23_:;
  // deopt 77 [i2, where2]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_where2_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L56_:;
  // where3 = force? where2
  Rsh_Fir_reg_where3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where2_);
  // checkMissing(where3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_where3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(where3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_where3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c7 then L57() else L58(i2, where3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L57()
    goto L57_;
  } else {
  // L58(i2, where3)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_where5_ = Rsh_Fir_reg_where3_;
    goto L58_;
  }

L57_:;
  // dr = tryDispatchBuiltin.1("[[", where3)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_where3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc then L59() else L58(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L59()
    goto L59_;
  } else {
  // L58(i2, dr)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_where5_ = Rsh_Fir_reg_dr;
    goto L58_;
  }

L58_:;
  // mname = ld mname
  Rsh_Fir_reg_mname = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L60() else D24()
  // L60()
  goto L60_;

L59_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L11(i2, dx)
  // L11(i2, dx)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

D24_:;
  // deopt 79 [i9, where5, mname]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_where5_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_mname;
  Rsh_Fir_deopt(79, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L60_:;
  // mname1 = force? mname
  Rsh_Fir_reg_mname1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mname);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r35 = dyn __(where5, mname1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_where5_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_mname1_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(i9, r35)
  // L11(i9, r35)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r35_;
  goto L11_;

L61_:;
  // _deleteSuperClass1 = ldf `.deleteSuperClass`
  Rsh_Fir_reg__deleteSuperClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L62() else D25()
  // L62()
  goto L62_;

D25_:;
  // deopt 86 [i7]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L62_:;
  // p15 = prom<V +>{
  //   cdef4 = ld cdef;
  //   cdef5 = force? cdef4;
  //   checkMissing(cdef5);
  //   return cdef5;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_15, CCP, RHO);
  // p16 = prom<V +>{
  //   superclass5 = ld superclass;
  //   superclass6 = force? superclass5;
  //   checkMissing(superclass6);
  //   return superclass6;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_16, CCP, RHO);
  // r39 = dyn _deleteSuperClass1(p15, p16)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__deleteSuperClass1_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L63() else D26()
  // L63()
  goto L63_;

D26_:;
  // deopt 89 [i7, r39]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L63_:;
  // st newdef = r39
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard3 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L64_:;
  // newdef4 = ld newdef
  Rsh_Fir_reg_newdef4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L66() else D27()
  // L66()
  goto L66_;

L65_:;
  // r40 = dyn base3(<sym newdef>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L13(i7, r40)
  // L13(i7, r40)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L13_;

D27_:;
  // deopt 92 [i7, newdef4]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_newdef4_;
  Rsh_Fir_deopt(92, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L66_:;
  // newdef5 = force? newdef4
  Rsh_Fir_reg_newdef5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdef4_);
  // checkMissing(newdef5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_newdef5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c10 = `==`(newdef5, NULL)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_newdef5_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L13(i7, c10)
  // L13(i7, c10)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_c10_;
  goto L13_;

L67_:;
  // assignClassDef = ldf assignClassDef
  Rsh_Fir_reg_assignClassDef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L68() else D28()
  // L68()
  goto L68_;

D28_:;
  // deopt 97 [i16]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L68_:;
  // p17 = prom<V +>{
  //   class11 = ld class;
  //   class12 = force? class11;
  //   checkMissing(class12);
  //   return class12;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_17, CCP, RHO);
  // p18 = prom<V +>{
  //   newdef6 = ld newdef;
  //   newdef7 = force? newdef6;
  //   checkMissing(newdef7);
  //   return newdef7;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_18, CCP, RHO);
  // p19 = prom<V +>{
  //   where6 = ld where;
  //   where7 = force? where6;
  //   checkMissing(where7);
  //   return where7;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3577279877_19, CCP, RHO);
  // r46 = dyn assignClassDef(p17, p18, p19, TRUE)
  SEXP Rsh_Fir_array_args67[4];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args67[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assignClassDef, 4, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L69() else D29()
  // L69()
  goto L69_;

D29_:;
  // deopt 102 [i16, r46]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(102, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L15(i16, r46)
  // L15(i16, r46)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L15_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_(SEXP CCP, SEXP RHO) {
  // class1 = ld class
  Rsh_Fir_reg_class1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class2 = force? class1
  Rsh_Fir_reg_class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class1_);
  // checkMissing(class2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return class2
  return Rsh_Fir_reg_class2_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_1(SEXP CCP, SEXP RHO) {
  // cdef2 = ld cdef
  Rsh_Fir_reg_cdef2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // cdef3 = force? cdef2
  Rsh_Fir_reg_cdef3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef2_);
  // checkMissing(cdef3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_cdef3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return cdef3
  return Rsh_Fir_reg_cdef3_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_2(SEXP CCP, SEXP RHO) {
  // superclass1 = ld superclass
  Rsh_Fir_reg_superclass1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // superclass2 = force? superclass1
  Rsh_Fir_reg_superclass2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclass1_);
  // checkMissing(superclass2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_superclass2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return superclass2
  return Rsh_Fir_reg_superclass2_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_3(SEXP CCP, SEXP RHO) {
  // class3 = ld class
  Rsh_Fir_reg_class3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class4 = force? class3
  Rsh_Fir_reg_class4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class3_);
  // checkMissing(class4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_class4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return class4
  return Rsh_Fir_reg_class4_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_4(SEXP CCP, SEXP RHO) {
  // newdef2 = ld newdef
  Rsh_Fir_reg_newdef2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // newdef3 = force? newdef2
  Rsh_Fir_reg_newdef3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdef2_);
  // checkMissing(newdef3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_newdef3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return newdef3
  return Rsh_Fir_reg_newdef3_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_5(SEXP CCP, SEXP RHO) {
  // where = ld where
  Rsh_Fir_reg_where = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // where1 = force? where
  Rsh_Fir_reg_where1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where);
  // checkMissing(where1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_where1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return where1
  return Rsh_Fir_reg_where1_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_6(SEXP CCP, SEXP RHO) {
  // class5 = ld class
  Rsh_Fir_reg_class5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class6 = force? class5
  Rsh_Fir_reg_class6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class5_);
  // checkMissing(class6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_class6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return class6
  return Rsh_Fir_reg_class6_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_7(SEXP CCP, SEXP RHO) {
  // superclass3 = ld superclass
  Rsh_Fir_reg_superclass3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // superclass4 = force? superclass3
  Rsh_Fir_reg_superclass4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclass3_);
  // checkMissing(superclass4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_superclass4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return superclass4
  return Rsh_Fir_reg_superclass4_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_8(SEXP CCP, SEXP RHO) {
  // sig = ld sig
  Rsh_Fir_reg_sig = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // sig1 = force? sig
  Rsh_Fir_reg_sig1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig);
  // checkMissing(sig1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sig1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return sig1
  return Rsh_Fir_reg_sig1_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_9(SEXP CCP, SEXP RHO) {
  // sig2 = ld sig
  Rsh_Fir_reg_sig2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // sig3 = force? sig2
  Rsh_Fir_reg_sig3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig2_);
  // checkMissing(sig3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sig3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return sig3
  return Rsh_Fir_reg_sig3_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_10(SEXP CCP, SEXP RHO) {
  // sig4 = ld sig
  Rsh_Fir_reg_sig4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // sig5 = force? sig4
  Rsh_Fir_reg_sig5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig4_);
  // checkMissing(sig5)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sig5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return sig5
  return Rsh_Fir_reg_sig5_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_11(SEXP CCP, SEXP RHO) {
  // sig6 = ld sig
  Rsh_Fir_reg_sig6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // sig7 = force? sig6
  Rsh_Fir_reg_sig7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig6_);
  // checkMissing(sig7)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sig7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return sig7
  return Rsh_Fir_reg_sig7_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_12(SEXP CCP, SEXP RHO) {
  // class7 = ld class
  Rsh_Fir_reg_class7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class8 = force? class7
  Rsh_Fir_reg_class8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class7_);
  // checkMissing(class8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_class8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return class8
  return Rsh_Fir_reg_class8_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_13(SEXP CCP, SEXP RHO) {
  // _GlobalEnv = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // _GlobalEnv1 = force? _GlobalEnv
  Rsh_Fir_reg__GlobalEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv);
  // checkMissing(_GlobalEnv1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg__GlobalEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return _GlobalEnv1
  return Rsh_Fir_reg__GlobalEnv1_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_14(SEXP CCP, SEXP RHO) {
  // class9 = ld class
  Rsh_Fir_reg_class9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class10 = force? class9
  Rsh_Fir_reg_class10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class9_);
  // checkMissing(class10)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_class10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return class10
  return Rsh_Fir_reg_class10_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_15(SEXP CCP, SEXP RHO) {
  // cdef4 = ld cdef
  Rsh_Fir_reg_cdef4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // cdef5 = force? cdef4
  Rsh_Fir_reg_cdef5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef4_);
  // checkMissing(cdef5)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_cdef5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return cdef5
  return Rsh_Fir_reg_cdef5_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_16(SEXP CCP, SEXP RHO) {
  // superclass5 = ld superclass
  Rsh_Fir_reg_superclass5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // superclass6 = force? superclass5
  Rsh_Fir_reg_superclass6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclass5_);
  // checkMissing(superclass6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_superclass6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return superclass6
  return Rsh_Fir_reg_superclass6_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_17(SEXP CCP, SEXP RHO) {
  // class11 = ld class
  Rsh_Fir_reg_class11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class12 = force? class11
  Rsh_Fir_reg_class12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class11_);
  // checkMissing(class12)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_class12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return class12
  return Rsh_Fir_reg_class12_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_18(SEXP CCP, SEXP RHO) {
  // newdef6 = ld newdef
  Rsh_Fir_reg_newdef6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // newdef7 = force? newdef6
  Rsh_Fir_reg_newdef7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdef6_);
  // checkMissing(newdef7)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_newdef7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return newdef7
  return Rsh_Fir_reg_newdef7_;
}
SEXP Rsh_Fir_user_promise_inner3577279877_19(SEXP CCP, SEXP RHO) {
  // where6 = ld where
  Rsh_Fir_reg_where6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // where7 = force? where6
  Rsh_Fir_reg_where7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where6_);
  // checkMissing(where7)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_where7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return where7
  return Rsh_Fir_reg_where7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
