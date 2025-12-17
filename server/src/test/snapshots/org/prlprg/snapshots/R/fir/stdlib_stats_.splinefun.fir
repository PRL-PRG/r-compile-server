fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2770516398;
    st `.splinefun` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2770516398(x, z) {
  (reg x:*, reg z:*) -+> V { var x:*, var z:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_SplineEval:*, reg C_SplineEval1:V, reg x1:*, reg x2:V, reg z1:*, reg z2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    st z = z;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_SplineEval = ld C_SplineEval;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_SplineEval>, <sym x>, <sym z>);
    goto L0(r);
  D0():
    deopt 1 [C_SplineEval];
  L3():
    C_SplineEval1 = force? C_SplineEval;
    checkMissing(C_SplineEval1);
    x1 = ld x;
    check L4() else D1();
  D1():
    deopt 2 [C_SplineEval1, x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    z1 = ld z;
    check L5() else D2();
  D2():
    deopt 3 [C_SplineEval1, x2, z1];
  L5():
    z2 = force? z1;
    checkMissing(z2);
    vargs = dots[x2, z2];
    r2 = `.Call`(C_SplineEval1, vargs, <missing>);
    goto L0(r2);
  }
}