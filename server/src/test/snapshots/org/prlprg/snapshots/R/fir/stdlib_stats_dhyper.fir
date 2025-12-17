fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner472114676;
    st dhyper = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner472114676(x, m, n, k, log) {
  (reg x:*, reg m:*, reg n:*, reg k:*, reg log:*) -+> V { var x:*, var m:*, var n:*, var k:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_dhyper:*, reg C_dhyper1:V, reg x1:*, reg x2:V, reg m1:*, reg m2:V, reg n1:*, reg n2:V, reg k1:*, reg k2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    st m = m;
    st n = n;
    st k = k;
    log_isMissing = missing.0(log);
    if log_isMissing then L0(FALSE) else L0(log);
  L0(log_orDefault):
    st log = log_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    C_dhyper = ld C_dhyper;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_dhyper>, <sym x>, <sym m>, <sym n>, <sym k>, <sym log>);
    goto L1(r);
  D0():
    deopt 1 [C_dhyper];
  L4():
    C_dhyper1 = force? C_dhyper;
    checkMissing(C_dhyper1);
    x1 = ld x;
    check L5() else D1();
  D1():
    deopt 2 [C_dhyper1, x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    m1 = ld m;
    check L6() else D2();
  D2():
    deopt 3 [C_dhyper1, x2, m1];
  L6():
    m2 = force? m1;
    checkMissing(m2);
    n1 = ld n;
    check L7() else D3();
  D3():
    deopt 4 [C_dhyper1, x2, m2, n1];
  L7():
    n2 = force? n1;
    checkMissing(n2);
    k1 = ld k;
    check L8() else D4();
  D4():
    deopt 5 [C_dhyper1, x2, m2, n2, k1];
  L8():
    k2 = force? k1;
    checkMissing(k2);
    log1 = ld log;
    check L9() else D5();
  D5():
    deopt 6 [C_dhyper1, x2, m2, n2, k2, log1];
  L9():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, m2, n2, k2, log2];
    r2 = `.Call`(C_dhyper1, vargs, <missing>);
    goto L1(r2);
  }
}