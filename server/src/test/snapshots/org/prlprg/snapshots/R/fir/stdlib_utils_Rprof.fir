fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1000890133;
    st Rprof = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1000890133(filename, append, interval, `memory.profiling`, `gc.profiling`, `line.profiling`, `filter.callframes`, numfiles, bufsize, event) {
  (reg filename:*, reg append:*, reg interval:*, reg memory_profiling:*, reg gc_profiling:*, reg line_profiling:*, reg filter_callframes:*, reg numfiles:*, reg bufsize:*, reg event:*) -+> V { var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var interval:*, reg interval_isMissing:L, reg interval_orDefault:*, var `memory.profiling`:*, reg memory_profiling_isMissing:L, reg memory_profiling_orDefault:*, var `gc.profiling`:*, reg gc_profiling_isMissing:L, reg gc_profiling_orDefault:*, var `line.profiling`:*, reg line_profiling_isMissing:L, reg line_profiling_orDefault:*, var `filter.callframes`:*, reg filter_callframes_isMissing:L, reg filter_callframes_orDefault:*, var numfiles:*, reg numfiles_isMissing:L, reg numfiles_orDefault:*, var bufsize:*, reg bufsize_isMissing:L, reg bufsize_orDefault:*, var event:*, reg event_isMissing:L, reg event_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg event1:*, reg event2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg filename1:*, reg filename2:V, reg c1:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg C_Rprof:*, reg C_Rprof1:V, reg filename3:*, reg filename4:V, reg append1:*, reg append2:V, reg interval1:*, reg interval2:V, reg memory_profiling1:*, reg memory_profiling2:V, reg gc_profiling1:*, reg gc_profiling2:V, reg line_profiling1:*, reg line_profiling2:V, reg filter_callframes1:*, reg filter_callframes2:V, reg numfiles1:*, reg numfiles2:V, reg bufsize1:*, reg bufsize2:V, reg event3:*, reg event4:V, reg _External:cls, reg r13:V, reg invisible:cls, reg r14:V |
    mkenv;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L0("Rprof.out") else L0(filename);
  L0(filename_orDefault):
    st filename = filename_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L1(FALSE) else L1(append);
  L1(append_orDefault):
    st append = append_orDefault;
    interval_isMissing = missing.0(interval);
    if interval_isMissing then L2(0.02) else L2(interval);
  L2(interval_orDefault):
    st interval = interval_orDefault;
    memory_profiling_isMissing = missing.0(memory_profiling);
    if memory_profiling_isMissing then L3(FALSE) else L3(memory_profiling);
  L3(memory_profiling_orDefault):
    st `memory.profiling` = memory_profiling_orDefault;
    gc_profiling_isMissing = missing.0(gc_profiling);
    if gc_profiling_isMissing then L4(FALSE) else L4(gc_profiling);
  L4(gc_profiling_orDefault):
    st `gc.profiling` = gc_profiling_orDefault;
    line_profiling_isMissing = missing.0(line_profiling);
    if line_profiling_isMissing then L5(FALSE) else L5(line_profiling);
  L5(line_profiling_orDefault):
    st `line.profiling` = line_profiling_orDefault;
    filter_callframes_isMissing = missing.0(filter_callframes);
    if filter_callframes_isMissing then L6(FALSE) else L6(filter_callframes);
  L6(filter_callframes_orDefault):
    st `filter.callframes` = filter_callframes_orDefault;
    numfiles_isMissing = missing.0(numfiles);
    if numfiles_isMissing then L7(100) else L7(numfiles);
  L7(numfiles_orDefault):
    st numfiles = numfiles_orDefault;
    bufsize_isMissing = missing.0(bufsize);
    if bufsize_isMissing then L8(10000) else L8(bufsize);
  L8(bufsize_orDefault):
    st bufsize = bufsize_orDefault;
    event_isMissing = missing.0(event);
    if event_isMissing then L9() else L10(event);
  L9():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("default", "cpu", "elapsed");
      goto L0(r2);
    L2():
      r = dyn base("default", "cpu", "elapsed");
      goto L0(r);
    };
    goto L10(p);
  L10(event_orDefault):
    st event = event_orDefault;
    match_arg = ldf `match.arg`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p1 = prom<V +>{
      event1 = ld event;
      event2 = force? event1;
      checkMissing(event2);
      return event2;
    };
    r5 = dyn match_arg(p1);
    check L17() else D1();
  D1():
    deopt 3 [r5];
  L17():
    st event = r5;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L11(r7):
    c2 = `as.logical`(r7);
    if c2 then L21() else L12();
  L18():
    filename1 = ld filename;
    check L20() else D2();
  L19():
    r6 = dyn base1(<sym filename>);
    goto L11(r6);
  D2():
    deopt 6 [filename1];
  L12():
    goto L13();
  L13():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L20():
    filename2 = force? filename1;
    checkMissing(filename2);
    c1 = `==`(filename2, NULL);
    goto L11(c1);
  L21():
    st filename = "";
    goto L13();
  L14(r10):
    popenv;
    return r10;
  L23():
    sym3 = ldf `.External`;
    base3 = ldf `.External` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L24():
    r9 = dyn base2(<lang .External(C_Rprof, filename, append, interval, memory.profiling, gc.profiling, line.profiling, filter.callframes, numfiles, bufsize, event)>);
    goto L14(r9);
  L15(r12):
    invisible = ldf invisible in base;
    r14 = dyn invisible(r12);
    check L39() else D15();
  L25():
    C_Rprof = ld C_Rprof;
    check L27() else D3();
  L26():
    r11 = dyn base3(<sym C_Rprof>, <sym filename>, <sym append>, <sym interval>, <sym memory.profiling>, <sym gc.profiling>, <sym line.profiling>, <sym filter.callframes>, <sym numfiles>, <sym bufsize>, <sym event>);
    goto L15(r11);
  D3():
    deopt 18 [C_Rprof];
  D15():
    deopt 43 [r14];
  L27():
    C_Rprof1 = force? C_Rprof;
    checkMissing(C_Rprof1);
    filename3 = ld filename;
    check L28() else D4();
  L39():
    goto L14(r14);
  D4():
    deopt 20 [filename3];
  L28():
    filename4 = force? filename3;
    checkMissing(filename4);
    append1 = ld append;
    check L29() else D5();
  D5():
    deopt 22 [append1];
  L29():
    append2 = force? append1;
    checkMissing(append2);
    interval1 = ld interval;
    check L30() else D6();
  D6():
    deopt 24 [interval1];
  L30():
    interval2 = force? interval1;
    checkMissing(interval2);
    memory_profiling1 = ld `memory.profiling`;
    check L31() else D7();
  D7():
    deopt 26 [memory_profiling1];
  L31():
    memory_profiling2 = force? memory_profiling1;
    checkMissing(memory_profiling2);
    gc_profiling1 = ld `gc.profiling`;
    check L32() else D8();
  D8():
    deopt 28 [gc_profiling1];
  L32():
    gc_profiling2 = force? gc_profiling1;
    checkMissing(gc_profiling2);
    line_profiling1 = ld `line.profiling`;
    check L33() else D9();
  D9():
    deopt 30 [line_profiling1];
  L33():
    line_profiling2 = force? line_profiling1;
    checkMissing(line_profiling2);
    filter_callframes1 = ld `filter.callframes`;
    check L34() else D10();
  D10():
    deopt 32 [filter_callframes1];
  L34():
    filter_callframes2 = force? filter_callframes1;
    checkMissing(filter_callframes2);
    numfiles1 = ld numfiles;
    check L35() else D11();
  D11():
    deopt 34 [numfiles1];
  L35():
    numfiles2 = force? numfiles1;
    checkMissing(numfiles2);
    bufsize1 = ld bufsize;
    check L36() else D12();
  D12():
    deopt 36 [bufsize1];
  L36():
    bufsize2 = force? bufsize1;
    checkMissing(bufsize2);
    event3 = ld event;
    check L37() else D13();
  D13():
    deopt 38 [event3];
  L37():
    event4 = force? event3;
    checkMissing(event4);
    _External = ldf `.External` in base;
    r13 = dyn _External(C_Rprof1, filename4, append2, interval2, memory_profiling2, gc_profiling2, line_profiling2, filter_callframes2, numfiles2, bufsize2, event4);
    check L38() else D14();
  D14():
    deopt 41 [r13];
  L38():
    goto L15(r13);
  }
}