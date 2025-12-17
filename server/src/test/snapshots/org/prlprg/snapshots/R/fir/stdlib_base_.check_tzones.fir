fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `.check_tzones` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg unique:cls, reg sapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg tzs:*, reg tzs1:V, reg c:L, reg tzs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg tzs6:V, reg r10:V, reg tzs7:*, reg tzs8:V, reg nzchar:cls, reg r11:V, reg __:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg tzs9:*, reg tzs10:V, reg length:cls, reg r15:V, reg r16:V, reg c1:L, reg warning:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg tzs11:*, reg tzs12:V, reg length1:cls, reg r21:V, reg c2:L, reg tzs13:*, reg tzs14:V, reg c3:L, reg tzs16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r22:V |
    mkenv;
    st `...` = ddd;
    unique = ldf unique;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p2 = prom<V +>{
      sapply = ldf sapply;
      p = prom<V +>{
        sym = ldf list;
        base = ldf list in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        list = ldf list;
        ddd1 = ld `...`;
        r2 = dyn list[`...`](ddd1);
        goto L0(r2);
      L2():
        r = dyn base(<sym ...>);
        goto L0(r);
      };
      p1 = prom<V +>{
        r4 = clos inner2501545716;
        return r4;
      };
      r6 = dyn sapply(p, p1);
      return r6;
    };
    r8 = dyn unique(p2);
    check L9() else D1();
  D1():
    deopt 3 [r8];
  L9():
    st tzs = r8;
    tzs = ld tzs;
    check L10() else D2();
  D2():
    deopt 5 [tzs];
  L10():
    tzs1 = force? tzs;
    checkMissing(tzs1);
    c = `is.object`(tzs1);
    if c then L11() else L12(tzs1);
  L0(dx1):
    st tzs = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L11():
    dr = tryDispatchBuiltin.1("[", tzs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(tzs3):
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L1(tzs6, r10):
    __ = ldf `[` in base;
    r12 = dyn __(tzs6, r10);
    goto L0(r12);
  L2(r14):
    r16 = `>`(r14, 1);
    c1 = `as.logical`(r16);
    if c1 then L22() else L3();
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L14():
    tzs7 = ld tzs;
    check L16() else D3();
  L15():
    r9 = dyn base1(<sym tzs>);
    goto L1(tzs3, r9);
  L18():
    tzs9 = ld tzs;
    check L20() else D5();
  L19():
    r13 = dyn base2(<sym tzs>);
    goto L2(r13);
  D3():
    deopt 9 [tzs3, tzs7];
  D5():
    deopt 17 [tzs9];
  L3():
    goto L4();
  L4():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L16():
    tzs8 = force? tzs7;
    checkMissing(tzs8);
    nzchar = ldf nzchar in base;
    r11 = dyn nzchar(tzs8);
    check L17() else D4();
  L20():
    tzs10 = force? tzs9;
    checkMissing(tzs10);
    length = ldf length in base;
    r15 = dyn length(tzs10);
    check L21() else D6();
  L22():
    warning = ldf warning;
    check L23() else D7();
  D4():
    deopt 12 [tzs3, r11];
  D6():
    deopt 20 [r15];
  D7():
    deopt 24 [];
  L5(r20):
    c2 = `as.logical`(r20);
    if c2 then L30() else L6();
  L17():
    goto L1(tzs3, r11);
  L21():
    goto L2(r15);
  L23():
    r17 = dyn warning("'tzone' attributes are inconsistent");
    check L24() else D8();
  L26():
    tzs11 = ld tzs;
    check L28() else D9();
  L27():
    r19 = dyn base3(<sym tzs>);
    goto L5(r19);
  D8():
    deopt 26 [r17];
  D9():
    deopt 31 [tzs11];
  L6():
    popenv;
    return NULL;
  L24():
    goto L4();
  L28():
    tzs12 = force? tzs11;
    checkMissing(tzs12);
    length1 = ldf length in base;
    r21 = dyn length1(tzs12);
    check L29() else D10();
  L30():
    tzs13 = ld tzs;
    check L31() else D11();
  D10():
    deopt 34 [r21];
  D11():
    deopt 35 [tzs13];
  L29():
    goto L5(r21);
  L31():
    tzs14 = force? tzs13;
    checkMissing(tzs14);
    c3 = `is.object`(tzs14);
    if c3 then L32() else L33(tzs14);
  L7(dx3):
    popenv;
    return dx3;
  L32():
    dr2 = tryDispatchBuiltin.1("[", tzs14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(tzs16):
    __1 = ldf `[` in base;
    r22 = dyn __1(tzs16, 1);
    goto L7(r22);
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg y:*, reg y1:V, reg c:V, reg c1:L, reg y2:*, reg y3:V, reg c2:L, reg y5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st y = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>, "tzone");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L11() else L2();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "tzone");
    check L7() else D1();
  L8():
    y = ld y;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym y>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [y];
  L2():
    y2 = ld y;
    check L13() else D3();
  L7():
    goto L0(r2);
  L10():
    y1 = force? y;
    checkMissing(y1);
    c = `==`(y1, NULL);
    goto L1(c);
  L11():
    popenv;
    return "";
  D3():
    deopt 14 [y2];
  L13():
    y3 = force? y2;
    checkMissing(y3);
    c2 = `is.object`(y3);
    if c2 then L14() else L15(y3);
  L3(dx1):
    popenv;
    return dx1;
  L14():
    dr = tryDispatchBuiltin.1("[", y3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(y5):
    __ = ldf `[` in base;
    r5 = dyn __(y5, 1);
    goto L3(r5);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}