fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner435436126;
    st `diff.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner435436126(x, lag, differences, `...`) {
  (reg x:*, reg lag:*, reg differences:*, reg ddd:dots) -+> V { var x:*, var lag:*, reg lag_isMissing:L, reg lag_orDefault:*, var differences:*, reg differences_isMissing:L, reg differences_orDefault:*, var `...`:dots?, reg lag1:*, reg lag2:V, reg r:V, reg c:L, reg c1:V, reg differences1:*, reg differences2:V, reg r1:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r2:V, reg lag3:*, reg lag4:V, reg differences3:*, reg differences4:V, reg r4:V, reg NROW:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r6:V, reg r7:V, reg c7:L, reg x3:*, reg x4:V, reg c8:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg r11:cls, reg x7:*, reg x8:V, reg differences5:*, reg differences6:V, reg r12:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x9:V, reg r13:*, reg r14:V, reg tsLag:cls, reg r15:*, reg r16:V, reg p1:p(V +), reg lag5:*, reg lag6:V, reg r18:V, reg p2:p(V +), reg r20:V, reg r21:V, reg sym:cls, reg base:cls, reg guard:L, reg r22:V, reg r23:V, reg x10:*, reg x11:V, reg attr:cls, reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg x12:*, reg x13:V, reg is_matrix:cls, reg r27:V, reg c10:L, reg colnames:cls, reg x14:*, reg x15:V, reg p3:p(V +), reg r29:V, reg l1:*, reg colnames__:cls, reg r30:V, reg ts:cls, reg r32:*, reg r33:V, reg p4:p(V +), reg xtsp:*, reg xtsp1:V, reg c11:L, reg xtsp3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r35:V, reg p5:p(V +), reg xtsp4:*, reg xtsp5:V, reg c12:L, reg xtsp7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r37:V, reg p6:p(V +), reg r39:V |
    mkenv;
    st x = x;
    lag_isMissing = missing.0(lag);
    if lag_isMissing then L0(1.0) else L0(lag);
  L0(lag_orDefault):
    st lag = lag_orDefault;
    differences_isMissing = missing.0(differences);
    if differences_isMissing then L1(1.0) else L1(differences);
  L1(differences_orDefault):
    st differences = differences_orDefault;
    st `...` = ddd;
    lag1 = ld lag;
    check L14() else D0();
  D0():
    deopt 0 [lag1];
  L14():
    lag2 = force? lag1;
    checkMissing(lag2);
    r = `<`(lag2, 1.0);
    c = `as.logical`(r);
    if c then L2(c) else L15();
  L2(c1):
    c6 = `as.logical`(c1);
    if c6 then L18() else L3();
  L15():
    differences1 = ld differences;
    check L16() else D1();
  D1():
    deopt 4 [c, differences1];
  L3():
    goto L4();
  L4():
    lag3 = ld lag;
    check L22() else D4();
  L16():
    differences2 = force? differences1;
    checkMissing(differences2);
    r1 = `<`(differences2, 1.0);
    c3 = `as.logical`(r1);
    c4 = `||`(c, c3);
    goto L2(c4);
  L18():
    stop = ldf stop;
    check L19() else D2();
  D2():
    deopt 10 [];
  D4():
    deopt 15 [lag3];
  L19():
    r2 = dyn stop("bad value for 'lag' or 'differences'");
    check L20() else D3();
  L22():
    lag4 = force? lag3;
    checkMissing(lag4);
    differences3 = ld differences;
    check L23() else D5();
  D3():
    deopt 12 [r2];
  D5():
    deopt 16 [lag4, differences3];
  L20():
    goto L4();
  L23():
    differences4 = force? differences3;
    checkMissing(differences4);
    r4 = `*`(lag4, differences4);
    NROW = ldf NROW;
    check L24() else D6();
  D6():
    deopt 19 [r4];
  L24():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r6 = dyn NROW(p);
    check L25() else D7();
  D7():
    deopt 21 [r4, r6];
  L25():
    r7 = `>=`(r4, r6);
    c7 = `as.logical`(r7);
    if c7 then L26() else L5();
  L5():
    r11 = clos inner182209845;
    st tsLag = r11;
    x7 = ld x;
    check L33() else D9();
  L26():
    x3 = ld x;
    check L27() else D8();
  D8():
    deopt 23 [x3];
  D9():
    deopt 34 [x7];
  L27():
    x4 = force? x3;
    checkMissing(x4);
    c8 = `is.object`(x4);
    if c8 then L28() else L29(x4);
  L33():
    x8 = force? x7;
    checkMissing(x8);
    st r = x8;
    differences5 = ld differences;
    check L34() else D10();
  D10():
    deopt 38 [1, differences5];
  L6(dx1):
    popenv;
    return dx1;
  L28():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(x6):
    __ = ldf `[` in base;
    r8 = dyn __(x6, 0);
    goto L6(r8);
  L34():
    differences6 = force? differences5;
    checkMissing(differences6);
    r12 = `:`(1, differences6);
    s = toForSeq(r12);
    l = length(s);
    i = 0;
    goto L8(i);
  L8(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l, i2);
    if c9 then L35() else L9();
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L9():
    x9 = `[[`(s, i2, NULL, TRUE);
    st i = x9;
    r13 = ld r;
    check L36() else D11();
  L35():
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  D11():
    deopt 41 [i2, r13];
  L10(r23):
    st xtsp = r23;
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L36():
    r14 = force? r13;
    checkMissing(r14);
    tsLag = ldf tsLag;
    check L37() else D12();
  L39():
    x10 = ld x;
    check L41() else D14();
  L40():
    r22 = dyn base(<sym x>, "tsp");
    goto L10(r22);
  D12():
    deopt 43 [i2, r14];
  D14():
    deopt 54 [x10];
  L11(r26):
    c10 = `as.logical`(r26);
    if c10 then L47() else L12();
  L37():
    p1 = prom<V +>{
      r15 = ld r;
      r16 = force? r15;
      checkMissing(r16);
      return r16;
    };
    p2 = prom<V +>{
      lag5 = ld lag;
      lag6 = force? lag5;
      checkMissing(lag6);
      r18 = `-`(<missing>, lag6);
      return r18;
    };
    r20 = dyn tsLag(p1, p2);
    check L38() else D13();
  L41():
    x11 = force? x10;
    checkMissing(x11);
    attr = ldf attr in base;
    r24 = dyn attr(x11, "tsp");
    check L42() else D15();
  L43():
    x12 = ld x;
    check L45() else D16();
  L44():
    r25 = dyn base1(<sym x>);
    goto L11(r25);
  D13():
    deopt 46 [i2, r14, r20];
  D15():
    deopt 58 [r24];
  D16():
    deopt 62 [x12];
  L12():
    goto L13();
  L13():
    ts = ldf ts;
    check L53() else D22();
  L38():
    r21 = `-`(r14, r20);
    st r = r21;
    goto L8(i2);
  L42():
    goto L10(r24);
  L45():
    x13 = force? x12;
    checkMissing(x13);
    is_matrix = ldf `is.matrix` in base;
    r27 = dyn is_matrix(x13);
    check L46() else D17();
  L47():
    colnames = ldf colnames;
    check L48() else D18();
  D17():
    deopt 65 [r27];
  D18():
    deopt 67 [];
  D22():
    deopt 78 [];
  L46():
    goto L11(r27);
  L48():
    p3 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r29 = dyn colnames(p3);
    check L49() else D19();
  L53():
    p4 = prom<V +>{
      r32 = ld r;
      r33 = force? r32;
      checkMissing(r33);
      return r33;
    };
    p5 = prom<V +>{
      xtsp = ld xtsp;
      xtsp1 = force? xtsp;
      checkMissing(xtsp1);
      c11 = `is.object`(xtsp1);
      if c11 then L1() else L2(xtsp1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", xtsp1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(xtsp3):
      __1 = ldf `[` in base;
      r35 = dyn __1(xtsp3, 2);
      goto L0(r35);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      xtsp4 = ld xtsp;
      xtsp5 = force? xtsp4;
      checkMissing(xtsp5);
      c12 = `is.object`(xtsp5);
      if c12 then L1() else L2(xtsp5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", xtsp5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(xtsp7):
      __2 = ldf `[` in base;
      r37 = dyn __2(xtsp7, 3);
      goto L0(r37);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r39 = dyn ts[, end, frequency](p4, p5, p6);
    check L54() else D23();
  D19():
    deopt 69 [r29];
  D23():
    deopt 84 [r39];
  L49():
    l1 = ld r;
    colnames__ = ldf `colnames<-`;
    check L50() else D20();
  L54():
    popenv;
    return r39;
  D20():
    deopt 71 [r29, l1, r29];
  L50():
    r30 = dyn colnames__(l1, NULL, r29);
    check L51() else D21();
  D21():
    deopt 73 [r29, r30];
  L51():
    st r = r30;
    goto L13();
  }
}
fun inner182209845(x, k) {
  (reg x:*, reg k:*) -+> V { var x:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, reg tsp:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:*, reg p2:V, reg k1:*, reg k2:V, reg p3:*, reg p4:V, reg c:L, reg p7:V, reg k4:V, reg p8:V, reg dr:V, reg dc:L, reg dx:V, reg p10:V, reg k6:V, reg dx1:V, reg __:cls, reg r2:V, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg p13:V, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg r10:V, reg r11:V, reg l:*, reg tsp__:cls, reg r12:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(1.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    tsp = ldf tsp;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn tsp(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st p = r1;
    p1 = ld p;
    check L5() else D2();
  D2():
    deopt 5 [p1];
  L5():
    p2 = force? p1;
    checkMissing(p2);
    k1 = ld k;
    check L6() else D3();
  D3():
    deopt 6 [p2, k1];
  L6():
    k2 = force? k1;
    checkMissing(k2);
    p3 = ld p;
    check L7() else D4();
  D4():
    deopt 7 [p2, k2, p3];
  L7():
    p4 = force? p3;
    checkMissing(p4);
    c = `is.object`(p4);
    if c then L8() else L9(p2, k2, p4);
  L1(p10, k6, dx1):
    r3 = `/`(k6, dx1);
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L8():
    dr = tryDispatchBuiltin.1("[", p4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(p2, k2, dr);
  L9(p7, k4, p8):
    __ = ldf `[` in base;
    r2 = dyn __(p8, 3);
    goto L1(p7, k4, r2);
  L2(p13, r7, r8):
    r10 = `*`(r7, r8);
    r11 = `-`(p13, r10);
    l = ld x;
    tsp__ = ldf `tsp<-`;
    check L14() else D6();
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(p2, k2, dx);
  L11():
    c1 = ldf c in base;
    r9 = dyn c1(1.0, 1.0, 0.0);
    check L13() else D5();
  L12():
    r6 = dyn base(1.0, 1.0, 0.0);
    goto L2(p10, r3, r6);
  D5():
    deopt 18 [p10, r3, r9];
  D6():
    deopt 22 [r11, l, r11];
  L13():
    goto L2(p10, r3, r9);
  L14():
    r12 = dyn tsp__(l, NULL, r11);
    check L15() else D7();
  D7():
    deopt 24 [r11, r12];
  L15():
    st x = r12;
    x3 = ld x;
    check L16() else D8();
  D8():
    deopt 26 [x3];
  L16():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  }
}