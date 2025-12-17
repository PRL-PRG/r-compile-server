fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner27988425;
    st ptukey = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner27988425(q, nmeans, df, nranges, `lower.tail`, `log.p`) {
  (reg q:*, reg nmeans:*, reg df:*, reg nranges:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var nmeans:*, var df:*, var nranges:*, reg nranges_isMissing:L, reg nranges_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_ptukey:*, reg C_ptukey1:V, reg q1:*, reg q2:V, reg nranges1:*, reg nranges2:V, reg nmeans1:*, reg nmeans2:V, reg df1:*, reg df2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st q = q;
    st nmeans = nmeans;
    st df = df;
    nranges_isMissing = missing.0(nranges);
    if nranges_isMissing then L0(1.0) else L0(nranges);
  L0(nranges_orDefault):
    st nranges = nranges_orDefault;
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
    C_ptukey = ld C_ptukey;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_ptukey>, <sym q>, <sym nranges>, <sym nmeans>, <sym df>, <sym lower.tail>, <sym log.p>);
    goto L3(r);
  D0():
    deopt 1 [C_ptukey];
  L6():
    C_ptukey1 = force? C_ptukey;
    checkMissing(C_ptukey1);
    q1 = ld q;
    check L7() else D1();
  D1():
    deopt 2 [C_ptukey1, q1];
  L7():
    q2 = force? q1;
    checkMissing(q2);
    nranges1 = ld nranges;
    check L8() else D2();
  D2():
    deopt 3 [C_ptukey1, q2, nranges1];
  L8():
    nranges2 = force? nranges1;
    checkMissing(nranges2);
    nmeans1 = ld nmeans;
    check L9() else D3();
  D3():
    deopt 4 [C_ptukey1, q2, nranges2, nmeans1];
  L9():
    nmeans2 = force? nmeans1;
    checkMissing(nmeans2);
    df1 = ld df;
    check L10() else D4();
  D4():
    deopt 5 [C_ptukey1, q2, nranges2, nmeans2, df1];
  L10():
    df2 = force? df1;
    checkMissing(df2);
    lower_tail1 = ld `lower.tail`;
    check L11() else D5();
  D5():
    deopt 6 [C_ptukey1, q2, nranges2, nmeans2, df2, lower_tail1];
  L11():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L12() else D6();
  D6():
    deopt 7 [C_ptukey1, q2, nranges2, nmeans2, df2, lower_tail2, log_p1];
  L12():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[q2, nranges2, nmeans2, df2, lower_tail2, log_p2];
    r2 = `.Call`(C_ptukey1, vargs, <missing>);
    goto L3(r2);
  }
}