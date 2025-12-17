fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3460980932;
    st df = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3460980932(x, df1, df2, ncp, log) {
  (reg x:*, reg df1:*, reg df2:*, reg ncp:*, reg log:*) -+> V { var x:*, var df1:*, var df2:*, var ncp:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_df:*, reg C_df1:V, reg x1:*, reg x2:V, reg df3:*, reg df4:V, reg df5:*, reg df6:V, reg log1:*, reg log2:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg C_dnf:*, reg C_dnf1:V, reg x3:*, reg x4:V, reg df7:*, reg df8:V, reg df9:*, reg df10:V, reg ncp1:*, reg ncp2:V, reg log3:*, reg log4:V, reg vargs1:dots, reg r8:V |
    mkenv;
    st x = x;
    st df1 = df1;
    st df2 = df2;
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
    if guard2 then L16() else L17();
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
    C_df = ld C_df;
    check L10() else D0();
  L9():
    r3 = dyn base1(<sym C_df>, <sym x>, <sym df1>, <sym df2>, <sym log>);
    goto L3(r3);
  L16():
    C_dnf = ld C_dnf;
    check L18() else D5();
  L17():
    r6 = dyn base2(<sym C_dnf>, <sym x>, <sym df1>, <sym df2>, <sym ncp>, <sym log>);
    goto L4(r6);
  D0():
    deopt 4 [C_df];
  D5():
    deopt 12 [C_dnf];
  L10():
    C_df1 = force? C_df;
    checkMissing(C_df1);
    x1 = ld x;
    check L11() else D1();
  L18():
    C_dnf1 = force? C_dnf;
    checkMissing(C_dnf1);
    x3 = ld x;
    check L19() else D6();
  D1():
    deopt 5 [C_df1, x1];
  D6():
    deopt 13 [C_dnf1, x3];
  L11():
    x2 = force? x1;
    checkMissing(x2);
    df3 = ld df1;
    check L12() else D2();
  L19():
    x4 = force? x3;
    checkMissing(x4);
    df7 = ld df1;
    check L20() else D7();
  D2():
    deopt 6 [C_df1, x2, df3];
  D7():
    deopt 14 [C_dnf1, x4, df7];
  L12():
    df4 = force? df3;
    checkMissing(df4);
    df5 = ld df2;
    check L13() else D3();
  L20():
    df8 = force? df7;
    checkMissing(df8);
    df9 = ld df2;
    check L21() else D8();
  D3():
    deopt 7 [C_df1, x2, df4, df5];
  D8():
    deopt 15 [C_dnf1, x4, df8, df9];
  L13():
    df6 = force? df5;
    checkMissing(df6);
    log1 = ld log;
    check L14() else D4();
  L21():
    df10 = force? df9;
    checkMissing(df10);
    ncp1 = ld ncp;
    check L22() else D9();
  D4():
    deopt 8 [C_df1, x2, df4, df6, log1];
  D9():
    deopt 16 [C_dnf1, x4, df8, df10, ncp1];
  L14():
    log2 = force? log1;
    checkMissing(log2);
    vargs = dots[x2, df4, df6, log2];
    r5 = `.Call`(C_df1, vargs, <missing>);
    goto L3(r5);
  L22():
    ncp2 = force? ncp1;
    checkMissing(ncp2);
    log3 = ld log;
    check L23() else D10();
  D10():
    deopt 17 [C_dnf1, x4, df8, df10, ncp2, log3];
  L23():
    log4 = force? log3;
    checkMissing(log4);
    vargs1 = dots[x4, df8, df10, ncp2, log4];
    r8 = `.Call`(C_dnf1, vargs1, <missing>);
    goto L4(r8);
  }
}