fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1538521688;
    st setTimeLimit = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1538521688(cpu, elapsed, transient) {
  (reg cpu:*, reg elapsed:*, reg transient:*) -+> V { var cpu:*, reg cpu_isMissing:L, reg cpu_orDefault:*, var elapsed:*, reg elapsed_isMissing:L, reg elapsed_orDefault:*, var transient:*, reg transient_isMissing:L, reg transient_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg cpu1:*, reg cpu2:V, reg elapsed1:*, reg elapsed2:V, reg transient1:*, reg transient2:V, reg setTimeLimit:cls, reg r2:V |
    mkenv;
    cpu_isMissing = missing.0(cpu);
    if cpu_isMissing then L0(+Infinity) else L0(cpu);
  L0(cpu_orDefault):
    st cpu = cpu_orDefault;
    elapsed_isMissing = missing.0(elapsed);
    if elapsed_isMissing then L1(+Infinity) else L1(elapsed);
  L1(elapsed_orDefault):
    st elapsed = elapsed_orDefault;
    transient_isMissing = missing.0(transient);
    if transient_isMissing then L2(FALSE) else L2(transient);
  L2(transient_orDefault):
    st transient = transient_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    cpu1 = ld cpu;
    check L6() else D0();
  L5():
    r = dyn base(<lang setTimeLimit(cpu, elapsed, transient)>);
    goto L3(r);
  D0():
    deopt 2 [cpu1];
  L6():
    cpu2 = force? cpu1;
    checkMissing(cpu2);
    elapsed1 = ld elapsed;
    check L7() else D1();
  D1():
    deopt 4 [elapsed1];
  L7():
    elapsed2 = force? elapsed1;
    checkMissing(elapsed2);
    transient1 = ld transient;
    check L8() else D2();
  D2():
    deopt 6 [transient1];
  L8():
    transient2 = force? transient1;
    checkMissing(transient2);
    setTimeLimit = ldf setTimeLimit in base;
    r2 = dyn setTimeLimit(cpu2, elapsed2, transient2);
    check L9() else D3();
  D3():
    deopt 9 [r2];
  L9():
    goto L3(r2);
  }
}