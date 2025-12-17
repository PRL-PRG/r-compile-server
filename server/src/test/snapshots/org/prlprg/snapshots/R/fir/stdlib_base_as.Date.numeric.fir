fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1825000776;
    st `as.Date.numeric` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1825000776(x, origin, `...`) {
  (reg x:*, reg origin:*, reg ddd:dots) -+> V { var x:*, var origin:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg _Date:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r4:V, reg as_Date:cls, reg origin1:*, reg origin2:V, reg p1:p(V +), reg ddd1:dots?, reg r6:V, reg x3:*, reg x4:V, reg r7:V |
    mkenv;
    st x = x;
    st origin = origin;
    st `...` = ddd;
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
    as_Date = ldf `as.Date`;
    check L8() else D2();
  L4():
    _Date = ldf `.Date`;
    check L5() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 8 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r4 = dyn _Date(p);
    check L6() else D1();
  L8():
    p1 = prom<V +>{
      origin1 = ld origin;
      origin2 = force? origin1;
      checkMissing(origin2);
      return origin2;
    };
    ddd1 = ld `...`;
    r6 = dyn as_Date[, `...`](p1, ddd1);
    check L9() else D3();
  D1():
    deopt 6 [r4];
  D3():
    deopt 11 [r6];
  L6():
    popenv;
    return r4;
  L9():
    x3 = ld x;
    check L10() else D4();
  D4():
    deopt 11 [r6, x3];
  L10():
    x4 = force? x3;
    checkMissing(x4);
    r7 = `+`(r6, x4);
    popenv;
    return r7;
  }
}