fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4026185214;
    st browserSetDebug = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4026185214(n) {
  (reg n:*) -+> V { var n:*, reg n_isMissing:L, reg n_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg browserSetDebug:cls, reg r2:V |
    mkenv;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(1) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    n1 = ld n;
    check L4() else D0();
  L3():
    r = dyn base(<lang browserSetDebug(n)>);
    goto L1(r);
  D0():
    deopt 2 [n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    browserSetDebug = ldf browserSetDebug in base;
    r2 = dyn browserSetDebug(n2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}