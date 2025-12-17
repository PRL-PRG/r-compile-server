fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner373277235;
    st pchisq = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner373277235(q, df, ncp, `lower.tail`, `log.p`) {
  (reg q:*, reg df:*, reg ncp:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var df:*, var ncp:*, reg ncp_isMissing:L, reg ncp_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_pchisq:*, reg C_pchisq1:V, reg q1:*, reg q2:V, reg df1:*, reg df2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg C_pnchisq:*, reg C_pnchisq1:V, reg q3:*, reg q4:V, reg df3:*, reg df4:V, reg ncp1:*, reg ncp2:V, reg lower_tail3:*, reg lower_tail4:V, reg log_p3:*, reg log_p4:V, reg vargs1:dots, reg r8:V |
    mkenv;
    st q = q;
    st df = df;
    ncp_isMissing = missing.0(ncp);
    if ncp_isMissing then L0(0.0) else L0(ncp);
  L0(ncp_orDefault):
    st ncp = ncp_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L1(TRUE) else L1(lower_tail);
  L1(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L2(FALSE) else L2(log_p);
  L2(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3(r1):
    c = `as.logical`(r1);
    if c then L9() else L4();
  L7():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ncp>);
    goto L3(r2);
  L8():
    r = dyn base(<sym ncp>);
    goto L3(r);
  L4():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L9():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L5(r4):
    popenv;
    return r4;
  L6(r7):
    popenv;
    return r7;
  L10():
    C_pchisq = ld C_pchisq;
    check L12() else D0();
  L11():
    r3 = dyn base1(<sym C_pchisq>, <sym q>, <sym df>, <sym lower.tail>, <sym log.p>);
    goto L5(r3);
  L18():
    C_pnchisq = ld C_pnchisq;
    check L20() else D5();
  L19():
    r6 = dyn base2(<sym C_pnchisq>, <sym q>, <sym df>, <sym ncp>, <sym lower.tail>, <sym log.p>);
    goto L6(r6);
  D0():
    deopt 4 [C_pchisq];
  D5():
    deopt 12 [C_pnchisq];
  L12():
    C_pchisq1 = force? C_pchisq;
    checkMissing(C_pchisq1);
    q1 = ld q;
    check L13() else D1();
  L20():
    C_pnchisq1 = force? C_pnchisq;
    checkMissing(C_pnchisq1);
    q3 = ld q;
    check L21() else D6();
  D1():
    deopt 5 [C_pchisq1, q1];
  D6():
    deopt 13 [C_pnchisq1, q3];
  L13():
    q2 = force? q1;
    checkMissing(q2);
    df1 = ld df;
    check L14() else D2();
  L21():
    q4 = force? q3;
    checkMissing(q4);
    df3 = ld df;
    check L22() else D7();
  D2():
    deopt 6 [C_pchisq1, q2, df1];
  D7():
    deopt 14 [C_pnchisq1, q4, df3];
  L14():
    df2 = force? df1;
    checkMissing(df2);
    lower_tail1 = ld `lower.tail`;
    check L15() else D3();
  L22():
    df4 = force? df3;
    checkMissing(df4);
    ncp1 = ld ncp;
    check L23() else D8();
  D3():
    deopt 7 [C_pchisq1, q2, df2, lower_tail1];
  D8():
    deopt 15 [C_pnchisq1, q4, df4, ncp1];
  L15():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L16() else D4();
  L23():
    ncp2 = force? ncp1;
    checkMissing(ncp2);
    lower_tail3 = ld `lower.tail`;
    check L24() else D9();
  D4():
    deopt 8 [C_pchisq1, q2, df2, lower_tail2, log_p1];
  D9():
    deopt 16 [C_pnchisq1, q4, df4, ncp2, lower_tail3];
  L16():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[q2, df2, lower_tail2, log_p2];
    r5 = `.Call`(C_pchisq1, vargs, <missing>);
    goto L5(r5);
  L24():
    lower_tail4 = force? lower_tail3;
    checkMissing(lower_tail4);
    log_p3 = ld `log.p`;
    check L25() else D10();
  D10():
    deopt 17 [C_pnchisq1, q4, df4, ncp2, lower_tail4, log_p3];
  L25():
    log_p4 = force? log_p3;
    checkMissing(log_p4);
    vargs1 = dots[q4, df4, ncp2, lower_tail4, log_p4];
    r8 = `.Call`(C_pnchisq1, vargs1, <missing>);
    goto L6(r8);
  }
}