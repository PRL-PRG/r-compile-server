fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    r = clos inner2708337952;
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
fun inner2708337952() {
  () -+> V { reg r:cls, reg g:cls, reg p:p(V +), reg r1:V |
    mkenv;
    r = clos inner2501545716;
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
fun inner2501545716(x) {
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