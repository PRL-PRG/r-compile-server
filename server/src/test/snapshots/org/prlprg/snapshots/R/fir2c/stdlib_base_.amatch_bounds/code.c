#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1339251210_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1339251210_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1339251210_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1339251210_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1339251210_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner1339251210
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1339251210_, RHO, CCP);
  // st `.amatch_bounds` = r
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
SEXP Rsh_Fir_user_function_inner1339251210_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1339251210 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner1339251210_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1339251210_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1339251210 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1339251210/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x_isMissing;
  SEXP Rsh_Fir_reg_x_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_is_list;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_as_double;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_pmatch;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_pos;
  SEXP Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_pos2_;
  SEXP Rsh_Fir_reg_pos3_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_table2_;
  SEXP Rsh_Fir_reg_table3_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_table5_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_pos4_;
  SEXP Rsh_Fir_reg_pos5_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_unlist;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_is_numeric1_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_x23_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_x27_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_rep_int1_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_x31_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_is_na2_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_x35_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_rep_int2_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_table6_;
  SEXP Rsh_Fir_reg_table7_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_x36_;
  SEXP Rsh_Fir_reg_x37_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_x39_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_x41_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_x46_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_x47_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_x48_;
  SEXP Rsh_Fir_reg_x49_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_bounds;
  SEXP Rsh_Fir_reg_bounds1_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // x_isMissing = missing.0(x)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x;
  Rsh_Fir_reg_x_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if x_isMissing then L0(0.1) else L0(x)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_x_isMissing)) {
  // L0(0.1)
    Rsh_Fir_reg_x_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(x)
    Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_x;
    goto L0_;
  }

L0_:;
  // st x = x_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x_orDefault, RHO);
  (void)(Rsh_Fir_reg_x_orDefault);
  // sym = ldf `is.list`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `is.list` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args2);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c then L43() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L43()
    goto L43_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard5 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L3_:;
  // r7 = `!`(r5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args5);
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args6);
  // if c1 then L4(c1) else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L4_;
  } else {
  // L48()
    goto L48_;
  }

L4_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c7 then L51() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L51()
    goto L51_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L7_:;
  // st bounds = r12
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L10()
  // L10()
  goto L10_;

L8_:;
  // sym4 = ldf `rep.int`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base4 = ldf `rep.int` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard4 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L9_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r19 = dyn c8(r14, r17)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L64() else D10()
  // L64()
  goto L64_;

L10_:;
  // bounds = ld bounds
  Rsh_Fir_reg_bounds = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L158() else D48()
  // L158()
  goto L158_;

L11_:;
  // st table = r22
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L69() else D12()
  // L69()
  goto L69_;

L12_:;
  // c10 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // if c10 then L75() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L75()
    goto L75_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L16()
  // L16()
  goto L16_;

L14_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L16()
  // L16()
  goto L16_;

L15_:;
  // r37 = `!`(r35)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args12);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r38 = dyn __(x17, r37)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L14(r38)
  // L14(r38)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r38_;
  goto L14_;

L16_:;
  // table2 = ld table
  Rsh_Fir_reg_table2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L87() else D21()
  // L87()
  goto L87_;

L17_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L92() else D23()
  // L92()
  goto L92_;

L18_:;
  // r49 = `!`(r44)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args14);
  // c13 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c13 then L20(c13) else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L20(c13)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c13_;
    goto L20_;
  } else {
  // L103()
    goto L103_;
  }

L19_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r48 = dyn all(r46)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L102() else D29()
  // L102()
  goto L102_;

L20_:;
  // c22 = `as.logical`(c14)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c22 then L109() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L109()
    goto L109_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // c19 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // c20 = `||`(c18, c19)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args19);
  // goto L20(c20)
  // L20(c20)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c20_;
  goto L20_;

