#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3452071595_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3452071595_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3452071595_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3452071595_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3452071595_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3452071595_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3452071595_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3452071595_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3452071595_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner3452071595
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3452071595_, RHO, CCP);
  // st getSrcFilename = r
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
SEXP Rsh_Fir_user_function_inner3452071595_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3452071595 dynamic dispatch ([x, `full.names`, unique])

  return Rsh_Fir_user_version_inner3452071595_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3452071595_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3452071595 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3452071595/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_full_names;  // full_names
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_full_names_isMissing;  // full_names_isMissing
  SEXP Rsh_Fir_reg_full_names_orDefault;  // full_names_orDefault
  SEXP Rsh_Fir_reg_unique_isMissing;  // unique_isMissing
  SEXP Rsh_Fir_reg_unique_orDefault;  // unique_orDefault
  SEXP Rsh_Fir_reg_getSrcref;  // getSrcref
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_srcref;  // srcref
  SEXP Rsh_Fir_reg_srcref1_;  // srcref1
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sapply;  // sapply
  SEXP Rsh_Fir_reg_srcref2_;  // srcref2
  SEXP Rsh_Fir_reg_srcref3_;  // srcref3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_getSrcFilename;  // getSrcFilename
  SEXP Rsh_Fir_reg_getSrcFilename1_;  // getSrcFilename1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_full_names1_;  // full_names1
  SEXP Rsh_Fir_reg_full_names2_;  // full_names2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_unique1_;  // unique1
  SEXP Rsh_Fir_reg_unique2_;  // unique2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_srcref4_;  // srcref4
  SEXP Rsh_Fir_reg_srcref5_;  // srcref5
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_srcfile;  // srcfile
  SEXP Rsh_Fir_reg_srcfile1_;  // srcfile1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_srcfile2_;  // srcfile2
  SEXP Rsh_Fir_reg_srcfile3_;  // srcfile3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_srcfile5_;  // srcfile5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_full_names3_;  // full_names3
  SEXP Rsh_Fir_reg_full_names4_;  // full_names4
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_result;  // result
  SEXP Rsh_Fir_reg_result1_;  // result1
  SEXP Rsh_Fir_reg_result2_;  // result2
  SEXP Rsh_Fir_reg_basename;  // basename
  SEXP Rsh_Fir_reg_result3_;  // result3
  SEXP Rsh_Fir_reg_result4_;  // result4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_unique3_;  // unique3
  SEXP Rsh_Fir_reg_unique4_;  // unique4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_unique5_;  // unique5
  SEXP Rsh_Fir_reg_result5_;  // result5
  SEXP Rsh_Fir_reg_result6_;  // result6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_result7_;  // result7
  SEXP Rsh_Fir_reg_result8_;  // result8

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_full_names = PARAMS[1];
  Rsh_Fir_reg_unique = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // full_names_isMissing = missing.0(full_names)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_full_names;
  Rsh_Fir_reg_full_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if full_names_isMissing then L0(FALSE) else L0(full_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_full_names_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_full_names_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(full_names)
    Rsh_Fir_reg_full_names_orDefault = Rsh_Fir_reg_full_names;
    goto L0_;
  }

L0_:;
  // st `full.names` = full_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_full_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_full_names_orDefault);
  // unique_isMissing = missing.0(unique)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_unique;
  Rsh_Fir_reg_unique_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if unique_isMissing then L1(TRUE) else L1(unique)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_unique_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_unique_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(unique)
    Rsh_Fir_reg_unique_orDefault = Rsh_Fir_reg_unique;
    goto L1_;
  }

L1_:;
  // st unique = unique_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_unique_orDefault, RHO);
  (void)(Rsh_Fir_reg_unique_orDefault);
  // getSrcref = ldf getSrcref
  Rsh_Fir_reg_getSrcref = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L2_:;
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L17() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L4_:;
  // full_names3 = ld `full.names`
  Rsh_Fir_reg_full_names3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

L5_:;
  // st srcfile = r12
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L6_:;
  // c2 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c2 then L28() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L28()
    goto L28_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // srcfile2 = ld srcfile
  Rsh_Fir_reg_srcfile2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

L8_:;
  // basename = ldf basename
  Rsh_Fir_reg_basename = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L41() else D14()
  // L41()
  goto L41_;

L9_:;
  // st result = result2
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_result2_, RHO);
  (void)(Rsh_Fir_reg_result2_);
  // unique3 = ld unique
  Rsh_Fir_reg_unique3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L43() else D16()
  // L43()
  goto L43_;

