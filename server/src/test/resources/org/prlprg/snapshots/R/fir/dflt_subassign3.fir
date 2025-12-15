fun main() {
  () -+> V { reg data_frame:cls, reg r:V, reg l:*, reg c:L, reg r2:R, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r5:V, reg x:*, reg x1:V |
    mkenv;
    data_frame = ldf `data.frame`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn data_frame[a, b, `row.names`](1.0, 2.0, NULL);
    check L2() else D1();
  D1():
    deopt 8 [r];
  L2():
    st x = r;
    l = ld x;
    c = `is.object`(l);
    if c then L3() else L4(42.0);
  L0(dx1):
    st x = dx1;
    x = ld x;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.0("[<-", l, 42.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(42.0);
  L4(r2):
    ___ = ldf `[<-` in base;
    r5 = dyn ___(l, <missing>, 42.0);
    goto L0(r5);
  D2():
    deopt 17 [x];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  }
}