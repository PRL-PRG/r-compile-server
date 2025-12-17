fun main() {
  () -+> V { reg r:cls, reg window:cls, reg presidents:*, reg presidents1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg window1:cls, reg presidents2:*, reg presidents3:V, reg p2:p(V +), reg r8:V, reg window2:cls, reg presidents4:*, reg presidents5:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg window3:cls, reg presidents6:*, reg presidents7:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg c2:cls, reg r18:V, reg p6:p(V +), reg r20:V, reg window4:cls, reg presidents8:*, reg presidents9:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg c3:cls, reg r24:V, reg p8:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg c4:cls, reg r29:V, reg l:*, reg window__:cls, reg r30:V, reg l1:*, reg window__1:cls, reg r31:V, reg l2:*, reg window__2:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg c5:cls, reg r34:V, reg p9:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg c6:cls, reg r38:V, reg p10:p(V +), reg r40:V, reg pres:*, reg pres1:V |
    mkenv;
    r = clos inner2044426018;
    st window = r;
    window = ldf window;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      presidents = ld presidents;
      presidents1 = force? presidents;
      checkMissing(presidents1);
      return presidents1;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c(1969.0, 4.0);
      goto L0(r4);
    L2():
      r2 = dyn base(1969.0, 4.0);
      goto L0(r2);
    };
    r6 = dyn window(p, 1960.0, p1);
    check L2() else D1();
  D1():
    deopt 8 [r6];
  L2():
    window1 = ldf window;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p2 = prom<V +>{
      presidents2 = ld presidents;
      presidents3 = force? presidents2;
      checkMissing(presidents3);
      return presidents3;
    };
    r8 = dyn window1[, deltat](p2, 1.0);
    check L4() else D3();
  D3():
    deopt 14 [r8];
  L4():
    window2 = ldf window;
    check L5() else D4();
  D4():
    deopt 16 [];
  L5():
    p3 = prom<V +>{
      presidents4 = ld presidents;
      presidents5 = force? presidents4;
      checkMissing(presidents5);
      return presidents5;
    };
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c1 = ldf c in base;
      r12 = dyn c1(1945.0, 3.0);
      goto L0(r12);
    L2():
      r10 = dyn base1(1945.0, 3.0);
      goto L0(r10);
    };
    r14 = dyn window2[, start, deltat](p3, p4, 1.0);
    check L6() else D5();
  D5():
    deopt 22 [r14];
  L6():
    window3 = ldf window;
    check L7() else D6();
  D6():
    deopt 24 [];
  L7():
    p5 = prom<V +>{
      presidents6 = ld presidents;
      presidents7 = force? presidents6;
      checkMissing(presidents7);
      return presidents7;
    };
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c2 = ldf c in base;
      r18 = dyn c2(1979.0, 2.0);
      goto L0(r18);
    L2():
      r16 = dyn base2(1979.0, 2.0);
      goto L0(r16);
    };
    r20 = dyn window3[, , , extend](p5, 1944.0, p6, TRUE);
    check L8() else D7();
  D7():
    deopt 30 [r20];
  L8():
    window4 = ldf window;
    check L9() else D8();
  D8():
    deopt 32 [];
  L9():
    p7 = prom<V +>{
      presidents8 = ld presidents;
      presidents9 = force? presidents8;
      checkMissing(presidents9);
      return presidents9;
    };
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c3 = ldf c in base;
      r24 = dyn c3(1949.0, 4.0);
      goto L0(r24);
    L2():
      r22 = dyn base3(1949.0, 4.0);
      goto L0(r22);
    };
    r26 = dyn window4(p7, 1945.0, p8);
    check L10() else D9();
  D9():
    deopt 36 [r26];
  L10():
    st pres = r26;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L11() else L12();
  L0(r28):
    l = ld pres;
    window__ = ldf `window<-`;
    check L14() else D11();
  L11():
    c4 = ldf c in base;
    r29 = dyn c4(60.0, 70.0);
    check L13() else D10();
  L12():
    r27 = dyn base4(60.0, 70.0);
    goto L0(r27);
  D10():
    deopt 43 [r29];
  D11():
    deopt 45 [r28, l, r28];
  L13():
    goto L0(r29);
  L14():
    r30 = dyn window__(l, NULL, 1945.25, 1945.5, r28);
    check L15() else D12();
  D12():
    deopt 49 [r28, r30];
  L15():
    st pres = r30;
    l1 = ld pres;
    window__1 = ldf `window<-`;
    check L16() else D13();
  D13():
    deopt 54 [0.0, l1, 0.0];
  L16():
    r31 = dyn window__1(l1, NULL, 1944.0, 1944.75, 0.0);
    check L17() else D14();
  D14():
    deopt 58 [0.0, r31];
  L17():
    st pres = r31;
    l2 = ld pres;
    window__2 = ldf `window<-`;
    check L18() else D15();
  D15():
    deopt 63 [<int 85, 86, 87, 88, 89>, l2, <int 85, 86, 87, 88, 89>];
  L18():
    p9 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c5 = ldf c in base;
      r34 = dyn c5(1945.0, 4.0);
      goto L0(r34);
    L2():
      r32 = dyn base5(1945.0, 4.0);
      goto L0(r32);
    };
    p10 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c6 = ldf c in base;
      r38 = dyn c6(1949.0, 4.0);
      goto L0(r38);
    L2():
      r36 = dyn base6(1949.0, 4.0);
      goto L0(r36);
    };
    r40 = dyn window__2[, , , , frequency, ](l2, NULL, p9, p10, 1.0, <int 85, 86, 87, 88, 89>);
    check L19() else D16();
  D16():
    deopt 69 [<int 85, 86, 87, 88, 89>, r40];
  L19():
    st pres = r40;
    pres = ld pres;
    check L20() else D17();
  D17():
    deopt 71 [pres];
  L20():
    pres1 = force? pres;
    checkMissing(pres1);
    popenv;
    return pres1;
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
    r2 = dyn UseMethod("window");
    goto L0(r2);
  L2():
    r = dyn base("window");
    goto L0(r);
  }
}