L10_:;
  // result7 = ld result
  Rsh_Fir_reg_result7_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L48() else D19()
  // L48()
  goto L48_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3452071595_, CCP, RHO);
  // r1 = dyn getSrcref(p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getSrcref, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // st srcref = r1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `is.list`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf `is.list` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // srcref = ld srcref
  Rsh_Fir_reg_srcref = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

L14_:;
  // r2 = dyn base(<sym srcref>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D2_:;
  // deopt 7 [srcref]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_srcref;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // srcref1 = force? srcref
  Rsh_Fir_reg_srcref1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref);
  // checkMissing(srcref1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_srcref1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r4 = dyn is_list(srcref1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_srcref1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

D3_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L2_;

L17_:;
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

D4_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p1 = prom<V +>{
  //   srcref2 = ld srcref;
  //   srcref3 = force? srcref2;
  //   checkMissing(srcref3);
  //   return srcref3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3452071595_1, CCP, RHO);
  // p2 = prom<V +>{
  //   getSrcFilename = ld getSrcFilename;
  //   getSrcFilename1 = force? getSrcFilename;
  //   checkMissing(getSrcFilename1);
  //   return getSrcFilename1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3452071595_2, CCP, RHO);
  // p3 = prom<V +>{
  //   full_names1 = ld `full.names`;
  //   full_names2 = force? full_names1;
  //   checkMissing(full_names2);
  //   return full_names2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3452071595_3, CCP, RHO);
  // p4 = prom<V +>{
  //   unique1 = ld unique;
  //   unique2 = force? unique1;
  //   checkMissing(unique2);
  //   return unique2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3452071595_4, CCP, RHO);
  // r9 = dyn sapply(p1, p2, p3, p4)
  SEXP Rsh_Fir_array_args16[4];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args16[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 4, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

D5_:;
  // deopt 17 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // st result = r9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // goto L4()
  // L4()
  goto L4_;

L21_:;
  // srcref4 = ld srcref
  Rsh_Fir_reg_srcref4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L22_:;
  // r11 = dyn base1(<sym srcref>, "srcfile")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L5_;

D6_:;
  // deopt 21 [srcref4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_srcref4_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // srcref5 = force? srcref4
  Rsh_Fir_reg_srcref5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref4_);
  // checkMissing(srcref5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_srcref5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r13 = dyn attr(srcref5, "srcfile")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_srcref5_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

D7_:;
  // deopt 25 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L5_;

L25_:;
  // srcfile = ld srcfile
  Rsh_Fir_reg_srcfile = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

L26_:;
  // r14 = dyn base2(<sym srcfile>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L6_;

D8_:;
  // deopt 28 [srcfile]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_srcfile;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L27_:;
  // srcfile1 = force? srcfile
  Rsh_Fir_reg_srcfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile);
  // checkMissing(srcfile1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_srcfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c1 = `==`(srcfile1, NULL)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_srcfile1_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L6(c1)
  // L6(c1)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_c1_;
  goto L6_;

L28_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L29() else D9()
  // L29()
  goto L29_;

D9_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // r16 = dyn character()
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L30() else D10()
  // L30()
  goto L30_;

D10_:;
  // deopt 33 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // st result = r16
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // goto L4()
  // L4()
  goto L4_;

D11_:;
  // deopt 35 [srcfile2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_srcfile2_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L32_:;
  // srcfile3 = force? srcfile2
  Rsh_Fir_reg_srcfile3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile2_);
  // checkMissing(srcfile3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_srcfile3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(srcfile3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_srcfile3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c3 then L34() else L35(srcfile3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L34()
    goto L34_;
  } else {
  // L35(srcfile3)
    Rsh_Fir_reg_srcfile5_ = Rsh_Fir_reg_srcfile3_;
    goto L35_;
  }

L33_:;
  // st result = dx1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L4()
  // L4()
  goto L4_;

L34_:;
  // dr = tryDispatchBuiltin.1("$", srcfile3)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_srcfile3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc then L36() else L35(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L36()
    goto L36_;
  } else {
  // L35(dr)
    Rsh_Fir_reg_srcfile5_ = Rsh_Fir_reg_dr;
    goto L35_;
  }

L35_:;
  // r17 = `$`(srcfile5, <sym filename>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_srcfile5_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L33(r17)
  // L33(r17)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r17_;
  goto L33_;

L36_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L33(dx)
  // L33(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L33_;

