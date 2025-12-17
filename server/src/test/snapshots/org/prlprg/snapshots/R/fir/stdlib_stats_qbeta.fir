fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2764574881;
    st qbeta = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2764574881(p, shape1, shape2, ncp, `lower.tail`, `log.p`) {
  (reg p:*, reg shape1:*, reg shape2:*, reg ncp:*, reg lower_tail:*, reg log_p:*) -+> V { var p:*, var shape1:*, var shape2:*, var ncp:*, reg ncp_isMissing:L, reg ncp_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_qbeta:*, reg C_qbeta1:V, reg p1:*, reg p2:V, reg shape3:*, reg shape4:V, reg shape5:*, reg shape6:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg C_qnbeta:*, reg C_qnbeta1:V, reg p3:*, reg p4:V, reg shape7:*, reg shape8:V, reg shape9:*, reg shape10:V, reg ncp1:*, reg ncp2:V, reg lower_tail3:*, reg lower_tail4:V, reg log_p3:*, reg log_p4:V, reg vargs1:dots, reg r8:V |
    mkenv;
    st p = p;
    st shape1 = shape1;
    st shape2 = shape2;
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
    if guard2 then L19() else L20();
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
    C_qbeta = ld C_qbeta;
    check L12() else D0();
  L11():
    r3 = dyn base1(<sym C_qbeta>, <sym p>, <sym shape1>, <sym shape2>, <sym lower.tail>, <sym log.p>);
    goto L5(r3);
  L19():
    C_qnbeta = ld C_qnbeta;
    check L21() else D6();
  L20():
    r6 = dyn base2(<sym C_qnbeta>, <sym p>, <sym shape1>, <sym shape2>, <sym ncp>, <sym lower.tail>, <sym log.p>);
    goto L6(r6);
  D0():
    deopt 4 [C_qbeta];
  D6():
    deopt 13 [C_qnbeta];
  L12():
    C_qbeta1 = force? C_qbeta;
    checkMissing(C_qbeta1);
    p1 = ld p;
    check L13() else D1();
  L21():
    C_qnbeta1 = force? C_qnbeta;
    checkMissing(C_qnbeta1);
    p3 = ld p;
    check L22() else D7();
  D1():
    deopt 5 [C_qbeta1, p1];
  D7():
    deopt 14 [C_qnbeta1, p3];
  L13():
    p2 = force? p1;
    checkMissing(p2);
    shape3 = ld shape1;
    check L14() else D2();
  L22():
    p4 = force? p3;
    checkMissing(p4);
    shape7 = ld shape1;
    check L23() else D8();
  D2():
    deopt 6 [C_qbeta1, p2, shape3];
  D8():
    deopt 15 [C_qnbeta1, p4, shape7];
  L14():
    shape4 = force? shape3;
    checkMissing(shape4);
    shape5 = ld shape2;
    check L15() else D3();
  L23():
    shape8 = force? shape7;
    checkMissing(shape8);
    shape9 = ld shape2;
    check L24() else D9();
  D3():
    deopt 7 [C_qbeta1, p2, shape4, shape5];
  D9():
    deopt 16 [C_qnbeta1, p4, shape8, shape9];
  L15():
    shape6 = force? shape5;
    checkMissing(shape6);
    lower_tail1 = ld `lower.tail`;
    check L16() else D4();
  L24():
    shape10 = force? shape9;
    checkMissing(shape10);
    ncp1 = ld ncp;
    check L25() else D10();
  D4():
    deopt 8 [C_qbeta1, p2, shape4, shape6, lower_tail1];
  D10():
    deopt 17 [C_qnbeta1, p4, shape8, shape10, ncp1];
  L16():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L17() else D5();
  L25():
    ncp2 = force? ncp1;
    checkMissing(ncp2);
    lower_tail3 = ld `lower.tail`;
    check L26() else D11();
  D5():
    deopt 9 [C_qbeta1, p2, shape4, shape6, lower_tail2, log_p1];
  D11():
    deopt 18 [C_qnbeta1, p4, shape8, shape10, ncp2, lower_tail3];
  L17():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[p2, shape4, shape6, lower_tail2, log_p2];
    r5 = `.Call`(C_qbeta1, vargs, <missing>);
    goto L5(r5);
  L26():
    lower_tail4 = force? lower_tail3;
    checkMissing(lower_tail4);
    log_p3 = ld `log.p`;
    check L27() else D12();
  D12():
    deopt 19 [C_qnbeta1, p4, shape8, shape10, ncp2, lower_tail4, log_p3];
  L27():
    log_p4 = force? log_p3;
    checkMissing(log_p4);
    vargs1 = dots[p4, shape8, shape10, ncp2, lower_tail4, log_p4];
    r8 = `.Call`(C_qnbeta1, vargs1, <missing>);
    goto L6(r8);
  }
}