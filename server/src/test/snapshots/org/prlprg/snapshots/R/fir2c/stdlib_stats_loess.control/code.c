#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1340318242_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1340318242_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1340318242_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1340318242_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner1340318242
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1340318242_, RHO, CCP);
  // st `loess.control` = r
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
SEXP Rsh_Fir_user_function_inner1340318242_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1340318242 dynamic dispatch ([surface, statistics, `trace.hat`, cell, iterations, iterTrace, `...`])

  return Rsh_Fir_user_version_inner1340318242_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1340318242_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1340318242 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner1340318242/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_surface;  // surface
  SEXP Rsh_Fir_reg_statistics;  // statistics
  SEXP Rsh_Fir_reg_trace_hat;  // trace_hat
  SEXP Rsh_Fir_reg_cell;  // cell
  SEXP Rsh_Fir_reg_iterations;  // iterations
  SEXP Rsh_Fir_reg_iterTrace;  // iterTrace
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_surface_isMissing;  // surface_isMissing
  SEXP Rsh_Fir_reg_surface_orDefault;  // surface_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_statistics_isMissing;  // statistics_isMissing
  SEXP Rsh_Fir_reg_statistics_orDefault;  // statistics_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_trace_hat_isMissing;  // trace_hat_isMissing
  SEXP Rsh_Fir_reg_trace_hat_orDefault;  // trace_hat_orDefault
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_cell_isMissing;  // cell_isMissing
  SEXP Rsh_Fir_reg_cell_orDefault;  // cell_orDefault
  SEXP Rsh_Fir_reg_iterations_isMissing;  // iterations_isMissing
  SEXP Rsh_Fir_reg_iterations_orDefault;  // iterations_orDefault
  SEXP Rsh_Fir_reg_iterTrace_isMissing;  // iterTrace_isMissing
  SEXP Rsh_Fir_reg_iterTrace_orDefault;  // iterTrace_orDefault
  SEXP Rsh_Fir_reg_stopifnot;  // stopifnot
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_iterations1_;  // iterations1
  SEXP Rsh_Fir_reg_iterations2_;  // iterations2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_iterations3_;  // iterations3
  SEXP Rsh_Fir_reg_iterations4_;  // iterations4
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_iterations5_;  // iterations5
  SEXP Rsh_Fir_reg_iterations6_;  // iterations6
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_iterTrace1_;  // iterTrace1
  SEXP Rsh_Fir_reg_iterTrace2_;  // iterTrace2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_iterTrace3_;  // iterTrace3
  SEXP Rsh_Fir_reg_iterTrace4_;  // iterTrace4
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_iterTrace5_;  // iterTrace5
  SEXP Rsh_Fir_reg_iterTrace6_;  // iterTrace6
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_surface1_;  // surface1
  SEXP Rsh_Fir_reg_surface2_;  // surface2
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_match_arg1_;  // match_arg1
  SEXP Rsh_Fir_reg_statistics1_;  // statistics1
  SEXP Rsh_Fir_reg_statistics2_;  // statistics2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_match_arg2_;  // match_arg2
  SEXP Rsh_Fir_reg_trace_hat1_;  // trace_hat1
  SEXP Rsh_Fir_reg_trace_hat2_;  // trace_hat2
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_cell1_;  // cell1
  SEXP Rsh_Fir_reg_cell2_;  // cell2
  SEXP Rsh_Fir_reg_iterations7_;  // iterations7
  SEXP Rsh_Fir_reg_iterations8_;  // iterations8
  SEXP Rsh_Fir_reg_iterTrace7_;  // iterTrace7
  SEXP Rsh_Fir_reg_iterTrace8_;  // iterTrace8
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r51_;  // r51

  // Bind parameters
  Rsh_Fir_reg_surface = PARAMS[0];
  Rsh_Fir_reg_statistics = PARAMS[1];
  Rsh_Fir_reg_trace_hat = PARAMS[2];
  Rsh_Fir_reg_cell = PARAMS[3];
  Rsh_Fir_reg_iterations = PARAMS[4];
  Rsh_Fir_reg_iterTrace = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // surface_isMissing = missing.0(surface)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_surface;
  Rsh_Fir_reg_surface_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if surface_isMissing then L0() else L1(surface)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_surface_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(surface)
    Rsh_Fir_reg_surface_orDefault = Rsh_Fir_reg_surface;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("interpolate", "direct");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("interpolate", "direct");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_surface_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st surface = surface_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_surface_orDefault, RHO);
  (void)(Rsh_Fir_reg_surface_orDefault);
  // statistics_isMissing = missing.0(statistics)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_statistics;
  Rsh_Fir_reg_statistics_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if statistics_isMissing then L2() else L3(statistics)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_statistics_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(statistics)
    Rsh_Fir_reg_statistics_orDefault = Rsh_Fir_reg_statistics;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   c1 = ldf c in base;
  //   r6 = dyn c1("approximate", "exact", "none");
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1("approximate", "exact", "none");
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_1, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_statistics_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st statistics = statistics_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_statistics_orDefault, RHO);
  (void)(Rsh_Fir_reg_statistics_orDefault);
  // trace_hat_isMissing = missing.0(trace_hat)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_trace_hat;
  Rsh_Fir_reg_trace_hat_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if trace_hat_isMissing then L4() else L5(trace_hat)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_trace_hat_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(trace_hat)
    Rsh_Fir_reg_trace_hat_orDefault = Rsh_Fir_reg_trace_hat;
    goto L5_;
  }

