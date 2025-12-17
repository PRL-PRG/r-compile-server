fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3447018290;
    st rhyper = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3447018290(nn, m, n, k) {
  (reg nn:*, reg m:*, reg n:*, reg k:*) -+> V { var nn:*, var m:*, var n:*, var k:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rhyper:*, reg C_rhyper1:V, reg nn1:*, reg nn2:V, reg m1:*, reg m2:V, reg n1:*, reg n2:V, reg k1:*, reg k2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st nn = nn;
    st m = m;
    st n = n;
    st k = k;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_rhyper = ld C_rhyper;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_rhyper>, <sym nn>, <sym m>, <sym n>, <sym k>);
    goto L0(r);
  D0():
    deopt 1 [C_rhyper];
  L3():
    C_rhyper1 = force? C_rhyper;
    checkMissing(C_rhyper1);
    nn1 = ld nn;
    check L4() else D1();
  D1():
    deopt 2 [C_rhyper1, nn1];
  L4():
    nn2 = force? nn1;
    checkMissing(nn2);
    m1 = ld m;
    check L5() else D2();
  D2():
    deopt 3 [C_rhyper1, nn2, m1];
  L5():
    m2 = force? m1;
    checkMissing(m2);
    n1 = ld n;
    check L6() else D3();
  D3():
    deopt 4 [C_rhyper1, nn2, m2, n1];
  L6():
    n2 = force? n1;
    checkMissing(n2);
    k1 = ld k;
    check L7() else D4();
  D4():
    deopt 5 [C_rhyper1, nn2, m2, n2, k1];
  L7():
    k2 = force? k1;
    checkMissing(k2);
    vargs = dots[nn2, m2, n2, k2];
    r2 = `.Call`(C_rhyper1, vargs, <missing>);
    goto L0(r2);
  }
}