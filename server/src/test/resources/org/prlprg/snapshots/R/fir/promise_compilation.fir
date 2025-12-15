fun main() {
  () -+> V { reg r:cls, reg f:cls, reg x:*, reg x1:V, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    r = clos inner354062069;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      st x = 1.0;
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      r1 = `+`(x1, 2.0);
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
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg print:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    print = ldf print;
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
    r1 = dyn print(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}