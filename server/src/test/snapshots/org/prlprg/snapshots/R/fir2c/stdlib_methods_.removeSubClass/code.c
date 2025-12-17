#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner669269334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner669269334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner669269334_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_20(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669269334_21(SEXP CCP, SEXP RHO);
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
  // r = clos inner669269334
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner669269334_, RHO, CCP);
  // st `.removeSubClass` = r
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
SEXP Rsh_Fir_user_function_inner669269334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner669269334 dynamic dispatch ([class, subclass, cdef])

  return Rsh_Fir_user_version_inner669269334_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner669269334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner669269334 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner669269334/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_subclass;  // subclass
  SEXP Rsh_Fir_reg_cdef;  // cdef
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_cdef1_;  // cdef1
  SEXP Rsh_Fir_reg_cdef2_;  // cdef2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__deleteSubClass;  // _deleteSubClass
  SEXP Rsh_Fir_reg_cdef3_;  // cdef3
  SEXP Rsh_Fir_reg_cdef4_;  // cdef4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_subclass1_;  // subclass1
  SEXP Rsh_Fir_reg_subclass2_;  // subclass2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_newdef;  // newdef
  SEXP Rsh_Fir_reg_newdef1_;  // newdef1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg__cacheClass;  // _cacheClass
  SEXP Rsh_Fir_reg_class1_;  // class1
  SEXP Rsh_Fir_reg_class2_;  // class2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_newdef2_;  // newdef2
  SEXP Rsh_Fir_reg_newdef3_;  // newdef3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_pname;  // pname
  SEXP Rsh_Fir_reg_pname1_;  // pname1
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_pname2_;  // pname2
  SEXP Rsh_Fir_reg_pname3_;  // pname3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_pname4_;  // pname4
  SEXP Rsh_Fir_reg_pname5_;  // pname5
  SEXP Rsh_Fir_reg_search;  // search
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_pos;  // pos
  SEXP Rsh_Fir_reg_pos1_;  // pos1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_pname6_;  // pname6
  SEXP Rsh_Fir_reg_pname7_;  // pname7
  SEXP Rsh_Fir_reg_as_environment;  // as_environment
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_classMetaName;  // classMetaName
  SEXP Rsh_Fir_reg_class3_;  // class3
  SEXP Rsh_Fir_reg_class4_;  // class4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_penv;  // penv
  SEXP Rsh_Fir_reg_penv1_;  // penv1
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_penv3_;  // penv3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_cmeta;  // cmeta
  SEXP Rsh_Fir_reg_cmeta1_;  // cmeta1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_subclass3_;  // subclass3
  SEXP Rsh_Fir_reg_subclass4_;  // subclass4
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg__deleteSubClass1_;  // _deleteSubClass1
  SEXP Rsh_Fir_reg_cdefp;  // cdefp
  SEXP Rsh_Fir_reg_cdefp1_;  // cdefp1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_subclass5_;  // subclass5
  SEXP Rsh_Fir_reg_subclass6_;  // subclass6
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_newdef4_;  // newdef4
  SEXP Rsh_Fir_reg_newdef5_;  // newdef5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_bindingIsLocked;  // bindingIsLocked
  SEXP Rsh_Fir_reg_cmeta2_;  // cmeta2
  SEXP Rsh_Fir_reg_cmeta3_;  // cmeta3
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_penv4_;  // penv4
  SEXP Rsh_Fir_reg_penv5_;  // penv5
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg__assignOverBinding;  // _assignOverBinding
  SEXP Rsh_Fir_reg_cmeta4_;  // cmeta4
  SEXP Rsh_Fir_reg_cmeta5_;  // cmeta5
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_newdef6_;  // newdef6
  SEXP Rsh_Fir_reg_newdef7_;  // newdef7
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_penv6_;  // penv6
  SEXP Rsh_Fir_reg_penv7_;  // penv7
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_newdef8_;  // newdef8
  SEXP Rsh_Fir_reg_newdef9_;  // newdef9
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_newdef11_;  // newdef11
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_newdef13_;  // newdef13
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_cmeta6_;  // cmeta6
  SEXP Rsh_Fir_reg_cmeta7_;  // cmeta7
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_signature;  // signature
  SEXP Rsh_Fir_reg_subclass7_;  // subclass7
  SEXP Rsh_Fir_reg_subclass8_;  // subclass8
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_class5_;  // class5
  SEXP Rsh_Fir_reg_class6_;  // class6
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_existsMethod;  // existsMethod
  SEXP Rsh_Fir_reg_sig;  // sig
  SEXP Rsh_Fir_reg_sig1_;  // sig1
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg__removeCachedMethod;  // _removeCachedMethod
  SEXP Rsh_Fir_reg_sig2_;  // sig2
  SEXP Rsh_Fir_reg_sig3_;  // sig3
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_existsMethod1_;  // existsMethod1
  SEXP Rsh_Fir_reg_sig4_;  // sig4
  SEXP Rsh_Fir_reg_sig5_;  // sig5
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg__removeCachedMethod1_;  // _removeCachedMethod1
  SEXP Rsh_Fir_reg_sig6_;  // sig6
  SEXP Rsh_Fir_reg_sig7_;  // sig7
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_r71_;  // r71

  // Bind parameters
  Rsh_Fir_reg_class = PARAMS[0];
  Rsh_Fir_reg_subclass = PARAMS[1];
  Rsh_Fir_reg_cdef = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st class = class
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_class, RHO);
  (void)(Rsh_Fir_reg_class);
  // st subclass = subclass
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_subclass, RHO);
  (void)(Rsh_Fir_reg_subclass);
  // st cdef = cdef
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_cdef, RHO);
  (void)(Rsh_Fir_reg_cdef);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
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
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L30() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L30()
    goto L30_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // _deleteSubClass = ldf `.deleteSubClass`
  Rsh_Fir_reg__deleteSubClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

