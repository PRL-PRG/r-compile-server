#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1000890133_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1000890133_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1000890133_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1000890133_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner1000890133
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1000890133_, RHO, CCP);
  // st Rprof = r
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
SEXP Rsh_Fir_user_function_inner1000890133_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1000890133 dynamic dispatch ([filename, append, interval, `memory.profiling`, `gc.profiling`, `line.profiling`, `filter.callframes`, numfiles, bufsize, event])

  return Rsh_Fir_user_version_inner1000890133_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1000890133_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1000890133 version 0 (*, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 10) Rsh_error("FIŘ arity mismatch for inner1000890133/0: expected 10, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_filename;  // filename
  SEXP Rsh_Fir_reg_append;  // append
  SEXP Rsh_Fir_reg_interval;  // interval
  SEXP Rsh_Fir_reg_memory_profiling;  // memory_profiling
  SEXP Rsh_Fir_reg_gc_profiling;  // gc_profiling
  SEXP Rsh_Fir_reg_line_profiling;  // line_profiling
  SEXP Rsh_Fir_reg_filter_callframes;  // filter_callframes
  SEXP Rsh_Fir_reg_numfiles;  // numfiles
  SEXP Rsh_Fir_reg_bufsize;  // bufsize
  SEXP Rsh_Fir_reg_event;  // event
  SEXP Rsh_Fir_reg_filename_isMissing;  // filename_isMissing
  SEXP Rsh_Fir_reg_filename_orDefault;  // filename_orDefault
  SEXP Rsh_Fir_reg_append_isMissing;  // append_isMissing
  SEXP Rsh_Fir_reg_append_orDefault;  // append_orDefault
  SEXP Rsh_Fir_reg_interval_isMissing;  // interval_isMissing
  SEXP Rsh_Fir_reg_interval_orDefault;  // interval_orDefault
  SEXP Rsh_Fir_reg_memory_profiling_isMissing;  // memory_profiling_isMissing
  SEXP Rsh_Fir_reg_memory_profiling_orDefault;  // memory_profiling_orDefault
  SEXP Rsh_Fir_reg_gc_profiling_isMissing;  // gc_profiling_isMissing
  SEXP Rsh_Fir_reg_gc_profiling_orDefault;  // gc_profiling_orDefault
  SEXP Rsh_Fir_reg_line_profiling_isMissing;  // line_profiling_isMissing
  SEXP Rsh_Fir_reg_line_profiling_orDefault;  // line_profiling_orDefault
  SEXP Rsh_Fir_reg_filter_callframes_isMissing;  // filter_callframes_isMissing
  SEXP Rsh_Fir_reg_filter_callframes_orDefault;  // filter_callframes_orDefault
  SEXP Rsh_Fir_reg_numfiles_isMissing;  // numfiles_isMissing
  SEXP Rsh_Fir_reg_numfiles_orDefault;  // numfiles_orDefault
  SEXP Rsh_Fir_reg_bufsize_isMissing;  // bufsize_isMissing
  SEXP Rsh_Fir_reg_bufsize_orDefault;  // bufsize_orDefault
  SEXP Rsh_Fir_reg_event_isMissing;  // event_isMissing
  SEXP Rsh_Fir_reg_event_orDefault;  // event_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_event1_;  // event1
  SEXP Rsh_Fir_reg_event2_;  // event2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_filename1_;  // filename1
  SEXP Rsh_Fir_reg_filename2_;  // filename2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_C_Rprof;  // C_Rprof
  SEXP Rsh_Fir_reg_C_Rprof1_;  // C_Rprof1
  SEXP Rsh_Fir_reg_filename3_;  // filename3
  SEXP Rsh_Fir_reg_filename4_;  // filename4
  SEXP Rsh_Fir_reg_append1_;  // append1
  SEXP Rsh_Fir_reg_append2_;  // append2
  SEXP Rsh_Fir_reg_interval1_;  // interval1
  SEXP Rsh_Fir_reg_interval2_;  // interval2
  SEXP Rsh_Fir_reg_memory_profiling1_;  // memory_profiling1
  SEXP Rsh_Fir_reg_memory_profiling2_;  // memory_profiling2
  SEXP Rsh_Fir_reg_gc_profiling1_;  // gc_profiling1
  SEXP Rsh_Fir_reg_gc_profiling2_;  // gc_profiling2
  SEXP Rsh_Fir_reg_line_profiling1_;  // line_profiling1
  SEXP Rsh_Fir_reg_line_profiling2_;  // line_profiling2
  SEXP Rsh_Fir_reg_filter_callframes1_;  // filter_callframes1
  SEXP Rsh_Fir_reg_filter_callframes2_;  // filter_callframes2
  SEXP Rsh_Fir_reg_numfiles1_;  // numfiles1
  SEXP Rsh_Fir_reg_numfiles2_;  // numfiles2
  SEXP Rsh_Fir_reg_bufsize1_;  // bufsize1
  SEXP Rsh_Fir_reg_bufsize2_;  // bufsize2
  SEXP Rsh_Fir_reg_event3_;  // event3
  SEXP Rsh_Fir_reg_event4_;  // event4
  SEXP Rsh_Fir_reg__External;  // _External
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r14_;  // r14

  // Bind parameters
  Rsh_Fir_reg_filename = PARAMS[0];
  Rsh_Fir_reg_append = PARAMS[1];
  Rsh_Fir_reg_interval = PARAMS[2];
  Rsh_Fir_reg_memory_profiling = PARAMS[3];
  Rsh_Fir_reg_gc_profiling = PARAMS[4];
  Rsh_Fir_reg_line_profiling = PARAMS[5];
  Rsh_Fir_reg_filter_callframes = PARAMS[6];
  Rsh_Fir_reg_numfiles = PARAMS[7];
  Rsh_Fir_reg_bufsize = PARAMS[8];
  Rsh_Fir_reg_event = PARAMS[9];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // filename_isMissing = missing.0(filename)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_filename;
  Rsh_Fir_reg_filename_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if filename_isMissing then L0("Rprof.out") else L0(filename)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_filename_isMissing)) {
  // L0("Rprof.out")
    Rsh_Fir_reg_filename_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(filename)
    Rsh_Fir_reg_filename_orDefault = Rsh_Fir_reg_filename;
    goto L0_;
  }

