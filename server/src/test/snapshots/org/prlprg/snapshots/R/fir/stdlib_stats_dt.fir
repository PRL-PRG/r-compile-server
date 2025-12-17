fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2844100249;
    st dt = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2844100249(x, df, ncp, log) {
  (reg x:*, reg df:*, reg ncp:*, reg log:*) -+> V { var x:*, var df:*, var ncp:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_dt:*, reg C_dt1:V, reg x1:*, reg x2:V, reg df1:*, reg df2:V, reg log1:*, reg log2:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg C_dnt:*, reg C_dnt1:V, reg x3:*, reg x4:V, reg df3:*, reg df4:V, reg ncp1:*, reg ncp2:V, reg log3:*, reg log4:V, reg vargs1:dots, reg r8:V |
    mkenv;
    st x = x;
    st df = df;
    st ncp = ncp;
    log_isMissing = missing.0(log);
    if log_isMissing then L0(FALSE) else L0(log);
  L0(log_orDefault):
    st log = log_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    c = `as.logical`(r1);
    if c then L7() else L2();
  L5():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ncp>);
    goto L1(r2);
  L6():
    r = dyn base(<sym ncp>);
    goto L1(r);
  L2():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L7():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L3(r4):
    popenv;
    return r4;
  L4(r7):
    popenv;
    return r7;
  L8():
    C_dt = ld C_dt;
    check L10() else D0();
  L9():
    r3 = dyn base1(<sym C_dt>, <sym x>, <sym df>, <sym log>);
    goto L3(r3);
  L15():
    C_dnt = ld C_dnt;
    check L17() else D4();
  L16():
    r6 = dyn base2(<sym C_dnt>, <sym x>, <sym df>, <sym ncp>, <sym log>);
    goto L4(r6);
  D0():
    deopt 4 [C_dt];
  D4():
    deopt 11 [C_dnt];
  L10():
    C_dt1 = force? C_dt;
    checkMissing(C_dt1);
    x1 = ld x;
    check L11() else D1();
  L17():
    C_dnt1 = force? C_dnt;
    checkMissing(C_dnt1);
    x3 = ld x;
    check L18() else D5();
  D1():
    deopt 5 [C_dt1, x1];
  D5():
    deopt 12 [C_dnt1, x3];
  L11():
    x2 = force? x1;
    checkMissing(x2);
    df1 = ld df;
    check L12() else D2();
  L18():
    x4 = force? x3;
    checkMissing(x4);
    df3 = ld df;
    check L19() else D6();
  D2():
    deopt 6 [C_dt1, x2, df1];
  D6():
    deopt 13 [C_dnt1, x4, df3];
  L12():
    df2 = force? df1;
    checkMissing(df2);
    log1 = ld log;
    check L13() else D3();
  L19():
    df4 = force? df3;
    checkMissing(df4);
    ncp1 = ld ncp;
    check L20() else D7();
  D3():
    deopt 7 [C_dt1, x2, df2, log1];
  D7():
    deopt 14 [C_dnt1, x4, df4, ncp1];
  L13():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, df2, log2];
    r5 = `.Call`(C_dt1, vargs, <missing>);
    goto L3(r5);
  L20():
    ncp2 = force? ncp1;
    checkMissing(ncp2);
    log3 = ld log;
    check L21() else D8();
  D8():
    deopt 15 [C_dnt1, x4, df4, ncp2, log3];
  L21():
    log4 = force? log3;
    checkMissing(log4);
    vargs1 = dots[x4, df4, ncp2, log4];
    r8 = `.Call`(C_dnt1, vargs1, <missing>);
    goto L4(r8);
  }
}