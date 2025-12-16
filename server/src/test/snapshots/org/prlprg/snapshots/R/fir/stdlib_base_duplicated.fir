fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg x:*, reg x1:V, reg c1:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg duplicated:cls, reg x4:*, reg x5:V, reg p:p(V +), reg r6:V, reg r7:V, reg __:cls, reg r8:V, reg x6:*, reg x7:V, reg c2:L, reg x9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg duplicated1:cls, reg x10:*, reg x11:V, reg p1:p(V +), reg r10:V, reg r11:V, reg __1:cls, reg r12:V, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg xu:*, reg xu1:V, reg unique:cls, reg x12:*, reg x13:V, reg p2:p(V +), reg r16:V, reg identical:cls, reg r17:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg xu2:*, reg xu3:V, reg unique1:cls, reg x14:*, reg x15:V, reg p4:p(V +), reg r22:V, reg identical1:cls, reg r23:V, reg p5:p(V +), reg r25:V, reg duplicated2:cls, reg iris:*, reg iris1:V, reg p6:p(V +), reg r27:V, reg c3:L, reg r29:V, reg dr4:V, reg dc2:L, reg dx4:V, reg __2:cls, reg r30:V, reg duplicated3:cls, reg iris3:*, reg iris4:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg c4:cls, reg r34:V, reg p8:p(V +), reg r36:V, reg anyDuplicated:cls, reg iris5:*, reg iris6:V, reg p9:p(V +), reg r38:V, reg stopifnot1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg anyDuplicated1:cls, reg iris7:*, reg iris8:V, reg p10:p(V +), reg r42:V, reg identical2:cls, reg r43:V, reg p11:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg anyDuplicated2:cls, reg iris9:*, reg iris10:V, reg p12:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg c5:cls, reg r50:V, reg p13:p(V +), reg r52:V, reg identical3:cls, reg r53:V, reg p14:p(V +), reg r55:V, reg anyDuplicated3:cls, reg x16:*, reg x17:V, reg p15:p(V +), reg r57:V, reg anyDuplicated4:cls, reg x18:*, reg x19:V, reg p16:p(V +), reg r59:V |
    mkenv;
    r = clos inner969517609;
    st duplicated = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    st x = r2;
    x = ld x;
    check L7() else D1();
  L4():
    r3 = `:`(9.0, 20.0);
    c = ldf c in base;
    r4 = dyn c(r3, <int 1, 2, 3, 4, 5>, <int 3, 4, 5, 6, 7>, <int 0, 1, 2, 3, 4, 5, 6, 7, 8>);
    check L6() else D0();
  L5():
    r1 = dyn base(<lang `:`(9.0, 20.0)>, <lang `:`(1.0, 5.0)>, <lang `:`(3.0, 7.0)>, <lang `:`(0.0, 8.0)>);
    goto L0(r1);
  D0():
    deopt 16 [r4];
  D1():
    deopt 18 [x];
  L6():
    goto L0(r4);
  L7():
    x1 = force? x;
    checkMissing(x1);
    c1 = `is.object`(x1);
    if c1 then L8() else L9(x1);
  L1(dx1):
    st xu = dx1;
    x6 = ld x;
    check L13() else D4();
  L8():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(x3):
    duplicated = ldf duplicated;
    check L11() else D2();
  D2():
    deopt 21 [x3];
  D4():
    deopt 27 [x6];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L11():
    p = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r6 = dyn duplicated(p);
    check L12() else D3();
  L13():
    x7 = force? x6;
    checkMissing(x7);
    c2 = `is.object`(x7);
    if c2 then L14() else L15(x7);
  D3():
    deopt 23 [x3, r6];
  L2(dx3):
    st xu2 = dx3;
    stopifnot = ldf stopifnot;
    check L19() else D7();
  L12():
    r7 = `!`(r6);
    __ = ldf `[` in base;
    r8 = dyn __(x3, r7);
    goto L1(r8);
  L14():
    dr2 = tryDispatchBuiltin.1("[", x7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(dr2);
  L15(x9):
    duplicated1 = ldf duplicated;
    check L17() else D5();
  D5():
    deopt 30 [x9];
  D7():
    deopt 39 [];
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L17():
    p1 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r10 = dyn duplicated1[, fromLast](p1, TRUE);
    check L18() else D6();
  L19():
    p3 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      xu = ld xu;
      xu1 = force? xu;
      checkMissing(xu1);
      unique = ldf unique;
      p2 = prom<V +>{
        x12 = ld x;
        x13 = force? x12;
        checkMissing(x13);
        return x13;
      };
      r16 = dyn unique(p2);
      identical = ldf identical in base;
      r17 = dyn identical(xu1, r16, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r17);
    L2():
      r13 = dyn base1(<sym xu>, <lang unique(x)>);
      goto L0(r13);
    };
    p5 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      xu2 = ld xu2;
      xu3 = force? xu2;
      checkMissing(xu3);
      unique1 = ldf unique;
      p4 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r22 = dyn unique1[, fromLast](p4, TRUE);
      identical1 = ldf identical in base;
      r23 = dyn identical1(xu3, r22, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r23);
    L2():
      r19 = dyn base2(<sym xu2>, <lang unique(x, fromLast=TRUE)>);
      goto L0(r19);
    };
    r25 = dyn stopifnot(p3, p5);
    check L20() else D8();
  D6():
    deopt 34 [x9, r10];
  D8():
    deopt 42 [r25];
  L18():
    r11 = `!`(r10);
    __1 = ldf `[` in base;
    r12 = dyn __1(x9, r11);
    goto L2(r12);
  L20():
    duplicated2 = ldf duplicated;
    check L21() else D9();
  D9():
    deopt 44 [];
  L21():
    p6 = prom<V +>{
      iris = ld iris;
      iris1 = force? iris;
      checkMissing(iris1);
      return iris1;
    };
    r27 = dyn duplicated2(p6);
    check L22() else D10();
  D10():
    deopt 46 [r27];
  L22():
    c3 = `is.object`(r27);
    if c3 then L23() else L24(r27);
  L3():
    duplicated3 = ldf duplicated;
    check L26() else D11();
  L23():
    dr4 = tryDispatchBuiltin.1("[", r27);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L25() else L24(dr4);
  L24(r29):
    __2 = ldf `[` in base;
    r30 = dyn __2(r29, <int 140, 141, 142, 143>);
    goto L3();
  D11():
    deopt 51 [];
  L25():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3();
  L26():
    p7 = prom<V +>{
      iris3 = ld iris3;
      iris4 = force? iris3;
      checkMissing(iris4);
      return iris4;
    };
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c4 = ldf c in base;
      r34 = dyn c4(1.0, 3.0);
      goto L0(r34);
    L2():
      r32 = dyn base3(1.0, 3.0);
      goto L0(r32);
    };
    r36 = dyn duplicated3[, MARGIN](p7, p8);
    check L27() else D12();
  D12():
    deopt 55 [r36];
  L27():
    anyDuplicated = ldf anyDuplicated;
    check L28() else D13();
  D13():
    deopt 57 [];
  L28():
    p9 = prom<V +>{
      iris5 = ld iris;
      iris6 = force? iris5;
      checkMissing(iris6);
      return iris6;
    };
    r38 = dyn anyDuplicated(p9);
    check L29() else D14();
  D14():
    deopt 59 [r38];
  L29():
    stopifnot1 = ldf stopifnot;
    check L30() else D15();
  D15():
    deopt 61 [];
  L30():
    p11 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      anyDuplicated1 = ldf anyDuplicated;
      p10 = prom<V +>{
        iris7 = ld iris;
        iris8 = force? iris7;
        checkMissing(iris8);
        return iris8;
      };
      r42 = dyn anyDuplicated1(p10);
      identical2 = ldf identical in base;
      r43 = dyn identical2(r42, 143, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r43);
    L2():
      r39 = dyn base4(<lang anyDuplicated(iris)>, 143);
      goto L0(r39);
    };
    p14 = prom<V +>{
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      anyDuplicated2 = ldf anyDuplicated;
      p12 = prom<V +>{
        iris9 = ld iris3;
        iris10 = force? iris9;
        checkMissing(iris10);
        return iris10;
      };
      p13 = prom<V +>{
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r49):
        return r49;
      L1():
        c5 = ldf c in base;
        r50 = dyn c5(1.0, 3.0);
        goto L0(r50);
      L2():
        r48 = dyn base6(1.0, 3.0);
        goto L0(r48);
      };
      r52 = dyn anyDuplicated2[, MARGIN](p12, p13);
      identical3 = ldf identical in base;
      r53 = dyn identical3(r52, 143, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r53);
    L2():
      r45 = dyn base5(<lang anyDuplicated(iris3, MARGIN=c(1.0, 3.0))>, 143);
      goto L0(r45);
    };
    r55 = dyn stopifnot1(p11, p14);
    check L31() else D16();
  D16():
    deopt 64 [r55];
  L31():
    anyDuplicated3 = ldf anyDuplicated;
    check L32() else D17();
  D17():
    deopt 66 [];
  L32():
    p15 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    r57 = dyn anyDuplicated3(p15);
    check L33() else D18();
  D18():
    deopt 68 [r57];
  L33():
    anyDuplicated4 = ldf anyDuplicated;
    check L34() else D19();
  D19():
    deopt 70 [];
  L34():
    p16 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r59 = dyn anyDuplicated4[, fromLast](p16, TRUE);
    check L35() else D20();
  D20():
    deopt 74 [r59];
  L35():
    popenv;
    return r59;
  }
}
fun inner969517609(x, incomparables, `...`) {
  (reg x:*, reg incomparables:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("duplicated");
    goto L1(r2);
  L3():
    r = dyn base("duplicated");
    goto L1(r);
  }
}