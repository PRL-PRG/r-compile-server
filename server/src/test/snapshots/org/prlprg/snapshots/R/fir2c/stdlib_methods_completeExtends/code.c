#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3883676954_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3883676954_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3883676954_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3883676954_19(SEXP CCP, SEXP RHO);
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
  // r = clos inner3883676954
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3883676954_, RHO, CCP);
  // st completeExtends = r
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
SEXP Rsh_Fir_user_function_inner3883676954_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3883676954 dynamic dispatch ([ClassDef, class2, extensionDef, where])

  return Rsh_Fir_user_version_inner3883676954_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3883676954_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3883676954 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3883676954/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ClassDef;  // ClassDef
  SEXP Rsh_Fir_reg_class2_;  // class2
  SEXP Rsh_Fir_reg_extensionDef;  // extensionDef
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_ext;  // ext
  SEXP Rsh_Fir_reg_ext1_;  // ext1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg__isIndirectExtension;  // _isIndirectExtension
  SEXP Rsh_Fir_reg_ext2_;  // ext2
  SEXP Rsh_Fir_reg_ext3_;  // ext3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ext5_;  // ext5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg__uncompleteClassDefinition;  // _uncompleteClassDefinition
  SEXP Rsh_Fir_reg_ClassDef1_;  // ClassDef1
  SEXP Rsh_Fir_reg_ClassDef2_;  // ClassDef2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg__walkClassGraph;  // _walkClassGraph
  SEXP Rsh_Fir_reg_ClassDef3_;  // ClassDef3
  SEXP Rsh_Fir_reg_ClassDef4_;  // ClassDef4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_ext6_;  // ext6
  SEXP Rsh_Fir_reg_ext7_;  // ext7
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_exts;  // exts
  SEXP Rsh_Fir_reg_exts1_;  // exts1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_exts2_;  // exts2
  SEXP Rsh_Fir_reg_exts3_;  // exts3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg__S3Extends;  // _S3Extends
  SEXP Rsh_Fir_reg_ClassDef5_;  // ClassDef5
  SEXP Rsh_Fir_reg_ClassDef6_;  // ClassDef6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_exts4_;  // exts4
  SEXP Rsh_Fir_reg_exts5_;  // exts5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg__transitiveSubclasses;  // _transitiveSubclasses
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_class3_;  // class3
  SEXP Rsh_Fir_reg_class4_;  // class4
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_extensionDef1_;  // extensionDef1
  SEXP Rsh_Fir_reg_extensionDef2_;  // extensionDef2
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_strictBy;  // strictBy
  SEXP Rsh_Fir_reg_strictBy1_;  // strictBy1
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_subclasses;  // subclasses
  SEXP Rsh_Fir_reg_subclasses1_;  // subclasses1
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_subclasses2_;  // subclasses2
  SEXP Rsh_Fir_reg_subclasses3_;  // subclasses3
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_subclasses5_;  // subclasses5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_extends;  // extends
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_class5_;  // class5
  SEXP Rsh_Fir_reg_class6_;  // class6
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_setIs;  // setIs
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_class7_;  // class7
  SEXP Rsh_Fir_reg_class8_;  // class8
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_obji;  // obji
  SEXP Rsh_Fir_reg_obji1_;  // obji1
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_exts6_;  // exts6
  SEXP Rsh_Fir_reg_exts7_;  // exts7

  // Bind parameters
  Rsh_Fir_reg_ClassDef = PARAMS[0];
  Rsh_Fir_reg_class2_ = PARAMS[1];
  Rsh_Fir_reg_extensionDef = PARAMS[2];
  Rsh_Fir_reg_where = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ClassDef = ClassDef
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ClassDef, RHO);
  (void)(Rsh_Fir_reg_ClassDef);
  // st class2 = class2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_class2_, RHO);
  (void)(Rsh_Fir_reg_class2_);
  // st extensionDef = extensionDef
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_extensionDef, RHO);
  (void)(Rsh_Fir_reg_extensionDef);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r = dyn __(<sym ClassDef>, <sym contains>)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // st ext = r
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf seq_along
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L0_:;
  // s = toForSeq(r2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 9);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if c then L27() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L27()
    goto L27_;
  } else {
  // L5()
    goto L5_;
  }

