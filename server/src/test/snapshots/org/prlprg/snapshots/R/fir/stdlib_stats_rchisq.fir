fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1930081848;
    st rchisq = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1930081848(n, df, ncp) {
  (reg n:*, reg df:*, reg ncp:*) -+> V { var n:*, var df:*, var ncp:*, reg ncp_isMissing:L, reg ncp_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_rchisq:*, reg C_rchisq1:V, reg n1:*, reg n2:V, reg df1:*, reg df2:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg C_rnchisq:*, reg C_rnchisq1:V, reg n3:*, reg n4:V, reg df3:*, reg df4:V, reg ncp1:*, reg ncp2:V, reg vargs1:dots, reg r8:V |
    mkenv;
    st n = n;
    st df = df;
    ncp_isMissing = missing.0(ncp);
    if ncp_isMissing then L0(0.0) else L0(ncp);
  L0(ncp_orDefault):
    st ncp = ncp_orDefault;
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
    if guard2 then L14() else L15();
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
    C_rchisq = ld C_rchisq;
    check L10() else D0();
  L9():
    r3 = dyn base1(<sym C_rchisq>, <sym n>, <sym df>);
    goto L3(r3);
  L14():
    C_rnchisq = ld C_rnchisq;
    check L16() else D3();
  L15():
    r6 = dyn base2(<sym C_rnchisq>, <sym n>, <sym df>, <sym ncp>);
    goto L4(r6);
  D0():
    deopt 4 [C_rchisq];
  D3():
    deopt 10 [C_rnchisq];
  L10():
    C_rchisq1 = force? C_rchisq;
    checkMissing(C_rchisq1);
    n1 = ld n;
    check L11() else D1();
  L16():
    C_rnchisq1 = force? C_rnchisq;
    checkMissing(C_rnchisq1);
    n3 = ld n;
    check L17() else D4();
  D1():
    deopt 5 [C_rchisq1, n1];
  D4():
    deopt 11 [C_rnchisq1, n3];
  L11():
    n2 = force? n1;
    checkMissing(n2);
    df1 = ld df;
    check L12() else D2();
  L17():
    n4 = force? n3;
    checkMissing(n4);
    df3 = ld df;
    check L18() else D5();
  D2():
    deopt 6 [C_rchisq1, n2, df1];
  D5():
    deopt 12 [C_rnchisq1, n4, df3];
  L12():
    df2 = force? df1;
    checkMissing(df2);
    vargs = dots[n2, df2];
    r5 = `.Call`(C_rchisq1, vargs, <missing>);
    goto L3(r5);
  L18():
    df4 = force? df3;
    checkMissing(df4);
    ncp1 = ld ncp;
    check L19() else D6();
  D6():
    deopt 13 [C_rnchisq1, n4, df4, ncp1];
  L19():
    ncp2 = force? ncp1;
    checkMissing(ncp2);
    vargs1 = dots[n4, df4, ncp2];
    r8 = `.Call`(C_rnchisq1, vargs1, <missing>);
    goto L4(r8);
  }
}