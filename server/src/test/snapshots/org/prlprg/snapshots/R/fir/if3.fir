fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    r = clos inner2501545716;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn f(1.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V, reg c:L |
    mkenv;
    st x = x;
    x1 = ld x;
    check L2() else D0();
  D0():
    deopt 0 [x1];
  L2():
    x2 = force? x1;
    checkMissing(x2);
    r = `>`(x2, 0.0);
    c = `as.logical`(r);
    if c then L3() else L0();
  L0():
    goto L1();
  L1():
    popenv;
    return 1.0;
  L3():
    goto L1();
  }
}