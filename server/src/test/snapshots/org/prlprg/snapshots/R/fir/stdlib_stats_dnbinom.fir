fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2866122244;
    st dnbinom = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2866122244(x, size, prob, mu, log) {
  (reg x:*, reg size:*, reg prob:*, reg mu:*, reg log:*) -+> V { var x:*, var size:*, var prob:*, var mu:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing1:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg C_dnbinom_mu:*, reg C_dnbinom_mu1:V, reg x1:*, reg x2:V, reg size1:*, reg size2:V, reg mu1:*, reg mu2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg C_dnbinom:*, reg C_dnbinom1:V, reg x3:*, reg x4:V, reg size3:*, reg size4:V, reg prob1:*, reg prob2:V, reg log3:*, reg log4:V, reg vargs1:dots, reg r15:V |
    mkenv;
    st x = x;
    st size = size;
    st prob = prob;
    st mu = mu;
    log_isMissing = missing.0(log);
    if log_isMissing then L0(FALSE) else L0(log);
  L0(log_orDefault):
    st log = log_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L10() else L2();
  L8():
    missing = ldf missing in base;
    r2 = dyn missing(<sym mu>);
    goto L1(r2);
  L9():
    r = dyn base(<sym mu>);
    goto L1(r);
  L2():
    sym3 = ldf `.Call`;
    base3 = ldf `.Call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L10():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L3(r5):
    r7 = `!`(r5);
    c1 = `as.logical`(r7);
    if c1 then L13() else L4();
  L7(r14):
    popenv;
    return r14;
  L11():
    missing1 = ldf missing in base;
    r6 = dyn missing1(<sym prob>);
    goto L3(r6);
  L12():
    r4 = dyn base1(<sym prob>);
    goto L3(r4);
  L25():
    C_dnbinom = ld C_dnbinom;
    check L27() else D7();
  L26():
    r13 = dyn base3(<sym C_dnbinom>, <sym x>, <sym size>, <sym prob>, <sym log>);
    goto L7(r13);
  D7():
    deopt 23 [C_dnbinom];
  L4():
    goto L5();
  L5():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L13():
    stop = ldf stop;
    check L14() else D0();
  L27():
    C_dnbinom1 = force? C_dnbinom;
    checkMissing(C_dnbinom1);
    x3 = ld x;
    check L28() else D8();
  D0():
    deopt 9 [];
  D8():
    deopt 24 [C_dnbinom1, x3];
  L6(r11):
    popenv;
    return r11;
  L14():
    r8 = dyn stop("'prob' and 'mu' both specified");
    check L15() else D1();
  L17():
    C_dnbinom_mu = ld C_dnbinom_mu;
    check L19() else D2();
  L18():
    r10 = dyn base2(<sym C_dnbinom_mu>, <sym x>, <sym size>, <sym mu>, <sym log>);
    goto L6(r10);
  L28():
    x4 = force? x3;
    checkMissing(x4);
    size3 = ld size;
    check L29() else D9();
  D1():
    deopt 11 [r8];
  D2():
    deopt 15 [C_dnbinom_mu];
  D9():
    deopt 25 [C_dnbinom1, x4, size3];
  L15():
    goto L5();
  L19():
    C_dnbinom_mu1 = force? C_dnbinom_mu;
    checkMissing(C_dnbinom_mu1);
    x1 = ld x;
    check L20() else D3();
  L29():
    size4 = force? size3;
    checkMissing(size4);
    prob1 = ld prob;
    check L30() else D10();
  D3():
    deopt 16 [C_dnbinom_mu1, x1];
  D10():
    deopt 26 [C_dnbinom1, x4, size4, prob1];
  L20():
    x2 = force? x1;
    checkMissing(x2);
    size1 = ld size;
    check L21() else D4();
  L30():
    prob2 = force? prob1;
    checkMissing(prob2);
    log3 = ld log;
    check L31() else D11();
  D4():
    deopt 17 [C_dnbinom_mu1, x2, size1];
  D11():
    deopt 27 [C_dnbinom1, x4, size4, prob2, log3];
  L21():
    size2 = force? size1;
    checkMissing(size2);
    mu1 = ld mu;
    check L22() else D5();
  L31():
    log4 = force? log3;
    checkMissing(log4);
    vargs1 = dots[x4, size4, prob2, log4];
    r15 = `.Call`(C_dnbinom1, vargs1, <missing>);
    goto L7(r15);
  D5():
    deopt 18 [C_dnbinom_mu1, x2, size2, mu1];
  L22():
    mu2 = force? mu1;
    checkMissing(mu2);
    log1 = ld log;
    check L23() else D6();
  D6():
    deopt 19 [C_dnbinom_mu1, x2, size2, mu2, log1];
  L23():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, size2, mu2, log2];
    r12 = `.Call`(C_dnbinom_mu1, vargs, <missing>);
    goto L6(r12);
  }
}