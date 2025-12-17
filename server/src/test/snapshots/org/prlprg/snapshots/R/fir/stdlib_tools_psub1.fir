fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4027253682;
    st psub1 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4027253682(pattern, replacement, x) {
  (reg pattern:*, reg replacement:*, reg x:*) -+> V { var pattern:*, var replacement:*, var x:*, reg sub:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg replacement1:*, reg replacement2:V, reg p1:p(V +), reg x1:*, reg x2:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st pattern = pattern;
    st replacement = replacement;
    st x = x;
    sub = ldf sub;
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
      replacement1 = ld replacement;
      replacement2 = force? replacement1;
      checkMissing(replacement2);
      return replacement2;
    };
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn sub[, , , perl](p, p1, p2, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    popenv;
    return r3;
  }
}