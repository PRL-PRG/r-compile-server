fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3929609721;
    st `weekdays.POSIXt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3929609721(x, abbreviate) {
  (reg x:*, reg abbreviate:*) -+> V { var x:*, var abbreviate:*, reg abbreviate_isMissing:L, reg abbreviate_orDefault:*, reg format:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ifelse:cls, reg abbreviate1:*, reg abbreviate2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st x = x;
    abbreviate_isMissing = missing.0(abbreviate);
    if abbreviate_isMissing then L0(FALSE) else L0(abbreviate);
  L0(abbreviate_orDefault):
    st abbreviate = abbreviate_orDefault;
    format = ldf format;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      ifelse = ldf ifelse;
      p1 = prom<V +>{
        abbreviate1 = ld abbreviate;
        abbreviate2 = force? abbreviate1;
        checkMissing(abbreviate2);
        return abbreviate2;
      };
      r2 = dyn ifelse(p1, "%a", "%A");
      return r2;
    };
    r4 = dyn format(p, p2);
    check L2() else D1();
  D1():
    deopt 4 [r4];
  L2():
    popenv;
    return r4;
  }
}