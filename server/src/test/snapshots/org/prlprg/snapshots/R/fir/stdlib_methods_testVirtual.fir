fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3558915987;
    st testVirtual = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3558915987(properties, extends, prototype, where) {
  (reg properties:*, reg extends:*, reg prototype:*, reg where:*) -+> V { var properties:*, var extends:*, var prototype:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg extends1:*, reg extends2:V, reg length:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg extends3:*, reg extends4:V, reg names:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg en:*, reg en1:V, reg match:cls, reg r10:V, reg is_na:cls, reg r11:V, reg r12:V, reg c1:L, reg en2:*, reg en3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg getClassDef:cls, reg what:*, reg what1:V, reg p:p(V +), reg packageSlot:cls, reg extends5:*, reg extends6:V, reg c3:L, reg extends8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg what2:*, reg what3:V, reg __:cls, reg r16:V, reg p1:p(V +), reg r18:V, reg p2:p(V +), reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg i7:I, reg r22:V, reg enDef:*, reg enDef1:V, reg c4:V, reg r23:V, reg c5:L, reg i9:I, reg c7:V, reg isFALSE:cls, reg __1:cls, reg r24:V, reg p3:p(V +), reg r26:V, reg c8:L, reg c9:V, reg c11:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg properties1:*, reg properties2:V, reg length1:cls, reg r31:V, reg r32:V, reg c12:L, reg c14:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg c17:L, reg r34:V, reg prototype1:*, reg prototype2:V, reg c18:V, reg c19:L, reg c20:V |
    mkenv;
    st properties = properties;
    st extends = extends;
    st prototype = prototype;
    st where = where;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    c = `as.logical`(r1);
    if c then L21() else L1();
  L17():
    extends1 = ld extends;
    check L19() else D0();
  L18():
    r = dyn base(<sym extends>);
    goto L0(r);
  D0():
    deopt 2 [extends1];
  L1():
    goto L13();
  L13():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L19():
    extends2 = force? extends1;
    checkMissing(extends2);
    length = ldf length in base;
    r2 = dyn length(extends2);
    check L20() else D1();
  L21():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  D1():
    deopt 5 [r2];
  L2(r4):
    st en = r4;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L14(r30):
    r32 = `==`(r30, 0);
    c12 = `as.logical`(r32);
    if c12 then L55() else L15(c12);
  L20():
    goto L0(r2);
  L22():
    extends3 = ld extends;
    check L24() else D2();
  L23():
    r3 = dyn base1(<sym extends>);
    goto L2(r3);
  L51():
    properties1 = ld properties;
    check L53() else D13();
  L52():
    r29 = dyn base5(<sym properties>);
    goto L14(r29);
  D2():
    deopt 8 [extends3];
  D13():
    deopt 63 [properties1];
  L3(r7):
    r12 = `!`(r7);
    c1 = `as.logical`(r12);
    if c1 then L33() else L5();
  L15(c14):
    visible.0();
    popenv;
    return c14;
  L24():
    extends4 = force? extends3;
    checkMissing(extends4);
    names = ldf names in base;
    r5 = dyn names(extends4);
    check L25() else D3();
  L26():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L27():
    r6 = dyn base2(<lang match("VIRTUAL", en)>);
    goto L3(r6);
  L53():
    properties2 = force? properties1;
    checkMissing(properties2);
    length1 = ldf length in base;
    r31 = dyn length1(properties2);
    check L54() else D14();
  L55():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L56() else L57();
  D3():
    deopt 11 [r5];
  D14():
    deopt 66 [r31];
  L4(r9):
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(r9);
    check L32() else D6();
  L5():
    en2 = ld en;
    check L36() else D7();
  L16(c17, r34):
    c19 = `as.logical`(r34);
    c20 = `&&`(c17, c19);
    goto L15(c20);
  L25():
    goto L2(r5);
  L28():
    en = ld en;
    check L30() else D4();
  L29():
    r8 = dyn base3("VIRTUAL", <sym en>);
    goto L4(r8);
  L33():
    popenv;
    return TRUE;
  L54():
    goto L14(r31);
  L56():
    prototype1 = ld prototype;
    check L58() else D15();
  L57():
    r33 = dyn base6(<sym prototype>);
    goto L16(c12, r33);
  D4():
    deopt 18 [en];
  D6():
    deopt 25 [r11];
  D7():
    deopt 32 [en2];
  D15():
    deopt 70 [c12, prototype1];
  L30():
    en1 = force? en;
    checkMissing(en1);
    match = ldf match in base;
    r10 = dyn match("VIRTUAL", en1, NA_INT, NULL);
    check L31() else D5();
  L32():
    goto L3(r11);
  L36():
    en3 = force? en2;
    checkMissing(en3);
    s = toForSeq(en3);
    l = length(s);
    i = 0;
    goto L7(i);
  L58():
    prototype2 = force? prototype1;
    checkMissing(prototype2);
    c18 = `==`(prototype2, NULL);
    goto L16(c12, c18);
  D5():
    deopt 23 [r10];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L37() else L12();
  L31():
    goto L4(r10);
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    getClassDef = ldf getClassDef;
    check L38() else D8();
  L37():
    goto L13();
  D8():
    deopt 35 [i2];
  L38():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p2 = prom<V +>{
      packageSlot = ldf packageSlot;
      p1 = prom<V +>{
        extends5 = ld extends;
        extends6 = force? extends5;
        checkMissing(extends6);
        c3 = `is.object`(extends6);
        if c3 then L1() else L2(extends6);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", extends6);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(extends8):
        what2 = ld what;
        what3 = force? what2;
        __ = ldf `[[` in base;
        r16 = dyn __(extends8, what3);
        goto L0(r16);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r18 = dyn packageSlot(p1);
      return r18;
    };
    r20 = dyn getClassDef[, package](p, p2);
    check L39() else D9();
  D9():
    deopt 39 [i2, r20];
  L39():
    st enDef = r20;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L8(i7, r22):
    r23 = `!`(r22);
    c5 = `as.logical`(r23);
    if c5 then L43() else L9(i7, c5);
  L40():
    enDef = ld enDef;
    check L42() else D10();
  L41():
    r21 = dyn base4(<sym enDef>);
    goto L8(i2, r21);
  D10():
    deopt 42 [i2, enDef];
  L9(i9, c7):
    c11 = `as.logical`(c7);
    if c11 then L47() else L10();
  L42():
    enDef1 = force? enDef;
    checkMissing(enDef1);
    c4 = `==`(enDef1, NULL);
    goto L8(i2, c4);
  L43():
    isFALSE = ldf isFALSE;
    check L44() else D11();
  D11():
    deopt 47 [i7, c5];
  L10():
    goto L7(i9);
  L44():
    p3 = prom<V +>{
      __1 = ldf `@` in base;
      r24 = dyn __1(<sym enDef>, <sym virtual>);
      return r24;
    };
    r26 = dyn isFALSE(p3);
    check L45() else D12();
  L47():
    popenv;
    return FALSE;
  D12():
    deopt 49 [i7, c5, r26];
  L45():
    c8 = `as.logical`(r26);
    c9 = `&&`(c5, c8);
    goto L9(i7, c9);
  }
}