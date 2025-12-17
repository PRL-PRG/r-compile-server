fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg a:*, reg a1:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st a = r1;
    a = ld a;
    check L5() else D1();
  L2():
    c = ldf c in base;
    r2 = dyn c(1.0, 2.0, 3.0);
    check L4() else D0();
  L3():
    r = dyn base(1.0, 2.0, 3.0);
    goto L0(r);
  D0():
    deopt 6 [r2];
  D1():
    deopt 8 [a];
  L4():
    goto L0(r2);
  L5():
    a1 = force? a;
    checkMissing(a1);
    c1 = `is.object`(a1);
    if c1 then L6() else L7();
  L1(dx1):
    popenv;
    return dx1;
  L6():
    dr = tryDispatchBuiltin.1("[[", a1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7();
  L7():
    __ = ldf `[[` in base;
    r3 = dyn __(a1, 1.0);
    goto L1(r3);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}