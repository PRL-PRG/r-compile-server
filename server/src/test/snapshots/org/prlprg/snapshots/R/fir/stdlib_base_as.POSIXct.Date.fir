fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner630942693;
    st `as.POSIXct.Date` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner630942693(x, tz, `...`) {
  (reg x:*, reg tz:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var `...`:dots?, reg _POSIXct:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg r3:V, reg p:p(V +), reg tz1:*, reg tz2:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("UTC") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    st `...` = ddd;
    _POSIXct = ldf `.POSIXct`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `*`(r1, 86400.0);
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unclass = ldf unclass in base;
      r2 = dyn unclass(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p1 = prom<V +>{
      tz1 = ld tz;
      tz2 = force? tz1;
      checkMissing(tz2);
      return tz2;
    };
    r6 = dyn _POSIXct[, tz](p, p1);
    check L2() else D1();
  D1():
    deopt 5 [r6];
  L2():
    popenv;
    return r6;
  }
}