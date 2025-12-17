fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4179711000;
    st rf = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4179711000(n, df1, df2, ncp) {
  (reg n:*, reg df1:*, reg df2:*, reg ncp:*) -+> V { var n:*, var df1:*, var df2:*, var ncp:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_rf:*, reg C_rf1:V, reg n1:*, reg n2:V, reg df3:*, reg df4:V, reg df5:*, reg df6:V, reg vargs:dots, reg r5:V, reg rchisq:cls, reg n3:*, reg n4:V, reg p:p(V +), reg df7:*, reg df8:V, reg p1:p(V +), reg ncp1:*, reg ncp2:V, reg p2:p(V +), reg r9:V, reg df9:*, reg df10:V, reg r10:V, reg rchisq1:cls, reg n5:*, reg n6:V, reg p3:p(V +), reg df11:*, reg df12:V, reg p4:p(V +), reg r13:V, reg df13:*, reg df14:V, reg r14:V, reg r15:V |
    mkenv;
    st n = n;
    st df1 = df1;
    st df2 = df2;
    st ncp = ncp;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L5() else L1();
  L3():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ncp>);
    goto L0(r2);
  L4():
    r = dyn base(<sym ncp>);
    goto L0(r);
  L1():
    rchisq = ldf rchisq;
    check L13() else D4();
  L5():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  D4():
    deopt 11 [];
  L2(r4):
    popenv;
    return r4;
  L6():
    C_rf = ld C_rf;
    check L8() else D0();
  L7():
    r3 = dyn base1(<sym C_rf>, <sym n>, <sym df1>, <sym df2>);
    goto L2(r3);
  L13():
    p = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    p1 = prom<V +>{
      df7 = ld df1;
      df8 = force? df7;
      checkMissing(df8);
      return df8;
    };
    p2 = prom<V +>{
      ncp1 = ld ncp;
      ncp2 = force? ncp1;
      checkMissing(ncp2);
      return ncp2;
    };
    r9 = dyn rchisq[, , ncp](p, p1, p2);
    check L14() else D5();
  D0():
    deopt 4 [C_rf];
  D5():
    deopt 16 [r9];
  L8():
    C_rf1 = force? C_rf;
    checkMissing(C_rf1);
    n1 = ld n;
    check L9() else D1();
  L14():
    df9 = ld df1;
    check L15() else D6();
  D1():
    deopt 5 [C_rf1, n1];
  D6():
    deopt 16 [r9, df9];
  L9():
    n2 = force? n1;
    checkMissing(n2);
    df3 = ld df1;
    check L10() else D2();
  L15():
    df10 = force? df9;
    checkMissing(df10);
    r10 = `/`(r9, df10);
    rchisq1 = ldf rchisq;
    check L16() else D7();
  D2():
    deopt 6 [C_rf1, n2, df3];
  D7():
    deopt 19 [r10];
  L10():
    df4 = force? df3;
    checkMissing(df4);
    df5 = ld df2;
    check L11() else D3();
  L16():
    p3 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    p4 = prom<V +>{
      df11 = ld df2;
      df12 = force? df11;
      checkMissing(df12);
      return df12;
    };
    r13 = dyn rchisq1(p3, p4);
    check L17() else D8();
  D3():
    deopt 7 [C_rf1, n2, df4, df5];
  D8():
    deopt 22 [r10, r13];
  L11():
    df6 = force? df5;
    checkMissing(df6);
    vargs = dots[n2, df4, df6];
    r5 = `.Call`(C_rf1, vargs, <missing>);
    goto L2(r5);
  L17():
    df13 = ld df2;
    check L18() else D9();
  D9():
    deopt 22 [r10, r13, df13];
  L18():
    df14 = force? df13;
    checkMissing(df14);
    r14 = `/`(r13, df14);
    r15 = `/`(r10, r14);
    popenv;
    return r15;
  }
}