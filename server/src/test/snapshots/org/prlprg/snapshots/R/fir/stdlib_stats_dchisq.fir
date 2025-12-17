fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1233282340;
    st dchisq = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1233282340(x, df, ncp, log) {
  (reg x:*, reg df:*, reg ncp:*, reg log:*) -+> V { var x:*, var df:*, var ncp:*, reg ncp_isMissing:L, reg ncp_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_dchisq:*, reg C_dchisq1:V, reg x1:*, reg x2:V, reg df1:*, reg df2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg C_dnchisq:*, reg C_dnchisq1:V, reg x3:*, reg x4:V, reg df3:*, reg df4:V, reg ncp1:*, reg ncp2:V, reg log3:*, reg log4:V, reg vargs1:dots, reg r8:V |
    mkenv;
    st x = x;
    st df = df;
    ncp_isMissing = missing.0(ncp);
    if ncp_isMissing then L0(0.0) else L0(ncp);
  L0(ncp_orDefault):
    st ncp = ncp_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L1(FALSE) else L1(log);
  L1(log_orDefault):
    st log = log_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r1):
    c = `as.logical`(r1);
    if c then L8() else L3();
  L6():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ncp>);
    goto L2(r2);
  L7():
    r = dyn base(<sym ncp>);
    goto L2(r);
  L3():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L8():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L4(r4):
    popenv;
    return r4;
  L5(r7):
    popenv;
    return r7;
  L9():
    C_dchisq = ld C_dchisq;
    check L11() else D0();
  L10():
    r3 = dyn base1(<sym C_dchisq>, <sym x>, <sym df>, <sym log>);
    goto L4(r3);
  L16():
    C_dnchisq = ld C_dnchisq;
    check L18() else D4();
  L17():
    r6 = dyn base2(<sym C_dnchisq>, <sym x>, <sym df>, <sym ncp>, <sym log>);
    goto L5(r6);
  D0():
    deopt 4 [C_dchisq];
  D4():
    deopt 11 [C_dnchisq];
  L11():
    C_dchisq1 = force? C_dchisq;
    checkMissing(C_dchisq1);
    x1 = ld x;
    check L12() else D1();
  L18():
    C_dnchisq1 = force? C_dnchisq;
    checkMissing(C_dnchisq1);
    x3 = ld x;
    check L19() else D5();
  D1():
    deopt 5 [C_dchisq1, x1];
  D5():
    deopt 12 [C_dnchisq1, x3];
  L12():
    x2 = force? x1;
    checkMissing(x2);
    df1 = ld df;
    check L13() else D2();
  L19():
    x4 = force? x3;
    checkMissing(x4);
    df3 = ld df;
    check L20() else D6();
  D2():
    deopt 6 [C_dchisq1, x2, df1];
  D6():
    deopt 13 [C_dnchisq1, x4, df3];
  L13():
    df2 = force? df1;
    checkMissing(df2);
    log1 = ld log;
    check L14() else D3();
  L20():
    df4 = force? df3;
    checkMissing(df4);
    ncp1 = ld ncp;
    check L21() else D7();
  D3():
    deopt 7 [C_dchisq1, x2, df2, log1];
  D7():
    deopt 14 [C_dnchisq1, x4, df4, ncp1];
  L14():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, df2, log2];
    r5 = `.Call`(C_dchisq1, vargs, <missing>);
    goto L4(r5);
  L21():
    ncp2 = force? ncp1;
    checkMissing(ncp2);
    log3 = ld log;
    check L22() else D8();
  D8():
    deopt 15 [C_dnchisq1, x4, df4, ncp2, log3];
  L22():
    log4 = force? log3;
    checkMissing(log4);
    vargs1 = dots[x4, df4, ncp2, log4];
    r8 = `.Call`(C_dnchisq1, vargs1, <missing>);
    goto L5(r8);
  }
}