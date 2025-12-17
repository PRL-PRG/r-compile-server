fun main() {
  () -+> V { reg r:cls, reg f:cls, reg break:cls, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    r = clos inner799576941;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      break = ldf break in base;
      r1 = dyn break();
      return r1;
    };
    r3 = dyn f(TRUE, p);
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg x1:*, reg x2:V, reg c:L, reg y1:*, reg y2:V |
    mkenv;
    st x = x;
    st y = y;
    goto L2();
  L2():
    x1 = ld x;
    check L3() else D0();
  D0():
    deopt 0 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    c = `as.logical`(x2);
    if c then L4() else L0();
  L0():
    goto L1();
  L1():
    goto L2();
  L4():
    y1 = ld y;
    check L5() else D1();
  D1():
    deopt 2 [y1];
  L5():
    y2 = force? y1;
    checkMissing(y2);
    goto L1();
  }
}