fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1724182071`;
    st `.rmpkg` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1724182071`(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg sub:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st pkg = pkg;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r1 = dyn sub[, , , fixed]("package:", "", p, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    popenv;
    return r1;
  }
}