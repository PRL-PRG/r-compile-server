#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1023099298_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1023099298_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r3_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1023099298
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1023099298_, RHO, CCP);
  // st structure = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   return <int 2, 3>;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r3 = dyn structure[, dim](p, p1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6>
  return Rsh_const(CCP, 1);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 2, 3>
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_function_inner1023099298_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1023099298 dynamic dispatch ([`.Data`, `...`])

  return Rsh_Fir_user_version_inner1023099298_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1023099298_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1023099298 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1023099298/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg__Data;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg__Data1_;
  SEXP Rsh_Fir_reg__Data2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_attrib;
  SEXP Rsh_Fir_reg_attrib1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_attrib2_;
  SEXP Rsh_Fir_reg_attrib3_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_attrnames;
  SEXP Rsh_Fir_reg_attrnames1_;
  SEXP Rsh_Fir_reg_specials;
  SEXP Rsh_Fir_reg_specials1_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_ok;
  SEXP Rsh_Fir_reg_ok1_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_replace;
  SEXP Rsh_Fir_reg_replace1_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_replace3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_replace5_;
  SEXP Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_replace7_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_ok2_;
  SEXP Rsh_Fir_reg_ok3_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_ok4_;
  SEXP Rsh_Fir_reg_ok5_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_attrib4_;
  SEXP Rsh_Fir_reg_attrib5_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg__Data3_;
  SEXP Rsh_Fir_reg__Data4_;
  SEXP Rsh_Fir_reg_typeof;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_storage_mode__;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg__Data5_;
  SEXP Rsh_Fir_reg__Data6_;
  SEXP Rsh_Fir_reg_attributes;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_attrib8_;
  SEXP Rsh_Fir_reg_attrib9_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_attributes__;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg__Data7_;
  SEXP Rsh_Fir_reg__Data8_;

  // Bind parameters
  Rsh_Fir_reg__Data = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `.Data` = _Data
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg__Data, RHO);
  (void)(Rsh_Fir_reg__Data);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L0_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c1 then L29() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L29()
    goto L29_;
  } else {
  // L1()
    goto L1_;
  }

L26_:;
  // _Data1 = ld `.Data`
  Rsh_Fir_reg__Data1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L28() else D0()
  // L28()
  goto L28_;

L27_:;
  // r = dyn base(<sym .Data>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [_Data1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg__Data1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L28_:;
  // _Data2 = force? _Data1
  Rsh_Fir_reg__Data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Data1_);
  // checkMissing(_Data2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg__Data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = `==`(_Data2, NULL)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg__Data2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args6);
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L29_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L30() else D1()
  // L30()
  goto L30_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // st attrib = r5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L30_:;
  // r2 = dyn warning("Calling 'structure(NULL, *)' is deprecated, as NULL cannot have attributes.\n  Consider 'structure(list(), *)' instead.")
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L31() else D2()
  // L31()
  goto L31_;

L33_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L35() else D3()
  // L35()
  goto L35_;

L34_:;
  // r4 = dyn base1(<sym ...>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L3_;

D2_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // c2 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c2 then L41() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L41()
    goto L41_;
  } else {
  // L5()
    goto L5_;
  }

L31_:;
  // goto L2()
  // L2()
  goto L2_;

L35_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // r6 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

L37_:;
  // attrib = ld attrib
  Rsh_Fir_reg_attrib = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

L38_:;
  // r7 = dyn base2(<sym attrib>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D4_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 18 [attrib]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_attrib;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // _Data7 = ld `.Data`
  Rsh_Fir_reg__Data7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L112() else D38()
  // L112()
  goto L112_;

L36_:;
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L3_;

L39_:;
  // attrib1 = force? attrib
  Rsh_Fir_reg_attrib1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_attrib);
  // checkMissing(attrib1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_attrib1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r9 = dyn length(attrib1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_attrib1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

L41_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard3 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

D6_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 146 [_Data7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg__Data7_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L6_:;
  // st specials = r11
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard4 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L40_:;
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L4_;

L42_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r12 = dyn c3(".Dim", ".Dimnames", ".Names", ".Tsp", ".Label")
  SEXP Rsh_Fir_array_args17[5];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args17[4] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[5];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_array_arg_names7[4] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 5, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

L43_:;
  // r10 = dyn base3(".Dim", ".Dimnames", ".Names", ".Tsp", ".Label")
  SEXP Rsh_Fir_array_args18[5];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args18[4] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names8[5];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_array_arg_names8[4] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 5, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L6_;

L112_:;
  // _Data8 = force? _Data7
  Rsh_Fir_reg__Data8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Data7_);
  // checkMissing(_Data8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg__Data8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return _Data8
  return Rsh_Fir_reg__Data8_;

