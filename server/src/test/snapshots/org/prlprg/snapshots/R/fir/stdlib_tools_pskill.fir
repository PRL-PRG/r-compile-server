fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1187088163;
    st pskill = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1187088163(pid, signal) {
  (reg pid:*, reg signal:*) -+> V { var pid:*, var signal:*, reg signal_isMissing:L, reg signal_orDefault:*, reg SIGTERM:*, reg SIGTERM1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_ps_kill:*, reg C_ps_kill1:V, reg pid1:*, reg pid2:V, reg signal1:*, reg signal2:V, reg vargs:dots, reg r5:V, reg invisible:cls, reg r6:V |
    mkenv;
    st pid = pid;
    signal_isMissing = missing.0(signal);
    if signal_isMissing then L0() else L1(signal);
  L0():
    p = prom<V +>{
      SIGTERM = ld SIGTERM;
      SIGTERM1 = force? SIGTERM;
      checkMissing(SIGTERM1);
      return SIGTERM1;
    };
    goto L1(p);
  L1(signal_orDefault):
    st signal = signal_orDefault;
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2(r2):
    popenv;
    return r2;
  L4():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r1 = dyn base(<lang .Call(C_ps_kill, pid, signal)>);
    goto L2(r1);
  L3(r4):
    invisible = ldf invisible in base;
    r6 = dyn invisible(r4);
    check L11() else D3();
  L6():
    C_ps_kill = ld C_ps_kill;
    check L8() else D0();
  L7():
    r3 = dyn base1(<sym C_ps_kill>, <sym pid>, <sym signal>);
    goto L3(r3);
  D0():
    deopt 3 [C_ps_kill];
  D3():
    deopt 9 [r6];
  L8():
    C_ps_kill1 = force? C_ps_kill;
    checkMissing(C_ps_kill1);
    pid1 = ld pid;
    check L9() else D1();
  L11():
    goto L2(r6);
  D1():
    deopt 4 [C_ps_kill1, pid1];
  L9():
    pid2 = force? pid1;
    checkMissing(pid2);
    signal1 = ld signal;
    check L10() else D2();
  D2():
    deopt 5 [C_ps_kill1, pid2, signal1];
  L10():
    signal2 = force? signal1;
    checkMissing(signal2);
    vargs = dots[pid2, signal2];
    r5 = `.Call`(C_ps_kill1, vargs, <missing>);
    goto L3(r5);
  }
}