L2_:;
  // goto L1(i2)
  // L1(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L1_;

L3_:;
  // _walkClassGraph = ldf `.walkClassGraph`
  Rsh_Fir_reg__walkClassGraph = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L35() else D5()
  // L35()
  goto L35_;

L5_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // _isIndirectExtension = ldf `.isIndirectExtension`
  Rsh_Fir_reg__isIndirectExtension = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

L6_:;
  // c3 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c3 then L41() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L41()
    goto L41_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // goto L12()
  // L12()
  goto L12_;

L8_:;
  // c13 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c13 then L49() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L49()
    goto L49_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // r29 = `>`(r26, 1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c11 = `&&`(c9, c10)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L8(c11)
  // L8(c11)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c11_;
  goto L8_;

L10_:;
  // goto L11(NULL)
  // L11(NULL)
  Rsh_Fir_reg_r34_ = Rsh_const(CCP, 12);
  goto L11_;

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym5 = ldf missing
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf missing in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard5 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L13_:;
  // r39 = `!`(r37)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c14 then L56() else L14(c14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L56()
    goto L56_;
  } else {
  // L14(c14)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c14_;
    goto L14_;
  }

L14_:;
  // c23 = `as.logical`(c16)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c23 then L61() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L61()
    goto L61_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // c20 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c21 = `&&`(c19, c20)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L14(c21)
  // L14(c21)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c21_;
  goto L14_;

L16_:;
  // goto L23()
  // L23()
  goto L23_;

L17_:;
  // s1 = toForSeq(r53)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // i12 = 0
  Rsh_Fir_reg_i12_ = Rsh_const(CCP, 9);
  // goto L18(i12)
  // L18(i12)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i12_;
  goto L18_;

L18_:;
  // i14 = `+`.1(i13, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i14_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // c24 = `<`.1(l1, i14)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if c24 then L67() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L67()
    goto L67_;
  } else {
  // L22()
    goto L22_;
  }

L19_:;
  // st obji = dx3
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // extends = ldf extends
  Rsh_Fir_reg_extends = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

L20_:;
  // goto L21(i20)
  // L21(i20)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i20_;
  goto L21_;

L21_:;
  // goto L18(i25)
  // L18(i25)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i25_;
  goto L18_;

L22_:;
  // x1 = `[[`(s1, i14, NULL, TRUE)
  SEXP Rsh_Fir_array_args22[4];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // subclasses2 = ld subclasses
  Rsh_Fir_reg_subclasses2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

L23_:;
  // exts6 = ld exts
  Rsh_Fir_reg_exts6_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L80() else D24()
  // L80()
  goto L80_;

L24_:;
  // ext = ld ext
  Rsh_Fir_reg_ext = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L26() else D0()
  // L26()
  goto L26_;

L25_:;
  // r1 = dyn base(<sym ext>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 4 [ext]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_ext;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L26_:;
  // ext1 = force? ext
  Rsh_Fir_reg_ext1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ext);
  // checkMissing(ext1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_ext1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r3 = seq_along(ext1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_ext1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L27_:;
  // goto L3()
  // L3()
  goto L3_;

D1_:;
  // deopt 8 [i2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // p = prom<V +>{
  //   ext2 = ld ext;
  //   ext3 = force? ext2;
  //   checkMissing(ext3);
  //   c1 = `is.object`(ext3);
  //   if c1 then L1() else L2(ext3);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", ext3);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(ext5):
  //   i5 = ld i;
  //   i6 = force? i5;
  //   __1 = ldf `[[` in base;
  //   r4 = dyn __1(ext5, i6);
  //   goto L0(r4);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_, CCP, RHO);
  // r6 = dyn _isIndirectExtension(p)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__isIndirectExtension, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

D2_:;
  // deopt 10 [i2, r6]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L29_:;
  // c2 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c2 then L30() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L30()
    goto L30_;
  } else {
  // L2()
    goto L2_;
  }

L30_:;
  // _uncompleteClassDefinition = ldf `.uncompleteClassDefinition`
  Rsh_Fir_reg__uncompleteClassDefinition = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

