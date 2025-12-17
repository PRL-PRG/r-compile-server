fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2386108811;
    st `weighted.mean.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2386108811(x, w, `...`) {
  (reg x:*, reg w:*, reg ddd:dots) -+> V { var x:*, var w:*, var `...`:dots?, reg as_POSIXlt:cls, reg weighted_mean:cls, reg as_POSIXct:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg w1:*, reg w2:V, reg p2:p(V +), reg ddd1:dots?, reg r4:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st x = x;
    st w = w;
    st `...` = ddd;
    as_POSIXlt = ldf `as.POSIXlt`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      weighted_mean = ldf `weighted.mean`;
      p1 = prom<V +>{
        as_POSIXct = ldf `as.POSIXct`;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r1 = dyn as_POSIXct(p);
        return r1;
      };
      p2 = prom<V +>{
        w1 = ld w;
        w2 = force? w1;
        checkMissing(w2);
        return w2;
      };
      ddd1 = ld `...`;
      r4 = dyn weighted_mean[, , `...`](p1, p2, ddd1);
      return r4;
    };
    r6 = dyn as_POSIXlt(p3);
    check L1() else D1();
  D1():
    deopt 3 [r6];
  L1():
    popenv;
    return r6;
  }
}