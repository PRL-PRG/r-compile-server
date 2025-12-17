fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3204389973;
    st `.DollarNames.list` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3204389973(x, pattern) {
  (reg x:*, reg pattern:*) -+> V { var x:*, var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, reg findMatches:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg names:cls, reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st x = x;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L0("") else L0(pattern);
  L0(pattern_orDefault):
    st pattern = pattern_orDefault;
    findMatches = ldf findMatches;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p1 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      names = ldf names in base;
      r3 = dyn names(x2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym x>);
      goto L0(r1);
    };
    r5 = dyn findMatches(p, p1);
    check L2() else D1();
  D1():
    deopt 4 [r5];
  L2():
    popenv;
    return r5;
  }
}