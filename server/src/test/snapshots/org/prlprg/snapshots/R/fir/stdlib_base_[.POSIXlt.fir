fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner603374895;
    st `[.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner603374895(x, i, j, drop) {
  (reg x:*, reg i:*, reg j:*, reg drop:*) -+> V { var x:*, var i:*, var j:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg r7:V, reg missing1:cls, reg r8:V, reg r9:V, reg c:L, reg x1:*, reg x2:V, reg mj:*, reg mj1:V, reg r12:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg j1:*, reg j2:V, reg c2:L, reg r15:V, reg c3:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c8:L, reg r17:V, reg j3:*, reg j4:V, reg length:cls, reg r18:V, reg r19:V, reg c9:L, reg c10:V, reg c12:L, reg stop:cls, reg r20:V, reg r21:V, reg mi:*, reg mi1:V, reg c13:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg x3:*, reg x4:V, reg unCfillPOSIXlt:cls, reg r25:V, reg c14:L, reg r27:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg j5:*, reg j6:V, reg __:cls, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg i1:*, reg i2:V, reg c15:L, reg c16:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg i3:*, reg i4:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg x5:*, reg x6:V, reg names:cls, reg r35:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r36:V, reg r37:V, reg c17:cls, reg r38:V, reg match:cls, reg r39:V, reg mj2:*, reg mj3:V, reg c18:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg r42:V, reg _POSIXlt:cls, reg lapply:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg r44:V, reg x7:*, reg x8:V, reg unCfillPOSIXlt1:cls, reg r45:V, reg p:p(V +), reg __1:*, reg __2:V, reg p1:p(V +), reg i5:*, reg i6:V, reg p2:p(V +), reg drop1:*, reg drop2:V, reg p3:p(V +), reg r50:V, reg p4:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg x9:*, reg x10:V, reg attr:cls, reg r54:V, reg p5:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r56:V, reg r57:V, reg x11:*, reg x12:V, reg oldClass:cls, reg r58:V, reg p6:p(V +), reg r60:V, reg isTRUE:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r61:V, reg r62:V, reg x13:*, reg x14:V, reg attr1:cls, reg r63:V, reg p7:p(V +), reg r65:V, reg c19:L, reg r66:L, reg attr__:cls, reg r67:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r68:V, reg r69:V, reg x15:*, reg x16:V, reg unCfillPOSIXlt2:cls, reg r70:V, reg c20:L, reg r72:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg j7:*, reg j8:V, reg __3:cls, reg r73:V, reg c21:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg i7:*, reg i8:V, reg __4:cls, reg r74:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(TRUE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L1(r1):
    st mj = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L28():
    missing = ldf missing in base;
    r2 = dyn missing(<sym j>);
    goto L1(r2);
  L29():
    r = dyn base(<sym j>);
    goto L1(r);
  L2(r6, r7):
    st mi = r7;
    r9 = `&&`(r6, r7);
    c = `as.logical`(r9);
    if c then L32() else L3();
  L30():
    missing1 = ldf missing in base;
    r8 = dyn missing1(<sym i>);
    goto L2(r1, r8);
  L31():
    r5 = dyn base1(<sym i>);
    goto L2(r1, r5);
  L3():
    mj = ld mj;
    check L36() else D1();
  L32():
    x1 = ld x;
    check L33() else D0();
  D0():
    deopt 8 [x1];
  D1():
    deopt 13 [mj];
  L33():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  L36():
    mj1 = force? mj;
    checkMissing(mj1);
    r12 = `!`(mj1);
    c1 = `as.logical`(r12);
    if c1 then L37() else L5();
  L5():
    goto L11();
  L11():
    mi = ld mi;
    check L52() else D7();
  L37():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  D7():
    deopt 38 [mi];
  L6(r14):
    r15 = `!`(r14);
    c3 = `as.logical`(r15);
    if c3 then L7(c3) else L41();
  L38():
    j1 = ld j;
    check L40() else D2();
  L39():
    r13 = dyn base2(<sym j>);
    goto L6(r13);
  L52():
    mi1 = force? mi;
    checkMissing(mi1);
    c13 = `as.logical`(mi1);
    if c13 then L53() else L12();
  D2():
    deopt 17 [j1];
  L7(c4):
    c12 = `as.logical`(c4);
    if c12 then L47() else L9();
  L12():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L40():
    j2 = force? j1;
    checkMissing(j2);
    c2 = `is.character`(j2);
    goto L6(c2);
  L41():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L53():
    sym4 = ldf unCfillPOSIXlt;
    base4 = ldf unCfillPOSIXlt in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L8(c8, r17):
    r19 = `!=`(r17, 1);
    c9 = `as.logical`(r19);
    c10 = `||`(c8, c9);
    goto L7(c10);
  L9():
    goto L10(NULL);
  L10(r21):
    goto L11();
  L13(r24):
    c14 = `is.object`(r24);
    if c14 then L58() else L59(r24);
  L15(r30):
    c16 = `as.logical`(r30);
    if c16 then L66() else L16();
  L42():
    j3 = ld j;
    check L44() else D3();
  L43():
    r16 = dyn base3(<sym j>);
    goto L8(c3, r16);
  L47():
    stop = ldf stop;
    check L48() else D5();
  L54():
    x3 = ld x;
    check L56() else D8();
  L55():
    r23 = dyn base4(<sym x>);
    goto L13(r23);
  L63():
    i1 = ld i;
    check L65() else D11();
  L64():
    r29 = dyn base5(<sym i>);
    goto L15(r29);
  D3():
    deopt 23 [c3, j3];
  D5():
    deopt 31 [];
  D8():
    deopt 42 [x3];
  D11():
    deopt 50 [i1];
  L14(dx1):
    popenv;
    return dx1;
  L16():
    goto L20();
  L20():
    mj2 = ld mj;
    check L79() else D17();
  L44():
    j4 = force? j3;
    checkMissing(j4);
    length = ldf length in base;
    r18 = dyn length(j4);
    check L45() else D4();
  L48():
    r20 = dyn stop("component subscript must be a character string");
    check L49() else D6();
  L56():
    x4 = force? x3;
    checkMissing(x4);
    unCfillPOSIXlt = ldf unCfillPOSIXlt in base;
    r25 = dyn unCfillPOSIXlt(x4);
    check L57() else D9();
  L58():
    dr = tryDispatchBuiltin.1("[[", r24);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(dr);
  L59(r27):
    j5 = ld j;
    check L61() else D10();
  L65():
    i2 = force? i1;
    checkMissing(i2);
    c15 = `is.character`(i2);
    goto L15(c15);
  L66():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  D4():
    deopt 26 [c3, r18];
  D6():
    deopt 33 [r20];
  D9():
    deopt 45 [r25];
  D10():
    deopt 46 [r27, j5];
  D17():
    deopt 75 [mj2];
  L17(r32):
    st i = r32;
    goto L20();
  L45():
    goto L8(c3, r18);
  L49():
    goto L10(r20);
  L57():
    goto L13(r25);
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L61():
    j6 = force? j5;
    __ = ldf `[[` in base;
    r28 = dyn __(r27, j6);
    goto L14(r28);
  L67():
    i3 = ld i;
    check L69() else D12();
  L68():
    r31 = dyn base6[, , incomparables](<sym i>, <lang names(x)>, <lang c("", NA_STR)>);
    goto L17(r31);
  L79():
    mj3 = force? mj2;
    checkMissing(mj3);
    c18 = `as.logical`(mj3);
    if c18 then L80() else L21();
  D12():
    deopt 55 [i3];
  L21():
    sym14 = ldf unCfillPOSIXlt;
    base14 = ldf unCfillPOSIXlt in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L91() else L92();
  L69():
    i4 = force? i3;
    checkMissing(i4);
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L70() else L71();
  L80():
    sym9 = ldf `attr<-`;
    base9 = ldf `attr<-` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L81() else L82();
  L18(r34):
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L74() else L75();
  L22(r42):
    popenv;
    return r42;
  L25(r69):
    c20 = `is.object`(r69);
    if c20 then L95() else L96(r69);
  L70():
    x5 = ld x;
    check L72() else D13();
  L71():
    r33 = dyn base7(<sym x>);
    goto L18(r33);
  L81():
    _POSIXlt = ldf `.POSIXlt`;
    check L83() else D18();
  L82():
    r41 = dyn base9(<lang .POSIXlt(lapply(unCfillPOSIXlt(x), `[`, i, drop=drop), attr(x, "tzone"), oldClass(x))>, "balanced", <lang if(isTRUE(attr(x, "balanced")), TRUE, NA_LGL)>);
    goto L22(r41);
  L91():
    x15 = ld x;
    check L93() else D23();
  L92():
    r68 = dyn base14(<sym x>);
    goto L25(r68);
  D13():
    deopt 59 [x5];
  D18():
    deopt 80 [];
  D23():
    deopt 98 [x15];
  L19(r37):
    match = ldf match in base;
    r39 = dyn match(i4, r34, NA_INT, r37);
    check L77() else D16();
  L26(dx3):
    c21 = `is.object`(dx3);
    if c21 then L99() else L100(dx3);
  L72():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r35 = dyn names(x6);
    check L73() else D14();
  L74():
    c17 = ldf c in base;
    r38 = dyn c17("", NA_STR);
    check L76() else D15();
  L75():
    r36 = dyn base8("", NA_STR);
    goto L19(r36);
  L83():
    p4 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        sym10 = ldf unCfillPOSIXlt;
        base10 = ldf unCfillPOSIXlt in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r44):
        return r44;
      L1():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        unCfillPOSIXlt1 = ldf unCfillPOSIXlt in base;
        r45 = dyn unCfillPOSIXlt1(x8);
        goto L0(r45);
      L2():
        r43 = dyn base10(<sym x>);
        goto L0(r43);
      };
      p1 = prom<V +>{
        __1 = ld `[`;
        __2 = force? __1;
        checkMissing(__2);
        return __2;
      };
      p2 = prom<V +>{
        i5 = ld i;
        i6 = force? i5;
        checkMissing(i6);
        return i6;
      };
      p3 = prom<V +>{
        drop1 = ld drop;
        drop2 = force? drop1;
        checkMissing(drop2);
        return drop2;
      };
      r50 = dyn lapply[, , , drop](p, p1, p2, p3);
      return r50;
    };
    p5 = prom<V +>{
      sym11 = ldf attr;
      base11 = ldf attr in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      attr = ldf attr in base;
      r54 = dyn attr(x10, "tzone");
      goto L0(r54);
    L2():
      r52 = dyn base11(<sym x>, "tzone");
      goto L0(r52);
    };
    p6 = prom<V +>{
      sym12 = ldf oldClass;
      base12 = ldf oldClass in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      oldClass = ldf oldClass in base;
      r58 = dyn oldClass(x12);
      goto L0(r58);
    L2():
      r56 = dyn base12(<sym x>);
      goto L0(r56);
    };
    r60 = dyn _POSIXlt(p4, p5, p6);
    check L84() else D19();
  L93():
    x16 = force? x15;
    checkMissing(x16);
    unCfillPOSIXlt2 = ldf unCfillPOSIXlt in base;
    r70 = dyn unCfillPOSIXlt2(x16);
    check L94() else D24();
  L95():
    dr2 = tryDispatchBuiltin.1("[[", r69);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L97() else L96(dr2);
  L96(r72):
    j7 = ld j;
    check L98() else D25();
  D14():
    deopt 62 [r35];
  D15():
    deopt 69 [r38];
  D16():
    deopt 71 [r39];
  D19():
    deopt 84 [r60];
  D24():
    deopt 101 [r70];
  D25():
    deopt 102 [r72, j7];
  L27(dx7):
    popenv;
    return dx7;
  L73():
    goto L18(r35);
  L76():
    goto L19(r38);
  L77():
    goto L17(r39);
  L84():
    isTRUE = ldf isTRUE;
    check L85() else D20();
  L94():
    goto L25(r70);
  L97():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(dx2);
  L98():
    j8 = force? j7;
    __3 = ldf `[[` in base;
    r73 = dyn __3(r72, j8);
    goto L26(r73);
  L99():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L101() else L100(dr4);
  L100(dx5):
    i7 = ld i;
    check L102() else D26();
  D20():
    deopt 87 [];
  D26():
    deopt 105 [dx5, i7];
  L85():
    p7 = prom<V +>{
      sym13 = ldf attr;
      base13 = ldf attr in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      attr1 = ldf attr in base;
      r63 = dyn attr1(x14, "balanced");
      goto L0(r63);
    L2():
      r61 = dyn base13(<sym x>, "balanced");
      goto L0(r61);
    };
    r65 = dyn isTRUE(p7);
    check L86() else D21();
  L101():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L27(dx6);
  L102():
    i8 = force? i7;
    __4 = ldf `[` in base;
    r74 = dyn __4(dx5, i8);
    goto L27(r74);
  D21():
    deopt 89 [r65];
  L86():
    c19 = `as.logical`(r65);
    if c19 then L87() else L23();
  L23():
    goto L24(NA_LGL);
  L24(r66):
    attr__ = ldf `attr<-` in base;
    r67 = dyn attr__(r60, "balanced", r66);
    check L89() else D22();
  L87():
    goto L24(TRUE);
  D22():
    deopt 95 [r67];
  L89():
    goto L22(r67);
  }
}