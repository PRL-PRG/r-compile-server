fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1877071976;
    st rmultinom = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1877071976(n, size, prob) {
  (reg n:*, reg size:*, reg prob:*) -+> V { var n:*, var size:*, var prob:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rmultinom:*, reg C_rmultinom1:V, reg n1:*, reg n2:V, reg size1:*, reg size2:V, reg prob1:*, reg prob2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st n = n;
    st size = size;
    st prob = prob;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_rmultinom = ld C_rmultinom;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_rmultinom>, <sym n>, <sym size>, <sym prob>);
    goto L0(r);
  D0():
    deopt 1 [C_rmultinom];
  L3():
    C_rmultinom1 = force? C_rmultinom;
    checkMissing(C_rmultinom1);
    n1 = ld n;
    check L4() else D1();
  D1():
    deopt 2 [C_rmultinom1, n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    size1 = ld size;
    check L5() else D2();
  D2():
    deopt 3 [C_rmultinom1, n2, size1];
  L5():
    size2 = force? size1;
    checkMissing(size2);
    prob1 = ld prob;
    check L6() else D3();
  D3():
    deopt 4 [C_rmultinom1, n2, size2, prob1];
  L6():
    prob2 = force? prob1;
    checkMissing(prob2);
    vargs = dots[n2, size2, prob2];
    r2 = `.Call`(C_rmultinom1, vargs, <missing>);
    goto L0(r2);
  }
}