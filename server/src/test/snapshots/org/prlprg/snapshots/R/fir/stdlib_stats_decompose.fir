fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg decompose:cls, reg co2:*, reg co3:V, reg p1:p(V +), reg r6:V, reg m:*, reg m1:V, reg c:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg r7:V, reg plot:cls, reg m4:*, reg m5:V, reg p2:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg ts:cls, reg x:*, reg x1:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c2:cls, reg r16:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg c3:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg decompose1:cls, reg x2:*, reg x3:V, reg p6:p(V +), reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg round:cls, reg r27:V |
    mkenv;
    r = clos inner1170828029;
    st decompose = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    decompose = ldf decompose;
    check L7() else D2();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    p1 = prom<V +>{
      co2 = ld co2;
      co3 = force? co2;
      checkMissing(co3);
      return co3;
    };
    r6 = dyn decompose(p1);
    check L8() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L6():
    goto L0();
  L8():
    st m = r6;
    m = ld m;
    check L9() else D4();
  D4():
    deopt 13 [m];
  L9():
    m1 = force? m;
    checkMissing(m1);
    c = `is.object`(m1);
    if c then L11() else L12(m1);
  L10():
    plot = ldf plot;
    check L14() else D5();
  L11():
    dr = tryDispatchBuiltin.1("$", m1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(m3):
    r7 = `$`(m3, <sym figure>);
    goto L10();
  D5():
    deopt 17 [];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10();
  L14():
    p2 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    r9 = dyn plot(p2);
    check L15() else D6();
  D6():
    deopt 19 [r9];
  L15():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L1(r11):
    st x = r11;
    ts = ldf ts;
    check L19() else D8();
  L16():
    c1 = ldf c in base;
    r12 = dyn c1(-50.0, 175.0, 149.0, 214.0, 247.0, 237.0, 225.0, 329.0, 729.0, 809.0, 530.0, 489.0, 540.0, 457.0, 195.0, 176.0, 337.0, 239.0, 128.0, 102.0, 232.0, 429.0, 3.0, 98.0, 43.0, -141.0, -77.0, -13.0, 125.0, 361.0, -45.0, 184.0);
    check L18() else D7();
  L17():
    r10 = dyn base1(<lang `-`(50.0)>, 175.0, 149.0, 214.0, 247.0, 237.0, 225.0, 329.0, 729.0, 809.0, 530.0, 489.0, 540.0, 457.0, 195.0, 176.0, 337.0, 239.0, 128.0, 102.0, 232.0, 429.0, 3.0, 98.0, 43.0, <lang `-`(141.0)>, <lang `-`(77.0)>, <lang `-`(13.0)>, 125.0, 361.0, <lang `-`(45.0)>, 184.0);
    goto L1(r10);
  D7():
    deopt 60 [r12];
  D8():
    deopt 63 [];
  L18():
    goto L1(r12);
  L19():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c2 = ldf c in base;
      r16 = dyn c2(1951.0, 1.0);
      goto L0(r16);
    L2():
      r14 = dyn base2(1951.0, 1.0);
      goto L0(r14);
    };
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c3 = ldf c in base;
      r20 = dyn c3(1958.0, 4.0);
      goto L0(r20);
    L2():
      r18 = dyn base3(1958.0, 4.0);
      goto L0(r18);
    };
    r22 = dyn ts[, start, end, frequency](p3, p4, p5, 4.0);
    check L20() else D9();
  D9():
    deopt 71 [r22];
  L20():
    st x = r22;
    decompose1 = ldf decompose;
    check L21() else D10();
  D10():
    deopt 74 [];
  L21():
    p6 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r24 = dyn decompose1(p6);
    check L22() else D11();
  D11():
    deopt 76 [r24];
  L22():
    st m = r24;
    sym4 = ldf round;
    base4 = ldf round in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L23() else L24();
  L2(r26):
    popenv;
    return r26;
  L23():
    round = ldf round in base;
    r27 = dyn round(<lang `/`(`$`(decompose(x), figure), 10.0)>, 2.0);
    goto L2(r27);
  L24():
    r25 = dyn base4(<lang `/`(`$`(decompose(x), figure), 10.0)>, 2.0);
    goto L2(r25);
  }
}
fun inner1170828029(x, type, filter) {
  (reg x:*, reg type:*, reg filter:*) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var filter:*, reg filter_isMissing:L, reg filter_orDefault:*, reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg length:cls, reg r8:V, reg frequency:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r10:V, reg f:*, reg f1:V, reg r11:V, reg c1:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg c6:L, reg r13:V, reg na_omit:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r15:V, reg length1:cls, reg r16:V, reg f2:*, reg f3:V, reg r17:V, reg r18:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg filter1:*, reg filter2:V, reg c11:V, reg c12:L, reg f4:*, reg f5:V, reg __:cls, reg r23:V, reg r24:V, reg c13:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg f6:*, reg f7:V, reg r29:V, reg rep_len:cls, reg r30:V, reg c14:cls, reg r31:V, reg f8:*, reg f9:V, reg r32:V, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg f10:*, reg f11:V, reg rep_len1:cls, reg r36:V, reg f12:*, reg f13:V, reg r37:V, reg filter3:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg filter4:*, reg filter5:V, reg p5:p(V +), reg r41:V, reg type3:*, reg type4:V, reg r42:V, reg c15:L, reg x9:*, reg x10:V, reg trend:*, reg trend1:V, reg r43:V, reg r44:V, reg x11:*, reg x12:V, reg trend2:*, reg trend3:V, reg r45:V, reg l:*, reg l1:V, reg f14:*, reg f15:V, reg ___:cls, reg r46:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg l2:*, reg l3:V, reg f16:*, reg f17:V, reg seq_int:cls, reg r49:V, reg r50:V, reg numeric:cls, reg f18:*, reg f19:V, reg p6:p(V +), reg r52:V, reg f20:*, reg f21:V, reg r53:V, reg s:V, reg l4:I, reg i:I, reg i1:I, reg i2:I, reg c16:L, reg x13:V, reg mean:cls, reg season:*, reg season1:V, reg c17:L, reg season3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg index:*, reg index1:V, reg i5:*, reg i6:V, reg r54:V, reg __1:cls, reg r55:V, reg p7:p(V +), reg r57:V, reg l5:*, reg c18:L, reg i8:I, reg r59:V, reg l7:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ___1:cls, reg r62:V, reg type5:*, reg type6:V, reg r63:V, reg c19:L, reg figure:*, reg figure1:V, reg mean1:cls, reg figure2:*, reg figure3:V, reg p8:p(V +), reg r65:V, reg r66:V, reg r67:V, reg figure4:*, reg figure5:V, reg mean2:cls, reg figure6:*, reg figure7:V, reg p9:p(V +), reg r69:V, reg r70:V, reg ts:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r71:V, reg r72:V, reg rep:cls, reg r73:V, reg c20:L, reg r75:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r78:V, reg r79:V, reg r80:V, reg l8:*, reg l9:V, reg r81:I, reg __2:cls, reg r82:V, reg p10:p(V +), reg start:cls, reg x14:*, reg x15:V, reg p11:p(V +), reg r85:V, reg p12:p(V +), reg f22:*, reg f23:V, reg p13:p(V +), reg r88:V, reg structure:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r89:V, reg r90:V, reg x16:*, reg x17:V, reg seasonal:*, reg seasonal1:V, reg trend4:*, reg trend5:V, reg type7:*, reg type8:V, reg r91:V, reg c21:L, reg x18:*, reg x19:V, reg seasonal2:*, reg seasonal3:V, reg r92:V, reg trend6:*, reg trend7:V, reg r93:V, reg r94:V, reg x20:*, reg x21:V, reg seasonal4:*, reg seasonal5:V, reg r95:V, reg trend8:*, reg trend9:V, reg r96:V, reg figure8:*, reg figure9:V, reg type9:*, reg type10:V, reg list:cls, reg r97:V, reg p14:p(V +), reg r99:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("additive", "multiplicative");
      goto L0(r2);
    L2():
      r = dyn base("additive", "multiplicative");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    filter_isMissing = missing.0(filter);
    if filter_isMissing then L2(NULL) else L2(filter);
  L2(filter_orDefault):
    st filter = filter_orDefault;
    match_arg = ldf `match.arg`;
    check L24() else D0();
  D0():
    deopt 1 [];
  L24():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L25() else D1();
  D1():
    deopt 3 [r5];
  L25():
    st type = r5;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L3(r7):
    st l = r7;
    frequency = ldf frequency;
    check L30() else D4();
  L26():
    x1 = ld x;
    check L28() else D2();
  L27():
    r6 = dyn base1(<sym x>);
    goto L3(r6);
  D2():
    deopt 7 [x1];
  D4():
    deopt 13 [];
  L28():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r8 = dyn length(x2);
    check L29() else D3();
  L30():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r10 = dyn frequency(p2);
    check L31() else D5();
  D3():
    deopt 10 [r8];
  D5():
    deopt 15 [r10];
  L29():
    goto L3(r8);
  L31():
    st f = r10;
    f = ld f;
    check L32() else D6();
  D6():
    deopt 17 [f];
  L32():
    f1 = force? f;
    checkMissing(f1);
    r11 = `<=`(f1, 1.0);
    c1 = `as.logical`(r11);
    if c1 then L4(c1) else L33();
  L4(c2):
    c10 = `as.logical`(c2);
    if c10 then L41() else L6();
  L33():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L5(c6, r13):
    f2 = ld f;
    check L39() else D10();
  L6():
    goto L7();
  L7():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L34():
    na_omit = ldf `na.omit`;
    check L36() else D7();
  L35():
    r12 = dyn base2(<lang na.omit(x)>);
    goto L5(c1, r12);
  L41():
    stop = ldf stop;
    check L42() else D11();
  D7():
    deopt 24 [c1];
  D10():
    deopt 29 [c6, r13, 2.0, f2];
  D11():
    deopt 35 [];
  L8(r22):
    c12 = `as.logical`(r22);
    if c12 then L48() else L9();
  L36():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r15 = dyn na_omit(p3);
    check L37() else D8();
  L39():
    f3 = force? f2;
    checkMissing(f3);
    r17 = `*`(2.0, f3);
    r18 = `<`(r13, r17);
    c7 = `as.logical`(r18);
    c8 = `||`(c6, c7);
    goto L4(c8);
  L42():
    r19 = dyn stop("time series has no or less than 2 periods");
    check L43() else D12();
  L45():
    filter1 = ld filter;
    check L47() else D13();
  L46():
    r21 = dyn base3(<sym filter>);
    goto L8(r21);
  D8():
    deopt 26 [c1, r15];
  D12():
    deopt 37 [r19];
  D13():
    deopt 41 [filter1];
  L9():
    goto L15();
  L15():
    filter3 = ldf filter;
    check L67() else D23();
  L37():
    length1 = ldf length in base;
    r16 = dyn length1(r15);
    check L38() else D9();
  L43():
    goto L7();
  L47():
    filter2 = force? filter1;
    checkMissing(filter2);
    c11 = `==`(filter2, NULL);
    goto L8(c11);
  L48():
    f4 = ld f;
    check L49() else D14();
  D9():
    deopt 28 [c1, r16];
  D14():
    deopt 45 [f4];
  D23():
    deopt 81 [];
  L38():
    goto L5(c1, r16);
  L49():
    f5 = force? f4;
    checkMissing(f5);
    __ = ldf `%%` in base;
    r23 = dyn __(f5, 2.0);
    check L50() else D15();
  L67():
    p4 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p5 = prom<V +>{
      filter4 = ld filter;
      filter5 = force? filter4;
      checkMissing(filter5);
      return filter5;
    };
    r41 = dyn filter3(p4, p5);
    check L68() else D24();
  D15():
    deopt 49 [r23];
  D24():
    deopt 84 [r41];
  L50():
    r24 = `!`(r23);
    c13 = `as.logical`(r24);
    if c13 then L51() else L10();
  L68():
    st trend = r41;
    type3 = ld type;
    check L69() else D25();
  D25():
    deopt 86 [type3];
  L10():
    sym6 = ldf rep_len;
    base6 = ldf rep_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L13(r33):
    st filter = r33;
    goto L15();
  L51():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L69():
    type4 = force? type3;
    checkMissing(type4);
    r42 = `==`(type4, "additive");
    c15 = `as.logical`(r42);
    if c15 then L70() else L16();
  L11(r26):
    f8 = ld f;
    check L59() else D19();
  L14(r35):
    f12 = ld f;
    check L65() else D22();
  L16():
    x11 = ld x;
    check L74() else D28();
  L17(r44):
    st season = r44;
    l = ld l;
    check L76() else D30();
  L52():
    sym5 = ldf rep_len;
    base5 = ldf rep_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L53():
    r25 = dyn base4(0.5, <lang rep_len(1.0, `-`(f, 1.0))>, 0.5);
    goto L11(r25);
  L61():
    f10 = ld f;
    check L63() else D20();
  L62():
    r34 = dyn base6(1.0, <sym f>);
    goto L14(r34);
  L70():
    x9 = ld x;
    check L71() else D26();
  D19():
    deopt 65 [r26, f8];
  D20():
    deopt 71 [f10];
  D22():
    deopt 74 [r35, f12];
  D26():
    deopt 90 [x9];
  D28():
    deopt 94 [x11];
  D30():
    deopt 100 [l];
  L12(r28):
    c14 = ldf c in base;
    r31 = dyn c14(0.5, r28, 0.5);
    check L58() else D18();
  L54():
    f6 = ld f;
    check L56() else D16();
  L55():
    r27 = dyn base5(1.0, <lang `-`(f, 1.0)>);
    goto L12(r27);
  L59():
    f9 = force? f8;
    checkMissing(f9);
    r32 = `/`(r26, f9);
    goto L13(r32);
  L63():
    f11 = force? f10;
    checkMissing(f11);
    rep_len1 = ldf rep_len in base;
    r36 = dyn rep_len1(1.0, f11);
    check L64() else D21();
  L65():
    f13 = force? f12;
    checkMissing(f13);
    r37 = `/`(r35, f13);
    goto L13(r37);
  L71():
    x10 = force? x9;
    checkMissing(x10);
    trend = ld trend;
    check L72() else D27();
  L74():
    x12 = force? x11;
    checkMissing(x12);
    trend2 = ld trend;
    check L75() else D29();
  L76():
    l1 = force? l;
    checkMissing(l1);
    f14 = ld f;
    check L77() else D31();
  D16():
    deopt 57 [f6];
  D18():
    deopt 65 [r31];
  D21():
    deopt 74 [r36];
  D27():
    deopt 91 [x10, trend];
  D29():
    deopt 95 [x12, trend2];
  D31():
    deopt 102 [f14];
  L56():
    f7 = force? f6;
    checkMissing(f7);
    r29 = `-`(f7, 1.0);
    rep_len = ldf rep_len in base;
    r30 = dyn rep_len(1.0, r29);
    check L57() else D17();
  L58():
    goto L11(r31);
  L64():
    goto L14(r36);
  L72():
    trend1 = force? trend;
    checkMissing(trend1);
    r43 = `-`(x10, trend1);
    goto L17(r43);
  L75():
    trend3 = force? trend2;
    checkMissing(trend3);
    r45 = `/`(x12, trend3);
    goto L17(r45);
  L77():
    f15 = force? f14;
    checkMissing(f15);
    ___ = ldf `%/%` in base;
    r46 = dyn ___(l1, f15);
    check L78() else D32();
  D17():
    deopt 62 [r30];
  D32():
    deopt 105 [r46];
  L57():
    goto L12(r30);
  L78():
    st periods = r46;
    sym7 = ldf `seq.int`;
    base7 = ldf `seq.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  L18(r48):
    r50 = `-`(r48, 1);
    st index = r50;
    numeric = ldf numeric;
    check L84() else D36();
  L79():
    l2 = ld l;
    check L81() else D33();
  L80():
    r47 = dyn base7[, , by](1, <sym l>, <sym f>);
    goto L18(r47);
  D33():
    deopt 110 [l2];
  D36():
    deopt 121 [];
  L81():
    l3 = force? l2;
    checkMissing(l3);
    f16 = ld f;
    check L82() else D34();
  L84():
    p6 = prom<V +>{
      f18 = ld f;
      f19 = force? f18;
      checkMissing(f19);
      return f19;
    };
    r52 = dyn numeric(p6);
    check L85() else D37();
  D34():
    deopt 112 [f16];
  D37():
    deopt 123 [r52];
  L82():
    f17 = force? f16;
    checkMissing(f17);
    seq_int = ldf `seq.int` in base;
    r49 = dyn seq_int(1, l3, f17);
    check L83() else D35();
  L85():
    st figure = r52;
    f20 = ld f;
    check L86() else D38();
  D35():
    deopt 116 [r49];
  D38():
    deopt 126 [1, f20];
  L83():
    goto L18(r49);
  L86():
    f21 = force? f20;
    checkMissing(f21);
    r53 = `:`(1, f21);
    s = toForSeq(r53);
    l4 = length(s);
    i = 0;
    goto L19(i);
  L19(i1):
    i2 = `+`.1(i1, 1);
    c16 = `<`.1(l4, i2);
    if c16 then L87() else L21();
  L21():
    x13 = `[[`(s, i2, NULL, TRUE);
    st i = x13;
    mean = ldf mean;
    check L88() else D39();
  L87():
    type5 = ld type;
    check L94() else D42();
  D39():
    deopt 130 [i2];
  D42():
    deopt 143 [type5];
  L88():
    p7 = prom<V +>{
      season = ld season;
      season1 = force? season;
      checkMissing(season1);
      c17 = `is.object`(season1);
      if c17 then L1() else L2(season1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", season1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(season3):
      index = ld index;
      index1 = force? index;
      checkMissing(index1);
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      r54 = `+`(index1, i6);
      __1 = ldf `[` in base;
      r55 = dyn __1(season3, r54);
      goto L0(r55);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r57 = dyn mean[, `na.rm`](p7, TRUE);
    check L89() else D40();
  L94():
    type6 = force? type5;
    checkMissing(type6);
    r63 = `==`(type6, "additive");
    c19 = `as.logical`(r63);
    if c19 then L95() else L22();
  D40():
    deopt 134 [i2, r57];
  L22():
    figure4 = ld figure;
    check L100() else D46();
  L23(r67):
    st figure = r67;
    ts = ldf ts;
    check L103() else D49();
  L89():
    l5 = ld figure;
    c18 = `is.object`(l5);
    if c18 then L90() else L91(i2, r57, l5);
  L95():
    figure = ld figure;
    check L96() else D43();
  D43():
    deopt 147 [figure];
  D46():
    deopt 153 [figure4];
  D49():
    deopt 161 [];
  L20(i10, dx3):
    st figure = dx3;
    goto L19(i10);
  L90():
    dr2 = tryDispatchBuiltin.0("[<-", l5, r57);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L92() else L91(i2, r57, dr2);
  L91(i8, r59, l7):
    i11 = ld i;
    check L93() else D41();
  L96():
    figure1 = force? figure;
    checkMissing(figure1);
    mean1 = ldf mean;
    check L97() else D44();
  L100():
    figure5 = force? figure4;
    checkMissing(figure5);
    mean2 = ldf mean;
    check L101() else D47();
  L103():
    p10 = prom<V +>{
      sym8 = ldf rep;
      base8 = ldf rep in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L3() else L4();
    L0(r72):
      c20 = `is.object`(r72);
      if c20 then L5() else L6(r72);
    L3():
      rep = ldf rep in base;
      r73 = dyn rep(<sym figure>, <lang `+`(periods, 1.0)>);
      goto L0(r73);
    L4():
      r71 = dyn base8(<sym figure>, <lang `+`(periods, 1.0)>);
      goto L0(r71);
    L1(dx5):
      return dx5;
    L5():
      dr4 = tryDispatchBuiltin.1("[", r72);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(r75):
      sym9 = ldf seq_len;
      base9 = ldf seq_len in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L8() else L9();
    L2(r79, r80):
      __2 = ldf `[` in base;
      r82 = dyn __2(r79, r80);
      goto L1(r82);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    L8():
      l8 = ld l;
      l9 = force? l8;
      checkMissing(l9);
      r81 = seq_len(l9);
      goto L2(r75, r81);
    L9():
      r78 = dyn base9(<sym l>);
      goto L2(r75, r78);
    };
    p12 = prom<V +>{
      start = ldf start;
      p11 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r85 = dyn start(p11);
      return r85;
    };
    p13 = prom<V +>{
      f22 = ld f;
      f23 = force? f22;
      checkMissing(f23);
      return f23;
    };
    r88 = dyn ts[, start, frequency](p10, p12, p13);
    check L104() else D50();
  D41():
    deopt 136 [i8, r59, l7, r57, i11];
  D44():
    deopt 149 [figure1];
  D47():
    deopt 155 [figure5];
  D50():
    deopt 167 [r88];
  L92():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(i2, dx2);
  L93():
    i12 = force? i11;
    ___1 = ldf `[<-` in base;
    r62 = dyn ___1(l7, r57, i12);
    goto L20(i8, r62);
  L97():
    p8 = prom<V +>{
      figure2 = ld figure;
      figure3 = force? figure2;
      checkMissing(figure3);
      return figure3;
    };
    r65 = dyn mean1(p8);
    check L98() else D45();
  L101():
    p9 = prom<V +>{
      figure6 = ld figure;
      figure7 = force? figure6;
      checkMissing(figure7);
      return figure7;
    };
    r69 = dyn mean2(p9);
    check L102() else D48();
  L104():
    st seasonal = r88;
    structure = ldf structure;
    check L105() else D51();
  D45():
    deopt 151 [figure1, r65];
  D48():
    deopt 157 [figure5, r69];
  D51():
    deopt 170 [];
  L98():
    r66 = `-`(figure1, r65);
    goto L23(r66);
  L102():
    r70 = `/`(figure5, r69);
    goto L23(r70);
  L105():
    p14 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L3() else L4();
    L0(r90):
      return r90;
    L3():
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      seasonal = ld seasonal;
      seasonal1 = force? seasonal;
      checkMissing(seasonal1);
      trend4 = ld trend;
      trend5 = force? trend4;
      checkMissing(trend5);
      type7 = ld type;
      type8 = force? type7;
      checkMissing(type8);
      r91 = `==`(type8, "additive");
      c21 = `as.logical`(r91);
      if c21 then L5() else L1();
    L4():
      r89 = dyn base10[x, seasonal, trend, random, figure, type](<sym x>, <sym seasonal>, <sym trend>, <lang if(`==`(type, "additive"), `-`(`-`(x, seasonal), trend), `/`(`/`(x, seasonal), trend))>, <sym figure>, <sym type>);
      goto L0(r89);
    L1():
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      seasonal4 = ld seasonal;
      seasonal5 = force? seasonal4;
      checkMissing(seasonal5);
      r95 = `/`(x21, seasonal5);
      trend8 = ld trend;
      trend9 = force? trend8;
      checkMissing(trend9);
      r96 = `/`(r95, trend9);
      goto L2(r96);
    L2(r94):
      figure8 = ld figure;
      figure9 = force? figure8;
      checkMissing(figure9);
      type9 = ld type;
      type10 = force? type9;
      checkMissing(type10);
      list = ldf list in base;
      r97 = dyn list(x17, seasonal1, trend5, r94, figure9, type10);
      goto L0(r97);
    L5():
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      seasonal2 = ld seasonal;
      seasonal3 = force? seasonal2;
      checkMissing(seasonal3);
      r92 = `-`(x19, seasonal3);
      trend6 = ld trend;
      trend7 = force? trend6;
      checkMissing(trend7);
      r93 = `-`(r92, trend7);
      goto L2(r93);
    };
    r99 = dyn structure[, class](p14, "decomposed.ts");
    check L106() else D52();
  D52():
    deopt 174 [r99];
  L106():
    popenv;
    return r99;
  }
}