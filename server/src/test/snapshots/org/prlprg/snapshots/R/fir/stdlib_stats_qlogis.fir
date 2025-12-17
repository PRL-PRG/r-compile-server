fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4034522492;
    st qlogis = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4034522492(p, location, scale, `lower.tail`, `log.p`) {
  (reg p:*, reg location:*, reg scale:*, reg lower_tail:*, reg log_p:*) -+> V { var p:*, var location:*, reg location_isMissing:L, reg location_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_qlogis:*, reg C_qlogis1:V, reg p1:*, reg p2:V, reg location1:*, reg location2:V, reg scale1:*, reg scale2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st p = p;
    location_isMissing = missing.0(location);
    if location_isMissing then L0(0.0) else L0(location);
  L0(location_orDefault):
    st location = location_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L1(1.0) else L1(scale);
  L1(scale_orDefault):
    st scale = scale_orDefault;
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
    C_qlogis = ld C_qlogis;
    check L7() else D0();
  L6():
    r = dyn base(<sym C_qlogis>, <sym p>, <sym location>, <sym scale>, <sym lower.tail>, <sym log.p>);
    goto L4(r);
  D0():
    deopt 1 [C_qlogis];
  L7():
    C_qlogis1 = force? C_qlogis;
    checkMissing(C_qlogis1);
    p1 = ld p;
    check L8() else D1();
  D1():
    deopt 2 [C_qlogis1, p1];
  L8():
    p2 = force? p1;
    checkMissing(p2);
    location1 = ld location;
    check L9() else D2();
  D2():
    deopt 3 [C_qlogis1, p2, location1];
  L9():
    location2 = force? location1;
    checkMissing(location2);
    scale1 = ld scale;
    check L10() else D3();
  D3():
    deopt 4 [C_qlogis1, p2, location2, scale1];
  L10():
    scale2 = force? scale1;
    checkMissing(scale2);
    lower_tail1 = ld `lower.tail`;
    check L11() else D4();
  D4():
    deopt 5 [C_qlogis1, p2, location2, scale2, lower_tail1];
  L11():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L12() else D5();
  D5():
    deopt 6 [C_qlogis1, p2, location2, scale2, lower_tail2, log_p1];
  L12():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[p2, location2, scale2, lower_tail2, log_p2];
    r2 = `.Call`(C_qlogis1, vargs, <missing>);
    goto L4(r2);
  }
}