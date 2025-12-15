fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    r = clos inner354062069;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn f(2.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V, reg c:L, reg x3:*, reg x4:V, reg r1:V, reg c1:L |
    mkenv;
    st x = x;
    x1 = ld x;
    check L2() else D0();
  D0():
    deopt 0 [x1];
  L2():
    x2 = force? x1;
    checkMissing(x2);
    r = `==`(x2, 1.0);
    c = `as.logical`(r);
    if c then L3() else L0();
  L0():
    x3 = ld x;
    check L5() else D1();
  L3():
    popenv;
    return 1.0;
  D1():
    deopt 6 [x3];
  L5():
    x4 = force? x3;
    checkMissing(x4);
    r1 = `==`(x4, 2.0);
    c1 = `as.logical`(r1);
    if c1 then L6() else L1();
  L1():
    popenv;
    return 3.0;
  L6():
    popenv;
    return 2.0;
  }
}