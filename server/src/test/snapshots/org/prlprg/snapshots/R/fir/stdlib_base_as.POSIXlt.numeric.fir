fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1768602929;
    st `as.POSIXlt.numeric` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1768602929(x, tz, origin, `...`) {
  (reg x:*, reg tz:*, reg origin:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var origin:*, var `...`:dots?, reg as_POSIXlt:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg _POSIXct:cls, reg x1:*, reg x2:V, reg p:p(V +), reg tz1:*, reg tz2:V, reg p1:p(V +), reg r5:V, reg as_POSIXct:cls, reg origin1:*, reg origin2:V, reg p2:p(V +), reg ddd1:dots?, reg r7:V, reg x3:*, reg x4:V, reg r8:V, reg p3:p(V +), reg tz3:*, reg tz4:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    st origin = origin;
    st `...` = ddd;
    as_POSIXlt = ldf `as.POSIXlt`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p3 = prom<V +>{
      sym = ldf missing;
      base = ldf missing in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      c = `as.logical`(r1);
      if c then L4() else L1();
    L2():
      missing = ldf missing in base;
      r2 = dyn missing(<sym origin>);
      goto L0(r2);
    L3():
      r = dyn base(<sym origin>);
      goto L0(r);
    L1():
      as_POSIXct = ldf `as.POSIXct`;
      p2 = prom<V +>{
        origin1 = ld origin;
        origin2 = force? origin1;
        checkMissing(origin2);
        return origin2;
      };
      ddd1 = ld `...`;
      r7 = dyn as_POSIXct[, tz, `...`](p2, "UTC", ddd1);
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      r8 = `+`(r7, x4);
      return r8;
    L4():
      _POSIXct = ldf `.POSIXct`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        tz1 = ld tz;
        tz2 = force? tz1;
        checkMissing(tz2);
        return tz2;
      };
      r5 = dyn _POSIXct(p, p1);
      return r5;
    };
    p4 = prom<V +>{
      tz3 = ld tz;
      tz4 = force? tz3;
      checkMissing(tz4);
      return tz4;
    };
    r11 = dyn as_POSIXlt(p3, p4);
    check L2() else D1();
  D1():
    deopt 4 [r11];
  L2():
    popenv;
    return r11;
  }
}