fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1252789794;
    st `print.summaryDefault` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1252789794(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg x1:*, reg x2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r8:V, reg c:L, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c5:L, reg r10:V, reg x5:*, reg x6:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg x7:*, reg x8:V, reg is_finite:cls, reg r13:V, reg zapsmall:cls, reg x9:*, reg x10:V, reg c11:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg finite:*, reg finite1:V, reg __:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg l:*, reg c12:L, reg r18:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r20:V, reg dx3:V, reg finite2:*, reg finite3:V, reg ___:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg x13:*, reg x14:V, reg class:cls, reg r25:V, reg c13:L, reg r27:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r28:V, reg l3:*, reg class__:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg xx:*, reg xx1:V, reg names:cls, reg r34:V, reg match:cls, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg x15:*, reg x16:V, reg inherits:cls, reg r38:V, reg c14:L, reg c15:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg c19:L, reg r40:V, reg x17:*, reg x18:V, reg inherits1:cls, reg r41:V, reg c20:L, reg c21:V, reg c23:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r44:V, reg r45:V, reg x19:*, reg x20:V, reg attr:cls, reg r46:V, reg length:cls, reg r47:V, reg c24:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r48:V, reg r49:V, reg format:cls, reg xx2:*, reg xx3:V, reg p2:p(V +), reg digits1:*, reg digits2:V, reg p3:p(V +), reg r52:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r53:V, reg r54:V, reg a:*, reg a1:V, reg as_character:cls, reg r55:V, reg c25:cls, reg r56:V, reg r57:V, reg format1:cls, reg xx4:*, reg xx5:V, reg p4:p(V +), reg digits3:*, reg digits4:V, reg p5:p(V +), reg r60:V, reg print:cls, reg xx6:*, reg xx7:V, reg p6:p(V +), reg digits5:*, reg digits6:V, reg p7:p(V +), reg ddd1:dots?, reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg x21:*, reg x22:V, reg invisible:cls, reg r66:V, reg m:*, reg m1:V, reg c26:L, reg c28:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r69:V, reg c31:L, reg r70:V, reg x23:*, reg x24:V, reg c32:L, reg r71:V, reg c33:L, reg c34:V, reg c36:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r72:V, reg r73:V, reg format2:cls, reg xx8:*, reg xx9:V, reg c37:L, reg xx11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg m2:*, reg m3:V, reg r74:V, reg __2:cls, reg r75:V, reg p8:p(V +), reg digits7:*, reg digits8:V, reg p9:p(V +), reg r78:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r79:V, reg r80:V, reg xx12:*, reg xx13:V, reg c38:L, reg xx15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg m4:*, reg m5:V, reg __3:cls, reg r81:V, reg as_character1:cls, reg r82:V, reg c39:cls, reg r83:V, reg print_table:cls, reg xx16:*, reg xx17:V, reg p10:p(V +), reg digits9:*, reg digits10:V, reg p11:p(V +), reg ddd2:dots?, reg r86:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r87:V, reg r88:V, reg x25:*, reg x26:V, reg invisible1:cls, reg r89:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L32() else D0();
  D0():
    deopt 0 [x1];
  L32():
    x2 = force? x1;
    checkMissing(x2);
    st xx = x2;
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L2(r7):
    c = `as.logical`(r7);
    if c then L3(c) else L37();
  L33():
    x3 = ld x;
    check L35() else D1();
  L34():
    r6 = dyn base1(<sym x>);
    goto L2(r6);
  D1():
    deopt 5 [x3];
  L3(c1):
    c10 = `as.logical`(c1);
    if c10 then L42() else L5();
  L35():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r8 = dyn is_numeric(x4);
    check L36() else D2();
  L37():
    sym2 = ldf `is.complex`;
    base2 = ldf `is.complex` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  D2():
    deopt 8 [r8];
  L4(c5, r10):
    c7 = `as.logical`(r10);
    c8 = `||`(c5, c7);
    goto L3(c8);
  L5():
    goto L8();
  L8():
    sym4 = ldf class;
    base4 = ldf class in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L36():
    goto L2(r8);
  L38():
    x5 = ld x;
    check L40() else D3();
  L39():
    r9 = dyn base2(<sym x>);
    goto L4(c, r9);
  L42():
    sym3 = ldf `is.finite`;
    base3 = ldf `is.finite` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  D3():
    deopt 10 [c, x5];
  L6(r12):
    st finite = r12;
    zapsmall = ldf zapsmall;
    check L47() else D6();
  L9(r24):
    c13 = `is.object`(r24);
    if c13 then L58() else L59(r24);
  L40():
    x6 = force? x5;
    checkMissing(x6);
    c6 = `is.complex`(x6);
    goto L4(c, c6);
  L43():
    x7 = ld x;
    check L45() else D4();
  L44():
    r11 = dyn base3(<sym x>);
    goto L6(r11);
  L54():
    x13 = ld x;
    check L56() else D9();
  L55():
    r23 = dyn base4(<sym x>);
    goto L9(r23);
  D4():
    deopt 16 [x7];
  D6():
    deopt 22 [];
  D9():
    deopt 34 [x13];
  L10(dx5):
    l3 = ld xx;
    class__ = ldf `class<-`;
    check L61() else D11();
  L45():
    x8 = force? x7;
    checkMissing(x8);
    is_finite = ldf `is.finite` in base;
    r13 = dyn is_finite(x8);
    check L46() else D5();
  L47():
    p1 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c11 = `is.object`(x10);
      if c11 then L1() else L2(x10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x12):
      finite = ld finite;
      finite1 = force? finite;
      __ = ldf `[` in base;
      r14 = dyn __(x12, finite1);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r16 = dyn zapsmall(p1);
    check L48() else D7();
  L56():
    x14 = force? x13;
    checkMissing(x14);
    class = ldf class in base;
    r25 = dyn class(x14);
    check L57() else D10();
  L58():
    dr4 = tryDispatchBuiltin.1("[", r24);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L60() else L59(dr4);
  L59(r27):
    __1 = ldf `[` in base;
    r28 = dyn __1(r27, -1.0);
    goto L10(r28);
  D5():
    deopt 19 [r13];
  D7():
    deopt 24 [r16];
  D10():
    deopt 37 [r25];
  D11():
    deopt 42 [dx5, l3, dx5];
  L46():
    goto L6(r13);
  L48():
    l = ld xx;
    c12 = `is.object`(l);
    if c12 then L49() else L50(r16, l);
  L57():
    goto L9(r25);
  L60():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L61():
    r29 = dyn class__(l3, NULL, dx5);
    check L62() else D12();
  D12():
    deopt 44 [dx5, r29];
  L7(r20, dx3):
    st xx = dx3;
    goto L8();
  L49():
    dr2 = tryDispatchBuiltin.0("[<-", l, r16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(r16, dr2);
  L50(r18, l2):
    finite2 = ld finite;
    check L52() else D8();
  L62():
    st xx = r29;
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  D8():
    deopt 26 [r18, l2, r16, finite2];
  L11(r31):
    st m = r31;
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L70() else L71();
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(r16, dx2);
  L52():
    finite3 = force? finite2;
    ___ = ldf `[<-` in base;
    r21 = dyn ___(l2, r16, finite3);
    goto L7(r18, r21);
  L63():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L64():
    r30 = dyn base5("NA's", <lang names(xx)>, 0.0);
    goto L11(r30);
  L12(r33):
    match = ldf match in base;
    r35 = dyn match("NA's", r33, 0.0, NULL);
    check L69() else D15();
  L13(r37):
    c14 = `as.logical`(r37);
    if c14 then L14(c14) else L74();
  L65():
    xx = ld xx;
    check L67() else D13();
  L66():
    r32 = dyn base6(<sym xx>);
    goto L12(r32);
  L70():
    x15 = ld x;
    check L72() else D16();
  L71():
    r36 = dyn base7(<sym x>, "Date");
    goto L13(r36);
  D13():
    deopt 51 [xx];
  D15():
    deopt 58 [r35];
  D16():
    deopt 62 [x15];
  L14(c15):
    c23 = `as.logical`(c15);
    if c23 then L80() else L16();
  L67():
    xx1 = force? xx;
    checkMissing(xx1);
    names = ldf names in base;
    r34 = dyn names(xx1);
    check L68() else D14();
  L69():
    goto L11(r35);
  L72():
    x16 = force? x15;
    checkMissing(x16);
    inherits = ldf inherits in base;
    r38 = dyn inherits(x16, "Date", FALSE);
    check L73() else D17();
  L74():
    sym8 = ldf inherits;
    base8 = ldf inherits in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L75() else L76();
  D14():
    deopt 54 [r34];
  D17():
    deopt 67 [r38];
  L15(c19, r40):
    c20 = `as.logical`(r40);
    c21 = `||`(c19, c20);
    goto L14(c21);
  L16():
    m = ld m;
    check L109() else D34();
  L68():
    goto L12(r34);
  L73():
    goto L13(r38);
  L75():
    x17 = ld x;
    check L77() else D18();
  L76():
    r39 = dyn base8(<sym x>, "POSIXct");
    goto L15(c14, r39);
  L80():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L81() else L82();
  D18():
    deopt 70 [c14, x17];
  D34():
    deopt 127 [m];
  L17(r43):
    c24 = `as.logical`(r43);
    if c24 then L88() else L19();
  L77():
    x18 = force? x17;
    checkMissing(x18);
    inherits1 = ldf inherits in base;
    r41 = dyn inherits1(x18, "POSIXct", FALSE);
    check L78() else D19();
  L81():
    sym10 = ldf attr;
    base10 = ldf attr in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L83() else L84();
  L82():
    r42 = dyn base9(<lang `<-`(a, attr(x, "NAs"))>);
    goto L17(r42);
  L109():
    m1 = force? m;
    checkMissing(m1);
    c26 = `as.logical`(m1);
    if c26 then L110() else L25(c26);
  D19():
    deopt 75 [c14, r41];
  L18(r45):
    st a = r45;
    length = ldf length in base;
    r47 = dyn length(r45);
    check L87() else D22();
  L19():
    format1 = ldf format;
    check L99() else D28();
  L22(r57):
    st xx = r57;
    print = ldf print;
    check L101() else D30();
  L25(c28):
    c36 = `as.logical`(c28);
    if c36 then L115() else L27();
  L78():
    goto L15(c14, r41);
  L83():
    x19 = ld x;
    check L85() else D20();
  L84():
    r44 = dyn base10(<sym x>, "NAs");
    goto L18(r44);
  L88():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L89() else L90();
  L110():
    sym14 = ldf `is.character`;
    base14 = ldf `is.character` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L111() else L112();
  D20():
    deopt 81 [x19];
  D22():
    deopt 88 [r47];
  D28():
    deopt 107 [];
  D30():
    deopt 114 [];
  L20(r49):
    goto L22(r49);
  L24():
    print_table = ldf `print.table`;
    check L130() else D42();
  L26(c31, r70):
    r71 = `!`(r70);
    c33 = `as.logical`(r71);
    c34 = `&&`(c31, c33);
    goto L25(c34);
  L27():
    goto L24();
  L85():
    x20 = force? x19;
    checkMissing(x20);
    attr = ldf attr in base;
    r46 = dyn attr(x20, "NAs");
    check L86() else D21();
  L87():
    goto L17(r47);
  L89():
    format = ldf format;
    check L91() else D23();
  L90():
    r48 = dyn base11[, `NA's`](<lang format(xx, digits=digits)>, <lang as.character(a)>);
    goto L20(r48);
  L99():
    p4 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      return xx5;
    };
    p5 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    r60 = dyn format1[, digits](p4, p5);
    check L100() else D29();
  L101():
    p6 = prom<V +>{
      xx6 = ld xx;
      xx7 = force? xx6;
      checkMissing(xx7);
      return xx7;
    };
    p7 = prom<V +>{
      digits5 = ld digits;
      digits6 = force? digits5;
      checkMissing(digits6);
      return digits6;
    };
    ddd1 = ld `...`;
    r63 = dyn print[, digits, `...`](p6, p7, ddd1);
    check L102() else D31();
  L111():
    x23 = ld x;
    check L113() else D35();
  L112():
    r69 = dyn base14(<sym x>);
    goto L26(c26, r69);
  L115():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L116() else L117();
  D21():
    deopt 85 [r46];
  D23():
    deopt 92 [];
  D29():
    deopt 111 [r60];
  D31():
    deopt 119 [r63];
  D35():
    deopt 130 [c26, x23];
  D42():
    deopt 159 [];
  L28(r73):
    st xx = r73;
    goto L24();
  L86():
    goto L18(r46);
  L91():
    p2 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    p3 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    r52 = dyn format[, digits](p2, p3);
    check L92() else D24();
  L100():
    goto L22(r60);
  L102():
    sym13 = ldf invisible;
    base13 = ldf invisible in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L103() else L104();
  L113():
    x24 = force? x23;
    checkMissing(x24);
    c32 = `is.character`(x24);
    goto L26(c26, c32);
  L116():
    format2 = ldf format;
    check L118() else D36();
  L117():
    r72 = dyn base15[, `NA's`](<lang format(`[`(xx, `-`(m)), digits=digits)>, <lang as.character(`[`(xx, m))>);
    goto L28(r72);
  L130():
    p10 = prom<V +>{
      xx16 = ld xx;
      xx17 = force? xx16;
      checkMissing(xx17);
      return xx17;
    };
    p11 = prom<V +>{
      digits9 = ld digits;
      digits10 = force? digits9;
      checkMissing(digits10);
      return digits10;
    };
    ddd2 = ld `...`;
    r86 = dyn print_table[, digits, `...`](p10, p11, ddd2);
    check L131() else D43();
  D24():
    deopt 96 [r52];
  D36():
    deopt 138 [];
  D43():
    deopt 164 [r86];
  L23(r65):
    popenv;
    return r65;
  L92():
    sym12 = ldf `as.character`;
    base12 = ldf `as.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L93() else L94();
  L103():
    x21 = ld x;
    check L105() else D32();
  L104():
    r64 = dyn base13(<sym x>);
    goto L23(r64);
  L118():
    p8 = prom<V +>{
      xx8 = ld xx;
      xx9 = force? xx8;
      checkMissing(xx9);
      c37 = `is.object`(xx9);
      if c37 then L1() else L2(xx9);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", xx9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(xx11):
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      r74 = `-`(<missing>, m3);
      __2 = ldf `[` in base;
      r75 = dyn __2(xx11, r74);
      goto L0(r75);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p9 = prom<V +>{
      digits7 = ld digits;
      digits8 = force? digits7;
      checkMissing(digits8);
      return digits8;
    };
    r78 = dyn format2[, digits](p8, p9);
    check L119() else D37();
  L131():
    sym17 = ldf invisible;
    base17 = ldf invisible in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L132() else L133();
  D32():
    deopt 122 [x21];
  D37():
    deopt 142 [r78];
  L21(r54):
    c25 = ldf c in base;
    r56 = dyn c25(r52, r54);
    check L97() else D27();
  L31(r88):
    popenv;
    return r88;
  L93():
    a = ld a;
    check L95() else D25();
  L94():
    r53 = dyn base12(<sym a>);
    goto L21(r53);
  L105():
    x22 = force? x21;
    checkMissing(x22);
    invisible = ldf invisible in base;
    r66 = dyn invisible(x22);
    check L106() else D33();
  L119():
    sym16 = ldf `as.character`;
    base16 = ldf `as.character` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L120() else L121();
  L132():
    x25 = ld x;
    check L134() else D44();
  L133():
    r87 = dyn base17(<sym x>);
    goto L31(r87);
  D25():
    deopt 99 [a];
  D27():
    deopt 105 [r56];
  D33():
    deopt 125 [r66];
  D44():
    deopt 167 [x25];
  L29(r80):
    c39 = ldf c in base;
    r83 = dyn c39(r78, r80);
    check L128() else D41();
  L95():
    a1 = force? a;
    checkMissing(a1);
    as_character = ldf `as.character` in base;
    r55 = dyn as_character(a1);
    check L96() else D26();
  L97():
    goto L20(r56);
  L106():
    goto L23(r66);
  L120():
    xx12 = ld xx;
    check L122() else D38();
  L121():
    r79 = dyn base16(<lang `[`(xx, m)>);
    goto L29(r79);
  L134():
    x26 = force? x25;
    checkMissing(x26);
    invisible1 = ldf invisible in base;
    r89 = dyn invisible1(x26);
    check L135() else D45();
  D26():
    deopt 102 [r55];
  D38():
    deopt 145 [xx12];
  D41():
    deopt 154 [r83];
  D45():
    deopt 170 [r89];
  L96():
    goto L21(r55);
  L122():
    xx13 = force? xx12;
    checkMissing(xx13);
    c38 = `is.object`(xx13);
    if c38 then L123() else L124(xx13);
  L128():
    goto L28(r83);
  L135():
    goto L31(r89);
  L30(dx9):
    as_character1 = ldf `as.character` in base;
    r82 = dyn as_character1(dx9);
    check L127() else D40();
  L123():
    dr8 = tryDispatchBuiltin.1("[", xx13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L125() else L124(dr8);
  L124(xx15):
    m4 = ld m;
    check L126() else D39();
  D39():
    deopt 147 [xx15, m4];
  D40():
    deopt 151 [r82];
  L125():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L30(dx8);
  L126():
    m5 = force? m4;
    __3 = ldf `[` in base;
    r81 = dyn __3(xx15, m5);
    goto L30(r81);
  L127():
    goto L29(r82);
  }
}