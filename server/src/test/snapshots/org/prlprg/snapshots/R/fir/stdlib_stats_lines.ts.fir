fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `lines.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg lines_default:cls, reg time:cls, reg as_ts:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg x3:*, reg x4:V, reg p3:p(V +), reg ddd1:dots?, reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    lines_default = ldf `lines.default`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      time = ldf time;
      p1 = prom<V +>{
        as_ts = ldf `as.ts`;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r1 = dyn as_ts(p);
        return r1;
      };
      r3 = dyn time(p1);
      return r3;
    };
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    ddd1 = ld `...`;
    r6 = dyn lines_default[, , `...`](p2, p3, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}