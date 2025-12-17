fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4120029555;
    st qnorm = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4120029555(p, mean, sd, `lower.tail`, `log.p`) {
  (reg p:*, reg mean:*, reg sd:*, reg lower_tail:*, reg log_p:*) -+> V { var p:*, var mean:*, reg mean_isMissing:L, reg mean_orDefault:*, var sd:*, reg sd_isMissing:L, reg sd_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_qnorm:*, reg C_qnorm1:V, reg p1:*, reg p2:V, reg mean1:*, reg mean2:V, reg sd1:*, reg sd2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st p = p;
    mean_isMissing = missing.0(mean);
    if mean_isMissing then L0(0.0) else L0(mean);
  L0(mean_orDefault):
    st mean = mean_orDefault;
    sd_isMissing = missing.0(sd);
    if sd_isMissing then L1(1.0) else L1(sd);
  L1(sd_orDefault):
    st sd = sd_orDefault;
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
    C_qnorm = ld C_qnorm;
    check L7() else D0();
  L6():
    r = dyn base(<sym C_qnorm>, <sym p>, <sym mean>, <sym sd>, <sym lower.tail>, <sym log.p>);
    goto L4(r);
  D0():
    deopt 1 [C_qnorm];
  L7():
    C_qnorm1 = force? C_qnorm;
    checkMissing(C_qnorm1);
    p1 = ld p;
    check L8() else D1();
  D1():
    deopt 2 [C_qnorm1, p1];
  L8():
    p2 = force? p1;
    checkMissing(p2);
    mean1 = ld mean;
    check L9() else D2();
  D2():
    deopt 3 [C_qnorm1, p2, mean1];
  L9():
    mean2 = force? mean1;
    checkMissing(mean2);
    sd1 = ld sd;
    check L10() else D3();
  D3():
    deopt 4 [C_qnorm1, p2, mean2, sd1];
  L10():
    sd2 = force? sd1;
    checkMissing(sd2);
    lower_tail1 = ld `lower.tail`;
    check L11() else D4();
  D4():
    deopt 5 [C_qnorm1, p2, mean2, sd2, lower_tail1];
  L11():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L12() else D5();
  D5():
    deopt 6 [C_qnorm1, p2, mean2, sd2, lower_tail2, log_p1];
  L12():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[p2, mean2, sd2, lower_tail2, log_p2];
    r2 = `.Call`(C_qnorm1, vargs, <missing>);
    goto L4(r2);
  }
}