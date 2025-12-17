fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3909125298;
    st `summary.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3909125298(object, digits, `...`) {
  (reg object:*, reg digits:*, reg ddd:dots) -+> V { var object:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var `...`:dots?, reg summary_default:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg digits1:*, reg digits2:V, reg p1:p(V +), reg ddd1:dots?, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x:*, reg x1:V, reg names:cls, reg r10:V, reg match:cls, reg r11:V, reg c:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x2:*, reg x3:V, reg c1:L, reg x5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg m:*, reg m1:V, reg __:cls, reg r14:V, reg as_integer:cls, reg r15:V, reg x6:*, reg x7:V, reg c2:L, reg x9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg m2:*, reg m3:V, reg r16:V, reg __1:cls, reg r17:V, reg NAs:*, reg NAs1:V, reg l:*, reg attr__:cls, reg r18:V, reg _POSIXct:cls, reg x10:*, reg x11:V, reg p2:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg object3:*, reg object4:V, reg attr:cls, reg r22:V, reg p3:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg object5:*, reg object6:V, reg oldClass:cls, reg r28:V, reg c3:cls, reg r29:V, reg p4:p(V +), reg r31:V |
    mkenv;
    st object = object;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(15) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    summary_default = ldf `summary.default`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      unclass = ldf unclass in base;
      r2 = dyn unclass(object2);
      goto L0(r2);
    L2():
      r = dyn base(<sym object>);
      goto L0(r);
    };
    p1 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r5 = dyn summary_default[, digits, `...`](p, p1, ddd1);
    check L9() else D1();
  D1():
    deopt 6 [r5];
  L9():
    st x = r5;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L1(r7):
    st m = r7;
    c = `as.logical`(r7);
    if c then L17() else L3();
  L10():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L11():
    r6 = dyn base1("NA's", <lang names(x)>, 0);
    goto L1(r6);
  L2(r9):
    match = ldf match in base;
    r11 = dyn match("NA's", r9, 0, NULL);
    check L16() else D4();
  L3():
    goto L7();
  L7():
    _POSIXct = ldf `.POSIXct`;
    check L35() else D13();
  L12():
    x = ld x;
    check L14() else D2();
  L13():
    r8 = dyn base2(<sym x>);
    goto L2(r8);
  L17():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L18() else L19();
  D2():
    deopt 13 [x];
  D4():
    deopt 20 [r11];
  D13():
    deopt 50 [];
  L4(r13):
    st NAs = r13;
    x6 = ld x;
    check L26() else D8();
  L14():
    x1 = force? x;
    checkMissing(x1);
    names = ldf names in base;
    r10 = dyn names(x1);
    check L15() else D3();
  L16():
    goto L1(r11);
  L18():
    x2 = ld x;
    check L20() else D5();
  L19():
    r12 = dyn base3(<lang `[`(x, m)>);
    goto L4(r12);
  L35():
    p2 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    p3 = prom<V +>{
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      attr = ldf attr in base;
      r22 = dyn attr(object4, "tzone");
      goto L0(r22);
    L2():
      r20 = dyn base4(<sym object>, "tzone");
      goto L0(r20);
    };
    p4 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r25):
      return r25;
    L2():
      sym6 = ldf oldClass;
      base6 = ldf oldClass in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r24 = dyn base5("summaryDefault", "table", <lang oldClass(object)>);
      goto L0(r24);
    L1(r27):
      c3 = ldf c in base;
      r29 = dyn c3("summaryDefault", "table", r27);
      goto L0(r29);
    L4():
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      oldClass = ldf oldClass in base;
      r28 = dyn oldClass(object6);
      goto L1(r28);
    L5():
      r26 = dyn base6(<sym object>);
      goto L1(r26);
    };
    r31 = dyn _POSIXct[, tz, cl](p2, p3, p4);
    check L36() else D14();
  D3():
    deopt 16 [r10];
  D5():
    deopt 24 [x2];
  D8():
    deopt 32 [x6];
  D14():
    deopt 56 [r31];
  L15():
    goto L2(r10);
  L20():
    x3 = force? x2;
    checkMissing(x3);
    c1 = `is.object`(x3);
    if c1 then L21() else L22(x3);
  L26():
    x7 = force? x6;
    checkMissing(x7);
    c2 = `is.object`(x7);
    if c2 then L27() else L28(x7);
  L36():
    popenv;
    return r31;
  L5(dx1):
    as_integer = ldf `as.integer` in base;
    r15 = dyn as_integer(dx1);
    check L25() else D7();
  L6(dx3):
    st x = dx3;
    NAs = ld NAs;
    check L31() else D10();
  L21():
    dr = tryDispatchBuiltin.1("[", x3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(x5):
    m = ld m;
    check L24() else D6();
  L27():
    dr2 = tryDispatchBuiltin.1("[", x7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(x9):
    m2 = ld m;
    check L30() else D9();
  D6():
    deopt 26 [x5, m];
  D7():
    deopt 30 [r15];
  D9():
    deopt 34 [x9, m2];
  D10():
    deopt 39 [NAs];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L24():
    m1 = force? m;
    __ = ldf `[` in base;
    r14 = dyn __(x5, m1);
    goto L5(r14);
  L25():
    goto L4(r15);
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L30():
    m3 = force? m2;
    checkMissing(m3);
    r16 = `-`(<missing>, m3);
    __1 = ldf `[` in base;
    r17 = dyn __1(x9, r16);
    goto L6(r17);
  L31():
    NAs1 = force? NAs;
    checkMissing(NAs1);
    l = ld x;
    attr__ = ldf `attr<-`;
    check L32() else D11();
  D11():
    deopt 42 [NAs1, l, NAs1];
  L32():
    r18 = dyn attr__(l, NULL, "NAs", NAs1);
    check L33() else D12();
  D12():
    deopt 45 [NAs1, r18];
  L33():
    st x = r18;
    goto L7();
  }
}