fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.canonicalize_doi` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sub:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sub1:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn sub("^((doi|DOI):)?[[:space:]]*https?://(dx[.])?doi[.]org/", "", p);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st x = r1;
    sub1 = ldf sub;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn sub1("^(doi|DOI):", "", p1);
    check L3() else D3();
  D3():
    deopt 12 [r3];
  L3():
    popenv;
    return r3;
  }
}