L2_:;
  // signature = ldf signature
  Rsh_Fir_reg_signature = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L95() else D32()
  // L95()
  goto L95_;

L3_:;
  // r8 = `!`(r7)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c3 then L37() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L37()
    goto L37_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r15 = dyn __1(<sym cdef>, <sym package>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // st pname = r15
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L6_:;
  // c4 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c4 then L45() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L45()
    goto L45_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

L8_:;
  // pos = ld pos
  Rsh_Fir_reg_pos = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L55() else D14()
  // L55()
  goto L55_;

L9_:;
  // st pos = r23
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L8()
  // L8()
  goto L8_;

L10_:;
  // goto L2()
  // L2()
  goto L2_;

L11_:;
  // st penv = r27
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // classMetaName = ldf classMetaName
  Rsh_Fir_reg_classMetaName = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L61() else D17()
  // L61()
  goto L61_;

L12_:;
  // r34 = `!`(r32)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c8 then L70() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L70()
    goto L70_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // st cdefp = dx1
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c7 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L12(c7)
  // L12(c7)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_c7_;
  goto L12_;

L14_:;
  // goto L23(NULL)
  // L23(NULL)
  Rsh_Fir_reg_r59_ = Rsh_const(CCP, 16);
  goto L23_;

L15_:;
  // goto L22(NULL)
  // L22(NULL)
  Rsh_Fir_reg_r58_ = Rsh_const(CCP, 16);
  goto L22_;

L16_:;
  // r47 = `!`(r46)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c11 then L79() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L79()
    goto L79_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L21(NULL)
  // L21(NULL)
  Rsh_Fir_reg_r57_ = Rsh_const(CCP, 16);
  goto L21_;

L18_:;
  // newdef8 = ld newdef
  Rsh_Fir_reg_newdef8_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L86() else D30()
  // L86()
  goto L86_;

L19_:;
  // goto L21(r55)
  // L21(r55)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
  goto L21_;

L20_:;
  // st penv = dx3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L19(newdef13)
  // L19(newdef13)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_newdef13_;
  goto L19_;

L21_:;
  // goto L22(r57)
  // L22(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L22_;

L22_:;
  // goto L23(r58)
  // L23(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L23_;

L23_:;
  // goto L2()
  // L2()
  goto L2_;

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // existsMethod1 = ldf existsMethod
  Rsh_Fir_reg_existsMethod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L103() else D38()
  // L103()
  goto L103_;

L26_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 16);

L27_:;
  // cdef1 = ld cdef
  Rsh_Fir_reg_cdef1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L29() else D0()
  // L29()
  goto L29_;

L28_:;
  // r = dyn base(<sym cdef>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [cdef1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_cdef1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L29_:;
  // cdef2 = force? cdef1
  Rsh_Fir_reg_cdef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef1_);
  // checkMissing(cdef2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_cdef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `==`(cdef2, NULL)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_cdef2_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L30_:;
  // goto L2()
  // L2()
  goto L2_;

