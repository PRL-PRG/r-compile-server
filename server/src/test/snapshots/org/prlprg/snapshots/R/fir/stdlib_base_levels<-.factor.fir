fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1411039386`;
    st `.factor` = r;
    st levels = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1411039386`(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg levels:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg value1:*, reg value2:V, reg is_list:cls, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg value3:*, reg value4:V, reg names:cls, reg r9:V, reg lapply:cls, reg value5:*, reg value6:V, reg p1:p(V +), reg length:*, reg length1:V, reg p2:p(V +), reg r12:V, reg rep_int:cls, reg r13:V, reg unlist:cls, reg value7:*, reg value8:V, reg p3:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg value9:*, reg value10:V, reg xlevs:*, reg xlevs1:V, reg match:cls, reg r18:V, reg nlevs:*, reg nlevs1:V, reg c1:L, reg nlevs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg m:*, reg m1:V, reg r19:V, reg __:cls, reg r20:V, reg l:*, reg c2:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg m2:*, reg m3:V, reg ___:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg xlevs2:*, reg xlevs3:V, reg length2:cls, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg r29:V, reg value11:*, reg value12:V, reg length3:cls, reg r30:V, reg r31:V, reg c3:L, reg stop:cls, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg value13:*, reg value14:V, reg as_character:cls, reg r36:V, reg nlevs4:*, reg nlevs5:V, reg c4:L, reg nlevs7:V, reg dr4:V, reg dc2:L, reg dx9:V, reg dx10:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg nlevs10:V, reg r38:V, reg nlevs11:*, reg nlevs12:V, reg is_na:cls, reg r39:V, reg r40:V, reg __1:cls, reg r41:V, reg unique:cls, reg nlevs13:*, reg nlevs14:V, reg p4:p(V +), reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg x3:*, reg x4:V, reg attributes:cls, reg r46:V, reg nlevs15:*, reg nlevs16:V, reg l3:*, reg c5:L, reg nlevs18:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx11:V, reg dx12:V, reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg xlevs4:*, reg xlevs5:V, reg nlevs21:*, reg nlevs22:V, reg match1:cls, reg r50:V, reg c6:L, reg r52:V, reg dr8:V, reg dc4:L, reg dx13:V, reg dx14:V, reg x5:*, reg x6:V, reg __2:cls, reg r53:V, reg at:*, reg at1:V, reg l6:*, reg attributes__:cls, reg r54:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st value = value;
    levels = ldf levels;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn levels(p);
    check L19() else D1();
  D1():
    deopt 3 [r1];
  L19():
    st xlevs = r1;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r3):
    c = `as.logical`(r3);
    if c then L24() else L1();
  L20():
    value1 = ld value;
    check L22() else D2();
  L21():
    r2 = dyn base(<sym value>);
    goto L0(r2);
  D2():
    deopt 7 [value1];
  L1():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L7():
    unique = ldf unique;
    check L75() else D28();
  L22():
    value2 = force? value1;
    checkMissing(value2);
    is_list = ldf `is.list` in base;
    r4 = dyn is_list(value2);
    check L23() else D3();
  L24():
    sym1 = ldf `rep.int`;
    base1 = ldf `rep.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  D3():
    deopt 10 [r4];
  D28():
    deopt 93 [];
  L2(r6):
    st nlevs = r6;
    unlist = ldf unlist;
    check L34() else D9();
  L8(r23):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L23():
    goto L0(r4);
  L25():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L26():
    r5 = dyn base1(<lang names(value)>, <lang lapply(value, length)>);
    goto L2(r5);
  L51():
    xlevs2 = ld xlevs;
    check L53() else D17();
  L52():
    r22 = dyn base4(<sym xlevs>);
    goto L8(r22);
  L75():
    p4 = prom<V +>{
      nlevs13 = ld nlevs;
      nlevs14 = force? nlevs13;
      checkMissing(nlevs14);
      return nlevs14;
    };
    r43 = dyn unique(p4);
    check L76() else D29();
  D9():
    deopt 28 [];
  D17():
    deopt 57 [xlevs2];
  D29():
    deopt 95 [r43];
  L3(r8):
    lapply = ldf lapply;
    check L31() else D6();
  L9(r28, r29):
    r31 = `>`(r28, r29);
    c3 = `as.logical`(r31);
    if c3 then L59() else L10();
  L27():
    value3 = ld value;
    check L29() else D4();
  L28():
    r7 = dyn base2(<sym value>);
    goto L3(r7);
  L34():
    p3 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    r15 = dyn unlist(p3);
    check L35() else D10();
  L53():
    xlevs3 = force? xlevs2;
    checkMissing(xlevs3);
    length2 = ldf length in base;
    r24 = dyn length2(xlevs3);
    check L54() else D18();
  L55():
    value11 = ld value;
    check L57() else D19();
  L56():
    r27 = dyn base5(<sym value>);
    goto L9(r23, r27);
  L76():
    st nlevs = r43;
    sym8 = ldf attributes;
    base8 = ldf attributes in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L77() else L78();
  D4():
    deopt 15 [value3];
  D6():
    deopt 20 [];
  D10():
    deopt 30 [r15];
  D18():
    deopt 60 [r24];
  D19():
    deopt 62 [r23, value11];
  L10():
    goto L11();
  L11():
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L63() else L64();
  L15(r45):
    st at = r45;
    nlevs15 = ld nlevs;
    check L81() else D32();
  L29():
    value4 = force? value3;
    checkMissing(value4);
    names = ldf names in base;
    r9 = dyn names(value4);
    check L30() else D5();
  L31():
    p1 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    p2 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    r12 = dyn lapply(p1, p2);
    check L32() else D7();
  L35():
    st value = r15;
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L54():
    goto L8(r24);
  L57():
    value12 = force? value11;
    checkMissing(value12);
    length3 = ldf length in base;
    r30 = dyn length3(value12);
    check L58() else D20();
  L59():
    stop = ldf stop;
    check L60() else D21();
  L77():
    x3 = ld x;
    check L79() else D30();
  L78():
    r44 = dyn base8(<sym x>);
    goto L15(r44);
  D5():
    deopt 18 [r9];
  D7():
    deopt 23 [r12];
  D20():
    deopt 65 [r23, r30];
  D21():
    deopt 68 [];
  D30():
    deopt 99 [x3];
  D32():
    deopt 104 [nlevs15];
  L4(r17):
    st m = r17;
    nlevs = ld nlevs;
    check L41() else D14();
  L12(r35):
    st xlevs = r35;
    st nlevs = r35;
    nlevs4 = ld nlevs;
    check L67() else D25();
  L30():
    goto L3(r9);
  L32():
    rep_int = ldf `rep.int` in base;
    r13 = dyn rep_int(r8, r12);
    check L33() else D8();
  L36():
    value9 = ld value;
    check L38() else D11();
  L37():
    r16 = dyn base3[, , nomatch](<sym value>, <sym xlevs>, 0);
    goto L4(r16);
  L58():
    goto L9(r23, r30);
  L60():
    r32 = dyn stop("number of levels differs");
    check L61() else D22();
  L63():
    value13 = ld value;
    check L65() else D23();
  L64():
    r34 = dyn base6(<sym value>);
    goto L12(r34);
  L79():
    x4 = force? x3;
    checkMissing(x4);
    attributes = ldf attributes in base;
    r46 = dyn attributes(x4);
    check L80() else D31();
  L81():
    nlevs16 = force? nlevs15;
    checkMissing(nlevs16);
    l3 = ld at;
    c5 = `is.object`(l3);
    if c5 then L83() else L84(nlevs16, l3);
  D8():
    deopt 25 [r13];
  D11():
    deopt 34 [value9];
  D14():
    deopt 43 [nlevs];
  D22():
    deopt 70 [r32];
  D23():
    deopt 75 [value13];
  D25():
    deopt 81 [nlevs4];
  D31():
    deopt 102 [r46];
  L33():
    goto L2(r13);
  L38():
    value10 = force? value9;
    checkMissing(value10);
    xlevs = ld xlevs;
    check L39() else D12();
  L41():
    nlevs1 = force? nlevs;
    checkMissing(nlevs1);
    c1 = `is.object`(nlevs1);
    if c1 then L42() else L43(nlevs1);
  L61():
    goto L11();
  L65():
    value14 = force? value13;
    checkMissing(value14);
    as_character = ldf `as.character` in base;
    r36 = dyn as_character(value14);
    check L66() else D24();
  L67():
    nlevs5 = force? nlevs4;
    checkMissing(nlevs5);
    c4 = `is.object`(nlevs5);
    if c4 then L68() else L69(nlevs5);
  L80():
    goto L15(r46);
  L82(dx12):
    st at = dx12;
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L86() else L87();
  L83():
    dr6 = tryDispatchBuiltin.0("$<-", l3, nlevs16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L85() else L84(nlevs16, dr6);
  L84(nlevs18, l5):
    r47 = `$<-`(l5, <sym levels>, nlevs16);
    goto L82(r47);
  D12():
    deopt 36 [xlevs];
  D24():
    deopt 78 [r36];
  L5(dx1):
    l = ld xlevs;
    c2 = `is.object`(l);
    if c2 then L46() else L47(dx1, l);
  L13(dx10):
    st nlevs = dx10;
    goto L7();
  L16(r49):
    c6 = `is.object`(r49);
    if c6 then L91() else L92(r49);
  L39():
    xlevs1 = force? xlevs;
    checkMissing(xlevs1);
    match = ldf match in base;
    r18 = dyn match(value10, xlevs1, 0, NULL);
    check L40() else D13();
  L42():
    dr = tryDispatchBuiltin.1("[", nlevs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43(dr);
  L43(nlevs3):
    m = ld m;
    check L45() else D15();
  L66():
    goto L12(r36);
  L68():
    dr4 = tryDispatchBuiltin.1("[", nlevs5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L70() else L69(dr4);
  L69(nlevs7):
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  L85():
    dx11 = getTryDispatchBuiltinValue(dr6);
    goto L82(dx11);
  L86():
    xlevs4 = ld xlevs;
    check L88() else D33();
  L87():
    r48 = dyn base9(<sym xlevs>, <sym nlevs>);
    goto L16(r48);
  D13():
    deopt 41 [r18];
  D15():
    deopt 45 [nlevs3, m];
  D33():
    deopt 111 [xlevs4];
  L6(dx6, dx7):
    st xlevs = dx7;
    goto L7();
  L14(nlevs10, r38):
    r40 = `!`(r38);
    __1 = ldf `[` in base;
    r41 = dyn __1(nlevs10, r40);
    goto L13(r41);
  L17(dx14):
    st y = dx14;
    at = ld at;
    check L95() else D37();
  L40():
    goto L4(r18);
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L45():
    m1 = force? m;
    checkMissing(m1);
    r19 = `>`(m1, 0);
    __ = ldf `[` in base;
    r20 = dyn __(nlevs3, r19);
    goto L5(r20);
  L46():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(dx1, dr2);
  L47(dx3, l2):
    m2 = ld m;
    check L49() else D16();
  L70():
    dx9 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx9);
  L71():
    nlevs11 = ld nlevs;
    check L73() else D26();
  L72():
    r37 = dyn base7(<sym nlevs>);
    goto L14(nlevs7, r37);
  L88():
    xlevs5 = force? xlevs4;
    checkMissing(xlevs5);
    nlevs21 = ld nlevs;
    check L89() else D34();
  L91():
    dr8 = tryDispatchBuiltin.1("[", r49);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L93() else L92(dr8);
  L92(r52):
    x5 = ld x;
    check L94() else D36();
  D16():
    deopt 51 [dx3, l2, dx1, m2];
  D26():
    deopt 85 [nlevs7, nlevs11];
  D34():
    deopt 113 [nlevs21];
  D36():
    deopt 119 [r52, x5];
  D37():
    deopt 123 [at];
  L48():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx1, dx5);
  L49():
    m3 = force? m2;
    ___ = ldf `[<-` in base;
    r21 = dyn ___(l2, dx1, m3);
    goto L6(dx3, r21);
  L73():
    nlevs12 = force? nlevs11;
    checkMissing(nlevs12);
    is_na = ldf `is.na` in base;
    r39 = dyn is_na(nlevs12);
    check L74() else D27();
  L89():
    nlevs22 = force? nlevs21;
    checkMissing(nlevs22);
    match1 = ldf match in base;
    r50 = dyn match1(xlevs5, nlevs22, NA_INT, NULL);
    check L90() else D35();
  L93():
    dx13 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx13);
  L94():
    x6 = force? x5;
    __2 = ldf `[` in base;
    r53 = dyn __2(r52, x6);
    goto L17(r53);
  L95():
    at1 = force? at;
    checkMissing(at1);
    l6 = ld y;
    attributes__ = ldf `attributes<-`;
    check L96() else D38();
  D27():
    deopt 88 [nlevs7, r39];
  D35():
    deopt 118 [r50];
  D38():
    deopt 126 [at1, l6, at1];
  L74():
    goto L14(nlevs7, r39);
  L90():
    goto L16(r50);
  L96():
    r54 = dyn attributes__(l6, NULL, at1);
    check L97() else D39();
  D39():
    deopt 128 [at1, r54];
  L97():
    st y = r54;
    y = ld y;
    check L98() else D40();
  D40():
    deopt 130 [y];
  L98():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}