L22_:;
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // sym12 = ldf `is.na`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base12 = ldf `is.na` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard12 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L24_:;
  // r60 = `!`(r57)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args21);
  // c24 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // if c24 then L120() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L120()
    goto L120_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r59 = dyn is_na1(dx6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L119() else D35()
  // L119()
  goto L119_;

L26_:;
  // sym14 = ldf `is.na`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base14 = ldf `is.na` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard14 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L27_:;
  // st bounds = r62
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // goto L28()
  // L28()
  goto L28_;

L28_:;
  // table6 = ld table
  Rsh_Fir_reg_table6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L147() else D42()
  // L147()
  goto L147_;

L29_:;
  // c26 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c26 then L132() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L132()
    goto L132_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r68 = dyn is_na2(dx8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L131() else D38()
  // L131()
  goto L131_;

L31_:;
  // goto L33()
  // L33()
  goto L33_;

L32_:;
  // st x = dx10
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard15 then L137() else L138()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L137()
    goto L137_;
  } else {
  // L138()
    goto L138_;
  }

L34_:;
  // st bounds = r76
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // goto L28()
  // L28()
  goto L28_;

L35_:;
  // c29 = ldf c in base
  Rsh_Fir_reg_c29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r81 = dyn c29(NA_REAL, r78)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c29_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L146() else D41()
  // L146()
  goto L146_;

L36_:;
  // rep_int2 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r80 = dyn rep_int2(dx12, 4)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int2_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L145() else D40()
  // L145()
  goto L145_;

L37_:;
  // st bounds = dx14
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx14_, RHO);
  (void)(Rsh_Fir_reg_dx14_);
  // goto L10()
  // L10()
  goto L10_;

L38_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r86 = dyn ___1(l10, x47, r84)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_x47_;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L37(x46, r86)
  // L37(x46, r86)
  Rsh_Fir_reg_x41_ = Rsh_Fir_reg_x46_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r86_;
  goto L37_;

L39_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L41() else D0()
  // L41()
  goto L41_;

L40_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L41_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn is_list(x2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L42() else D1()
  // L42()
  goto L42_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L43_:;
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard1 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L46() else D2()
  // L46()
  goto L46_;

L45_:;
  // r4 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L3_;

D2_:;
  // deopt 9 [x3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L46_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r6 = dyn is_numeric(x4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L47() else D3()
  // L47()
  goto L47_;

D3_:;
  // deopt 12 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L3_;

L48_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L49() else D4()
  // L49()
  goto L49_;

D4_:;
  // deopt 14 [c1, x5]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L49_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r8 = `<`(x6, 0.0)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args39);
  // c4 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args41);
  // goto L4(c5)
  // L4(c5)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c5_;
  goto L4_;

L51_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L52() else D5()
  // L52()
  goto L52_;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // r9 = dyn stop("match distance components must be non-negative")
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L53() else D6()
  // L53()
  goto L53_;

D6_:;
  // deopt 22 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L6()
  // L6()
  goto L6_;

L55_:;
  // sym3 = ldf `as.double`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf `as.double` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard3 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L56_:;
  // r11 = dyn base2(<lang as.double(x)>, <lang rep.int(NA_REAL, 4)>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L7_;

L57_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L59() else D7()
  // L59()
  goto L59_;

L58_:;
  // r13 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D7_:;
  // deopt 29 [x7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L59_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r15 = dyn as_double(x8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L60() else D8()
  // L60()
  goto L60_;

D8_:;
  // deopt 32 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L8_;

L61_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r18 = dyn rep_int(NA_REAL, 4)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L63() else D9()
  // L63()
  goto L63_;

L62_:;
  // r16 = dyn base4(NA_REAL, 4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L9(r16)
  // L9(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L9_;

D9_:;
  // deopt 38 [r18]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L9_;

D10_:;
  // deopt 40 [r19]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L7(r19)
  // L7(r19)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r19_;
  goto L7_;

L66_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r23 = dyn c9("cost", "insertions", "deletions", "substitutions", "all")
  SEXP Rsh_Fir_array_args50[5];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args50[4] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names18[5];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 5, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L68() else D11()
  // L68()
  goto L68_;

L67_:;
  // r21 = dyn base5("cost", "insertions", "deletions", "substitutions", "all")
  SEXP Rsh_Fir_array_args51[5];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args51[4] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names19[5];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_array_arg_names19[4] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 5, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L11_;

D11_:;
  // deopt 50 [r23]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L11_;

D12_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // p = prom<V +>{
  //   sym6 = ldf names;
  //   base6 = ldf names in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r25):
  //   return r25;
  // L1():
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   names = ldf names in base;
  //   r26 = dyn names(x10);
  //   goto L0(r26);
  // L2():
  //   r24 = dyn base6(<sym x>);
  //   goto L0(r24);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1339251210_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   table = ld table;
  //   table1 = force? table;
  //   checkMissing(table1);
  //   return table1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1339251210_1, 0, NULL, CCP, RHO);
  // r29 = dyn pmatch(p, p1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L70() else D13()
  // L70()
  goto L70_;

D13_:;
  // deopt 56 [r29]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L70_:;
  // st pos = r29
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // sym7 = ldf anyNA
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base7 = ldf anyNA in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard7 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L71_:;
  // pos = ld pos
  Rsh_Fir_reg_pos = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L73() else D14()
  // L73()
  goto L73_;

L72_:;
  // r30 = dyn base7(<sym pos>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L12(r30)
  // L12(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L12_;

D14_:;
  // deopt 60 [pos]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_pos;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L73_:;
  // pos1 = force? pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos);
  // checkMissing(pos1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_pos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r32 = dyn anyNA(pos1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L74() else D15()
  // L74()
  goto L74_;

D15_:;
  // deopt 63 [r32]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L12(r32)
  // L12(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L12_;

L75_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L76() else D16()
  // L76()
  goto L76_;

D16_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // r33 = dyn warning("unknown match distance components ignored")
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L77() else D17()
  // L77()
  goto L77_;

D17_:;
  // deopt 67 [r33]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L77_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L78() else D18()
  // L78()
  goto L78_;

D18_:;
  // deopt 68 [x11]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L78_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(x12)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args64);
  // if c11 then L79() else L80(x12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L79()
    goto L79_;
  } else {
  // L80(x12)
    Rsh_Fir_reg_x14_ = Rsh_Fir_reg_x12_;
    goto L80_;
  }