D1_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p = prom<V +>{
  //   cdef3 = ld cdef;
  //   cdef4 = force? cdef3;
  //   checkMissing(cdef4);
  //   return cdef4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_, CCP, RHO);
  // p1 = prom<V +>{
  //   subclass1 = ld subclass;
  //   subclass2 = force? subclass1;
  //   checkMissing(subclass2);
  //   return subclass2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_1, CCP, RHO);
  // r5 = dyn _deleteSubClass(p, p1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__deleteSubClass, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L33_:;
  // st newdef = r5
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // newdef = ld newdef
  Rsh_Fir_reg_newdef = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

L35_:;
  // r6 = dyn base1(<sym newdef>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D3_:;
  // deopt 13 [newdef]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_newdef;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L36_:;
  // newdef1 = force? newdef
  Rsh_Fir_reg_newdef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdef);
  // checkMissing(newdef1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_newdef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c2 = `==`(newdef1, NULL)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_newdef1_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L3(c2)
  // L3(c2)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c2_;
  goto L3_;

L37_:;
  // _cacheClass = ldf `.cacheClass`
  Rsh_Fir_reg__cacheClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L38() else D4()
  // L38()
  goto L38_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p2 = prom<V +>{
  //   class1 = ld class;
  //   class2 = force? class1;
  //   checkMissing(class2);
  //   return class2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_2, CCP, RHO);
  // p3 = prom<V +>{
  //   newdef2 = ld newdef;
  //   newdef3 = force? newdef2;
  //   checkMissing(newdef3);
  //   return newdef3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_3, CCP, RHO);
  // p4 = prom<V +>{
  //   __ = ldf `@` in base;
  //   r11 = dyn __(<sym cdef>, <sym package>);
  //   return r11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_4, CCP, RHO);
  // r13 = dyn _cacheClass(p2, p3, FALSE, p4)
  SEXP Rsh_Fir_array_args25[4];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args25[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__cacheClass, 4, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

D5_:;
  // deopt 23 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L5()
  // L5()
  goto L5_;

L41_:;
  // pname = ld pname
  Rsh_Fir_reg_pname = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L43() else D6()
  // L43()
  goto L43_;

L42_:;
  // r16 = dyn base2(<sym pname>, ".GlobalEnv")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L6_;

D6_:;
  // deopt 31 [pname]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_pname;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L43_:;
  // pname1 = force? pname
  Rsh_Fir_reg_pname1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pname);
  // checkMissing(pname1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_pname1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r18 = dyn identical(pname1, ".GlobalEnv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args28[9];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_pname1_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args28[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args28[5] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args28[6] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args28[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args28[8] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[9];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_array_arg_names7[4] = R_MissingArg;
  Rsh_Fir_array_arg_names7[5] = R_MissingArg;
  Rsh_Fir_array_arg_names7[6] = R_MissingArg;
  Rsh_Fir_array_arg_names7[7] = R_MissingArg;
  Rsh_Fir_array_arg_names7[8] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

D7_:;
  // deopt 42 [r18]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L6(r18)
  // L6(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L6_;

L45_:;
  // st pos = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 23), RHO);
  (void)(Rsh_const(CCP, 23));
  // goto L8()
  // L8()
  goto L8_;

D8_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p5 = prom<V +>{
  //   pname2 = ld pname;
  //   pname3 = force? pname2;
  //   checkMissing(pname3);
  //   return pname3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_5, CCP, RHO);
  // r21 = dyn paste0("package:", p5)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

D9_:;
  // deopt 50 [r21]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L48_:;
  // st pname = r21
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym3 = ldf match
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base3 = ldf match in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard3 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // pname4 = ld pname
  Rsh_Fir_reg_pname4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L51() else D10()
  // L51()
  goto L51_;

L50_:;
  // r22 = dyn base3(<sym pname>, <lang search()>, 0.0)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L9(r22)
  // L9(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L9_;

D10_:;
  // deopt 54 [pname4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_pname4_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L51_:;
  // pname5 = force? pname4
  Rsh_Fir_reg_pname5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pname4_);
  // checkMissing(pname5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_pname5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // search = ldf search
  Rsh_Fir_reg_search = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L52() else D11()
  // L52()
  goto L52_;

D11_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // r24 = dyn search()
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search, 0, NULL, NULL, CCP, RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

D12_:;
  // deopt 58 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L53_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r25 = dyn match(pname5, r24, 0.0, NULL)
  SEXP Rsh_Fir_array_args34[4];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_pname5_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L54() else D13()
  // L54()
  goto L54_;

D13_:;
  // deopt 62 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L9_;

D14_:;
  // deopt 64 [pos]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_pos;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L55_:;
  // pos1 = force? pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos);
  // checkMissing(pos1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_pos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(pos1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_pos1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c5 then L56() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L56()
    goto L56_;
  } else {
  // L10()
    goto L10_;
  }

