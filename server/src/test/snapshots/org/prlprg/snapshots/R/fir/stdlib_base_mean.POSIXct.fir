fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `mean.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg _POSIXct:cls, reg mean:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg ddd1:dots?, reg r4:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg attr:cls, reg r8:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    _POSIXct = ldf `.POSIXct`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      mean = ldf mean;
      p = prom<V +>{
        sym = ldf unclass;
        base = ldf unclass in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
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
      ddd1 = ld `...`;
      r4 = dyn mean[, `...`](p, ddd1);
      return r4;
    };
    p2 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      attr = ldf attr in base;
      r8 = dyn attr(x4, "tzone");
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym x>, "tzone");
      goto L0(r6);
    };
    r10 = dyn _POSIXct(p1, p2);
    check L1() else D1();
  D1():
    deopt 4 [r10];
  L1():
    popenv;
    return r10;
  }
}