L0_:;
  // st filename = filename_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_filename_orDefault, RHO);
  (void)(Rsh_Fir_reg_filename_orDefault);
  // append_isMissing = missing.0(append)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_append;
  Rsh_Fir_reg_append_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if append_isMissing then L1(FALSE) else L1(append)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_append_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_append_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(append)
    Rsh_Fir_reg_append_orDefault = Rsh_Fir_reg_append;
    goto L1_;
  }

L1_:;
  // st append = append_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_append_orDefault, RHO);
  (void)(Rsh_Fir_reg_append_orDefault);
  // interval_isMissing = missing.0(interval)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_interval;
  Rsh_Fir_reg_interval_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if interval_isMissing then L2(0.02) else L2(interval)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_interval_isMissing)) {
  // L2(0.02)
    Rsh_Fir_reg_interval_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(interval)
    Rsh_Fir_reg_interval_orDefault = Rsh_Fir_reg_interval;
    goto L2_;
  }

L2_:;
  // st interval = interval_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_interval_orDefault, RHO);
  (void)(Rsh_Fir_reg_interval_orDefault);
  // memory_profiling_isMissing = missing.0(memory_profiling)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_memory_profiling;
  Rsh_Fir_reg_memory_profiling_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if memory_profiling_isMissing then L3(FALSE) else L3(memory_profiling)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_memory_profiling_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_memory_profiling_orDefault = Rsh_const(CCP, 3);
    goto L3_;
  } else {
  // L3(memory_profiling)
    Rsh_Fir_reg_memory_profiling_orDefault = Rsh_Fir_reg_memory_profiling;
    goto L3_;
  }

L3_:;
  // st `memory.profiling` = memory_profiling_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_memory_profiling_orDefault, RHO);
  (void)(Rsh_Fir_reg_memory_profiling_orDefault);
  // gc_profiling_isMissing = missing.0(gc_profiling)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_gc_profiling;
  Rsh_Fir_reg_gc_profiling_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if gc_profiling_isMissing then L4(FALSE) else L4(gc_profiling)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_gc_profiling_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_gc_profiling_orDefault = Rsh_const(CCP, 3);
    goto L4_;
  } else {
  // L4(gc_profiling)
    Rsh_Fir_reg_gc_profiling_orDefault = Rsh_Fir_reg_gc_profiling;
    goto L4_;
  }

