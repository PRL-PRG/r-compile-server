#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1139050501_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1139050501_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1139050501_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1139050501_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_bar;
  SEXP Rsh_Fir_reg_bar1_;
  SEXP Rsh_Fir_reg_options;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1139050501
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1139050501_, RHO, CCP);
  // st traceback = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // r1 = clos inner2501545716
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st foo = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // r2 = clos inner2501545716
  Rsh_Fir_reg_r2_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st bar = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // bar = ld bar
  Rsh_Fir_reg_bar = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 9 [bar]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_bar;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L0_:;
  // bar1 = force? bar
  Rsh_Fir_reg_bar1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bar);
  // checkMissing(bar1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_bar1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   r3 = clos inner2708337952;
  //   return r3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn options[error](p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 15 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r3 = clos inner2708337952
  Rsh_Fir_reg_r3_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_function_inner1139050501_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1139050501 dynamic dispatch ([x, `max.lines`])

  return Rsh_Fir_user_version_inner1139050501_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1139050501_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1139050501 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1139050501/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_max_lines;
  SEXP Rsh_Fir_reg_x_isMissing;
  SEXP Rsh_Fir_reg_x_orDefault;
  SEXP Rsh_Fir_reg_max_lines_isMissing;
  SEXP Rsh_Fir_reg_max_lines_orDefault;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg__traceback;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_xi;
  SEXP Rsh_Fir_reg_xi1_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_xi2_;
  SEXP Rsh_Fir_reg_xi3_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_srcref;
  SEXP Rsh_Fir_reg_srcref1_;
  SEXP Rsh_Fir_reg_attr1_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_xi6_;
  SEXP Rsh_Fir_reg_xi7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_xi8_;
  SEXP Rsh_Fir_reg_xi9_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_i36_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_i39_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_srcloc;
  SEXP Rsh_Fir_reg_srcloc1_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_paste2_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_i43_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_i45_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_i46_;
  SEXP Rsh_Fir_reg_m4_;
  SEXP Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_i51_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_label;
  SEXP Rsh_Fir_reg_label1_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_i54_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_i55_;
  SEXP Rsh_Fir_reg_cat1_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r82_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_max_lines = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // x_isMissing = missing.0(x)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x;
  Rsh_Fir_reg_x_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if x_isMissing then L0(NULL) else L0(x)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_x_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_x_orDefault = Rsh_const(CCP, 5);
    goto L0_;
  } else {
  // L0(x)
    Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_x;
    goto L0_;
  }

L0_:;
  // st x = x_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x_orDefault, RHO);
  (void)(Rsh_Fir_reg_x_orDefault);
  // max_lines_isMissing = missing.0(max_lines)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_max_lines;
  Rsh_Fir_reg_max_lines_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if max_lines_isMissing then L1() else L2(max_lines)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_max_lines_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(max_lines)
    Rsh_Fir_reg_max_lines_orDefault = Rsh_Fir_reg_max_lines;
    goto L2_;
  }

L1_:;
  // p2 = prom<V +>{
  //   getOption = ldf getOption;
  //   p1 = prom<V +>{
  //     getOption1 = ldf getOption;
  //     p = prom<V +>{
  //       return -1;
  //     };
  //     r1 = dyn getOption1("deparse.max.lines", p);
  //     return r1;
  //   };
  //   r3 = dyn getOption("traceback.max.lines", p1);
  //   return r3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_, 0, NULL, CCP, RHO);
  // goto L2(p2)
  // L2(p2)
  Rsh_Fir_reg_max_lines_orDefault = Rsh_Fir_reg_p2_;
  goto L2_;