D3_:;
  // deopt 12 [i2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L31_:;
  // p1 = prom<V +>{
  //   ClassDef1 = ld ClassDef;
  //   ClassDef2 = force? ClassDef1;
  //   checkMissing(ClassDef2);
  //   return ClassDef2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_1, CCP, RHO);
  // r8 = dyn _uncompleteClassDefinition(p1, "contains")
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__uncompleteClassDefinition, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

D4_:;
  // deopt 15 [i2, r8]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L32_:;
  // st ClassDef = r8
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L3()
  // L3()
  goto L3_;

D5_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p2 = prom<V +>{
  //   ClassDef3 = ld ClassDef;
  //   ClassDef4 = force? ClassDef3;
  //   checkMissing(ClassDef4);
  //   return ClassDef4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_2, CCP, RHO);
  // p3 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf attr;
  //   base1 = ldf attr in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   ext6 = ld ext;
  //   ext7 = force? ext6;
  //   checkMissing(ext7);
  //   attr = ldf attr in base;
  //   r14 = dyn attr(ext7, "conflicts");
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base1(<sym ext>, "conflicts");
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_4, CCP, RHO);
  // r16 = dyn _walkClassGraph(p2, "contains", p3, p4)
  SEXP Rsh_Fir_array_args42[4];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args42[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__walkClassGraph, 4, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

D6_:;
  // deopt 30 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // st exts = r16
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard2 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // exts = ld exts
  Rsh_Fir_reg_exts = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

L38_:;
  // r17 = dyn base2(<sym exts>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L6_;

D7_:;
  // deopt 34 [exts]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_exts;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // exts1 = force? exts
  Rsh_Fir_reg_exts1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exts);
  // checkMissing(exts1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_exts1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r19 = dyn length(exts1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_exts1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

D8_:;
  // deopt 37 [r19]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L6_;

L41_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

D9_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p5 = prom<V +>{
  //   sym3 = ldf names;
  //   base3 = ldf names in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   exts2 = ld exts;
  //   exts3 = force? exts2;
  //   checkMissing(exts3);
  //   names = ldf names in base;
  //   r22 = dyn names(exts3);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base3(<sym exts>);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_5, CCP, RHO);
  // r24 = dyn _in_("oldClass", p5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L43() else D10()
  // L43()
  goto L43_;

D10_:;
  // deopt 42 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // c4 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c4 then L44() else L8(c4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L44()
    goto L44_;
  } else {
  // L8(c4)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c4_;
    goto L8_;
  }

L44_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard4 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L45_:;
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r27 = dyn __2(<sym ClassDef>, <sym slots>)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names13, CCP, RHO);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r28 = dyn length1(r27)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

L46_:;
  // r25 = dyn base4(<lang `@`(ClassDef, slots)>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L9(c4, r25)
  // L9(c4, r25)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L9_;

D11_:;
  // deopt 48 [c4, r28]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L9(c4, r28)
  // L9(c4, r28)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r28_;
  goto L9_;

L49_:;
  // _S3Extends = ldf `.S3Extends`
  Rsh_Fir_reg__S3Extends = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

