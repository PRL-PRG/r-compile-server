fun main() {
  () -+> V { reg array:cls, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg a:*, reg a1:V, reg c1:L, reg a3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V |
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
    a = ld a;
    check L3() else D2();
  D2():
    deopt 7 [a];
  L3():
    a1 = force? a;
    checkMissing(a1);
    c1 = `is.object`(a1);
    if c1 then L4() else L5(a1);
  L0(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[[", a1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(a3):
    __ = ldf `[[` in base;
    r6 = dyn __(a3, 1.0, 2.0, TRUE);
    goto L0(r6);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}