L4_:;
  // p2 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r9):
  //   return r9;
  // L1():
  //   c2 = ldf c in base;
  //   r10 = dyn c2("exact", "approximate");
  //   goto L0(r10);
  // L2():
  //   r8 = dyn base2("exact", "approximate");
  //   goto L0(r8);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_2, CCP, RHO);
  // goto L5(p2)
  // L5(p2)
  Rsh_Fir_reg_trace_hat_orDefault = Rsh_Fir_reg_p2_;
  goto L5_;

L5_:;
  // st `trace.hat` = trace_hat_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_trace_hat_orDefault, RHO);
  (void)(Rsh_Fir_reg_trace_hat_orDefault);
  // cell_isMissing = missing.0(cell)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_cell;
  Rsh_Fir_reg_cell_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if cell_isMissing then L6(0.2) else L6(cell)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cell_isMissing)) {
  // L6(0.2)
    Rsh_Fir_reg_cell_orDefault = Rsh_const(CCP, 10);
    goto L6_;
  } else {
  // L6(cell)
    Rsh_Fir_reg_cell_orDefault = Rsh_Fir_reg_cell;
    goto L6_;
  }

L6_:;
  // st cell = cell_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_cell_orDefault, RHO);
  (void)(Rsh_Fir_reg_cell_orDefault);
  // iterations_isMissing = missing.0(iterations)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_iterations;
  Rsh_Fir_reg_iterations_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args13);
  // if iterations_isMissing then L7(4) else L7(iterations)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_iterations_isMissing)) {
  // L7(4)
    Rsh_Fir_reg_iterations_orDefault = Rsh_const(CCP, 12);
    goto L7_;
  } else {
  // L7(iterations)
    Rsh_Fir_reg_iterations_orDefault = Rsh_Fir_reg_iterations;
    goto L7_;
  }

L7_:;
  // st iterations = iterations_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_iterations_orDefault, RHO);
  (void)(Rsh_Fir_reg_iterations_orDefault);
  // iterTrace_isMissing = missing.0(iterTrace)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_iterTrace;
  Rsh_Fir_reg_iterTrace_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if iterTrace_isMissing then L8(FALSE) else L8(iterTrace)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_iterTrace_isMissing)) {
  // L8(FALSE)
    Rsh_Fir_reg_iterTrace_orDefault = Rsh_const(CCP, 14);
    goto L8_;
  } else {
  // L8(iterTrace)
    Rsh_Fir_reg_iterTrace_orDefault = Rsh_Fir_reg_iterTrace;
    goto L8_;
  }

