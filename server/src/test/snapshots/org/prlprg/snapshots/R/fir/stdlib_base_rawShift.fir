fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner594079394;
    st rawShift = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner594079394(x, n) {
  (reg x:*, reg n:*) -+> V { var x:*, var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg n1:*, reg n2:V, reg rawShift:cls, reg r2:V |
    mkenv;
    st x = x;
    st n = n;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang rawShift(x, n)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    n1 = ld n;
    check L4() else D1();
  D1():
    deopt 4 [n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    rawShift = ldf rawShift in base;
    r2 = dyn rawShift(x2, n2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}