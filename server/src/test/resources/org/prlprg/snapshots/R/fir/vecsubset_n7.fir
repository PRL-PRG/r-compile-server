fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st x = r1;
    x = ld x;
    check L5() else D1();
  L2():
    list = ldf list in base;
    r2 = dyn list(1.0, 2.0);
    check L4() else D0();
  L3():
    r = dyn base[a, b](1.0, 2.0);
    goto L0(r);
  D0():
    deopt 7 [r2];
  D1():
    deopt 9 [x];
  L4():
    goto L0(r2);
  L5():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L6() else L7(x1);
  L1(dx1):
    popenv;
    return dx1;
  L6():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(x3):
    __ = ldf `[` in base;
    r3 = dyn __(x3, "a");
    goto L1(r3);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}