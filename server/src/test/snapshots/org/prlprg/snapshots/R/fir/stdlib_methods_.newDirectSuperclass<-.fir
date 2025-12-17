fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2529758135;
    st `.newDirectSuperclass<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2529758135(contains, class2, superclasses2, value) {
  (reg contains:*, reg class2:*, reg superclasses2:*, reg value:*) -+> V { var contains:*, var class2:*, var superclasses2:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg contains1:*, reg contains2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg superclasses3:*, reg superclasses4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c5:L, reg r8:V, reg superclasses5:*, reg superclasses6:V, reg length1:cls, reg r9:V, reg r10:V, reg c6:L, reg c7:V, reg c9:L, reg c10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c14:L, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg c17:L, reg r14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg c20:L, reg r16:V, reg superclasses7:*, reg superclasses8:V, reg superclasses9:*, reg superclasses10:V, reg match:cls, reg r17:V, reg is_na:cls, reg r18:V, reg all:cls, reg r19:V, reg c21:L, reg c22:V, reg c24:L, reg value1:*, reg value2:V, reg l:*, reg c25:L, reg value4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg value6:V, reg dx1:V, reg class3:*, reg class4:V, reg ____:cls, reg r20:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg r22:V, reg superclasses11:*, reg superclasses12:V, reg r23:I, reg sq:*, reg sq1:V, reg c26:L, reg sq3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r24:V, reg sq6:V, reg r25:V, reg superclasses13:*, reg superclasses14:V, reg superclasses15:*, reg superclasses16:V, reg match1:cls, reg r26:V, reg r27:V, reg __:cls, reg r28:V, reg c27:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r29:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r30:V, reg r31:V, reg contains3:*, reg contains4:V, reg c28:L, reg contains6:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg sq7:*, reg sq8:V, reg before:*, reg before1:V, reg r32:V, reg __2:cls, reg r33:V, reg value8:*, reg value9:V, reg contains7:*, reg contains8:V, reg c29:L, reg contains10:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg sq9:*, reg sq10:V, reg before2:*, reg before3:V, reg r34:V, reg __3:cls, reg r35:V, reg c30:cls, reg r36:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg superclasses17:*, reg superclasses18:V, reg c31:L, reg superclasses20:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg sq11:*, reg sq12:V, reg before4:*, reg before5:V, reg r39:V, reg __4:cls, reg r40:V, reg class5:*, reg class6:V, reg superclasses21:*, reg superclasses22:V, reg c32:L, reg superclasses24:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg sq13:*, reg sq14:V, reg before6:*, reg before7:V, reg r41:V, reg __5:cls, reg r42:V, reg c33:cls, reg r43:V, reg superclasses25:*, reg superclasses26:V, reg l3:*, reg names__:cls, reg r44:V, reg contains11:*, reg contains12:V |
    mkenv;
    st contains = contains;
    st class2 = class2;
    st superclasses2 = superclasses2;
    st value = value;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r1):
    st superclasses = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L21():
    contains1 = ld contains;
    check L23() else D0();
  L22():
    r = dyn base(<sym contains>);
    goto L0(r);
  D0():
    deopt 2 [contains1];
  L1(r4):
    r6 = `==`(r4, 0.0);
    c = `as.logical`(r6);
    if c then L2(c) else L29();
  L23():
    contains2 = force? contains1;
    checkMissing(contains2);
    names = ldf names in base;
    r2 = dyn names(contains2);
    check L24() else D1();
  L25():
    superclasses3 = ld superclasses2;
    check L27() else D2();
  L26():
    r3 = dyn base1(<sym superclasses2>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [superclasses3];
  L2(c1):
    c9 = `as.logical`(c1);
    if c9 then L4(c9) else L35();
  L24():
    goto L0(r2);
  L27():
    superclasses4 = force? superclasses3;
    checkMissing(superclasses4);
    length = ldf length in base;
    r5 = dyn length(superclasses4);
    check L28() else D3();
  L29():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D3():
    deopt 12 [r5];
  L3(c5, r8):
    r10 = `==`(r8, 0.0);
    c6 = `as.logical`(r10);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L4(c10):
    c24 = `as.logical`(c10);
    if c24 then L48() else L8();
  L28():
    goto L1(r5);
  L30():
    superclasses5 = ld superclasses;
    check L32() else D4();
  L31():
    r7 = dyn base2(<sym superclasses>);
    goto L3(c, r7);
  L35():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  D4():
    deopt 17 [c, superclasses5];
  L5(c14, r12):
    c21 = `as.logical`(r12);
    c22 = `||`(c14, c21);
    goto L4(c22);
  L8():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L10():
    contains11 = ld contains;
    check L105() else D37();
  L32():
    superclasses6 = force? superclasses5;
    checkMissing(superclasses6);
    length1 = ldf length in base;
    r9 = dyn length1(superclasses6);
    check L33() else D5();
  L36():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L37():
    r11 = dyn base3(<lang is.na(match(superclasses2, superclasses))>);
    goto L5(c9, r11);
  L48():
    value1 = ld value;
    check L49() else D11();
  D5():
    deopt 20 [c, r9];
  D11():
    deopt 43 [value1];
  D37():
    deopt 123 [contains11];
  L6(c17, r14):
    all = ldf all in base;
    r19 = dyn all(r14);
    check L46() else D10();
  L11(r22):
    st sq = r22;
    sq = ld sq;
    check L58() else D14();
  L33():
    goto L3(c, r9);
  L38():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L40() else L41();
  L39():
    r13 = dyn base4(<lang match(superclasses2, superclasses)>);
    goto L6(c9, r13);
  L49():
    value2 = force? value1;
    checkMissing(value2);
    l = ld contains;
    c25 = `is.object`(l);
    if c25 then L50() else L51(value2, l);
  L55():
    superclasses11 = ld superclasses;
    check L57() else D13();
  L56():
    r21 = dyn base6(<sym superclasses>);
    goto L11(r21);
  L105():
    contains12 = force? contains11;
    checkMissing(contains12);
    popenv;
    return contains12;
  D10():
    deopt 41 [c17, r19];
  D13():
    deopt 51 [superclasses11];
  D14():
    deopt 55 [sq];
  L7(c20, r16):
    is_na = ldf `is.na` in base;
    r18 = dyn is_na(r16);
    check L45() else D9();
  L9(value6, dx1):
    st contains = dx1;
    goto L10();
  L40():
    superclasses7 = ld superclasses2;
    check L42() else D6();
  L41():
    r15 = dyn base5(<sym superclasses2>, <sym superclasses>);
    goto L7(c9, r15);
  L46():
    goto L5(c17, r19);
  L50():
    dr = tryDispatchBuiltin.0("[[<-", l, value2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L52() else L51(value2, dr);
  L51(value4, l2):
    class3 = ld class2;
    check L53() else D12();
  L57():
    superclasses12 = force? superclasses11;
    checkMissing(superclasses12);
    r23 = seq_along(superclasses12);
    goto L11(r23);
  L58():
    sq1 = force? sq;
    checkMissing(sq1);
    c26 = `is.object`(sq1);
    if c26 then L59() else L60(sq1);
  D6():
    deopt 30 [c9, superclasses7];
  D9():
    deopt 39 [c20, r18];
  D12():
    deopt 46 [value4, l2, value2, class3];
  L12(dx3):
    c27 = `is.object`(dx3);
    if c27 then L67() else L68(dx3);
  L42():
    superclasses8 = force? superclasses7;
    checkMissing(superclasses8);
    superclasses9 = ld superclasses;
    check L43() else D7();
  L45():
    goto L6(c20, r18);
  L52():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(value2, dx);
  L53():
    class4 = force? class3;
    ____ = ldf `[[<-` in base;
    r20 = dyn ____(l2, value2, class4);
    goto L9(value4, r20);
  L59():
    dr2 = tryDispatchBuiltin.1("[", sq1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L61() else L60(dr2);
  L60(sq3):
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L62() else L63();
  D7():
    deopt 32 [c9, superclasses9];
  L13(sq6, r25):
    r27 = `>`(r25, 0);
    __ = ldf `[` in base;
    r28 = dyn __(sq6, r27);
    goto L12(r28);
  L14(dx7):
    st before = dx7;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L70() else L71();
  L43():
    superclasses10 = force? superclasses9;
    checkMissing(superclasses10);
    match = ldf match in base;
    r17 = dyn match(superclasses8, superclasses10, NA_INT, NULL);
    check L44() else D8();
  L61():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L62():
    superclasses13 = ld superclasses;
    check L64() else D15();
  L63():
    r24 = dyn base7(<sym superclasses>, <sym superclasses2>, 0);
    goto L13(sq3, r24);
  L67():
    dr4 = tryDispatchBuiltin.1("[[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L69() else L68(dr4);
  L68(dx5):
    __1 = ldf `[[` in base;
    r29 = dyn __1(dx5, 1.0);
    goto L14(r29);
  D8():
    deopt 37 [c9, r17];
  D15():
    deopt 59 [sq3, superclasses13];
  L15(r31):
    st contains = r31;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L86() else L87();
  L44():
    goto L7(c9, r17);
  L64():
    superclasses14 = force? superclasses13;
    checkMissing(superclasses14);
    superclasses15 = ld superclasses2;
    check L65() else D16();
  L69():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx6);
  L70():
    contains3 = ld contains;
    check L72() else D18();
  L71():
    r30 = dyn base8(<lang `[`(contains, `<`(sq, before))>, <sym value>, <lang `[`(contains, `>=`(sq, before))>);
    goto L15(r30);
  D16():
    deopt 61 [sq3, superclasses15];
  D18():
    deopt 76 [contains3];
  L18(r38):
    st superclasses = r38;
    superclasses25 = ld superclasses;
    check L102() else D34();
  L65():
    superclasses16 = force? superclasses15;
    checkMissing(superclasses16);
    match1 = ldf match in base;
    r26 = dyn match1(superclasses14, superclasses16, 0, NULL);
    check L66() else D17();
  L72():
    contains4 = force? contains3;
    checkMissing(contains4);
    c28 = `is.object`(contains4);
    if c28 then L73() else L74(contains4);
  L86():
    superclasses17 = ld superclasses;
    check L88() else D26();
  L87():
    r37 = dyn base9(<lang `[`(superclasses, `<`(sq, before))>, <sym class2>, <lang `[`(superclasses, `>=`(sq, before))>);
    goto L18(r37);
  D17():
    deopt 66 [sq3, r26];
  D26():
    deopt 97 [superclasses17];
  D34():
    deopt 116 [superclasses25];
  L16(dx9):
    value8 = ld value;
    check L78() else D21();
  L66():
    goto L13(sq3, r26);
  L73():
    dr6 = tryDispatchBuiltin.1("[", contains4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L75() else L74(dr6);
  L74(contains6):
    sq7 = ld sq;
    check L76() else D19();
  L88():
    superclasses18 = force? superclasses17;
    checkMissing(superclasses18);
    c31 = `is.object`(superclasses18);
    if c31 then L89() else L90(superclasses18);
  L102():
    superclasses26 = force? superclasses25;
    checkMissing(superclasses26);
    l3 = ld contains;
    names__ = ldf `names<-`;
    check L103() else D35();
  D19():
    deopt 78 [contains6, sq7];
  D21():
    deopt 83 [value8];
  D35():
    deopt 119 [superclasses26, l3, superclasses26];
  L19(dx13):
    class5 = ld class2;
    check L94() else D29();
  L75():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L16(dx8);
  L76():
    sq8 = force? sq7;
    checkMissing(sq8);
    before = ld before;
    check L77() else D20();
  L78():
    value9 = force? value8;
    checkMissing(value9);
    contains7 = ld contains;
    check L79() else D22();
  L89():
    dr10 = tryDispatchBuiltin.1("[", superclasses18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L91() else L90(dr10);
  L90(superclasses20):
    sq11 = ld sq;
    check L92() else D27();
  L103():
    r44 = dyn names__(l3, NULL, superclasses26);
    check L104() else D36();
  D20():
    deopt 79 [contains6, sq8, before];
  D22():
    deopt 85 [contains7];
  D27():
    deopt 99 [superclasses20, sq11];
  D29():
    deopt 104 [class5];
  D36():
    deopt 121 [superclasses26, r44];
  L77():
    before1 = force? before;
    checkMissing(before1);
    r32 = `<`(sq8, before1);
    __2 = ldf `[` in base;
    r33 = dyn __2(contains6, r32);
    goto L16(r33);
  L79():
    contains8 = force? contains7;
    checkMissing(contains8);
    c29 = `is.object`(contains8);
    if c29 then L80() else L81(contains8);
  L91():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L19(dx12);
  L92():
    sq12 = force? sq11;
    checkMissing(sq12);
    before4 = ld before;
    check L93() else D28();
  L94():
    class6 = force? class5;
    checkMissing(class6);
    superclasses21 = ld superclasses;
    check L95() else D30();
  L104():
    st contains = r44;
    goto L10();
  D28():
    deopt 100 [superclasses20, sq12, before4];
  D30():
    deopt 106 [superclasses21];
  L17(dx11):
    c30 = ldf c in base;
    r36 = dyn c30(dx9, value9, dx11);
    check L85() else D25();
  L80():
    dr8 = tryDispatchBuiltin.1("[", contains8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L82() else L81(dr8);
  L81(contains10):
    sq9 = ld sq;
    check L83() else D23();
  L93():
    before5 = force? before4;
    checkMissing(before5);
    r39 = `<`(sq12, before5);
    __4 = ldf `[` in base;
    r40 = dyn __4(superclasses20, r39);
    goto L19(r40);
  L95():
    superclasses22 = force? superclasses21;
    checkMissing(superclasses22);
    c32 = `is.object`(superclasses22);
    if c32 then L96() else L97(superclasses22);
  D23():
    deopt 87 [contains10, sq9];
  D25():
    deopt 93 [r36];
  L20(dx15):
    c33 = ldf c in base;
    r43 = dyn c33(dx13, class6, dx15);
    check L101() else D33();
  L82():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx10);
  L83():
    sq10 = force? sq9;
    checkMissing(sq10);
    before2 = ld before;
    check L84() else D24();
  L85():
    goto L15(r36);
  L96():
    dr12 = tryDispatchBuiltin.1("[", superclasses22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L98() else L97(dr12);
  L97(superclasses24):
    sq13 = ld sq;
    check L99() else D31();
  D24():
    deopt 88 [contains10, sq10, before2];
  D31():
    deopt 108 [superclasses24, sq13];
  D33():
    deopt 114 [r43];
  L84():
    before3 = force? before2;
    checkMissing(before3);
    r34 = `>=`(sq10, before3);
    __3 = ldf `[` in base;
    r35 = dyn __3(contains10, r34);
    goto L17(r35);
  L98():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L20(dx14);
  L99():
    sq14 = force? sq13;
    checkMissing(sq14);
    before6 = ld before;
    check L100() else D32();
  L101():
    goto L18(r43);
  D32():
    deopt 109 [superclasses24, sq14, before6];
  L100():
    before7 = force? before6;
    checkMissing(before7);
    r41 = `>=`(sq14, before7);
    __5 = ldf `[` in base;
    r42 = dyn __5(superclasses24, r41);
    goto L20(r42);
  }
}