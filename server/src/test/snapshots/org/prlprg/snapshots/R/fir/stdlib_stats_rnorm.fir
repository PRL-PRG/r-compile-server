fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3019521939;
    st rnorm = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3019521939(n, mean, sd) {
  (reg n:*, reg mean:*, reg sd:*) -+> V { var n:*, var mean:*, reg mean_isMissing:L, reg mean_orDefault:*, var sd:*, reg sd_isMissing:L, reg sd_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rnorm:*, reg C_rnorm1:V, reg n1:*, reg n2:V, reg mean1:*, reg mean2:V, reg sd1:*, reg sd2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st n = n;
    mean_isMissing = missing.0(mean);
    if mean_isMissing then L0(0.0) else L0(mean);
  L0(mean_orDefault):
    st mean = mean_orDefault;
    sd_isMissing = missing.0(sd);
    if sd_isMissing then L1(1.0) else L1(sd);
  L1(sd_orDefault):
    st sd = sd_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    C_rnorm = ld C_rnorm;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_rnorm>, <sym n>, <sym mean>, <sym sd>);
    goto L2(r);
  D0():
    deopt 1 [C_rnorm];
  L5():
    C_rnorm1 = force? C_rnorm;
    checkMissing(C_rnorm1);
    n1 = ld n;
    check L6() else D1();
  D1():
    deopt 2 [C_rnorm1, n1];
  L6():
    n2 = force? n1;
    checkMissing(n2);
    mean1 = ld mean;
    check L7() else D2();
  D2():
    deopt 3 [C_rnorm1, n2, mean1];
  L7():
    mean2 = force? mean1;
    checkMissing(mean2);
    sd1 = ld sd;
    check L8() else D3();
  D3():
    deopt 4 [C_rnorm1, n2, mean2, sd1];
  L8():
    sd2 = force? sd1;
    checkMissing(sd2);
    vargs = dots[n2, mean2, sd2];
    r2 = `.Call`(C_rnorm1, vargs, <missing>);
    goto L2(r2);
  }
}