fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1079520083;
    st `as.POSIXlt.character` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1079520083(x, tz, format, tryFormats, optional, `...`) {
  (reg x:*, reg tz:*, reg format:*, reg tryFormats:*, reg optional:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var format:*, var tryFormats:*, reg tryFormats_isMissing:L, reg tryFormats_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg unclass:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg missing:cls, reg r9:V, reg r10:V, reg c1:L, reg strptime:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg format1:*, reg format2:V, reg p2:p(V +), reg tz1:*, reg tz2:V, reg p3:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg tz3:*, reg tz4:V, reg nzchar:cls, reg r17:V, reg c2:L, reg tz5:*, reg tz6:V, reg l:*, reg attr__:cls, reg r18:V, reg res:*, reg res1:V, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg x11:V, reg r22:V, reg x12:*, reg x13:V, reg is_na:cls, reg r23:V, reg r24:V, reg __:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg xx:*, reg xx1:V, reg length:cls, reg r28:V, reg r29:V, reg c4:L, reg strptime1:cls, reg x14:*, reg x15:V, reg p4:p(V +), reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg tz8:*, reg tz9:V, reg nzchar1:cls, reg r34:V, reg c5:L, reg tz10:*, reg tz11:V, reg l1:*, reg attr__1:cls, reg r35:V, reg res2:*, reg res3:V, reg tryFormats1:*, reg tryFormats2:V, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x16:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg i7:I, reg r39:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg i10:I, reg r41:V, reg strptime2:cls, reg xx2:*, reg xx3:V, reg p5:p(V +), reg f:*, reg f1:V, reg p6:p(V +), reg tz13:*, reg tz14:V, reg p7:p(V +), reg r45:V, reg is_na1:cls, reg r46:V, reg r47:V, reg all:cls, reg r48:V, reg c7:L, reg strptime3:cls, reg x17:*, reg x18:V, reg p8:p(V +), reg f2:*, reg f3:V, reg p9:p(V +), reg tz15:*, reg tz16:V, reg p10:p(V +), reg r52:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg i15:I, reg r54:V, reg tz17:*, reg tz18:V, reg nzchar2:cls, reg r55:V, reg c8:L, reg tz19:*, reg tz20:V, reg l3:*, reg attr__2:cls, reg r56:V, reg i18:I, reg res4:*, reg res5:V, reg optional1:*, reg optional2:V, reg c9:L, reg as_POSIXlt_character:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r59:V, reg r60:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r61:V, reg r62:V, reg x19:*, reg x20:V, reg length1:cls, reg r63:V, reg rep_int:cls, reg r64:V, reg p11:p(V +), reg tz22:*, reg tz23:V, reg p12:p(V +), reg r67:V, reg stop:cls, reg r68:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    st format = format;
    tryFormats_isMissing = missing.0(tryFormats);
    if tryFormats_isMissing then L1() else L2(tryFormats);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("%Y-%m-%d %H:%M:%OS", "%Y/%m/%d %H:%M:%OS", "%Y-%m-%d %H:%M", "%Y/%m/%d %H:%M", "%Y-%m-%d", "%Y/%m/%d");
      goto L0(r2);
    L2():
      r = dyn base("%Y-%m-%d %H:%M:%OS", "%Y/%m/%d %H:%M:%OS", "%Y-%m-%d %H:%M", "%Y/%m/%d %H:%M", "%Y-%m-%d", "%Y/%m/%d");
      goto L0(r);
    };
    goto L2(p);
  L2(tryFormats_orDefault):
    st tryFormats = tryFormats_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L3(FALSE) else L3(optional);
  L3(optional_orDefault):
    st optional = optional_orDefault;
    st `...` = ddd;
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L4(r5):
    st x = r5;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L29():
    x1 = ld x;
    check L31() else D0();
  L30():
    r4 = dyn base1(<sym x>);
    goto L4(r4);
  D0():
    deopt 2 [x1];
  L5(r8):
    r10 = `!`(r8);
    c1 = `as.logical`(r10);
    if c1 then L35() else L6();
  L31():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r6 = dyn unclass(x2);
    check L32() else D1();
  L33():
    missing = ldf missing in base;
    r9 = dyn missing(<sym format>);
    goto L5(r9);
  L34():
    r7 = dyn base2(<sym format>);
    goto L5(r7);
  D1():
    deopt 5 [r6];
  L6():
    x5 = ld x;
    check L50() else D10();
  L32():
    goto L4(r6);
  L35():
    strptime = ldf strptime;
    check L36() else D2();
  D2():
    deopt 12 [];
  D10():
    deopt 40 [x5];
  L36():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      format1 = ld format;
      format2 = force? format1;
      checkMissing(format2);
      return format2;
    };
    p3 = prom<V +>{
      tz1 = ld tz;
      tz2 = force? tz1;
      checkMissing(tz2);
      return tz2;
    };
    r14 = dyn strptime[, , tz](p1, p2, p3);
    check L37() else D3();
  L50():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L51() else L52(x6);
  D3():
    deopt 17 [r14];
  L11(dx1):
    st xx = dx1;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L37():
    st res = r14;
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L51():
    dr = tryDispatchBuiltin.1("[", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(x8):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L7(r16):
    c2 = `as.logical`(r16);
    if c2 then L42() else L8();
  L12(x11, r22):
    r24 = `!`(r22);
    __ = ldf `[` in base;
    r25 = dyn __(x11, r24);
    goto L11(r25);
  L13(r27):
    r29 = `!`(r27);
    c4 = `as.logical`(r29);
    if c4 then L62() else L14();
  L38():
    tz3 = ld tz;
    check L40() else D4();
  L39():
    r15 = dyn base3(<sym tz>);
    goto L7(r15);
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L54():
    x12 = ld x;
    check L56() else D11();
  L55():
    r21 = dyn base4(<sym x>);
    goto L12(x8, r21);
  L58():
    xx = ld xx;
    check L60() else D13();
  L59():
    r26 = dyn base5(<sym xx>);
    goto L13(r26);
  D4():
    deopt 21 [tz3];
  D11():
    deopt 44 [x8, x12];
  D13():
    deopt 53 [xx];
  L8():
    goto L9();
  L9():
    res = ld res;
    check L47() else D9();
  L14():
    tryFormats1 = ld tryFormats;
    check L77() else D23();
  L40():
    tz4 = force? tz3;
    checkMissing(tz4);
    nzchar = ldf nzchar in base;
    r17 = dyn nzchar(tz4);
    check L41() else D5();
  L42():
    tz5 = ld tz;
    check L43() else D6();
  L56():
    x13 = force? x12;
    checkMissing(x13);
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(x13);
    check L57() else D12();
  L60():
    xx1 = force? xx;
    checkMissing(xx1);
    length = ldf length in base;
    r28 = dyn length(xx1);
    check L61() else D14();
  L62():
    strptime1 = ldf strptime;
    check L63() else D15();
  D5():
    deopt 24 [r17];
  D6():
    deopt 25 [tz5];
  D9():
    deopt 35 [res];
  D12():
    deopt 47 [x8, r23];
  D14():
    deopt 56 [r28];
  D15():
    deopt 59 [];
  D23():
    deopt 83 [tryFormats1];
  L41():
    goto L7(r17);
  L43():
    tz6 = force? tz5;
    checkMissing(tz6);
    l = ld res;
    attr__ = ldf `attr<-`;
    check L44() else D7();
  L47():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  L57():
    goto L12(x8, r23);
  L61():
    goto L13(r28);
  L63():
    p4 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r31 = dyn strptime1(p4, "%Y/%m/%d");
    check L64() else D16();
  L77():
    tryFormats2 = force? tryFormats1;
    checkMissing(tryFormats2);
    s = toForSeq(tryFormats2);
    l2 = length(s);
    i = 0;
    goto L19(i);
  D7():
    deopt 28 [tz6, l, tz6];
  D16():
    deopt 62 [r31];
  L19(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l2, i2);
    if c6 then L78() else L27();
  L44():
    r18 = dyn attr__(l, NULL, "tzone", tz6);
    check L45() else D8();
  L64():
    st res = r31;
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  D8():
    deopt 31 [tz6, r18];
  L15(r33):
    c5 = `as.logical`(r33);
    if c5 then L69() else L16();
  L27():
    x16 = `[[`(s, i2, NULL, TRUE);
    st f = x16;
    sym7 = ldf all;
    base7 = ldf all in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  L45():
    st res = r18;
    goto L9();
  L65():
    tz8 = ld tz;
    check L67() else D17();
  L66():
    r32 = dyn base6(<sym tz>);
    goto L15(r32);
  L78():
    optional1 = ld optional;
    check L102() else D36();
  D17():
    deopt 66 [tz8];
  D36():
    deopt 133 [optional1];
  L16():
    goto L17();
  L17():
    res2 = ld res;
    check L74() else D22();
  L20(i7, r39):
    c7 = `as.logical`(r39);
    if c7 then L87() else L22();
  L67():
    tz9 = force? tz8;
    checkMissing(tz9);
    nzchar1 = ldf nzchar in base;
    r34 = dyn nzchar1(tz9);
    check L68() else D18();
  L69():
    tz10 = ld tz;
    check L70() else D19();
  L79():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  L80():
    r38 = dyn base7(<lang `!`(is.na(strptime(xx, f, tz=tz)))>);
    goto L20(i2, r38);
  L102():
    optional2 = force? optional1;
    checkMissing(optional2);
    c9 = `as.logical`(optional2);
    if c9 then L103() else L28();
  D18():
    deopt 69 [r34];
  D19():
    deopt 70 [tz10];
  D22():
    deopt 80 [res2];
  L21(i10, r41):
    r47 = `!`(r41);
    all = ldf all in base;
    r48 = dyn all(r47);
    check L86() else D27();
  L22():
    goto L19(i7);
  L28():
    stop = ldf stop;
    check L107() else D39();
  L68():
    goto L15(r34);
  L70():
    tz11 = force? tz10;
    checkMissing(tz11);
    l1 = ld res;
    attr__1 = ldf `attr<-`;
    check L71() else D20();
  L74():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  L81():
    strptime2 = ldf strptime;
    check L83() else D24();
  L82():
    r40 = dyn base8(<lang strptime(xx, f, tz=tz)>);
    goto L21(i2, r40);
  L87():
    strptime3 = ldf strptime;
    check L88() else D28();
  L103():
    as_POSIXlt_character = ldf `as.POSIXlt.character`;
    check L104() else D37();
  D20():
    deopt 73 [tz11, l1, tz11];
  D24():
    deopt 90 [i2];
  D27():
    deopt 100 [i10, r48];
  D28():
    deopt 102 [i7];
  D37():
    deopt 136 [];
  D39():
    deopt 142 [];
  L71():
    r35 = dyn attr__1(l1, NULL, "tzone", tz11);
    check L72() else D21();
  L83():
    p5 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    p6 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p7 = prom<V +>{
      tz13 = ld tz;
      tz14 = force? tz13;
      checkMissing(tz14);
      return tz14;
    };
    r45 = dyn strptime2[, , tz](p5, p6, p7);
    check L84() else D25();
  L86():
    goto L20(i10, r48);
  L88():
    p8 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p9 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p10 = prom<V +>{
      tz15 = ld tz;
      tz16 = force? tz15;
      checkMissing(tz16);
      return tz16;
    };
    r52 = dyn strptime3[, , tz](p8, p9, p10);
    check L89() else D29();
  L104():
    p11 = prom<V +>{
      sym10 = ldf `rep.int`;
      base10 = ldf `rep.int` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r60):
      return r60;
    L2():
      sym11 = ldf length;
      base11 = ldf length in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L3():
      r59 = dyn base10(NA_STR, <lang length(x)>);
      goto L0(r59);
    L1(r62):
      rep_int = ldf `rep.int` in base;
      r64 = dyn rep_int(NA_STR, r62);
      goto L0(r64);
    L4():
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      length1 = ldf length in base;
      r63 = dyn length1(x20);
      goto L1(r63);
    L5():
      r61 = dyn base11(<sym x>);
      goto L1(r61);
    };
    p12 = prom<V +>{
      tz22 = ld tz;
      tz23 = force? tz22;
      checkMissing(tz23);
      return tz23;
    };
    r67 = dyn as_POSIXlt_character[, tz](p11, p12);
    check L105() else D38();
  L107():
    r68 = dyn stop("character string is not in a standard unambiguous format");
    check L108() else D40();
  D21():
    deopt 76 [tz11, r35];
  D25():
    deopt 95 [i2, r45];
  D29():
    deopt 107 [i7, r52];
  D38():
    deopt 140 [r67];
  D40():
    deopt 144 [r68];
  L72():
    st res = r35;
    goto L17();
  L84():
    is_na1 = ldf `is.na` in base;
    r46 = dyn is_na1(r45);
    check L85() else D26();
  L89():
    st res = r52;
    sym9 = ldf nzchar;
    base9 = ldf nzchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L90() else L91();
  L105():
    popenv;
    return r67;
  L108():
    popenv;
    return r68;
  D26():
    deopt 97 [i2, r46];
  L23(i15, r54):
    c8 = `as.logical`(r54);
    if c8 then L94() else L24();
  L85():
    goto L21(i2, r46);
  L90():
    tz17 = ld tz;
    check L92() else D30();
  L91():
    r53 = dyn base9(<sym tz>);
    goto L23(i7, r53);
  D30():
    deopt 111 [i7, tz17];
  L24():
    goto L25(i15);
  L25(i18):
    res4 = ld res;
    check L99() else D35();
  L92():
    tz18 = force? tz17;
    checkMissing(tz18);
    nzchar2 = ldf nzchar in base;
    r55 = dyn nzchar2(tz18);
    check L93() else D31();
  L94():
    tz19 = ld tz;
    check L95() else D32();
  D31():
    deopt 114 [i7, r55];
  D32():
    deopt 115 [i15, tz19];
  D35():
    deopt 125 [i18, res4];
  L93():
    goto L23(i7, r55);
  L95():
    tz20 = force? tz19;
    checkMissing(tz20);
    l3 = ld res;
    attr__2 = ldf `attr<-`;
    check L96() else D33();
  L99():
    res5 = force? res4;
    checkMissing(res5);
    popenv;
    return res5;
  D33():
    deopt 118 [i15, tz20, l3, tz20];
  L96():
    r56 = dyn attr__2(l3, NULL, "tzone", tz20);
    check L97() else D34();
  D34():
    deopt 121 [i15, tz20, r56];
  L97():
    st res = r56;
    goto L25(i15);
  }
}