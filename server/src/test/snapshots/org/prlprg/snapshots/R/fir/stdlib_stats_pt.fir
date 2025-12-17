fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2468554270;
    st pt = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2468554270(q, df, ncp, `lower.tail`, `log.p`) {
  (reg q:*, reg df:*, reg ncp:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var df:*, var ncp:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_pt:*, reg C_pt1:V, reg q1:*, reg q2:V, reg df1:*, reg df2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg C_pnt:*, reg C_pnt1:V, reg q3:*, reg q4:V, reg df3:*, reg df4:V, reg ncp1:*, reg ncp2:V, reg lower_tail3:*, reg lower_tail4:V, reg log_p3:*, reg log_p4:V, reg vargs1:dots, reg r8:V |
    mkenv;
    st q = q;
    st df = df;
    st ncp = ncp;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L0(TRUE) else L0(lower_tail);
  L0(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L1(FALSE) else L1(log_p);
  L1(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r1):
    c = `as.logical`(r1);
    if c then L8() else L3();
  L6():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ncp>);
    goto L2(r2);
  L7():
    r = dyn base(<sym ncp>);
    goto L2(r);
  L3():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L8():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L4(r4):
    popenv;
    return r4;
  L5(r7):
    popenv;
    return r7;
  L9():
    C_pt = ld C_pt;
    check L11() else D0();
  L10():
    r3 = dyn base1(<sym C_pt>, <sym q>, <sym df>, <sym lower.tail>, <sym log.p>);
    goto L4(r3);
  L17():
    C_pnt = ld C_pnt;
    check L19() else D5();
  L18():
    r6 = dyn base2(<sym C_pnt>, <sym q>, <sym df>, <sym ncp>, <sym lower.tail>, <sym log.p>);
    goto L5(r6);
  D0():
    deopt 4 [C_pt];
  D5():
    deopt 12 [C_pnt];
  L11():
    C_pt1 = force? C_pt;
    checkMissing(C_pt1);
    q1 = ld q;
    check L12() else D1();
  L19():
    C_pnt1 = force? C_pnt;
    checkMissing(C_pnt1);
    q3 = ld q;
    check L20() else D6();
  D1():
    deopt 5 [C_pt1, q1];
  D6():
    deopt 13 [C_pnt1, q3];
  L12():
    q2 = force? q1;
    checkMissing(q2);
    df1 = ld df;
    check L13() else D2();
  L20():
    q4 = force? q3;
    checkMissing(q4);
    df3 = ld df;
    check L21() else D7();
  D2():
    deopt 6 [C_pt1, q2, df1];
  D7():
    deopt 14 [C_pnt1, q4, df3];
  L13():
    df2 = force? df1;
    checkMissing(df2);
    lower_tail1 = ld `lower.tail`;
    check L14() else D3();
  L21():
    df4 = force? df3;
    checkMissing(df4);
    ncp1 = ld ncp;
    check L22() else D8();
  D3():
    deopt 7 [C_pt1, q2, df2, lower_tail1];
  D8():
    deopt 15 [C_pnt1, q4, df4, ncp1];
  L14():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L15() else D4();
  L22():
    ncp2 = force? ncp1;
    checkMissing(ncp2);
    lower_tail3 = ld `lower.tail`;
    check L23() else D9();
  D4():
    deopt 8 [C_pt1, q2, df2, lower_tail2, log_p1];
  D9():
    deopt 16 [C_pnt1, q4, df4, ncp2, lower_tail3];
  L15():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[q2, df2, lower_tail2, log_p2];
    r5 = `.Call`(C_pt1, vargs, <missing>);
    goto L4(r5);
  L23():
    lower_tail4 = force? lower_tail3;
    checkMissing(lower_tail4);
    log_p3 = ld `log.p`;
    check L24() else D10();
  D10():
    deopt 17 [C_pnt1, q4, df4, ncp2, lower_tail4, log_p3];
  L24():
    log_p4 = force? log_p3;
    checkMissing(log_p4);
    vargs1 = dots[q4, df4, ncp2, lower_tail4, log_p4];
    r8 = `.Call`(C_pnt1, vargs1, <missing>);
    goto L5(r8);
  }
}