L8_:;
  // st iterTrace = iterTrace_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_iterTrace_orDefault, RHO);
  (void)(Rsh_Fir_reg_iterTrace_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r44
  return Rsh_Fir_reg_r44_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p3 = prom<V +>{
  //   sym3 = ldf length;
  //   base3 = ldf length in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r13):
  //   r15 = `==`(r13, 1);
  //   return r15;
  // L1():
  //   iterations1 = ld iterations;
  //   iterations2 = force? iterations1;
  //   checkMissing(iterations2);
  //   length = ldf length in base;
  //   r14 = dyn length(iterations2);
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base3(<sym iterations>);
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym4 = ldf `is.na`;
  //   base4 = ldf `is.na` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r18):
  //   r20 = `!`(r18);
  //   return r20;
  // L1():
  //   iterations3 = ld iterations;
  //   iterations4 = force? iterations3;
  //   checkMissing(iterations4);
  //   is_na = ldf `is.na` in base;
  //   r19 = dyn is_na(iterations4);
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base4(<sym iterations>);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_4, CCP, RHO);
  // p5 = prom<V +>{
  //   sym5 = ldf `as.integer`;
  //   base5 = ldf `as.integer` in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r23):
  //   r25 = `>`(r23, 0);
  //   return r25;
  // L1():
  //   iterations5 = ld iterations;
  //   iterations6 = force? iterations5;
  //   checkMissing(iterations6);
  //   as_integer = ldf `as.integer` in base;
  //   r24 = dyn as_integer(iterations6);
  //   goto L0(r24);
  // L2():
  //   r22 = dyn base5(<sym iterations>);
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_5, CCP, RHO);
  // p6 = prom<V +>{
  //   sym6 = ldf length;
  //   base6 = ldf length in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r28):
  //   r30 = `==`(r28, 1);
  //   return r30;
  // L1():
  //   iterTrace1 = ld iterTrace;
  //   iterTrace2 = force? iterTrace1;
  //   checkMissing(iterTrace2);
  //   length1 = ldf length in base;
  //   r29 = dyn length1(iterTrace2);
  //   goto L0(r29);
  // L2():
  //   r27 = dyn base6(<sym iterTrace>);
  //   goto L0(r27);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_6, CCP, RHO);
  // p7 = prom<V +>{
  //   sym7 = ldf `is.na`;
  //   base7 = ldf `is.na` in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r33):
  //   r35 = `!`(r33);
  //   return r35;
  // L1():
  //   iterTrace3 = ld iterTrace;
  //   iterTrace4 = force? iterTrace3;
  //   checkMissing(iterTrace4);
  //   is_na1 = ldf `is.na` in base;
  //   r34 = dyn is_na1(iterTrace4);
  //   goto L0(r34);
  // L2():
  //   r32 = dyn base7(<sym iterTrace>);
  //   goto L0(r32);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_7, CCP, RHO);
  // p8 = prom<V +>{
  //   sym8 = ldf `as.integer`;
  //   base8 = ldf `as.integer` in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r38):
  //   r40 = `>=`(r38, 0);
  //   return r40;
  // L1():
  //   iterTrace5 = ld iterTrace;
  //   iterTrace6 = force? iterTrace5;
  //   checkMissing(iterTrace6);
  //   as_integer1 = ldf `as.integer` in base;
  //   r39 = dyn as_integer1(iterTrace6);
  //   goto L0(r39);
  // L2():
  //   r37 = dyn base8(<sym iterTrace>);
  //   goto L0(r37);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_8, CCP, RHO);
  // r42 = dyn stopifnot(p3, p4, p5, p6, p7, p8)
  SEXP Rsh_Fir_array_args45[6];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args45[3] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args45[4] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args45[5] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names18[6];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_array_arg_names18[5] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 6, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 8 [r42]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // sym9 = ldf list
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base9 = ldf list in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard9 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L13_:;
  // r43 = dyn base9[surface, statistics, `trace.hat`, cell, iterations, iterTrace](<lang match.arg(surface)>, <lang match.arg(statistics)>, <lang match.arg(trace.hat)>, <sym cell>, <sym iterations>, <sym iterTrace>)
  SEXP Rsh_Fir_array_args47[6];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args47[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args47[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args47[4] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args47[5] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names19[6];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names19[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names19[4] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names19[5] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 6, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L9(r43)
  // L9(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L9_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p9 = prom<V +>{
  //   surface1 = ld surface;
  //   surface2 = force? surface1;
  //   checkMissing(surface2);
  //   return surface2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_9, CCP, RHO);
  // r46 = dyn match_arg(p9)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 14 [r46]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // match_arg1 = ldf `match.arg`
  Rsh_Fir_reg_match_arg1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p10 = prom<V +>{
  //   statistics1 = ld statistics;
  //   statistics2 = force? statistics1;
  //   checkMissing(statistics2);
  //   return statistics2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_10, CCP, RHO);
  // r48 = dyn match_arg1(p10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 19 [r48]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // match_arg2 = ldf `match.arg`
  Rsh_Fir_reg_match_arg2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p11 = prom<V +>{
  //   trace_hat1 = ld `trace.hat`;
  //   trace_hat2 = force? trace_hat1;
  //   checkMissing(trace_hat2);
  //   return trace_hat2;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1340318242_11, CCP, RHO);
  // r50 = dyn match_arg2(p11)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg2_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 24 [r50]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // cell1 = ld cell
  Rsh_Fir_reg_cell1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D8_:;
  // deopt 26 [cell1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_cell1_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // cell2 = force? cell1
  Rsh_Fir_reg_cell2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cell1_);
  // checkMissing(cell2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_cell2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // iterations7 = ld iterations
  Rsh_Fir_reg_iterations7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 29 [iterations7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_iterations7_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // iterations8 = force? iterations7
  Rsh_Fir_reg_iterations8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterations7_);
  // checkMissing(iterations8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_iterations8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // iterTrace7 = ld iterTrace
  Rsh_Fir_reg_iterTrace7_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

D10_:;
  // deopt 32 [iterTrace7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_iterTrace7_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // iterTrace8 = force? iterTrace7
  Rsh_Fir_reg_iterTrace8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterTrace7_);
  // checkMissing(iterTrace8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_iterTrace8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r51 = dyn list(r46, r48, r50, cell2, iterations8, iterTrace8)
  SEXP Rsh_Fir_array_args57[6];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args57[3] = Rsh_Fir_reg_cell2_;
  Rsh_Fir_array_args57[4] = Rsh_Fir_reg_iterations8_;
  Rsh_Fir_array_args57[5] = Rsh_Fir_reg_iterTrace8_;
  SEXP Rsh_Fir_array_arg_names23[6];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_array_arg_names23[4] = R_MissingArg;
  Rsh_Fir_array_arg_names23[5] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 6, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L23() else D11()
  // L23()
  goto L23_;

D11_:;
  // deopt 36 [r51]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L9(r51)
  // L9(r51)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r51_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r2 = dyn c("interpolate", "direct")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("interpolate", "direct")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r6 = dyn c1("approximate", "exact", "none")
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1("approximate", "exact", "none")
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_2(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r9
  return Rsh_Fir_reg_r9_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r10 = dyn c2("exact", "approximate")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L0_;

L2_:;
  // r8 = dyn base2("exact", "approximate")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_3(SEXP CCP, SEXP RHO) {
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r15 = `==`(r13, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // iterations1 = ld iterations
  Rsh_Fir_reg_iterations1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // iterations2 = force? iterations1
  Rsh_Fir_reg_iterations2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterations1_);
  // checkMissing(iterations2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_iterations2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r14 = dyn length(iterations2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_iterations2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base3(<sym iterations>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_4(SEXP CCP, SEXP RHO) {
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r20 = `!`(r18)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // return r20
  return Rsh_Fir_reg_r20_;

L1_:;
  // iterations3 = ld iterations
  Rsh_Fir_reg_iterations3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // iterations4 = force? iterations3
  Rsh_Fir_reg_iterations4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterations3_);
  // checkMissing(iterations4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_iterations4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r19 = dyn is_na(iterations4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_iterations4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base4(<sym iterations>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_5(SEXP CCP, SEXP RHO) {
  // sym5 = ldf `as.integer`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base5 = ldf `as.integer` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r25 = `>`(r23, 0)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // iterations5 = ld iterations
  Rsh_Fir_reg_iterations5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // iterations6 = force? iterations5
  Rsh_Fir_reg_iterations6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterations5_);
  // checkMissing(iterations6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_iterations6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r24 = dyn as_integer(iterations6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_iterations6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L0_;

L2_:;
  // r22 = dyn base5(<sym iterations>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_6(SEXP CCP, SEXP RHO) {
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r30 = `==`(r28, 1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // return r30
  return Rsh_Fir_reg_r30_;

L1_:;
  // iterTrace1 = ld iterTrace
  Rsh_Fir_reg_iterTrace1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // iterTrace2 = force? iterTrace1
  Rsh_Fir_reg_iterTrace2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterTrace1_);
  // checkMissing(iterTrace2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_iterTrace2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r29 = dyn length1(iterTrace2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_iterTrace2_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r27 = dyn base6(<sym iterTrace>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_7(SEXP CCP, SEXP RHO) {
  // sym7 = ldf `is.na`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base7 = ldf `is.na` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r35 = `!`(r33)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // return r35
  return Rsh_Fir_reg_r35_;

L1_:;
  // iterTrace3 = ld iterTrace
  Rsh_Fir_reg_iterTrace3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // iterTrace4 = force? iterTrace3
  Rsh_Fir_reg_iterTrace4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterTrace3_);
  // checkMissing(iterTrace4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_iterTrace4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r34 = dyn is_na1(iterTrace4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_iterTrace4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L0_;

L2_:;
  // r32 = dyn base7(<sym iterTrace>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_8(SEXP CCP, SEXP RHO) {
  // sym8 = ldf `as.integer`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base8 = ldf `as.integer` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r40 = `>=`(r38, 0)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // return r40
  return Rsh_Fir_reg_r40_;

L1_:;
  // iterTrace5 = ld iterTrace
  Rsh_Fir_reg_iterTrace5_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // iterTrace6 = force? iterTrace5
  Rsh_Fir_reg_iterTrace6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterTrace5_);
  // checkMissing(iterTrace6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_iterTrace6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r39 = dyn as_integer1(iterTrace6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_iterTrace6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L0_;

L2_:;
  // r37 = dyn base8(<sym iterTrace>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_9(SEXP CCP, SEXP RHO) {
  // surface1 = ld surface
  Rsh_Fir_reg_surface1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // surface2 = force? surface1
  Rsh_Fir_reg_surface2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_surface1_);
  // checkMissing(surface2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_surface2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return surface2
  return Rsh_Fir_reg_surface2_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_10(SEXP CCP, SEXP RHO) {
  // statistics1 = ld statistics
  Rsh_Fir_reg_statistics1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // statistics2 = force? statistics1
  Rsh_Fir_reg_statistics2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_statistics1_);
  // checkMissing(statistics2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_statistics2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return statistics2
  return Rsh_Fir_reg_statistics2_;
}
SEXP Rsh_Fir_user_promise_inner1340318242_11(SEXP CCP, SEXP RHO) {
  // trace_hat1 = ld `trace.hat`
  Rsh_Fir_reg_trace_hat1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // trace_hat2 = force? trace_hat1
  Rsh_Fir_reg_trace_hat2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trace_hat1_);
  // checkMissing(trace_hat2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_trace_hat2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return trace_hat2
  return Rsh_Fir_reg_trace_hat2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
