fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2945690204;
    st `.S3Extends` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2945690204(ClassDef, exts, where) {
  (reg ClassDef:*, reg exts:*, reg where:*) -+> V { var ClassDef:*, var exts:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg exts1:*, reg exts2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg __:cls, reg r5:V, reg attr:cls, reg r6:V, reg S3Class:*, reg S3Class1:V, reg c:L, reg S3Class3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg exts3:*, reg exts4:V, reg r10:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg exts5:*, reg exts6:V, reg c2:L, reg i6:I, reg exts8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg i9:*, reg i10:V, reg __2:cls, reg r11:V, reg __3:cls, reg r12:V, reg r13:V, reg c3:L, reg superClasses:*, reg superClasses1:V, reg c4:L, reg i16:I, reg superClasses3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i18:I, reg dx5:V, reg i19:*, reg i20:V, reg __4:cls, reg r15:V, reg getClassDef:cls, reg what:*, reg what1:V, reg p:p(V +), reg packageSlot:cls, reg exti:*, reg exti1:V, reg p1:p(V +), reg r18:V, reg p2:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg i23:I, reg r22:V, reg whatDef:*, reg whatDef1:V, reg c5:V, reg c6:L, reg i24:I, reg c7:V, reg isXS3Class:cls, reg whatDef2:*, reg whatDef3:V, reg p3:p(V +), reg r24:V, reg r25:V, reg c9:L, reg c10:V, reg c12:L, reg __5:cls, reg r27:V, reg body:cls, reg _S3coerce:*, reg _S3coerce1:V, reg p4:p(V +), reg r29:V, reg l1:*, reg body__:cls, reg environment:cls, reg coerce:*, reg coerce1:V, reg p5:p(V +), reg r31:V, reg p6:p(V +), reg r33:V, reg coerce2:*, reg coerce3:V, reg l2:*, reg ___:cls, reg r34:V, reg __6:cls, reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg i33:I, reg r37:V, reg what2:*, reg what3:V, reg S3Class4:*, reg S3Class5:V, reg match:cls, reg r38:V, reg pos:*, reg pos1:V, reg r39:V, reg c13:L, reg substituteDirect:cls, reg _S3replace:*, reg _S3replace1:V, reg c14:L, reg _S3replace3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r40:V, reg p7:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg what4:*, reg what5:V, reg need:*, reg need1:V, reg list:cls, reg r44:V, reg p8:p(V +), reg r46:V, reg l3:*, reg body__1:cls, reg environment1:cls, reg replace:*, reg replace1:V, reg p9:p(V +), reg r48:V, reg p10:p(V +), reg r50:V, reg i36:I, reg substituteDirect1:cls, reg _S3replace4:*, reg _S3replace5:V, reg c15:L, reg _S3replace7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r52:V, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg need2:*, reg need3:V, reg list1:cls, reg r56:V, reg p12:p(V +), reg r58:V, reg l4:*, reg body__2:cls, reg environment2:cls, reg replace2:*, reg replace3:V, reg p13:p(V +), reg r60:V, reg p14:p(V +), reg r62:V, reg replace4:*, reg replace5:V, reg l5:*, reg ___1:cls, reg r63:V, reg exti2:*, reg exti3:V, reg l6:*, reg c16:L, reg i38:I, reg exti5:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i40:I, reg dx11:V, reg i41:*, reg i42:V, reg ____:cls, reg r64:V, reg exts9:*, reg exts10:V |
    mkenv;
    st ClassDef = ClassDef;
    st exts = exts;
    st where = where;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    st superClasses = r1;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L18():
    exts1 = ld exts;
    check L20() else D0();
  L19():
    r = dyn base(<sym exts>);
    goto L0(r);
  D0():
    deopt 2 [exts1];
  L1(r4):
    st S3Class = r4;
    S3Class = ld S3Class;
    check L25() else D3();
  L20():
    exts2 = force? exts1;
    checkMissing(exts2);
    names = ldf names in base;
    r2 = dyn names(exts2);
    check L21() else D1();
  L22():
    __ = ldf `@` in base;
    r5 = dyn __(<sym ClassDef>, <sym prototype>);
    attr = ldf attr in base;
    r6 = dyn attr(r5, ".S3Class");
    check L24() else D2();
  L23():
    r3 = dyn base1(<lang `@`(ClassDef, prototype)>, ".S3Class");
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 13 [r6];
  D3():
    deopt 15 [S3Class];
  L21():
    goto L0(r2);
  L24():
    goto L1(r6);
  L25():
    S3Class1 = force? S3Class;
    checkMissing(S3Class1);
    c = `is.object`(S3Class1);
    if c then L26() else L27(S3Class1);
  L2(dx1):
    st need = dx1;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L26():
    dr = tryDispatchBuiltin.1("[[", S3Class1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(S3Class3):
    __1 = ldf `[[` in base;
    r7 = dyn __1(S3Class3, 1);
    goto L2(r7);
  L3(r9):
    s = toForSeq(r9);
    l = length(s);
    i = 0;
    goto L4(i);
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L29():
    exts3 = ld exts;
    check L31() else D4();
  L30():
    r8 = dyn base2(<sym exts>);
    goto L3(r8);
  D4():
    deopt 22 [exts3];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L32() else L17();
  L31():
    exts4 = force? exts3;
    checkMissing(exts4);
    r10 = seq_along(exts4);
    goto L3(r10);
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    exts5 = ld exts;
    check L33() else D5();
  L32():
    exts9 = ld exts;
    check L89() else D38();
  D5():
    deopt 25 [i2, exts5];
  D38():
    deopt 145 [exts9];
  L33():
    exts6 = force? exts5;
    checkMissing(exts6);
    c2 = `is.object`(exts6);
    if c2 then L34() else L35(i2, exts6);
  L89():
    exts10 = force? exts9;
    checkMissing(exts10);
    popenv;
    return exts10;
  L5(i8, dx3):
    st exti = dx3;
    __3 = ldf `@` in base;
    r12 = dyn __3(<sym exti>, <sym distance>);
    r13 = `==`(r12, 1.0);
    c3 = `as.logical`(r13);
    if c3 then L38() else L6();
  L34():
    dr2 = tryDispatchBuiltin.1("[[", exts6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(i2, dr2);
  L35(i6, exts8):
    i9 = ld i;
    check L37() else D6();
  D6():
    deopt 27 [i6, exts8, i9];
  L6():
    superClasses = ld superClasses;
    check L41() else D7();
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i2, dx2);
  L37():
    i10 = force? i9;
    __2 = ldf `[[` in base;
    r11 = dyn __2(exts8, i10);
    goto L5(i6, r11);
  L38():
    goto L4(i8);
  D7():
    deopt 39 [i8, superClasses];
  L41():
    superClasses1 = force? superClasses;
    checkMissing(superClasses1);
    c4 = `is.object`(superClasses1);
    if c4 then L42() else L43(i8, superClasses1);
  L8(i18, dx5):
    st what = dx5;
    getClassDef = ldf getClassDef;
    check L46() else D9();
  L42():
    dr4 = tryDispatchBuiltin.1("[[", superClasses1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(i8, dr4);
  L43(i16, superClasses3):
    i19 = ld i;
    check L45() else D8();
  D8():
    deopt 41 [i16, superClasses3, i19];
  D9():
    deopt 46 [i18];
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(i8, dx4);
  L45():
    i20 = force? i19;
    __4 = ldf `[[` in base;
    r15 = dyn __4(superClasses3, i20);
    goto L8(i16, r15);
  L46():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p2 = prom<V +>{
      packageSlot = ldf packageSlot;
      p1 = prom<V +>{
        exti = ld exti;
        exti1 = force? exti;
        checkMissing(exti1);
        return exti1;
      };
      r18 = dyn packageSlot(p1);
      return r18;
    };
    r20 = dyn getClassDef[, package](p, p2);
    check L47() else D10();
  D10():
    deopt 50 [i18, r20];
  L47():
    st whatDef = r20;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L9(i23, r22):
    c6 = `as.logical`(r22);
    if c6 then L10(i23, c6) else L51();
  L48():
    whatDef = ld whatDef;
    check L50() else D11();
  L49():
    r21 = dyn base3(<sym whatDef>);
    goto L9(i18, r21);
  D11():
    deopt 53 [i18, whatDef];
  L10(i24, c7):
    c12 = `as.logical`(c7);
    if c12 then L55() else L11();
  L50():
    whatDef1 = force? whatDef;
    checkMissing(whatDef1);
    c5 = `==`(whatDef1, NULL);
    goto L9(i18, c5);
  L51():
    isXS3Class = ldf isXS3Class;
    check L52() else D12();
  D12():
    deopt 57 [i23, c6];
  L11():
    __5 = ldf `@` in base;
    r27 = dyn __5(<sym exti>, <sym coerce>);
    st coerce = r27;
    body = ldf body;
    check L58() else D14();
  L52():
    p3 = prom<V +>{
      whatDef2 = ld whatDef;
      whatDef3 = force? whatDef2;
      checkMissing(whatDef3);
      return whatDef3;
    };
    r24 = dyn isXS3Class(p3);
    check L53() else D13();
  L55():
    goto L4(i24);
  D13():
    deopt 59 [i23, c6, r24];
  D14():
    deopt 70 [i24];
  L53():
    r25 = `!`(r24);
    c9 = `as.logical`(r25);
    c10 = `||`(c6, c9);
    goto L10(i23, c10);
  L58():
    p4 = prom<V +>{
      _S3coerce = ld `.S3coerce`;
      _S3coerce1 = force? _S3coerce;
      checkMissing(_S3coerce1);
      return _S3coerce1;
    };
    r29 = dyn body(p4);
    check L59() else D15();
  D15():
    deopt 72 [i24, r29];
  L59():
    l1 = ld coerce;
    body__ = ldf `body<-`;
    check L60() else D16();
  D16():
    deopt 74 [i24, r29, l1, r29];
  L60():
    p6 = prom<V +>{
      environment = ldf environment;
      p5 = prom<V +>{
        coerce = ld coerce;
        coerce1 = force? coerce;
        checkMissing(coerce1);
        return coerce1;
      };
      r31 = dyn environment(p5);
      return r31;
    };
    r33 = dyn body__(l1, NULL, p6, r29);
    check L61() else D17();
  D17():
    deopt 77 [i24, r29, r33];
  L61():
    st coerce = r33;
    coerce2 = ld coerce;
    check L62() else D18();
  D18():
    deopt 79 [i24, coerce2];
  L62():
    coerce3 = force? coerce2;
    checkMissing(coerce3);
    l2 = ld exti;
    ___ = ldf `@<-`;
    check L63() else D19();
  D19():
    deopt 82 [i24, coerce3, l2, coerce3];
  L63():
    r34 = dyn ___(l2, NULL, "coerce", coerce3);
    check L64() else D20();
  D20():
    deopt 85 [i24, coerce3, r34];
  L64():
    st exti = r34;
    __6 = ldf `@` in base;
    r35 = dyn __6(<sym exti>, <sym replace>);
    st replace = r35;
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L13(i33, r37):
    st pos = r37;
    pos = ld pos;
    check L70() else D24();
  L65():
    what2 = ld what;
    check L67() else D21();
  L66():
    r36 = dyn base4(<sym what>, <sym S3Class>, 0);
    goto L13(i24, r36);
  D21():
    deopt 92 [i24, what2];
  D24():
    deopt 101 [i33, pos];
  L67():
    what3 = force? what2;
    checkMissing(what3);
    S3Class4 = ld S3Class;
    check L68() else D22();
  L70():
    pos1 = force? pos;
    checkMissing(pos1);
    r39 = `>`(pos1, 1.0);
    c13 = `as.logical`(r39);
    if c13 then L71() else L14();
  D22():
    deopt 94 [i24, S3Class4];
  L14():
    substituteDirect1 = ldf substituteDirect;
    check L77() else D29();
  L15(i36):
    replace4 = ld replace;
    check L81() else D33();
  L68():
    S3Class5 = force? S3Class4;
    checkMissing(S3Class5);
    match = ldf match in base;
    r38 = dyn match(what3, S3Class5, 0, NULL);
    check L69() else D23();
  L71():
    substituteDirect = ldf substituteDirect;
    check L72() else D25();
  D23():
    deopt 99 [i24, r38];
  D25():
    deopt 106 [i33];
  D29():
    deopt 117 [i33];
  D33():
    deopt 127 [i36, replace4];
  L69():
    goto L13(i24, r38);
  L72():
    p7 = prom<V +>{
      _S3replace = ld `.S3replace`;
      _S3replace1 = force? _S3replace;
      checkMissing(_S3replace1);
      c14 = `is.object`(_S3replace1);
      if c14 then L1() else L2(_S3replace1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", _S3replace1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(_S3replace3):
      r40 = `$`(_S3replace3, <sym e2>);
      goto L0(r40);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p8 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      what4 = ld what;
      what5 = force? what4;
      checkMissing(what5);
      need = ld need;
      need1 = force? need;
      checkMissing(need1);
      list = ldf list in base;
      r44 = dyn list(what5, need1);
      goto L0(r44);
    L2():
      r42 = dyn base5[CLASS, NEED](<sym what>, <sym need>);
      goto L0(r42);
    };
    r46 = dyn substituteDirect(p7, p8);
    check L73() else D26();
  L77():
    p11 = prom<V +>{
      _S3replace4 = ld `.S3replace`;
      _S3replace5 = force? _S3replace4;
      checkMissing(_S3replace5);
      c15 = `is.object`(_S3replace5);
      if c15 then L1() else L2(_S3replace5);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", _S3replace5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(_S3replace7):
      r52 = `$`(_S3replace7, <sym e1>);
      goto L0(r52);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p12 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      need2 = ld need;
      need3 = force? need2;
      checkMissing(need3);
      list1 = ldf list in base;
      r56 = dyn list1(need3);
      goto L0(r56);
    L2():
      r54 = dyn base6[NEED](<sym need>);
      goto L0(r54);
    };
    r58 = dyn substituteDirect1(p11, p12);
    check L78() else D30();
  L81():
    replace5 = force? replace4;
    checkMissing(replace5);
    l5 = ld exti;
    ___1 = ldf `@<-`;
    check L82() else D34();
  D26():
    deopt 109 [i33, r46];
  D30():
    deopt 120 [i33, r58];
  D34():
    deopt 130 [i36, replace5, l5, replace5];
  L73():
    l3 = ld replace;
    body__1 = ldf `body<-`;
    check L74() else D27();
  L78():
    l4 = ld replace;
    body__2 = ldf `body<-`;
    check L79() else D31();
  L82():
    r63 = dyn ___1(l5, NULL, "replace", replace5);
    check L83() else D35();
  D27():
    deopt 111 [i33, r46, l3, r46];
  D31():
    deopt 122 [i33, r58, l4, r58];
  D35():
    deopt 133 [i36, replace5, r63];
  L74():
    p10 = prom<V +>{
      environment1 = ldf environment;
      p9 = prom<V +>{
        replace = ld replace;
        replace1 = force? replace;
        checkMissing(replace1);
        return replace1;
      };
      r48 = dyn environment1(p9);
      return r48;
    };
    r50 = dyn body__1(l3, NULL, p10, r46);
    check L75() else D28();
  L79():
    p14 = prom<V +>{
      environment2 = ldf environment;
      p13 = prom<V +>{
        replace2 = ld replace;
        replace3 = force? replace2;
        checkMissing(replace3);
        return replace3;
      };
      r60 = dyn environment2(p13);
      return r60;
    };
    r62 = dyn body__2(l4, NULL, p14, r58);
    check L80() else D32();
  L83():
    st exti = r63;
    exti2 = ld exti;
    check L84() else D36();
  D28():
    deopt 114 [i33, r46, r50];
  D32():
    deopt 125 [i33, r58, r62];
  D36():
    deopt 135 [i36, exti2];
  L75():
    st replace = r50;
    goto L15(i33);
  L80():
    st replace = r62;
    goto L15(i33);
  L84():
    exti3 = force? exti2;
    checkMissing(exti3);
    l6 = ld exts;
    c16 = `is.object`(l6);
    if c16 then L85() else L86(i36, exti3, l6);
  L16(i40, dx11):
    st exts = dx11;
    goto L4(i40);
  L85():
    dr10 = tryDispatchBuiltin.0("[[<-", l6, exti3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L87() else L86(i36, exti3, dr10);
  L86(i38, exti5, l8):
    i41 = ld i;
    check L88() else D37();
  D37():
    deopt 138 [i38, exti5, l8, exti3, i41];
  L87():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L16(i36, dx10);
  L88():
    i42 = force? i41;
    ____ = ldf `[[<-` in base;
    r64 = dyn ____(l8, exti3, i42);
    goto L16(i38, r64);
  }
}