fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner924705428;
    st rexp = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner924705428(n, rate) {
  (reg n:*, reg rate:*) -+> V { var n:*, var rate:*, reg rate_isMissing:L, reg rate_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rexp:*, reg C_rexp1:V, reg n1:*, reg n2:V, reg rate1:*, reg rate2:V, reg r2:V, reg vargs:dots, reg r3:V |
    mkenv;
    st n = n;
    rate_isMissing = missing.0(rate);
    if rate_isMissing then L0(1.0) else L0(rate);
  L0(rate_orDefault):
    st rate = rate_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    C_rexp = ld C_rexp;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_rexp>, <sym n>, <lang `/`(1.0, rate)>);
    goto L1(r);
  D0():
    deopt 1 [C_rexp];
  L4():
    C_rexp1 = force? C_rexp;
    checkMissing(C_rexp1);
    n1 = ld n;
    check L5() else D1();
  D1():
    deopt 2 [C_rexp1, n1];
  L5():
    n2 = force? n1;
    checkMissing(n2);
    rate1 = ld rate;
    check L6() else D2();
  D2():
    deopt 4 [C_rexp1, n2, 1.0, rate1];
  L6():
    rate2 = force? rate1;
    checkMissing(rate2);
    r2 = `/`(1.0, rate2);
    vargs = dots[n2, r2];
    r3 = `.Call`(C_rexp1, vargs, <missing>);
    goto L1(r3);
  }
}