L4_:;
  // st `gc.profiling` = gc_profiling_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_gc_profiling_orDefault, RHO);
  (void)(Rsh_Fir_reg_gc_profiling_orDefault);
  // line_profiling_isMissing = missing.0(line_profiling)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_line_profiling;
  Rsh_Fir_reg_line_profiling_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if line_profiling_isMissing then L5(FALSE) else L5(line_profiling)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_line_profiling_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_line_profiling_orDefault = Rsh_const(CCP, 3);
    goto L5_;
  } else {
  // L5(line_profiling)
    Rsh_Fir_reg_line_profiling_orDefault = Rsh_Fir_reg_line_profiling;
    goto L5_;
  }

L5_:;
  // st `line.profiling` = line_profiling_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_line_profiling_orDefault, RHO);
  (void)(Rsh_Fir_reg_line_profiling_orDefault);
  // filter_callframes_isMissing = missing.0(filter_callframes)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_filter_callframes;
  Rsh_Fir_reg_filter_callframes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if filter_callframes_isMissing then L6(FALSE) else L6(filter_callframes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_filter_callframes_isMissing)) {
  // L6(FALSE)
    Rsh_Fir_reg_filter_callframes_orDefault = Rsh_const(CCP, 3);
    goto L6_;
  } else {
  // L6(filter_callframes)
    Rsh_Fir_reg_filter_callframes_orDefault = Rsh_Fir_reg_filter_callframes;
    goto L6_;
  }

L6_:;
  // st `filter.callframes` = filter_callframes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_filter_callframes_orDefault, RHO);
  (void)(Rsh_Fir_reg_filter_callframes_orDefault);
  // numfiles_isMissing = missing.0(numfiles)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_numfiles;
  Rsh_Fir_reg_numfiles_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if numfiles_isMissing then L7(100) else L7(numfiles)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_numfiles_isMissing)) {
  // L7(100)
    Rsh_Fir_reg_numfiles_orDefault = Rsh_const(CCP, 11);
    goto L7_;
  } else {
  // L7(numfiles)
    Rsh_Fir_reg_numfiles_orDefault = Rsh_Fir_reg_numfiles;
    goto L7_;
  }

L7_:;
  // st numfiles = numfiles_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_numfiles_orDefault, RHO);
  (void)(Rsh_Fir_reg_numfiles_orDefault);
  // bufsize_isMissing = missing.0(bufsize)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_bufsize;
  Rsh_Fir_reg_bufsize_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if bufsize_isMissing then L8(10000) else L8(bufsize)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_bufsize_isMissing)) {
  // L8(10000)
    Rsh_Fir_reg_bufsize_orDefault = Rsh_const(CCP, 13);
    goto L8_;
  } else {
  // L8(bufsize)
    Rsh_Fir_reg_bufsize_orDefault = Rsh_Fir_reg_bufsize;
    goto L8_;
  }

L8_:;
  // st bufsize = bufsize_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_bufsize_orDefault, RHO);
  (void)(Rsh_Fir_reg_bufsize_orDefault);
  // event_isMissing = missing.0(event)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_event;
  Rsh_Fir_reg_event_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if event_isMissing then L9() else L10(event)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_event_isMissing)) {
  // L9()
    goto L9_;
  } else {
  // L10(event)
    Rsh_Fir_reg_event_orDefault = Rsh_Fir_reg_event;
    goto L10_;
  }

L9_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("default", "cpu", "elapsed");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("default", "cpu", "elapsed");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1000890133_, CCP, RHO);
  // goto L10(p)
  // L10(p)
  Rsh_Fir_reg_event_orDefault = Rsh_Fir_reg_p;
  goto L10_;