L79_:;
  // dr = tryDispatchBuiltin.1("[", x12)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc then L81() else L80(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L81()
    goto L81_;
  } else {
  // L80(dr)
    Rsh_Fir_reg_x14_ = Rsh_Fir_reg_dr;
    goto L80_;
  }

L80_:;
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard8 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L81_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L14(dx)
  // L14(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L14_;

L82_:;
  // pos2 = ld pos
  Rsh_Fir_reg_pos2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L84() else D19()
  // L84()
  goto L84_;

L83_:;
  // r34 = dyn base8(<sym pos>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L15(x14, r34)
  // L15(x14, r34)
  Rsh_Fir_reg_x17_ = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L15_;

D19_:;
  // deopt 72 [x14, pos2]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_pos2_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L84_:;
  // pos3 = force? pos2
  Rsh_Fir_reg_pos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos2_);
  // checkMissing(pos3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_pos3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r36 = dyn is_na(pos3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_pos3_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L85() else D20()
  // L85()
  goto L85_;

D20_:;
  // deopt 75 [x14, r36]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L15(x14, r36)
  // L15(x14, r36)
  Rsh_Fir_reg_x17_ = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L15_;

D21_:;
  // deopt 81 [table2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_table2_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L87_:;
  // table3 = force? table2
  Rsh_Fir_reg_table3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table2_);
  // checkMissing(table3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_table3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(table3)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_table3_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args73);
  // if c12 then L88() else L89(table3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L88()
    goto L88_;
  } else {
  // L89(table3)
    Rsh_Fir_reg_table5_ = Rsh_Fir_reg_table3_;
    goto L89_;
  }

L88_:;
  // dr2 = tryDispatchBuiltin.1("[", table3)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_table3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc1 then L90() else L89(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L90()
    goto L90_;
  } else {
  // L89(dr2)
    Rsh_Fir_reg_table5_ = Rsh_Fir_reg_dr2_;
    goto L89_;
  }

L89_:;
  // pos4 = ld pos
  Rsh_Fir_reg_pos4_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L91() else D22()
  // L91()
  goto L91_;

L90_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L17(dx3)
  // L17(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L17_;

D22_:;
  // deopt 83 [table5, pos4]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_table5_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_pos4_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L91_:;
  // pos5 = force? pos4
  Rsh_Fir_reg_pos5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos4_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r39 = dyn __1(table5, pos5)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_table5_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_pos5_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L17(r39)
  // L17(r39)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r39_;
  goto L17_;

D23_:;
  // deopt 87 [dx4, l, dx4]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_deopt(87, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L92_:;
  // r40 = dyn names__(l, NULL, dx4)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L93() else D24()
  // L93()
  goto L93_;

D24_:;
  // deopt 89 [dx4, r40]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L93_:;
  // st x = r40
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L94() else D25()
  // L94()
  goto L94_;

D25_:;
  // deopt 92 []
  Rsh_Fir_deopt(92, 0, NULL, CCP, RHO);
  return R_NilValue;