L2_:;
  // st `max.lines` = max_lines_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_max_lines_orDefault, RHO);
  (void)(Rsh_Fir_reg_max_lines_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L3_:;
  // st n = r6
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

L28_:;
  // _traceback = ldf `.traceback`
  Rsh_Fir_reg__traceback = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L29_:;
  // r5 = dyn base(<lang `<-`(x, .traceback(x, max.lines=max.lines))>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_1;
  goto L3_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 12 [n]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L30_:;
  // p3 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   max_lines1 = ld `max.lines`;
  //   max_lines2 = force? max_lines1;
  //   checkMissing(max_lines2);
  //   return max_lines2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_4, 0, NULL, CCP, RHO);
  // r9 = dyn _traceback[, `max.lines`](p3, p4)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__traceback, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

L33_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // r11 = `==`(n1, 0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args12);
  // c = `as.logical`(r11)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c then L34() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L34()
    goto L34_;
  } else {
  // L4()
    goto L4_;
  }

D1_:;
  // deopt 7 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L4_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

L5_:;
  // sym11 = ldf invisible
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base11 = ldf invisible in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard11 then L99() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L99()
    goto L99_;
  } else {
  // L100()
    goto L100_;
  }

L31_:;
  // st x = r9
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r10 = dyn length(r9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

L34_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L35() else D4()
  // L35()
  goto L35_;

D2_:;
  // deopt 10 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 22 [1, n2]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r81
  return Rsh_Fir_reg_r81_;

L32_:;
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r10_;
  goto L3_;

L35_:;
  // p5 = prom<V +>{
  //   gettext = ldf gettext;
  //   r12 = dyn gettext("No traceback available");
  //   return r12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_5, 0, NULL, CCP, RHO);
  // r14 = dyn cat(p5, "\n")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L36() else D5()
  // L36()
  goto L36_;

L38_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r16 = `:`(1, n3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args19);
  // s = toForSeq(r16)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args21);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 16);
  // goto L6(i)
  // L6(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L6_;

L99_:;
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L101() else D34()
  // L101()
  goto L101_;

L100_:;
  // r80 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L27(r80)
  // L27(r80)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r80_;
  goto L27_;

D5_:;
  // deopt 20 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 138 [x8]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L6_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // c1 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if c1 then L39() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L39()
    goto L39_;
  } else {
  // L26()
    goto L26_;
  }

L36_:;
  // goto L5()
  // L5()
  goto L5_;

L101_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r82 = dyn invisible(x9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L102() else D35()
  // L102()
  goto L102_;

D35_:;
  // deopt 141 [r82]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // x3 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_x3_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args27);
  // st i = x3
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x3_, RHO);
  (void)(Rsh_Fir_reg_x3_);
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L39_:;
  // goto L5()
  // L5()
  goto L5_;

L102_:;
  // goto L27(r82)
  // L27(r82)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r82_;
  goto L27_;

D7_:;
  // deopt 25 [i2, x4]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L40_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args29);
  // if c2 then L41() else L42(i2, x5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L41()
    goto L41_;
  } else {
  // L42(i2, x5)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x5_;
    goto L42_;
  }

L7_:;
  // st xi = dx1
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L45() else D9()
  // L45()
  goto L45_;

L41_:;
  // dr = tryDispatchBuiltin.1("[[", x5)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc then L43() else L42(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L43()
    goto L43_;
  } else {
  // L42(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_dr;
    goto L42_;
  }

L42_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L44() else D8()
  // L44()
  goto L44_;

D8_:;
  // deopt 27 [i6, x7, i9]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 32 [i8]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L43_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L7(i2, dx)
  // L7(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

L44_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r17 = dyn __(x7, i10)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(i6, r17)
  // L7(i6, r17)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r17_;
  goto L7_;

L45_:;
  // p6 = prom<V +>{
  //   n4 = ld n;
  //   n5 = force? n4;
  //   checkMissing(n5);
  //   i11 = ld i;
  //   i12 = force? i11;
  //   checkMissing(i12);
  //   r18 = `-`(n5, i12);
  //   r19 = `+`(r18, 1);
  //   return r19;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_6, 0, NULL, CCP, RHO);
  // r21 = dyn paste0(p6, ": ")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

D10_:;
  // deopt 35 [i8, r21]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L46_:;
  // st label = r21
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard1 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L8_:;
  // st m = r23
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard2 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L47_:;
  // xi = ld xi
  Rsh_Fir_reg_xi = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L49() else D11()
  // L49()
  goto L49_;

