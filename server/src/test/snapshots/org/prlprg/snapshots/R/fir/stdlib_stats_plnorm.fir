fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner56925504;
    st plnorm = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner56925504(q, meanlog, sdlog, `lower.tail`, `log.p`) {
  (reg q:*, reg meanlog:*, reg sdlog:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var meanlog:*, reg meanlog_isMissing:L, reg meanlog_orDefault:*, var sdlog:*, reg sdlog_isMissing:L, reg sdlog_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_plnorm:*, reg C_plnorm1:V, reg q1:*, reg q2:V, reg meanlog1:*, reg meanlog2:V, reg sdlog1:*, reg sdlog2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st q = q;
    meanlog_isMissing = missing.0(meanlog);
    if meanlog_isMissing then L0(0.0) else L0(meanlog);
  L0(meanlog_orDefault):
    st meanlog = meanlog_orDefault;
    sdlog_isMissing = missing.0(sdlog);
    if sdlog_isMissing then L1(1.0) else L1(sdlog);
  L1(sdlog_orDefault):
    st sdlog = sdlog_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L2(TRUE) else L2(lower_tail);
  L2(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L3(FALSE) else L3(log_p);
  L3(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L4(r1):
    popenv;
    return r1;
  L5():
    C_plnorm = ld C_plnorm;
    check L7() else D0();
  L6():
    r = dyn base(<sym C_plnorm>, <sym q>, <sym meanlog>, <sym sdlog>, <sym lower.tail>, <sym log.p>);
    goto L4(r);
  D0():
    deopt 1 [C_plnorm];
  L7():
    C_plnorm1 = force? C_plnorm;
    checkMissing(C_plnorm1);
    q1 = ld q;
    check L8() else D1();
  D1():
    deopt 2 [C_plnorm1, q1];
  L8():
    q2 = force? q1;
    checkMissing(q2);
    meanlog1 = ld meanlog;
    check L9() else D2();
  D2():
    deopt 3 [C_plnorm1, q2, meanlog1];
  L9():
    meanlog2 = force? meanlog1;
    checkMissing(meanlog2);
    sdlog1 = ld sdlog;
    check L10() else D3();
  D3():
    deopt 4 [C_plnorm1, q2, meanlog2, sdlog1];
  L10():
    sdlog2 = force? sdlog1;
    checkMissing(sdlog2);
    lower_tail1 = ld `lower.tail`;
    check L11() else D4();
  D4():
    deopt 5 [C_plnorm1, q2, meanlog2, sdlog2, lower_tail1];
  L11():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L12() else D5();
  D5():
    deopt 6 [C_plnorm1, q2, meanlog2, sdlog2, lower_tail2, log_p1];
  L12():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[q2, meanlog2, sdlog2, lower_tail2, log_p2];
    r2 = `.Call`(C_plnorm1, vargs, <missing>);
    goto L4(r2);
  }
}