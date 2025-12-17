fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1041539299;
    st rt = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1041539299(n, df, ncp) {
  (reg n:*, reg df:*, reg ncp:*) -+> V { var n:*, var df:*, var ncp:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg C_rt:*, reg C_rt1:V, reg n1:*, reg n2:V, reg df1:*, reg df2:V, reg vargs:dots, reg r5:V, reg rnorm:cls, reg n3:*, reg n4:V, reg p:p(V +), reg ncp1:*, reg ncp2:V, reg p1:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg r13:V, reg rchisq:cls, reg n5:*, reg n6:V, reg p2:p(V +), reg df3:*, reg df4:V, reg p3:p(V +), reg r16:V, reg df5:*, reg df6:V, reg r17:V, reg r18:V, reg r19:V |
    mkenv;
    st n = n;
    st df = df;
    st ncp = ncp;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L4():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ncp>);
    goto L0(r2);
  L5():
    r = dyn base(<sym ncp>);
    goto L0(r);
  L1():
    rnorm = ldf rnorm;
    check L13() else D3();
  L6():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  D3():
    deopt 10 [];
  L2(r4):
    popenv;
    return r4;
  L7():
    C_rt = ld C_rt;
    check L9() else D0();
  L8():
    r3 = dyn base1(<sym C_rt>, <sym n>, <sym df>);
    goto L2(r3);
  L13():
    p = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    p1 = prom<V +>{
      ncp1 = ld ncp;
      ncp2 = force? ncp1;
      checkMissing(ncp2);
      return ncp2;
    };
    r8 = dyn rnorm(p, p1);
    check L14() else D4();
  D0():
    deopt 4 [C_rt];
  D4():
    deopt 13 [r8];
  L9():
    C_rt1 = force? C_rt;
    checkMissing(C_rt1);
    n1 = ld n;
    check L10() else D1();
  L14():
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  D1():
    deopt 5 [C_rt1, n1];
  L3(r12, r13):
    r19 = `/`(r12, r13);
    popenv;
    return r19;
  L10():
    n2 = force? n1;
    checkMissing(n2);
    df1 = ld df;
    check L11() else D2();
  L15():
    rchisq = ldf rchisq;
    check L17() else D5();
  L16():
    r11 = dyn base2(<lang `/`(rchisq(n, df), df)>);
    goto L3(r8, r11);
  D2():
    deopt 6 [C_rt1, n2, df1];
  D5():
    deopt 15 [r8];
  L11():
    df2 = force? df1;
    checkMissing(df2);
    vargs = dots[n2, df2];
    r5 = `.Call`(C_rt1, vargs, <missing>);
    goto L2(r5);
  L17():
    p2 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    p3 = prom<V +>{
      df3 = ld df;
      df4 = force? df3;
      checkMissing(df4);
      return df4;
    };
    r16 = dyn rchisq(p2, p3);
    check L18() else D6();
  D6():
    deopt 18 [r8, r16];
  L18():
    df5 = ld df;
    check L19() else D7();
  D7():
    deopt 18 [r8, r16, df5];
  L19():
    df6 = force? df5;
    checkMissing(df6);
    r17 = `/`(r16, df6);
    r18 = sqrt(r17);
    goto L3(r8, r18);
  }
}