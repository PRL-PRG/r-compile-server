fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `mean.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg as_POSIXlt:cls, reg mean:cls, reg as_POSIXct:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    as_POSIXlt = ldf `as.POSIXlt`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      mean = ldf mean;
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
      ddd1 = ld `...`;
      r3 = dyn mean[, `...`](p1, ddd1);
      return r3;
    };
    r5 = dyn as_POSIXlt(p2);
    check L1() else D1();
  D1():
    deopt 3 [r5];
  L1():
    popenv;
    return r5;
  }
}