fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c2:cls, reg r9:V, reg kruskal_test:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg x:*, reg x1:V, reg y:*, reg y1:V, reg z:*, reg z1:V, reg list:cls, reg r12:V, reg p:p(V +), reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg x2:*, reg x3:V, reg y2:*, reg y3:V, reg z2:*, reg z3:V, reg c3:cls, reg r17:V, reg factor:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg rep:cls, reg r20:V, reg p1:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg c4:cls, reg r24:V, reg p2:p(V +), reg r26:V, reg kruskal_test1:cls, reg x4:*, reg x5:V, reg p3:p(V +), reg g:*, reg g1:V, reg p4:p(V +), reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p5:p(V +), reg r33:V, reg boxplot:cls, reg __:cls, reg r34:V, reg p6:p(V +), reg airquality:*, reg airquality1:V, reg p7:p(V +), reg r37:V, reg kruskal_test2:cls, reg __1:cls, reg r38:V, reg p8:p(V +), reg airquality2:*, reg airquality3:V, reg p9:p(V +), reg r41:V |
    mkenv;
    r = clos inner2044426018;
    st `kruskal.test` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r2):
    st x = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L5():
    c = ldf c in base;
    r3 = dyn c(2.9, 3.0, 2.5, 2.6, 3.2);
    check L7() else D0();
  L6():
    r1 = dyn base(2.9, 3.0, 2.5, 2.6, 3.2);
    goto L0(r1);
  D0():
    deopt 11 [r3];
  L1(r5):
    st y = r5;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L7():
    goto L0(r3);
  L8():
    c1 = ldf c in base;
    r6 = dyn c1(3.8, 2.7, 4.0, 2.4);
    check L10() else D1();
  L9():
    r4 = dyn base1(3.8, 2.7, 4.0, 2.4);
    goto L1(r4);
  D1():
    deopt 20 [r6];
  L2(r8):
    st z = r8;
    kruskal_test = ldf `kruskal.test`;
    check L14() else D3();
  L10():
    goto L1(r6);
  L11():
    c2 = ldf c in base;
    r9 = dyn c2(2.8, 3.4, 3.7, 2.2, 2.0);
    check L13() else D2();
  L12():
    r7 = dyn base2(2.8, 3.4, 3.7, 2.2, 2.0);
    goto L2(r7);
  D2():
    deopt 30 [r9];
  D3():
    deopt 33 [];
  L13():
    goto L2(r9);
  L14():
    p = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      list = ldf list in base;
      r12 = dyn list(x1, y1, z1);
      goto L0(r12);
    L2():
      r10 = dyn base3(<sym x>, <sym y>, <sym z>);
      goto L0(r10);
    };
    r14 = dyn kruskal_test(p);
    check L15() else D4();
  D4():
    deopt 35 [r14];
  L15():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L16() else L17();
  L3(r16):
    st x = r16;
    factor = ldf factor;
    check L22() else D9();
  L16():
    x2 = ld x;
    check L18() else D5();
  L17():
    r15 = dyn base4(<sym x>, <sym y>, <sym z>);
    goto L3(r15);
  D5():
    deopt 38 [x2];
  D9():
    deopt 48 [];
  L18():
    x3 = force? x2;
    checkMissing(x3);
    y2 = ld y;
    check L19() else D6();
  L22():
    p1 = prom<V +>{
      sym5 = ldf rep;
      base5 = ldf rep in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      rep = ldf rep in base;
      r20 = dyn rep(<lang `:`(1.0, 3.0)>, <lang c(5.0, 4.0, 5.0)>);
      goto L0(r20);
    L2():
      r18 = dyn base5(<lang `:`(1.0, 3.0)>, <lang c(5.0, 4.0, 5.0)>);
      goto L0(r18);
    };
    p2 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c4 = ldf c in base;
      r24 = dyn c4("Normal subjects", "Subjects with obstructive airway disease", "Subjects with asbestosis");
      goto L0(r24);
    L2():
      r22 = dyn base6("Normal subjects", "Subjects with obstructive airway disease", "Subjects with asbestosis");
      goto L0(r22);
    };
    r26 = dyn factor[, labels](p1, p2);
    check L23() else D10();
  D6():
    deopt 40 [y2];
  D10():
    deopt 52 [r26];
  L19():
    y3 = force? y2;
    checkMissing(y3);
    z2 = ld z;
    check L20() else D7();
  L23():
    st g = r26;
    kruskal_test1 = ldf `kruskal.test`;
    check L24() else D11();
  D7():
    deopt 42 [z2];
  D11():
    deopt 55 [];
  L20():
    z3 = force? z2;
    checkMissing(z3);
    c3 = ldf c in base;
    r17 = dyn c3(x3, y3, z3);
    check L21() else D8();
  L24():
    p3 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p4 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    r29 = dyn kruskal_test1(p3, p4);
    check L25() else D12();
  D8():
    deopt 45 [r17];
  D12():
    deopt 58 [r29];
  L21():
    goto L3(r17);
  L25():
    sym7 = ldf require;
    base7 = ldf require in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L26() else L27();
  L4():
    boxplot = ldf boxplot;
    check L30() else D15();
  L26():
    require = ldf require;
    check L28() else D13();
  L27():
    r30 = dyn base7(<sym graphics>);
    goto L4();
  D13():
    deopt 61 [];
  D15():
    deopt 65 [];
  L28():
    p5 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r33 = dyn require(p5);
    check L29() else D14();
  L30():
    p6 = prom<V +>{
      __ = ldf `~` in base;
      r34 = dyn __(<sym Ozone>, <sym Month>);
      return r34;
    };
    p7 = prom<V +>{
      airquality = ld airquality;
      airquality1 = force? airquality;
      checkMissing(airquality1);
      return airquality1;
    };
    r37 = dyn boxplot[, data](p6, p7);
    check L31() else D16();
  D14():
    deopt 63 [r33];
  D16():
    deopt 69 [r37];
  L29():
    goto L4();
  L31():
    kruskal_test2 = ldf `kruskal.test`;
    check L32() else D17();
  D17():
    deopt 71 [];
  L32():
    p8 = prom<V +>{
      __1 = ldf `~` in base;
      r38 = dyn __1(<sym Ozone>, <sym Month>);
      return r38;
    };
    p9 = prom<V +>{
      airquality2 = ld airquality;
      airquality3 = force? airquality2;
      checkMissing(airquality3);
      return airquality3;
    };
    r41 = dyn kruskal_test2[, data](p8, p9);
    check L33() else D18();
  D18():
    deopt 75 [r41];
  L33():
    popenv;
    return r41;
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
    r2 = dyn UseMethod("kruskal.test");
    goto L0(r2);
  L2():
    r = dyn base("kruskal.test");
    goto L0(r);
  }
}