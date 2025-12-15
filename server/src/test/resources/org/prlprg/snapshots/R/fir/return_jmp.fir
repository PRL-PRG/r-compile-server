fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    r = clos inner560854305;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn f();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner560854305() {
  () -+> V { reg r:cls, reg g:cls, reg p:p(V +), reg r1:V |
    mkenv;
    r = clos inner354062069;
    st g = r;
    g = ldf g;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return 42;
    };
    r1 = dyn g(p);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return 2;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    st y = x2;
    popenv;
    return 1;
  }
}