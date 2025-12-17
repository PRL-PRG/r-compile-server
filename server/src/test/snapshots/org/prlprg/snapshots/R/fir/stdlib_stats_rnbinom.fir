fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3802341508;
    st rnbinom = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3802341508(n, size, prob, mu) {
  (reg n:*, reg size:*, reg prob:*, reg mu:*) -+> V { var n:*, var size:*, var prob:*, var mu:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing1:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg C_rnbinom_mu:*, reg C_rnbinom_mu1:V, reg n1:*, reg n2:V, reg size1:*, reg size2:V, reg mu1:*, reg mu2:V, reg vargs:dots, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg C_rnbinom:*, reg C_rnbinom1:V, reg n3:*, reg n4:V, reg size3:*, reg size4:V, reg prob1:*, reg prob2:V, reg vargs1:dots, reg r15:V |
    mkenv;
    st n = n;
    st size = size;
    st prob = prob;
    st mu = mu;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L9() else L1();
  L7():
    missing = ldf missing in base;
    r2 = dyn missing(<sym mu>);
    goto L0(r2);
  L8():
    r = dyn base(<sym mu>);
    goto L0(r);
  L1():
    sym3 = ldf `.Call`;
    base3 = ldf `.Call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L9():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(r5):
    r7 = `!`(r5);
    c1 = `as.logical`(r7);
    if c1 then L12() else L3();
  L6(r14):
    popenv;
    return r14;
  L10():
    missing1 = ldf missing in base;
    r6 = dyn missing1(<sym prob>);
    goto L2(r6);
  L11():
    r4 = dyn base1(<sym prob>);
    goto L2(r4);
  L23():
    C_rnbinom = ld C_rnbinom;
    check L25() else D6();
  L24():
    r13 = dyn base3(<sym C_rnbinom>, <sym n>, <sym size>, <sym prob>);
    goto L6(r13);
  D6():
    deopt 22 [C_rnbinom];
  L3():
    goto L4();
  L4():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L12():
    stop = ldf stop;
    check L13() else D0();
  L25():
    C_rnbinom1 = force? C_rnbinom;
    checkMissing(C_rnbinom1);
    n3 = ld n;
    check L26() else D7();
  D0():
    deopt 9 [];
  D7():
    deopt 23 [C_rnbinom1, n3];
  L5(r11):
    popenv;
    return r11;
  L13():
    r8 = dyn stop("'prob' and 'mu' both specified");
    check L14() else D1();
  L16():
    C_rnbinom_mu = ld C_rnbinom_mu;
    check L18() else D2();
  L17():
    r10 = dyn base2(<sym C_rnbinom_mu>, <sym n>, <sym size>, <sym mu>);
    goto L5(r10);
  L26():
    n4 = force? n3;
    checkMissing(n4);
    size3 = ld size;
    check L27() else D8();
  D1():
    deopt 11 [r8];
  D2():
    deopt 15 [C_rnbinom_mu];
  D8():
    deopt 24 [C_rnbinom1, n4, size3];
  L14():
    goto L4();
  L18():
    C_rnbinom_mu1 = force? C_rnbinom_mu;
    checkMissing(C_rnbinom_mu1);
    n1 = ld n;
    check L19() else D3();
  L27():
    size4 = force? size3;
    checkMissing(size4);
    prob1 = ld prob;
    check L28() else D9();
  D3():
    deopt 16 [C_rnbinom_mu1, n1];
  D9():
    deopt 25 [C_rnbinom1, n4, size4, prob1];
  L19():
    n2 = force? n1;
    checkMissing(n2);
    size1 = ld size;
    check L20() else D4();
  L28():
    prob2 = force? prob1;
    checkMissing(prob2);
    vargs1 = dots[n4, size4, prob2];
    r15 = `.Call`(C_rnbinom1, vargs1, <missing>);
    goto L6(r15);
  D4():
    deopt 17 [C_rnbinom_mu1, n2, size1];
  L20():
    size2 = force? size1;
    checkMissing(size2);
    mu1 = ld mu;
    check L21() else D5();
  D5():
    deopt 18 [C_rnbinom_mu1, n2, size2, mu1];
  L21():
    mu2 = force? mu1;
    checkMissing(mu2);
    vargs = dots[n2, size2, mu2];
    r12 = `.Call`(C_rnbinom_mu1, vargs, <missing>);
    goto L5(r12);
  }
}