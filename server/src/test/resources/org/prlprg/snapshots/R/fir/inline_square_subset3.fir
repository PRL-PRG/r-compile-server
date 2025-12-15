fun main() {
  () -+> V { reg data_frame:cls, reg p:p(V +), reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg x:*, reg x1:V, reg c1:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg y:*, reg y1:V, reg r6:V, reg __:cls, reg r7:V, reg x4:*, reg x5:V, reg c2:L, reg x7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg y2:*, reg y3:V, reg r8:V, reg __1:cls, reg r9:V |
    mkenv;
    data_frame = ldf `data.frame`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    p1 = prom<V +>{
      return <int 6, 7, 8, 9, 10>;
    };
    r2 = dyn data_frame[a, b](p, p1);
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    st x = r2;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r4):
    st y = r4;
    x = ld x;
    check L8() else D3();
  L5():
    c = ldf c in base;
    r5 = dyn c(0.0, 1.0, 0.0, 1.0, 0.0);
    check L7() else D2();
  L6():
    r3 = dyn base(0.0, 1.0, 0.0, 1.0, 0.0);
    goto L0(r3);
  D2():
    deopt 16 [r5];
  D3():
    deopt 18 [x];
  L7():
    goto L0(r5);
  L8():
    x1 = force? x;
    checkMissing(x1);
    c1 = `is.object`(x1);
    if c1 then L9() else L10(x1);
  L1():
    x4 = ld x;
    check L13() else D5();
  L9():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(x3):
    y = ld y;
    check L12() else D4();
  D4():
    deopt 20 [x3, y];
  D5():
    deopt 27 [x4];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1();
  L12():
    y1 = force? y;
    checkMissing(y1);
    r6 = `==`(y1, 1.0);
    __ = ldf `[` in base;
    r7 = dyn __(x1, r6, <missing>);
    goto L1();
  L13():
    x5 = force? x4;
    checkMissing(x5);
    c2 = `is.object`(x5);
    if c2 then L14() else L15(x5);
  L2(dx3):
    popenv;
    return dx3;
  L14():
    dr2 = tryDispatchBuiltin.1("[[", x5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(dr2);
  L15(x7):
    y2 = ld y;
    check L17() else D6();
  D6():
    deopt 29 [x7, y2];
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L17():
    y3 = force? y2;
    checkMissing(y3);
    r8 = `==`(y3, 1.0);
    __1 = ldf `[[` in base;
    r9 = dyn __1(x5, r8, <missing>);
    goto L2(r9);
  }
}