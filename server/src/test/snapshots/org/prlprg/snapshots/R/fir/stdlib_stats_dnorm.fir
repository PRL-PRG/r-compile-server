fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4027304469;
    st dnorm = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4027304469(x, mean, sd, log) {
  (reg x:*, reg mean:*, reg sd:*, reg log:*) -+> V { var x:*, var mean:*, reg mean_isMissing:L, reg mean_orDefault:*, var sd:*, reg sd_isMissing:L, reg sd_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_dnorm:*, reg C_dnorm1:V, reg x1:*, reg x2:V, reg mean1:*, reg mean2:V, reg sd1:*, reg sd2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    mean_isMissing = missing.0(mean);
    if mean_isMissing then L0(0.0) else L0(mean);
  L0(mean_orDefault):
    st mean = mean_orDefault;
    sd_isMissing = missing.0(sd);
    if sd_isMissing then L1(1.0) else L1(sd);
  L1(sd_orDefault):
    st sd = sd_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L2(FALSE) else L2(log);
  L2(log_orDefault):
    st log = log_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    C_dnorm = ld C_dnorm;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_dnorm>, <sym x>, <sym mean>, <sym sd>, <sym log>);
    goto L3(r);
  D0():
    deopt 1 [C_dnorm];
  L6():
    C_dnorm1 = force? C_dnorm;
    checkMissing(C_dnorm1);
    x1 = ld x;
    check L7() else D1();
  D1():
    deopt 2 [C_dnorm1, x1];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    mean1 = ld mean;
    check L8() else D2();
  D2():
    deopt 3 [C_dnorm1, x2, mean1];
  L8():
    mean2 = force? mean1;
    checkMissing(mean2);
    sd1 = ld sd;
    check L9() else D3();
  D3():
    deopt 4 [C_dnorm1, x2, mean2, sd1];
  L9():
    sd2 = force? sd1;
    checkMissing(sd2);
    log1 = ld log;
    check L10() else D4();
  D4():
    deopt 5 [C_dnorm1, x2, mean2, sd2, log1];
  L10():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, mean2, sd2, log2];
    r2 = `.Call`(C_dnorm1, vargs, <missing>);
    goto L3(r2);
  }
}