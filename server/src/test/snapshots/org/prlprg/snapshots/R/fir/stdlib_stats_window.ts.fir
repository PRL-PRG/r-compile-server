fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `window.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg as_ts:cls, reg window_default:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    as_ts = ldf `as.ts`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      window_default = ldf `window.default`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      ddd1 = ld `...`;
      r1 = dyn window_default[, `...`](p, ddd1);
      return r1;
    };
    r3 = dyn as_ts(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}