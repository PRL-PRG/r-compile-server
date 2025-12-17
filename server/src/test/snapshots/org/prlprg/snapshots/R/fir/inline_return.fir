fun main() {
  () -+> V { reg f:cls, reg r1:V |
    mkenv;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 3 [];
  L0():
    r1 = dyn f(42.0);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
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
    popenv;
    return x2;
  }
}