fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3117001256;
    st `unique.warnings` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3117001256(x, incomparables, `...`) {
  (reg x:*, reg incomparables:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg duplicated:cls, reg x5:*, reg x6:V, reg p:p(V +), reg incomparables1:*, reg incomparables2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V, reg r3:V, reg __:cls, reg r4:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L2() else D0();
  D0():
    deopt 0 [x1];
  L2():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L3() else L4(x2);
  L1(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(x4):
    duplicated = ldf duplicated;
    check L6() else D1();
  D1():
    deopt 3 [x4];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L6():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p1 = prom<V +>{
      incomparables1 = ld incomparables;
      incomparables2 = force? incomparables1;
      checkMissing(incomparables2);
      return incomparables2;
    };
    ddd1 = ld `...`;
    r2 = dyn duplicated[, , `...`](p, p1, ddd1);
    check L7() else D2();
  D2():
    deopt 7 [x4, r2];
  L7():
    r3 = `!`(r2);
    __ = ldf `[` in base;
    r4 = dyn __(x4, r3);
    goto L1(r4);
  }
}