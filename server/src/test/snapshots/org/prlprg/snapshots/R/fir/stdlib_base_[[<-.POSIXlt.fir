fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner838928092;
    st `[[<-.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner838928092(x, i, value) {
  (reg x:*, reg i:*, reg value:*) -+> V { var x:*, var i:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r2:V, reg l:*, reg class__:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg r7:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c5:L, reg r9:V, reg i1:*, reg i2:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg c11:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r12:V, reg names:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg x7:*, reg x8:V, reg names1:cls, reg r16:V, reg s:V, reg l1:I, reg i3:I, reg i4:I, reg i5:I, reg c12:L, reg x9:V, reg nms:*, reg nms1:V, reg l2:*, reg c13:L, reg i9:I, reg nms4:V, reg l5:*, reg nms5:V, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i11:I, reg nms8:V, reg l8:*, reg nms9:V, reg dx3:V, reg n:*, reg n1:V, reg __:cls, reg r17:V, reg names__:cls, reg r18:V, reg c14:L, reg i13:I, reg nms11:V, reg l10:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i15:I, reg dx5:V, reg n2:*, reg n3:V, reg ____:cls, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg as_POSIXlt:cls, reg value1:*, reg value2:V, reg p:p(V +), reg r23:V, reg unCfillPOSIXlt:cls, reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg x10:*, reg x11:V, reg names2:cls, reg r27:V, reg s1:V, reg l11:I, reg i17:I, reg i18:I, reg i19:I, reg c15:L, reg x12:V, reg value3:*, reg value4:V, reg c16:L, reg i23:I, reg value6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i25:I, reg dx7:V, reg n4:*, reg n5:V, reg __1:cls, reg r28:V, reg l12:*, reg c17:L, reg i27:I, reg dx10:V, reg l15:*, reg dx11:V, reg l16:*, reg dr8:V, reg dc4:L, reg dx14:V, reg i29:I, reg dx15:V, reg l18:*, reg dx16:V, reg dx17:V, reg n6:*, reg n7:V, reg __2:cls, reg r29:V, reg c18:L, reg i31:I, reg dx20:V, reg l20:*, reg dx21:V, reg dr10:V, reg dc5:L, reg dx23:V, reg i33:I, reg dx24:V, reg l22:*, reg dx25:V, reg i34:*, reg i35:V, reg ____1:cls, reg r30:V, reg c19:L, reg i37:I, reg dx27:V, reg l24:*, reg dr12:V, reg dc6:L, reg dx29:V, reg i39:I, reg dx31:V, reg n8:*, reg n9:V, reg ____2:cls, reg r31:V, reg cl:*, reg cl1:V, reg l25:*, reg class__1:cls, reg r32:V, reg x13:*, reg x14:V |
    mkenv;
    st x = x;
    st i = i;
    st value = value;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r1):
    st cl = r1;
    l = ld x;
    class__ = ldf `class<-`;
    check L24() else D2();
  L20():
    x1 = ld x;
    check L22() else D0();
  L21():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 10 [NULL, l, NULL];
  L22():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(x2);
    check L23() else D1();
  L24():
    r3 = dyn class__(l, NULL, NULL);
    check L25() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 12 [NULL, r3];
  L23():
    goto L0(r2);
  L25():
    st x = r3;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L1(r5):
    r7 = `!`(r5);
    c = `as.logical`(r7);
    if c then L28() else L2(c);
  L26():
    missing = ldf missing in base;
    r6 = dyn missing(<sym i>);
    goto L1(r6);
  L27():
    r4 = dyn base1(<sym i>);
    goto L1(r4);
  L2(c2):
    c10 = `as.logical`(c2);
    if c10 then L33() else L4();
  L28():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L3(c5, r9):
    c7 = `as.logical`(r9);
    c8 = `&&`(c5, c7);
    goto L2(c8);
  L4():
    goto L11();
  L11():
    sym5 = ldf unCfillPOSIXlt;
    base5 = ldf unCfillPOSIXlt in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L29():
    i1 = ld i;
    check L31() else D4();
  L30():
    r8 = dyn base2(<sym i>);
    goto L3(c, r8);
  L33():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  D4():
    deopt 19 [c, i1];
  L5(r11):
    st nms = r11;
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L12(r21):
    st value = r21;
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  L31():
    i2 = force? i1;
    checkMissing(i2);
    c6 = `is.character`(i2);
    goto L3(c, c6);
  L34():
    x3 = ld x;
    check L36() else D5();
  L35():
    r10 = dyn base3(<lang `$`(x, year)>);
    goto L5(r10);
  L59():
    as_POSIXlt = ldf `as.POSIXlt`;
    check L61() else D14();
  L60():
    r20 = dyn base5(<lang as.POSIXlt(value)>);
    goto L12(r20);
  D5():
    deopt 25 [x3];
  D14():
    deopt 60 [];
  L6(r15):
    s = toForSeq(r15);
    l1 = length(s);
    i3 = 0;
    goto L7(i3);
  L13(r26):
    s1 = toForSeq(r26);
    l11 = length(s1);
    i17 = 0;
    goto L14(i17);
  L36():
    x4 = force? x3;
    checkMissing(x4);
    c11 = `is.object`(x4);
    if c11 then L38() else L39(x4);
  L42():
    x7 = ld x;
    check L44() else D7();
  L43():
    r14 = dyn base4(<sym x>);
    goto L6(r14);
  L61():
    p = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r23 = dyn as_POSIXlt(p);
    check L62() else D15();
  L64():
    x10 = ld x;
    check L66() else D17();
  L65():
    r25 = dyn base6(<sym x>);
    goto L13(r25);
  D7():
    deopt 33 [x7];
  D15():
    deopt 62 [r23];
  D17():
    deopt 68 [x10];
  L7(i4):
    i5 = `+`.1(i4, 1);
    c12 = `<`.1(l1, i5);
    if c12 then L46() else L10();
  L14(i18):
    i19 = `+`.1(i18, 1);
    c15 = `<`.1(l11, i19);
    if c15 then L68() else L19();
  L37(dx1):
    names = ldf names in base;
    r13 = dyn names(dx1);
    check L41() else D6();
  L38():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(dr);
  L39(x6):
    r12 = `$`(x6, <sym year>);
    goto L37(r12);
  L44():
    x8 = force? x7;
    checkMissing(x8);
    names1 = ldf names in base;
    r16 = dyn names1(x8);
    check L45() else D8();
  L62():
    unCfillPOSIXlt = ldf unCfillPOSIXlt in base;
    r24 = dyn unCfillPOSIXlt(r23);
    check L63() else D16();
  L66():
    x11 = force? x10;
    checkMissing(x11);
    names2 = ldf names in base;
    r27 = dyn names2(x11);
    check L67() else D18();
  D6():
    deopt 29 [r13];
  D8():
    deopt 36 [r16];
  D16():
    deopt 64 [r24];
  D18():
    deopt 71 [r27];
  L10():
    x9 = `[[`(s, i5, NULL, TRUE);
    st n = x9;
    nms = ld nms;
    check L47() else D9();
  L19():
    x12 = `[[`(s1, i19, NULL, TRUE);
    st n = x12;
    value3 = ld value;
    check L69() else D19();
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L37(dx);
  L41():
    goto L5(r13);
  L45():
    goto L6(r16);
  L46():
    goto L11();
  L63():
    goto L12(r24);
  L67():
    goto L13(r27);
  L68():
    cl = ld cl;
    check L86() else D24();
  D9():
    deopt 37 [i5, nms];
  D19():
    deopt 72 [i19, value3];
  D24():
    deopt 93 [cl];
  L47():
    nms1 = force? nms;
    checkMissing(nms1);
    l2 = ld x;
    c13 = `is.object`(l2);
    if c13 then L48() else L49(i5, nms1, l2, nms1, l2);
  L69():
    value4 = force? value3;
    checkMissing(value4);
    c16 = `is.object`(value4);
    if c16 then L70() else L71(i19, value4);
  L86():
    cl1 = force? cl;
    checkMissing(cl1);
    l25 = ld x;
    class__1 = ldf `class<-`;
    check L87() else D25();
  D25():
    deopt 96 [cl1, l25, cl1];
  L8(i11, nms8, l8, nms9, dx3):
    names__ = ldf `names<-`;
    check L52() else D11();
  L15(i25, dx7):
    l12 = ld x;
    c17 = `is.object`(l12);
    if c17 then L74() else L75(i25, dx7, l12, dx7, l12);
  L48():
    dr2 = tryDispatchBuiltin.1("[[", l2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(i5, nms1, l2, nms1, dr2);
  L49(i9, nms4, l5, nms5, l6):
    n = ld n;
    check L51() else D10();
  L70():
    dr6 = tryDispatchBuiltin.1("[[", value4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L72() else L71(i19, dr6);
  L71(i23, value6):
    n4 = ld n;
    check L73() else D20();
  L87():
    r32 = dyn class__1(l25, NULL, cl1);
    check L88() else D26();
  D10():
    deopt 41 [i9, nms4, l5, nms5, l6, n];
  D11():
    deopt 45 [i11, nms8, l8, dx3, nms9];
  D20():
    deopt 74 [i23, value6, n4];
  D26():
    deopt 98 [cl1, r32];
  L16(i29, dx15, l18, dx16, dx17):
    c18 = `is.object`(dx17);
    if c18 then L78() else L79(i29, dx15, l18, dx17);
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(i5, nms1, l2, nms1, dx2);
  L51():
    n1 = force? n;
    __ = ldf `[[` in base;
    r17 = dyn __(l6, n1);
    goto L8(i9, nms4, l5, nms5, r17);
  L52():
    r18 = dyn names__(dx3, NULL, nms9);
    check L53() else D12();
  L72():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(i19, dx6);
  L73():
    n5 = force? n4;
    __1 = ldf `[[` in base;
    r28 = dyn __1(value6, n5);
    goto L15(i23, r28);
  L74():
    dr8 = tryDispatchBuiltin.1("[[", l12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(i25, dx7, l12, dx7, dr8);
  L75(i27, dx10, l15, dx11, l16):
    n6 = ld n;
    check L77() else D21();
  L88():
    st x = r32;
    x13 = ld x;
    check L89() else D27();
  D12():
    deopt 47 [i11, nms8, l8, r18];
  D21():
    deopt 79 [i27, dx10, l15, dx11, l16, n6];
  D27():
    deopt 100 [x13];
  L17(i33, dx24, l22, dx25):
    c19 = `is.object`(l22);
    if c19 then L82() else L83(i33, dx24, l22);
  L53():
    c14 = `is.object`(l8);
    if c14 then L54() else L55(i11, nms8, l8);
  L76():
    dx14 = getTryDispatchBuiltinValue(dr8);
    goto L16(i25, dx7, l12, dx7, dx14);
  L77():
    n7 = force? n6;
    __2 = ldf `[[` in base;
    r29 = dyn __2(l16, n7);
    goto L16(i27, dx10, l15, dx11, r29);
  L78():
    dr10 = tryDispatchBuiltin.0("[[<-", dx17, dx16);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L80() else L79(i29, dx15, l18, dr10);
  L79(i31, dx20, l20, dx21):
    i34 = ld i;
    check L81() else D22();
  L89():
    x14 = force? x13;
    checkMissing(x14);
    popenv;
    return x14;
  D22():
    deopt 83 [i31, dx20, l20, dx21, dx16, i34];
  L9(i15, dx5):
    st x = dx5;
    goto L7(i15);
  L18(i39, dx31):
    st x = dx31;
    goto L14(i39);
  L54():
    dr4 = tryDispatchBuiltin.0("[[<-", l8, r18);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L56() else L55(i11, nms8, dr4);
  L55(i13, nms11, l10):
    n2 = ld n;
    check L57() else D13();
  L80():
    dx23 = getTryDispatchBuiltinValue(dr10);
    goto L17(i29, dx15, l18, dx23);
  L81():
    i35 = force? i34;
    ____1 = ldf `[[<-` in base;
    r30 = dyn ____1(dx21, dx16, i35);
    goto L17(i31, dx20, l20, r30);
  L82():
    dr12 = tryDispatchBuiltin.0("[[<-", l22, dx25);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L84() else L83(i33, dx24, dr12);
  L83(i37, dx27, l24):
    n8 = ld n;
    check L85() else D23();
  D13():
    deopt 48 [i13, nms11, l10, r18, n2];
  D23():
    deopt 86 [i37, dx27, l24, dx25, n8];
  L56():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(i11, dx4);
  L57():
    n3 = force? n2;
    ____ = ldf `[[<-` in base;
    r19 = dyn ____(l10, r18, n3);
    goto L9(i13, r19);
  L84():
    dx29 = getTryDispatchBuiltinValue(dr12);
    goto L18(i33, dx29);
  L85():
    n9 = force? n8;
    ____2 = ldf `[[<-` in base;
    r31 = dyn ____2(l24, dx25, n9);
    goto L18(i37, r31);
  }
}