L48_:;
  // r22 = dyn base1(<sym xi>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(i8, r22)
  // L8(i8, r22)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L8_;

D11_:;
  // deopt 39 [i8, xi]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_xi;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L9_:;
  // r30 = `!`(r26)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args42);
  // c4 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c4 then L57() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L57()
    goto L57_;
  } else {
  // L11()
    goto L11_;
  }

L49_:;
  // xi1 = force? xi
  Rsh_Fir_reg_xi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi);
  // checkMissing(xi1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_xi1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r24 = dyn length1(xi1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_xi1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

L51_:;
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L52_:;
  // r25 = dyn base2(<lang `<-`(srcref, attr(xi, "srcref"))>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(i15, r25)
  // L9(i15, r25)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L9_;

D12_:;
  // deopt 42 [i8, r24]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L10_:;
  // st srcref = r28
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // c3 = `==`(r28, NULL)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args48);
  // goto L9(i21, c3)
  // L9(i21, c3)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c3_;
  goto L9_;

L11_:;
  // goto L13(i18, NULL)
  // L13(i18, NULL)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_r41_ = Rsh_const(CCP, 5);
  goto L13_;

L13_:;
  // st srcloc = r41
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L65() else D19()
  // L65()
  goto L65_;

L50_:;
  // goto L8(i8, r24)
  // L8(i8, r24)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L8_;

L53_:;
  // xi2 = ld xi
  Rsh_Fir_reg_xi2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L55() else D13()
  // L55()
  goto L55_;

L54_:;
  // r27 = dyn base3(<sym xi>, "srcref")
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(i15, r27)
  // L10(i15, r27)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L10_;

L57_:;
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard4 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

D13_:;
  // deopt 47 [i15, xi2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_xi2_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 74 [i27]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L12_:;
  // st srcfile = r32
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L62() else D17()
  // L62()
  goto L62_;

L55_:;
  // xi3 = force? xi2
  Rsh_Fir_reg_xi3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi2_);
  // checkMissing(xi3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_xi3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r29 = dyn attr(xi3, "srcref")
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_xi3_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

L58_:;
  // srcref = ld srcref
  Rsh_Fir_reg_srcref = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L60() else D15()
  // L60()
  goto L60_;

L59_:;
  // r31 = dyn base4(<sym srcref>, "srcfile")
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L12(i18, r31)
  // L12(i18, r31)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L12_;

L65_:;
  // p10 = prom<V +>{
  //   sym5 = ldf attr;
  //   base5 = ldf attr in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r43):
  //   return r43;
  // L1():
  //   xi4 = ld xi;
  //   xi5 = force? xi4;
  //   checkMissing(xi5);
  //   attr2 = ldf attr in base;
  //   r44 = dyn attr2(xi5, "truncated");
  //   goto L0(r44);
  // L2():
  //   r42 = dyn base5(<sym xi>, "truncated");
  //   goto L0(r42);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_7, 0, NULL, CCP, RHO);
  // r46 = dyn isTRUE(p10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L66() else D20()
  // L66()
  goto L66_;

D14_:;
  // deopt 51 [i15, r29]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 57 [i18, srcref]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_srcref;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 64 [i26]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 76 [i27, r46]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L10(i15, r29)
  // L10(i15, r29)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L10_;

L60_:;
  // srcref1 = force? srcref
  Rsh_Fir_reg_srcref1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref);
  // checkMissing(srcref1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_srcref1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r33 = dyn attr1(srcref1, "srcfile")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_srcref1_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L61() else D16()
  // L61()
  goto L61_;

