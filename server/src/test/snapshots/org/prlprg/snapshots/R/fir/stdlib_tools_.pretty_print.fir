fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3202793820;
    st `.pretty_print` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3202793820(x, collapse) {
  (reg x:*, reg collapse:*) -+> V { var x:*, var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, reg writeLines:cls, reg _strwrap22:cls, reg x1:*, reg x2:V, reg p:p(V +), reg collapse1:*, reg collapse2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st x = x;
    collapse_isMissing = missing.0(collapse);
    if collapse_isMissing then L0(" ") else L0(collapse);
  L0(collapse_orDefault):
    st collapse = collapse_orDefault;
    writeLines = ldf writeLines;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p2 = prom<V +>{
      _strwrap22 = ldf `.strwrap22`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p1 = prom<V +>{
        collapse1 = ld collapse;
        collapse2 = force? collapse1;
        checkMissing(collapse2);
        return collapse2;
      };
      r2 = dyn _strwrap22[, collapse](p, p1);
      return r2;
    };
    r4 = dyn writeLines(p2);
    check L2() else D1();
  D1():
    deopt 3 [r4];
  L2():
    popenv;
    return r4;
  }
}