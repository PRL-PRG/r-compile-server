fun main() {
  () -+> V { reg data_frame:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg l:*, reg c2:L, reg r10:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r13:V, reg x:*, reg x1:V |
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
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L3() else L4(42.0, l);
  L0(dx1):
    st x = dx1;
    x = ld x;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.0("[[<-", l, 42.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(42.0, dr);
  L4(r10, l2):
    ____ = ldf `[[<-` in base;
    r13 = dyn ____(l2, 42.0, 1.0, 2.0);
    goto L0(r13);
  D2():
    deopt 16 [x];
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