L94_:;
  // p2 = prom<V +>{
  //   x18 = ld x;
  //   x19 = force? x18;
  //   checkMissing(x19);
  //   return x19;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1339251210_2, 0, NULL, CCP, RHO);
  // r42 = dyn unlist(p2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L95() else D26()
  // L95()
  goto L95_;

D26_:;
  // deopt 94 [r42]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L95_:;
  // st x = r42
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // sym9 = ldf all
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base9 = ldf all in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard9 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L96_:;
  // sym10 = ldf `is.numeric`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base10 = ldf `is.numeric` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard10 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L97_:;
  // r43 = dyn base9(<lang is.numeric(x)>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L18(r43)
  // L18(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L18_;

L98_:;
  // x20 = ld x
  Rsh_Fir_reg_x20_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L100() else D27()
  // L100()
  goto L100_;

L99_:;
  // r45 = dyn base10(<sym x>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L19(r45)
  // L19(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L19_;

D27_:;
  // deopt 100 [x20]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L100_:;
  // x21 = force? x20
  Rsh_Fir_reg_x21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x20_);
  // checkMissing(x21)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // is_numeric1 = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r47 = dyn is_numeric1(x21)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric1_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L101() else D28()
  // L101()
  goto L101_;

D28_:;
  // deopt 103 [r47]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L19(r47)
  // L19(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L19_;

D29_:;
  // deopt 105 [r48]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L102_:;
  // goto L18(r48)
  // L18(r48)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r48_;
  goto L18_;

L103_:;
  // sym11 = ldf any
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base11 = ldf any in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard11 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L104_:;
  // x22 = ld x
  Rsh_Fir_reg_x22_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L106() else D30()
  // L106()
  goto L106_;

L105_:;
  // r50 = dyn base11(<lang `<`(x, 0.0)>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L21(c13, r50)
  // L21(c13, r50)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L21_;

D30_:;
  // deopt 109 [c13, x22]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L106_:;
  // x23 = force? x22
  Rsh_Fir_reg_x23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x22_);
  // checkMissing(x23)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // r52 = `<`(x23, 0.0)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args90);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r53 = dyn any(r52)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L107() else D31()
  // L107()
  goto L107_;

D31_:;
  // deopt 114 [c13, r53]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L107_:;
  // goto L21(c13, r53)
  // L21(c13, r53)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r53_;
  goto L21_;

L109_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L110() else D32()
  // L110()
  goto L110_;

D32_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L110_:;
  // r54 = dyn stop1("match distance components must be non-negative")
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L111() else D33()
  // L111()
  goto L111_;

D33_:;
  // deopt 119 [r54]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L23()
  // L23()
  goto L23_;

L113_:;
  // x24 = ld x
  Rsh_Fir_reg_x24_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L115() else D34()
  // L115()
  goto L115_;

L114_:;
  // r56 = dyn base12(<lang `[`(x, "cost")>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L24(r56)
  // L24(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L24_;

D34_:;
  // deopt 124 [x24]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L115_:;
  // x25 = force? x24
  Rsh_Fir_reg_x25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x24_);
  // checkMissing(x25)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(x25)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args95);
  // if c23 then L116() else L117(x25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L116()
    goto L116_;
  } else {
  // L117(x25)
    Rsh_Fir_reg_x27_ = Rsh_Fir_reg_x25_;
    goto L117_;
  }

L116_:;
  // dr4 = tryDispatchBuiltin.1("[", x25)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_x25_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc2 then L118() else L117(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L118()
    goto L118_;
  } else {
  // L117(dr4)
    Rsh_Fir_reg_x27_ = Rsh_Fir_reg_dr4_;
    goto L117_;
  }

L117_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r58 = dyn __2(x27, "cost")
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_x27_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L25(r58)
  // L25(r58)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r58_;
  goto L25_;

L118_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L25(dx5)
  // L25(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L25_;

D35_:;
  // deopt 130 [r59]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L24(r59)
  // L24(r59)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r59_;
  goto L24_;

L120_:;
  // sym13 = ldf `rep.int`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base13 = ldf `rep.int` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard13 then L121() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L121()
    goto L121_;
  } else {
  // L122()
    goto L122_;
  }

L121_:;
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r63 = dyn rep_int1(NA_REAL, 5)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L123() else D36()
  // L123()
  goto L123_;

L122_:;
  // r61 = dyn base13(NA_REAL, 5)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L27(r61)
  // L27(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L27_;

