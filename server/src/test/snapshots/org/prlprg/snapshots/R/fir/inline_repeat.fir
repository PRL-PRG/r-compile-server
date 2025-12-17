fun main() {
  () -+> V { reg r:cls, reg f:cls, reg print:cls, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    r = clos inner2501545716;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      print = ldf print;
      r1 = dyn print("hi");
      return r1;
    };
    r3 = dyn f(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    goto L0();
  L0():
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    goto L0();
  }
}