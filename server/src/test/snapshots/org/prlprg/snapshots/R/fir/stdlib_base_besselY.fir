fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1913672432;
    st besselY = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1913672432(x, nu) {
  (reg x:*, reg nu:*) -+> V { var x:*, var nu:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg nu1:*, reg nu2:V, reg besselY:cls, reg r2:V |
    mkenv;
    st x = x;
    st nu = nu;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang besselY(x, nu)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    nu1 = ld nu;
    check L4() else D1();
  D1():
    deopt 4 [nu1];
  L4():
    nu2 = force? nu1;
    checkMissing(nu2);
    besselY = ldf besselY in base;
    r2 = dyn besselY(x2, nu2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}