D7_:;
  // deopt 30 [r12]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L7_:;
  // st attrnames = r14
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard5 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L44_:;
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L6_;

L45_:;
  // attrib2 = ld attrib
  Rsh_Fir_reg_attrib2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

L46_:;
  // r13 = dyn base4(<sym attrib>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D8_:;
  // deopt 34 [attrib2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_attrib2_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L8_:;
  // st m = r17
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym6 = ldf `is.na`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base6 = ldf `is.na` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard6 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L47_:;
  // attrib3 = force? attrib2
  Rsh_Fir_reg_attrib3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_attrib2_);
  // checkMissing(attrib3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_attrib3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r15 = dyn names(attrib3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_attrib3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

L49_:;
  // attrnames = ld attrnames
  Rsh_Fir_reg_attrnames = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L51() else D10()
  // L51()
  goto L51_;

L50_:;
  // r16 = dyn base5(<sym attrnames>, <sym specials>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L8_;

D9_:;
  // deopt 37 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 41 [attrnames]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_attrnames;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L9_:;
  // r22 = `!`(r20)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args26);
  // st ok = r22
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym7 = ldf any
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base7 = ldf any in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard7 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L48_:;
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

L51_:;
  // attrnames1 = force? attrnames
  Rsh_Fir_reg_attrnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_attrnames);
  // checkMissing(attrnames1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_attrnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // specials = ld specials
  Rsh_Fir_reg_specials = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L52() else D11()
  // L52()
  goto L52_;

L54_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L56() else D13()
  // L56()
  goto L56_;

L55_:;
  // r19 = dyn base6(<sym m>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L9_;

D11_:;
  // deopt 43 [specials]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_specials;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 52 [m]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L10_:;
  // c4 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // if c4 then L62() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L62()
    goto L62_;
  } else {
  // L11()
    goto L11_;
  }

L52_:;
  // specials1 = force? specials
  Rsh_Fir_reg_specials1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_specials);
  // checkMissing(specials1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_specials1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r18 = dyn match(attrnames1, specials1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_attrnames1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_specials1_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

L56_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r21 = dyn is_na(m1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L57() else D14()
  // L57()
  goto L57_;

L58_:;
  // ok = ld ok
  Rsh_Fir_reg_ok = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L60() else D15()
  // L60()
  goto L60_;

L59_:;
  // r23 = dyn base7(<sym ok>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L10_;

D12_:;
  // deopt 48 [r18]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 55 [r21]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 60 [ok]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_ok;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // sym9 = ldf any
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base9 = ldf any in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard9 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L53_:;
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L8_;

L57_:;
  // goto L9(r21)
  // L9(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L9_;

L60_:;
  // ok1 = force? ok
  Rsh_Fir_reg_ok1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok);
  // checkMissing(ok1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_ok1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r25 = dyn any(ok1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ok1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L61() else D16()
  // L61()
  goto L61_;

L62_:;
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard8 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

D16_:;
  // deopt 63 [r25]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L12_:;
  // st replace = r27
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // replace = ld replace
  Rsh_Fir_reg_replace = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L66() else D18()
  // L66()
  goto L66_;

L17_:;
  // c10 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c10 then L91() else L19(c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L91()
    goto L91_;
  } else {
  // L19(c10)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
    goto L19_;
  }

L61_:;
  // goto L10(r25)
  // L10(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L10_;

L63_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r28 = dyn c5("dim", "dimnames", "names", "tsp", "levels")
  SEXP Rsh_Fir_array_args41[5];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args41[4] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names17[5];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 5, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L65() else D17()
  // L65()
  goto L65_;

L64_:;
  // r26 = dyn base8("dim", "dimnames", "names", "tsp", "levels")
  SEXP Rsh_Fir_array_args42[5];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args42[3] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args42[4] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names18[5];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 5, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L12(r26)
  // L12(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L12_;

L84_:;
  // attrib4 = ld attrib
  Rsh_Fir_reg_attrib4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L86() else D26()
  // L86()
  goto L86_;

L85_:;
  // r36 = dyn base9(<lang `==`(`[[`(attrib, "class", exact=TRUE), "factor")>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L17(r36)
  // L17(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L17_;

D17_:;
  // deopt 72 [r28]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 74 [replace]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_replace;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 98 [attrib4]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_attrib4_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L19_:;
  // c19 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c19 then L97() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L97()
    goto L97_;
  } else {
  // L21()
    goto L21_;
  }

L65_:;
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L12_;

