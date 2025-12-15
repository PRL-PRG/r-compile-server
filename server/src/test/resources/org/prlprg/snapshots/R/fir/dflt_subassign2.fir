fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg l:*, reg c1:L, reg r4:R, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r7:V, reg y:*, reg y1:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st y = r1;
    l = ld y;
    c1 = `is.object`(l);
    if c1 then L5() else L6(42.0);
  L2():
    c = ldf c in base;
    r2 = dyn c(1.0, 2.0, 3.0);
    check L4() else D0();
  L3():
    r = dyn base(1.0, 2.0, 3.0);
    goto L0(r);
  D0():
    deopt 6 [r2];
  L1(dx1):
    st y = dx1;
    y = ld y;
    check L8() else D1();
  L4():
    goto L0(r2);
  L5():
    dr = tryDispatchBuiltin.0("[[<-", l, 42.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(42.0);
  L6(r4):
    ____ = ldf `[[<-` in base;
    r7 = dyn ____(l, 1.0, 42.0);
    goto L1(r7);
  D1():
    deopt 16 [y];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}