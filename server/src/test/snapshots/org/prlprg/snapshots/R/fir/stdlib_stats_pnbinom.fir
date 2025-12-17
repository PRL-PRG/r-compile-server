fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3440223141;
    st pnbinom = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3440223141(q, size, prob, mu, `lower.tail`, `log.p`) {
  (reg q:*, reg size:*, reg prob:*, reg mu:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var size:*, var prob:*, var mu:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing1:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg C_pnbinom_mu:*, reg C_pnbinom_mu1:V, reg q1:*, reg q2:V, reg size1:*, reg size2:V, reg mu1:*, reg mu2:V, reg lower_tail1:*, reg lower_tail2:V, reg log_p1:*, reg log_p2:V, reg vargs:dots, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg C_pnbinom:*, reg C_pnbinom1:V, reg q3:*, reg q4:V, reg size3:*, reg size4:V, reg prob1:*, reg prob2:V, reg lower_tail3:*, reg lower_tail4:V, reg log_p3:*, reg log_p4:V, reg vargs1:dots, reg r15:V |
    mkenv;
    st q = q;
    st size = size;
    st prob = prob;
    st mu = mu;
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
    if guard then L9() else L10();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L11() else L3();
  L9():
    missing = ldf missing in base;
    r2 = dyn missing(<sym mu>);
    goto L2(r2);
  L10():
    r = dyn base(<sym mu>);
    goto L2(r);
  L3():
    sym3 = ldf `.Call`;
    base3 = ldf `.Call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L11():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L4(r5):
    r7 = `!`(r5);
    c1 = `as.logical`(r7);
    if c1 then L14() else L5();
  L8(r14):
    popenv;
    return r14;
  L12():
    missing1 = ldf missing in base;
    r6 = dyn missing1(<sym prob>);
    goto L4(r6);
  L13():
    r4 = dyn base1(<sym prob>);
    goto L4(r4);
  L27():
    C_pnbinom = ld C_pnbinom;
    check L29() else D8();
  L28():
    r13 = dyn base3(<sym C_pnbinom>, <sym q>, <sym size>, <sym prob>, <sym lower.tail>, <sym log.p>);
    goto L8(r13);
  D8():
    deopt 24 [C_pnbinom];
  L5():
    goto L6();
  L6():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L14():
    stop = ldf stop;
    check L15() else D0();
  L29():
    C_pnbinom1 = force? C_pnbinom;
    checkMissing(C_pnbinom1);
    q3 = ld q;
    check L30() else D9();
  D0():
    deopt 9 [];
  D9():
    deopt 25 [C_pnbinom1, q3];
  L7(r11):
    popenv;
    return r11;
  L15():
    r8 = dyn stop("'prob' and 'mu' both specified");
    check L16() else D1();
  L18():
    C_pnbinom_mu = ld C_pnbinom_mu;
    check L20() else D2();
  L19():
    r10 = dyn base2(<sym C_pnbinom_mu>, <sym q>, <sym size>, <sym mu>, <sym lower.tail>, <sym log.p>);
    goto L7(r10);
  L30():
    q4 = force? q3;
    checkMissing(q4);
    size3 = ld size;
    check L31() else D10();
  D1():
    deopt 11 [r8];
  D2():
    deopt 15 [C_pnbinom_mu];
  D10():
    deopt 26 [C_pnbinom1, q4, size3];
  L16():
    goto L6();
  L20():
    C_pnbinom_mu1 = force? C_pnbinom_mu;
    checkMissing(C_pnbinom_mu1);
    q1 = ld q;
    check L21() else D3();
  L31():
    size4 = force? size3;
    checkMissing(size4);
    prob1 = ld prob;
    check L32() else D11();
  D3():
    deopt 16 [C_pnbinom_mu1, q1];
  D11():
    deopt 27 [C_pnbinom1, q4, size4, prob1];
  L21():
    q2 = force? q1;
    checkMissing(q2);
    size1 = ld size;
    check L22() else D4();
  L32():
    prob2 = force? prob1;
    checkMissing(prob2);
    lower_tail3 = ld `lower.tail`;
    check L33() else D12();
  D4():
    deopt 17 [C_pnbinom_mu1, q2, size1];
  D12():
    deopt 28 [C_pnbinom1, q4, size4, prob2, lower_tail3];
  L22():
    size2 = force? size1;
    checkMissing(size2);
    mu1 = ld mu;
    check L23() else D5();
  L33():
    lower_tail4 = force? lower_tail3;
    checkMissing(lower_tail4);
    log_p3 = ld `log.p`;
    check L34() else D13();
  D5():
    deopt 18 [C_pnbinom_mu1, q2, size2, mu1];
  D13():
    deopt 29 [C_pnbinom1, q4, size4, prob2, lower_tail4, log_p3];
  L23():
    mu2 = force? mu1;
    checkMissing(mu2);
    lower_tail1 = ld `lower.tail`;
    check L24() else D6();
  L34():
    log_p4 = force? log_p3;
    checkMissing(log_p4);
    vargs1 = dots[q4, size4, prob2, lower_tail4, log_p4];
    r15 = `.Call`(C_pnbinom1, vargs1, <missing>);
    goto L8(r15);
  D6():
    deopt 19 [C_pnbinom_mu1, q2, size2, mu2, lower_tail1];
  L24():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    log_p1 = ld `log.p`;
    check L25() else D7();
  D7():
    deopt 20 [C_pnbinom_mu1, q2, size2, mu2, lower_tail2, log_p1];
  L25():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    vargs = dots[q2, size2, mu2, lower_tail2, log_p2];
    r12 = `.Call`(C_pnbinom_mu1, vargs, <missing>);
    goto L7(r12);
  }
}