L62_:;
  // p8 = prom<V +>{
  //   basename = ldf basename;
  //   p7 = prom<V +>{
  //     srcfile = ld srcfile;
  //     srcfile1 = force? srcfile;
  //     checkMissing(srcfile1);
  //     c5 = `is.object`(srcfile1);
  //     if c5 then L1() else L2(srcfile1);
  //   L0(dx3):
  //     return dx3;
  //   L1():
  //     dr2 = tryDispatchBuiltin.1("$", srcfile1);
  //     dc1 = getTryDispatchBuiltinDispatched(dr2);
  //     if dc1 then L3() else L2(dr2);
  //   L2(srcfile3):
  //     r34 = `$`(srcfile3, <sym filename>);
  //     goto L0(r34);
  //   L3():
  //     dx2 = getTryDispatchBuiltinValue(dr2);
  //     goto L0(dx2);
  //   };
  //   r36 = dyn basename(p7);
  //   return r36;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   srcref2 = ld srcref;
  //   srcref3 = force? srcref2;
  //   checkMissing(srcref3);
  //   c6 = `is.object`(srcref3);
  //   if c6 then L1() else L2(srcref3);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", srcref3);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(srcref5):
  //   __1 = ldf `[` in base;
  //   r38 = dyn __1(srcref5, 1);
  //   goto L0(r38);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_10, 0, NULL, CCP, RHO);
  // r40 = dyn paste1(" at ", p8, "#", p9)
  SEXP Rsh_Fir_array_args74[4];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args74[2] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args74[3] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 4, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L63() else D18()
  // L63()
  goto L63_;

L66_:;
  // c7 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args75);
  // if c7 then L67() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L67()
    goto L67_;
  } else {
  // L14()
    goto L14_;
  }

D16_:;
  // deopt 61 [i18, r33]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 69 [i26, r40]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L17(i27)
  // L17(i27)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i27_;
  goto L17_;

L17_:;
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard8 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L61_:;
  // goto L12(i18, r33)
  // L12(i18, r33)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L12_;

L63_:;
  // goto L13(i26, r40)
  // L13(i26, r40)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L13_;

L67_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard6 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L15_:;
  // st xi = r48
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard7 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L18_:;
  // r56 = `!`(r55)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args79);
  // c10 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args80);
  // if c10 then L80() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L80()
    goto L80_;
  } else {
  // L19()
    goto L19_;
  }

L68_:;
  // xi6 = ld xi
  Rsh_Fir_reg_xi6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L70() else D21()
  // L70()
  goto L70_;

L69_:;
  // r47 = dyn base6(<sym xi>, " ...")
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L15(i27, r47)
  // L15(i27, r47)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L15_;

L77_:;
  // srcloc = ld srcloc
  Rsh_Fir_reg_srcloc = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L79() else D25()
  // L79()
  goto L79_;

L78_:;
  // r54 = dyn base8(<sym srcloc>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L18(i36, r54)
  // L18(i36, r54)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L18_;

D21_:;
  // deopt 79 [i27, xi6]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_xi6_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 95 [i36, srcloc]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_srcloc;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L16_:;
  // st m = r51
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // goto L17(i35)
  // L17(i35)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i35_;
  goto L17_;

L19_:;
  // goto L21(i39)
  // L21(i39)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i39_;
  goto L21_;

L21_:;
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L88() else D29()
  // L88()
  goto L88_;

L70_:;
  // xi7 = force? xi6
  Rsh_Fir_reg_xi7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi6_);
  // checkMissing(xi7)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_xi7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r49 = dyn c8(xi7, " ...")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_xi7_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L71() else D22()
  // L71()
  goto L71_;

L72_:;
  // xi8 = ld xi
  Rsh_Fir_reg_xi8_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L74() else D23()
  // L74()
  goto L74_;

L73_:;
  // r50 = dyn base7(<sym xi>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L16(i32, r50)
  // L16(i32, r50)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L16_;

L79_:;
  // srcloc1 = force? srcloc
  Rsh_Fir_reg_srcloc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcloc);
  // checkMissing(srcloc1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_srcloc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // c9 = `==`(srcloc1, NULL)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_srcloc1_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args87);
  // goto L18(i36, c9)
  // L18(i36, c9)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_c9_;
  goto L18_;

L80_:;
  // paste2 = ldf paste0
  Rsh_Fir_reg_paste2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L81() else D26()
  // L81()
  goto L81_;

