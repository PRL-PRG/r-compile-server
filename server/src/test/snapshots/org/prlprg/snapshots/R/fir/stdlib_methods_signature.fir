fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st signature = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg names:cls, reg value:*, reg value1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg value2:*, reg value3:V, reg r7:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg value4:*, reg value5:V, reg c1:L, reg i6:I, reg value7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg i13:I, reg r10:V, reg sigi:*, reg sigi1:V, reg c2:L, reg r11:V, reg c3:L, reg i14:I, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg i18:I, reg c8:L, reg r13:V, reg sigi2:*, reg sigi3:V, reg length:cls, reg r14:V, reg r15:V, reg c9:L, reg c10:V, reg c12:L, reg stop:cls, reg gettextf:cls, reg i22:*, reg i23:V, reg p1:p(V +), reg r17:V, reg p2:p(V +), reg r19:V, reg i24:I, reg setNames:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg value8:*, reg value9:V, reg as_character:cls, reg r23:V, reg p3:p(V +), reg names1:*, reg names2:V, reg p4:p(V +), reg r26:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    st value = r1;
    names = ldf names;
    check L14() else D2();
  L10():
    list = ldf list;
    check L12() else D0();
  L11():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  D2():
    deopt 7 [];
  L12():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L13() else D1();
  L14():
    p = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r4 = dyn names(p);
    check L15() else D3();
  D1():
    deopt 4 [r2];
  D3():
    deopt 9 [r4];
  L13():
    goto L0(r2);
  L15():
    st names = r4;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L1(r6):
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L2(i);
  L16():
    value2 = ld value;
    check L18() else D4();
  L17():
    r5 = dyn base1(<sym value>);
    goto L1(r5);
  D4():
    deopt 12 [value2];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L19() else L9();
  L18():
    value3 = force? value2;
    checkMissing(value3);
    r7 = seq_along(value3);
    goto L1(r7);
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    value4 = ld value;
    check L20() else D5();
  L19():
    setNames = ldf setNames;
    check L38() else D12();
  D5():
    deopt 15 [i2, value4];
  D12():
    deopt 47 [];
  L20():
    value5 = force? value4;
    checkMissing(value5);
    c1 = `is.object`(value5);
    if c1 then L21() else L22(i2, value5);
  L38():
    p3 = prom<V +>{
      sym4 = ldf `as.character`;
      base4 = ldf `as.character` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      value8 = ld value;
      value9 = force? value8;
      checkMissing(value9);
      as_character = ldf `as.character` in base;
      r23 = dyn as_character(value9);
      goto L0(r23);
    L2():
      r21 = dyn base4(<sym value>);
      goto L0(r21);
    };
    p4 = prom<V +>{
      names1 = ld names;
      names2 = force? names1;
      checkMissing(names2);
      return names2;
    };
    r26 = dyn setNames(p3, p4);
    check L39() else D13();
  D13():
    deopt 50 [r26];
  L3(i8, dx1):
    st sigi = dx1;
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L21():
    dr = tryDispatchBuiltin.1("[[", value5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(i2, dr);
  L22(i6, value7):
    i9 = ld i;
    check L24() else D6();
  L39():
    popenv;
    return r26;
  D6():
    deopt 17 [i6, value7, i9];
  L4(i13, r10):
    r11 = `!`(r10);
    c3 = `as.logical`(r11);
    if c3 then L5(i13, c3) else L28();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L24():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r8 = dyn __(value7, i10);
    goto L3(i6, r8);
  L25():
    sigi = ld sigi;
    check L27() else D7();
  L26():
    r9 = dyn base2(<sym sigi>);
    goto L4(i8, r9);
  D7():
    deopt 22 [i8, sigi];
  L5(i14, c4):
    c12 = `as.logical`(c4);
    if c12 then L34() else L7();
  L27():
    sigi1 = force? sigi;
    checkMissing(sigi1);
    c2 = `is.character`(sigi1);
    goto L4(i8, c2);
  L28():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L6(i18, c8, r13):
    r15 = `!=`(r13, 1);
    c9 = `as.logical`(r15);
    c10 = `||`(c8, c9);
    goto L5(i18, c10);
  L7():
    goto L8(i14);
  L8(i24):
    goto L2(i24);
  L29():
    sigi2 = ld sigi;
    check L31() else D8();
  L30():
    r12 = dyn base3(<sym sigi>);
    goto L6(i13, c3, r12);
  L34():
    stop = ldf stop;
    check L35() else D10();
  D8():
    deopt 28 [i13, c3, sigi2];
  D10():
    deopt 36 [i14];
  L31():
    sigi3 = force? sigi2;
    checkMissing(sigi3);
    length = ldf length in base;
    r14 = dyn length(sigi3);
    check L32() else D9();
  L35():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        i22 = ld i;
        i23 = force? i22;
        checkMissing(i23);
        return i23;
      };
      r17 = dyn gettextf("bad class specified for element %d (should be a single character string)", p1);
      return r17;
    };
    r19 = dyn stop[, domain](p2, NA_LGL);
    check L36() else D11();
  D9():
    deopt 31 [i13, c3, r14];
  D11():
    deopt 40 [i14, r19];
  L32():
    goto L6(i13, c3, r14);
  L36():
    goto L8(i14);
  }
}