fun main() {
  () -+> V { reg data_frame:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg x:*, reg x1:V, reg c2:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V |
    mkenv;
    data_frame = ldf `data.frame`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(1.0, 2.0);
      goto L0(r2);
    L2():
      r = dyn base(1.0, 2.0);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c1 = ldf c in base;
      r6 = dyn c1(3.0, 4.0);
      goto L0(r6);
    L2():
      r4 = dyn base1(3.0, 4.0);
      goto L0(r4);
    };
    r8 = dyn data_frame[a, b](p, p1);
    check L2() else D1();
  D1():
    deopt 6 [r8];
  L2():
    st x = r8;
    x = ld x;
    check L3() else D2();
  D2():
    deopt 8 [x];
  L3():
    x1 = force? x;
    checkMissing(x1);
    c2 = `is.object`(x1);
    if c2 then L4() else L5(x1);
  L0(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(x3):
    __ = ldf `[[` in base;
    r9 = dyn __(x3, 1.0, 2.0);
    goto L0(r9);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}