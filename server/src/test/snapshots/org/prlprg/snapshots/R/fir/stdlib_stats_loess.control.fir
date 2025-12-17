fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1340318242;
    st `loess.control` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1340318242(surface, statistics, `trace.hat`, cell, iterations, iterTrace, `...`) {
  (reg surface:*, reg statistics:*, reg trace_hat:*, reg cell:*, reg iterations:*, reg iterTrace:*, reg ddd:dots) -+> V { var surface:*, reg surface_isMissing:L, reg surface_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var statistics:*, reg statistics_isMissing:L, reg statistics_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p1:p(V +), var `trace.hat`:*, reg trace_hat_isMissing:L, reg trace_hat_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c2:cls, reg r10:V, reg p2:p(V +), var cell:*, reg cell_isMissing:L, reg cell_orDefault:*, var iterations:*, reg iterations_isMissing:L, reg iterations_orDefault:*, var iterTrace:*, reg iterTrace_isMissing:L, reg iterTrace_orDefault:*, var `...`:dots?, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg iterations1:*, reg iterations2:V, reg length:cls, reg r14:V, reg r15:V, reg p3:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg iterations3:*, reg iterations4:V, reg is_na:cls, reg r19:V, reg r20:V, reg p4:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg iterations5:*, reg iterations6:V, reg as_integer:cls, reg r24:V, reg r25:V, reg p5:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg iterTrace1:*, reg iterTrace2:V, reg length1:cls, reg r29:V, reg r30:V, reg p6:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg iterTrace3:*, reg iterTrace4:V, reg is_na1:cls, reg r34:V, reg r35:V, reg p7:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg iterTrace5:*, reg iterTrace6:V, reg as_integer1:cls, reg r39:V, reg r40:V, reg p8:p(V +), reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg match_arg:cls, reg surface1:*, reg surface2:V, reg p9:p(V +), reg r46:V, reg match_arg1:cls, reg statistics1:*, reg statistics2:V, reg p10:p(V +), reg r48:V, reg match_arg2:cls, reg trace_hat1:*, reg trace_hat2:V, reg p11:p(V +), reg r50:V, reg cell1:*, reg cell2:V, reg iterations7:*, reg iterations8:V, reg iterTrace7:*, reg iterTrace8:V, reg list:cls, reg r51:V |
    mkenv;
    surface_isMissing = missing.0(surface);
    if surface_isMissing then L0() else L1(surface);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("interpolate", "direct");
      goto L0(r2);
    L2():
      r = dyn base("interpolate", "direct");
      goto L0(r);
    };
    goto L1(p);
  L1(surface_orDefault):
    st surface = surface_orDefault;
    statistics_isMissing = missing.0(statistics);
    if statistics_isMissing then L2() else L3(statistics);
  L2():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c1 = ldf c in base;
      r6 = dyn c1("approximate", "exact", "none");
      goto L0(r6);
    L2():
      r4 = dyn base1("approximate", "exact", "none");
      goto L0(r4);
    };
    goto L3(p1);
  L3(statistics_orDefault):
    st statistics = statistics_orDefault;
    trace_hat_isMissing = missing.0(trace_hat);
    if trace_hat_isMissing then L4() else L5(trace_hat);
  L4():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      c2 = ldf c in base;
      r10 = dyn c2("exact", "approximate");
      goto L0(r10);
    L2():
      r8 = dyn base2("exact", "approximate");
      goto L0(r8);
    };
    goto L5(p2);
  L5(trace_hat_orDefault):
    st `trace.hat` = trace_hat_orDefault;
    cell_isMissing = missing.0(cell);
    if cell_isMissing then L6(0.2) else L6(cell);
  L6(cell_orDefault):
    st cell = cell_orDefault;
    iterations_isMissing = missing.0(iterations);
    if iterations_isMissing then L7(4) else L7(iterations);
  L7(iterations_orDefault):
    st iterations = iterations_orDefault;
    iterTrace_isMissing = missing.0(iterTrace);
    if iterTrace_isMissing then L8(FALSE) else L8(iterTrace);
  L8(iterTrace_orDefault):
    st iterTrace = iterTrace_orDefault;
    st `...` = ddd;
    stopifnot = ldf stopifnot;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p3 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r13):
      r15 = `==`(r13, 1);
      return r15;
    L1():
      iterations1 = ld iterations;
      iterations2 = force? iterations1;
      checkMissing(iterations2);
      length = ldf length in base;
      r14 = dyn length(iterations2);
      goto L0(r14);
    L2():
      r12 = dyn base3(<sym iterations>);
      goto L0(r12);
    };
    p4 = prom<V +>{
      sym4 = ldf `is.na`;
      base4 = ldf `is.na` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r18):
      r20 = `!`(r18);
      return r20;
    L1():
      iterations3 = ld iterations;
      iterations4 = force? iterations3;
      checkMissing(iterations4);
      is_na = ldf `is.na` in base;
      r19 = dyn is_na(iterations4);
      goto L0(r19);
    L2():
      r17 = dyn base4(<sym iterations>);
      goto L0(r17);
    };
    p5 = prom<V +>{
      sym5 = ldf `as.integer`;
      base5 = ldf `as.integer` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r23):
      r25 = `>`(r23, 0);
      return r25;
    L1():
      iterations5 = ld iterations;
      iterations6 = force? iterations5;
      checkMissing(iterations6);
      as_integer = ldf `as.integer` in base;
      r24 = dyn as_integer(iterations6);
      goto L0(r24);
    L2():
      r22 = dyn base5(<sym iterations>);
      goto L0(r22);
    };
    p6 = prom<V +>{
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r28):
      r30 = `==`(r28, 1);
      return r30;
    L1():
      iterTrace1 = ld iterTrace;
      iterTrace2 = force? iterTrace1;
      checkMissing(iterTrace2);
      length1 = ldf length in base;
      r29 = dyn length1(iterTrace2);
      goto L0(r29);
    L2():
      r27 = dyn base6(<sym iterTrace>);
      goto L0(r27);
    };
    p7 = prom<V +>{
      sym7 = ldf `is.na`;
      base7 = ldf `is.na` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r33):
      r35 = `!`(r33);
      return r35;
    L1():
      iterTrace3 = ld iterTrace;
      iterTrace4 = force? iterTrace3;
      checkMissing(iterTrace4);
      is_na1 = ldf `is.na` in base;
      r34 = dyn is_na1(iterTrace4);
      goto L0(r34);
    L2():
      r32 = dyn base7(<sym iterTrace>);
      goto L0(r32);
    };
    p8 = prom<V +>{
      sym8 = ldf `as.integer`;
      base8 = ldf `as.integer` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r38):
      r40 = `>=`(r38, 0);
      return r40;
    L1():
      iterTrace5 = ld iterTrace;
      iterTrace6 = force? iterTrace5;
      checkMissing(iterTrace6);
      as_integer1 = ldf `as.integer` in base;
      r39 = dyn as_integer1(iterTrace6);
      goto L0(r39);
    L2():
      r37 = dyn base8(<sym iterTrace>);
      goto L0(r37);
    };
    r42 = dyn stopifnot(p3, p4, p5, p6, p7, p8);
    check L11() else D1();
  D1():
    deopt 8 [r42];
  L11():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L12() else L13();
  L9(r44):
    popenv;
    return r44;
  L12():
    match_arg = ldf `match.arg`;
    check L14() else D2();
  L13():
    r43 = dyn base9[surface, statistics, `trace.hat`, cell, iterations, iterTrace](<lang match.arg(surface)>, <lang match.arg(statistics)>, <lang match.arg(trace.hat)>, <sym cell>, <sym iterations>, <sym iterTrace>);
    goto L9(r43);
  D2():
    deopt 12 [];
  L14():
    p9 = prom<V +>{
      surface1 = ld surface;
      surface2 = force? surface1;
      checkMissing(surface2);
      return surface2;
    };
    r46 = dyn match_arg(p9);
    check L15() else D3();
  D3():
    deopt 14 [r46];
  L15():
    match_arg1 = ldf `match.arg`;
    check L16() else D4();
  D4():
    deopt 17 [];
  L16():
    p10 = prom<V +>{
      statistics1 = ld statistics;
      statistics2 = force? statistics1;
      checkMissing(statistics2);
      return statistics2;
    };
    r48 = dyn match_arg1(p10);
    check L17() else D5();
  D5():
    deopt 19 [r48];
  L17():
    match_arg2 = ldf `match.arg`;
    check L18() else D6();
  D6():
    deopt 22 [];
  L18():
    p11 = prom<V +>{
      trace_hat1 = ld `trace.hat`;
      trace_hat2 = force? trace_hat1;
      checkMissing(trace_hat2);
      return trace_hat2;
    };
    r50 = dyn match_arg2(p11);
    check L19() else D7();
  D7():
    deopt 24 [r50];
  L19():
    cell1 = ld cell;
    check L20() else D8();
  D8():
    deopt 26 [cell1];
  L20():
    cell2 = force? cell1;
    checkMissing(cell2);
    iterations7 = ld iterations;
    check L21() else D9();
  D9():
    deopt 29 [iterations7];
  L21():
    iterations8 = force? iterations7;
    checkMissing(iterations8);
    iterTrace7 = ld iterTrace;
    check L22() else D10();
  D10():
    deopt 32 [iterTrace7];
  L22():
    iterTrace8 = force? iterTrace7;
    checkMissing(iterTrace8);
    list = ldf list in base;
    r51 = dyn list(r46, r48, r50, cell2, iterations8, iterTrace8);
    check L23() else D11();
  D11():
    deopt 36 [r51];
  L23():
    goto L9(r51);
  }
}