L10_:;
  // st event = event_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_event_orDefault, RHO);
  (void)(Rsh_Fir_reg_event_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L11_:;
  // c2 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c2 then L21() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L21()
    goto L21_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym2 = ldf invisible
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf invisible in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard2 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

L15_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r14 = dyn invisible(r12)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L39() else D15()
  // L39()
  goto L39_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p1 = prom<V +>{
  //   event1 = ld event;
  //   event2 = force? event1;
  //   checkMissing(event2);
  //   return event2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1000890133_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // st event = r5
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // filename1 = ld filename
  Rsh_Fir_reg_filename1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L19_:;
  // r6 = dyn base1(<sym filename>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L11(r6)
  // L11(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L11_;

D2_:;
  // deopt 6 [filename1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_filename1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // filename2 = force? filename1
  Rsh_Fir_reg_filename2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename1_);
  // checkMissing(filename2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_filename2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c1 = `==`(filename2, NULL)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_filename2_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L11(c1)
  // L11(c1)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c1_;
  goto L11_;

L21_:;
  // st filename = ""
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 24), RHO);
  (void)(Rsh_const(CCP, 24));
  // goto L13()
  // L13()
  goto L13_;

L23_:;
  // sym3 = ldf `.External`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base3 = ldf `.External` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L24_:;
  // r9 = dyn base2(<lang .External(C_Rprof, filename, append, interval, memory.profiling, gc.profiling, line.profiling, filter.callframes, numfiles, bufsize, event)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L14(r9)
  // L14(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L14_;

L25_:;
  // C_Rprof = ld C_Rprof
  Rsh_Fir_reg_C_Rprof = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

L26_:;
  // r11 = dyn base3(<sym C_Rprof>, <sym filename>, <sym append>, <sym interval>, <sym memory.profiling>, <sym gc.profiling>, <sym line.profiling>, <sym filter.callframes>, <sym numfiles>, <sym bufsize>, <sym event>)
  SEXP Rsh_Fir_array_args24[11];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args24[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args24[5] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args24[6] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args24[7] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args24[8] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args24[9] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args24[10] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names6[11];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_array_arg_names6[6] = R_MissingArg;
  Rsh_Fir_array_arg_names6[7] = R_MissingArg;
  Rsh_Fir_array_arg_names6[8] = R_MissingArg;
  Rsh_Fir_array_arg_names6[9] = R_MissingArg;
  Rsh_Fir_array_arg_names6[10] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 11, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L15(r11)
  // L15(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L15_;

D3_:;
  // deopt 18 [C_Rprof]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_Rprof;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L27_:;
  // C_Rprof1 = force? C_Rprof
  Rsh_Fir_reg_C_Rprof1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_Rprof);
  // checkMissing(C_Rprof1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_C_Rprof1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // filename3 = ld filename
  Rsh_Fir_reg_filename3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

D4_:;
  // deopt 20 [filename3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_filename3_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // filename4 = force? filename3
  Rsh_Fir_reg_filename4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename3_);
  // checkMissing(filename4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_filename4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // append1 = ld append
  Rsh_Fir_reg_append1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

D5_:;
  // deopt 22 [append1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_append1_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L29_:;
  // append2 = force? append1
  Rsh_Fir_reg_append2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_append1_);
  // checkMissing(append2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_append2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // interval1 = ld interval
  Rsh_Fir_reg_interval1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

D6_:;
  // deopt 24 [interval1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_interval1_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // interval2 = force? interval1
  Rsh_Fir_reg_interval2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interval1_);
  // checkMissing(interval2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_interval2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // memory_profiling1 = ld `memory.profiling`
  Rsh_Fir_reg_memory_profiling1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

D7_:;
  // deopt 26 [memory_profiling1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_memory_profiling1_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // memory_profiling2 = force? memory_profiling1
  Rsh_Fir_reg_memory_profiling2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_memory_profiling1_);
  // checkMissing(memory_profiling2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_memory_profiling2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // gc_profiling1 = ld `gc.profiling`
  Rsh_Fir_reg_gc_profiling1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 28 [gc_profiling1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_gc_profiling1_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L32_:;
  // gc_profiling2 = force? gc_profiling1
  Rsh_Fir_reg_gc_profiling2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gc_profiling1_);
  // checkMissing(gc_profiling2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_gc_profiling2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // line_profiling1 = ld `line.profiling`
  Rsh_Fir_reg_line_profiling1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

