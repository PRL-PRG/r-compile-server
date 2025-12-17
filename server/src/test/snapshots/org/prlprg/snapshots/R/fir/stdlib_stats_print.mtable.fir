fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3005870801;
    st `print.mtable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3005870801(x, `...`, digits, quote, right) {
  (reg x:*, reg ddd:dots, reg digits:*, reg quote:*, reg right:*) -+> V { var x:*, var `...`:dots?, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, reg x1:*, reg x2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg attr:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg attributes:cls, reg r11:V, reg names:cls, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg c:cls, reg r15:V, reg match:cls, reg r16:V, reg a:*, reg a1:V, reg c1:L, reg a3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg a6:V, reg r18:V, reg a_ind:*, reg a_ind1:V, reg is_na:cls, reg r19:V, reg r20:V, reg __:cls, reg r21:V, reg l:*, reg attributes__:cls, reg r22:V, reg l1:*, reg class__:cls, reg r23:V, reg a7:*, reg a8:V, reg l2:*, reg attributes__1:cls, reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg x7:*, reg x8:V, reg length:cls, reg r27:V, reg r28:V, reg c2:L, reg c4:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg c7:L, reg r30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg c10:L, reg r32:V, reg x9:*, reg x10:V, reg names1:cls, reg r33:V, reg c11:V, reg c12:L, reg c13:V, reg c15:L, reg c17:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r34:V, reg c20:L, reg r35:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r36:V, reg c23:L, reg r37:V, reg x11:*, reg x12:V, reg dimnames:cls, reg r38:V, reg c24:V, reg c25:L, reg c26:V, reg c28:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r39:V, reg r40:V, reg rep:cls, reg r41:V, reg l3:*, reg names__:cls, reg r42:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r44:V, reg r45:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r46:V, reg r47:V, reg x13:*, reg x14:V, reg dim:cls, reg r48:V, reg length1:cls, reg r49:V, reg c29:L, reg c31:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r50:V, reg c34:L, reg r51:V, reg x15:*, reg x16:V, reg is_numeric:cls, reg r52:V, reg c35:L, reg c36:V, reg c38:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r53:V, reg r54:V, reg x17:*, reg x18:V, reg is_na1:cls, reg r55:V, reg format:cls, reg zapsmall:cls, reg x19:*, reg x20:V, reg p1:p(V +), reg digits1:*, reg digits2:V, reg p2:p(V +), reg r58:V, reg p3:p(V +), reg r60:V, reg l4:*, reg c39:L, reg r62:S, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r64:S, reg dx3:V, reg xna:*, reg xna1:V, reg ___:cls, reg r65:V, reg print:cls, reg x21:*, reg x22:V, reg p4:p(V +), reg quote1:*, reg quote2:V, reg p5:p(V +), reg right1:*, reg right2:V, reg p6:p(V +), reg ddd1:dots?, reg r70:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r71:V, reg r72:V, reg xx:*, reg xx1:V, reg length2:cls, reg r73:V, reg c40:L, reg cat:cls, reg r74:V, reg print1:cls, reg xx2:*, reg xx3:V, reg p7:p(V +), reg r76:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r78:V, reg r79:V, reg xxx:*, reg xxx1:V, reg invisible:cls, reg r80:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L2(FALSE) else L2(quote);
  L2(quote_orDefault):
    st quote = quote_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L3(FALSE) else L3(right);
  L3(right_orDefault):
    st right = right_orDefault;
    x1 = ld x;
    check L33() else D0();
  D0():
    deopt 0 [x1];
  L33():
    x2 = force? x1;
    checkMissing(x2);
    st xxx = x2;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L4(r3):
    st xx = r3;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L34():
    x3 = ld x;
    check L36() else D1();
  L35():
    r2 = dyn base(<sym x>, "Notes");
    goto L4(r2);
  D1():
    deopt 5 [x3];
  L5(r6):
    st `a.ind` = r6;
    a = ld a;
    check L51() else D8();
  L36():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r4 = dyn attr(x4, "Notes");
    check L37() else D2();
  L38():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L39():
    r5 = dyn base1(<lang names(`<-`(a, attributes(x)))>, <lang c("dim", "dimnames", "names")>);
    goto L5(r5);
  D2():
    deopt 9 [r4];
  D8():
    deopt 36 [a];
  L6(r8):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L37():
    goto L4(r4);
  L40():
    sym3 = ldf attributes;
    base3 = ldf attributes in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L41():
    r7 = dyn base2(<lang `<-`(a, attributes(x))>);
    goto L6(r7);
  L51():
    a1 = force? a;
    checkMissing(a1);
    c1 = `is.object`(a1);
    if c1 then L52() else L53(a1);
  L7(r10):
    st a = r10;
    names = ldf names in base;
    r12 = dyn names(r10);
    check L46() else D5();
  L8(r14):
    match = ldf match in base;
    r16 = dyn match(r8, r14, NA_INT, NULL);
    check L50() else D7();
  L9(dx1):
    st a = dx1;
    l = ld x;
    attributes__ = ldf `attributes<-`;
    check L59() else D11();
  L42():
    x5 = ld x;
    check L44() else D3();
  L43():
    r9 = dyn base3(<sym x>);
    goto L7(r9);
  L47():
    c = ldf c in base;
    r15 = dyn c("dim", "dimnames", "names");
    check L49() else D6();
  L48():
    r13 = dyn base4("dim", "dimnames", "names");
    goto L8(r13);
  L52():
    dr = tryDispatchBuiltin.1("[", a1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53(dr);
  L53(a3):
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  D3():
    deopt 17 [x5];
  D5():
    deopt 23 [r12];
  D6():
    deopt 30 [r15];
  D7():
    deopt 34 [r16];
  D11():
    deopt 50 [NULL, l, NULL];
  L10(a6, r18):
    r20 = `!`(r18);
    __ = ldf `[` in base;
    r21 = dyn __(a6, r20);
    goto L9(r21);
  L44():
    x6 = force? x5;
    checkMissing(x6);
    attributes = ldf attributes in base;
    r11 = dyn attributes(x6);
    check L45() else D4();
  L46():
    goto L6(r12);
  L49():
    goto L8(r15);
  L50():
    goto L5(r16);
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L55():
    a_ind = ld `a.ind`;
    check L57() else D9();
  L56():
    r17 = dyn base5(<sym a.ind>);
    goto L10(a3, r17);
  L59():
    r22 = dyn attributes__(l, NULL, NULL);
    check L60() else D12();
  D4():
    deopt 20 [r11];
  D9():
    deopt 40 [a3, a_ind];
  D12():
    deopt 52 [NULL, r22];
  L45():
    goto L7(r11);
  L57():
    a_ind1 = force? a_ind;
    checkMissing(a_ind1);
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(a_ind1);
    check L58() else D10();
  L60():
    st x = r22;
    l1 = ld x;
    class__ = ldf `class<-`;
    check L61() else D13();
  D10():
    deopt 43 [a3, r19];
  D13():
    deopt 55 [NULL, l1, NULL];
  L58():
    goto L10(a3, r19);
  L61():
    r23 = dyn class__(l1, NULL, NULL);
    check L62() else D14();
  D14():
    deopt 57 [NULL, r23];
  L62():
    st x = r23;
    a7 = ld a;
    check L63() else D15();
  D15():
    deopt 59 [a7];
  L63():
    a8 = force? a7;
    checkMissing(a8);
    l2 = ld x;
    attributes__1 = ldf `attributes<-`;
    check L64() else D16();
  D16():
    deopt 62 [a8, l2, a8];
  L64():
    r24 = dyn attributes__1(l2, NULL, a8);
    check L65() else D17();
  D17():
    deopt 64 [a8, r24];
  L65():
    st x = r24;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L11(r26):
    r28 = `==`(r26, 1.0);
    c2 = `as.logical`(r28);
    if c2 then L70() else L12(c2);
  L66():
    x7 = ld x;
    check L68() else D18();
  L67():
    r25 = dyn base6(<sym x>);
    goto L11(r25);
  D18():
    deopt 68 [x7];
  L12(c4):
    c15 = `as.logical`(c4);
    if c15 then L78() else L15(c15);
  L68():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r27 = dyn length(x8);
    check L69() else D19();
  L70():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  D19():
    deopt 71 [r27];
  L13(c7, r30):
    c12 = `as.logical`(r30);
    c13 = `&&`(c7, c12);
    goto L12(c13);
  L15(c17):
    c28 = `as.logical`(c17);
    if c28 then L86() else L18();
  L69():
    goto L11(r27);
  L71():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  L72():
    r29 = dyn base7(<lang names(x)>);
    goto L13(c2, r29);
  L78():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L79() else L80();
  L14(c10, r32):
    c11 = `==`(r32, NULL);
    goto L13(c10, c11);
  L16(c20, r35):
    c25 = `as.logical`(r35);
    c26 = `&&`(c20, c25);
    goto L15(c26);
  L18():
    goto L20();
  L20():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L92() else L93();
  L73():
    x9 = ld x;
    check L75() else D20();
  L74():
    r31 = dyn base8(<sym x>);
    goto L14(c2, r31);
  L79():
    sym10 = ldf dimnames;
    base10 = ldf dimnames in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L81() else L82();
  L80():
    r34 = dyn base9(<lang dimnames(x)>);
    goto L16(c15, r34);
  L86():
    sym11 = ldf rep;
    base11 = ldf rep in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L87() else L88();
  D20():
    deopt 77 [c2, x9];
  L17(c23, r37):
    c24 = `==`(r37, NULL);
    goto L16(c23, c24);
  L19(r40):
    l3 = ld x;
    names__ = ldf `names<-`;
    check L89() else D24();
  L21(r45):
    c29 = `as.logical`(r45);
    if c29 then L99() else L23(c29);
  L75():
    x10 = force? x9;
    checkMissing(x10);
    names1 = ldf names in base;
    r33 = dyn names1(x10);
    check L76() else D21();
  L81():
    x11 = ld x;
    check L83() else D22();
  L82():
    r36 = dyn base10(<sym x>);
    goto L17(c15, r36);
  L87():
    rep = ldf rep in base;
    r41 = dyn rep("", <lang length(x)>);
    goto L19(r41);
  L88():
    r39 = dyn base11("", <lang length(x)>);
    goto L19(r39);
  L92():
    sym13 = ldf dim;
    base13 = ldf dim in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L94() else L95();
  L93():
    r44 = dyn base12(<lang dim(x)>);
    goto L21(r44);
  D21():
    deopt 80 [c2, r33];
  D22():
    deopt 86 [c15, x11];
  D24():
    deopt 96 [r40, l3, r40];
  L22(r47):
    length1 = ldf length in base;
    r49 = dyn length1(r47);
    check L98() else D28();
  L23(c31):
    c38 = `as.logical`(c31);
    if c38 then L105() else L25();
  L76():
    goto L14(c2, r33);
  L83():
    x12 = force? x11;
    checkMissing(x12);
    dimnames = ldf dimnames in base;
    r38 = dyn dimnames(x12);
    check L84() else D23();
  L89():
    r42 = dyn names__(l3, NULL, r40);
    check L90() else D25();
  L94():
    x13 = ld x;
    check L96() else D26();
  L95():
    r46 = dyn base13(<sym x>);
    goto L22(r46);
  L99():
    sym14 = ldf `is.numeric`;
    base14 = ldf `is.numeric` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L100() else L101();
  D23():
    deopt 89 [c15, r38];
  D25():
    deopt 98 [r40, r42];
  D26():
    deopt 106 [x13];
  D28():
    deopt 111 [r49];
  L24(c34, r51):
    c35 = `as.logical`(r51);
    c36 = `&&`(c34, c35);
    goto L23(c36);
  L25():
    goto L28();
  L28():
    print = ldf print;
    check L117() else D36();
  L84():
    goto L17(c15, r38);
  L90():
    st x = r42;
    goto L20();
  L96():
    x14 = force? x13;
    checkMissing(x14);
    dim = ldf dim in base;
    r48 = dyn dim(x14);
    check L97() else D27();
  L98():
    goto L21(r49);
  L100():
    x15 = ld x;
    check L102() else D29();
  L101():
    r50 = dyn base14(<sym x>);
    goto L24(c29, r50);
  L105():
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L106() else L107();
  D27():
    deopt 109 [r48];
  D29():
    deopt 114 [c29, x15];
  D36():
    deopt 141 [];
  L26(r54):
    st xna = r54;
    format = ldf format;
    check L110() else D33();
  L97():
    goto L22(r48);
  L102():
    x16 = force? x15;
    checkMissing(x16);
    is_numeric = ldf `is.numeric` in base;
    r52 = dyn is_numeric(x16);
    check L103() else D30();
  L106():
    x17 = ld x;
    check L108() else D31();
  L107():
    r53 = dyn base15(<sym x>);
    goto L26(r53);
  L117():
    p4 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    p5 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    p6 = prom<V +>{
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      return right2;
    };
    ddd1 = ld `...`;
    r70 = dyn print[, quote, right, `...`](p4, p5, p6, ddd1);
    check L118() else D37();
  D30():
    deopt 117 [c29, r52];
  D31():
    deopt 121 [x17];
  D33():
    deopt 127 [];
  D37():
    deopt 148 [r70];
  L103():
    goto L24(c29, r52);
  L108():
    x18 = force? x17;
    checkMissing(x18);
    is_na1 = ldf `is.na` in base;
    r55 = dyn is_na1(x18);
    check L109() else D32();
  L110():
    p3 = prom<V +>{
      zapsmall = ldf zapsmall;
      p1 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      p2 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r58 = dyn zapsmall(p1, p2);
      return r58;
    };
    r60 = dyn format(p3);
    check L111() else D34();
  L118():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L119() else L120();
  D32():
    deopt 124 [r55];
  D34():
    deopt 129 [r60];
  L29(r72):
    c40 = `as.logical`(r72);
    if c40 then L123() else L30();
  L109():
    goto L26(r55);
  L111():
    st x = r60;
    l4 = ld x;
    c39 = `is.object`(l4);
    if c39 then L112() else L113("  ", l4);
  L119():
    xx = ld xx;
    check L121() else D38();
  L120():
    r71 = dyn base16(<sym xx>);
    goto L29(r71);
  D38():
    deopt 151 [xx];
  L27(r64, dx3):
    st x = dx3;
    goto L28();
  L30():
    goto L31();
  L31():
    sym17 = ldf invisible;
    base17 = ldf invisible in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L129() else L130();
  L112():
    dr2 = tryDispatchBuiltin.0("[<-", l4, "  ");
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L114() else L113("  ", dr2);
  L113(r62, l6):
    xna = ld xna;
    check L115() else D35();
  L121():
    xx1 = force? xx;
    checkMissing(xx1);
    length2 = ldf length in base;
    r73 = dyn length2(xx1);
    check L122() else D39();
  L123():
    cat = ldf cat;
    check L124() else D40();
  D35():
    deopt 134 [r62, l6, "  ", xna];
  D39():
    deopt 154 [r73];
  D40():
    deopt 156 [];
  L32(r79):
    popenv;
    return r79;
  L114():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L27("  ", dx2);
  L115():
    xna1 = force? xna;
    ___ = ldf `[<-` in base;
    r65 = dyn ___(l6, "  ", xna1);
    goto L27(r62, r65);
  L122():
    goto L29(r73);
  L124():
    r74 = dyn cat("\nNotes:\n");
    check L125() else D41();
  L129():
    xxx = ld xxx;
    check L131() else D44();
  L130():
    r78 = dyn base17(<sym xxx>);
    goto L32(r78);
  D41():
    deopt 158 [r74];
  D44():
    deopt 167 [xxx];
  L125():
    print1 = ldf print;
    check L126() else D42();
  L131():
    xxx1 = force? xxx;
    checkMissing(xxx1);
    invisible = ldf invisible in base;
    r80 = dyn invisible(xxx1);
    check L132() else D45();
  D42():
    deopt 160 [];
  D45():
    deopt 170 [r80];
  L126():
    p7 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    r76 = dyn print1(p7);
    check L127() else D43();
  L132():
    goto L32(r80);
  D43():
    deopt 162 [r76];
  L127():
    goto L31();
  }
}