D12_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p6 = prom<V +>{
  //   ClassDef5 = ld ClassDef;
  //   ClassDef6 = force? ClassDef5;
  //   checkMissing(ClassDef6);
  //   return ClassDef6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_6, CCP, RHO);
  // p7 = prom<V +>{
  //   exts4 = ld exts;
  //   exts5 = force? exts4;
  //   checkMissing(exts5);
  //   return exts5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_7, CCP, RHO);
  // p8 = prom<V +>{
  //   where3 = ld where;
  //   where4 = force? where3;
  //   checkMissing(where4);
  //   return where4;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_8, CCP, RHO);
  // r33 = dyn _S3Extends(p6, p7, p8)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__S3Extends, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

D13_:;
  // deopt 57 [r33]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L51_:;
  // st exts = r33
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // goto L11(r33)
  // L11(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L11_;

L54_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r38 = dyn missing(<sym class2>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L13(r38)
  // L13(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L13_;

L55_:;
  // r36 = dyn base5(<sym class2>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L13(r36)
  // L13(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L13_;

L56_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard6 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // __3 = ldf `@` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r42 = dyn __3(<sym ClassDef>, <sym subclasses>)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names19, CCP, RHO);
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r43 = dyn length2(r42)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L59() else D14()
  // L59()
  goto L59_;

L58_:;
  // r40 = dyn base6(<lang `@`(ClassDef, subclasses)>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L15(c14, r40)
  // L15(c14, r40)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L15_;

D14_:;
  // deopt 72 [c14, r43]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L15(c14, r43)
  // L15(c14, r43)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r43_;
  goto L15_;

L61_:;
  // st strictBy = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_const(CCP, 13), RHO);
  (void)(Rsh_const(CCP, 13));
  // _transitiveSubclasses = ldf `.transitiveSubclasses`
  Rsh_Fir_reg__transitiveSubclasses = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

D15_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L62_:;
  // p9 = prom<V +>{
  //   __4 = ldf `@` in base;
  //   r44 = dyn __4(<sym ClassDef>, <sym className>);
  //   return r44;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_9, CCP, RHO);
  // p10 = prom<V +>{
  //   class3 = ld class2;
  //   class4 = force? class3;
  //   checkMissing(class4);
  //   return class4;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_10, CCP, RHO);
  // p11 = prom<V +>{
  //   extensionDef1 = ld extensionDef;
  //   extensionDef2 = force? extensionDef1;
  //   checkMissing(extensionDef2);
  //   return extensionDef2;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_11, CCP, RHO);
  // p12 = prom<V +>{
  //   __5 = ldf `@` in base;
  //   r48 = dyn __5(<sym ClassDef>, <sym subclasses>);
  //   return r48;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_12, CCP, RHO);
  // p13 = prom<V +>{
  //   strictBy = ld strictBy;
  //   strictBy1 = force? strictBy;
  //   checkMissing(strictBy1);
  //   return strictBy1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_13, CCP, RHO);
  // r51 = dyn _transitiveSubclasses(p9, p10, p11, p12, p13)
  SEXP Rsh_Fir_array_args72[5];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args72[3] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args72[4] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names24[5];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__transitiveSubclasses, 5, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L63() else D16()
  // L63()
  goto L63_;

D16_:;
  // deopt 84 [r51]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L63_:;
  // st subclasses = r51
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // sym7 = ldf seq_along
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base7 = ldf seq_along in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard7 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L64_:;
  // subclasses = ld subclasses
  Rsh_Fir_reg_subclasses = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L66() else D17()
  // L66()
  goto L66_;

L65_:;
  // r52 = dyn base7(<sym subclasses>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L17(r52)
  // L17(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L17_;

D17_:;
  // deopt 87 [subclasses]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_subclasses;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L66_:;
  // subclasses1 = force? subclasses
  Rsh_Fir_reg_subclasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclasses);
  // checkMissing(subclasses1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_subclasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // r54 = seq_along(subclasses1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_subclasses1_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L17(r54)
  // L17(r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L17_;

L67_:;
  // goto L23()
  // L23()
  goto L23_;

D18_:;
  // deopt 90 [i14, subclasses2]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_subclasses2_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L68_:;
  // subclasses3 = force? subclasses2
  Rsh_Fir_reg_subclasses3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subclasses2_);
  // checkMissing(subclasses3)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_subclasses3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(subclasses3)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_subclasses3_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c25 then L69() else L70(i14, subclasses3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L69()
    goto L69_;
  } else {
  // L70(i14, subclasses3)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_subclasses5_ = Rsh_Fir_reg_subclasses3_;
    goto L70_;
  }

L69_:;
  // dr2 = tryDispatchBuiltin.1("[[", subclasses3)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_subclasses3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc1 then L71() else L70(i14, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L71()
    goto L71_;
  } else {
  // L70(i14, dr2)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_subclasses5_ = Rsh_Fir_reg_dr2_;
    goto L70_;
  }

L70_:;
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L72() else D19()
  // L72()
  goto L72_;

L71_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L19(i14, dx2)
  // L19(i14, dx2)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L19_;

D19_:;
  // deopt 92 [i18, subclasses5, i21]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_subclasses5_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(92, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L72_:;
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r55 = dyn __6(subclasses5, i22)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_subclasses5_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L19(i18, r55)
  // L19(i18, r55)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r55_;
  goto L19_;

