fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2043777666;
    st filtergrep = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2043777666(pattern, x, `...`) {
  (reg pattern:*, reg x:*, reg ddd:dots) -+> V { var pattern:*, var x:*, var `...`:dots?, reg grep:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st pattern = pattern;
    st x = x;
    st `...` = ddd;
    grep = ldf grep;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r2 = dyn grep[, , invert, value, `...`](p, p1, TRUE, TRUE, ddd1);
    check L1() else D1();
  D1():
    deopt 9 [r2];
  L1():
    popenv;
    return r2;
  }
}