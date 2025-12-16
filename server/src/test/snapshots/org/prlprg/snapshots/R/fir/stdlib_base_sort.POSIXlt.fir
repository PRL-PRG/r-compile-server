fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-203083031`;
    st `sort.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-203083031`(x, decreasing, `na.last`, `...`) {
  (reg x:*, reg decreasing:*, reg na_last:*, reg ddd:dots) -+> V { var x:*, var decreasing:*, reg decreasing_isMissing:L, reg decreasing_orDefault:*, var `na.last`:*, reg na_last_isMissing:L, reg na_last_orDefault:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg order:cls, reg as_POSIXct:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg na_last1:*, reg na_last2:V, reg p2:p(V +), reg decreasing1:*, reg decreasing2:V, reg p3:p(V +), reg r5:V, reg __:cls, reg r6:V |
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
    x1 = ld x;
    check L3() else D0();
  D0():
    deopt 0 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L4() else L5(x2);
  L2(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(x4):
    order = ldf order;
    check L7() else D1();
  D1():
    deopt 3 [x4];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L7():
    p1 = prom<V +>{
      as_POSIXct = ldf `as.POSIXct`;
      p = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r1 = dyn as_POSIXct(p);
      return r1;
    };
    p2 = prom<V +>{
      na_last1 = ld `na.last`;
      na_last2 = force? na_last1;
      checkMissing(na_last2);
      return na_last2;
    };
    p3 = prom<V +>{
      decreasing1 = ld decreasing;
      decreasing2 = force? decreasing1;
      checkMissing(decreasing2);
      return decreasing2;
    };
    r5 = dyn order[, `na.last`, decreasing](p1, p2, p3);
    check L8() else D2();
  D2():
    deopt 9 [x4, r5];
  L8():
    __ = ldf `[` in base;
    r6 = dyn __(x4, r5);
    goto L2(r6);
  }
}