L56_:;
  // sym4 = ldf `as.environment`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base4 = ldf `as.environment` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard4 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // pname6 = ld pname
  Rsh_Fir_reg_pname6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L59() else D15()
  // L59()
  goto L59_;

L58_:;
  // r26 = dyn base4(<sym pname>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L11_;

D15_:;
  // deopt 68 [pname6]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_pname6_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L59_:;
  // pname7 = force? pname6
  Rsh_Fir_reg_pname7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pname6_);
  // checkMissing(pname7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_pname7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r28 = dyn as_environment(pname7)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_pname7_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L60() else D16()
  // L60()
  goto L60_;

D16_:;
  // deopt 71 [r28]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L11_;

D17_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p6 = prom<V +>{
  //   class3 = ld class;
  //   class4 = force? class3;
  //   checkMissing(class4);
  //   return class4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_6, CCP, RHO);
  // r30 = dyn classMetaName(p6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_classMetaName, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L62() else D18()
  // L62()
  goto L62_;

D18_:;
  // deopt 76 [r30]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L62_:;
  // st cmeta = r30
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard5 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // penv = ld penv
  Rsh_Fir_reg_penv = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L65() else D19()
  // L65()
  goto L65_;

L64_:;
  // r31 = dyn base5(<lang `<-`(cdefp, `[[`(penv, cmeta))>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(r31)
  // L12(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L12_;

D19_:;
  // deopt 79 [penv]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_penv;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L65_:;
  // penv1 = force? penv
  Rsh_Fir_reg_penv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_penv);
  // checkMissing(penv1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_penv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(penv1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_penv1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c6 then L66() else L67(penv1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L66()
    goto L66_;
  } else {
  // L67(penv1)
    Rsh_Fir_reg_penv3_ = Rsh_Fir_reg_penv1_;
    goto L67_;
  }

L66_:;
  // dr = tryDispatchBuiltin.1("[[", penv1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_penv1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc then L68() else L67(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L68()
    goto L68_;
  } else {
  // L67(dr)
    Rsh_Fir_reg_penv3_ = Rsh_Fir_reg_dr;
    goto L67_;
  }

L67_:;
  // cmeta = ld cmeta
  Rsh_Fir_reg_cmeta = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L69() else D20()
  // L69()
  goto L69_;

L68_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L13(dx)
  // L13(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L13_;

D20_:;
  // deopt 81 [penv3, cmeta]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_penv3_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_cmeta;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L69_:;
  // cmeta1 = force? cmeta
  Rsh_Fir_reg_cmeta1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cmeta);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r33 = dyn __2(penv3, cmeta1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_penv3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_cmeta1_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L13(r33)
  // L13(r33)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r33_;
  goto L13_;

L70_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L71() else D21()
  // L71()
  goto L71_;

D21_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L71_:;
  // p7 = prom<V +>{
  //   subclass3 = ld subclass;
  //   subclass4 = force? subclass3;
  //   checkMissing(subclass4);
  //   return subclass4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_7, CCP, RHO);
  // p8 = prom<V +>{
  //   sym6 = ldf names;
  //   base6 = ldf names in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r37):
  //   return r37;
  // L1():
  //   __3 = ldf `@` in base;
  //   r38 = dyn __3(<sym cdefp>, <sym subclasses>);
  //   names = ldf names in base;
  //   r39 = dyn names(r38);
  //   goto L0(r39);
  // L2():
  //   r36 = dyn base6(<lang `@`(cdefp, subclasses)>);
  //   goto L0(r36);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_8, CCP, RHO);
  // r41 = dyn _in_(p7, p8)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L72() else D22()
  // L72()
  goto L72_;

D22_:;
  // deopt 91 [r41]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L72_:;
  // c9 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c9 then L73() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L73()
    goto L73_;
  } else {
  // L15()
    goto L15_;
  }

