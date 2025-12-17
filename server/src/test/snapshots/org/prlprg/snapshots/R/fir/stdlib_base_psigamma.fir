fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2272591237;
    st psigamma = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2272591237(x, deriv) {
  (reg x:*, reg deriv:*) -+> V { var x:*, var deriv:*, reg deriv_isMissing:L, reg deriv_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg deriv1:*, reg deriv2:V, reg psigamma:cls, reg r2:V |
    mkenv;
    st x = x;
    deriv_isMissing = missing.0(deriv);
    if deriv_isMissing then L0(0) else L0(deriv);
  L0(deriv_orDefault):
    st deriv = deriv_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<lang psigamma(x, deriv)>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    deriv1 = ld deriv;
    check L5() else D1();
  D1():
    deopt 4 [deriv1];
  L5():
    deriv2 = force? deriv1;
    checkMissing(deriv2);
    psigamma = ldf psigamma in base;
    r2 = dyn psigamma(x2, deriv2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}