D20_:;
  // deopt 97 [i20]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L73_:;
  // p14 = prom<V +>{
  //   __7 = ldf `@` in base;
  //   r56 = dyn __7(<sym obji>, <sym subClass>);
  //   return r56;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_14, CCP, RHO);
  // p15 = prom<V +>{
  //   class5 = ld class2;
  //   class6 = force? class5;
  //   checkMissing(class6);
  //   return class6;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_15, CCP, RHO);
  // r59 = dyn extends(p14, p15)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_extends, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L74() else D21()
  // L74()
  goto L74_;

D21_:;
  // deopt 100 [i20, r59]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L74_:;
  // r60 = `!`(r59)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // c26 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if c26 then L75() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L75()
    goto L75_;
  } else {
  // L20()
    goto L20_;
  }

L75_:;
  // setIs = ldf setIs
  Rsh_Fir_reg_setIs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L76() else D22()
  // L76()
  goto L76_;

D22_:;
  // deopt 103 [i20]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L76_:;
  // p16 = prom<V +>{
  //   __8 = ldf `@` in base;
  //   r61 = dyn __8(<sym obji>, <sym subClass>);
  //   return r61;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_16, CCP, RHO);
  // p17 = prom<V +>{
  //   class7 = ld class2;
  //   class8 = force? class7;
  //   checkMissing(class8);
  //   return class8;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_17, CCP, RHO);
  // p18 = prom<V +>{
  //   obji = ld obji;
  //   obji1 = force? obji;
  //   checkMissing(obji1);
  //   return obji1;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_18, CCP, RHO);
  // p19 = prom<V +>{
  //   where5 = ld where;
  //   where6 = force? where5;
  //   checkMissing(where6);
  //   return where6;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3883676954_19, CCP, RHO);
  // r66 = dyn setIs[, , extensionObject, doComplete, where](p16, p17, p18, FALSE, p19)
  SEXP Rsh_Fir_array_args92[5];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args92[3] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args92[4] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names30[5];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = Rsh_const(CCP, 41);
  Rsh_Fir_array_arg_names30[3] = Rsh_const(CCP, 42);
  Rsh_Fir_array_arg_names30[4] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setIs, 5, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L77() else D23()
  // L77()
  goto L77_;

D23_:;
  // deopt 112 [i20, r66]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L21(i20)
  // L21(i20)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i20_;
  goto L21_;

