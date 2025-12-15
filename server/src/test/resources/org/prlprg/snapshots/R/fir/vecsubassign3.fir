fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg x:*, reg x1:V, reg l:*, reg c:L, reg x3:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r3:V, reg x6:*, reg x7:V |
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
    r2 = dyn list(1.0, 2.0, 3.0);
    check L4() else D0();
  L3():
    r = dyn base(1.0, 2.0, 3.0);
    goto L0(r);
  D0():
    deopt 6 [r2];
  D1():
    deopt 8 [x];
  L4():
    goto L0(r2);
  L5():
    x1 = force? x;
    checkMissing(x1);
    l = ld x;
    c = `is.object`(l);
    if c then L6() else L7(x1, l);
  L1(dx1):
    st x = dx1;
    x6 = ld x;
    check L9() else D2();
  L6():
    dr = tryDispatchBuiltin.0("[[<-", l, x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(x1, dr);
  L7(x3, l2):
    ____ = ldf `[[<-` in base;
    r3 = dyn ____(l2, x1, 1.0);
    goto L1(r3);
  D2():
    deopt 15 [x6];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L9():
    x7 = force? x6;
    checkMissing(x7);
    popenv;
    return x7;
  }
}