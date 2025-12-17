fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg r2:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg round:cls, reg r6:V, reg stripchart:cls, reg x:*, reg x1:V, reg p:p(V +), reg r8:V, reg mean:cls, reg par:cls, reg r9:V, reg c:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg text:cls, reg m:*, reg m1:V, reg p2:p(V +), reg r16:V, reg stripchart1:cls, reg xr:*, reg xr1:V, reg p3:p(V +), reg r18:V, reg text1:cls, reg m2:*, reg m3:V, reg p4:p(V +), reg r20:V, reg stripchart2:cls, reg xr2:*, reg xr3:V, reg p5:p(V +), reg r22:V, reg text2:cls, reg m4:*, reg m5:V, reg p6:p(V +), reg r24:V, reg stripchart3:cls, reg __2:cls, reg r25:V, reg p7:p(V +), reg OrchardSprays:*, reg OrchardSprays1:V, reg p8:p(V +), reg r28:V, reg stripchart4:cls, reg __3:cls, reg r29:V, reg p9:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r31:V, reg r32:V, reg c1:cls, reg r33:V, reg r34:V, reg p10:p(V +), reg OrchardSprays2:*, reg OrchardSprays3:V, reg p11:p(V +), reg r37:V |
    mkenv;
    r = clos inner2044426018;
    st stripchart = r;
    __ = ldf `::`;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn __("stats", "rnorm");
    check L2() else D1();
  D1():
    deopt 7 [r1];
  L2():
    checkFun.0(r1);
    r2 = r1 as cls;
    r3 = dyn r2(50.0);
    check L3() else D2();
  D2():
    deopt 10 [r3];
  L3():
    st x = r3;
    sym = ldf round;
    base = ldf round in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r5):
    st xr = r5;
    stripchart = ldf stripchart;
    check L6() else D3();
  L4():
    round = ldf round in base;
    r6 = dyn round(<sym x>, 1.0);
    goto L0(r6);
  L5():
    r4 = dyn base(<sym x>, 1.0);
    goto L0(r4);
  D3():
    deopt 17 [];
  L6():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r8 = dyn stripchart(p);
    check L7() else D4();
  D4():
    deopt 19 [r8];
  L7():
    mean = ldf mean;
    check L8() else D5();
  D5():
    deopt 21 [];
  L8():
    p1 = prom<V +>{
      par = ldf par;
      r9 = dyn par("usr");
      c = `is.object`(r9);
      if c then L1() else L2(r9);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r9);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r11):
      __1 = ldf `[` in base;
      r12 = dyn __1(r11, <int 1, 2>);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r14 = dyn mean(p1);
    check L9() else D6();
  D6():
    deopt 23 [r14];
  L9():
    st m = r14;
    text = ldf text;
    check L10() else D7();
  D7():
    deopt 26 [];
  L10():
    p2 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r16 = dyn text(p2, 1.04, "stripchart(x, \"overplot\")");
    check L11() else D8();
  D8():
    deopt 30 [r16];
  L11():
    stripchart1 = ldf stripchart;
    check L12() else D9();
  D9():
    deopt 32 [];
  L12():
    p3 = prom<V +>{
      xr = ld xr;
      xr1 = force? xr;
      checkMissing(xr1);
      return xr1;
    };
    r18 = dyn stripchart1[, method, add, at](p3, "stack", TRUE, 1.2);
    check L13() else D10();
  D10():
    deopt 40 [r18];
  L13():
    text1 = ldf text;
    check L14() else D11();
  D11():
    deopt 42 [];
  L14():
    p4 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r20 = dyn text1(p4, 1.35, "stripchart(round(x,1), \"stack\")");
    check L15() else D12();
  D12():
    deopt 46 [r20];
  L15():
    stripchart2 = ldf stripchart;
    check L16() else D13();
  D13():
    deopt 48 [];
  L16():
    p5 = prom<V +>{
      xr2 = ld xr;
      xr3 = force? xr2;
      checkMissing(xr3);
      return xr3;
    };
    r22 = dyn stripchart2[, method, add, at](p5, "jitter", TRUE, 0.7);
    check L17() else D14();
  D14():
    deopt 56 [r22];
  L17():
    text2 = ldf text;
    check L18() else D15();
  D15():
    deopt 58 [];
  L18():
    p6 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    r24 = dyn text2(p6, 0.85, "stripchart(round(x,1), \"jitter\")");
    check L19() else D16();
  D16():
    deopt 62 [r24];
  L19():
    stripchart3 = ldf stripchart;
    check L20() else D17();
  D17():
    deopt 64 [];
  L20():
    p7 = prom<V +>{
      __2 = ldf `~` in base;
      r25 = dyn __2(<sym decrease>, <sym treatment>);
      return r25;
    };
    p8 = prom<V +>{
      OrchardSprays = ld OrchardSprays;
      OrchardSprays1 = force? OrchardSprays;
      checkMissing(OrchardSprays1);
      return OrchardSprays1;
    };
    r28 = dyn stripchart3[, main, vertical, log, data](p7, "stripchart(OrchardSprays)", TRUE, "y", p8);
    check L21() else D18();
  D18():
    deopt 74 [r28];
  L21():
    stripchart4 = ldf stripchart;
    check L22() else D19();
  D19():
    deopt 76 [];
  L22():
    p9 = prom<V +>{
      __3 = ldf `~` in base;
      r29 = dyn __3(<sym decrease>, <sym treatment>);
      return r29;
    };
    p10 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r32):
      r34 = `^`(r32, 2.0);
      return r34;
    L1():
      c1 = ldf c in base;
      r33 = dyn c1(<int 1, 2, 3, 4, 5, 6, 7, 8>);
      goto L0(r33);
    L2():
      r31 = dyn base1(<lang `:`(1.0, 8.0)>);
      goto L0(r31);
    };
    p11 = prom<V +>{
      OrchardSprays2 = ld OrchardSprays;
      OrchardSprays3 = force? OrchardSprays2;
      checkMissing(OrchardSprays3);
      return OrchardSprays3;
    };
    r37 = dyn stripchart4[, at, main, vertical, log, data](p9, p10, "stripchart(OrchardSprays)", TRUE, "y", p11);
    check L23() else D20();
  D20():
    deopt 88 [r37];
  L23():
    popenv;
    return r37;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("stripchart");
    goto L0(r2);
  L2():
    r = dyn base("stripchart");
    goto L0(r);
  }
}