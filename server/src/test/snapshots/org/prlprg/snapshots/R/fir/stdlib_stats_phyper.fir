fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2497288931;
    st phyper = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2497288931(q, m, n, k, `lower.tail`, `log.p`) {
  (reg q:*, reg m:*, reg n:*, reg k:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var m:*, var n:*, var k:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_phyper:*, reg C_phyper1:V, reg q1:*, reg q2:V, reg m1:*, reg m2:V, reg n1:*, reg n2:V, reg k1:*, reg k2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st q = q;
    st m = m;
    st n = n;
    st k = k;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L0(TRUE) else L0(lower_tail);
  L0(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L1(FALSE) else L1(log_p);
  L1(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    C_phyper = ld C_phyper;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_phyper>, <sym q>, <sym m>, <sym n>, <sym k>, <sym lower.tail>, <sym log.p>);
    goto L2(r);
  D0():
    deopt 1 [C_phyper];
  L5():
    C_phyper1 = force? C_phyper;
    checkMissing(C_phyper1);
    q1 = ld q;
    check L6() else D1();
  D1():
    deopt 2 [C_phyper1, q1];
  L6():
    q2 = force? q1;
    checkMissing(q2);
    m1 = ld m;
    check L7() else D2();
  D2():
    deopt 3 [C_phyper1, q2, m1];
  L7():
    m2 = force? m1;
    checkMissing(m2);
    n1 = ld n;
    check L8() else D3();
  D3():
    deopt 4 [C_phyper1, q2, m2, n1];
  L8():
    n2 = force? n1;
    checkMissing(n2);
    k1 = ld k;
    check L9() else D4();
  D4():
    deopt 5 [C_phyper1, q2, m2, n2, k1];
  L9():
    k2 = force? k1;
    checkMissing(k2);
    lower_tail1 = ld `lower.tail`;
    check L10() else D5();
  D5():
    deopt 6 [C_phyper1, q2, m2, n2, k2, lower_tail1];
  L10():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L11() else D6();
  D6():
    deopt 7 [C_phyper1, q2, m2, n2, k2, lower_tail2, log_p1];
  L11():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[q2, m2, n2, k2, lower_tail2, log_p2];
    r2 = `.Call`(C_phyper1, vargs, <missing>);
    goto L2(r2);
  }
}