D36_:;
  // deopt 137 [r63]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L27(r63)
  // L27(r63)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L27_;

L125_:;
  // x28 = ld x
  Rsh_Fir_reg_x28_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L127() else D37()
  // L127()
  goto L127_;

L126_:;
  // r65 = dyn base14(<lang `[`(x, "all")>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L29(r65)
  // L29(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L29_;

D37_:;
  // deopt 141 [x28]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L127_:;
  // x29 = force? x28
  Rsh_Fir_reg_x29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x28_);
  // checkMissing(x29)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(x29)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args105);
  // if c25 then L128() else L129(x29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L128()
    goto L128_;
  } else {
  // L129(x29)
    Rsh_Fir_reg_x31_ = Rsh_Fir_reg_x29_;
    goto L129_;
  }

L128_:;
  // dr6 = tryDispatchBuiltin.1("[", x29)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_x29_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc3 then L130() else L129(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L130()
    goto L130_;
  } else {
  // L129(dr6)
    Rsh_Fir_reg_x31_ = Rsh_Fir_reg_dr6_;
    goto L129_;
  }

L129_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r67 = dyn __3(x31, "all")
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x31_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L30(r67)
  // L30(r67)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r67_;
  goto L30_;

L130_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L30(dx7)
  // L30(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L30_;

D38_:;
  // deopt 147 [r68]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L29(r68)
  // L29(r68)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r68_;
  goto L29_;

L132_:;
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c27 = `is.object`(l1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args110);
  // if c27 then L133() else L134(0.1, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L133()
    goto L133_;
  } else {
  // L134(0.1, l1)
    Rsh_Fir_reg_r70_ = Rsh_const(CCP, 1);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L134_;
  }

L133_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l1, 0.1)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args111[2] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args111);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc4 then L135() else L134(0.1, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L135()
    goto L135_;
  } else {
  // L134(0.1, dr8)
    Rsh_Fir_reg_r70_ = Rsh_const(CCP, 1);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr8_;
    goto L134_;
  }

L134_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r73 = dyn ___(l3, 0.1, "all")
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args113[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L32(r70, r73)
  // L32(r70, r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r73_;
  goto L32_;

L135_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L32(0.1, dx9)
  // L32(0.1, dx9)
  Rsh_Fir_reg_r72_ = Rsh_const(CCP, 1);
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L32_;

L137_:;
  // sym16 = ldf `rep.int`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base16 = ldf `rep.int` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args115);
  // if guard16 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L138_:;
  // r75 = dyn base15(NA_REAL, <lang rep.int(`[`(x, "all"), 4)>)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L34(r75)
  // L34(r75)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r75_;
  goto L34_;

L139_:;
  // x32 = ld x
  Rsh_Fir_reg_x32_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L141() else D39()
  // L141()
  goto L141_;

L140_:;
  // r77 = dyn base16(<lang `[`(x, "all")>, 4)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L35(r77)
  // L35(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L35_;

D39_:;
  // deopt 162 [x32]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L141_:;
  // x33 = force? x32
  Rsh_Fir_reg_x33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x32_);
  // checkMissing(x33)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_x33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(x33)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x33_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args119);
  // if c28 then L142() else L143(x33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L142()
    goto L142_;
  } else {
  // L143(x33)
    Rsh_Fir_reg_x35_ = Rsh_Fir_reg_x33_;
    goto L143_;
  }

L142_:;
  // dr10 = tryDispatchBuiltin.1("[", x33)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_x33_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc5 then L144() else L143(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L144()
    goto L144_;
  } else {
  // L143(dr10)
    Rsh_Fir_reg_x35_ = Rsh_Fir_reg_dr10_;
    goto L143_;
  }

L143_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r79 = dyn __4(x35, "all")
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_x35_;
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L36(r79)
  // L36(r79)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r79_;
  goto L36_;

L144_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L36(dx11)
  // L36(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L36_;

D40_:;
  // deopt 169 [r80]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L145_:;
  // goto L35(r80)
  // L35(r80)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r80_;
  goto L35_;

D41_:;
  // deopt 171 [r81]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(171, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L146_:;
  // goto L34(r81)
  // L34(r81)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r81_;
  goto L34_;

D42_:;
  // deopt 173 [table6]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_table6_;
  Rsh_Fir_deopt(173, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L147_:;
  // table7 = force? table6
  Rsh_Fir_reg_table7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table6_);
  // checkMissing(table7)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_table7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // l4 = ld bounds
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L148() else D43()
  // L148()
  goto L148_;

