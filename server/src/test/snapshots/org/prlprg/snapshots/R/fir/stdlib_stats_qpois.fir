fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3058769989;
    st qpois = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3058769989(p, lambda, `lower.tail`, `log.p`) {
  (reg p:*, reg lambda:*, reg lower_tail:*, reg log_p:*) -+> V { var p:*, var lambda:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_qpois:*, reg C_qpois1:V, reg p1:*, reg p2:V, reg lambda1:*, reg lambda2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st p = p;
    st lambda = lambda;
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
    C_qpois = ld C_qpois;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_qpois>, <sym p>, <sym lambda>, <sym lower.tail>, <sym log.p>);
    goto L2(r);
  D0():
    deopt 1 [C_qpois];
  L5():
    C_qpois1 = force? C_qpois;
    checkMissing(C_qpois1);
    p1 = ld p;
    check L6() else D1();
  D1():
    deopt 2 [C_qpois1, p1];
  L6():
    p2 = force? p1;
    checkMissing(p2);
    lambda1 = ld lambda;
    check L7() else D2();
  D2():
    deopt 3 [C_qpois1, p2, lambda1];
  L7():
    lambda2 = force? lambda1;
    checkMissing(lambda2);
    lower_tail1 = ld `lower.tail`;
    check L8() else D3();
  D3():
    deopt 4 [C_qpois1, p2, lambda2, lower_tail1];
  L8():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L9() else D4();
  D4():
    deopt 5 [C_qpois1, p2, lambda2, lower_tail2, log_p1];
  L9():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[p2, lambda2, lower_tail2, log_p2];
    r2 = `.Call`(C_qpois1, vargs, <missing>);
    goto L2(r2);
  }
}