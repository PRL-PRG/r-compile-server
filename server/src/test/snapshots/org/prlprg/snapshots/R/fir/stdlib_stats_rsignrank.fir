fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3300710326;
    st rsignrank = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3300710326(nn, n) {
  (reg nn:*, reg n:*) -+> V { var nn:*, var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rsignrank:*, reg C_rsignrank1:V, reg nn1:*, reg nn2:V, reg n1:*, reg n2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st nn = nn;
    st n = n;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_rsignrank = ld C_rsignrank;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_rsignrank>, <sym nn>, <sym n>);
    goto L0(r);
  D0():
    deopt 1 [C_rsignrank];
  L3():
    C_rsignrank1 = force? C_rsignrank;
    checkMissing(C_rsignrank1);
    nn1 = ld nn;
    check L4() else D1();
  D1():
    deopt 2 [C_rsignrank1, nn1];
  L4():
    nn2 = force? nn1;
    checkMissing(nn2);
    n1 = ld n;
    check L5() else D2();
  D2():
    deopt 3 [C_rsignrank1, nn2, n1];
  L5():
    n2 = force? n1;
    checkMissing(n2);
    vargs = dots[nn2, n2];
    r2 = `.Call`(C_rsignrank1, vargs, <missing>);
    goto L0(r2);
  }
}