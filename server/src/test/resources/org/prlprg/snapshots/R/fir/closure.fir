fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    st y = 21.0;
    r = clos inner354062069;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    r1 = dyn f(42.0);
    check L1() else D1();
  D1():
    deopt 9 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg y:*, reg y1:V, reg r:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    y = ld y;
    check L1() else D1();
  D1():
    deopt 1 [x2, y];
  L1():
    y1 = force? y;
    checkMissing(y1);
    r = `+`(x2, y1);
    popenv;
    return r;
  }
}