fun main() {
  () -+> V { reg r:cls, reg f:cls, reg y:*, reg y1:V, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    r = clos inner2501545716;
    st f = r;
    st y = 2.0;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      r1 = `*`(y1, 2.0);
      return r1;
    };
    r3 = dyn f(p);
    check L1() else D1();
  D1():
    deopt 9 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    r = `+`(x2, 1.0);
    popenv;
    return r;
  }
}