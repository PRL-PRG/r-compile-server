fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3282597222;
    st `.hasThisSubclass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3282597222(classDefs, supers, plabel) {
  (reg classDefs:*, reg supers:*, reg plabel:*) -+> V { var classDefs:*, var supers:*, var plabel:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg plabel1:*, reg plabel2:V, reg r2:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg __:cls, reg r3:V, reg __1:cls, reg r4:V, reg supers1:*, reg supers2:V, reg c1:L, reg i6:I, reg supers4:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __2:cls, reg r5:V, reg plabel3:*, reg plabel4:V, reg c2:L, reg i12:I, reg plabel6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg i15:*, reg i16:V, reg __3:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg i19:I, reg r8:V, reg si:*, reg si1:V, reg identical:cls, reg r9:V, reg c3:L, reg i20:I, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg i24:I, reg c8:L, reg r11:V, reg cl:*, reg cl1:V, reg si2:*, reg si3:V, reg identical1:cls, reg r12:V, reg c9:L, reg i26:I, reg c12:L, reg c13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg i29:I, reg c18:L, reg c19:L, reg r14:V, reg pkg:*, reg pkg1:V, reg pki:*, reg pki1:V, reg identical2:cls, reg r15:V, reg c20:L, reg c21:V, reg c24:L, reg c25:V, reg c27:L, reg getClassDef:cls, reg si4:*, reg si5:V, reg p:p(V +), reg pki2:*, reg pki3:V, reg p1:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg i38:I, reg r21:V, reg cli:*, reg cli1:V, reg c28:V, reg c29:L, reg __4:cls, reg r24:V, reg c30:L, reg i44:I, reg r26:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i46:I, reg dx5:V, reg cl2:*, reg cl3:V, reg __5:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg i49:I, reg r29:V, reg sub:*, reg sub1:V, reg c31:V, reg c32:L, reg i50:I, reg c33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg i54:I, reg c37:L, reg r31:V, reg pkg2:*, reg pkg3:V, reg __6:cls, reg r32:V, reg identical3:cls, reg r33:V, reg r34:V, reg c38:L, reg c39:V, reg c41:L |
    mkenv;
    st classDefs = classDefs;
    st supers = supers;
    st plabel = plabel;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L21():
    plabel1 = ld plabel;
    check L23() else D0();
  L22():
    r = dyn base(<sym plabel>);
    goto L0(r);
  D0():
    deopt 1 [plabel1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L24() else L20();
  L23():
    plabel2 = force? plabel1;
    checkMissing(plabel2);
    r2 = seq_along(plabel2);
    goto L0(r2);
  L20():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    __ = ldf `@` in base;
    r3 = dyn __(<lang `[[`(classDefs, i)>, <sym package>);
    st pkg = r3;
    __1 = ldf `@` in base;
    r4 = dyn __1(<lang `[[`(classDefs, i)>, <sym className>);
    st cl = r4;
    supers1 = ld supers;
    check L25() else D1();
  L24():
    popenv;
    return TRUE;
  D1():
    deopt 10 [i2, supers1];
  L25():
    supers2 = force? supers1;
    checkMissing(supers2);
    c1 = `is.object`(supers2);
    if c1 then L26() else L27(i2, supers2);
  L2(i8, dx1):
    st si = dx1;
    plabel3 = ld plabel;
    check L30() else D3();
  L26():
    dr = tryDispatchBuiltin.1("[[", supers2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(i2, dr);
  L27(i6, supers4):
    i9 = ld i;
    check L29() else D2();
  D2():
    deopt 12 [i6, supers4, i9];
  D3():
    deopt 16 [i8, plabel3];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L29():
    i10 = force? i9;
    __2 = ldf `[[` in base;
    r5 = dyn __2(supers4, i10);
    goto L2(i6, r5);
  L30():
    plabel4 = force? plabel3;
    checkMissing(plabel4);
    c2 = `is.object`(plabel4);
    if c2 then L31() else L32(i8, plabel4);
  L3(i14, dx3):
    st pki = dx3;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L31():
    dr2 = tryDispatchBuiltin.1("[[", plabel4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(i8, dr2);
  L32(i12, plabel6):
    i15 = ld i;
    check L34() else D4();
  D4():
    deopt 18 [i12, plabel6, i15];
  L4(i19, r8):
    c3 = `as.logical`(r8);
    if c3 then L5(i19, c3) else L39();
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(i8, dx2);
  L34():
    i16 = force? i15;
    __3 = ldf `[[` in base;
    r6 = dyn __3(plabel6, i16);
    goto L3(i12, r6);
  L35():
    si = ld si;
    check L37() else D5();
  L36():
    r7 = dyn base1(<sym si>, "ANY");
    goto L4(i14, r7);
  D5():
    deopt 24 [i14, si];
  L5(i20, c4):
    c27 = `as.logical`(c4);
    if c27 then L53() else L9();
  L37():
    si1 = force? si;
    checkMissing(si1);
    identical = ldf identical in base;
    r9 = dyn identical(si1, "ANY", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L38() else D6();
  L39():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  D6():
    deopt 35 [i14, r9];
  L6(i24, c8, r11):
    c9 = `as.logical`(r11);
    if c9 then L45() else L7(i24, c8, c9);
  L9():
    getClassDef = ldf getClassDef;
    check L56() else D13();
  L38():
    goto L4(i14, r9);
  L40():
    cl = ld cl;
    check L42() else D7();
  L41():
    r10 = dyn base2(<sym cl>, <sym si>);
    goto L6(i19, c3, r10);
  L53():
    goto L1(i20);
  D7():
    deopt 38 [i19, c3, cl];
  D13():
    deopt 73 [i20];
  L7(i26, c12, c13):
    c24 = `as.logical`(c13);
    c25 = `||`(c12, c24);
    goto L5(i26, c25);
  L42():
    cl1 = force? cl;
    checkMissing(cl1);
    si2 = ld si;
    check L43() else D8();
  L45():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L56():
    p = prom<V +>{
      si4 = ld si;
      si5 = force? si4;
      checkMissing(si5);
      return si5;
    };
    p1 = prom<V +>{
      pki2 = ld pki;
      pki3 = force? pki2;
      checkMissing(pki3);
      return pki3;
    };
    r19 = dyn getClassDef[, package](p, p1);
    check L57() else D14();
  D8():
    deopt 40 [i19, c3, si2];
  D14():
    deopt 77 [i20, r19];
  L8(i29, c18, c19, r14):
    c20 = `as.logical`(r14);
    c21 = `&&`(c19, c20);
    goto L7(i29, c18, c21);
  L43():
    si3 = force? si2;
    checkMissing(si3);
    identical1 = ldf identical in base;
    r12 = dyn identical1(cl1, si3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L44() else D9();
  L46():
    pkg = ld pkg;
    check L48() else D10();
  L47():
    r13 = dyn base3(<sym pkg>, <sym pki>);
    goto L8(i24, c8, c9, r13);
  L57():
    st cli = r19;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  D9():
    deopt 50 [i19, c3, r12];
  D10():
    deopt 53 [i24, c8, c9, pkg];
  L11(i38, r21):
    c29 = `as.logical`(r21);
    if c29 then L61() else L12();
  L44():
    goto L6(i19, c3, r12);
  L48():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    pki = ld pki;
    check L49() else D11();
  L58():
    cli = ld cli;
    check L60() else D15();
  L59():
    r20 = dyn base4(<sym cli>);
    goto L11(i20, r20);
  D11():
    deopt 55 [i24, c8, c9, pki];
  D15():
    deopt 80 [i20, cli];
  L12():
    __4 = ldf `@` in base;
    r24 = dyn __4(<sym cli>, <sym subclasses>);
    c30 = `is.object`(r24);
    if c30 then L64() else L65(i38, r24);
  L49():
    pki1 = force? pki;
    checkMissing(pki1);
    identical2 = ldf identical in base;
    r15 = dyn identical2(pkg1, pki1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L50() else D12();
  L60():
    cli1 = force? cli;
    checkMissing(cli1);
    c28 = `==`(cli1, NULL);
    goto L11(i20, c28);
  L61():
    popenv;
    return FALSE;
  D12():
    deopt 65 [i24, c8, c9, r15];
  L14(i46, dx5):
    st sub = dx5;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  L50():
    goto L8(i24, c8, c9, r15);
  L64():
    dr4 = tryDispatchBuiltin.1("[[", r24);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L66() else L65(i38, dr4);
  L65(i44, r26):
    cl2 = ld cl;
    check L67() else D16();
  D16():
    deopt 90 [i44, r26, cl2];
  L15(i49, r29):
    c32 = `as.logical`(r29);
    if c32 then L16(i49, c32) else L71();
  L66():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(i38, dx4);
  L67():
    cl3 = force? cl2;
    __5 = ldf `[[` in base;
    r27 = dyn __5(r26, cl3);
    goto L14(i44, r27);
  L68():
    sub = ld sub;
    check L70() else D17();
  L69():
    r28 = dyn base5(<sym sub>);
    goto L15(i46, r28);
  D17():
    deopt 95 [i46, sub];
  L16(i50, c33):
    c41 = `as.logical`(c33);
    if c41 then L77() else L18();
  L70():
    sub1 = force? sub;
    checkMissing(sub1);
    c31 = `==`(sub1, NULL);
    goto L15(i46, c31);
  L71():
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L17(i54, c37, r31):
    r34 = `!`(r31);
    c38 = `as.logical`(r34);
    c39 = `||`(c37, c38);
    goto L16(i54, c39);
  L18():
    goto L1(i50);
  L72():
    pkg2 = ld pkg;
    check L74() else D18();
  L73():
    r30 = dyn base6(<sym pkg>, <lang `@`(sub, package)>);
    goto L17(i49, c32, r30);
  L77():
    popenv;
    return FALSE;
  D18():
    deopt 100 [i49, c32, pkg2];
  L74():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    __6 = ldf `@` in base;
    r32 = dyn __6(<sym sub>, <sym package>);
    identical3 = ldf identical in base;
    r33 = dyn identical3(pkg3, r32, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L75() else D19();
  D19():
    deopt 112 [i49, c32, r33];
  L75():
    goto L17(i49, c32, r33);
  }
}