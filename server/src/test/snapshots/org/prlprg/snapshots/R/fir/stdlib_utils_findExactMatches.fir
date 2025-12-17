fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3421086882;
    st findExactMatches = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3421086882(pattern, values) {
  (reg pattern:*, reg values:*) -+> V { var pattern:*, var values:*, reg grep:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg values1:*, reg values2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st pattern = pattern;
    st values = values;
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
      values1 = ld values;
      values2 = force? values1;
      checkMissing(values2);
      return values2;
    };
    r2 = dyn grep[, , value](p, p1, TRUE);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}