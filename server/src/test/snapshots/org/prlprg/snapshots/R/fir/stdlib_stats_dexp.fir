fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3563717236;
    st dexp = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3563717236(x, rate, log) {
  (reg x:*, reg rate:*, reg log:*) -+> V { var x:*, var rate:*, reg rate_isMissing:L, reg rate_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_dexp:*, reg C_dexp1:V, reg x1:*, reg x2:V, reg rate1:*, reg rate2:V, reg r2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r3:V |
    mkenv;
    st x = x;
    rate_isMissing = missing.0(rate);
    if rate_isMissing then L0(1.0) else L0(rate);
  L0(rate_orDefault):
    st rate = rate_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L1(FALSE) else L1(log);
  L1(log_orDefault):
    st log = log_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    C_dexp = ld C_dexp;
    check L5() else D0();
  L4():
    r = dyn base(<sym C_dexp>, <sym x>, <lang `/`(1.0, rate)>, <sym log>);
    goto L2(r);
  D0():
    deopt 1 [C_dexp];
  L5():
    C_dexp1 = force? C_dexp;
    checkMissing(C_dexp1);
    x1 = ld x;
    check L6() else D1();
  D1():
    deopt 2 [C_dexp1, x1];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    rate1 = ld rate;
    check L7() else D2();
  D2():
    deopt 4 [C_dexp1, x2, 1.0, rate1];
  L7():
    rate2 = force? rate1;
    checkMissing(rate2);
    r2 = `/`(1.0, rate2);
    log1 = ld log;
    check L8() else D3();
  D3():
    deopt 6 [C_dexp1, x2, r2, log1];
  L8():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, r2, log2];
    r3 = `.Call`(C_dexp1, vargs, <missing>);
    goto L2(r3);
  }
}