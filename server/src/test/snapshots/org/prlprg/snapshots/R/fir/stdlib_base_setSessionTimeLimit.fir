fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3054534720;
    st setSessionTimeLimit = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3054534720(cpu, elapsed) {
  (reg cpu:*, reg elapsed:*) -+> V { var cpu:*, reg cpu_isMissing:L, reg cpu_orDefault:*, var elapsed:*, reg elapsed_isMissing:L, reg elapsed_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg cpu1:*, reg cpu2:V, reg elapsed1:*, reg elapsed2:V, reg setSessionTimeLimit:cls, reg r2:V |
    mkenv;
    cpu_isMissing = missing.0(cpu);
    if cpu_isMissing then L0(+Infinity) else L0(cpu);
  L0(cpu_orDefault):
    st cpu = cpu_orDefault;
    elapsed_isMissing = missing.0(elapsed);
    if elapsed_isMissing then L1(+Infinity) else L1(elapsed);
  L1(elapsed_orDefault):
    st elapsed = elapsed_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    cpu1 = ld cpu;
    check L5() else D0();
  L4():
    r = dyn base(<lang setSessionTimeLimit(cpu, elapsed)>);
    goto L2(r);
  D0():
    deopt 2 [cpu1];
  L5():
    cpu2 = force? cpu1;
    checkMissing(cpu2);
    elapsed1 = ld elapsed;
    check L6() else D1();
  D1():
    deopt 4 [elapsed1];
  L6():
    elapsed2 = force? elapsed1;
    checkMissing(elapsed2);
    setSessionTimeLimit = ldf setSessionTimeLimit in base;
    r2 = dyn setSessionTimeLimit(cpu2, elapsed2);
    check L7() else D2();
  D2():
    deopt 7 [r2];
  L7():
    goto L2(r2);
  }
}