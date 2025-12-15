fun main() {
  () -+> V { reg data_frame:cls, reg p:p(V +), reg p1:p(V +), reg r2:V, reg x:*, reg x1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg __:cls, reg r3:V, reg x4:*, reg x5:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r4:V |
    mkenv;
    data_frame = ldf `data.frame`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      return <int 1, 2, 3>;
    };
    p1 = prom<V +>{
      return <int 4, 5, 6>;
    };
    r2 = dyn data_frame[a, b](p, p1);
    check L3() else D1();
  D1():
    deopt 6 [r2];
  L3():
    st x = r2;
    x = ld x;
    check L4() else D2();
  D2():
    deopt 8 [x];
  L4():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L5() else L6();
  L0():
    x4 = ld x;
    check L8() else D3();
  L5():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6();
  L6():
    __ = ldf `[` in base;
    r3 = dyn __(x1, 1.0, <missing>);
    goto L0();
  D3():
    deopt 15 [x4];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0();
  L8():
    x5 = force? x4;
    checkMissing(x5);
    c1 = `is.object`(x5);
    if c1 then L9() else L10();
  L1(dx3):
    popenv;
    return dx3;
  L9():
    dr2 = tryDispatchBuiltin.1("[[", x5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L11() else L10();
  L10():
    __1 = ldf `[[` in base;
    r4 = dyn __1(x5, 1.0, <missing>);
    goto L1(r4);
  L11():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  }
}