fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner83473225;
    st dlnorm = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner83473225(x, meanlog, sdlog, log) {
  (reg x:*, reg meanlog:*, reg sdlog:*, reg log:*) -+> V { var x:*, var meanlog:*, reg meanlog_isMissing:L, reg meanlog_orDefault:*, var sdlog:*, reg sdlog_isMissing:L, reg sdlog_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_dlnorm:*, reg C_dlnorm1:V, reg x1:*, reg x2:V, reg meanlog1:*, reg meanlog2:V, reg sdlog1:*, reg sdlog2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    meanlog_isMissing = missing.0(meanlog);
    if meanlog_isMissing then L0(0.0) else L0(meanlog);
  L0(meanlog_orDefault):
    st meanlog = meanlog_orDefault;
    sdlog_isMissing = missing.0(sdlog);
    if sdlog_isMissing then L1(1.0) else L1(sdlog);
  L1(sdlog_orDefault):
    st sdlog = sdlog_orDefault;
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
    C_dlnorm = ld C_dlnorm;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_dlnorm>, <sym x>, <sym meanlog>, <sym sdlog>, <sym log>);
    goto L3(r);
  D0():
    deopt 1 [C_dlnorm];
  L6():
    C_dlnorm1 = force? C_dlnorm;
    checkMissing(C_dlnorm1);
    x1 = ld x;
    check L7() else D1();
  D1():
    deopt 2 [C_dlnorm1, x1];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    meanlog1 = ld meanlog;
    check L8() else D2();
  D2():
    deopt 3 [C_dlnorm1, x2, meanlog1];
  L8():
    meanlog2 = force? meanlog1;
    checkMissing(meanlog2);
    sdlog1 = ld sdlog;
    check L9() else D3();
  D3():
    deopt 4 [C_dlnorm1, x2, meanlog2, sdlog1];
  L9():
    sdlog2 = force? sdlog1;
    checkMissing(sdlog2);
    log1 = ld log;
    check L10() else D4();
  D4():
    deopt 5 [C_dlnorm1, x2, meanlog2, sdlog2, log1];
  L10():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, meanlog2, sdlog2, log2];
    r2 = `.Call`(C_dlnorm1, vargs, <missing>);
    goto L3(r2);
  }
}