D22_:;
  // deopt 83 [i27, r49]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 87 [i32, xi8]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_xi8_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 100 [i39]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 111 [i46, m4]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_m4_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L15(i27, r49)
  // L15(i27, r49)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L15_;

L74_:;
  // xi9 = force? xi8
  Rsh_Fir_reg_xi9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi8_);
  // checkMissing(xi9)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_xi9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r52 = dyn length2(xi9)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_xi9_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

L81_:;
  // p11 = prom<V +>{
  //   xi10 = ld xi;
  //   xi11 = force? xi10;
  //   checkMissing(xi11);
  //   c11 = `is.object`(xi11);
  //   if c11 then L1() else L2(xi11);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", xi11);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(xi13):
  //   m = ld m;
  //   m1 = force? m;
  //   __2 = ldf `[` in base;
  //   r57 = dyn __2(xi13, m1);
  //   goto L0(r57);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   srcloc2 = ld srcloc;
  //   srcloc3 = force? srcloc2;
  //   checkMissing(srcloc3);
  //   return srcloc3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_12, 0, NULL, CCP, RHO);
  // r60 = dyn paste2(p11, p12)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste2_, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L82() else D27()
  // L82()
  goto L82_;

L88_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // r67 = `>`(m5, 1.0)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_m5_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args99);
  // c13 = `as.logical`(r67)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args100);
  // if c13 then L89() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L89()
    goto L89_;
  } else {
  // L22()
    goto L22_;
  }

D24_:;
  // deopt 90 [i32, r52]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 103 [i39, r60]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L25(i46)
  // L25(i46)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i46_;
  goto L25_;

L25_:;
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L97() else D32()
  // L97()
  goto L97_;

L75_:;
  // goto L16(i32, r52)
  // L16(i32, r52)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L16_;

L82_:;
  // l1 = ld xi
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // c12 = `is.object`(l1)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args101);
  // if c12 then L83() else L84(i39, r60, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L83()
    goto L83_;
  } else {
  // L84(i39, r60, l1)
    Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i39_;
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r60_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L84_;
  }

L89_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard9 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

D32_:;
  // deopt 128 [i55]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L20_:;
  // st xi = dx9
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L21(i45)
  // L21(i45)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i45_;
  goto L21_;

L23_:;
  // st label = r69
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // goto L25(i51)
  // L25(i51)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i51_;
  goto L25_;

L83_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l1, r60)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args103);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc4 then L85() else L84(i39, r60, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L85()
    goto L85_;
  } else {
  // L84(i39, r60, dr8)
    Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i39_;
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r60_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr8_;
    goto L84_;
  }

L84_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L86() else D28()
  // L86()
  goto L86_;

L90_:;
  // label = ld label
  Rsh_Fir_reg_label = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L92() else D30()
  // L92()
  goto L92_;

L91_:;
  // r68 = dyn base9(<sym label>, <lang rep(substr("          ", 1, nchar(label, type="w")), `-`(m, 1))>)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L23(i46, r68)
  // L23(i46, r68)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L23_;

L97_:;
  // p15 = prom<V +>{
  //   paste3 = ldf paste0;
  //   p13 = prom<V +>{
  //     label2 = ld label;
  //     label3 = force? label2;
  //     checkMissing(label3);
  //     return label3;
  //   };
  //   p14 = prom<V +>{
  //     xi14 = ld xi;
  //     xi15 = force? xi14;
  //     checkMissing(xi15);
  //     return xi15;
  //   };
  //   r77 = dyn paste3(p13, p14);
  //   return r77;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_13, 0, NULL, CCP, RHO);
  // r79 = dyn cat1[, sep](p15, "\n")
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L98() else D33()
  // L98()
  goto L98_;

