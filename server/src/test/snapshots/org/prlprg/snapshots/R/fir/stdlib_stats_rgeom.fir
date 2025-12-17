fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner139455091;
    st rgeom = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner139455091(n, prob) {
  (reg n:*, reg prob:*) -+> V { var n:*, var prob:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rgeom:*, reg C_rgeom1:V, reg n1:*, reg n2:V, reg prob1:*, reg prob2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st n = n;
    st prob = prob;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_rgeom = ld C_rgeom;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_rgeom>, <sym n>, <sym prob>);
    goto L0(r);
  D0():
    deopt 1 [C_rgeom];
  L3():
    C_rgeom1 = force? C_rgeom;
    checkMissing(C_rgeom1);
    n1 = ld n;
    check L4() else D1();
  D1():
    deopt 2 [C_rgeom1, n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    prob1 = ld prob;
    check L5() else D2();
  D2():
    deopt 3 [C_rgeom1, n2, prob1];
  L5():
    prob2 = force? prob1;
    checkMissing(prob2);
    vargs = dots[n2, prob2];
    r2 = `.Call`(C_rgeom1, vargs, <missing>);
    goto L0(r2);
  }
}