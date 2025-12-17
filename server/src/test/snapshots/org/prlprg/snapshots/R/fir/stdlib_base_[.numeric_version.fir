fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3886051477;
    st `[.numeric_version` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3886051477(x, i, j) {
  (reg x:*, reg i:*, reg j:*) -+> V { var x:*, var i:*, var j:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg unclass:cls, reg r5:V, reg c1:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r8:V, reg dx2:V, reg lapply:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg unclass1:cls, reg r11:V, reg c2:L, reg r13:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg i3:*, reg i4:V, reg __1:cls, reg r14:V, reg p:p(V +), reg __2:*, reg __3:V, reg p1:p(V +), reg j1:*, reg j2:V, reg p2:p(V +), reg r18:V, reg vapply:cls, reg y:*, reg y1:V, reg p3:p(V +), reg r20:cls, reg p4:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg bad:*, reg bad1:V, reg any:cls, reg r25:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg integer:cls, reg r30:V, reg list:cls, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg bad2:*, reg bad3:V, reg sum:cls, reg r34:V, reg rep_int:cls, reg r35:V, reg l:*, reg c4:L, reg r37:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx5:V, reg r39:V, reg dx6:V, reg bad4:*, reg bad5:V, reg ___:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg x5:*, reg x6:V, reg class:cls, reg r44:V, reg l3:*, reg class__:cls, reg r45:V, reg y2:*, reg y3:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    c = `as.logical`(r1);
    if c then L15() else L1();
  L13():
    missing = ldf missing in base;
    r2 = dyn missing(<sym j>);
    goto L0(r2);
  L14():
    r = dyn base(<sym j>);
    goto L0(r);
  L1():
    lapply = ldf lapply;
    check L25() else D3();
  L4(dx2):
    st y = dx2;
    vapply = ldf vapply;
    check L27() else D5();
  L15():
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D3():
    deopt 13 [];
  D5():
    deopt 20 [];
  L2(r4):
    c1 = `is.object`(r4);
    if c1 then L20() else L21(r4);
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  L25():
    p = prom<V +>{
      sym2 = ldf unclass;
      base2 = ldf unclass in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r10):
      c2 = `is.object`(r10);
      if c2 then L4() else L5(r10);
    L2():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      unclass1 = ldf unclass in base;
      r11 = dyn unclass1(x4);
      goto L0(r11);
    L3():
      r9 = dyn base2(<sym x>);
      goto L0(r9);
    L1(dx4):
      return dx4;
    L4():
      dr2 = tryDispatchBuiltin.1("[", r10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r13):
      i3 = ld i;
      i4 = force? i3;
      __1 = ldf `[` in base;
      r14 = dyn __1(r13, i4);
      goto L1(r14);
    L6():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx3);
    };
    p1 = prom<V +>{
      __2 = ld `[`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    p2 = prom<V +>{
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      return j2;
    };
    r18 = dyn lapply(p, p1, p2);
    check L26() else D4();
  L27():
    p3 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p4 = prom<V +>{
      r20 = clos inner3207722480;
      return r20;
    };
    r22 = dyn vapply(p3, p4, NA_LGL);
    check L28() else D6();
  D0():
    deopt 5 [x1];
  D4():
    deopt 17 [r18];
  D6():
    deopt 24 [r22];
  L3(dx1):
    goto L4(dx1);
  L18():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r5 = dyn unclass(x2);
    check L19() else D1();
  L20():
    dr = tryDispatchBuiltin.1("[", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(r7):
    i1 = ld i;
    check L23() else D2();
  L26():
    goto L4(r18);
  L28():
    st bad = r22;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  D1():
    deopt 8 [r5];
  D2():
    deopt 9 [r7, i1];
  L5(r24):
    c3 = `as.logical`(r24);
    if c3 then L33() else L6();
  L19():
    goto L2(r5);
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L23():
    i2 = force? i1;
    __ = ldf `[` in base;
    r8 = dyn __(r7, i2);
    goto L3(r8);
  L29():
    bad = ld bad;
    check L31() else D7();
  L30():
    r23 = dyn base3(<sym bad>);
    goto L5(r23);
  D7():
    deopt 28 [bad];
  L6():
    goto L11();
  L11():
    sym7 = ldf class;
    base7 = ldf class in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L51() else L52();
  L31():
    bad1 = force? bad;
    checkMissing(bad1);
    any = ldf any in base;
    r25 = dyn any(bad1);
    check L32() else D8();
  L33():
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  D8():
    deopt 31 [r25];
  L7(r27):
    l = ld y;
    c4 = `is.object`(l);
    if c4 then L46() else L47(r27, l);
  L12(r43):
    l3 = ld y;
    class__ = ldf `class<-`;
    check L55() else D18();
  L32():
    goto L5(r25);
  L34():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L36() else L37();
  L35():
    r26 = dyn base4(<lang list(integer())>, <lang sum(bad)>);
    goto L7(r26);
  L51():
    x5 = ld x;
    check L53() else D16();
  L52():
    r42 = dyn base7(<sym x>);
    goto L12(r42);
  D16():
    deopt 58 [x5];
  D18():
    deopt 63 [r43, l3, r43];
  L8(r29):
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L41() else L42();
  L10(r39, dx6):
    st y = dx6;
    goto L11();
  L36():
    integer = ldf integer;
    check L38() else D9();
  L37():
    r28 = dyn base5(<lang integer()>);
    goto L8(r28);
  L46():
    dr4 = tryDispatchBuiltin.0("[<-", l, r27);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(r27, dr4);
  L47(r37, l2):
    bad4 = ld bad;
    check L49() else D15();
  L53():
    x6 = force? x5;
    checkMissing(x6);
    class = ldf class in base;
    r44 = dyn class(x6);
    check L54() else D17();
  L55():
    r45 = dyn class__(l3, NULL, r43);
    check L56() else D19();
  D9():
    deopt 37 [];
  D15():
    deopt 50 [r37, l2, r27, bad4];
  D17():
    deopt 61 [r44];
  D19():
    deopt 65 [r43, r45];
  L9(r33):
    rep_int = ldf `rep.int` in base;
    r35 = dyn rep_int(r29, r33);
    check L45() else D14();
  L38():
    r30 = dyn integer();
    check L39() else D10();
  L41():
    bad2 = ld bad;
    check L43() else D12();
  L42():
    r32 = dyn base6(<sym bad>);
    goto L9(r32);
  L48():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L10(r27, dx5);
  L49():
    bad5 = force? bad4;
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l2, r27, bad5);
    goto L10(r37, r40);
  L54():
    goto L12(r44);
  L56():
    st y = r45;
    y2 = ld y;
    check L57() else D20();
  D10():
    deopt 38 [r30];
  D12():
    deopt 43 [bad2];
  D14():
    deopt 48 [r35];
  D20():
    deopt 67 [y2];
  L39():
    list = ldf list in base;
    r31 = dyn list(r30);
    check L40() else D11();
  L43():
    bad3 = force? bad2;
    checkMissing(bad3);
    sum = ldf sum in base;
    r34 = dyn sum(bad3);
    check L44() else D13();
  L45():
    goto L7(r35);
  L57():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D11():
    deopt 40 [r31];
  D13():
    deopt 46 [r34];
  L40():
    goto L8(r31);
  L44():
    goto L9(r34);
  }
}
fun inner3207722480(t) {
  (reg t:*) -+> V { var t:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg t1:*, reg t2:V, reg c:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg t3:*, reg t4:V, reg anyNA:cls, reg r4:V, reg c7:L, reg c8:V |
    mkenv;
    st t = t;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L1(c1) else L6();
  L3():
    t1 = ld t;
    check L5() else D0();
  L4():
    r = dyn base(<sym t>);
    goto L0(r);
  D0():
    deopt 1 [t1];
  L1(c2):
    popenv;
    return c2;
  L5():
    t2 = force? t1;
    checkMissing(t2);
    c = `==`(t2, NULL);
    goto L0(c);
  L6():
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2(c6, r3):
    c7 = `as.logical`(r3);
    c8 = `||`(c6, c7);
    goto L1(c8);
  L7():
    t3 = ld t;
    check L9() else D1();
  L8():
    r2 = dyn base1(<sym t>);
    goto L2(c1, r2);
  D1():
    deopt 6 [c1, t3];
  L9():
    t4 = force? t3;
    checkMissing(t4);
    anyNA = ldf anyNA in base;
    r4 = dyn anyNA(t4);
    check L10() else D2();
  D2():
    deopt 9 [c1, r4];
  L10():
    goto L2(c1, r4);
  }
}