L73_:;
  // _deleteSubClass1 = ldf `.deleteSubClass`
  Rsh_Fir_reg__deleteSubClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L74() else D23()
  // L74()
  goto L74_;

D23_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p9 = prom<V +>{
  //   cdefp = ld cdefp;
  //   cdefp1 = force? cdefp;
  //   checkMissing(cdefp1);
  //   return cdefp1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_9, CCP, RHO);
  // p10 = prom<V +>{
  //   subclass5 = ld subclass;
  //   subclass6 = force? subclass5;
  //   checkMissing(subclass6);
  //   return subclass6;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_10, CCP, RHO);
  // r44 = dyn _deleteSubClass1(p9, p10)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__deleteSubClass1_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

D24_:;
  // deopt 96 [r44]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L75_:;
  // st newdef = r44
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard7 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L76_:;
  // newdef4 = ld newdef
  Rsh_Fir_reg_newdef4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L78() else D25()
  // L78()
  goto L78_;

L77_:;
  // r45 = dyn base7(<sym newdef>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L16(r45)
  // L16(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L16_;

D25_:;
  // deopt 99 [newdef4]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_newdef4_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L78_:;
  // newdef5 = force? newdef4
  Rsh_Fir_reg_newdef5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdef4_);
  // checkMissing(newdef5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_newdef5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c10 = `==`(newdef5, NULL)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_newdef5_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L16(c10)
  // L16(c10)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_c10_;
  goto L16_;

L79_:;
  // bindingIsLocked = ldf bindingIsLocked
  Rsh_Fir_reg_bindingIsLocked = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L80() else D26()
  // L80()
  goto L80_;

D26_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L80_:;
  // p11 = prom<V +>{
  //   cmeta2 = ld cmeta;
  //   cmeta3 = force? cmeta2;
  //   checkMissing(cmeta3);
  //   return cmeta3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_11, CCP, RHO);
  // p12 = prom<V +>{
  //   penv4 = ld penv;
  //   penv5 = force? penv4;
  //   checkMissing(penv5);
  //   return penv5;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_12, CCP, RHO);
  // r50 = dyn bindingIsLocked(p11, p12)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bindingIsLocked, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L81() else D27()
  // L81()
  goto L81_;

D27_:;
  // deopt 107 [r50]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L81_:;
  // c12 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c12 then L82() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L82()
    goto L82_;
  } else {
  // L18()
    goto L18_;
  }

L82_:;
  // _assignOverBinding = ldf `.assignOverBinding`
  Rsh_Fir_reg__assignOverBinding = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L83() else D28()
  // L83()
  goto L83_;

D28_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // p13 = prom<V +>{
  //   cmeta4 = ld cmeta;
  //   cmeta5 = force? cmeta4;
  //   checkMissing(cmeta5);
  //   return cmeta5;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_13, CCP, RHO);
  // p14 = prom<V +>{
  //   newdef6 = ld newdef;
  //   newdef7 = force? newdef6;
  //   checkMissing(newdef7);
  //   return newdef7;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_14, CCP, RHO);
  // p15 = prom<V +>{
  //   penv6 = ld penv;
  //   penv7 = force? penv6;
  //   checkMissing(penv7);
  //   return penv7;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_15, CCP, RHO);
  // r54 = dyn _assignOverBinding(p13, p14, p15, FALSE)
  SEXP Rsh_Fir_array_args72[4];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args72[3] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__assignOverBinding, 4, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L84() else D29()
  // L84()
  goto L84_;

D29_:;
  // deopt 114 [r54]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L19(r54)
  // L19(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L19_;

D30_:;
  // deopt 115 [newdef8]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_newdef8_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L86_:;
  // newdef9 = force? newdef8
  Rsh_Fir_reg_newdef9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdef8_);
  // checkMissing(newdef9)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_newdef9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // l = ld penv
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c13 = `is.object`(l)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c13 then L87() else L88(newdef9, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L87()
    goto L87_;
  } else {
  // L88(newdef9, l)
    Rsh_Fir_reg_newdef11_ = Rsh_Fir_reg_newdef9_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L88_;
  }

L87_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l, newdef9)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_newdef9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args75);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc1 then L89() else L88(newdef9, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L89()
    goto L89_;
  } else {
  // L88(newdef9, dr2)
    Rsh_Fir_reg_newdef11_ = Rsh_Fir_reg_newdef9_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L88_;
  }