D28_:;
  // deopt 105 [i43, r62, l3, r60, m2]
  SEXP Rsh_Fir_array_deopt_stack32[5];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack32[3] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack32[4] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(105, 5, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 117 [i46, label]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_label;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 132 [i55, r79]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(132, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L85_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L20(i39, r60, dx8)
  // L20(i39, r60, dx8)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L20_;

L86_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r65 = dyn ___(l3, r60, m3)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args111[2] = Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L20(i43, r62, r65)
  // L20(i43, r62, r65)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r65_;
  goto L20_;

L92_:;
  // label1 = force? label
  Rsh_Fir_reg_label1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_label);
  // checkMissing(label1)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_label1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // sym10 = ldf rep
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // base10 = ldf rep in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard10 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L98_:;
  // goto L6(i55)
  // L6(i55)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i55_;
  goto L6_;

L24_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r73 = dyn c14(label1, r71)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_label1_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L95() else D31()
  // L95()
  goto L95_;

L93_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r72 = dyn rep(<lang substr("          ", 1, nchar(label, type="w"))>, <lang `-`(m, 1)>)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L24(i46, r72)
  // L24(i46, r72)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r72_;
  goto L24_;

L94_:;
  // r70 = dyn base10(<lang substr("          ", 1, nchar(label, type="w"))>, <lang `-`(m, 1)>)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L24(i46, r70)
  // L24(i46, r70)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L24_;

D31_:;
  // deopt 123 [i54, r73]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i54_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L23(i54, r73)
  // L23(i54, r73)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r73_;
  goto L23_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r3_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p1 = prom<V +>{
  //   getOption1 = ldf getOption;
  //   p = prom<V +>{
  //     return -1;
  //   };
  //   r1 = dyn getOption1("deparse.max.lines", p);
  //   return r1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_1, 0, NULL, CCP, RHO);
  // r3 = dyn getOption("traceback.max.lines", p1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_promise_inner1139050501_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getOption1_;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // getOption1 = ldf getOption
  Rsh_Fir_reg_getOption1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_2, 0, NULL, CCP, RHO);
  // r1 = dyn getOption1("deparse.max.lines", p)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner1139050501_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // return -1
  return Rsh_const(CCP, 8);
}
SEXP Rsh_Fir_user_promise_inner1139050501_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_max_lines1_;
  SEXP Rsh_Fir_reg_max_lines2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // max_lines1 = ld `max.lines`
  Rsh_Fir_reg_max_lines1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // max_lines2 = force? max_lines1
  Rsh_Fir_reg_max_lines2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_lines1_);
  // checkMissing(max_lines2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_max_lines2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return max_lines2
  return Rsh_Fir_reg_max_lines2_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettext;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // gettext = ldf gettext
  Rsh_Fir_reg_gettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // r12 = dyn gettext("No traceback available")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // checkMissing(i12)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_i12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // r18 = `-`(n5, i12)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args36);
  // r19 = `+`(r18, 1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args37);
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_xi4_;
  SEXP Rsh_Fir_reg_xi5_;
  SEXP Rsh_Fir_reg_attr2_;
  SEXP Rsh_Fir_reg_r44_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf attr
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base5 = ldf attr in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r43
  return Rsh_Fir_reg_r43_;

L1_:;
  // xi4 = ld xi
  Rsh_Fir_reg_xi4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // xi5 = force? xi4
  Rsh_Fir_reg_xi5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi4_);
  // checkMissing(xi5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_xi5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r44 = dyn attr2(xi5, "truncated")
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_xi5_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L0_;

