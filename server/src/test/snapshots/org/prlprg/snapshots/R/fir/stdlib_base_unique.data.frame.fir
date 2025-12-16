fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner59029807;
    st `unique.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner59029807(x, incomparables, fromLast, `...`) {
  (reg x:*, reg incomparables:*, reg fromLast:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var fromLast:*, reg fromLast_isMissing:L, reg fromLast_orDefault:*, var `...`:dots?, reg isFALSE:cls, reg incomparables1:*, reg incomparables2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg _NotYetUsed:cls, reg r3:V, reg x1:*, reg x2:V, reg c1:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg duplicated:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg fromLast1:*, reg fromLast2:V, reg p2:p(V +), reg ddd1:dots?, reg r7:V, reg r8:V, reg __:cls, reg r9:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    fromLast_isMissing = missing.0(fromLast);
    if fromLast_isMissing then L1(FALSE) else L1(fromLast);
  L1(fromLast_orDefault):
    st fromLast = fromLast_orDefault;
    st `...` = ddd;
    isFALSE = ldf isFALSE;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      incomparables1 = ld incomparables;
      incomparables2 = force? incomparables1;
      checkMissing(incomparables2);
      return incomparables2;
    };
    r1 = dyn isFALSE(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L7() else L2();
  L2():
    goto L3();
  L3():
    x1 = ld x;
    check L11() else D4();
  L7():
    _NotYetUsed = ldf `.NotYetUsed`;
    check L8() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 11 [x1];
  L8():
    r3 = dyn _NotYetUsed("incomparables != FALSE");
    check L9() else D3();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.object`(x2);
    if c1 then L12() else L13(x2);
  D3():
    deopt 8 [r3];
  L4(dx1):
    popenv;
    return dx1;
  L9():
    goto L3();
  L12():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(x4):
    duplicated = ldf duplicated;
    check L15() else D5();
  D5():
    deopt 14 [x4];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L15():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      fromLast1 = ld fromLast;
      fromLast2 = force? fromLast1;
      checkMissing(fromLast2);
      return fromLast2;
    };
    ddd1 = ld `...`;
    r7 = dyn duplicated[, fromLast, `...`](p1, p2, ddd1);
    check L16() else D6();
  D6():
    deopt 19 [x4, r7];
  L16():
    r8 = `!`(r7);
    __ = ldf `[` in base;
    r9 = dyn __(x2, r8, <missing>, FALSE);
    goto L4(r9);
  }
}