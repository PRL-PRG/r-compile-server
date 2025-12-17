fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2386108811;
    st `weighted.mean.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2386108811(x, w, `...`) {
  (reg x:*, reg w:*, reg ddd:dots) -+> V { var x:*, var w:*, var `...`:dots?, reg _Date:cls, reg weighted_mean:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg w1:*, reg w2:V, reg p1:p(V +), reg ddd1:dots?, reg r5:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st x = x;
    st w = w;
    st `...` = ddd;
    _Date = ldf `.Date`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      weighted_mean = ldf `weighted.mean`;
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
      p1 = prom<V +>{
        w1 = ld w;
        w2 = force? w1;
        checkMissing(w2);
        return w2;
      };
      ddd1 = ld `...`;
      r5 = dyn weighted_mean[, , `...`](p, p1, ddd1);
      return r5;
    };
    r7 = dyn _Date(p2);
    check L1() else D1();
  D1():
    deopt 3 [r7];
  L1():
    popenv;
    return r7;
  }
}