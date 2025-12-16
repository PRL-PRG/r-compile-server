fun main() {
  () -+> V { reg r:cls, reg try:cls, reg __:cls, reg r1:V, reg r2:cls, reg iconvlist:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg l:*, reg Encoding__:cls, reg r8:V, reg x:*, reg x1:V, reg charToRaw:cls, reg iconv:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg xx:*, reg xx1:V, reg iconv1:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg r14:V, reg iconv2:cls, reg x6:*, reg x7:V, reg p5:p(V +), reg r16:V, reg iconv3:cls, reg x8:*, reg x9:V, reg p6:p(V +), reg r18:V, reg iconv4:cls, reg x10:*, reg x11:V, reg p7:p(V +), reg r20:V, reg iconv5:cls, reg xx2:*, reg xx3:V, reg p8:p(V +), reg r22:V, reg iconv6:cls, reg xx4:*, reg xx5:V, reg p9:p(V +), reg r24:V, reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg r26:V, reg c:cls, reg r27:V, reg l1:*, reg Encoding__1:cls, reg r28:V, reg x12:*, reg x13:V, reg try1:cls, reg iconv7:cls, reg x14:*, reg x15:V, reg p10:p(V +), reg r30:V, reg p11:p(V +), reg r32:V, reg iconv8:cls, reg x16:*, reg x17:V, reg p12:p(V +), reg r34:V, reg str:cls, reg iconv9:cls, reg x18:*, reg x19:V, reg p13:p(V +), reg r36:V, reg p14:p(V +), reg r38:V, reg iconv10:cls, reg xx6:*, reg xx7:V, reg p15:p(V +), reg r40:V, reg iconv11:cls, reg emoji:*, reg emoji1:V, reg p16:p(V +), reg r42:V, reg iconv12:cls, reg emoji2:*, reg emoji3:V, reg p17:p(V +), reg r44:V |
    mkenv;
    r = clos `inner-1055616401`;
    st iconv = r;
    try = ldf try;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p1 = prom<V +>{
      __ = ldf `::`;
      r1 = dyn __("utils", "head");
      checkFun.0(r1);
      r2 = r1 as cls;
      p = prom<V +>{
        iconvlist = ldf iconvlist;
        r3 = dyn iconvlist();
        return r3;
      };
      r5 = dyn r2[, n](p, 50.0);
      return r5;
    };
    r7 = dyn try(p1);
    check L2() else D1();
  D1():
    deopt 6 [r7];
  L2():
    st x = "fran\ufffdais";
    l = ld x;
    Encoding__ = ldf `Encoding<-`;
    check L3() else D2();
  D2():
    deopt 13 ["latin1", l, "latin1"];
  L3():
    r8 = dyn Encoding__(l, NULL, "latin1");
    check L4() else D3();
  D3():
    deopt 15 ["latin1", r8];
  L4():
    st x = r8;
    x = ld x;
    check L5() else D4();
  D4():
    deopt 17 [x];
  L5():
    x1 = force? x;
    checkMissing(x1);
    charToRaw = ldf charToRaw;
    check L6() else D5();
  D5():
    deopt 20 [];
  L6():
    p3 = prom<V +>{
      iconv = ldf iconv;
      p2 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r10 = dyn iconv(p2, "latin1", "UTF-8");
      st xx = r10;
      invisible.0();
      return r10;
    };
    r12 = dyn charToRaw(p3);
    check L7() else D6();
  D6():
    deopt 22 [r12];
  L7():
    xx = ld xx;
    check L8() else D7();
  D7():
    deopt 23 [xx];
  L8():
    xx1 = force? xx;
    checkMissing(xx1);
    iconv1 = ldf iconv;
    check L9() else D8();
  D8():
    deopt 26 [];
  L9():
    p4 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r14 = dyn iconv1(p4, "latin1", "ASCII");
    check L10() else D9();
  D9():
    deopt 30 [r14];
  L10():
    iconv2 = ldf iconv;
    check L11() else D10();
  D10():
    deopt 32 [];
  L11():
    p5 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r16 = dyn iconv2(p5, "latin1", "ASCII", "?");
    check L12() else D11();
  D11():
    deopt 37 [r16];
  L12():
    iconv3 = ldf iconv;
    check L13() else D12();
  D12():
    deopt 39 [];
  L13():
    p6 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r18 = dyn iconv3(p6, "latin1", "ASCII", "");
    check L14() else D13();
  D13():
    deopt 44 [r18];
  L14():
    iconv4 = ldf iconv;
    check L15() else D14();
  D14():
    deopt 46 [];
  L15():
    p7 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r20 = dyn iconv4(p7, "latin1", "ASCII", "byte");
    check L16() else D15();
  D15():
    deopt 51 [r20];
  L16():
    iconv5 = ldf iconv;
    check L17() else D16();
  D16():
    deopt 53 [];
  L17():
    p8 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    r22 = dyn iconv5(p8, "UTF-8", "ASCII", "Unicode");
    check L18() else D17();
  D17():
    deopt 58 [r22];
  L18():
    iconv6 = ldf iconv;
    check L19() else D18();
  D18():
    deopt 60 [];
  L19():
    p9 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      return xx5;
    };
    r24 = dyn iconv6(p9, "UTF-8", "ASCII", "c99");
    check L20() else D19();
  D19():
    deopt 65 [r24];
  L20():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r26):
    st x = r26;
    l1 = ld x;
    Encoding__1 = ldf `Encoding<-`;
    check L24() else D21();
  L21():
    c = ldf c in base;
    r27 = dyn c("Ekstr\ufffdm", "J\ufffdreskog", "bi\ufffdchen Z\ufffdrcher");
    check L23() else D20();
  L22():
    r25 = dyn base("Ekstr\ufffdm", "J\ufffdreskog", "bi\ufffdchen Z\ufffdrcher");
    goto L0(r25);
  D20():
    deopt 72 [r27];
  D21():
    deopt 77 ["latin1", l1, "latin1"];
  L23():
    goto L0(r27);
  L24():
    r28 = dyn Encoding__1(l1, NULL, "latin1");
    check L25() else D22();
  D22():
    deopt 79 ["latin1", r28];
  L25():
    st x = r28;
    x12 = ld x;
    check L26() else D23();
  D23():
    deopt 81 [x12];
  L26():
    x13 = force? x12;
    checkMissing(x13);
    try1 = ldf try;
    check L27() else D24();
  D24():
    deopt 84 [];
  L27():
    p11 = prom<V +>{
      iconv7 = ldf iconv;
      p10 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r30 = dyn iconv7(p10, "latin1", "ASCII//TRANSLIT");
      return r30;
    };
    r32 = dyn try1(p11);
    check L28() else D25();
  D25():
    deopt 86 [r32];
  L28():
    iconv8 = ldf iconv;
    check L29() else D26();
  D26():
    deopt 88 [];
  L29():
    p12 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    r34 = dyn iconv8[, , , sub](p12, "latin1", "ASCII", "byte");
    check L30() else D27();
  D27():
    deopt 94 [r34];
  L30():
    str = ldf str;
    check L31() else D28();
  D28():
    deopt 96 [];
  L31():
    p14 = prom<V +>{
      iconv9 = ldf iconv;
      p13 = prom<V +>{
        x18 = ld x;
        x19 = force? x18;
        checkMissing(x19);
        return x19;
      };
      r36 = dyn iconv9[, , , toRaw](p13, "latin1", "UTF-16LE", TRUE);
      st xx = r36;
      invisible.0();
      return r36;
    };
    r38 = dyn str(p14);
    check L32() else D29();
  D29():
    deopt 98 [r38];
  L32():
    iconv10 = ldf iconv;
    check L33() else D30();
  D30():
    deopt 100 [];
  L33():
    p15 = prom<V +>{
      xx6 = ld xx;
      xx7 = force? xx6;
      checkMissing(xx7);
      return xx7;
    };
    r40 = dyn iconv10(p15, "UTF-16LE", "UTF-8");
    check L34() else D31();
  D31():
    deopt 104 [r40];
  L34():
    st emoji = "\u1f604";
    iconv11 = ldf iconv;
    check L35() else D32();
  D32():
    deopt 109 [];
  L35():
    p16 = prom<V +>{
      emoji = ld emoji;
      emoji1 = force? emoji;
      checkMissing(emoji1);
      return emoji1;
    };
    r42 = dyn iconv11[, , , sub](p16, <missing>, "latin1", "Unicode");
    check L36() else D33();
  D33():
    deopt 115 [r42];
  L36():
    iconv12 = ldf iconv;
    check L37() else D34();
  D34():
    deopt 117 [];
  L37():
    p17 = prom<V +>{
      emoji2 = ld emoji;
      emoji3 = force? emoji2;
      checkMissing(emoji3);
      return emoji3;
    };
    r44 = dyn iconv12[, , , sub](p17, <missing>, "latin1", "c99");
    check L38() else D35();
  D35():
    deopt 123 [r44];
  L38():
    popenv;
    return r44;
  }
}
fun `inner-1055616401`(x, from, to, sub, mark, toRaw) {
  (reg x:*, reg from:*, reg to:*, reg sub:*, reg mark:*, reg toRaw:*) -+> V { var x:*, var from:*, reg from_isMissing:L, reg from_orDefault:*, var to:*, reg to_isMissing:L, reg to_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var mark:*, reg mark_isMissing:L, reg mark_orDefault:*, var toRaw:*, reg toRaw_isMissing:L, reg toRaw_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg x3:*, reg x4:V, reg is_list:cls, reg r4:V, reg c7:L, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c16:L, reg c17:L, reg r6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg c22:L, reg c23:L, reg r8:V, reg x5:*, reg x6:V, reg oldClass:cls, reg r9:V, reg c24:V, reg c25:L, reg c26:V, reg c29:L, reg c30:V, reg r10:V, reg c32:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r11:V, reg r12:V, reg x7:*, reg x8:V, reg as_character:cls, reg r13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg r16:V, reg x9:*, reg x10:V, reg from1:*, reg from2:V, reg to1:*, reg to2:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r17:V, reg r18:V, reg sub1:*, reg sub2:V, reg as_character1:cls, reg r19:V, reg mark1:*, reg mark2:V, reg toRaw1:*, reg toRaw2:V, reg iconv:cls, reg r20:V |
    mkenv;
    st x = x;
    from_isMissing = missing.0(from);
    if from_isMissing then L0("") else L0(from);
  L0(from_orDefault):
    st from = from_orDefault;
    to_isMissing = missing.0(to);
    if to_isMissing then L1("") else L1(to);
  L1(to_orDefault):
    st to = to_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L2(NA_LGL) else L2(sub);
  L2(sub_orDefault):
    st sub = sub_orDefault;
    mark_isMissing = missing.0(mark);
    if mark_isMissing then L3(TRUE) else L3(mark);
  L3(mark_orDefault):
    st mark = mark_orDefault;
    toRaw_isMissing = missing.0(toRaw);
    if toRaw_isMissing then L4(FALSE) else L4(toRaw);
  L4(toRaw_orDefault):
    st toRaw = toRaw_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L5(r1):
    c1 = `as.logical`(r1);
    if c1 then L6(c1) else L19();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r = dyn base(<sym x>);
    goto L5(r);
  D0():
    deopt 1 [x1];
  L6(c2):
    r10 = `!`(c2);
    c32 = `as.logical`(r10);
    if c32 then L33() else L11();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L5(c);
  L19():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L7(c6, r3):
    c7 = `as.logical`(r3);
    if c7 then L24() else L8(c6, c7);
  L11():
    goto L13();
  L13():
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L20():
    x3 = ld x;
    check L22() else D1();
  L21():
    r2 = dyn base1(<sym x>);
    goto L7(c1, r2);
  L33():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  D1():
    deopt 6 [c1, x3];
  L8(c10, c11):
    c29 = `as.logical`(c11);
    c30 = `||`(c10, c29);
    goto L6(c30);
  L12(r12):
    st x = r12;
    goto L13();
  L14(r16):
    popenv;
    return r16;
  L22():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r4 = dyn is_list(x4);
    check L23() else D2();
  L24():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L34():
    x7 = ld x;
    check L36() else D5();
  L35():
    r11 = dyn base4(<sym x>);
    goto L12(r11);
  L39():
    x9 = ld x;
    check L41() else D7();
  L40():
    r15 = dyn base5(<lang iconv(x, from, to, as.character(sub), mark, toRaw)>);
    goto L14(r15);
  D2():
    deopt 9 [c1, r4];
  D5():
    deopt 23 [x7];
  D7():
    deopt 32 [x9];
  L9(c16, c17, r6):
    c25 = `as.logical`(r6);
    c26 = `&&`(c17, c25);
    goto L8(c16, c26);
  L23():
    goto L7(c1, r4);
  L25():
    sym3 = ldf oldClass;
    base3 = ldf oldClass in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L26():
    r5 = dyn base2(<lang oldClass(x)>);
    goto L9(c6, c7, r5);
  L36():
    x8 = force? x7;
    checkMissing(x8);
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(x8);
    check L37() else D6();
  L41():
    x10 = force? x9;
    checkMissing(x10);
    from1 = ld from;
    check L42() else D8();
  D6():
    deopt 26 [r13];
  D8():
    deopt 34 [from1];
  L10(c22, c23, r8):
    c24 = `==`(r8, NULL);
    goto L9(c22, c23, c24);
  L27():
    x5 = ld x;
    check L29() else D3();
  L28():
    r7 = dyn base3(<sym x>);
    goto L10(c6, c7, r7);
  L37():
    goto L12(r13);
  L42():
    from2 = force? from1;
    checkMissing(from2);
    to1 = ld to;
    check L43() else D9();
  D3():
    deopt 13 [c6, c7, x5];
  D9():
    deopt 36 [to1];
  L29():
    x6 = force? x5;
    checkMissing(x6);
    oldClass = ldf oldClass in base;
    r9 = dyn oldClass(x6);
    check L30() else D4();
  L43():
    to2 = force? to1;
    checkMissing(to2);
    sym6 = ldf `as.character`;
    base6 = ldf `as.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L44() else L45();
  D4():
    deopt 16 [c6, c7, r9];
  L15(r18):
    mark1 = ld mark;
    check L48() else D12();
  L30():
    goto L10(c6, c7, r9);
  L44():
    sub1 = ld sub;
    check L46() else D10();
  L45():
    r17 = dyn base6(<sym sub>);
    goto L15(r17);
  D10():
    deopt 40 [sub1];
  D12():
    deopt 44 [mark1];
  L46():
    sub2 = force? sub1;
    checkMissing(sub2);
    as_character1 = ldf `as.character` in base;
    r19 = dyn as_character1(sub2);
    check L47() else D11();
  L48():
    mark2 = force? mark1;
    checkMissing(mark2);
    toRaw1 = ld toRaw;
    check L49() else D13();
  D11():
    deopt 43 [r19];
  D13():
    deopt 46 [toRaw1];
  L47():
    goto L15(r19);
  L49():
    toRaw2 = force? toRaw1;
    checkMissing(toRaw2);
    iconv = ldf iconv in base;
    r20 = dyn iconv(x10, from2, to2, r18, mark2, toRaw2);
    check L50() else D14();
  D14():
    deopt 49 [r20];
  L50():
    goto L14(r20);
  }
}