fun main() {
  () -+> V { reg r:cls, reg structure:cls, reg p:p(V +), reg p1:p(V +), reg r3:V |
    mkenv;
    r = clos inner1023099298;
    st structure = r;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6>;
    };
    p1 = prom<V +>{
      return <int 2, 3>;
    };
    r3 = dyn structure[, dim](p, p1);
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner1023099298(`.Data`, `...`) {
  (reg _Data:*, reg ddd:dots) -+> V { var `.Data`:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Data1:*, reg _Data2:V, reg c:V, reg c1:L, reg warning:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg list:cls, reg ddd1:dots?, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg attrib:*, reg attrib1:V, reg length:cls, reg r9:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c3:cls, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg attrib2:*, reg attrib3:V, reg names:cls, reg r15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg r17:V, reg attrnames:*, reg attrnames1:V, reg specials:*, reg specials1:V, reg match:cls, reg r18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg r20:V, reg m:*, reg m1:V, reg is_na:cls, reg r21:V, reg r22:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r23:V, reg r24:V, reg ok:*, reg ok1:V, reg any:cls, reg r25:V, reg c4:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r26:V, reg r27:V, reg c5:cls, reg r28:V, reg replace:*, reg replace1:V, reg c6:L, reg replace3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg m2:*, reg m3:V, reg c7:L, reg replace5:V, reg m5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg replace7:V, reg dx3:V, reg ok2:*, reg ok3:V, reg __:cls, reg r29:V, reg __1:cls, reg r30:V, reg l:*, reg names1:cls, reg r31:V, reg c8:L, reg dx5:V, reg l2:*, reg r33:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg l4:*, reg dx9:V, reg ok4:*, reg ok5:V, reg ___:cls, reg r34:V, reg names__:cls, reg r35:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r36:V, reg r37:V, reg attrib4:*, reg attrib5:V, reg c9:L, reg dr6:V, reg dc3:L, reg dx11:V, reg dx12:V, reg __2:cls, reg r38:V, reg r39:V, reg any1:cls, reg r40:V, reg c10:L, reg c12:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r41:V, reg c15:L, reg r42:V, reg _Data3:*, reg _Data4:V, reg typeof:cls, reg r43:V, reg r44:V, reg c16:L, reg c17:V, reg c19:L, reg l5:*, reg storage_mode__:cls, reg r45:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r47:V, reg r48:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r49:V, reg r50:V, reg _Data5:*, reg _Data6:V, reg attributes:cls, reg r51:V, reg attrib8:*, reg attrib9:V, reg c20:cls, reg r52:V, reg l6:*, reg attributes__:cls, reg r53:V, reg _Data7:*, reg _Data8:V |
    mkenv;
    st `.Data` = _Data;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L29() else L1();
  L26():
    _Data1 = ld `.Data`;
    check L28() else D0();
  L27():
    r = dyn base(<sym .Data>);
    goto L0(r);
  D0():
    deopt 1 [_Data1];
  L1():
    goto L2();
  L2():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L28():
    _Data2 = force? _Data1;
    checkMissing(_Data2);
    c = `==`(_Data2, NULL);
    goto L0(c);
  L29():
    warning = ldf warning;
    check L30() else D1();
  D1():
    deopt 5 [];
  L3(r5):
    st attrib = r5;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L30():
    r2 = dyn warning("Calling 'structure(NULL, *)' is deprecated, as NULL cannot have attributes.\n  Consider 'structure(list(), *)' instead.");
    check L31() else D2();
  L33():
    list = ldf list;
    check L35() else D3();
  L34():
    r4 = dyn base1(<sym ...>);
    goto L3(r4);
  D2():
    deopt 7 [r2];
  D3():
    deopt 12 [];
  L4(r8):
    c2 = `as.logical`(r8);
    if c2 then L41() else L5();
  L31():
    goto L2();
  L35():
    ddd1 = ld `...`;
    r6 = dyn list[`...`](ddd1);
    check L36() else D4();
  L37():
    attrib = ld attrib;
    check L39() else D5();
  L38():
    r7 = dyn base2(<sym attrib>);
    goto L4(r7);
  D4():
    deopt 14 [r6];
  D5():
    deopt 18 [attrib];
  L5():
    goto L25();
  L25():
    _Data7 = ld `.Data`;
    check L112() else D38();
  L36():
    goto L3(r6);
  L39():
    attrib1 = force? attrib;
    checkMissing(attrib1);
    length = ldf length in base;
    r9 = dyn length(attrib1);
    check L40() else D6();
  L41():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D6():
    deopt 21 [r9];
  D38():
    deopt 146 [_Data7];
  L6(r11):
    st specials = r11;
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L40():
    goto L4(r9);
  L42():
    c3 = ldf c in base;
    r12 = dyn c3(".Dim", ".Dimnames", ".Names", ".Tsp", ".Label");
    check L44() else D7();
  L43():
    r10 = dyn base3(".Dim", ".Dimnames", ".Names", ".Tsp", ".Label");
    goto L6(r10);
  L112():
    _Data8 = force? _Data7;
    checkMissing(_Data8);
    popenv;
    return _Data8;
  D7():
    deopt 30 [r12];
  L7(r14):
    st attrnames = r14;
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L44():
    goto L6(r12);
  L45():
    attrib2 = ld attrib;
    check L47() else D8();
  L46():
    r13 = dyn base4(<sym attrib>);
    goto L7(r13);
  D8():
    deopt 34 [attrib2];
  L8(r17):
    st m = r17;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  L47():
    attrib3 = force? attrib2;
    checkMissing(attrib3);
    names = ldf names in base;
    r15 = dyn names(attrib3);
    check L48() else D9();
  L49():
    attrnames = ld attrnames;
    check L51() else D10();
  L50():
    r16 = dyn base5(<sym attrnames>, <sym specials>);
    goto L8(r16);
  D9():
    deopt 37 [r15];
  D10():
    deopt 41 [attrnames];
  L9(r20):
    r22 = `!`(r20);
    st ok = r22;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  L48():
    goto L7(r15);
  L51():
    attrnames1 = force? attrnames;
    checkMissing(attrnames1);
    specials = ld specials;
    check L52() else D11();
  L54():
    m = ld m;
    check L56() else D13();
  L55():
    r19 = dyn base6(<sym m>);
    goto L9(r19);
  D11():
    deopt 43 [specials];
  D13():
    deopt 52 [m];
  L10(r24):
    c4 = `as.logical`(r24);
    if c4 then L62() else L11();
  L52():
    specials1 = force? specials;
    checkMissing(specials1);
    match = ldf match in base;
    r18 = dyn match(attrnames1, specials1, NA_INT, NULL);
    check L53() else D12();
  L56():
    m1 = force? m;
    checkMissing(m1);
    is_na = ldf `is.na` in base;
    r21 = dyn is_na(m1);
    check L57() else D14();
  L58():
    ok = ld ok;
    check L60() else D15();
  L59():
    r23 = dyn base7(<sym ok>);
    goto L10(r23);
  D12():
    deopt 48 [r18];
  D14():
    deopt 55 [r21];
  D15():
    deopt 60 [ok];
  L11():
    goto L16();
  L16():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L84() else L85();
  L53():
    goto L8(r18);
  L57():
    goto L9(r21);
  L60():
    ok1 = force? ok;
    checkMissing(ok1);
    any = ldf any in base;
    r25 = dyn any(ok1);
    check L61() else D16();
  L62():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L63() else L64();
  D16():
    deopt 63 [r25];
  L12(r27):
    st replace = r27;
    replace = ld replace;
    check L66() else D18();
  L17(r37):
    c10 = `as.logical`(r37);
    if c10 then L91() else L19(c10);
  L61():
    goto L10(r25);
  L63():
    c5 = ldf c in base;
    r28 = dyn c5("dim", "dimnames", "names", "tsp", "levels");
    check L65() else D17();
  L64():
    r26 = dyn base8("dim", "dimnames", "names", "tsp", "levels");
    goto L12(r26);
  L84():
    attrib4 = ld attrib;
    check L86() else D26();
  L85():
    r36 = dyn base9(<lang `==`(`[[`(attrib, "class", exact=TRUE), "factor")>);
    goto L17(r36);
  D17():
    deopt 72 [r28];
  D18():
    deopt 74 [replace];
  D26():
    deopt 98 [attrib4];
  L19(c12):
    c19 = `as.logical`(c12);
    if c19 then L97() else L21();
  L65():
    goto L12(r28);
  L66():
    replace1 = force? replace;
    checkMissing(replace1);
    c6 = `is.object`(replace1);
    if c6 then L67() else L68(replace1);
  L86():
    attrib5 = force? attrib4;
    checkMissing(attrib5);
    c9 = `is.object`(attrib5);
    if c9 then L87() else L88();
  L91():
    sym10 = ldf typeof;
    base10 = ldf typeof in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L92() else L93();
  L13(dx1):
    l = ld attrib;
    names1 = ldf names;
    check L75() else D21();
  L18(dx12):
    r39 = `==`(dx12, "factor");
    any1 = ldf any in base;
    r40 = dyn any1(r39);
    check L90() else D27();
  L20(c15, r42):
    r44 = `==`(r42, "double");
    c16 = `as.logical`(r44);
    c17 = `&&`(c15, c16);
    goto L19(c17);
  L21():
    goto L22();
  L22():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L101() else L102();
  L67():
    dr = tryDispatchBuiltin.1("[", replace1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L69() else L68(dr);
  L68(replace3):
    m2 = ld m;
    check L70() else D19();
  L87():
    dr6 = tryDispatchBuiltin.1("[[", attrib5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L89() else L88();
  L88():
    __2 = ldf `[[` in base;
    r38 = dyn __2(attrib5, "class", TRUE);
    goto L18(r38);
  L92():
    _Data3 = ld `.Data`;
    check L94() else D28();
  L93():
    r41 = dyn base10(<sym .Data>);
    goto L20(c10, r41);
  L97():
    l5 = ld `.Data`;
    storage_mode__ = ldf `storage.mode<-`;
    check L98() else D30();
  D19():
    deopt 76 [replace3, m2];
  D21():
    deopt 83 [dx1, l, dx1];
  D27():
    deopt 108 [r40];
  D28():
    deopt 111 [c10, _Data3];
  D30():
    deopt 121 ["integer", l5, "integer"];
  L23(r48):
    l6 = ld `.Data`;
    attributes__ = ldf `attributes<-`;
    check L109() else D36();
  L69():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L70():
    m3 = force? m2;
    checkMissing(m3);
    c7 = `is.object`(m3);
    if c7 then L71() else L72(replace3, m3);
  L75():
    r31 = dyn names1(dx1, NULL);
    check L76() else D22();
  L89():
    dx11 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx11);
  L90():
    goto L17(r40);
  L94():
    _Data4 = force? _Data3;
    checkMissing(_Data4);
    typeof = ldf typeof in base;
    r43 = dyn typeof(_Data4);
    check L95() else D29();
  L98():
    r45 = dyn storage_mode__(l5, NULL, "integer");
    check L99() else D31();
  L101():
    sym12 = ldf attributes;
    base12 = ldf attributes in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L103() else L104();
  L102():
    r47 = dyn base11(<lang attributes(.Data)>, <sym attrib>);
    goto L23(r47);
  D22():
    deopt 85 [dx1, l, dx1, r31];
  D29():
    deopt 114 [c10, r43];
  D31():
    deopt 123 ["integer", r45];
  D36():
    deopt 140 [r48, l6, r48];
  L14(replace7, dx3):
    __1 = ldf `[` in base;
    r30 = dyn __1(replace7, dx3);
    goto L13(r30);
  L24(r50):
    attrib8 = ld attrib;
    check L107() else D34();
  L71():
    dr2 = tryDispatchBuiltin.1("[", m3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L73() else L72(replace3, dr2);
  L72(replace5, m5):
    ok2 = ld ok;
    check L74() else D20();
  L76():
    c8 = `is.object`(r31);
    if c8 then L77() else L78(dx1, l, r31);
  L95():
    goto L20(c10, r43);
  L99():
    st `.Data` = r45;
    goto L22();
  L103():
    _Data5 = ld `.Data`;
    check L105() else D32();
  L104():
    r49 = dyn base12(<sym .Data>);
    goto L24(r49);
  L109():
    r53 = dyn attributes__(l6, NULL, r48);
    check L110() else D37();
  D20():
    deopt 78 [replace5, m5, ok2];
  D32():
    deopt 131 [_Data5];
  D34():
    deopt 135 [attrib8];
  D37():
    deopt 142 [r48, r53];
  L15(dx8, l4, dx9):
    names__ = ldf `names<-`;
    check L81() else D24();
  L73():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(replace3, dx2);
  L74():
    ok3 = force? ok2;
    __ = ldf `[` in base;
    r29 = dyn __(m5, ok3);
    goto L14(replace5, r29);
  L77():
    dr4 = tryDispatchBuiltin.0("[<-", r31, dx1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L79() else L78(dx1, l, dr4);
  L78(dx5, l2, r33):
    ok4 = ld ok;
    check L80() else D23();
  L105():
    _Data6 = force? _Data5;
    checkMissing(_Data6);
    attributes = ldf attributes in base;
    r51 = dyn attributes(_Data6);
    check L106() else D33();
  L107():
    attrib9 = force? attrib8;
    checkMissing(attrib9);
    c20 = ldf c in base;
    r52 = dyn c20(r50, attrib9);
    check L108() else D35();
  L110():
    st `.Data` = r53;
    goto L25();
  D23():
    deopt 87 [dx5, l2, r33, dx1, ok4];
  D24():
    deopt 90 [dx8, l4, dx9];
  D33():
    deopt 134 [r51];
  D35():
    deopt 138 [r52];
  L79():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx1, l, dx7);
  L80():
    ok5 = force? ok4;
    ___ = ldf `[<-` in base;
    r34 = dyn ___(r33, dx1, ok5);
    goto L15(dx5, l2, r34);
  L81():
    r35 = dyn names__(l4, NULL, dx9);
    check L82() else D25();
  L106():
    goto L24(r51);
  L108():
    goto L23(r52);
  D25():
    deopt 92 [dx8, r35];
  L82():
    st attrib = r35;
    goto L16();
  }
}