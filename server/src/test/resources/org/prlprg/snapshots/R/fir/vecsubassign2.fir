fun main() {
  () -+> V { reg data_frame:cls, reg r:V, reg l:*, reg c:L, reg r2:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r5:V, reg x:*, reg x1:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg list:cls, reg r8:V, reg x2:*, reg x3:V, reg l3:*, reg c1:L, reg x5:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r9:V, reg x8:*, reg x9:V |
    mkenv;
    data_frame = ldf `data.frame`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn data_frame[a, b, `row.names`](1.0, 2.0, NULL);
    check L4() else D1();
  D1():
    deopt 8 [r];
  L4():
    st x = r;
    l = ld x;
    c = `is.object`(l);
    if c then L5() else L6(42.0, l);
  L0(dx1):
    st x = dx1;
    x = ld x;
    check L8() else D2();
  L5():
    dr = tryDispatchBuiltin.0("[<-", l, 42.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(42.0, dr);
  L6(r2, l2):
    ___ = ldf `[<-` in base;
    r5 = dyn ___(l2, 42.0, "a");
    goto L0(r5);
  D2():
    deopt 17 [x];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    x1 = force? x;
    checkMissing(x1);
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r7):
    st x = r7;
    x2 = ld x;
    check L12() else D4();
  L9():
    list = ldf list in base;
    r8 = dyn list(1.0, 2.0, 3.0);
    check L11() else D3();
  L10():
    r6 = dyn base(1.0, 2.0, 3.0);
    goto L1(r6);
  D3():
    deopt 25 [r8];
  D4():
    deopt 27 [x2];
  L11():
    goto L1(r8);
  L12():
    x3 = force? x2;
    checkMissing(x3);
    l3 = ld x;
    c1 = `is.object`(l3);
    if c1 then L13() else L14(x3, l3);
  L2(dx3):
    st x = dx3;
    x8 = ld x;
    check L16() else D5();
  L13():
    dr2 = tryDispatchBuiltin.0("[[<-", l3, x3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(x3, dr2);
  L14(x5, l5):
    ____ = ldf `[[<-` in base;
    r9 = dyn ____(l5, x3, 1.0);
    goto L2(r9);
  D5():
    deopt 34 [x8];
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L16():
    x9 = force? x8;
    checkMissing(x9);
    popenv;
    return x9;
  }
}