D43_:;
  // deopt 176 [table7, l4, table7]
  SEXP Rsh_Fir_array_deopt_stack38[3];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_table7_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_table7_;
  Rsh_Fir_deopt(176, 3, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L148_:;
  // r82 = dyn names__1(l4, NULL, table7)
  SEXP Rsh_Fir_array_args125[3];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args125[2] = Rsh_Fir_reg_table7_;
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L149() else D44()
  // L149()
  goto L149_;

D44_:;
  // deopt 178 [table7, r82]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_table7_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L149_:;
  // st bounds = r82
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // x36 = ld x
  Rsh_Fir_reg_x36_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L150() else D45()
  // L150()
  goto L150_;

D45_:;
  // deopt 180 [x36]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L150_:;
  // x37 = force? x36
  Rsh_Fir_reg_x37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x36_);
  // checkMissing(x37)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_x37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // l5 = ld bounds
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c30 = `is.object`(l5)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args127);
  // if c30 then L151() else L152(x37, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L151()
    goto L151_;
  } else {
  // L152(x37, l5)
    Rsh_Fir_reg_x39_ = Rsh_Fir_reg_x37_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L152_;
  }

L151_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l5, x37)
  SEXP Rsh_Fir_array_args128[3];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args128[2] = Rsh_Fir_reg_x37_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args128);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if dc6 then L153() else L152(x37, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L153()
    goto L153_;
  } else {
  // L152(x37, dr12)
    Rsh_Fir_reg_x39_ = Rsh_Fir_reg_x37_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr12_;
    goto L152_;
  }

L152_:;
  // sym17 = ldf names
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base17 = ldf names in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args130);
  // if guard17 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L153_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L37(x37, dx13)
  // L37(x37, dx13)
  Rsh_Fir_reg_x41_ = Rsh_Fir_reg_x37_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L37_;

L154_:;
  // x48 = ld x
  Rsh_Fir_reg_x48_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L156() else D46()
  // L156()
  goto L156_;

L155_:;
  // r83 = dyn base17(<sym x>)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L38(x39, l7, x37, r83)
  // L38(x39, l7, x37, r83)
  Rsh_Fir_reg_x46_ = Rsh_Fir_reg_x39_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_x47_ = Rsh_Fir_reg_x37_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L38_;

D46_:;
  // deopt 185 [x39, l7, x37, x48]
  SEXP Rsh_Fir_array_deopt_stack41[4];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_x39_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_x37_;
  Rsh_Fir_array_deopt_stack41[3] = Rsh_Fir_reg_x48_;
  Rsh_Fir_deopt(185, 4, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L156_:;
  // x49 = force? x48
  Rsh_Fir_reg_x49_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x48_);
  // checkMissing(x49)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_x49_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r85 = dyn names1(x49)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_x49_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L157() else D47()
  // L157()
  goto L157_;

D47_:;
  // deopt 188 [x39, l7, x37, r85]
  SEXP Rsh_Fir_array_deopt_stack42[4];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_x39_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_x37_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(188, 4, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L157_:;
  // goto L38(x39, l7, x37, r85)
  // L38(x39, l7, x37, r85)
  Rsh_Fir_reg_x46_ = Rsh_Fir_reg_x39_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_x47_ = Rsh_Fir_reg_x37_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r85_;
  goto L38_;

D48_:;
  // deopt 191 [bounds]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_bounds;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L158_:;
  // bounds1 = force? bounds
  Rsh_Fir_reg_bounds1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bounds);
  // checkMissing(bounds1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_bounds1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return bounds1
  return Rsh_Fir_reg_bounds1_;
}
SEXP Rsh_Fir_user_promise_inner1339251210_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1339251210/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
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
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r26 = dyn names(x10)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L0_;

L2_:;
  // r24 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1339251210_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_table;
  SEXP Rsh_Fir_reg_table1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1339251210/0: expected 0, got %d", NCAPTURES);

  // table = ld table
  Rsh_Fir_reg_table = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // table1 = force? table
  Rsh_Fir_reg_table1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table);
  // checkMissing(table1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_table1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return table1
  return Rsh_Fir_reg_table1_;
}
SEXP Rsh_Fir_user_promise_inner1339251210_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1339251210/0: expected 0, got %d", NCAPTURES);

  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return x19
  return Rsh_Fir_reg_x19_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
