fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2789031763;
    st qgeom = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2789031763(p, prob, `lower.tail`, `log.p`) {
  (reg p:*, reg prob:*, reg lower_tail:*, reg log_p:*) -+> V { var p:*, var prob:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_qgeom:*, reg C_qgeom1:V, reg p1:*, reg p2:V, reg prob1:*, reg prob2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st p = p;
    st prob = prob;
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
    C_qgeom = ld C_qgeom;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_qgeom>, <sym p>, <sym prob>, <sym lower.tail>, <sym log.p>);
    goto L2(r);
  D0():
    deopt 1 [C_qgeom];
  L5():
    C_qgeom1 = force? C_qgeom;
    checkMissing(C_qgeom1);
    p1 = ld p;
    check L6() else D1();
  D1():
    deopt 2 [C_qgeom1, p1];
  L6():
    p2 = force? p1;
    checkMissing(p2);
    prob1 = ld prob;
    check L7() else D2();
  D2():
    deopt 3 [C_qgeom1, p2, prob1];
  L7():
    prob2 = force? prob1;
    checkMissing(prob2);
    lower_tail1 = ld `lower.tail`;
    check L8() else D3();
  D3():
    deopt 4 [C_qgeom1, p2, prob2, lower_tail1];
  L8():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L9() else D4();
  D4():
    deopt 5 [C_qgeom1, p2, prob2, lower_tail2, log_p1];
  L9():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[p2, prob2, lower_tail2, log_p2];
    r2 = `.Call`(C_qgeom1, vargs, <missing>);
    goto L2(r2);
  }
}