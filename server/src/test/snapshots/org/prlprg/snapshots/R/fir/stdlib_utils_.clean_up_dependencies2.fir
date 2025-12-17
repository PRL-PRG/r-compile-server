fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1457043395;
    st `.clean_up_dependencies2` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1457043395(x, installed, available) {
  (reg x:*, reg installed:*, reg available:*) -+> V { var x:*, var installed:*, var available:*, reg r:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg x7:V, reg r2:V, reg x8:*, reg x9:V, reg is_na:cls, reg r3:V, reg r4:V, reg __:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x10:*, reg x11:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg character:cls, reg r12:V, reg character1:cls, reg r13:V, reg list:cls, reg r14:V, reg _split_dependencies:cls, reg x12:*, reg x13:V, reg p:p(V +), reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg xx:*, reg xx1:V, reg length1:cls, reg r21:V, reg r22:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg character2:cls, reg r25:V, reg character3:cls, reg r26:V, reg list1:cls, reg r27:V, reg installed1:*, reg installed2:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r30:V, reg vapply:cls, reg xx2:*, reg xx3:V, reg p1:p(V +), reg r32:cls, reg p2:p(V +), reg r34:V, reg xx4:*, reg xx5:V, reg c4:L, reg xx7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg have:*, reg have1:V, reg r35:V, reg __2:cls, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg xx8:*, reg xx9:V, reg length2:cls, reg r39:V, reg r40:V, reg c5:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg character4:cls, reg r43:V, reg character5:cls, reg r44:V, reg list2:cls, reg r45:V, reg row_names:cls, reg available1:*, reg available2:V, reg p3:p(V +), reg r49:V, reg character6:cls, reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg xx10:*, reg xx11:V, reg r53:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x14:V, reg xx12:*, reg xx13:V, reg c7:L, reg i6:I, reg xx15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i8:I, reg dx7:V, reg i9:*, reg i10:V, reg __3:cls, reg r54:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg i13:I, reg r56:V, reg x15:*, reg x16:V, reg length3:cls, reg r57:V, reg r58:V, reg c8:L, reg _in_:cls, reg x17:*, reg x18:V, reg c9:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r59:V, reg p4:p(V +), reg pkgs:*, reg pkgs1:V, reg p5:p(V +), reg r62:V, reg r63:V, reg c10:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg i20:I, reg r65:V, reg miss:*, reg miss1:V, reg x21:*, reg x22:V, reg c11:L, reg i22:I, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i24:I, reg dx11:V, reg __5:cls, reg r66:V, reg c12:cls, reg r67:V, reg x25:*, reg x26:V, reg c13:L, reg i28:I, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i30:I, reg dx13:V, reg __6:cls, reg r69:V, reg r70:V, reg c14:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg i35:I, reg r72:V, reg canget:*, reg canget1:V, reg x29:*, reg x30:V, reg c15:L, reg i37:I, reg x32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i39:I, reg dx15:V, reg __7:cls, reg r73:V, reg c16:cls, reg r74:V, reg as_package_version:cls, reg available3:*, reg available4:V, reg c17:L, reg available6:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg pkgs2:*, reg pkgs3:V, reg x33:*, reg x34:V, reg c18:L, reg available8:V, reg pkgs5:V, reg x36:V, reg dr18:V, reg dc9:L, reg dx18:V, reg available10:V, reg pkgs7:V, reg dx19:V, reg __8:cls, reg r76:V, reg r77:V, reg __9:cls, reg r78:V, reg p6:p(V +), reg r80:V, reg as_package_version1:cls, reg x37:*, reg x38:V, reg c19:L, reg x40:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __10:cls, reg r81:V, reg p7:p(V +), reg r83:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r84:V, reg i44:I, reg r85:V, reg do_call:cls, reg x41:*, reg x42:V, reg c20:L, reg x44:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r86:V, reg p8:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r88:V, reg r89:V, reg current:*, reg current1:V, reg target:*, reg target1:V, reg list3:cls, reg r90:V, reg p9:p(V +), reg r92:V, reg any:cls, reg r93:V, reg res:*, reg res1:V, reg c21:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r94:V, reg i49:I, reg r95:V, reg canget2:*, reg canget3:V, reg x45:*, reg x46:V, reg c22:L, reg i51:I, reg x48:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i53:I, reg dx25:V, reg __11:cls, reg r96:V, reg c23:cls, reg r97:V, reg i54:I, reg r98:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r99:V, reg i57:I, reg r100:V, reg miss2:*, reg miss3:V, reg paste0:cls, reg x49:*, reg x50:V, reg c24:L, reg x52:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg __12:cls, reg r101:V, reg p10:p(V +), reg x53:*, reg x54:V, reg c25:L, reg x56:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg __13:cls, reg r103:V, reg p11:p(V +), reg r105:V, reg c26:cls, reg r106:V, reg i58:I, reg _in_1:cls, reg x57:*, reg x58:V, reg c27:L, reg x60:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg __14:cls, reg r108:V, reg p12:p(V +), reg pkgs8:*, reg pkgs9:V, reg p13:p(V +), reg r111:V, reg c28:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r112:V, reg i63:I, reg r113:V, reg canget4:*, reg canget5:V, reg x61:*, reg x62:V, reg c29:L, reg i65:I, reg x64:V, reg dr32:V, reg dc16:L, reg dx32:V, reg i67:I, reg dx33:V, reg __15:cls, reg r114:V, reg c30:cls, reg r115:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r116:V, reg i70:I, reg r117:V, reg miss4:*, reg miss5:V, reg x65:*, reg x66:V, reg c31:L, reg i72:I, reg x68:V, reg dr34:V, reg dc17:L, reg dx34:V, reg i74:I, reg dx35:V, reg __16:cls, reg r118:V, reg c32:cls, reg r119:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r120:V, reg r121:V, reg canget6:*, reg canget7:V, reg miss6:*, reg miss7:V, reg list4:cls, reg r122:V |
    mkenv;
    st x = x;
    st installed = installed;
    st available = available;
    r = clos inner2501545716;
    st `.split_dependencies` = r;
    x1 = ld x;
    check L44() else D0();
  D0():
    deopt 3 [x1];
  L44():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L45() else L46(x2);
  L0(dx1):
    st x = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L52() else L53();
  L45():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(x4):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L48() else L49();
  L1(x7, r2):
    r4 = `!`(r2);
    __ = ldf `[` in base;
    r5 = dyn __(x7, r4);
    goto L0(r5);
  L2(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L56() else L3();
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L48():
    x8 = ld x;
    check L50() else D1();
  L49():
    r1 = dyn base(<sym x>);
    goto L1(x4, r1);
  L52():
    x10 = ld x;
    check L54() else D3();
  L53():
    r6 = dyn base1(<sym x>);
    goto L2(r6);
  D1():
    deopt 7 [x4, x8];
  D3():
    deopt 16 [x10];
  L3():
    _split_dependencies = ldf `.split_dependencies`;
    check L66() else D10();
  L50():
    x9 = force? x8;
    checkMissing(x9);
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(x9);
    check L51() else D2();
  L54():
    x11 = force? x10;
    checkMissing(x11);
    length = ldf length in base;
    r8 = dyn length(x11);
    check L55() else D4();
  L56():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  D2():
    deopt 10 [x4, r3];
  D4():
    deopt 19 [r8];
  D10():
    deopt 35 [];
  L4(r11):
    popenv;
    return r11;
  L51():
    goto L1(x4, r3);
  L55():
    goto L2(r8);
  L57():
    character = ldf character;
    check L59() else D5();
  L58():
    r10 = dyn base2(<lang character()>, <lang character()>);
    goto L4(r10);
  L66():
    p = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    r18 = dyn _split_dependencies(p);
    check L67() else D11();
  D5():
    deopt 24 [];
  D11():
    deopt 37 [r18];
  L59():
    r12 = dyn character();
    check L60() else D6();
  L67():
    st xx = r18;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L68() else L69();
  D6():
    deopt 25 [r12];
  L6(r20):
    r22 = `!`(r20);
    c2 = `as.logical`(r22);
    if c2 then L72() else L7();
  L60():
    character1 = ldf character;
    check L61() else D7();
  L68():
    xx = ld xx;
    check L70() else D12();
  L69():
    r19 = dyn base3(<sym xx>);
    goto L6(r19);
  D7():
    deopt 27 [];
  D12():
    deopt 41 [xx];
  L7():
    installed1 = ld installed;
    check L82() else D19();
  L61():
    r13 = dyn character1();
    check L62() else D8();
  L70():
    xx1 = force? xx;
    checkMissing(xx1);
    length1 = ldf length in base;
    r21 = dyn length1(xx1);
    check L71() else D13();
  L72():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L73() else L74();
  D8():
    deopt 28 [r13];
  D13():
    deopt 44 [r21];
  D19():
    deopt 59 [installed1];
  L8(r24):
    popenv;
    return r24;
  L62():
    list = ldf list in base;
    r14 = dyn list(r12, r13);
    check L63() else D9();
  L71():
    goto L6(r21);
  L73():
    character2 = ldf character;
    check L75() else D14();
  L74():
    r23 = dyn base4(<lang character()>, <lang character()>);
    goto L8(r23);
  L82():
    installed2 = force? installed1;
    checkMissing(installed2);
    c3 = `is.object`(installed2);
    if c3 then L83() else L84();
  D9():
    deopt 30 [r14];
  D14():
    deopt 49 [];
  L10(dx3):
    st pkgs = dx3;
    vapply = ldf vapply;
    check L86() else D20();
  L63():
    goto L4(r14);
  L75():
    r25 = dyn character2();
    check L76() else D15();
  L83():
    dr2 = tryDispatchBuiltin.1("[", installed2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L85() else L84();
  L84():
    __1 = ldf `[` in base;
    r30 = dyn __1(installed2, <missing>, "Package");
    goto L10(r30);
  D15():
    deopt 50 [r25];
  D20():
    deopt 67 [];
  L76():
    character3 = ldf character;
    check L77() else D16();
  L85():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L86():
    p1 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    p2 = prom<V +>{
      r32 = clos inner2501545716;
      return r32;
    };
    r34 = dyn vapply(p1, p2, NA_LGL);
    check L87() else D21();
  D16():
    deopt 52 [];
  D21():
    deopt 71 [r34];
  L77():
    r26 = dyn character3();
    check L78() else D17();
  L87():
    st have = r34;
    xx4 = ld xx;
    check L88() else D22();
  D17():
    deopt 53 [r26];
  D22():
    deopt 73 [xx4];
  L78():
    list1 = ldf list in base;
    r27 = dyn list1(r25, r26);
    check L79() else D18();
  L88():
    xx5 = force? xx4;
    checkMissing(xx5);
    c4 = `is.object`(xx5);
    if c4 then L89() else L90(xx5);
  D18():
    deopt 55 [r27];
  L11(dx5):
    st xx = dx5;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L93() else L94();
  L79():
    goto L8(r27);
  L89():
    dr4 = tryDispatchBuiltin.1("[", xx5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L91() else L90(dr4);
  L90(xx7):
    have = ld have;
    check L92() else D23();
  D23():
    deopt 75 [xx7, have];
  L12(r38):
    r40 = `!`(r38);
    c5 = `as.logical`(r40);
    if c5 then L97() else L13();
  L91():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L92():
    have1 = force? have;
    checkMissing(have1);
    r35 = `!`(have1);
    __2 = ldf `[` in base;
    r36 = dyn __2(xx7, r35);
    goto L11(r36);
  L93():
    xx8 = ld xx;
    check L95() else D24();
  L94():
    r37 = dyn base5(<sym xx>);
    goto L12(r37);
  D24():
    deopt 82 [xx8];
  L13():
    row_names = ldf `row.names`;
    check L107() else D31();
  L95():
    xx9 = force? xx8;
    checkMissing(xx9);
    length2 = ldf length in base;
    r39 = dyn length2(xx9);
    check L96() else D25();
  L97():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L98() else L99();
  D25():
    deopt 85 [r39];
  D31():
    deopt 101 [];
  L14(r42):
    popenv;
    return r42;
  L96():
    goto L12(r39);
  L98():
    character4 = ldf character;
    check L100() else D26();
  L99():
    r41 = dyn base6(<lang character()>, <lang character()>);
    goto L14(r41);
  L107():
    p3 = prom<V +>{
      available1 = ld available;
      available2 = force? available1;
      checkMissing(available2);
      return available2;
    };
    r49 = dyn row_names(p3);
    check L108() else D32();
  D26():
    deopt 90 [];
  D32():
    deopt 103 [r49];
  L100():
    r43 = dyn character4();
    check L101() else D27();
  L108():
    st pkgs = r49;
    character6 = ldf character;
    check L109() else D33();
  D27():
    deopt 91 [r43];
  D33():
    deopt 106 [];
  L101():
    character5 = ldf character;
    check L102() else D28();
  L109():
    r50 = dyn character6();
    check L110() else D34();
  D28():
    deopt 93 [];
  D34():
    deopt 107 [r50];
  L102():
    r44 = dyn character5();
    check L103() else D29();
  L110():
    st miss = r50;
    st canget = r50;
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L111() else L112();
  D29():
    deopt 94 [r44];
  L16(r52):
    s = toForSeq(r52);
    l = length(s);
    i = 0;
    goto L17(i);
  L103():
    list2 = ldf list in base;
    r45 = dyn list2(r43, r44);
    check L104() else D30();
  L111():
    xx10 = ld xx;
    check L113() else D35();
  L112():
    r51 = dyn base7(<sym xx>);
    goto L16(r51);
  D30():
    deopt 96 [r45];
  D35():
    deopt 111 [xx10];
  L17(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L114() else L42();
  L104():
    goto L14(r45);
  L113():
    xx11 = force? xx10;
    checkMissing(xx11);
    r53 = seq_along(xx11);
    goto L16(r53);
  L42():
    x14 = `[[`(s, i2, NULL, TRUE);
    st i = x14;
    xx12 = ld xx;
    check L115() else D36();
  L114():
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L200() else L201();
  D36():
    deopt 114 [i2, xx12];
  L43(r121):
    popenv;
    return r121;
  L115():
    xx13 = force? xx12;
    checkMissing(xx13);
    c7 = `is.object`(xx13);
    if c7 then L116() else L117(i2, xx13);
  L200():
    canget6 = ld canget;
    check L202() else D72();
  L201():
    r120 = dyn base17(<sym canget>, <sym miss>);
    goto L43(r120);
  D72():
    deopt 255 [canget6];
  L18(i8, dx7):
    st x = dx7;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L120() else L121();
  L116():
    dr6 = tryDispatchBuiltin.1("[[", xx13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L118() else L117(i2, dr6);
  L117(i6, xx15):
    i9 = ld i;
    check L119() else D37();
  L202():
    canget7 = force? canget6;
    checkMissing(canget7);
    miss6 = ld miss;
    check L203() else D73();
  D37():
    deopt 116 [i6, xx15, i9];
  D73():
    deopt 257 [miss6];
  L19(i13, r56):
    r58 = `==`(r56, 3);
    c8 = `as.logical`(r58);
    if c8 then L124() else L20();
  L118():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L18(i2, dx6);
  L119():
    i10 = force? i9;
    __3 = ldf `[[` in base;
    r54 = dyn __3(xx15, i10);
    goto L18(i6, r54);
  L120():
    x15 = ld x;
    check L122() else D38();
  L121():
    r55 = dyn base8(<sym x>);
    goto L19(i8, r55);
  L203():
    miss7 = force? miss6;
    checkMissing(miss7);
    list4 = ldf list in base;
    r122 = dyn list4(canget7, miss7);
    check L204() else D74();
  D38():
    deopt 122 [i8, x15];
  D74():
    deopt 260 [r122];
  L20():
    _in_1 = ldf `%in%`;
    check L180() else D64();
  L36(i58):
    goto L17(i58);
  L122():
    x16 = force? x15;
    checkMissing(x16);
    length3 = ldf length in base;
    r57 = dyn length3(x16);
    check L123() else D39();
  L124():
    _in_ = ldf `%in%`;
    check L125() else D40();
  L204():
    goto L43(r122);
  D39():
    deopt 125 [i8, r57];
  D40():
    deopt 129 [i13];
  D64():
    deopt 222 [i13];
  L123():
    goto L19(i8, r57);
  L125():
    p4 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c9 = `is.object`(x18);
      if c9 then L1() else L2(x18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x20):
      __4 = ldf `[[` in base;
      r59 = dyn __4(x20, 1);
      goto L0(r59);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p5 = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    r62 = dyn _in_(p4, p5);
    check L126() else D41();
  L180():
    p12 = prom<V +>{
      x57 = ld x;
      x58 = force? x57;
      checkMissing(x58);
      c27 = `is.object`(x58);
      if c27 then L1() else L2(x58);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("[[", x58);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(x60):
      __14 = ldf `[[` in base;
      r108 = dyn __14(x60, 1);
      goto L0(r108);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    p13 = prom<V +>{
      pkgs8 = ld pkgs;
      pkgs9 = force? pkgs8;
      checkMissing(pkgs9);
      return pkgs9;
    };
    r111 = dyn _in_1(p12, p13);
    check L181() else D65();
  D41():
    deopt 132 [i13, r62];
  D65():
    deopt 225 [i13, r111];
  L126():
    r63 = `!`(r62);
    c10 = `as.logical`(r63);
    if c10 then L127() else L21();
  L181():
    c28 = `as.logical`(r111);
    if c28 then L182() else L37();
  L21():
    x25 = ld x;
    check L138() else D45();
  L37():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L192() else L193();
  L127():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L128() else L129();
  L182():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L183() else L184();
  D45():
    deopt 150 [i13, x25];
  L22(i20, r65):
    st miss = r65;
    goto L17(i20);
  L38(i63, r113):
    st canget = r113;
    goto L36(i63);
  L40(i70, r117):
    st miss = r117;
    goto L36(i70);
  L128():
    miss = ld miss;
    check L130() else D42();
  L129():
    r64 = dyn base9(<sym miss>, <lang `[[`(x, 1)>);
    goto L22(i13, r64);
  L138():
    x26 = force? x25;
    checkMissing(x26);
    c13 = `is.object`(x26);
    if c13 then L139() else L140(i13, x26);
  L183():
    canget4 = ld canget;
    check L185() else D66();
  L184():
    r112 = dyn base15(<sym canget>, <lang `[[`(x, 1)>);
    goto L38(i13, r112);
  L192():
    miss4 = ld miss;
    check L194() else D69();
  L193():
    r116 = dyn base16(<sym miss>, <lang `[[`(x, 1)>);
    goto L40(i13, r116);
  D42():
    deopt 136 [i13, miss];
  D66():
    deopt 228 [i13, canget4];
  D69():
    deopt 240 [i13, miss4];
  L25(i30, dx13):
    r70 = `!=`(dx13, ">=");
    c14 = `as.logical`(r70);
    if c14 then L142() else L26();
  L130():
    miss1 = force? miss;
    checkMissing(miss1);
    x21 = ld x;
    check L131() else D43();
  L139():
    dr12 = tryDispatchBuiltin.1("[[", x26);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L141() else L140(i13, dr12);
  L140(i28, x28):
    __6 = ldf `[[` in base;
    r69 = dyn __6(x28, 2);
    goto L25(i28, r69);
  L185():
    canget5 = force? canget4;
    checkMissing(canget5);
    x61 = ld x;
    check L186() else D67();
  L194():
    miss5 = force? miss4;
    checkMissing(miss5);
    x65 = ld x;
    check L195() else D70();
  D43():
    deopt 138 [i13, x21];
  D67():
    deopt 230 [i13, x61];
  D70():
    deopt 242 [i13, x65];
  L26():
    as_package_version = ldf `as.package_version`;
    check L153() else D49();
  L131():
    x22 = force? x21;
    checkMissing(x22);
    c11 = `is.object`(x22);
    if c11 then L132() else L133(i13, x22);
  L141():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L25(i13, dx12);
  L142():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L143() else L144();
  L186():
    x62 = force? x61;
    checkMissing(x62);
    c29 = `is.object`(x62);
    if c29 then L187() else L188(i13, x62);
  L195():
    x66 = force? x65;
    checkMissing(x66);
    c31 = `is.object`(x66);
    if c31 then L196() else L197(i13, x66);
  D49():
    deopt 174 [i30];
  L23(i24, dx11):
    c12 = ldf c in base;
    r67 = dyn c12(miss1, dx11);
    check L135() else D44();
  L27(i35, r72):
    st canget = r72;
    goto L17(i35);
  L39(i67, dx33):
    c30 = ldf c in base;
    r115 = dyn c30(canget5, dx33);
    check L190() else D68();
  L41(i74, dx35):
    c32 = ldf c in base;
    r119 = dyn c32(miss5, dx35);
    check L199() else D71();
  L132():
    dr10 = tryDispatchBuiltin.1("[[", x22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L134() else L133(i13, dr10);
  L133(i22, x24):
    __5 = ldf `[[` in base;
    r66 = dyn __5(x24, 1);
    goto L23(i22, r66);
  L143():
    canget = ld canget;
    check L145() else D46();
  L144():
    r71 = dyn base10(<sym canget>, <lang `[[`(x, 1)>);
    goto L27(i30, r71);
  L153():
    p6 = prom<V +>{
      available3 = ld available;
      available4 = force? available3;
      checkMissing(available4);
      c17 = `is.object`(available4);
      if c17 then L2() else L3(available4);
    L0(dx17):
      return dx17;
    L2():
      dr16 = tryDispatchBuiltin.1("[", available4);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(available6):
      pkgs2 = ld pkgs;
      pkgs3 = force? pkgs2;
      checkMissing(pkgs3);
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      c18 = `is.object`(x34);
      if c18 then L5() else L6(available6, pkgs3, x34);
    L1(available10, pkgs7, dx19):
      r77 = `==`(pkgs7, dx19);
      __9 = ldf `[` in base;
      r78 = dyn __9(available10, r77, "Version");
      goto L0(r78);
    L4():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    L5():
      dr18 = tryDispatchBuiltin.1("[[", x34);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(available6, pkgs3, dr18);
    L6(available8, pkgs5, x36):
      __8 = ldf `[[` in base;
      r76 = dyn __8(x36, 1);
      goto L1(available8, pkgs5, r76);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L1(available6, pkgs3, dx18);
    };
    r80 = dyn as_package_version(p6);
    check L154() else D50();
  L187():
    dr32 = tryDispatchBuiltin.1("[[", x62);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L189() else L188(i13, dr32);
  L188(i65, x64):
    __15 = ldf `[[` in base;
    r114 = dyn __15(x64, 1);
    goto L39(i65, r114);
  L196():
    dr34 = tryDispatchBuiltin.1("[[", x66);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L198() else L197(i13, dr34);
  L197(i72, x68):
    __16 = ldf `[[` in base;
    r118 = dyn __16(x68, 1);
    goto L41(i72, r118);
  D44():
    deopt 144 [i24, r67];
  D46():
    deopt 159 [i30, canget];
  D50():
    deopt 176 [i30, r80];
  D68():
    deopt 236 [i67, r115];
  D71():
    deopt 248 [i74, r119];
  L134():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L23(i13, dx10);
  L135():
    goto L22(i24, r67);
  L145():
    canget1 = force? canget;
    checkMissing(canget1);
    x29 = ld x;
    check L146() else D47();
  L154():
    st current = r80;
    as_package_version1 = ldf `as.package_version`;
    check L155() else D51();
  L189():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L39(i13, dx32);
  L190():
    goto L38(i67, r115);
  L198():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L41(i13, dx34);
  L199():
    goto L40(i74, r119);
  D47():
    deopt 161 [i30, x29];
  D51():
    deopt 179 [i30];
  L146():
    x30 = force? x29;
    checkMissing(x30);
    c15 = `is.object`(x30);
    if c15 then L147() else L148(i30, x30);
  L155():
    p7 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      c19 = `is.object`(x38);
      if c19 then L1() else L2(x38);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[[", x38);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(x40):
      __10 = ldf `[[` in base;
      r81 = dyn __10(x40, 3);
      goto L0(r81);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r83 = dyn as_package_version1(p7);
    check L156() else D52();
  D52():
    deopt 181 [i30, r83];
  L28(i39, dx15):
    c16 = ldf c in base;
    r74 = dyn c16(canget1, dx15);
    check L150() else D48();
  L147():
    dr14 = tryDispatchBuiltin.1("[[", x30);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L149() else L148(i30, dr14);
  L148(i37, x32):
    __7 = ldf `[[` in base;
    r73 = dyn __7(x32, 1);
    goto L28(i37, r73);
  L156():
    st target = r83;
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L157() else L158();
  D48():
    deopt 167 [i39, r74];
  L30(i44, r85):
    st res = r85;
    res = ld res;
    check L162() else D56();
  L149():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L28(i30, dx14);
  L150():
    goto L27(i39, r74);
  L157():
    do_call = ldf `do.call`;
    check L159() else D53();
  L158():
    r84 = dyn base11(<lang do.call(`$`(x, op), list(current, target))>);
    goto L30(i30, r84);
  D53():
    deopt 186 [i30];
  D56():
    deopt 193 [i44, res];
  L159():
    p8 = prom<V +>{
      x41 = ld x;
      x42 = force? x41;
      checkMissing(x42);
      c20 = `is.object`(x42);
      if c20 then L1() else L2(x42);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("$", x42);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(x44):
      r86 = `$`(x44, <sym op>);
      goto L0(r86);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    p9 = prom<V +>{
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r89):
      return r89;
    L1():
      current = ld current;
      current1 = force? current;
      checkMissing(current1);
      target = ld target;
      target1 = force? target;
      checkMissing(target1);
      list3 = ldf list in base;
      r90 = dyn list3(current1, target1);
      goto L0(r90);
    L2():
      r88 = dyn base12(<sym current>, <sym target>);
      goto L0(r88);
    };
    r92 = dyn do_call(p8, p9);
    check L160() else D54();
  L162():
    res1 = force? res;
    checkMissing(res1);
    c21 = `as.logical`(res1);
    if c21 then L163() else L31();
  D54():
    deopt 189 [i30, r92];
  L31():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L173() else L174();
  L34(i54, r98):
    goto L36(i54);
  L160():
    any = ldf any in base;
    r93 = dyn any(r92);
    check L161() else D55();
  L163():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L164() else L165();
  D55():
    deopt 191 [i30, r93];
  L32(i49, r95):
    st canget = r95;
    goto L34(i49, r95);
  L35(i57, r100):
    st miss = r100;
    goto L34(i57, r100);
  L161():
    goto L30(i30, r93);
  L164():
    canget2 = ld canget;
    check L166() else D57();
  L165():
    r94 = dyn base13(<sym canget>, <lang `[[`(x, 1)>);
    goto L32(i44, r94);
  L173():
    miss2 = ld miss;
    check L175() else D60();
  L174():
    r99 = dyn base14(<sym miss>, <lang paste0(`[[`(x, 1), " (>= ", `[[`(x, 3), ")")>);
    goto L35(i44, r99);
  D57():
    deopt 197 [i44, canget2];
  D60():
    deopt 209 [i44, miss2];
  L166():
    canget3 = force? canget2;
    checkMissing(canget3);
    x45 = ld x;
    check L167() else D58();
  L175():
    miss3 = force? miss2;
    checkMissing(miss3);
    paste0 = ldf paste0;
    check L176() else D61();
  D58():
    deopt 199 [i44, x45];
  D61():
    deopt 212 [i44];
  L167():
    x46 = force? x45;
    checkMissing(x46);
    c22 = `is.object`(x46);
    if c22 then L168() else L169(i44, x46);
  L176():
    p10 = prom<V +>{
      x49 = ld x;
      x50 = force? x49;
      checkMissing(x50);
      c24 = `is.object`(x50);
      if c24 then L1() else L2(x50);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("[[", x50);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(x52):
      __12 = ldf `[[` in base;
      r101 = dyn __12(x52, 1);
      goto L0(r101);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    p11 = prom<V +>{
      x53 = ld x;
      x54 = force? x53;
      checkMissing(x54);
      c25 = `is.object`(x54);
      if c25 then L1() else L2(x54);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("[[", x54);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(x56):
      __13 = ldf `[[` in base;
      r103 = dyn __13(x56, 3);
      goto L0(r103);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r105 = dyn paste0(p10, " (>= ", p11, ")");
    check L177() else D62();
  D62():
    deopt 217 [i44, r105];
  L33(i53, dx25):
    c23 = ldf c in base;
    r97 = dyn c23(canget3, dx25);
    check L171() else D59();
  L168():
    dr24 = tryDispatchBuiltin.1("[[", x46);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L170() else L169(i44, dr24);
  L169(i51, x48):
    __11 = ldf `[[` in base;
    r96 = dyn __11(x48, 1);
    goto L33(i51, r96);
  L177():
    c26 = ldf c in base;
    r106 = dyn c26(miss3, r105);
    check L178() else D63();
  D59():
    deopt 205 [i53, r97];
  D63():
    deopt 219 [i44, r106];
  L170():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L33(i44, dx24);
  L171():
    goto L32(i53, r97);
  L178():
    goto L35(i44, r106);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg nzchar:cls, reg r5:V, reg any:cls, reg r6:V, reg r7:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg list:cls, reg r10:V, reg unlist:cls, reg lapply:cls, reg strsplit:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r14:V, reg p1:p(V +), reg _split2:*, reg _split3:V, reg p2:p(V +), reg r17:V, reg p3:p(V +), reg r19:V |
    mkenv;
    st x = x;
    r = clos inner2501545716;
    st `.split2` = r;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r2):
    r7 = `!`(r2);
    c = `as.logical`(r7);
    if c then L12() else L2();
  L5():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r1 = dyn base(<lang nzchar(x)>);
    goto L0(r1);
  L1(r4):
    any = ldf any in base;
    r6 = dyn any(r4);
    check L11() else D2();
  L2():
    unlist = ldf unlist;
    check L18() else D4();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r3 = dyn base1(<sym x>);
    goto L1(r3);
  L12():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  D0():
    deopt 7 [x1];
  D2():
    deopt 12 [r6];
  D4():
    deopt 22 [];
  L3(r9):
    popenv;
    return r9;
  L9():
    x2 = force? x1;
    checkMissing(x2);
    nzchar = ldf nzchar in base;
    r5 = dyn nzchar(x2);
    check L10() else D1();
  L11():
    goto L0(r6);
  L13():
    list = ldf list in base;
    r10 = dyn list();
    check L15() else D3();
  L14():
    r8 = dyn base2();
    goto L3(r8);
  L18():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        strsplit = ldf strsplit;
        p = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        r14 = dyn strsplit(p, ",");
        return r14;
      };
      p2 = prom<V +>{
        _split2 = ld `.split2`;
        _split3 = force? _split2;
        checkMissing(_split3);
        return _split3;
      };
      r17 = dyn lapply(p1, p2);
      return r17;
    };
    r19 = dyn unlist(p3, FALSE, FALSE);
    check L19() else D5();
  D1():
    deopt 10 [r5];
  D3():
    deopt 17 [r10];
  D5():
    deopt 26 [r19];
  L10():
    goto L1(r5);
  L15():
    goto L3(r10);
  L19():
    popenv;
    return r19;
  }
}