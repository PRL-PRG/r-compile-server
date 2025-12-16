fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-808232437`;
    st `.amatch_bounds` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-808232437`(x) {
  (reg x:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_list:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r6:V, reg r7:V, reg c1:L, reg c2:V, reg x5:*, reg x6:V, reg r8:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x7:*, reg x8:V, reg as_double:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg rep_int:cls, reg r18:V, reg c8:cls, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg c9:cls, reg r23:V, reg pmatch:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg x9:*, reg x10:V, reg names:cls, reg r26:V, reg p:p(V +), reg table:*, reg table1:V, reg p1:p(V +), reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg pos:*, reg pos1:V, reg anyNA:cls, reg r32:V, reg c10:L, reg warning:cls, reg r33:V, reg x11:*, reg x12:V, reg c11:L, reg x14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg x17:V, reg r35:V, reg pos2:*, reg pos3:V, reg is_na:cls, reg r36:V, reg r37:V, reg __:cls, reg r38:V, reg table2:*, reg table3:V, reg c12:L, reg table5:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg pos4:*, reg pos5:V, reg __1:cls, reg r39:V, reg l:*, reg names__:cls, reg r40:V, reg unlist:cls, reg x18:*, reg x19:V, reg p2:p(V +), reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg x20:*, reg x21:V, reg is_numeric1:cls, reg r47:V, reg all:cls, reg r48:V, reg r49:V, reg c13:L, reg c14:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r50:V, reg c18:L, reg r51:V, reg x22:*, reg x23:V, reg r52:V, reg any:cls, reg r53:V, reg c19:L, reg c20:V, reg c22:L, reg stop1:cls, reg r54:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r56:V, reg r57:V, reg x24:*, reg x25:V, reg c23:L, reg x27:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r58:V, reg is_na1:cls, reg r59:V, reg r60:V, reg c24:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r61:V, reg r62:V, reg rep_int1:cls, reg r63:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r65:V, reg r66:V, reg x28:*, reg x29:V, reg c25:L, reg x31:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r67:V, reg is_na2:cls, reg r68:V, reg c26:L, reg l1:*, reg c27:L, reg r70:R, reg l3:*, reg dr8:V, reg dc4:L, reg dx9:V, reg r72:R, reg dx10:V, reg ___:cls, reg r73:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r75:V, reg r76:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r77:V, reg r78:V, reg x32:*, reg x33:V, reg c28:L, reg x35:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __4:cls, reg r79:V, reg rep_int2:cls, reg r80:V, reg c29:cls, reg r81:V, reg table6:*, reg table7:V, reg l4:*, reg names__1:cls, reg r82:V, reg x36:*, reg x37:V, reg l5:*, reg c30:L, reg x39:V, reg l7:*, reg dr12:V, reg dc6:L, reg dx13:V, reg x41:V, reg dx14:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r83:V, reg x46:V, reg l10:*, reg x47:V, reg r84:V, reg x48:*, reg x49:V, reg names1:cls, reg r85:V, reg ___1:cls, reg r86:V, reg bounds:*, reg bounds1:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(0.1) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L43() else L2();
  L39():
    x1 = ld x;
    check L41() else D0();
  L40():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L10():
    bounds = ld bounds;
    check L158() else D48();
  L41():
    x2 = force? x1;
    checkMissing(x2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(x2);
    check L42() else D1();
  L43():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  D1():
    deopt 5 [r2];
  D48():
    deopt 191 [bounds];
  L3(r5):
    r7 = `!`(r5);
    c1 = `as.logical`(r7);
    if c1 then L4(c1) else L48();
  L11(r22):
    st table = r22;
    pmatch = ldf pmatch;
    check L69() else D12();
  L42():
    goto L1(r2);
  L44():
    x3 = ld x;
    check L46() else D2();
  L45():
    r4 = dyn base1(<sym x>);
    goto L3(r4);
  L66():
    c9 = ldf c in base;
    r23 = dyn c9("cost", "insertions", "deletions", "substitutions", "all");
    check L68() else D11();
  L67():
    r21 = dyn base5("cost", "insertions", "deletions", "substitutions", "all");
    goto L11(r21);
  L158():
    bounds1 = force? bounds;
    checkMissing(bounds1);
    popenv;
    return bounds1;
  D2():
    deopt 9 [x3];
  D11():
    deopt 50 [r23];
  D12():
    deopt 53 [];
  L4(c2):
    c7 = `as.logical`(c2);
    if c7 then L51() else L5();
  L46():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r6 = dyn is_numeric(x4);
    check L47() else D3();
  L48():
    x5 = ld x;
    check L49() else D4();
  L68():
    goto L11(r23);
  L69():
    p = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      names = ldf names in base;
      r26 = dyn names(x10);
      goto L0(r26);
    L2():
      r24 = dyn base6(<sym x>);
      goto L0(r24);
    };
    p1 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    r29 = dyn pmatch(p, p1);
    check L70() else D13();
  D3():
    deopt 12 [r6];
  D4():
    deopt 14 [c1, x5];
  D13():
    deopt 56 [r29];
  L5():
    goto L6();
  L6():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  L47():
    goto L3(r6);
  L49():
    x6 = force? x5;
    checkMissing(x6);
    r8 = `<`(x6, 0.0);
    c4 = `as.logical`(r8);
    c5 = `||`(c1, c4);
    goto L4(c5);
  L51():
    stop = ldf stop;
    check L52() else D5();
  L70():
    st pos = r29;
    sym7 = ldf anyNA;
    base7 = ldf anyNA in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  D5():
    deopt 20 [];
  L7(r12):
    st bounds = r12;
    goto L10();
  L12(r31):
    c10 = `as.logical`(r31);
    if c10 then L75() else L13();
  L52():
    r9 = dyn stop("match distance components must be non-negative");
    check L53() else D6();
  L55():
    sym3 = ldf `as.double`;
    base3 = ldf `as.double` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L56():
    r11 = dyn base2(<lang as.double(x)>, <lang rep.int(NA_REAL, 4)>);
    goto L7(r11);
  L71():
    pos = ld pos;
    check L73() else D14();
  L72():
    r30 = dyn base7(<sym pos>);
    goto L12(r30);
  D6():
    deopt 22 [r9];
  D14():
    deopt 60 [pos];
  L8(r14):
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L13():
    goto L16();
  L16():
    table2 = ld table;
    check L87() else D21();
  L53():
    goto L6();
  L57():
    x7 = ld x;
    check L59() else D7();
  L58():
    r13 = dyn base3(<sym x>);
    goto L8(r13);
  L73():
    pos1 = force? pos;
    checkMissing(pos1);
    anyNA = ldf anyNA in base;
    r32 = dyn anyNA(pos1);
    check L74() else D15();
  L75():
    warning = ldf warning;
    check L76() else D16();
  D7():
    deopt 29 [x7];
  D15():
    deopt 63 [r32];
  D16():
    deopt 65 [];
  D21():
    deopt 81 [table2];
  L9(r17):
    c8 = ldf c in base;
    r19 = dyn c8(r14, r17);
    check L64() else D10();
  L59():
    x8 = force? x7;
    checkMissing(x8);
    as_double = ldf `as.double` in base;
    r15 = dyn as_double(x8);
    check L60() else D8();
  L61():
    rep_int = ldf `rep.int` in base;
    r18 = dyn rep_int(NA_REAL, 4);
    check L63() else D9();
  L62():
    r16 = dyn base4(NA_REAL, 4);
    goto L9(r16);
  L74():
    goto L12(r32);
  L76():
    r33 = dyn warning("unknown match distance components ignored");
    check L77() else D17();
  L87():
    table3 = force? table2;
    checkMissing(table3);
    c12 = `is.object`(table3);
    if c12 then L88() else L89(table3);
  D8():
    deopt 32 [r15];
  D9():
    deopt 38 [r18];
  D10():
    deopt 40 [r19];
  D17():
    deopt 67 [r33];
  L17(dx4):
    l = ld x;
    names__ = ldf `names<-`;
    check L92() else D23();
  L60():
    goto L8(r15);
  L63():
    goto L9(r18);
  L64():
    goto L7(r19);
  L77():
    x11 = ld x;
    check L78() else D18();
  L88():
    dr2 = tryDispatchBuiltin.1("[", table3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L90() else L89(dr2);
  L89(table5):
    pos4 = ld pos;
    check L91() else D22();
  D18():
    deopt 68 [x11];
  D22():
    deopt 83 [table5, pos4];
  D23():
    deopt 87 [dx4, l, dx4];
  L78():
    x12 = force? x11;
    checkMissing(x12);
    c11 = `is.object`(x12);
    if c11 then L79() else L80(x12);
  L90():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx3);
  L91():
    pos5 = force? pos4;
    __1 = ldf `[` in base;
    r39 = dyn __1(table5, pos5);
    goto L17(r39);
  L92():
    r40 = dyn names__(l, NULL, dx4);
    check L93() else D24();
  D24():
    deopt 89 [dx4, r40];
  L14(dx1):
    st x = dx1;
    goto L16();
  L79():
    dr = tryDispatchBuiltin.1("[", x12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L81() else L80(dr);
  L80(x14):
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L82() else L83();
  L93():
    st x = r40;
    unlist = ldf unlist;
    check L94() else D25();
  D25():
    deopt 92 [];
  L15(x17, r35):
    r37 = `!`(r35);
    __ = ldf `[` in base;
    r38 = dyn __(x17, r37);
    goto L14(r38);
  L81():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L82():
    pos2 = ld pos;
    check L84() else D19();
  L83():
    r34 = dyn base8(<sym pos>);
    goto L15(x14, r34);
  L94():
    p2 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r42 = dyn unlist(p2);
    check L95() else D26();
  D19():
    deopt 72 [x14, pos2];
  D26():
    deopt 94 [r42];
  L84():
    pos3 = force? pos2;
    checkMissing(pos3);
    is_na = ldf `is.na` in base;
    r36 = dyn is_na(pos3);
    check L85() else D20();
  L95():
    st x = r42;
    sym9 = ldf all;
    base9 = ldf all in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  D20():
    deopt 75 [x14, r36];
  L18(r44):
    r49 = `!`(r44);
    c13 = `as.logical`(r49);
    if c13 then L20(c13) else L103();
  L85():
    goto L15(x14, r36);
  L96():
    sym10 = ldf `is.numeric`;
    base10 = ldf `is.numeric` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L98() else L99();
  L97():
    r43 = dyn base9(<lang is.numeric(x)>);
    goto L18(r43);
  L19(r46):
    all = ldf all in base;
    r48 = dyn all(r46);
    check L102() else D29();
  L20(c14):
    c22 = `as.logical`(c14);
    if c22 then L109() else L22();
  L98():
    x20 = ld x;
    check L100() else D27();
  L99():
    r45 = dyn base10(<sym x>);
    goto L19(r45);
  L103():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L104() else L105();
  D27():
    deopt 100 [x20];
  D29():
    deopt 105 [r48];
  L21(c18, r51):
    c19 = `as.logical`(r51);
    c20 = `||`(c18, c19);
    goto L20(c20);
  L22():
    goto L23();
  L23():
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L113() else L114();
  L100():
    x21 = force? x20;
    checkMissing(x21);
    is_numeric1 = ldf `is.numeric` in base;
    r47 = dyn is_numeric1(x21);
    check L101() else D28();
  L102():
    goto L18(r48);
  L104():
    x22 = ld x;
    check L106() else D30();
  L105():
    r50 = dyn base11(<lang `<`(x, 0.0)>);
    goto L21(c13, r50);
  L109():
    stop1 = ldf stop;
    check L110() else D32();
  D28():
    deopt 103 [r47];
  D30():
    deopt 109 [c13, x22];
  D32():
    deopt 117 [];
  L24(r57):
    r60 = `!`(r57);
    c24 = `as.logical`(r60);
    if c24 then L120() else L26();
  L101():
    goto L19(r47);
  L106():
    x23 = force? x22;
    checkMissing(x23);
    r52 = `<`(x23, 0.0);
    any = ldf any in base;
    r53 = dyn any(r52);
    check L107() else D31();
  L110():
    r54 = dyn stop1("match distance components must be non-negative");
    check L111() else D33();
  L113():
    x24 = ld x;
    check L115() else D34();
  L114():
    r56 = dyn base12(<lang `[`(x, "cost")>);
    goto L24(r56);
  D31():
    deopt 114 [c13, r53];
  D33():
    deopt 119 [r54];
  D34():
    deopt 124 [x24];
  L26():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L125() else L126();
  L28():
    table6 = ld table;
    check L147() else D42();
  L107():
    goto L21(c13, r53);
  L111():
    goto L23();
  L115():
    x25 = force? x24;
    checkMissing(x25);
    c23 = `is.object`(x25);
    if c23 then L116() else L117(x25);
  L120():
    sym13 = ldf `rep.int`;
    base13 = ldf `rep.int` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L121() else L122();
  D42():
    deopt 173 [table6];
  L25(dx6):
    is_na1 = ldf `is.na` in base;
    r59 = dyn is_na1(dx6);
    check L119() else D35();
  L27(r62):
    st bounds = r62;
    goto L28();
  L29(r66):
    c26 = `as.logical`(r66);
    if c26 then L132() else L31();
  L116():
    dr4 = tryDispatchBuiltin.1("[", x25);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L118() else L117(dr4);
  L117(x27):
    __2 = ldf `[` in base;
    r58 = dyn __2(x27, "cost");
    goto L25(r58);
  L121():
    rep_int1 = ldf `rep.int` in base;
    r63 = dyn rep_int1(NA_REAL, 5);
    check L123() else D36();
  L122():
    r61 = dyn base13(NA_REAL, 5);
    goto L27(r61);
  L125():
    x28 = ld x;
    check L127() else D37();
  L126():
    r65 = dyn base14(<lang `[`(x, "all")>);
    goto L29(r65);
  L147():
    table7 = force? table6;
    checkMissing(table7);
    l4 = ld bounds;
    names__1 = ldf `names<-`;
    check L148() else D43();
  D35():
    deopt 130 [r59];
  D36():
    deopt 137 [r63];
  D37():
    deopt 141 [x28];
  D43():
    deopt 176 [table7, l4, table7];
  L31():
    goto L33();
  L33():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L137() else L138();
  L118():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L25(dx5);
  L119():
    goto L24(r59);
  L123():
    goto L27(r63);
  L127():
    x29 = force? x28;
    checkMissing(x29);
    c25 = `is.object`(x29);
    if c25 then L128() else L129(x29);
  L132():
    l1 = ld x;
    c27 = `is.object`(l1);
    if c27 then L133() else L134(0.1, l1);
  L148():
    r82 = dyn names__1(l4, NULL, table7);
    check L149() else D44();
  D44():
    deopt 178 [table7, r82];
  L30(dx8):
    is_na2 = ldf `is.na` in base;
    r68 = dyn is_na2(dx8);
    check L131() else D38();
  L32(r72, dx10):
    st x = dx10;
    goto L33();
  L34(r76):
    st bounds = r76;
    goto L28();
  L128():
    dr6 = tryDispatchBuiltin.1("[", x29);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L130() else L129(dr6);
  L129(x31):
    __3 = ldf `[` in base;
    r67 = dyn __3(x31, "all");
    goto L30(r67);
  L133():
    dr8 = tryDispatchBuiltin.0("[<-", l1, 0.1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L135() else L134(0.1, dr8);
  L134(r70, l3):
    ___ = ldf `[<-` in base;
    r73 = dyn ___(l3, 0.1, "all");
    goto L32(r70, r73);
  L137():
    sym16 = ldf `rep.int`;
    base16 = ldf `rep.int` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L139() else L140();
  L138():
    r75 = dyn base15(NA_REAL, <lang rep.int(`[`(x, "all"), 4)>);
    goto L34(r75);
  L149():
    st bounds = r82;
    x36 = ld x;
    check L150() else D45();
  D38():
    deopt 147 [r68];
  D45():
    deopt 180 [x36];
  L35(r78):
    c29 = ldf c in base;
    r81 = dyn c29(NA_REAL, r78);
    check L146() else D41();
  L130():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L30(dx7);
  L131():
    goto L29(r68);
  L135():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L32(0.1, dx9);
  L139():
    x32 = ld x;
    check L141() else D39();
  L140():
    r77 = dyn base16(<lang `[`(x, "all")>, 4);
    goto L35(r77);
  L150():
    x37 = force? x36;
    checkMissing(x37);
    l5 = ld bounds;
    c30 = `is.object`(l5);
    if c30 then L151() else L152(x37, l5);
  D39():
    deopt 162 [x32];
  D41():
    deopt 171 [r81];
  L37(x41, dx14):
    st bounds = dx14;
    goto L10();
  L141():
    x33 = force? x32;
    checkMissing(x33);
    c28 = `is.object`(x33);
    if c28 then L142() else L143(x33);
  L146():
    goto L34(r81);
  L151():
    dr12 = tryDispatchBuiltin.0("[<-", l5, x37);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L153() else L152(x37, dr12);
  L152(x39, l7):
    sym17 = ldf names;
    base17 = ldf names in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L154() else L155();
  L36(dx12):
    rep_int2 = ldf `rep.int` in base;
    r80 = dyn rep_int2(dx12, 4);
    check L145() else D40();
  L38(x46, l10, x47, r84):
    ___1 = ldf `[<-` in base;
    r86 = dyn ___1(l10, x47, r84);
    goto L37(x46, r86);
  L142():
    dr10 = tryDispatchBuiltin.1("[", x33);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L144() else L143(dr10);
  L143(x35):
    __4 = ldf `[` in base;
    r79 = dyn __4(x35, "all");
    goto L36(r79);
  L153():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L37(x37, dx13);
  L154():
    x48 = ld x;
    check L156() else D46();
  L155():
    r83 = dyn base17(<sym x>);
    goto L38(x39, l7, x37, r83);
  D40():
    deopt 169 [r80];
  D46():
    deopt 185 [x39, l7, x37, x48];
  L144():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L36(dx11);
  L145():
    goto L35(r80);
  L156():
    x49 = force? x48;
    checkMissing(x49);
    names1 = ldf names in base;
    r85 = dyn names1(x49);
    check L157() else D47();
  D47():
    deopt 188 [x39, l7, x37, r85];
  L157():
    goto L38(x39, l7, x37, r85);
  }
}