L2_:;
  // r42 = dyn base5(<sym xi>, "truncated")
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_basename;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // basename = ldf basename
  Rsh_Fir_reg_basename = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // p7 = prom<V +>{
  //   srcfile = ld srcfile;
  //   srcfile1 = force? srcfile;
  //   checkMissing(srcfile1);
  //   c5 = `is.object`(srcfile1);
  //   if c5 then L1() else L2(srcfile1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", srcfile1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(srcfile3):
  //   r34 = `$`(srcfile3, <sym filename>);
  //   goto L0(r34);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_9, 0, NULL, CCP, RHO);
  // r36 = dyn basename(p7)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_basename, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names22, CCP, RHO);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_srcfile;
  SEXP Rsh_Fir_reg_srcfile1_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_srcfile3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // srcfile = ld srcfile
  Rsh_Fir_reg_srcfile = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // srcfile1 = force? srcfile
  Rsh_Fir_reg_srcfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile);
  // checkMissing(srcfile1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_srcfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(srcfile1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_srcfile1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args62);
  // if c5 then L1() else L2(srcfile1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(srcfile1)
    Rsh_Fir_reg_srcfile3_ = Rsh_Fir_reg_srcfile1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", srcfile1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_srcfile1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_srcfile3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r34 = `$`(srcfile3, <sym filename>)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_srcfile3_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args65);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r34_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_srcref2_;
  SEXP Rsh_Fir_reg_srcref3_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_srcref5_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // srcref2 = ld srcref
  Rsh_Fir_reg_srcref2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // srcref3 = force? srcref2
  Rsh_Fir_reg_srcref3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref2_);
  // checkMissing(srcref3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_srcref3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(srcref3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_srcref3_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args69);
  // if c6 then L1() else L2(srcref3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(srcref3)
    Rsh_Fir_reg_srcref5_ = Rsh_Fir_reg_srcref3_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", srcref3)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_srcref3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_srcref5_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r38 = dyn __1(srcref5, 1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_srcref5_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r38_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xi10_;
  SEXP Rsh_Fir_reg_xi11_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_xi13_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r57_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // xi10 = ld xi
  Rsh_Fir_reg_xi10_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // xi11 = force? xi10
  Rsh_Fir_reg_xi11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi10_);
  // checkMissing(xi11)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_xi11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(xi11)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_xi11_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args91);
  // if c11 then L1() else L2(xi11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xi11)
    Rsh_Fir_reg_xi13_ = Rsh_Fir_reg_xi11_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", xi11)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_xi11_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_xi13_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r57 = dyn __2(xi13, m1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_xi13_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r57_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_srcloc2_;
  SEXP Rsh_Fir_reg_srcloc3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // srcloc2 = ld srcloc
  Rsh_Fir_reg_srcloc2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // srcloc3 = force? srcloc2
  Rsh_Fir_reg_srcloc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcloc2_);
  // checkMissing(srcloc3)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_srcloc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return srcloc3
  return Rsh_Fir_reg_srcloc3_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste3_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r77_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // paste3 = ldf paste0
  Rsh_Fir_reg_paste3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p13 = prom<V +>{
  //   label2 = ld label;
  //   label3 = force? label2;
  //   checkMissing(label3);
  //   return label3;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_14, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   xi14 = ld xi;
  //   xi15 = force? xi14;
  //   checkMissing(xi15);
  //   return xi15;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1139050501_15, 0, NULL, CCP, RHO);
  // r77 = dyn paste3(p13, p14)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste3_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names33, CCP, RHO);
  // return r77
  return Rsh_Fir_reg_r77_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_label2_;
  SEXP Rsh_Fir_reg_label3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // label2 = ld label
  Rsh_Fir_reg_label2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // label3 = force? label2
  Rsh_Fir_reg_label3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_label2_);
  // checkMissing(label3)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_label3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // return label3
  return Rsh_Fir_reg_label3_;
}
SEXP Rsh_Fir_user_promise_inner1139050501_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xi14_;
  SEXP Rsh_Fir_reg_xi15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1139050501/0: expected 0, got %d", NCAPTURES);

  // xi14 = ld xi
  Rsh_Fir_reg_xi14_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // xi15 = force? xi14
  Rsh_Fir_reg_xi15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi14_);
  // checkMissing(xi15)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_xi15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // return xi15
  return Rsh_Fir_reg_xi15_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_bar1;
  SEXP Rsh_Fir_reg_r1_2;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn print(1.0)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L1_:;
  // bar = ldf bar
  Rsh_Fir_reg_bar1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r1 = dyn bar(2.0)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bar1, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_2;
}
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_traceback;
  SEXP Rsh_Fir_reg_r2;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // traceback = ldf traceback
  Rsh_Fir_reg_traceback = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn traceback(3.0)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_traceback, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
