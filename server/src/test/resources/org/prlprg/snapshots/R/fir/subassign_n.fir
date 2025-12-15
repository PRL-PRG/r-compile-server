fun main() {
  () -+> V { reg array:cls, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg l:*, reg c1:L, reg r7:I, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r10:V, reg a:*, reg a1:V |
    mkenv;
    array = ldf array;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8>;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(2.0, 2.0, 2.0);
      goto L0(r3);
    L2():
      r1 = dyn base(2.0, 2.0, 2.0);
      goto L0(r1);
    };
    r5 = dyn array[, dim](p, p1);
    check L2() else D1();
  D1():
    deopt 5 [r5];
  L2():
    st a = r5;
    l = ld a;
    c1 = `is.object`(l);
    if c1 then L3() else L4(42, l);
  L0(dx1):
    st a = dx1;
    a = ld a;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.0("[<-", l, 42);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(42, dr);
  L4(r7, l2):
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l2, 42, 1.0, 2.0, 1.0);
    goto L0(r10);
  D2():
    deopt 16 [a];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    a1 = force? a;
    checkMissing(a1);
    popenv;
    return a1;
  }
}