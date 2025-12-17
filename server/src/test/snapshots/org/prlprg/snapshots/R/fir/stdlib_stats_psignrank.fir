fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner685017767;
    st psignrank = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner685017767(q, n, `lower.tail`, `log.p`) {
  (reg q:*, reg n:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var n:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg on_exit:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_psignrank:*, reg C_psignrank1:V, reg q1:*, reg q2:V, reg n1:*, reg n2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r5:V |
    mkenv;
    st q = q;
    st n = n;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L0(TRUE) else L0(lower_tail);
  L0(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L1(FALSE) else L1(log_p);
  L1(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L4():
    on_exit = ldf `on.exit` in base;
    r2 = dyn on_exit(<lang .External(C_signrank_free)>);
    goto L2();
  L5():
    r = dyn base(<lang .External(C_signrank_free)>);
    goto L2();
  L3(r4):
    popenv;
    return r4;
  L6():
    C_psignrank = ld C_psignrank;
    check L8() else D0();
  L7():
    r3 = dyn base1(<sym C_psignrank>, <sym q>, <sym n>, <sym lower.tail>, <sym log.p>);
    goto L3(r3);
  D0():
    deopt 4 [C_psignrank];
  L8():
    C_psignrank1 = force? C_psignrank;
    checkMissing(C_psignrank1);
    q1 = ld q;
    check L9() else D1();
  D1():
    deopt 5 [C_psignrank1, q1];
  L9():
    q2 = force? q1;
    checkMissing(q2);
    n1 = ld n;
    check L10() else D2();
  D2():
    deopt 6 [C_psignrank1, q2, n1];
  L10():
    n2 = force? n1;
    checkMissing(n2);
    lower_tail1 = ld `lower.tail`;
    check L11() else D3();
  D3():
    deopt 7 [C_psignrank1, q2, n2, lower_tail1];
  L11():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L12() else D4();
  D4():
    deopt 8 [C_psignrank1, q2, n2, lower_tail2, log_p1];
  L12():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[q2, n2, lower_tail2, log_p2];
    r5 = `.Call`(C_psignrank1, vargs, <missing>);
    goto L3(r5);
  }
}