L66_:;
  // replace1 = force? replace
  Rsh_Fir_reg_replace1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_replace);
  // checkMissing(replace1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_replace1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(replace1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_replace1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args46);
  // if c6 then L67() else L68(replace1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L67()
    goto L67_;
  } else {
  // L68(replace1)
    Rsh_Fir_reg_replace3_ = Rsh_Fir_reg_replace1_;
    goto L68_;
  }

L86_:;
  // attrib5 = force? attrib4
  Rsh_Fir_reg_attrib5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_attrib4_);
  // checkMissing(attrib5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_attrib5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(attrib5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_attrib5_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args48);
  // if c9 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L91_:;
  // sym10 = ldf typeof
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base10 = ldf typeof in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard10 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L13_:;
  // l = ld attrib
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // names1 = ldf names
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L75() else D21()
  // L75()
  goto L75_;

L18_:;
  // r39 = `==`(dx12, "factor")
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args50);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r40 = dyn any1(r39)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L90() else D27()
  // L90()
  goto L90_;

L20_:;
  // r44 = `==`(r42, "double")
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args52);
  // c16 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args53);
  // c17 = `&&`(c15, c16)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args54);
  // goto L19(c17)
  // L19(c17)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c17_;
  goto L19_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard11 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L67_:;
  // dr = tryDispatchBuiltin.1("[", replace1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_replace1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args56);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc then L69() else L68(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L69()
    goto L69_;
  } else {
  // L68(dr)
    Rsh_Fir_reg_replace3_ = Rsh_Fir_reg_dr;
    goto L68_;
  }

L68_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L70() else D19()
  // L70()
  goto L70_;

L87_:;
  // dr6 = tryDispatchBuiltin.1("[[", attrib5)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_attrib5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc3 then L89() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L89()
    goto L89_;
  } else {
  // L88()
    goto L88_;
  }

L88_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r38 = dyn __2(attrib5, "class", TRUE)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_attrib5_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L18(r38)
  // L18(r38)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r38_;
  goto L18_;

L92_:;
  // _Data3 = ld `.Data`
  Rsh_Fir_reg__Data3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L94() else D28()
  // L94()
  goto L94_;

L93_:;
  // r41 = dyn base10(<sym .Data>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L20(c10, r41)
  // L20(c10, r41)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L20_;

L97_:;
  // l5 = ld `.Data`
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L98() else D30()
  // L98()
  goto L98_;

D19_:;
  // deopt 76 [replace3, m2]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_replace3_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 83 [dx1, l, dx1]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(83, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 108 [r40]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 111 [c10, _Data3]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg__Data3_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 121 ["integer", l5, "integer"]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_const(CCP, 44);
  Rsh_Fir_deopt(121, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L23_:;
  // l6 = ld `.Data`
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // attributes__ = ldf `attributes<-`
  Rsh_Fir_reg_attributes__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L109() else D36()
  // L109()
  goto L109_;

L69_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L13(dx)
  // L13(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L13_;

L70_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(m3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args64);
  // if c7 then L71() else L72(replace3, m3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L71()
    goto L71_;
  } else {
  // L72(replace3, m3)
    Rsh_Fir_reg_replace5_ = Rsh_Fir_reg_replace3_;
    Rsh_Fir_reg_m5_ = Rsh_Fir_reg_m3_;
    goto L72_;
  }

L75_:;
  // r31 = dyn names1(dx1, NULL)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L76() else D22()
  // L76()
  goto L76_;

L89_:;
  // dx11 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L18(dx11)
  // L18(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L18_;

L90_:;
  // goto L17(r40)
  // L17(r40)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r40_;
  goto L17_;

