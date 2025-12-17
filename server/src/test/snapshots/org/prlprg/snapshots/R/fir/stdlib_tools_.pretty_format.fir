fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2578602085;
    st `.pretty_format` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2578602085(x, collapse, q) {
  (reg x:*, reg collapse:*, reg q:*) -+> V { var x:*, var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, var q:*, reg q_isMissing:L, reg q_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg _strwrap22:cls, reg sQuote:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg q1:*, reg q2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg collapse1:*, reg collapse2:V, reg p4:p(V +), reg r7:V |
    mkenv;
    st x = x;
    collapse_isMissing = missing.0(collapse);
    if collapse_isMissing then L0(" ") else L0(collapse);
  L0(collapse_orDefault):
    st collapse = collapse_orDefault;
    q_isMissing = missing.0(q);
    if q_isMissing then L1() else L2(q);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("useFancyQuotes");
      return r;
    };
    goto L2(p);
  L2(q_orDefault):
    st q = q_orDefault;
    _strwrap22 = ldf `.strwrap22`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p3 = prom<V +>{
      sQuote = ldf sQuote;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p2 = prom<V +>{
        q1 = ld q;
        q2 = force? q1;
        checkMissing(q2);
        return q2;
      };
      r4 = dyn sQuote[, q](p1, p2);
      return r4;
    };
    p4 = prom<V +>{
      collapse1 = ld collapse;
      collapse2 = force? collapse1;
      checkMissing(collapse2);
      return collapse2;
    };
    r7 = dyn _strwrap22[, collapse](p3, p4);
    check L4() else D1();
  D1():
    deopt 5 [r7];
  L4():
    popenv;
    return r7;
  }
}