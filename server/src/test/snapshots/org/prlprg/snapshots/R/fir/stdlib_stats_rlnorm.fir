fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2816982623;
    st rlnorm = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2816982623(n, meanlog, sdlog) {
  (reg n:*, reg meanlog:*, reg sdlog:*) -+> V { var n:*, var meanlog:*, reg meanlog_isMissing:L, reg meanlog_orDefault:*, var sdlog:*, reg sdlog_isMissing:L, reg sdlog_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rlnorm:*, reg C_rlnorm1:V, reg n1:*, reg n2:V, reg meanlog1:*, reg meanlog2:V, reg sdlog1:*, reg sdlog2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st n = n;
    meanlog_isMissing = missing.0(meanlog);
    if meanlog_isMissing then L0(0.0) else L0(meanlog);
  L0(meanlog_orDefault):
    st meanlog = meanlog_orDefault;
    sdlog_isMissing = missing.0(sdlog);
    if sdlog_isMissing then L1(1.0) else L1(sdlog);
  L1(sdlog_orDefault):
    st sdlog = sdlog_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    C_rlnorm = ld C_rlnorm;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_rlnorm>, <sym n>, <sym meanlog>, <sym sdlog>);
    goto L2(r);
  D0():
    deopt 1 [C_rlnorm];
  L5():
    C_rlnorm1 = force? C_rlnorm;
    checkMissing(C_rlnorm1);
    n1 = ld n;
    check L6() else D1();
  D1():
    deopt 2 [C_rlnorm1, n1];
  L6():
    n2 = force? n1;
    checkMissing(n2);
    meanlog1 = ld meanlog;
    check L7() else D2();
  D2():
    deopt 3 [C_rlnorm1, n2, meanlog1];
  L7():
    meanlog2 = force? meanlog1;
    checkMissing(meanlog2);
    sdlog1 = ld sdlog;
    check L8() else D3();
  D3():
    deopt 4 [C_rlnorm1, n2, meanlog2, sdlog1];
  L8():
    sdlog2 = force? sdlog1;
    checkMissing(sdlog2);
    vargs = dots[n2, meanlog2, sdlog2];
    r2 = `.Call`(C_rlnorm1, vargs, <missing>);
    goto L2(r2);
  }
}