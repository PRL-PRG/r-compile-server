fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1438292104`;
    st `[[<-.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1438292104`(x, `...`, value) {
  (reg x:*, reg ddd:dots, reg value:*) -+> V { var x:*, var `...`:dots?, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg nargs:cls, reg r5:V, reg r6:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg __1:*, reg __2:V, reg length:cls, reg r9:V, reg r10:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg value1:*, reg value2:V, reg c2:L, reg c3:L, reg c5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg c8:L, reg r14:V, reg value3:*, reg value4:V, reg length1:cls, reg r15:V, reg r16:V, reg c9:L, reg c10:V, reg c12:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg as_numeric_version:cls, reg value5:*, reg value6:V, reg p:p(V +), reg r20:V, reg unclass1:cls, reg r21:V, reg c13:L, reg r23:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __3:cls, reg r24:V, reg dx2:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg value7:*, reg value8:V, reg c14:L, reg r27:V, reg c15:L, reg c16:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg c20:L, reg r29:V, reg value9:*, reg value10:V, reg anyNA:cls, reg r30:V, reg c21:L, reg c22:V, reg c24:L, reg c25:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg c29:L, reg r32:V, reg value11:*, reg value12:V, reg any:cls, reg r33:V, reg r34:V, reg c30:L, reg c31:V, reg c33:L, reg stop:cls, reg r35:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r36:V, reg r37:V, reg value13:*, reg value14:V, reg as_integer:cls, reg r38:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r39:V, reg r40:V, reg value15:*, reg value16:V, reg length2:cls, reg r41:V, reg r42:V, reg c34:L, reg c35:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r43:V, reg c39:L, reg r44:V, reg value17:*, reg value18:V, reg is_na:cls, reg r45:V, reg c40:L, reg c41:V, reg c43:L, reg c44:V, reg value19:*, reg value20:V, reg r46:V, reg c46:L, reg c47:V, reg c49:L, reg stop1:cls, reg r47:V, reg value21:*, reg value22:V, reg l:*, reg c50:L, reg value24:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx4:V, reg value26:V, reg dx5:V, reg __4:*, reg __5:V, reg ____:cls, reg r48:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r49:V, reg r50:V, reg value28:*, reg value29:V, reg as_integer1:cls, reg r51:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r52:V, reg r53:V, reg value30:*, reg value31:V, reg length3:cls, reg r54:V, reg r55:V, reg c51:L, reg c52:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r56:V, reg c56:L, reg r57:V, reg value32:*, reg value33:V, reg is_na1:cls, reg r58:V, reg c57:L, reg c58:V, reg c60:L, reg c61:V, reg value34:*, reg value35:V, reg r59:V, reg c63:L, reg c64:V, reg c66:L, reg stop2:cls, reg r60:V, reg value36:*, reg value37:V, reg l3:*, reg c67:L, reg value40:V, reg l6:*, reg value41:V, reg l7:*, reg dr4:V, reg dc2:L, reg dx6:V, reg value44:V, reg l9:*, reg value45:V, reg dx7:V, reg __6:*, reg __7:V, reg __8:cls, reg r62:V, reg c68:L, reg value47:V, reg l11:*, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg value49:V, reg l13:*, reg dx11:V, reg __9:*, reg __10:V, reg ___:cls, reg r63:V, reg c69:L, reg value51:V, reg l15:*, reg dr8:V, reg dc4:L, reg dx12:V, reg value53:V, reg dx13:V, reg __11:*, reg __12:V, reg ____1:cls, reg r64:V, reg structure:cls, reg z:*, reg z1:V, reg p1:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r66:V, reg r67:V, reg x3:*, reg x4:V, reg oldClass:cls, reg r68:V, reg p2:p(V +), reg r70:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    st value = value;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L0(r1):
    st z = r1;
    sym1 = ldf nargs;
    base1 = ldf nargs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L37():
    x1 = ld x;
    check L39() else D0();
  L38():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    r6 = `<`(r4, 4);
    c = `as.logical`(r6);
    if c then L44() else L2();
  L39():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L40() else D1();
  L41():
    nargs = ldf nargs in base;
    r5 = dyn nargs();
    check L43() else D2();
  L42():
    r3 = dyn base1();
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [r5];
  L2():
    sym12 = ldf `as.integer`;
    base12 = ldf `as.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L116() else L117();
  L26():
    structure = ldf structure;
    check L150() else D42();
  L40():
    goto L0(r2);
  L43():
    goto L1(r5);
  L44():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  D42():
    deopt 162 [];
  L3(r8):
    r10 = `<`(r8, 2);
    c1 = `as.logical`(r10);
    if c1 then L49() else L4();
  L27(r50):
    st value = r50;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L120() else L121();
  L45():
    __1 = ld `..1`;
    check L47() else D3();
  L46():
    r7 = dyn base2(<sym ..1>);
    goto L3(r7);
  L116():
    value28 = ld value;
    check L118() else D29();
  L117():
    r49 = dyn base12(<sym value>);
    goto L27(r49);
  L150():
    p1 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p2 = prom<V +>{
      sym15 = ldf oldClass;
      base15 = ldf oldClass in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      oldClass = ldf oldClass in base;
      r68 = dyn oldClass(x4);
      goto L0(r68);
    L2():
      r66 = dyn base15(<sym x>);
      goto L0(r66);
    };
    r70 = dyn structure[, class](p1, p2);
    check L151() else D43();
  D3():
    deopt 15 [__1];
  D29():
    deopt 115 [value28];
  D43():
    deopt 166 [r70];
  L4():
    sym9 = ldf `as.integer`;
    base9 = ldf `as.integer` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L89() else L90();
  L18():
    value21 = ld value;
    check L110() else D27();
  L28(r53):
    r55 = `!=`(r53, 1);
    c51 = `as.logical`(r55);
    if c51 then L29(c51) else L124();
  L47():
    __2 = force? __1;
    checkMissing(__2);
    length = ldf length in base;
    r9 = dyn length(__2);
    check L48() else D4();
  L49():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L118():
    value29 = force? value28;
    checkMissing(value29);
    as_integer1 = ldf `as.integer` in base;
    r51 = dyn as_integer1(value29);
    check L119() else D30();
  L120():
    value30 = ld value;
    check L122() else D31();
  L121():
    r52 = dyn base13(<sym value>);
    goto L28(r52);
  L151():
    popenv;
    return r70;
  D4():
    deopt 18 [r9];
  D27():
    deopt 106 [value21];
  D30():
    deopt 118 [r51];
  D31():
    deopt 122 [value30];
  L5(r12):
    c3 = `as.logical`(r12);
    if c3 then L53() else L6(c3);
  L19(r37):
    st value = r37;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L93() else L94();
  L29(c52):
    c60 = `as.logical`(c52);
    if c60 then L31(c60) else L130();
  L48():
    goto L3(r9);
  L50():
    value1 = ld value;
    check L52() else D5();
  L51():
    r11 = dyn base3(<sym value>);
    goto L5(r11);
  L89():
    value13 = ld value;
    check L91() else D18();
  L90():
    r36 = dyn base9(<sym value>);
    goto L19(r36);
  L110():
    value22 = force? value21;
    checkMissing(value22);
    l = ld z;
    c50 = `is.object`(l);
    if c50 then L111() else L112(value22, l);
  L119():
    goto L27(r51);
  L122():
    value31 = force? value30;
    checkMissing(value31);
    length3 = ldf length in base;
    r54 = dyn length3(value31);
    check L123() else D32();
  L124():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L125() else L126();
  D5():
    deopt 22 [value1];
  D18():
    deopt 75 [value13];
  D32():
    deopt 125 [r54];
  L6(c5):
    c12 = `as.logical`(c5);
    if c12 then L59() else L8();
  L20(r40):
    r42 = `!=`(r40, 1);
    c34 = `as.logical`(r42);
    if c34 then L21(c34) else L97();
  L25(value26, dx5):
    st z = dx5;
    goto L26();
  L30(c56, r57):
    c57 = `as.logical`(r57);
    c58 = `||`(c56, c57);
    goto L29(c58);
  L31(c61):
    c66 = `as.logical`(c61);
    if c66 then L133() else L32();
  L52():
    value2 = force? value1;
    checkMissing(value2);
    c2 = `is.character`(value2);
    goto L5(c2);
  L53():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L91():
    value14 = force? value13;
    checkMissing(value14);
    as_integer = ldf `as.integer` in base;
    r38 = dyn as_integer(value14);
    check L92() else D19();
  L93():
    value15 = ld value;
    check L95() else D20();
  L94():
    r39 = dyn base10(<sym value>);
    goto L20(r39);
  L111():
    dr2 = tryDispatchBuiltin.0("[[<-", l, value22);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L113() else L112(value22, dr2);
  L112(value24, l2):
    __4 = ld `..1`;
    check L114() else D28();
  L123():
    goto L28(r54);
  L125():
    value32 = ld value;
    check L127() else D33();
  L126():
    r56 = dyn base14(<sym value>);
    goto L30(c51, r56);
  L130():
    value34 = ld value;
    check L131() else D35();
  D19():
    deopt 78 [r38];
  D20():
    deopt 82 [value15];
  D28():
    deopt 109 [value24, l2, value22, __4];
  D33():
    deopt 130 [c51, value32];
  D35():
    deopt 135 [c60, value34];
  L7(c8, r14):
    r16 = `==`(r14, 1);
    c9 = `as.logical`(r16);
    c10 = `&&`(c8, c9);
    goto L6(c10);
  L8():
    sym6 = ldf `is.integer`;
    base6 = ldf `is.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L11(dx2):
    goto L18();
  L21(c35):
    c43 = `as.logical`(c35);
    if c43 then L23(c43) else L103();
  L32():
    goto L33();
  L33():
    value36 = ld value;
    check L137() else D38();
  L54():
    value3 = ld value;
    check L56() else D6();
  L55():
    r13 = dyn base4(<sym value>);
    goto L7(c3, r13);
  L59():
    sym5 = ldf unclass;
    base5 = ldf unclass in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L92():
    goto L19(r38);
  L95():
    value16 = force? value15;
    checkMissing(value16);
    length2 = ldf length in base;
    r41 = dyn length2(value16);
    check L96() else D21();
  L97():
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L98() else L99();
  L113():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L25(value22, dx4);
  L114():
    __5 = force? __4;
    ____ = ldf `[[<-` in base;
    r48 = dyn ____(l2, value22, __5);
    goto L25(value24, r48);
  L127():
    value33 = force? value32;
    checkMissing(value33);
    is_na1 = ldf `is.na` in base;
    r58 = dyn is_na1(value33);
    check L128() else D34();
  L131():
    value35 = force? value34;
    checkMissing(value35);
    r59 = `<`(value35, 0);
    c63 = `as.logical`(r59);
    c64 = `||`(c60, c63);
    goto L31(c64);
  L133():
    stop2 = ldf stop;
    check L134() else D36();
  D6():
    deopt 27 [c3, value3];
  D21():
    deopt 85 [r41];
  D34():
    deopt 133 [c51, r58];
  D36():
    deopt 141 [];
  D38():
    deopt 146 [value36];
  L9(r18):
    c13 = `is.object`(r18);
    if c13 then L65() else L66(r18);
  L12(r26):
    r27 = `!`(r26);
    c15 = `as.logical`(r27);
    if c15 then L13(c15) else L72();
  L22(c39, r44):
    c40 = `as.logical`(r44);
    c41 = `||`(c39, c40);
    goto L21(c41);
  L23(c44):
    c49 = `as.logical`(c44);
    if c49 then L106() else L24();
  L56():
    value4 = force? value3;
    checkMissing(value4);
    length1 = ldf length in base;
    r15 = dyn length1(value4);
    check L57() else D7();
  L60():
    as_numeric_version = ldf `as.numeric_version`;
    check L62() else D8();
  L61():
    r17 = dyn base5(<lang as.numeric_version(value)>);
    goto L9(r17);
  L69():
    value7 = ld value;
    check L71() else D11();
  L70():
    r25 = dyn base6(<sym value>);
    goto L12(r25);
  L96():
    goto L20(r41);
  L98():
    value17 = ld value;
    check L100() else D22();
  L99():
    r43 = dyn base11(<sym value>);
    goto L22(c34, r43);
  L103():
    value19 = ld value;
    check L104() else D24();
  L128():
    goto L30(c51, r58);
  L134():
    r60 = dyn stop2("invalid 'value'");
    check L135() else D37();
  L137():
    value37 = force? value36;
    checkMissing(value37);
    l3 = ld z;
    c67 = `is.object`(l3);
    if c67 then L138() else L139(value37, l3, value37, l3);
  D7():
    deopt 30 [c3, r15];
  D8():
    deopt 37 [];
  D11():
    deopt 47 [value7];
  D22():
    deopt 90 [c34, value17];
  D24():
    deopt 95 [c43, value19];
  D37():
    deopt 143 [r60];
  L10(dx1):
    st value = dx1;
    goto L11(dx1);
  L13(c16):
    c24 = `as.logical`(c16);
    if c24 then L15(c24) else L78();
  L24():
    goto L18();
  L34(value44, l9, value45, dx7):
    c68 = `is.object`(dx7);
    if c68 then L142() else L143(value44, l9, dx7);
  L57():
    goto L7(c3, r15);
  L62():
    p = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    r20 = dyn as_numeric_version(p);
    check L63() else D9();
  L65():
    dr = tryDispatchBuiltin.1("[[", r18);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L67() else L66(dr);
  L66(r23):
    __3 = ldf `[[` in base;
    r24 = dyn __3(r23, 1);
    goto L10(r24);
  L71():
    value8 = force? value7;
    checkMissing(value8);
    c14 = `is.integer`(value8);
    goto L12(c14);
  L72():
    sym7 = ldf anyNA;
    base7 = ldf anyNA in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L73() else L74();
  L100():
    value18 = force? value17;
    checkMissing(value18);
    is_na = ldf `is.na` in base;
    r45 = dyn is_na(value18);
    check L101() else D23();
  L104():
    value20 = force? value19;
    checkMissing(value20);
    r46 = `<`(value20, 0);
    c46 = `as.logical`(r46);
    c47 = `||`(c43, c46);
    goto L23(c47);
  L106():
    stop1 = ldf stop;
    check L107() else D25();
  L135():
    goto L33();
  L138():
    dr4 = tryDispatchBuiltin.1("[[", l3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L140() else L139(value37, l3, value37, dr4);
  L139(value40, l6, value41, l7):
    __6 = ld `..1`;
    check L141() else D39();
  D9():
    deopt 39 [r20];
  D23():
    deopt 93 [c34, r45];
  D25():
    deopt 101 [];
  D39():
    deopt 150 [value40, l6, value41, l7, __6];
  L14(c20, r29):
    c21 = `as.logical`(r29);
    c22 = `||`(c20, c21);
    goto L13(c22);
  L15(c25):
    c33 = `as.logical`(c25);
    if c33 then L84() else L17();
  L35(value49, l13, dx11):
    c69 = `is.object`(l13);
    if c69 then L146() else L147(value49, l13);
  L63():
    unclass1 = ldf unclass in base;
    r21 = dyn unclass1(r20);
    check L64() else D10();
  L67():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L73():
    value9 = ld value;
    check L75() else D12();
  L74():
    r28 = dyn base7(<sym value>);
    goto L14(c15, r28);
  L78():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L79() else L80();
  L101():
    goto L22(c34, r45);
  L107():
    r47 = dyn stop1("invalid 'value'");
    check L108() else D26();
  L140():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L34(value37, l3, value37, dx6);
  L141():
    __7 = force? __6;
    __8 = ldf `[[` in base;
    r62 = dyn __8(l7, __7);
    goto L34(value40, l6, value41, r62);
  L142():
    dr6 = tryDispatchBuiltin.0("[<-", dx7, value45);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L144() else L143(value44, l9, dr6);
  L143(value47, l11, dx9):
    __9 = ld `..2`;
    check L145() else D40();
  D10():
    deopt 41 [r21];
  D12():
    deopt 53 [c15, value9];
  D26():
    deopt 103 [r47];
  D40():
    deopt 154 [value47, l11, dx9, value45, __9];
  L16(c29, r32):
    r34 = `<`(r32, 0);
    c30 = `as.logical`(r34);
    c31 = `||`(c29, c30);
    goto L15(c31);
  L17():
    goto L11(NULL);
  L36(value53, dx13):
    st z = dx13;
    goto L26();
  L64():
    goto L9(r21);
  L75():
    value10 = force? value9;
    checkMissing(value10);
    anyNA = ldf anyNA in base;
    r30 = dyn anyNA(value10);
    check L76() else D13();
  L79():
    value11 = ld value;
    check L81() else D14();
  L80():
    r31 = dyn base8(<sym value>);
    goto L16(c24, r31);
  L84():
    stop = ldf stop;
    check L85() else D16();
  L108():
    goto L18();
  L144():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L35(value44, l9, dx10);
  L145():
    __10 = force? __9;
    ___ = ldf `[<-` in base;
    r63 = dyn ___(dx9, value45, __10);
    goto L35(value47, l11, r63);
  L146():
    dr8 = tryDispatchBuiltin.0("[[<-", l13, dx11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L148() else L147(value49, dr8);
  L147(value51, l15):
    __11 = ld `..1`;
    check L149() else D41();
  D13():
    deopt 56 [c15, r30];
  D14():
    deopt 60 [c24, value11];
  D16():
    deopt 68 [];
  D41():
    deopt 157 [value51, l15, dx11, __11];
  L76():
    goto L14(c15, r30);
  L81():
    value12 = force? value11;
    checkMissing(value12);
    any = ldf any in base;
    r33 = dyn any(value12);
    check L82() else D15();
  L85():
    r35 = dyn stop("invalid 'value'");
    check L86() else D17();
  L148():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L36(value49, dx12);
  L149():
    __12 = force? __11;
    ____1 = ldf `[[<-` in base;
    r64 = dyn ____1(l15, dx11, __12);
    goto L36(value51, r64);
  D15():
    deopt 63 [c24, r33];
  D17():
    deopt 70 [r35];
  L82():
    goto L16(c24, r33);
  L86():
    goto L11(r35);
  }
}