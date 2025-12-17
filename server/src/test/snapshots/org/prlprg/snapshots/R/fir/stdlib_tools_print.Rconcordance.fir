fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.Rconcordance` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg data_frame:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg nrow:cls, reg df:*, reg df1:V, reg p2:p(V +), reg r8:V, reg r9:I, reg x9:*, reg x10:V, reg c2:L, reg r11:V, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r13:V, reg dx5:V, reg r14:V, reg r15:V, reg l:*, reg rownames__:cls, reg r16:V, reg print:cls, reg df2:*, reg df3:V, reg p3:p(V +), reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg x13:*, reg x14:V, reg invisible:cls, reg r21:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    data_frame = ldf `data.frame`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r = `$`(x4, <sym srcFile>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r2 = `$`(x8, <sym srcLine>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r4 = dyn data_frame[srcFile, srcLine](p, p1);
    check L3() else D1();
  D1():
    deopt 6 [r4];
  L3():
    st df = r4;
    sym = ldf seq_len;
    base = ldf seq_len in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r6):
    x9 = ld x;
    check L8() else D4();
  L4():
    nrow = ldf nrow;
    check L6() else D2();
  L5():
    r5 = dyn base(<lang nrow(df)>);
    goto L0(r5);
  D2():
    deopt 10 [];
  D4():
    deopt 13 [r6, x9];
  L6():
    p2 = prom<V +>{
      df = ld df;
      df1 = force? df;
      checkMissing(df1);
      return df1;
    };
    r8 = dyn nrow(p2);
    check L7() else D3();
  L8():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L10() else L11(r6, x10);
  D3():
    deopt 12 [r8];
  L7():
    r9 = seq_len(r8);
    goto L0(r9);
  L9(r13, dx5):
    r15 = `+`(r13, dx5);
    l = ld df;
    rownames__ = ldf `rownames<-`;
    check L13() else D5();
  L10():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L12() else L11(r6, dr4);
  L11(r11, x12):
    r14 = `$`(x12, <sym offset>);
    goto L9(r11, r14);
  D5():
    deopt 18 [r15, l, r15];
  L12():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(r6, dx4);
  L13():
    r16 = dyn rownames__(l, NULL, r15);
    check L14() else D6();
  D6():
    deopt 20 [r15, r16];
  L14():
    st df = r16;
    print = ldf print;
    check L15() else D7();
  D7():
    deopt 23 [];
  L15():
    p3 = prom<V +>{
      df2 = ld df;
      df3 = force? df2;
      checkMissing(df3);
      return df3;
    };
    r18 = dyn print(p3);
    check L16() else D8();
  D8():
    deopt 25 [r18];
  L16():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L1(r20):
    popenv;
    return r20;
  L17():
    x13 = ld x;
    check L19() else D9();
  L18():
    r19 = dyn base1(<sym x>);
    goto L1(r19);
  D9():
    deopt 28 [x13];
  L19():
    x14 = force? x13;
    checkMissing(x14);
    invisible = ldf invisible in base;
    r21 = dyn invisible(x14);
    check L20() else D10();
  D10():
    deopt 31 [r21];
  L20():
    goto L1(r21);
  }
}