fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-203083031`;
    st `sort.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-203083031`(x, decreasing, `na.last`, `...`) {
  (reg x:*, reg decreasing:*, reg na_last:*, reg ddd:dots) -+> V { var x:*, var decreasing:*, reg decreasing_isMissing:L, reg decreasing_orDefault:*, var `na.last`:*, reg na_last_isMissing:L, reg na_last_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg x3:*, reg x4:V, reg c2:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg order:cls, reg x7:*, reg x8:V, reg p:p(V +), reg na_last1:*, reg na_last2:V, reg p1:p(V +), reg decreasing1:*, reg decreasing2:V, reg p2:p(V +), reg r5:V, reg __:cls, reg r6:V, reg sort_int:cls, reg x9:*, reg x10:V, reg p3:p(V +), reg na_last3:*, reg na_last4:V, reg p4:p(V +), reg decreasing3:*, reg decreasing4:V, reg p5:p(V +), reg ddd1:dots?, reg r10:V |
    mkenv;
    st x = x;
    decreasing_isMissing = missing.0(decreasing);
    if decreasing_isMissing then L0(FALSE) else L0(decreasing);
  L0(decreasing_orDefault):
    st decreasing = decreasing_orDefault;
    na_last_isMissing = missing.0(na_last);
    if na_last_isMissing then L1(NA_LGL) else L1(na_last);
  L1(na_last_orDefault):
    st `na.last` = na_last_orDefault;
    st `...` = ddd;
    sym = ldf `is.object`;
    base = ldf `is.object` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L8() else L3();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 1 [x1];
  L3():
    sort_int = ldf `sort.int`;
    check L16() else D4();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    goto L2(c);
  L8():
    x3 = ld x;
    check L9() else D1();
  D1():
    deopt 4 [x3];
  D4():
    deopt 16 [];
  L9():
    x4 = force? x3;
    checkMissing(x4);
    c2 = `is.object`(x4);
    if c2 then L10() else L11(x4);
  L16():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p4 = prom<V +>{
      na_last3 = ld `na.last`;
      na_last4 = force? na_last3;
      checkMissing(na_last4);
      return na_last4;
    };
    p5 = prom<V +>{
      decreasing3 = ld decreasing;
      decreasing4 = force? decreasing3;
      checkMissing(decreasing4);
      return decreasing4;
    };
    ddd1 = ld `...`;
    r10 = dyn sort_int[, `na.last`, decreasing, `...`](p3, p4, p5, ddd1);
    check L17() else D5();
  D5():
    deopt 23 [r10];
  L4(dx1):
    popenv;
    return dx1;
  L10():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x6):
    order = ldf order;
    check L13() else D2();
  L17():
    popenv;
    return r10;
  D2():
    deopt 7 [x6];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L13():
    p = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p1 = prom<V +>{
      na_last1 = ld `na.last`;
      na_last2 = force? na_last1;
      checkMissing(na_last2);
      return na_last2;
    };
    p2 = prom<V +>{
      decreasing1 = ld decreasing;
      decreasing2 = force? decreasing1;
      checkMissing(decreasing2);
      return decreasing2;
    };
    r5 = dyn order[, `na.last`, decreasing](p, p1, p2);
    check L14() else D3();
  D3():
    deopt 13 [x6, r5];
  L14():
    __ = ldf `[` in base;
    r6 = dyn __(x6, r5);
    goto L4(r6);
  }
}