L94_:;
  // _Data4 = force? _Data3
  Rsh_Fir_reg__Data4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Data3_);
  // checkMissing(_Data4)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg__Data4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // typeof = ldf typeof in base
  Rsh_Fir_reg_typeof = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r43 = dyn typeof(_Data4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg__Data4_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_typeof, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L95() else D29()
  // L95()
  goto L95_;

L98_:;
  // r45 = dyn storage_mode__(l5, NULL, "integer")
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L99() else D31()
  // L99()
  goto L99_;

L101_:;
  // sym12 = ldf attributes
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base12 = ldf attributes in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard12 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L102_:;
  // r47 = dyn base11(<lang attributes(.Data)>, <sym attrib>)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L23(r47)
  // L23(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L23_;

D22_:;
  // deopt 85 [dx1, l, dx1, r31]
  SEXP Rsh_Fir_array_deopt_stack25[4];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(85, 4, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 114 [c10, r43]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 123 ["integer", r45]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 140 [r48, l6, r48]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(140, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L14_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r30 = dyn __1(replace7, dx3)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_replace7_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L13(r30)
  // L13(r30)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r30_;
  goto L13_;

L24_:;
  // attrib8 = ld attrib
  Rsh_Fir_reg_attrib8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L107() else D34()
  // L107()
  goto L107_;

L71_:;
  // dr2 = tryDispatchBuiltin.1("[", m3)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_m3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc1 then L73() else L72(replace3, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L73()
    goto L73_;
  } else {
  // L72(replace3, dr2)
    Rsh_Fir_reg_replace5_ = Rsh_Fir_reg_replace3_;
    Rsh_Fir_reg_m5_ = Rsh_Fir_reg_dr2_;
    goto L72_;
  }

L72_:;
  // ok2 = ld ok
  Rsh_Fir_reg_ok2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L74() else D20()
  // L74()
  goto L74_;

L76_:;
  // c8 = `is.object`(r31)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args75);
  // if c8 then L77() else L78(dx1, l, r31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L77()
    goto L77_;
  } else {
  // L78(dx1, l, r31)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r31_;
    goto L78_;
  }

L95_:;
  // goto L20(c10, r43)
  // L20(c10, r43)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L20_;

L99_:;
  // st `.Data` = r45
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // goto L22()
  // L22()
  goto L22_;

L103_:;
  // _Data5 = ld `.Data`
  Rsh_Fir_reg__Data5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L105() else D32()
  // L105()
  goto L105_;

L104_:;
  // r49 = dyn base12(<sym .Data>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L24(r49)
  // L24(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L24_;

L109_:;
  // r53 = dyn attributes__(l6, NULL, r48)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes__, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L110() else D37()
  // L110()
  goto L110_;

D20_:;
  // deopt 78 [replace5, m5, ok2]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_replace5_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_m5_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_ok2_;
  Rsh_Fir_deopt(78, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 131 [_Data5]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg__Data5_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 135 [attrib8]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_attrib8_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 142 [r48, r53]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(142, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L15_:;
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L81() else D24()
  // L81()
  goto L81_;

L73_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L14(replace3, dx2)
  // L14(replace3, dx2)
  Rsh_Fir_reg_replace7_ = Rsh_Fir_reg_replace3_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L14_;

L74_:;
  // ok3 = force? ok2
  Rsh_Fir_reg_ok3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r29 = dyn __(m5, ok3)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_m5_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_ok3_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L14(replace5, r29)
  // L14(replace5, r29)
  Rsh_Fir_reg_replace7_ = Rsh_Fir_reg_replace5_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r29_;
  goto L14_;

L77_:;
  // dr4 = tryDispatchBuiltin.0("[<-", r31, dx1)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args80);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc2 then L79() else L78(dx1, l, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L79()
    goto L79_;
  } else {
  // L78(dx1, l, dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_dr4_;
    goto L78_;
  }

L78_:;
  // ok4 = ld ok
  Rsh_Fir_reg_ok4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L80() else D23()
  // L80()
  goto L80_;

L105_:;
  // _Data6 = force? _Data5
  Rsh_Fir_reg__Data6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Data5_);
  // checkMissing(_Data6)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg__Data6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r51 = dyn attributes(_Data6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg__Data6_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L106() else D33()
  // L106()
  goto L106_;

L107_:;
  // attrib9 = force? attrib8
  Rsh_Fir_reg_attrib9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_attrib8_);
  // checkMissing(attrib9)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_attrib9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c20 = ldf c in base
  Rsh_Fir_reg_c20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r52 = dyn c20(r50, attrib9)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_attrib9_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c20_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L108() else D35()
  // L108()
  goto L108_;

L110_:;
  // st `.Data` = r53
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // goto L25()
  // L25()
  goto L25_;

D23_:;
  // deopt 87 [dx5, l2, r33, dx1, ok4]
  SEXP Rsh_Fir_array_deopt_stack33[5];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack33[4] = Rsh_Fir_reg_ok4_;
  Rsh_Fir_deopt(87, 5, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 90 [dx8, l4, dx9]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_deopt(90, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 134 [r51]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 138 [r52]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L79_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L15(dx1, l, dx7)
  // L15(dx1, l, dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
  goto L15_;

L80_:;
  // ok5 = force? ok4
  Rsh_Fir_reg_ok5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r34 = dyn ___(r33, dx1, ok5)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_ok5_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L15(dx5, l2, r34)
  // L15(dx5, l2, r34)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r34_;
  goto L15_;

L81_:;
  // r35 = dyn names__(l4, NULL, dx9)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L82() else D25()
  // L82()
  goto L82_;

L106_:;
  // goto L24(r51)
  // L24(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L24_;

L108_:;
  // goto L23(r52)
  // L23(r52)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r52_;
  goto L23_;

D25_:;
  // deopt 92 [dx8, r35]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(92, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L82_:;
  // st attrib = r35
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // goto L16()
  // L16()
  goto L16_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
