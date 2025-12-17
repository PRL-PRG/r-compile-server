fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4171839283;
    st latex_canonical_encoding = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4171839283(encoding) {
  (reg encoding:*) -+> V { var encoding:*, reg encoding1:*, reg encoding2:V, reg r:V, reg c:L, reg __:cls, reg r1:V, reg r2:cls, reg r3:V, reg c1:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r6:V, reg tolower:cls, reg encoding3:*, reg encoding4:V, reg p:p(V +), reg r8:V, reg sub:cls, reg encoding5:*, reg encoding6:V, reg p1:p(V +), reg r10:V, reg sub1:cls, reg encoding7:*, reg encoding8:V, reg p2:p(V +), reg r12:V, reg l:*, reg c2:L, reg r14:S, reg l2:*, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg encoding9:*, reg encoding10:V, reg r17:V, reg ___:cls, reg r18:V, reg l3:*, reg c3:L, reg r20:S, reg l5:*, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg encoding11:*, reg encoding12:V, reg r23:V, reg ___1:cls, reg r24:V, reg l6:*, reg c4:L, reg r26:S, reg l8:*, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg encoding13:*, reg encoding14:V, reg r29:V, reg ___2:cls, reg r30:V, reg l9:*, reg c5:L, reg r32:S, reg l11:*, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg encoding15:*, reg encoding16:V, reg r35:V, reg ___3:cls, reg r36:V, reg l12:*, reg c6:L, reg r38:S, reg l14:*, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg encoding17:*, reg encoding18:V, reg r41:V, reg ___4:cls, reg r42:V, reg l15:*, reg c7:L, reg r44:S, reg l17:*, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg encoding19:*, reg encoding20:V, reg r47:V, reg ___5:cls, reg r48:V, reg l18:*, reg c8:L, reg r50:S, reg l20:*, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg encoding21:*, reg encoding22:V, reg r53:V, reg ___6:cls, reg r54:V, reg l21:*, reg c9:L, reg r56:S, reg l23:*, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg encoding23:*, reg encoding24:V, reg r59:V, reg ___7:cls, reg r60:V, reg l24:*, reg c10:L, reg r62:S, reg l26:*, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg encoding25:*, reg encoding26:V, reg r65:V, reg ___8:cls, reg r66:V, reg l27:*, reg c11:L, reg r68:S, reg l29:*, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg encoding27:*, reg encoding28:V, reg r71:V, reg ___9:cls, reg r72:V, reg l30:*, reg c12:L, reg r74:S, reg l32:*, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg encoding29:*, reg encoding30:V, reg r77:V, reg ___10:cls, reg r78:V, reg l33:*, reg c13:L, reg r80:S, reg l35:*, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg _in_:cls, reg encoding31:*, reg encoding32:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r84:V, reg r85:V, reg c14:cls, reg r86:V, reg p4:p(V +), reg r88:V, reg ___11:cls, reg r89:V, reg l36:*, reg c15:L, reg r91:S, reg l38:*, reg dr26:V, reg dc13:L, reg dx27:V, reg dx28:V, reg encoding33:*, reg encoding34:V, reg r94:V, reg ___12:cls, reg r95:V, reg l39:*, reg c16:L, reg r97:S, reg l41:*, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg encoding35:*, reg encoding36:V, reg r100:V, reg ___13:cls, reg r101:V, reg encoding37:*, reg encoding38:V |
    mkenv;
    st encoding = encoding;
    encoding1 = ld encoding;
    check L17() else D0();
  D0():
    deopt 0 [encoding1];
  L17():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    r = `==`(encoding2, "");
    c = `as.logical`(r);
    if c then L18() else L0();
  L0():
    goto L2();
  L2():
    tolower = ldf tolower;
    check L26() else D4();
  L18():
    __ = ldf `::`;
    check L19() else D1();
  D1():
    deopt 5 [];
  D4():
    deopt 18 [];
  L19():
    r1 = dyn __("utils", "localeToCharset");
    check L20() else D2();
  L26():
    p = prom<V +>{
      encoding3 = ld encoding;
      encoding4 = force? encoding3;
      checkMissing(encoding4);
      return encoding4;
    };
    r8 = dyn tolower(p);
    check L27() else D5();
  D2():
    deopt 8 [r1];
  D5():
    deopt 20 [r8];
  L20():
    checkFun.0(r1);
    r2 = r1 as cls;
    r3 = dyn r2();
    check L21() else D3();
  L27():
    st encoding = r8;
    sub = ldf sub;
    check L28() else D6();
  D3():
    deopt 10 [r3];
  D6():
    deopt 23 [];
  L21():
    c1 = `is.object`(r3);
    if c1 then L22() else L23(r3);
  L28():
    p1 = prom<V +>{
      encoding5 = ld encoding;
      encoding6 = force? encoding5;
      checkMissing(encoding6);
      return encoding6;
    };
    r10 = dyn sub("iso_8859-([0-9]+)", "iso-8859-\\1", p1);
    check L29() else D7();
  D7():
    deopt 27 [r10];
  L1(dx1):
    st encoding = dx1;
    goto L2();
  L22():
    dr = tryDispatchBuiltin.1("[", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(r5):
    __1 = ldf `[` in base;
    r6 = dyn __1(r5, 1);
    goto L1(r6);
  L29():
    st encoding = r10;
    sub1 = ldf sub;
    check L30() else D8();
  D8():
    deopt 30 [];
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L30():
    p2 = prom<V +>{
      encoding7 = ld encoding;
      encoding8 = force? encoding7;
      checkMissing(encoding8);
      return encoding8;
    };
    r12 = dyn sub1("iso8859-([0-9]+)", "iso-8859-\\1", p2);
    check L31() else D9();
  D9():
    deopt 34 [r12];
  L31():
    st encoding = r12;
    l = ld encoding;
    c2 = `is.object`(l);
    if c2 then L32() else L33("latin1", l);
  L3(dx4):
    st encoding = dx4;
    l3 = ld encoding;
    c3 = `is.object`(l3);
    if c3 then L36() else L37("latin2", l3);
  L32():
    dr2 = tryDispatchBuiltin.0("[<-", l, "latin1");
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33("latin1", dr2);
  L33(r14, l2):
    encoding9 = ld encoding;
    check L35() else D10();
  D10():
    deopt 39 [r14, l2, "latin1", encoding9];
  L4(dx6):
    st encoding = dx6;
    l6 = ld encoding;
    c4 = `is.object`(l6);
    if c4 then L40() else L41("latin3", l6);
  L34():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx3);
  L35():
    encoding10 = force? encoding9;
    checkMissing(encoding10);
    r17 = `==`(encoding10, "iso-8859-1");
    ___ = ldf `[<-` in base;
    r18 = dyn ___(l2, "latin1", r17);
    goto L3(r18);
  L36():
    dr4 = tryDispatchBuiltin.0("[<-", l3, "latin2");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37("latin2", dr4);
  L37(r20, l5):
    encoding11 = ld encoding;
    check L39() else D11();
  D11():
    deopt 48 [r20, l5, "latin2", encoding11];
  L5(dx8):
    st encoding = dx8;
    l9 = ld encoding;
    c5 = `is.object`(l9);
    if c5 then L44() else L45("latin4", l9);
  L38():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx5);
  L39():
    encoding12 = force? encoding11;
    checkMissing(encoding12);
    r23 = `==`(encoding12, "iso-8859-2");
    ___1 = ldf `[<-` in base;
    r24 = dyn ___1(l5, "latin2", r23);
    goto L4(r24);
  L40():
    dr6 = tryDispatchBuiltin.0("[<-", l6, "latin3");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L42() else L41("latin3", dr6);
  L41(r26, l8):
    encoding13 = ld encoding;
    check L43() else D12();
  D12():
    deopt 57 [r26, l8, "latin3", encoding13];
  L6(dx10):
    st encoding = dx10;
    l12 = ld encoding;
    c6 = `is.object`(l12);
    if c6 then L48() else L49("cyrillic", l12);
  L42():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx7);
  L43():
    encoding14 = force? encoding13;
    checkMissing(encoding14);
    r29 = `==`(encoding14, "iso-8859-3");
    ___2 = ldf `[<-` in base;
    r30 = dyn ___2(l8, "latin3", r29);
    goto L5(r30);
  L44():
    dr8 = tryDispatchBuiltin.0("[<-", l9, "latin4");
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L46() else L45("latin4", dr8);
  L45(r32, l11):
    encoding15 = ld encoding;
    check L47() else D13();
  D13():
    deopt 66 [r32, l11, "latin4", encoding15];
  L7(dx12):
    st encoding = dx12;
    l15 = ld encoding;
    c7 = `is.object`(l15);
    if c7 then L52() else L53("arabic", l15);
  L46():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L6(dx9);
  L47():
    encoding16 = force? encoding15;
    checkMissing(encoding16);
    r35 = `==`(encoding16, "iso-8859-4");
    ___3 = ldf `[<-` in base;
    r36 = dyn ___3(l11, "latin4", r35);
    goto L6(r36);
  L48():
    dr10 = tryDispatchBuiltin.0("[<-", l12, "cyrillic");
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L50() else L49("cyrillic", dr10);
  L49(r38, l14):
    encoding17 = ld encoding;
    check L51() else D14();
  D14():
    deopt 75 [r38, l14, "cyrillic", encoding17];
  L8(dx14):
    st encoding = dx14;
    l18 = ld encoding;
    c8 = `is.object`(l18);
    if c8 then L56() else L57("greek", l18);
  L50():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L7(dx11);
  L51():
    encoding18 = force? encoding17;
    checkMissing(encoding18);
    r41 = `==`(encoding18, "iso-8859-5");
    ___4 = ldf `[<-` in base;
    r42 = dyn ___4(l14, "cyrillic", r41);
    goto L7(r42);
  L52():
    dr12 = tryDispatchBuiltin.0("[<-", l15, "arabic");
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L54() else L53("arabic", dr12);
  L53(r44, l17):
    encoding19 = ld encoding;
    check L55() else D15();
  D15():
    deopt 84 [r44, l17, "arabic", encoding19];
  L9(dx16):
    st encoding = dx16;
    l21 = ld encoding;
    c9 = `is.object`(l21);
    if c9 then L60() else L61("hebrew", l21);
  L54():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L8(dx13);
  L55():
    encoding20 = force? encoding19;
    checkMissing(encoding20);
    r47 = `==`(encoding20, "iso-8859-6");
    ___5 = ldf `[<-` in base;
    r48 = dyn ___5(l17, "arabic", r47);
    goto L8(r48);
  L56():
    dr14 = tryDispatchBuiltin.0("[<-", l18, "greek");
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L58() else L57("greek", dr14);
  L57(r50, l20):
    encoding21 = ld encoding;
    check L59() else D16();
  D16():
    deopt 93 [r50, l20, "greek", encoding21];
  L10(dx18):
    st encoding = dx18;
    l24 = ld encoding;
    c10 = `is.object`(l24);
    if c10 then L64() else L65("latin5", l24);
  L58():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L9(dx15);
  L59():
    encoding22 = force? encoding21;
    checkMissing(encoding22);
    r53 = `==`(encoding22, "iso-8859-7");
    ___6 = ldf `[<-` in base;
    r54 = dyn ___6(l20, "greek", r53);
    goto L9(r54);
  L60():
    dr16 = tryDispatchBuiltin.0("[<-", l21, "hebrew");
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L62() else L61("hebrew", dr16);
  L61(r56, l23):
    encoding23 = ld encoding;
    check L63() else D17();
  D17():
    deopt 102 [r56, l23, "hebrew", encoding23];
  L11(dx20):
    st encoding = dx20;
    l27 = ld encoding;
    c11 = `is.object`(l27);
    if c11 then L68() else L69("latin6", l27);
  L62():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L10(dx17);
  L63():
    encoding24 = force? encoding23;
    checkMissing(encoding24);
    r59 = `==`(encoding24, "iso-8859-8");
    ___7 = ldf `[<-` in base;
    r60 = dyn ___7(l23, "hebrew", r59);
    goto L10(r60);
  L64():
    dr18 = tryDispatchBuiltin.0("[<-", l24, "latin5");
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L66() else L65("latin5", dr18);
  L65(r62, l26):
    encoding25 = ld encoding;
    check L67() else D18();
  D18():
    deopt 111 [r62, l26, "latin5", encoding25];
  L12(dx22):
    st encoding = dx22;
    l30 = ld encoding;
    c12 = `is.object`(l30);
    if c12 then L72() else L73("latin8", l30);
  L66():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L11(dx19);
  L67():
    encoding26 = force? encoding25;
    checkMissing(encoding26);
    r65 = `==`(encoding26, "iso-8859-9");
    ___8 = ldf `[<-` in base;
    r66 = dyn ___8(l26, "latin5", r65);
    goto L11(r66);
  L68():
    dr20 = tryDispatchBuiltin.0("[<-", l27, "latin6");
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L70() else L69("latin6", dr20);
  L69(r68, l29):
    encoding27 = ld encoding;
    check L71() else D19();
  D19():
    deopt 120 [r68, l29, "latin6", encoding27];
  L13(dx24):
    st encoding = dx24;
    l33 = ld encoding;
    c13 = `is.object`(l33);
    if c13 then L76() else L77("latin9", l33);
  L70():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L12(dx21);
  L71():
    encoding28 = force? encoding27;
    checkMissing(encoding28);
    r71 = `==`(encoding28, "iso-8859-10");
    ___9 = ldf `[<-` in base;
    r72 = dyn ___9(l29, "latin6", r71);
    goto L12(r72);
  L72():
    dr22 = tryDispatchBuiltin.0("[<-", l30, "latin8");
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L74() else L73("latin8", dr22);
  L73(r74, l32):
    encoding29 = ld encoding;
    check L75() else D20();
  D20():
    deopt 129 [r74, l32, "latin8", encoding29];
  L14(dx26):
    st encoding = dx26;
    l36 = ld encoding;
    c15 = `is.object`(l36);
    if c15 then L81() else L82("latin10", l36);
  L74():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L13(dx23);
  L75():
    encoding30 = force? encoding29;
    checkMissing(encoding30);
    r77 = `==`(encoding30, "iso-8859-14");
    ___10 = ldf `[<-` in base;
    r78 = dyn ___10(l32, "latin8", r77);
    goto L13(r78);
  L76():
    dr24 = tryDispatchBuiltin.0("[<-", l33, "latin9");
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L78() else L77("latin9", dr24);
  L77(r80, l35):
    _in_ = ldf `%in%`;
    check L79() else D21();
  D21():
    deopt 139 [r80, l35, "latin9"];
  L15(dx28):
    st encoding = dx28;
    l39 = ld encoding;
    c16 = `is.object`(l39);
    if c16 then L85() else L86("utf8", l39);
  L78():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L14(dx25);
  L79():
    p3 = prom<V +>{
      encoding31 = ld encoding;
      encoding32 = force? encoding31;
      checkMissing(encoding32);
      return encoding32;
    };
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r85):
      return r85;
    L1():
      c14 = ldf c in base;
      r86 = dyn c14("latin-9", "iso-8859-15");
      goto L0(r86);
    L2():
      r84 = dyn base("latin-9", "iso-8859-15");
      goto L0(r84);
    };
    r88 = dyn _in_(p3, p4);
    check L80() else D22();
  L81():
    dr26 = tryDispatchBuiltin.0("[<-", l36, "latin10");
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L83() else L82("latin10", dr26);
  L82(r91, l38):
    encoding33 = ld encoding;
    check L84() else D23();
  D22():
    deopt 142 [r80, l35, "latin9", r88];
  D23():
    deopt 148 [r91, l38, "latin10", encoding33];
  L16(dx30):
    st encoding = dx30;
    encoding37 = ld encoding;
    check L89() else D25();
  L80():
    ___11 = ldf `[<-` in base;
    r89 = dyn ___11(l35, "latin9", r88);
    goto L14(r89);
  L83():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L15(dx27);
  L84():
    encoding34 = force? encoding33;
    checkMissing(encoding34);
    r94 = `==`(encoding34, "iso-8859-16");
    ___12 = ldf `[<-` in base;
    r95 = dyn ___12(l38, "latin10", r94);
    goto L15(r95);
  L85():
    dr28 = tryDispatchBuiltin.0("[<-", l39, "utf8");
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L87() else L86("utf8", dr28);
  L86(r97, l41):
    encoding35 = ld encoding;
    check L88() else D24();
  D24():
    deopt 157 [r97, l41, "utf8", encoding35];
  D25():
    deopt 163 [encoding37];
  L87():
    dx29 = getTryDispatchBuiltinValue(dr28);
    goto L16(dx29);
  L88():
    encoding36 = force? encoding35;
    checkMissing(encoding36);
    r100 = `==`(encoding36, "utf-8");
    ___13 = ldf `[<-` in base;
    r101 = dyn ___13(l41, "utf8", r100);
    goto L16(r101);
  L89():
    encoding38 = force? encoding37;
    checkMissing(encoding38);
    popenv;
    return encoding38;
  }
}