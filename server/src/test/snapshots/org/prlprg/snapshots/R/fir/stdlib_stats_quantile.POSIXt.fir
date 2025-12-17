fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `quantile.POSIXt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg _POSIXct:cls, reg quantile:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_POSIXct:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg unclass:cls, reg r4:V, reg p1:p(V +), reg ddd1:dots?, reg r6:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg attr:cls, reg r10:V, reg p3:p(V +), reg r12:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    _POSIXct = ldf `.POSIXct`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      quantile = ldf quantile;
      p1 = prom<V +>{
        sym = ldf unclass;
        base = ldf unclass in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        as_POSIXct = ldf `as.POSIXct`;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r3 = dyn as_POSIXct(p);
        unclass = ldf unclass in base;
        r4 = dyn unclass(r3);
        goto L0(r4);
      L2():
        r = dyn base(<lang as.POSIXct(x)>);
        goto L0(r);
      };
      ddd1 = ld `...`;
      r6 = dyn quantile[, `...`](p1, ddd1);
      return r6;
    };
    p3 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      attr = ldf attr in base;
      r10 = dyn attr(x4, "tzone");
      goto L0(r10);
    L2():
      r8 = dyn base1(<sym x>, "tzone");
      goto L0(r8);
    };
    r12 = dyn _POSIXct(p2, p3);
    check L1() else D1();
  D1():
    deopt 4 [r12];
  L1():
    popenv;
    return r12;
  }
}