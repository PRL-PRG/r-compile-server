fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3773335541;
    st pexp = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3773335541(q, rate, `lower.tail`, `log.p`) {
  (reg q:*, reg rate:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var rate:*, reg rate_isMissing:L, reg rate_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_pexp:*, reg C_pexp1:V, reg q1:*, reg q2:V, reg rate1:*, reg rate2:V, reg r2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r3:V |
    mkenv;
    st q = q;
    rate_isMissing = missing.0(rate);
    if rate_isMissing then L0(1.0) else L0(rate);
  L0(rate_orDefault):
    st rate = rate_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L1(TRUE) else L1(lower_tail);
  L1(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L2(FALSE) else L2(log_p);
  L2(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    C_pexp = ld C_pexp;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_pexp>, <sym q>, <lang `/`(1.0, rate)>, <sym lower.tail>, <sym log.p>);
    goto L3(r);
  D0():
    deopt 1 [C_pexp];
  L6():
    C_pexp1 = force? C_pexp;
    checkMissing(C_pexp1);
    q1 = ld q;
    check L7() else D1();
  D1():
    deopt 2 [C_pexp1, q1];
  L7():
    q2 = force? q1;
    checkMissing(q2);
    rate1 = ld rate;
    check L8() else D2();
  D2():
    deopt 4 [C_pexp1, q2, 1.0, rate1];
  L8():
    rate2 = force? rate1;
    checkMissing(rate2);
    r2 = `/`(1.0, rate2);
    lower_tail1 = ld `lower.tail`;
    check L9() else D3();
  D3():
    deopt 6 [C_pexp1, q2, r2, lower_tail1];
  L9():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L10() else D4();
  D4():
    deopt 7 [C_pexp1, q2, r2, lower_tail2, log_p1];
  L10():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[q2, r2, lower_tail2, log_p2];
    r3 = `.Call`(C_pexp1, vargs, <missing>);
    goto L3(r3);
  }
}