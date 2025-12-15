fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x:*, reg x1:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x2:*, reg x3:V, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg x4:*, reg x5:V, reg r10:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r11:V, reg r12:V, reg x6:*, reg x7:V, reg r13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r14:V, reg r15:V, reg x8:*, reg x9:V, reg r16:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r17:V, reg r18:V, reg x10:*, reg x11:V, reg r19:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r20:V, reg r21:V, reg x12:*, reg x13:V, reg r22:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r23:V, reg r24:V, reg x14:*, reg x15:V, reg r25:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r26:V, reg r27:V, reg x16:*, reg x17:V, reg r28:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r29:V, reg r30:V, reg x18:*, reg x19:V, reg r31:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r32:V, reg r33:V, reg x20:*, reg x21:V, reg r34:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r35:V, reg r36:V, reg x22:*, reg x23:V, reg r37:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r38:V, reg r39:V, reg x24:*, reg x25:V, reg r40:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r41:V, reg r42:V, reg x26:*, reg x27:V, reg r43:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r44:V, reg r45:V, reg x28:*, reg x29:V, reg r46:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r47:V, reg r48:V, reg x30:*, reg x31:V, reg r49:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r50:V, reg r51:V, reg x32:*, reg x33:V, reg r52:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r53:V, reg r54:V, reg x34:*, reg x35:V, reg r55:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r56:V, reg r57:V, reg x36:*, reg x37:V, reg r58:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r59:V, reg r60:V, reg x38:*, reg x39:V, reg r61:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r62:V, reg r63:V, reg x40:*, reg x41:V, reg r64:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r65:V, reg r66:V, reg x42:*, reg x43:V, reg r67:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r68:V, reg r69:V, reg x44:*, reg x45:V, reg r70:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r71:V, reg r72:V, reg x46:*, reg x47:V, reg r73:V, reg list:cls, reg r74:V |
    mkenv;
    st x = 42.0;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L0(r1):
    popenv;
    return r1;
  L25():
    sym1 = ldf floor;
    base1 = ldf floor in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L26():
    r = dyn base(<lang floor(x)>, <lang ceiling(x)>, <lang sign(x)>, <lang expm1(x)>, <lang log1p(x)>, <lang cos(x)>, <lang sin(x)>, <lang tan(x)>, <lang acos(x)>, <lang asin(x)>, <lang atan(x)>, <lang cosh(x)>, <lang sinh(x)>, <lang tanh(x)>, <lang acosh(x)>, <lang asinh(x)>, <lang atanh(x)>, <lang lgamma(x)>, <lang gamma(x)>, <lang digamma(x)>, <lang trigamma(x)>, <lang cospi(x)>, <lang sinpi(x)>, <lang tanpi(x)>);
    goto L0(r);
  L1(r3):
    sym2 = ldf ceiling;
    base2 = ldf ceiling in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L27():
    x = ld x;
    check L29() else D0();
  L28():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  D0():
    deopt 6 [x];
  L2(r6):
    sym3 = ldf sign;
    base3 = ldf sign in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L29():
    x1 = force? x;
    checkMissing(x1);
    r4 = floor(x1);
    goto L1(r4);
  L30():
    x2 = ld x;
    check L32() else D1();
  L31():
    r5 = dyn base2(<sym x>);
    goto L2(r5);
  D1():
    deopt 10 [x2];
  L3(r9):
    sym4 = ldf expm1;
    base4 = ldf expm1 in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L32():
    x3 = force? x2;
    checkMissing(x3);
    r7 = ceiling(x3);
    goto L2(r7);
  L33():
    x4 = ld x;
    check L35() else D2();
  L34():
    r8 = dyn base3(<sym x>);
    goto L3(r8);
  D2():
    deopt 14 [x4];
  L4(r12):
    sym5 = ldf log1p;
    base5 = ldf log1p in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L35():
    x5 = force? x4;
    checkMissing(x5);
    r10 = sign(x5);
    goto L3(r10);
  L36():
    x6 = ld x;
    check L38() else D3();
  L37():
    r11 = dyn base4(<sym x>);
    goto L4(r11);
  D3():
    deopt 18 [x6];
  L5(r15):
    sym6 = ldf cos;
    base6 = ldf cos in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L42() else L43();
  L38():
    x7 = force? x6;
    checkMissing(x7);
    r13 = expm1(x7);
    goto L4(r13);
  L39():
    x8 = ld x;
    check L41() else D4();
  L40():
    r14 = dyn base5(<sym x>);
    goto L5(r14);
  D4():
    deopt 22 [x8];
  L6(r18):
    sym7 = ldf sin;
    base7 = ldf sin in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L45() else L46();
  L41():
    x9 = force? x8;
    checkMissing(x9);
    r16 = log1p(x9);
    goto L5(r16);
  L42():
    x10 = ld x;
    check L44() else D5();
  L43():
    r17 = dyn base6(<sym x>);
    goto L6(r17);
  D5():
    deopt 26 [x10];
  L7(r21):
    sym8 = ldf tan;
    base8 = ldf tan in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L48() else L49();
  L44():
    x11 = force? x10;
    checkMissing(x11);
    r19 = cos(x11);
    goto L6(r19);
  L45():
    x12 = ld x;
    check L47() else D6();
  L46():
    r20 = dyn base7(<sym x>);
    goto L7(r20);
  D6():
    deopt 30 [x12];
  L8(r24):
    sym9 = ldf acos;
    base9 = ldf acos in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L51() else L52();
  L47():
    x13 = force? x12;
    checkMissing(x13);
    r22 = sin(x13);
    goto L7(r22);
  L48():
    x14 = ld x;
    check L50() else D7();
  L49():
    r23 = dyn base8(<sym x>);
    goto L8(r23);
  D7():
    deopt 34 [x14];
  L9(r27):
    sym10 = ldf asin;
    base10 = ldf asin in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L54() else L55();
  L50():
    x15 = force? x14;
    checkMissing(x15);
    r25 = tan(x15);
    goto L8(r25);
  L51():
    x16 = ld x;
    check L53() else D8();
  L52():
    r26 = dyn base9(<sym x>);
    goto L9(r26);
  D8():
    deopt 38 [x16];
  L10(r30):
    sym11 = ldf atan;
    base11 = ldf atan in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L57() else L58();
  L53():
    x17 = force? x16;
    checkMissing(x17);
    r28 = acos(x17);
    goto L9(r28);
  L54():
    x18 = ld x;
    check L56() else D9();
  L55():
    r29 = dyn base10(<sym x>);
    goto L10(r29);
  D9():
    deopt 42 [x18];
  L11(r33):
    sym12 = ldf cosh;
    base12 = ldf cosh in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L60() else L61();
  L56():
    x19 = force? x18;
    checkMissing(x19);
    r31 = asin(x19);
    goto L10(r31);
  L57():
    x20 = ld x;
    check L59() else D10();
  L58():
    r32 = dyn base11(<sym x>);
    goto L11(r32);
  D10():
    deopt 46 [x20];
  L12(r36):
    sym13 = ldf sinh;
    base13 = ldf sinh in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L63() else L64();
  L59():
    x21 = force? x20;
    checkMissing(x21);
    r34 = atan(x21);
    goto L11(r34);
  L60():
    x22 = ld x;
    check L62() else D11();
  L61():
    r35 = dyn base12(<sym x>);
    goto L12(r35);
  D11():
    deopt 50 [x22];
  L13(r39):
    sym14 = ldf tanh;
    base14 = ldf tanh in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L66() else L67();
  L62():
    x23 = force? x22;
    checkMissing(x23);
    r37 = cosh(x23);
    goto L12(r37);
  L63():
    x24 = ld x;
    check L65() else D12();
  L64():
    r38 = dyn base13(<sym x>);
    goto L13(r38);
  D12():
    deopt 54 [x24];
  L14(r42):
    sym15 = ldf acosh;
    base15 = ldf acosh in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L69() else L70();
  L65():
    x25 = force? x24;
    checkMissing(x25);
    r40 = sinh(x25);
    goto L13(r40);
  L66():
    x26 = ld x;
    check L68() else D13();
  L67():
    r41 = dyn base14(<sym x>);
    goto L14(r41);
  D13():
    deopt 58 [x26];
  L15(r45):
    sym16 = ldf asinh;
    base16 = ldf asinh in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L72() else L73();
  L68():
    x27 = force? x26;
    checkMissing(x27);
    r43 = tanh(x27);
    goto L14(r43);
  L69():
    x28 = ld x;
    check L71() else D14();
  L70():
    r44 = dyn base15(<sym x>);
    goto L15(r44);
  D14():
    deopt 62 [x28];
  L16(r48):
    sym17 = ldf atanh;
    base17 = ldf atanh in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L75() else L76();
  L71():
    x29 = force? x28;
    checkMissing(x29);
    r46 = acosh(x29);
    goto L15(r46);
  L72():
    x30 = ld x;
    check L74() else D15();
  L73():
    r47 = dyn base16(<sym x>);
    goto L16(r47);
  D15():
    deopt 66 [x30];
  L17(r51):
    sym18 = ldf lgamma;
    base18 = ldf lgamma in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L78() else L79();
  L74():
    x31 = force? x30;
    checkMissing(x31);
    r49 = asinh(x31);
    goto L16(r49);
  L75():
    x32 = ld x;
    check L77() else D16();
  L76():
    r50 = dyn base17(<sym x>);
    goto L17(r50);
  D16():
    deopt 70 [x32];
  L18(r54):
    sym19 = ldf gamma;
    base19 = ldf gamma in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L81() else L82();
  L77():
    x33 = force? x32;
    checkMissing(x33);
    r52 = atanh(x33);
    goto L17(r52);
  L78():
    x34 = ld x;
    check L80() else D17();
  L79():
    r53 = dyn base18(<sym x>);
    goto L18(r53);
  D17():
    deopt 74 [x34];
  L19(r57):
    sym20 = ldf digamma;
    base20 = ldf digamma in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L84() else L85();
  L80():
    x35 = force? x34;
    checkMissing(x35);
    r55 = lgamma(x35);
    goto L18(r55);
  L81():
    x36 = ld x;
    check L83() else D18();
  L82():
    r56 = dyn base19(<sym x>);
    goto L19(r56);
  D18():
    deopt 78 [x36];
  L20(r60):
    sym21 = ldf trigamma;
    base21 = ldf trigamma in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L87() else L88();
  L83():
    x37 = force? x36;
    checkMissing(x37);
    r58 = gamma(x37);
    goto L19(r58);
  L84():
    x38 = ld x;
    check L86() else D19();
  L85():
    r59 = dyn base20(<sym x>);
    goto L20(r59);
  D19():
    deopt 82 [x38];
  L21(r63):
    sym22 = ldf cospi;
    base22 = ldf cospi in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L90() else L91();
  L86():
    x39 = force? x38;
    checkMissing(x39);
    r61 = digamma(x39);
    goto L20(r61);
  L87():
    x40 = ld x;
    check L89() else D20();
  L88():
    r62 = dyn base21(<sym x>);
    goto L21(r62);
  D20():
    deopt 86 [x40];
  L22(r66):
    sym23 = ldf sinpi;
    base23 = ldf sinpi in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L93() else L94();
  L89():
    x41 = force? x40;
    checkMissing(x41);
    r64 = trigamma(x41);
    goto L21(r64);
  L90():
    x42 = ld x;
    check L92() else D21();
  L91():
    r65 = dyn base22(<sym x>);
    goto L22(r65);
  D21():
    deopt 90 [x42];
  L23(r69):
    sym24 = ldf tanpi;
    base24 = ldf tanpi in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L96() else L97();
  L92():
    x43 = force? x42;
    checkMissing(x43);
    r67 = cospi(x43);
    goto L22(r67);
  L93():
    x44 = ld x;
    check L95() else D22();
  L94():
    r68 = dyn base23(<sym x>);
    goto L23(r68);
  D22():
    deopt 94 [x44];
  L24(r72):
    list = ldf list in base;
    r74 = dyn list(r3, r6, r9, r12, r15, r18, r21, r24, r27, r30, r33, r36, r39, r42, r45, r48, r51, r54, r57, r60, r63, r66, r69, r72);
    check L99() else D24();
  L95():
    x45 = force? x44;
    checkMissing(x45);
    r70 = sinpi(x45);
    goto L23(r70);
  L96():
    x46 = ld x;
    check L98() else D23();
  L97():
    r71 = dyn base24(<sym x>);
    goto L24(r71);
  D23():
    deopt 98 [x46];
  D24():
    deopt 102 [r74];
  L98():
    x47 = force? x46;
    checkMissing(x47);
    r73 = tanpi(x47);
    goto L24(r73);
  L99():
    goto L0(r74);
  }
}