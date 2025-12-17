fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg as_numeric:cls, reg r6:V, reg factor:cls, reg p:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg f:*, reg f1:V, reg as_numeric1:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg f2:*, reg f3:V, reg as_character:cls, reg r16:V, reg as_numeric2:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg levels:cls, reg f4:*, reg f5:V, reg p1:p(V +), reg r21:V, reg as_numeric3:cls, reg r22:V, reg c1:L, reg r24:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg f6:*, reg f7:V, reg __:cls, reg r25:V |
    mkenv;
    r = clos inner1649981529;
    st numeric = r;
    sym = ldf `as.numeric`;
    base = ldf `as.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0():
    factor = ldf factor;
    check L13() else D2();
  L7():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L8():
    r1 = dyn base(<lang c("-.1", " 2.7 ", "B")>);
    goto L0();
  D2():
    deopt 15 [];
  L1(r4):
    as_numeric = ldf `as.numeric` in base;
    r6 = dyn as_numeric(r4);
    check L12() else D1();
  L9():
    c = ldf c in base;
    r5 = dyn c("-.1", " 2.7 ", "B");
    check L11() else D0();
  L10():
    r3 = dyn base1("-.1", " 2.7 ", "B");
    goto L1(r3);
  L13():
    p = prom<V +>{
      return <int 5, 6, 7, 8, 9, 10>;
    };
    r8 = dyn factor(p);
    check L14() else D3();
  D0():
    deopt 11 [r5];
  D1():
    deopt 13 [r6];
  D3():
    deopt 17 [r8];
  L11():
    goto L1(r5);
  L12():
    goto L0();
  L14():
    st f = r8;
    sym2 = ldf `as.numeric`;
    base2 = ldf `as.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L2():
    sym3 = ldf `as.numeric`;
    base3 = ldf `as.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L15():
    f = ld f;
    check L17() else D4();
  L16():
    r9 = dyn base2(<sym f>);
    goto L2();
  D4():
    deopt 21 [f];
  L3():
    sym5 = ldf `as.numeric`;
    base5 = ldf `as.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L26() else L27();
  L17():
    f1 = force? f;
    checkMissing(f1);
    as_numeric1 = ldf `as.numeric` in base;
    r11 = dyn as_numeric1(f1);
    check L18() else D5();
  L19():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L21() else L22();
  L20():
    r12 = dyn base3(<lang as.character(f)>);
    goto L3();
  D5():
    deopt 24 [r11];
  L4(r15):
    as_numeric2 = ldf `as.numeric` in base;
    r17 = dyn as_numeric2(r15);
    check L25() else D8();
  L5(r19):
    c1 = `is.object`(r19);
    if c1 then L31() else L32(r19);
  L18():
    goto L2();
  L21():
    f2 = ld f;
    check L23() else D6();
  L22():
    r14 = dyn base4(<sym f>);
    goto L4(r14);
  L26():
    levels = ldf levels;
    check L28() else D9();
  L27():
    r18 = dyn base5(<lang levels(f)>);
    goto L5(r18);
  D6():
    deopt 29 [f2];
  D8():
    deopt 34 [r17];
  D9():
    deopt 38 [];
  L6(dx1):
    popenv;
    return dx1;
  L23():
    f3 = force? f2;
    checkMissing(f3);
    as_character = ldf `as.character` in base;
    r16 = dyn as_character(f3);
    check L24() else D7();
  L25():
    goto L3();
  L28():
    p1 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    r21 = dyn levels(p1);
    check L29() else D10();
  L31():
    dr = tryDispatchBuiltin.1("[", r19);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(r24):
    f6 = ld f;
    check L34() else D12();
  D7():
    deopt 32 [r16];
  D10():
    deopt 40 [r21];
  D12():
    deopt 43 [r24, f6];
  L24():
    goto L4(r16);
  L29():
    as_numeric3 = ldf `as.numeric` in base;
    r22 = dyn as_numeric3(r21);
    check L30() else D11();
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L34():
    f7 = force? f6;
    __ = ldf `[` in base;
    r25 = dyn __(r24, f7);
    goto L6(r25);
  D11():
    deopt 42 [r22];
  L30():
    goto L5(r22);
  }
}
fun inner1649981529(length) {
  (reg length:*) -+> V { var length:*, reg length_isMissing:L, reg length_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg length1:*, reg length2:V, reg vector:cls, reg r2:V |
    mkenv;
    length_isMissing = missing.0(length);
    if length_isMissing then L0(0) else L0(length);
  L0(length_orDefault):
    st length = length_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    length1 = ld length;
    check L4() else D0();
  L3():
    r = dyn base(<lang vector("double", length)>);
    goto L1(r);
  D0():
    deopt 3 [length1];
  L4():
    length2 = force? length1;
    checkMissing(length2);
    vector = ldf vector in base;
    r2 = dyn vector("double", length2);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    goto L1(r2);
  }
}