D12_:;
  // deopt 39 [full_names3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_full_names3_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // full_names4 = force? full_names3
  Rsh_Fir_reg_full_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_full_names3_);
  // checkMissing(full_names4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_full_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(full_names4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_full_names4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c4 then L38() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L38()
    goto L38_;
  } else {
  // L8()
    goto L8_;
  }

L38_:;
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L39() else D13()
  // L39()
  goto L39_;

D13_:;
  // deopt 41 [result]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L39_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // goto L9(result1)
  // L9(result1)
  Rsh_Fir_reg_result2_ = Rsh_Fir_reg_result1_;
  goto L9_;

D14_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p5 = prom<V +>{
  //   result3 = ld result;
  //   result4 = force? result3;
  //   checkMissing(result4);
  //   return result4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3452071595_5, CCP, RHO);
  // r19 = dyn basename(p5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_basename, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L42() else D15()
  // L42()
  goto L42_;

D15_:;
  // deopt 46 [r19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_result2_ = Rsh_Fir_reg_r19_;
  goto L9_;

D16_:;
  // deopt 48 [unique3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_unique3_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L43_:;
  // unique4 = force? unique3
  Rsh_Fir_reg_unique4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unique3_);
  // checkMissing(unique4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_unique4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(unique4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_unique4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c5 then L44() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L44()
    goto L44_;
  } else {
  // L10()
    goto L10_;
  }

L44_:;
  // unique5 = ldf unique
  Rsh_Fir_reg_unique5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L45() else D17()
  // L45()
  goto L45_;

D17_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p6 = prom<V +>{
  //   result5 = ld result;
  //   result6 = force? result5;
  //   checkMissing(result6);
  //   return result6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3452071595_6, CCP, RHO);
  // r21 = dyn unique5(p6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique5_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L46() else D18()
  // L46()
  goto L46_;

D18_:;
  // deopt 53 [r21]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L46_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;

D19_:;
  // deopt 54 [result7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_result7_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L48_:;
  // result8 = force? result7
  Rsh_Fir_reg_result8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result7_);
  // checkMissing(result8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_result8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result8
  return Rsh_Fir_reg_result8_;
}
SEXP Rsh_Fir_user_promise_inner3452071595_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3452071595_1(SEXP CCP, SEXP RHO) {
  // srcref2 = ld srcref
  Rsh_Fir_reg_srcref2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // srcref3 = force? srcref2
  Rsh_Fir_reg_srcref3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref2_);
  // checkMissing(srcref3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_srcref3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return srcref3
  return Rsh_Fir_reg_srcref3_;
}
SEXP Rsh_Fir_user_promise_inner3452071595_2(SEXP CCP, SEXP RHO) {
  // getSrcFilename = ld getSrcFilename
  Rsh_Fir_reg_getSrcFilename = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // getSrcFilename1 = force? getSrcFilename
  Rsh_Fir_reg_getSrcFilename1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_getSrcFilename);
  // checkMissing(getSrcFilename1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_getSrcFilename1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return getSrcFilename1
  return Rsh_Fir_reg_getSrcFilename1_;
}
SEXP Rsh_Fir_user_promise_inner3452071595_3(SEXP CCP, SEXP RHO) {
  // full_names1 = ld `full.names`
  Rsh_Fir_reg_full_names1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // full_names2 = force? full_names1
  Rsh_Fir_reg_full_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_full_names1_);
  // checkMissing(full_names2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_full_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return full_names2
  return Rsh_Fir_reg_full_names2_;
}
SEXP Rsh_Fir_user_promise_inner3452071595_4(SEXP CCP, SEXP RHO) {
  // unique1 = ld unique
  Rsh_Fir_reg_unique1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // unique2 = force? unique1
  Rsh_Fir_reg_unique2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unique1_);
  // checkMissing(unique2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_unique2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return unique2
  return Rsh_Fir_reg_unique2_;
}
SEXP Rsh_Fir_user_promise_inner3452071595_5(SEXP CCP, SEXP RHO) {
  // result3 = ld result
  Rsh_Fir_reg_result3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // result4 = force? result3
  Rsh_Fir_reg_result4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result3_);
  // checkMissing(result4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_result4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return result4
  return Rsh_Fir_reg_result4_;
}
SEXP Rsh_Fir_user_promise_inner3452071595_6(SEXP CCP, SEXP RHO) {
  // result5 = ld result
  Rsh_Fir_reg_result5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // result6 = force? result5
  Rsh_Fir_reg_result6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result5_);
  // checkMissing(result6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_result6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return result6
  return Rsh_Fir_reg_result6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