D24_:;
  // deopt 120 [exts6]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_exts6_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L80_:;
  // exts7 = force? exts6
  Rsh_Fir_reg_exts7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exts6_);
  // checkMissing(exts7)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_exts7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return exts7
  return Rsh_Fir_reg_exts7_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_(SEXP CCP, SEXP RHO) {
  // ext2 = ld ext
  Rsh_Fir_reg_ext2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // ext3 = force? ext2
  Rsh_Fir_reg_ext3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ext2_);
  // checkMissing(ext3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_ext3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(ext3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_ext3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(ext3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(ext3)
    Rsh_Fir_reg_ext5_ = Rsh_Fir_reg_ext3_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", ext3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_ext3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_ext5_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r4 = dyn __1(ext5, i6)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_ext5_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_1(SEXP CCP, SEXP RHO) {
  // ClassDef1 = ld ClassDef
  Rsh_Fir_reg_ClassDef1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ClassDef2 = force? ClassDef1
  Rsh_Fir_reg_ClassDef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef1_);
  // checkMissing(ClassDef2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_ClassDef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return ClassDef2
  return Rsh_Fir_reg_ClassDef2_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_2(SEXP CCP, SEXP RHO) {
  // ClassDef3 = ld ClassDef
  Rsh_Fir_reg_ClassDef3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ClassDef4 = force? ClassDef3
  Rsh_Fir_reg_ClassDef4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef3_);
  // checkMissing(ClassDef4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_ClassDef4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return ClassDef4
  return Rsh_Fir_reg_ClassDef4_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_3(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_4(SEXP CCP, SEXP RHO) {
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // ext6 = ld ext
  Rsh_Fir_reg_ext6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // ext7 = force? ext6
  Rsh_Fir_reg_ext7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ext6_);
  // checkMissing(ext7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_ext7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r14 = dyn attr(ext7, "conflicts")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ext7_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base1(<sym ext>, "conflicts")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_5(SEXP CCP, SEXP RHO) {
  // sym3 = ldf names
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // exts2 = ld exts
  Rsh_Fir_reg_exts2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // exts3 = force? exts2
  Rsh_Fir_reg_exts3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exts2_);
  // checkMissing(exts3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_exts3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r22 = dyn names(exts3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_exts3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base3(<sym exts>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_6(SEXP CCP, SEXP RHO) {
  // ClassDef5 = ld ClassDef
  Rsh_Fir_reg_ClassDef5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ClassDef6 = force? ClassDef5
  Rsh_Fir_reg_ClassDef6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef5_);
  // checkMissing(ClassDef6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_ClassDef6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return ClassDef6
  return Rsh_Fir_reg_ClassDef6_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_7(SEXP CCP, SEXP RHO) {
  // exts4 = ld exts
  Rsh_Fir_reg_exts4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // exts5 = force? exts4
  Rsh_Fir_reg_exts5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exts4_);
  // checkMissing(exts5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_exts5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return exts5
  return Rsh_Fir_reg_exts5_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_8(SEXP CCP, SEXP RHO) {
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return where4
  return Rsh_Fir_reg_where4_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_9(SEXP CCP, SEXP RHO) {
  // __4 = ldf `@` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r44 = dyn __4(<sym ClassDef>, <sym className>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names22, CCP, RHO);
  // return r44
  return Rsh_Fir_reg_r44_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_10(SEXP CCP, SEXP RHO) {
  // class3 = ld class2
  Rsh_Fir_reg_class3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // class4 = force? class3
  Rsh_Fir_reg_class4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class3_);
  // checkMissing(class4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_class4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return class4
  return Rsh_Fir_reg_class4_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_11(SEXP CCP, SEXP RHO) {
  // extensionDef1 = ld extensionDef
  Rsh_Fir_reg_extensionDef1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // extensionDef2 = force? extensionDef1
  Rsh_Fir_reg_extensionDef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extensionDef1_);
  // checkMissing(extensionDef2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_extensionDef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return extensionDef2
  return Rsh_Fir_reg_extensionDef2_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_12(SEXP CCP, SEXP RHO) {
  // __5 = ldf `@` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r48 = dyn __5(<sym ClassDef>, <sym subclasses>)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names23, CCP, RHO);
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_13(SEXP CCP, SEXP RHO) {
  // strictBy = ld strictBy
  Rsh_Fir_reg_strictBy = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // strictBy1 = force? strictBy
  Rsh_Fir_reg_strictBy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strictBy);
  // checkMissing(strictBy1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_strictBy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return strictBy1
  return Rsh_Fir_reg_strictBy1_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_14(SEXP CCP, SEXP RHO) {
  // __7 = ldf `@` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r56 = dyn __7(<sym obji>, <sym subClass>)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names27, CCP, RHO);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_15(SEXP CCP, SEXP RHO) {
  // class5 = ld class2
  Rsh_Fir_reg_class5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // class6 = force? class5
  Rsh_Fir_reg_class6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class5_);
  // checkMissing(class6)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_class6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return class6
  return Rsh_Fir_reg_class6_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_16(SEXP CCP, SEXP RHO) {
  // __8 = ldf `@` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r61 = dyn __8(<sym obji>, <sym subClass>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names29, CCP, RHO);
  // return r61
  return Rsh_Fir_reg_r61_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_17(SEXP CCP, SEXP RHO) {
  // class7 = ld class2
  Rsh_Fir_reg_class7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // class8 = force? class7
  Rsh_Fir_reg_class8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class7_);
  // checkMissing(class8)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_class8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return class8
  return Rsh_Fir_reg_class8_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_18(SEXP CCP, SEXP RHO) {
  // obji = ld obji
  Rsh_Fir_reg_obji = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // obji1 = force? obji
  Rsh_Fir_reg_obji1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obji);
  // checkMissing(obji1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_obji1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return obji1
  return Rsh_Fir_reg_obji1_;
}
SEXP Rsh_Fir_user_promise_inner3883676954_19(SEXP CCP, SEXP RHO) {
  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return where6
  return Rsh_Fir_reg_where6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
