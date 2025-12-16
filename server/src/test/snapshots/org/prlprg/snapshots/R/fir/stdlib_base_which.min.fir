fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg which_min:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg x2:*, reg x3:V, reg which_max:cls, reg r8:V, reg presidents:*, reg presidents1:V, reg c1:L, reg presidents3:V, reg dr:V, reg dc:L, reg dx:V, reg r9:V, reg __:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg presidents4:*, reg presidents5:V, reg range:cls, reg r13:V, reg which_min1:cls, reg presidents6:*, reg presidents7:V, reg p1:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg presidents8:*, reg presidents9:V, reg which_max1:cls, reg r18:V, reg rpois:cls, reg r19:V, reg l:*, reg c2:L, reg r21:L, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sample_int:cls, reg r24:V, reg ___:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg x4:*, reg x5:V, reg r28:V, reg which_max2:cls, reg r29:V, reg which_min2:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg list:cls, reg r32:V, reg p2:p(V +), reg r34:V, reg stopifnot:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg which_min3:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg list1:cls, reg r39:V, reg p3:p(V +), reg r41:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg c3:cls, reg r44:V, reg identical:cls, reg r45:V, reg p4:p(V +), reg r47:V |
    mkenv;
    r = clos inner354062069;
    st `which.min` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r2):
    st x = r2;
    which_min = ldf `which.min`;
    check L10() else D1();
  L7():
    c = ldf c in base;
    r3 = dyn c(<int 1, 2, 3, 4>, <int 0, 1, 2, 3, 4, 5>, 11.0);
    check L9() else D0();
  L8():
    r1 = dyn base(<lang `:`(1.0, 4.0)>, <lang `:`(0.0, 5.0)>, 11.0);
    goto L0(r1);
  D0():
    deopt 11 [r3];
  D1():
    deopt 14 [];
  L9():
    goto L0(r3);
  L10():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r5 = dyn which_min(p);
    check L11() else D2();
  D2():
    deopt 16 [r5];
  L11():
    sym1 = ldf `which.max`;
    base1 = ldf `which.max` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L1():
    presidents = ld presidents;
    check L16() else D5();
  L12():
    x2 = ld x;
    check L14() else D3();
  L13():
    r6 = dyn base1(<sym x>);
    goto L1();
  D3():
    deopt 19 [x2];
  D5():
    deopt 23 [presidents];
  L14():
    x3 = force? x2;
    checkMissing(x3);
    which_max = ldf `which.max` in base;
    r8 = dyn which_max(x3);
    check L15() else D4();
  L16():
    presidents1 = force? presidents;
    checkMissing(presidents1);
    c1 = `is.object`(presidents1);
    if c1 then L17() else L18(presidents1);
  D4():
    deopt 22 [r8];
  L2():
    sym2 = ldf range;
    base2 = ldf range in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L15():
    goto L1();
  L17():
    dr = tryDispatchBuiltin.1("[", presidents1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(presidents3):
    r9 = `:`(1.0, 30.0);
    __ = ldf `[` in base;
    r10 = dyn __(presidents3, r9);
    goto L2();
  L3():
    which_min1 = ldf `which.min`;
    check L24() else D8();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2();
  L20():
    presidents4 = ld presidents;
    check L22() else D6();
  L21():
    r11 = dyn base2[, `na.rm`](<sym presidents>, TRUE);
    goto L3();
  D6():
    deopt 32 [presidents4];
  D8():
    deopt 39 [];
  L22():
    presidents5 = force? presidents4;
    checkMissing(presidents5);
    range = ldf range in base;
    r13 = dyn range(presidents5, TRUE);
    check L23() else D7();
  L24():
    p1 = prom<V +>{
      presidents6 = ld presidents;
      presidents7 = force? presidents6;
      checkMissing(presidents7);
      return presidents7;
    };
    r15 = dyn which_min1(p1);
    check L25() else D9();
  D7():
    deopt 37 [r13];
  D9():
    deopt 41 [r15];
  L23():
    goto L3();
  L25():
    sym3 = ldf `which.max`;
    base3 = ldf `which.max` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L4():
    rpois = ldf rpois;
    check L30() else D12();
  L26():
    presidents8 = ld presidents;
    check L28() else D10();
  L27():
    r16 = dyn base3(<sym presidents>);
    goto L4();
  D10():
    deopt 44 [presidents8];
  D12():
    deopt 49 [];
  L28():
    presidents9 = force? presidents8;
    checkMissing(presidents9);
    which_max1 = ldf `which.max` in base;
    r18 = dyn which_max1(presidents9);
    check L29() else D11();
  L30():
    r19 = dyn rpois[, lambda](10000.0, 10.0);
    check L31() else D13();
  D11():
    deopt 47 [r18];
  D13():
    deopt 53 [r19];
  L29():
    goto L4();
  L31():
    st x = r19;
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L32() else L33(NA_LGL, l);
  L5(dx3):
    st x = dx3;
    sym4 = ldf `which.max`;
    base4 = ldf `which.max` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L32():
    dr2 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(NA_LGL, dr2);
  L33(r21, l2):
    sample_int = ldf `sample.int`;
    check L35() else D14();
  D14():
    deopt 59 [r21, l2, NA_LGL];
  L6():
    which_min2 = ldf `which.min`;
    check L41() else D18();
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L35():
    r24 = dyn sample_int(50.0, 20.0);
    check L36() else D15();
  L37():
    x4 = ld x;
    check L39() else D16();
  L38():
    r26 = dyn base4(<lang `>=`(x, 20.0)>);
    goto L6();
  D15():
    deopt 62 [r21, l2, NA_LGL, r24];
  D16():
    deopt 67 [x4];
  D18():
    deopt 74 [];
  L36():
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l2, NA_LGL, r24);
    goto L5(r25);
  L39():
    x5 = force? x4;
    checkMissing(x5);
    r28 = `>=`(x5, 20.0);
    which_max2 = ldf `which.max` in base;
    r29 = dyn which_max2(r28);
    check L40() else D17();
  L41():
    p2 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      list = ldf list in base;
      r32 = dyn list(7.0, 3.141592653589793);
      goto L0(r32);
    L2():
      r30 = dyn base5[A, pi](7.0, <sym pi>);
      goto L0(r30);
    };
    r34 = dyn which_min2(p2);
    check L42() else D19();
  D17():
    deopt 72 [r29];
  D19():
    deopt 76 [r34];
  L40():
    goto L6();
  L42():
    stopifnot = ldf stopifnot;
    check L43() else D20();
  D20():
    deopt 78 [];
  L43():
    p4 = prom<V +>{
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r36):
      return r36;
    L2():
      which_min3 = ldf `which.min`;
      p3 = prom<V +>{
        sym7 = ldf list;
        base7 = ldf list in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r38):
        return r38;
      L1():
        list1 = ldf list in base;
        r39 = dyn list1(7.0, 3.141592653589793);
        goto L0(r39);
      L2():
        r37 = dyn base7[A, pi](7.0, <sym pi>);
        goto L0(r37);
      };
      r41 = dyn which_min3(p3);
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r35 = dyn base6(<lang which.min(list(A=7.0, pi=pi))>, <lang c(pi=2)>);
      goto L0(r35);
    L1(r43):
      identical = ldf identical in base;
      r45 = dyn identical(r41, r43, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r45);
    L4():
      c3 = ldf c in base;
      r44 = dyn c3(2);
      goto L1(r44);
    L5():
      r42 = dyn base8[pi](2);
      goto L1(r42);
    };
    r47 = dyn stopifnot(p4);
    check L44() else D21();
  D21():
    deopt 80 [r47];
  L44():
    popenv;
    return r47;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg which_min:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang which.min(x)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    which_min = ldf `which.min` in base;
    r2 = dyn which_min(x2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}