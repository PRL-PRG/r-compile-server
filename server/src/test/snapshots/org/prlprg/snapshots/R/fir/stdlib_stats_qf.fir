fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3067045236;
    st qf = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3067045236(p, df1, df2, ncp, `lower.tail`, `log.p`) {
  (reg p:*, reg df1:*, reg df2:*, reg ncp:*, reg lower_tail:*, reg log_p:*) -+> V { var p:*, var df1:*, var df2:*, var ncp:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_qf:*, reg C_qf1:V, reg p1:*, reg p2:V, reg df3:*, reg df4:V, reg df5:*, reg df6:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg C_qnf:*, reg C_qnf1:V, reg p3:*, reg p4:V, reg df7:*, reg df8:V, reg df9:*, reg df10:V, reg ncp1:*, reg ncp2:V, reg lower_tail3:*, reg lower_tail4:V, reg log_p3:*, reg log_p4:V, reg vargs1:dots, reg r8:V |
    mkenv;
    st p = p;
    st df1 = df1;
    st df2 = df2;
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
    if guard2 then L18() else L19();
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
    C_qf = ld C_qf;
    check L11() else D0();
  L10():
    r3 = dyn base1(<sym C_qf>, <sym p>, <sym df1>, <sym df2>, <sym lower.tail>, <sym log.p>);
    goto L4(r3);
  L18():
    C_qnf = ld C_qnf;
    check L20() else D6();
  L19():
    r6 = dyn base2(<sym C_qnf>, <sym p>, <sym df1>, <sym df2>, <sym ncp>, <sym lower.tail>, <sym log.p>);
    goto L5(r6);
  D0():
    deopt 4 [C_qf];
  D6():
    deopt 13 [C_qnf];
  L11():
    C_qf1 = force? C_qf;
    checkMissing(C_qf1);
    p1 = ld p;
    check L12() else D1();
  L20():
    C_qnf1 = force? C_qnf;
    checkMissing(C_qnf1);
    p3 = ld p;
    check L21() else D7();
  D1():
    deopt 5 [C_qf1, p1];
  D7():
    deopt 14 [C_qnf1, p3];
  L12():
    p2 = force? p1;
    checkMissing(p2);
    df3 = ld df1;
    check L13() else D2();
  L21():
    p4 = force? p3;
    checkMissing(p4);
    df7 = ld df1;
    check L22() else D8();
  D2():
    deopt 6 [C_qf1, p2, df3];
  D8():
    deopt 15 [C_qnf1, p4, df7];
  L13():
    df4 = force? df3;
    checkMissing(df4);
    df5 = ld df2;
    check L14() else D3();
  L22():
    df8 = force? df7;
    checkMissing(df8);
    df9 = ld df2;
    check L23() else D9();
  D3():
    deopt 7 [C_qf1, p2, df4, df5];
  D9():
    deopt 16 [C_qnf1, p4, df8, df9];
  L14():
    df6 = force? df5;
    checkMissing(df6);
    lower_tail1 = ld `lower.tail`;
    check L15() else D4();
  L23():
    df10 = force? df9;
    checkMissing(df10);
    ncp1 = ld ncp;
    check L24() else D10();
  D4():
    deopt 8 [C_qf1, p2, df4, df6, lower_tail1];
  D10():
    deopt 17 [C_qnf1, p4, df8, df10, ncp1];
  L15():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L16() else D5();
  L24():
    ncp2 = force? ncp1;
    checkMissing(ncp2);
    lower_tail3 = ld `lower.tail`;
    check L25() else D11();
  D5():
    deopt 9 [C_qf1, p2, df4, df6, lower_tail2, log_p1];
  D11():
    deopt 18 [C_qnf1, p4, df8, df10, ncp2, lower_tail3];
  L16():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[p2, df4, df6, lower_tail2, log_p2];
    r5 = `.Call`(C_qf1, vargs, <missing>);
    goto L4(r5);
  L25():
    lower_tail4 = force? lower_tail3;
    checkMissing(lower_tail4);
    log_p3 = ld `log.p`;
    check L26() else D12();
  D12():
    deopt 19 [C_qnf1, p4, df8, df10, ncp2, lower_tail4, log_p3];
  L26():
    log_p4 = force? log_p3;
    checkMissing(log_p4);
    vargs1 = dots[p4, df8, df10, ncp2, lower_tail4, log_p4];
    r8 = `.Call`(C_qnf1, vargs1, <missing>);
    goto L5(r8);
  }
}