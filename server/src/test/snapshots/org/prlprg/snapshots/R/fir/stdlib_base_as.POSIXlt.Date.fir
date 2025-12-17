fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner630942693;
    st `as.POSIXlt.Date` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner630942693(x, tz, `...`) {
  (reg x:*, reg tz:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var `...`:dots?, reg as_POSIXlt:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg tz1:*, reg tz2:V, reg Date2POSIXlt:cls, reg r2:V, reg p:p(V +), reg tz3:*, reg tz4:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("UTC") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    st `...` = ddd;
    as_POSIXlt = ldf `as.POSIXlt`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf `.Internal`;
      base = ldf `.Internal` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      tz1 = ld tz;
      tz2 = force? tz1;
      checkMissing(tz2);
      Date2POSIXlt = ldf Date2POSIXlt in base;
      r2 = dyn Date2POSIXlt(x2, tz2);
      goto L0(r2);
    L2():
      r = dyn base(<lang Date2POSIXlt(x, tz)>);
      goto L0(r);
    };
    p1 = prom<V +>{
      tz3 = ld tz;
      tz4 = force? tz3;
      checkMissing(tz4);
      return tz4;
    };
    r5 = dyn as_POSIXlt[, tz](p, p1);
    check L2() else D1();
  D1():
    deopt 5 [r5];
  L2():
    popenv;
    return r5;
  }
}