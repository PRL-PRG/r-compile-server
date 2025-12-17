fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner920707116;
    st `.filldfcols` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner920707116(df, srcdf) {
  (reg df:*, reg srcdf:*) -+> V { var df:*, var srcdf:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg srcdf1:*, reg srcdf2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg df1:*, reg df2:V, reg names1:cls, reg r5:V, reg setdiff:cls, reg srcnames:*, reg srcnames1:V, reg p:p(V +), reg dfnames:*, reg dfnames1:V, reg p1:p(V +), reg r8:V, reg srcdf3:*, reg srcdf4:V, reg c:L, reg srcdf6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg integer:cls, reg r9:V, reg newcols:*, reg newcols1:V, reg __:cls, reg r10:V, reg l:*, reg c1:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg newcols2:*, reg newcols3:V, reg ___:cls, reg r11:V, reg df3:*, reg df4:V, reg c2:L, reg df6:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg unique:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg srcnames2:*, reg srcnames3:V, reg dfnames2:*, reg dfnames3:V, reg c3:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg __1:cls, reg r17:V, reg df7:*, reg df8:V |
    mkenv;
    st df = df;
    st srcdf = srcdf;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st srcnames = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    srcdf1 = ld srcdf;
    check L7() else D0();
  L6():
    r = dyn base(<sym srcdf>);
    goto L0(r);
  D0():
    deopt 2 [srcdf1];
  L1(r4):
    st dfnames = r4;
    setdiff = ldf setdiff;
    check L13() else D4();
  L7():
    srcdf2 = force? srcdf1;
    checkMissing(srcdf2);
    names = ldf names in base;
    r2 = dyn names(srcdf2);
    check L8() else D1();
  L9():
    df1 = ld df;
    check L11() else D2();
  L10():
    r3 = dyn base1(<sym df>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [df1];
  D4():
    deopt 15 [];
  L8():
    goto L0(r2);
  L11():
    df2 = force? df1;
    checkMissing(df2);
    names1 = ldf names in base;
    r5 = dyn names1(df2);
    check L12() else D3();
  L13():
    p = prom<V +>{
      srcnames = ld srcnames;
      srcnames1 = force? srcnames;
      checkMissing(srcnames1);
      return srcnames1;
    };
    p1 = prom<V +>{
      dfnames = ld dfnames;
      dfnames1 = force? dfnames;
      checkMissing(dfnames1);
      return dfnames1;
    };
    r8 = dyn setdiff(p, p1);
    check L14() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 18 [r8];
  L12():
    goto L1(r5);
  L14():
    st newcols = r8;
    srcdf3 = ld srcdf;
    check L15() else D6();
  D6():
    deopt 20 [srcdf3];
  L15():
    srcdf4 = force? srcdf3;
    checkMissing(srcdf4);
    c = `is.object`(srcdf4);
    if c then L16() else L17(srcdf4);
  L2(dx1):
    l = ld df;
    c1 = `is.object`(l);
    if c1 then L22() else L23(dx1, l);
  L16():
    dr = tryDispatchBuiltin.1("[", srcdf4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(srcdf6):
    integer = ldf integer;
    check L19() else D7();
  D7():
    deopt 23 [srcdf6];
  L3(dx7):
    st df = dx7;
    df3 = ld df;
    check L26() else D11();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L19():
    r9 = dyn integer();
    check L20() else D8();
  L22():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dx1, dr2);
  L23(dx3, l2):
    newcols2 = ld newcols;
    check L25() else D10();
  D8():
    deopt 24 [srcdf6, r9];
  D10():
    deopt 29 [dx3, l2, dx1, newcols2];
  D11():
    deopt 34 [df3];
  L20():
    newcols = ld newcols;
    check L21() else D9();
  L24():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx5);
  L25():
    newcols3 = force? newcols2;
    ___ = ldf `[<-` in base;
    r11 = dyn ___(l, <missing>, newcols3, dx1);
    goto L3(r11);
  L26():
    df4 = force? df3;
    checkMissing(df4);
    c2 = `is.object`(df4);
    if c2 then L27() else L28(df4);
  D9():
    deopt 24 [srcdf6, r9, newcols];
  L4(dx9):
    st df = dx9;
    df7 = ld df;
    check L32() else D14();
  L21():
    newcols1 = force? newcols;
    __ = ldf `[` in base;
    r10 = dyn __(srcdf6, r9, newcols1);
    goto L2(r10);
  L27():
    dr4 = tryDispatchBuiltin.1("[", df4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(dr4);
  L28(df6):
    unique = ldf unique;
    check L30() else D12();
  D12():
    deopt 38 [df6];
  D14():
    deopt 44 [df7];
  L29():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx8);
  L30():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      srcnames2 = ld srcnames;
      srcnames3 = force? srcnames2;
      checkMissing(srcnames3);
      dfnames2 = ld dfnames;
      dfnames3 = force? dfnames2;
      checkMissing(dfnames3);
      c3 = ldf c in base;
      r14 = dyn c3(srcnames3, dfnames3);
      goto L0(r14);
    L2():
      r12 = dyn base2(<sym srcnames>, <sym dfnames>);
      goto L0(r12);
    };
    r16 = dyn unique(p2);
    check L31() else D13();
  L32():
    df8 = force? df7;
    checkMissing(df8);
    popenv;
    return df8;
  D13():
    deopt 40 [df6, r16];
  L31():
    __1 = ldf `[` in base;
    r17 = dyn __1(df4, <missing>, r16);
    goto L4(r17);
  }
}