fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.ORCID_iD_canonicalize` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sub:cls, reg _ORCID_iD_variants_regexp:*, reg _ORCID_iD_variants_regexp1:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st x = x;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      _ORCID_iD_variants_regexp = ld `.ORCID_iD_variants_regexp`;
      _ORCID_iD_variants_regexp1 = force? _ORCID_iD_variants_regexp;
      checkMissing(_ORCID_iD_variants_regexp1);
      return _ORCID_iD_variants_regexp1;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn sub(p, "\\3", p1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}