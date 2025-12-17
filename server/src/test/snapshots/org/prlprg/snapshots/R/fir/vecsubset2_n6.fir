fun main() {
  () -+> V { reg data_frame:cls, reg r:V, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V |
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
    x = ld x;
    check L3() else D2();
  D2():
    deopt 10 [x];
  L3():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L4() else L5(x1);
  L0(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(x3):
    __ = ldf `[[` in base;
    r1 = dyn __(x3, "a");
    goto L0(r1);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}