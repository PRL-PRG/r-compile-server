fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `mean.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg _Date:cls, reg mean:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg ddd1:dots?, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    _Date = ldf `.Date`;
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
    r6 = dyn _Date(p1);
    check L1() else D1();
  D1():
    deopt 3 [r6];
  L1():
    popenv;
    return r6;
  }
}