L88_:;
  // cmeta6 = ld cmeta
  Rsh_Fir_reg_cmeta6_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L90() else D31()
  // L90()
  goto L90_;

L89_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L20(newdef9, dx2)
  // L20(newdef9, dx2)
  Rsh_Fir_reg_newdef13_ = Rsh_Fir_reg_newdef9_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L20_;

D31_:;
  // deopt 118 [newdef11, l2, newdef9, cmeta6]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_newdef11_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_newdef9_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_cmeta6_;
  Rsh_Fir_deopt(118, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L90_:;
  // cmeta7 = force? cmeta6
  Rsh_Fir_reg_cmeta7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cmeta6_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r56 = dyn ____(l2, newdef9, cmeta7)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_newdef9_;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_cmeta7_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L20(newdef11, r56)
  // L20(newdef11, r56)
  Rsh_Fir_reg_newdef13_ = Rsh_Fir_reg_newdef11_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r56_;
  goto L20_;

D32_:;
  // deopt 131 []
  Rsh_Fir_deopt(131, 0, NULL, CCP, RHO);
  return R_NilValue;

L95_:;
  // p16 = prom<V +>{
  //   subclass7 = ld subclass;
  //   subclass8 = force? subclass7;
  //   checkMissing(subclass8);
  //   return subclass8;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_16, CCP, RHO);
  // p17 = prom<V +>{
  //   class5 = ld class;
  //   class6 = force? class5;
  //   checkMissing(class6);
  //   return class6;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_17, CCP, RHO);
  // r62 = dyn signature[from, to](p16, p17)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_arg_names25[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_signature, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L96() else D33()
  // L96()
  goto L96_;

D33_:;
  // deopt 136 [r62]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L96_:;
  // st sig = r62
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // existsMethod = ldf existsMethod
  Rsh_Fir_reg_existsMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L97() else D34()
  // L97()
  goto L97_;

D34_:;
  // deopt 139 []
  Rsh_Fir_deopt(139, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // p18 = prom<V +>{
  //   sig = ld sig;
  //   sig1 = force? sig;
  //   checkMissing(sig1);
  //   return sig1;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_18, CCP, RHO);
  // r64 = dyn existsMethod("coerce", p18)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_existsMethod, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L98() else D35()
  // L98()
  goto L98_;

D35_:;
  // deopt 142 [r64]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L98_:;
  // c14 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c14 then L99() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L99()
    goto L99_;
  } else {
  // L24()
    goto L24_;
  }

L99_:;
  // _removeCachedMethod = ldf `.removeCachedMethod`
  Rsh_Fir_reg__removeCachedMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L100() else D36()
  // L100()
  goto L100_;

D36_:;
  // deopt 144 []
  Rsh_Fir_deopt(144, 0, NULL, CCP, RHO);
  return R_NilValue;

L100_:;
  // p19 = prom<V +>{
  //   sig2 = ld sig;
  //   sig3 = force? sig2;
  //   checkMissing(sig3);
  //   return sig3;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_19, CCP, RHO);
  // r66 = dyn _removeCachedMethod("coerce", p19)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__removeCachedMethod, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L101() else D37()
  // L101()
  goto L101_;

D37_:;
  // deopt 147 [r66]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L25()
  // L25()
  goto L25_;

D38_:;
  // deopt 151 []
  Rsh_Fir_deopt(151, 0, NULL, CCP, RHO);
  return R_NilValue;

L103_:;
  // p20 = prom<V +>{
  //   sig4 = ld sig;
  //   sig5 = force? sig4;
  //   checkMissing(sig5);
  //   return sig5;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_20, CCP, RHO);
  // r69 = dyn existsMethod1("coerce<-", p20)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_existsMethod1_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L104() else D39()
  // L104()
  goto L104_;

D39_:;
  // deopt 154 [r69]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L104_:;
  // c15 = `as.logical`(r69)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c15 then L105() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L105()
    goto L105_;
  } else {
  // L26()
    goto L26_;
  }

L105_:;
  // _removeCachedMethod1 = ldf `.removeCachedMethod`
  Rsh_Fir_reg__removeCachedMethod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L106() else D40()
  // L106()
  goto L106_;

D40_:;
  // deopt 156 []
  Rsh_Fir_deopt(156, 0, NULL, CCP, RHO);
  return R_NilValue;

