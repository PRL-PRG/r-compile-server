fun main() {
  () -+> V { reg r:cls, reg data_frame:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg l:*, reg row_names__:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg df:*, reg df1:V, reg attr:cls, reg r13:V, reg deparse:cls, reg df2:*, reg df3:V, reg p2:p(V +), reg r15:V, reg l1:*, reg row_names__1:cls, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg df4:*, reg df5:V, reg attr1:cls, reg r19:V, reg deparse1:cls, reg df6:*, reg df7:V, reg p3:p(V +), reg r21:V |
    mkenv;
    r = clos inner354062069;
    st `row.names` = r;
    data_frame = ldf `data.frame`;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(TRUE, FALSE, NA_LGL, NA_LGL);
      goto L0(r3);
    L2():
      r1 = dyn base(TRUE, FALSE, NA_LGL, NA_LGL);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c1 = ldf c in base;
      r7 = dyn c1(12.0, 34.0, 56.0, 78.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(12.0, 34.0, 56.0, 78.0);
      goto L0(r5);
    };
    r9 = dyn data_frame[x, y](p, p1);
    check L3() else D1();
  D1():
    deopt 9 [r9];
  L3():
    st df = r9;
    l = ld df;
    row_names__ = ldf `row.names<-`;
    check L4() else D2();
  D2():
    deopt 14 [<int 1, 2, 3, 4>, l, <int 1, 2, 3, 4>];
  L4():
    r10 = dyn row_names__(l, NULL, <int 1, 2, 3, 4>);
    check L5() else D3();
  D3():
    deopt 16 [<int 1, 2, 3, 4>, r10];
  L5():
    st df = r10;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L6() else L7();
  L0():
    deparse = ldf deparse;
    check L10() else D6();
  L6():
    df = ld df;
    check L8() else D4();
  L7():
    r11 = dyn base2(<sym df>, "row.names");
    goto L0();
  D4():
    deopt 20 [df];
  D6():
    deopt 26 [];
  L8():
    df1 = force? df;
    checkMissing(df1);
    attr = ldf attr in base;
    r13 = dyn attr(df1, "row.names");
    check L9() else D5();
  L10():
    p2 = prom<V +>{
      df2 = ld df;
      df3 = force? df2;
      checkMissing(df3);
      return df3;
    };
    r15 = dyn deparse(p2);
    check L11() else D7();
  D5():
    deopt 24 [r13];
  D7():
    deopt 28 [r15];
  L9():
    goto L0();
  L11():
    l1 = ld df;
    row_names__1 = ldf `row.names<-`;
    check L12() else D8();
  D8():
    deopt 32 [NULL, l1, NULL];
  L12():
    r16 = dyn row_names__1(l1, NULL, NULL);
    check L13() else D9();
  D9():
    deopt 34 [NULL, r16];
  L13():
    st df = r16;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L14() else L15();
  L1():
    deparse1 = ldf deparse;
    check L18() else D12();
  L14():
    df4 = ld df;
    check L16() else D10();
  L15():
    r17 = dyn base3(<sym df>, "row.names");
    goto L1();
  D10():
    deopt 38 [df4];
  D12():
    deopt 44 [];
  L16():
    df5 = force? df4;
    checkMissing(df5);
    attr1 = ldf attr in base;
    r19 = dyn attr1(df5, "row.names");
    check L17() else D11();
  L18():
    p3 = prom<V +>{
      df6 = ld df;
      df7 = force? df6;
      checkMissing(df7);
      return df7;
    };
    r21 = dyn deparse1(p3);
    check L19() else D13();
  D11():
    deopt 42 [r19];
  D13():
    deopt 46 [r21];
  L17():
    goto L1();
  L19():
    popenv;
    return r21;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("row.names");
    goto L0(r2);
  L2():
    r = dyn base("row.names");
    goto L0(r);
  }
}