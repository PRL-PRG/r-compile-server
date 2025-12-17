fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1546063805;
    st qunif = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1546063805(p, min, max, `lower.tail`, `log.p`) {
  (reg p:*, reg min:*, reg max:*, reg lower_tail:*, reg log_p:*) -+> V { var p:*, var min:*, reg min_isMissing:L, reg min_orDefault:*, var max:*, reg max_isMissing:L, reg max_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_qunif:*, reg C_qunif1:V, reg p1:*, reg p2:V, reg min1:*, reg min2:V, reg max1:*, reg max2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st p = p;
    min_isMissing = missing.0(min);
    if min_isMissing then L0(0.0) else L0(min);
  L0(min_orDefault):
    st min = min_orDefault;
    max_isMissing = missing.0(max);
    if max_isMissing then L1(1.0) else L1(max);
  L1(max_orDefault):
    st max = max_orDefault;
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
    C_qunif = ld C_qunif;
    check L7() else D0();
  L6():
    r = dyn base(<sym C_qunif>, <sym p>, <sym min>, <sym max>, <sym lower.tail>, <sym log.p>);
    goto L4(r);
  D0():
    deopt 1 [C_qunif];
  L7():
    C_qunif1 = force? C_qunif;
    checkMissing(C_qunif1);
    p1 = ld p;
    check L8() else D1();
  D1():
    deopt 2 [C_qunif1, p1];
  L8():
    p2 = force? p1;
    checkMissing(p2);
    min1 = ld min;
    check L9() else D2();
  D2():
    deopt 3 [C_qunif1, p2, min1];
  L9():
    min2 = force? min1;
    checkMissing(min2);
    max1 = ld max;
    check L10() else D3();
  D3():
    deopt 4 [C_qunif1, p2, min2, max1];
  L10():
    max2 = force? max1;
    checkMissing(max2);
    lower_tail1 = ld `lower.tail`;
    check L11() else D4();
  D4():
    deopt 5 [C_qunif1, p2, min2, max2, lower_tail1];
  L11():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L12() else D5();
  D5():
    deopt 6 [C_qunif1, p2, min2, max2, lower_tail2, log_p1];
  L12():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[p2, min2, max2, lower_tail2, log_p2];
    r2 = `.Call`(C_qunif1, vargs, <missing>);
    goto L4(r2);
  }
}