L106_:;
  // p21 = prom<V +>{
  //   sig6 = ld sig;
  //   sig7 = force? sig6;
  //   checkMissing(sig7);
  //   return sig7;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669269334_21, CCP, RHO);
  // r71 = dyn _removeCachedMethod1("coerce<-", p21)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__removeCachedMethod1_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L107() else D41()
  // L107()
  goto L107_;

D41_:;
  // deopt 159 [r71]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L107_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r71
  return Rsh_Fir_reg_r71_;
}
SEXP Rsh_Fir_user_promise_inner669269334_(SEXP CCP, SEXP RHO) {
  // cdef3 = ld cdef
  Rsh_Fir_reg_cdef3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // cdef4 = force? cdef3
  Rsh_Fir_reg_cdef4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdef3_);
  // checkMissing(cdef4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_cdef4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return cdef4
  return Rsh_Fir_reg_cdef4_;
}
SEXP Rsh_Fir_user_promise_inner669269334_1(SEXP CCP, SEXP RHO) {
  // subclass1 = ld subclass
  Rsh_Fir_reg_subclass1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // subclass2 = force? subclass1
  Rsh_Fir_reg_subclass2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclass1_);
  // checkMissing(subclass2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_subclass2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return subclass2
  return Rsh_Fir_reg_subclass2_;
}
SEXP Rsh_Fir_user_promise_inner669269334_2(SEXP CCP, SEXP RHO) {
  // class1 = ld class
  Rsh_Fir_reg_class1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class2 = force? class1
  Rsh_Fir_reg_class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class1_);
  // checkMissing(class2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return class2
  return Rsh_Fir_reg_class2_;
}
SEXP Rsh_Fir_user_promise_inner669269334_3(SEXP CCP, SEXP RHO) {
  // newdef2 = ld newdef
  Rsh_Fir_reg_newdef2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // newdef3 = force? newdef2
  Rsh_Fir_reg_newdef3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdef2_);
  // checkMissing(newdef3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_newdef3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return newdef3
  return Rsh_Fir_reg_newdef3_;
}
SEXP Rsh_Fir_user_promise_inner669269334_4(SEXP CCP, SEXP RHO) {
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r11 = dyn __(<sym cdef>, <sym package>)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_inner669269334_5(SEXP CCP, SEXP RHO) {
  // pname2 = ld pname
  Rsh_Fir_reg_pname2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // pname3 = force? pname2
  Rsh_Fir_reg_pname3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pname2_);
  // checkMissing(pname3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_pname3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return pname3
  return Rsh_Fir_reg_pname3_;
}
SEXP Rsh_Fir_user_promise_inner669269334_6(SEXP CCP, SEXP RHO) {
  // class3 = ld class
  Rsh_Fir_reg_class3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class4 = force? class3
  Rsh_Fir_reg_class4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class3_);
  // checkMissing(class4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_class4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return class4
  return Rsh_Fir_reg_class4_;
}
SEXP Rsh_Fir_user_promise_inner669269334_7(SEXP CCP, SEXP RHO) {
  // subclass3 = ld subclass
  Rsh_Fir_reg_subclass3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // subclass4 = force? subclass3
  Rsh_Fir_reg_subclass4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclass3_);
  // checkMissing(subclass4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_subclass4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return subclass4
  return Rsh_Fir_reg_subclass4_;
}
SEXP Rsh_Fir_user_promise_inner669269334_8(SEXP CCP, SEXP RHO) {
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r37
  return Rsh_Fir_reg_r37_;

L1_:;
  // __3 = ldf `@` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r38 = dyn __3(<sym cdefp>, <sym subclasses>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names16, CCP, RHO);
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r39 = dyn names(r38)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r39_;
  goto L0_;

L2_:;
  // r36 = dyn base6(<lang `@`(cdefp, subclasses)>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner669269334_9(SEXP CCP, SEXP RHO) {
  // cdefp = ld cdefp
  Rsh_Fir_reg_cdefp = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // cdefp1 = force? cdefp
  Rsh_Fir_reg_cdefp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cdefp);
  // checkMissing(cdefp1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_cdefp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return cdefp1
  return Rsh_Fir_reg_cdefp1_;
}
SEXP Rsh_Fir_user_promise_inner669269334_10(SEXP CCP, SEXP RHO) {
  // subclass5 = ld subclass
  Rsh_Fir_reg_subclass5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // subclass6 = force? subclass5
  Rsh_Fir_reg_subclass6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclass5_);
  // checkMissing(subclass6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_subclass6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return subclass6
  return Rsh_Fir_reg_subclass6_;
}
SEXP Rsh_Fir_user_promise_inner669269334_11(SEXP CCP, SEXP RHO) {
  // cmeta2 = ld cmeta
  Rsh_Fir_reg_cmeta2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // cmeta3 = force? cmeta2
  Rsh_Fir_reg_cmeta3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cmeta2_);
  // checkMissing(cmeta3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_cmeta3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return cmeta3
  return Rsh_Fir_reg_cmeta3_;
}
SEXP Rsh_Fir_user_promise_inner669269334_12(SEXP CCP, SEXP RHO) {
  // penv4 = ld penv
  Rsh_Fir_reg_penv4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // penv5 = force? penv4
  Rsh_Fir_reg_penv5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_penv4_);
  // checkMissing(penv5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_penv5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return penv5
  return Rsh_Fir_reg_penv5_;
}
SEXP Rsh_Fir_user_promise_inner669269334_13(SEXP CCP, SEXP RHO) {
  // cmeta4 = ld cmeta
  Rsh_Fir_reg_cmeta4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // cmeta5 = force? cmeta4
  Rsh_Fir_reg_cmeta5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cmeta4_);
  // checkMissing(cmeta5)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_cmeta5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return cmeta5
  return Rsh_Fir_reg_cmeta5_;
}
SEXP Rsh_Fir_user_promise_inner669269334_14(SEXP CCP, SEXP RHO) {
  // newdef6 = ld newdef
  Rsh_Fir_reg_newdef6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // newdef7 = force? newdef6
  Rsh_Fir_reg_newdef7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdef6_);
  // checkMissing(newdef7)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_newdef7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return newdef7
  return Rsh_Fir_reg_newdef7_;
}
SEXP Rsh_Fir_user_promise_inner669269334_15(SEXP CCP, SEXP RHO) {
  // penv6 = ld penv
  Rsh_Fir_reg_penv6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // penv7 = force? penv6
  Rsh_Fir_reg_penv7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_penv6_);
  // checkMissing(penv7)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_penv7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return penv7
  return Rsh_Fir_reg_penv7_;
}
SEXP Rsh_Fir_user_promise_inner669269334_16(SEXP CCP, SEXP RHO) {
  // subclass7 = ld subclass
  Rsh_Fir_reg_subclass7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // subclass8 = force? subclass7
  Rsh_Fir_reg_subclass8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclass7_);
  // checkMissing(subclass8)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_subclass8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return subclass8
  return Rsh_Fir_reg_subclass8_;
}
SEXP Rsh_Fir_user_promise_inner669269334_17(SEXP CCP, SEXP RHO) {
  // class5 = ld class
  Rsh_Fir_reg_class5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class6 = force? class5
  Rsh_Fir_reg_class6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class5_);
  // checkMissing(class6)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_class6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return class6
  return Rsh_Fir_reg_class6_;
}
SEXP Rsh_Fir_user_promise_inner669269334_18(SEXP CCP, SEXP RHO) {
  // sig = ld sig
  Rsh_Fir_reg_sig = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // sig1 = force? sig
  Rsh_Fir_reg_sig1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig);
  // checkMissing(sig1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sig1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return sig1
  return Rsh_Fir_reg_sig1_;
}
SEXP Rsh_Fir_user_promise_inner669269334_19(SEXP CCP, SEXP RHO) {
  // sig2 = ld sig
  Rsh_Fir_reg_sig2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // sig3 = force? sig2
  Rsh_Fir_reg_sig3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig2_);
  // checkMissing(sig3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sig3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return sig3
  return Rsh_Fir_reg_sig3_;
}
SEXP Rsh_Fir_user_promise_inner669269334_20(SEXP CCP, SEXP RHO) {
  // sig4 = ld sig
  Rsh_Fir_reg_sig4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // sig5 = force? sig4
  Rsh_Fir_reg_sig5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig4_);
  // checkMissing(sig5)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sig5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return sig5
  return Rsh_Fir_reg_sig5_;
}
SEXP Rsh_Fir_user_promise_inner669269334_21(SEXP CCP, SEXP RHO) {
  // sig6 = ld sig
  Rsh_Fir_reg_sig6_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // sig7 = force? sig6
  Rsh_Fir_reg_sig7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig6_);
  // checkMissing(sig7)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sig7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return sig7
  return Rsh_Fir_reg_sig7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
