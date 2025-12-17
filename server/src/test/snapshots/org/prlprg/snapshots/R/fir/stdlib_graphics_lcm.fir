fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st lcm = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    paste = ldf paste;
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
    r1 = dyn paste(p, "cm");
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}