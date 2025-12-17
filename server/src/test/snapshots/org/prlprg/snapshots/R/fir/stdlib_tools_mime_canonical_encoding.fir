fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4171839283;
    st mime_canonical_encoding = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4171839283(encoding) {
  (reg encoding:*) -+> V { var encoding:*, reg __:cls, reg r:V, reg r1:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r5:V, reg l:*, reg c1:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg _in_:cls, reg encoding1:*, reg encoding2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg c2:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg ___:cls, reg r12:V, reg tolower:cls, reg encoding3:*, reg encoding4:V, reg p2:p(V +), reg r14:V, reg sub:cls, reg encoding5:*, reg encoding6:V, reg p3:p(V +), reg r16:V, reg sub1:cls, reg encoding7:*, reg encoding8:V, reg p4:p(V +), reg r18:V, reg l3:*, reg c3:L, reg r20:S, reg l5:*, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg encoding9:*, reg encoding10:V, reg r23:V, reg ___1:cls, reg r24:V, reg l6:*, reg c4:L, reg r26:S, reg l8:*, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg encoding11:*, reg encoding12:V, reg r29:V, reg ___2:cls, reg r30:V, reg l9:*, reg c5:L, reg r32:S, reg l11:*, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg encoding13:*, reg encoding14:V, reg r35:V, reg ___3:cls, reg r36:V, reg l12:*, reg c6:L, reg r38:S, reg l14:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg encoding15:*, reg encoding16:V, reg r41:V, reg ___4:cls, reg r42:V, reg l15:*, reg c7:L, reg r44:S, reg l17:*, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg encoding17:*, reg encoding18:V, reg r47:V, reg ___5:cls, reg r48:V, reg l18:*, reg c8:L, reg r50:S, reg l20:*, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg encoding19:*, reg encoding20:V, reg r53:V, reg ___6:cls, reg r54:V, reg l21:*, reg c9:L, reg r56:S, reg l23:*, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg encoding21:*, reg encoding22:V, reg r59:V, reg ___7:cls, reg r60:V, reg l24:*, reg c10:L, reg r62:S, reg l26:*, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg encoding23:*, reg encoding24:V, reg r65:V, reg ___8:cls, reg r66:V, reg l27:*, reg c11:L, reg r68:S, reg l29:*, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg encoding25:*, reg encoding26:V, reg r71:V, reg ___9:cls, reg r72:V, reg l30:*, reg c12:L, reg r74:S, reg l32:*, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg encoding27:*, reg encoding28:V, reg r77:V, reg ___10:cls, reg r78:V, reg l33:*, reg c13:L, reg r80:S, reg l35:*, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg encoding29:*, reg encoding30:V, reg r83:V, reg ___11:cls, reg r84:V, reg l36:*, reg c14:L, reg r86:S, reg l38:*, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg encoding31:*, reg encoding32:V, reg r89:V, reg ___12:cls, reg r90:V, reg l39:*, reg c15:L, reg r92:S, reg l41:*, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg encoding33:*, reg encoding34:V, reg r95:V, reg ___13:cls, reg r96:V, reg l42:*, reg c16:L, reg r98:S, reg l44:*, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg encoding35:*, reg encoding36:V, reg r101:V, reg ___14:cls, reg r102:V, reg l45:*, reg c17:L, reg r104:S, reg l47:*, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg encoding37:*, reg encoding38:V, reg r107:V, reg ___15:cls, reg r108:V, reg encoding39:*, reg encoding40:V |
    mkenv;
    st encoding = encoding;
    __ = ldf `::`;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    r = dyn __("utils", "localeToCharset");
    check L18() else D1();
  D1():
    deopt 4 [r];
  L18():
    checkFun.0(r);
    r1 = r as cls;
    r2 = dyn r1();
    check L19() else D2();
  D2():
    deopt 6 [r2];
  L19():
    c = `is.object`(r2);
    if c then L20() else L21(r2);
  L0(dx1):
    l = ld encoding;
    c1 = `is.object`(l);
    if c1 then L23() else L24(dx1, l);
  L20():
    dr = tryDispatchBuiltin.1("[", r2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(r4):
    __1 = ldf `[` in base;
    r5 = dyn __1(r4, 1);
    goto L0(r5);
  L1(dx7):
    st encoding = dx7;
    tolower = ldf tolower;
    check L28() else D5();
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L23():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dx1, dr2);
  L24(dx3, l2):
    _in_ = ldf `%in%`;
    check L26() else D3();
  D3():
    deopt 12 [dx3, l2, dx1];
  D5():
    deopt 19 [];
  L25():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx5);
  L26():
    p = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c2 = ldf c in base;
      r9 = dyn c2("", "unknown");
      goto L0(r9);
    L2():
      r7 = dyn base("", "unknown");
      goto L0(r7);
    };
    r11 = dyn _in_(p, p1);
    check L27() else D4();
  L28():
    p2 = prom<V +>{
      encoding3 = ld encoding;
      encoding4 = force? encoding3;
      checkMissing(encoding4);
      return encoding4;
    };
    r14 = dyn tolower(p2);
    check L29() else D6();
  D4():
    deopt 15 [dx3, l2, dx1, r11];
  D6():
    deopt 21 [r14];
  L27():
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l2, dx1, r11);
    goto L1(r12);
  L29():
    st encoding = r14;
    sub = ldf sub;
    check L30() else D7();
  D7():
    deopt 24 [];
  L30():
    p3 = prom<V +>{
      encoding5 = ld encoding;
      encoding6 = force? encoding5;
      checkMissing(encoding6);
      return encoding6;
    };
    r16 = dyn sub("iso_8859-([0-9]+)", "iso-8859-\\1", p3);
    check L31() else D8();
  D8():
    deopt 28 [r16];
  L31():
    st encoding = r16;
    sub1 = ldf sub;
    check L32() else D9();
  D9():
    deopt 31 [];
  L32():
    p4 = prom<V +>{
      encoding7 = ld encoding;
      encoding8 = force? encoding7;
      checkMissing(encoding8);
      return encoding8;
    };
    r18 = dyn sub1("iso8859-([0-9]+)", "iso-8859-\\1", p4);
    check L33() else D10();
  D10():
    deopt 35 [r18];
  L33():
    st encoding = r18;
    l3 = ld encoding;
    c3 = `is.object`(l3);
    if c3 then L34() else L35("iso-8859-1", l3);
  L2(dx9):
    st encoding = dx9;
    l6 = ld encoding;
    c4 = `is.object`(l6);
    if c4 then L38() else L39("iso-8859-2", l6);
  L34():
    dr4 = tryDispatchBuiltin.0("[<-", l3, "iso-8859-1");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35("iso-8859-1", dr4);
  L35(r20, l5):
    encoding9 = ld encoding;
    check L37() else D11();
  D11():
    deopt 40 [r20, l5, "iso-8859-1", encoding9];
  L3(dx11):
    st encoding = dx11;
    l9 = ld encoding;
    c5 = `is.object`(l9);
    if c5 then L42() else L43("iso-8859-3", l9);
  L36():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx8);
  L37():
    encoding10 = force? encoding9;
    checkMissing(encoding10);
    r23 = `==`(encoding10, "latin1");
    ___1 = ldf `[<-` in base;
    r24 = dyn ___1(l5, "iso-8859-1", r23);
    goto L2(r24);
  L38():
    dr6 = tryDispatchBuiltin.0("[<-", l6, "iso-8859-2");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L40() else L39("iso-8859-2", dr6);
  L39(r26, l8):
    encoding11 = ld encoding;
    check L41() else D12();
  D12():
    deopt 49 [r26, l8, "iso-8859-2", encoding11];
  L4(dx13):
    st encoding = dx13;
    l12 = ld encoding;
    c6 = `is.object`(l12);
    if c6 then L46() else L47("iso-8859-4", l12);
  L40():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L3(dx10);
  L41():
    encoding12 = force? encoding11;
    checkMissing(encoding12);
    r29 = `==`(encoding12, "latin2");
    ___2 = ldf `[<-` in base;
    r30 = dyn ___2(l8, "iso-8859-2", r29);
    goto L3(r30);
  L42():
    dr8 = tryDispatchBuiltin.0("[<-", l9, "iso-8859-3");
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L44() else L43("iso-8859-3", dr8);
  L43(r32, l11):
    encoding13 = ld encoding;
    check L45() else D13();
  D13():
    deopt 58 [r32, l11, "iso-8859-3", encoding13];
  L5(dx15):
    st encoding = dx15;
    l15 = ld encoding;
    c7 = `is.object`(l15);
    if c7 then L50() else L51("iso-8859-5", l15);
  L44():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L4(dx12);
  L45():
    encoding14 = force? encoding13;
    checkMissing(encoding14);
    r35 = `==`(encoding14, "latin3");
    ___3 = ldf `[<-` in base;
    r36 = dyn ___3(l11, "iso-8859-3", r35);
    goto L4(r36);
  L46():
    dr10 = tryDispatchBuiltin.0("[<-", l12, "iso-8859-4");
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L48() else L47("iso-8859-4", dr10);
  L47(r38, l14):
    encoding15 = ld encoding;
    check L49() else D14();
  D14():
    deopt 67 [r38, l14, "iso-8859-4", encoding15];
  L6(dx17):
    st encoding = dx17;
    l18 = ld encoding;
    c8 = `is.object`(l18);
    if c8 then L54() else L55("iso-8859-6", l18);
  L48():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L5(dx14);
  L49():
    encoding16 = force? encoding15;
    checkMissing(encoding16);
    r41 = `==`(encoding16, "latin4");
    ___4 = ldf `[<-` in base;
    r42 = dyn ___4(l14, "iso-8859-4", r41);
    goto L5(r42);
  L50():
    dr12 = tryDispatchBuiltin.0("[<-", l15, "iso-8859-5");
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L52() else L51("iso-8859-5", dr12);
  L51(r44, l17):
    encoding17 = ld encoding;
    check L53() else D15();
  D15():
    deopt 76 [r44, l17, "iso-8859-5", encoding17];
  L7(dx19):
    st encoding = dx19;
    l21 = ld encoding;
    c9 = `is.object`(l21);
    if c9 then L58() else L59("iso-8859-7", l21);
  L52():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L6(dx16);
  L53():
    encoding18 = force? encoding17;
    checkMissing(encoding18);
    r47 = `==`(encoding18, "cyrillic");
    ___5 = ldf `[<-` in base;
    r48 = dyn ___5(l17, "iso-8859-5", r47);
    goto L6(r48);
  L54():
    dr14 = tryDispatchBuiltin.0("[<-", l18, "iso-8859-6");
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L56() else L55("iso-8859-6", dr14);
  L55(r50, l20):
    encoding19 = ld encoding;
    check L57() else D16();
  D16():
    deopt 85 [r50, l20, "iso-8859-6", encoding19];
  L8(dx21):
    st encoding = dx21;
    l24 = ld encoding;
    c10 = `is.object`(l24);
    if c10 then L62() else L63("iso-8859-8", l24);
  L56():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L7(dx18);
  L57():
    encoding20 = force? encoding19;
    checkMissing(encoding20);
    r53 = `==`(encoding20, "arabic");
    ___6 = ldf `[<-` in base;
    r54 = dyn ___6(l20, "iso-8859-6", r53);
    goto L7(r54);
  L58():
    dr16 = tryDispatchBuiltin.0("[<-", l21, "iso-8859-7");
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L60() else L59("iso-8859-7", dr16);
  L59(r56, l23):
    encoding21 = ld encoding;
    check L61() else D17();
  D17():
    deopt 94 [r56, l23, "iso-8859-7", encoding21];
  L9(dx23):
    st encoding = dx23;
    l27 = ld encoding;
    c11 = `is.object`(l27);
    if c11 then L66() else L67("iso-8859-9", l27);
  L60():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L8(dx20);
  L61():
    encoding22 = force? encoding21;
    checkMissing(encoding22);
    r59 = `==`(encoding22, "greek");
    ___7 = ldf `[<-` in base;
    r60 = dyn ___7(l23, "iso-8859-7", r59);
    goto L8(r60);
  L62():
    dr18 = tryDispatchBuiltin.0("[<-", l24, "iso-8859-8");
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L64() else L63("iso-8859-8", dr18);
  L63(r62, l26):
    encoding23 = ld encoding;
    check L65() else D18();
  D18():
    deopt 103 [r62, l26, "iso-8859-8", encoding23];
  L10(dx25):
    st encoding = dx25;
    l30 = ld encoding;
    c12 = `is.object`(l30);
    if c12 then L70() else L71("iso-8859-10", l30);
  L64():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L9(dx22);
  L65():
    encoding24 = force? encoding23;
    checkMissing(encoding24);
    r65 = `==`(encoding24, "hebrew");
    ___8 = ldf `[<-` in base;
    r66 = dyn ___8(l26, "iso-8859-8", r65);
    goto L9(r66);
  L66():
    dr20 = tryDispatchBuiltin.0("[<-", l27, "iso-8859-9");
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L68() else L67("iso-8859-9", dr20);
  L67(r68, l29):
    encoding25 = ld encoding;
    check L69() else D19();
  D19():
    deopt 112 [r68, l29, "iso-8859-9", encoding25];
  L11(dx27):
    st encoding = dx27;
    l33 = ld encoding;
    c13 = `is.object`(l33);
    if c13 then L74() else L75("iso-8859-14", l33);
  L68():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L10(dx24);
  L69():
    encoding26 = force? encoding25;
    checkMissing(encoding26);
    r71 = `==`(encoding26, "latin5");
    ___9 = ldf `[<-` in base;
    r72 = dyn ___9(l29, "iso-8859-9", r71);
    goto L10(r72);
  L70():
    dr22 = tryDispatchBuiltin.0("[<-", l30, "iso-8859-10");
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L72() else L71("iso-8859-10", dr22);
  L71(r74, l32):
    encoding27 = ld encoding;
    check L73() else D20();
  D20():
    deopt 121 [r74, l32, "iso-8859-10", encoding27];
  L12(dx29):
    st encoding = dx29;
    l36 = ld encoding;
    c14 = `is.object`(l36);
    if c14 then L78() else L79("iso-8859-15", l36);
  L72():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L11(dx26);
  L73():
    encoding28 = force? encoding27;
    checkMissing(encoding28);
    r77 = `==`(encoding28, "latin6");
    ___10 = ldf `[<-` in base;
    r78 = dyn ___10(l32, "iso-8859-10", r77);
    goto L11(r78);
  L74():
    dr24 = tryDispatchBuiltin.0("[<-", l33, "iso-8859-14");
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L76() else L75("iso-8859-14", dr24);
  L75(r80, l35):
    encoding29 = ld encoding;
    check L77() else D21();
  D21():
    deopt 130 [r80, l35, "iso-8859-14", encoding29];
  L13(dx31):
    st encoding = dx31;
    l39 = ld encoding;
    c15 = `is.object`(l39);
    if c15 then L82() else L83("iso-8859-16", l39);
  L76():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L12(dx28);
  L77():
    encoding30 = force? encoding29;
    checkMissing(encoding30);
    r83 = `==`(encoding30, "latin8");
    ___11 = ldf `[<-` in base;
    r84 = dyn ___11(l35, "iso-8859-14", r83);
    goto L12(r84);
  L78():
    dr26 = tryDispatchBuiltin.0("[<-", l36, "iso-8859-15");
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L80() else L79("iso-8859-15", dr26);
  L79(r86, l38):
    encoding31 = ld encoding;
    check L81() else D22();
  D22():
    deopt 139 [r86, l38, "iso-8859-15", encoding31];
  L14(dx33):
    st encoding = dx33;
    l42 = ld encoding;
    c16 = `is.object`(l42);
    if c16 then L86() else L87("utf-8", l42);
  L80():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L13(dx30);
  L81():
    encoding32 = force? encoding31;
    checkMissing(encoding32);
    r89 = `==`(encoding32, "latin-9");
    ___12 = ldf `[<-` in base;
    r90 = dyn ___12(l38, "iso-8859-15", r89);
    goto L13(r90);
  L82():
    dr28 = tryDispatchBuiltin.0("[<-", l39, "iso-8859-16");
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L84() else L83("iso-8859-16", dr28);
  L83(r92, l41):
    encoding33 = ld encoding;
    check L85() else D23();
  D23():
    deopt 148 [r92, l41, "iso-8859-16", encoding33];
  L15(dx35):
    st encoding = dx35;
    l45 = ld encoding;
    c17 = `is.object`(l45);
    if c17 then L90() else L91("us-ascii", l45);
  L84():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L14(dx32);
  L85():
    encoding34 = force? encoding33;
    checkMissing(encoding34);
    r95 = `==`(encoding34, "latin10");
    ___13 = ldf `[<-` in base;
    r96 = dyn ___13(l41, "iso-8859-16", r95);
    goto L14(r96);
  L86():
    dr30 = tryDispatchBuiltin.0("[<-", l42, "utf-8");
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L88() else L87("utf-8", dr30);
  L87(r98, l44):
    encoding35 = ld encoding;
    check L89() else D24();
  D24():
    deopt 157 [r98, l44, "utf-8", encoding35];
  L16(dx37):
    st encoding = dx37;
    encoding39 = ld encoding;
    check L94() else D26();
  L88():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L15(dx34);
  L89():
    encoding36 = force? encoding35;
    checkMissing(encoding36);
    r101 = `==`(encoding36, "utf8");
    ___14 = ldf `[<-` in base;
    r102 = dyn ___14(l44, "utf-8", r101);
    goto L15(r102);
  L90():
    dr32 = tryDispatchBuiltin.0("[<-", l45, "us-ascii");
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L92() else L91("us-ascii", dr32);
  L91(r104, l47):
    encoding37 = ld encoding;
    check L93() else D25();
  D25():
    deopt 166 [r104, l47, "us-ascii", encoding37];
  D26():
    deopt 172 [encoding39];
  L92():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L16(dx36);
  L93():
    encoding38 = force? encoding37;
    checkMissing(encoding38);
    r107 = `==`(encoding38, "ascii");
    ___15 = ldf `[<-` in base;
    r108 = dyn ___15(l47, "us-ascii", r107);
    goto L16(r108);
  L94():
    encoding40 = force? encoding39;
    checkMissing(encoding40);
    popenv;
    return encoding40;
  }
}