D9_:;
  // deopt 30 [line_profiling1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_line_profiling1_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // line_profiling2 = force? line_profiling1
  Rsh_Fir_reg_line_profiling2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line_profiling1_);
  // checkMissing(line_profiling2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_line_profiling2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // filter_callframes1 = ld `filter.callframes`
  Rsh_Fir_reg_filter_callframes1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L34() else D10()
  // L34()
  goto L34_;

D10_:;
  // deopt 32 [filter_callframes1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_filter_callframes1_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L34_:;
  // filter_callframes2 = force? filter_callframes1
  Rsh_Fir_reg_filter_callframes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filter_callframes1_);
  // checkMissing(filter_callframes2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_filter_callframes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // numfiles1 = ld numfiles
  Rsh_Fir_reg_numfiles1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L35() else D11()
  // L35()
  goto L35_;

D11_:;
  // deopt 34 [numfiles1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_numfiles1_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L35_:;
  // numfiles2 = force? numfiles1
  Rsh_Fir_reg_numfiles2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_numfiles1_);
  // checkMissing(numfiles2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_numfiles2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // bufsize1 = ld bufsize
  Rsh_Fir_reg_bufsize1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L36() else D12()
  // L36()
  goto L36_;

D12_:;
  // deopt 36 [bufsize1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_bufsize1_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L36_:;
  // bufsize2 = force? bufsize1
  Rsh_Fir_reg_bufsize2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bufsize1_);
  // checkMissing(bufsize2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_bufsize2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // event3 = ld event
  Rsh_Fir_reg_event3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L37() else D13()
  // L37()
  goto L37_;

D13_:;
  // deopt 38 [event3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_event3_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L37_:;
  // event4 = force? event3
  Rsh_Fir_reg_event4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_event3_);
  // checkMissing(event4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_event4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // _External = ldf `.External` in base
  Rsh_Fir_reg__External = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r13 = dyn _External(C_Rprof1, filename4, append2, interval2, memory_profiling2, gc_profiling2, line_profiling2, filter_callframes2, numfiles2, bufsize2, event4)
  SEXP Rsh_Fir_array_args36[11];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_C_Rprof1_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_filename4_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_append2_;
  Rsh_Fir_array_args36[3] = Rsh_Fir_reg_interval2_;
  Rsh_Fir_array_args36[4] = Rsh_Fir_reg_memory_profiling2_;
  Rsh_Fir_array_args36[5] = Rsh_Fir_reg_gc_profiling2_;
  Rsh_Fir_array_args36[6] = Rsh_Fir_reg_line_profiling2_;
  Rsh_Fir_array_args36[7] = Rsh_Fir_reg_filter_callframes2_;
  Rsh_Fir_array_args36[8] = Rsh_Fir_reg_numfiles2_;
  Rsh_Fir_array_args36[9] = Rsh_Fir_reg_bufsize2_;
  Rsh_Fir_array_args36[10] = Rsh_Fir_reg_event4_;
  SEXP Rsh_Fir_array_arg_names7[11];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_array_arg_names7[4] = R_MissingArg;
  Rsh_Fir_array_arg_names7[5] = R_MissingArg;
  Rsh_Fir_array_arg_names7[6] = R_MissingArg;
  Rsh_Fir_array_arg_names7[7] = R_MissingArg;
  Rsh_Fir_array_arg_names7[8] = R_MissingArg;
  Rsh_Fir_array_arg_names7[9] = R_MissingArg;
  Rsh_Fir_array_arg_names7[10] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External, 11, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D14()
  // L38()
  goto L38_;

D14_:;
  // deopt 41 [r13]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L15(r13)
  // L15(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L15_;

D15_:;
  // deopt 43 [r14]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L14(r14)
  // L14(r14)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r14_;
  goto L14_;
}
SEXP Rsh_Fir_user_promise_inner1000890133_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
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
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r2 = dyn c("default", "cpu", "elapsed")
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("default", "cpu", "elapsed")
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1000890133_1(SEXP CCP, SEXP RHO) {
  // event1 = ld event
  Rsh_Fir_reg_event1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // event2 = force? event1
  Rsh_Fir_reg_event2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_event1_);
  // checkMissing(event2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_event2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return event2
  return Rsh_Fir_reg_event2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
