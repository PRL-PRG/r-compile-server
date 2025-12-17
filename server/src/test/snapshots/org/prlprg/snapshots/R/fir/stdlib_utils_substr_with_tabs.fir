fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2895125775;
    st substr_with_tabs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2895125775(x, start, stop, tabsize) {
  (reg x:*, reg start:*, reg stop:*, reg tabsize:*) -+> V { var x:*, var start:*, var stop:*, var tabsize:*, reg tabsize_isMissing:L, reg tabsize_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg nchar:cls, reg r4:V, reg rep_len:cls, reg r5:V, reg which:cls, reg strsplit:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r7:V, reg c:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg r11:V, reg p1:p(V +), reg r13:V, reg tabs:*, reg tabs1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg i7:I, reg r15:V, reg widths:*, reg widths1:V, reg cumsum:cls, reg r16:V, reg tabsize1:*, reg tabsize2:V, reg cols:*, reg cols1:V, reg c2:L, reg i9:I, reg tabsize4:V, reg cols3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i11:I, reg tabsize6:V, reg dx3:V, reg i12:*, reg i13:V, reg __1:cls, reg r17:V, reg r18:V, reg tabsize7:*, reg tabsize8:V, reg __2:cls, reg r19:V, reg r20:V, reg l1:*, reg c3:L, reg i15:I, reg r22:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i17:I, reg dx5:V, reg i18:*, reg i19:V, reg ___:cls, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg widths2:*, reg widths3:V, reg cumsum1:cls, reg r28:V, reg which1:cls, reg cols4:*, reg cols5:V, reg start1:*, reg start2:V, reg r29:V, reg p2:p(V +), reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg start3:*, reg start4:V, reg length:cls, reg r34:V, reg r35:V, reg c4:L, reg start5:*, reg start6:V, reg c5:L, reg start8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r38:V, reg which2:cls, reg cols6:*, reg cols7:V, reg stop1:*, reg stop2:V, reg r39:V, reg p3:p(V +), reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg stop3:*, reg stop4:V, reg length1:cls, reg r44:V, reg c6:L, reg stop5:*, reg stop6:V, reg c7:L, reg stop8:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg stop11:V, reg r46:V, reg stop12:*, reg stop13:V, reg length2:cls, reg r47:V, reg __4:cls, reg r48:V, reg substr:cls, reg x6:*, reg x7:V, reg p4:p(V +), reg start9:*, reg start10:V, reg p5:p(V +), reg stop14:*, reg stop15:V, reg p6:p(V +), reg r52:V |
    mkenv;
    st x = x;
    st start = start;
    st stop = stop;
    tabsize_isMissing = missing.0(tabsize);
    if tabsize_isMissing then L0(8.0) else L0(tabsize);
  L0(tabsize_orDefault):
    st tabsize = tabsize_orDefault;
    sym = ldf rep_len;
    base = ldf rep_len in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r1):
    st widths = r1;
    which = ldf which;
    check L24() else D3();
  L17():
    sym1 = ldf nchar;
    base1 = ldf nchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L18():
    r = dyn base(1.0, <lang nchar(x)>);
    goto L1(r);
  D3():
    deopt 16 [];
  L2(r3):
    rep_len = ldf rep_len in base;
    r5 = dyn rep_len(1.0, r3);
    check L23() else D2();
  L19():
    x1 = ld x;
    check L21() else D0();
  L20():
    r2 = dyn base1(<sym x>);
    goto L2(r2);
  L24():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r7 = dyn strsplit(p, "");
      c = `is.object`(r7);
      if c then L1() else L2(r7);
    L0(dx1):
      r11 = `==`(dx1, "\t");
      return r11;
    L1():
      dr = tryDispatchBuiltin.1("[[", r7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r9):
      __ = ldf `[[` in base;
      r10 = dyn __(r9, 1.0);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn which(p1);
    check L25() else D4();
  D0():
    deopt 5 [x1];
  D2():
    deopt 13 [r5];
  D4():
    deopt 18 [r13];
  L21():
    x2 = force? x1;
    checkMissing(x2);
    nchar = ldf nchar in base;
    r4 = dyn nchar(x2, "chars", FALSE, NA_LGL);
    check L22() else D1();
  L23():
    goto L1(r5);
  L25():
    st tabs = r13;
    tabs = ld tabs;
    check L26() else D5();
  D1():
    deopt 11 [r4];
  D5():
    deopt 20 [tabs];
  L22():
    goto L2(r4);
  L26():
    tabs1 = force? tabs;
    checkMissing(tabs1);
    s = toForSeq(tabs1);
    l = length(s);
    i = 0;
    goto L3(i);
  L3(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L27() else L7();
  L7():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    sym2 = ldf cumsum;
    base2 = ldf cumsum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L27():
    sym3 = ldf cumsum;
    base3 = ldf cumsum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L4(i7, r15):
    st cols = r15;
    tabsize1 = ld tabsize;
    check L32() else D8();
  L8(r27):
    st cols = r27;
    which1 = ldf which;
    check L48() else D16();
  L28():
    widths = ld widths;
    check L30() else D6();
  L29():
    r14 = dyn base2(<sym widths>);
    goto L4(i2, r14);
  L44():
    widths2 = ld widths;
    check L46() else D14();
  L45():
    r26 = dyn base3(<sym widths>);
    goto L8(r26);
  D6():
    deopt 24 [i2, widths];
  D8():
    deopt 29 [i7, tabsize1];
  D14():
    deopt 53 [widths2];
  D16():
    deopt 59 [];
  L30():
    widths1 = force? widths;
    checkMissing(widths1);
    cumsum = ldf cumsum in base;
    r16 = dyn cumsum(widths1);
    check L31() else D7();
  L32():
    tabsize2 = force? tabsize1;
    checkMissing(tabsize2);
    cols = ld cols;
    check L33() else D9();
  L46():
    widths3 = force? widths2;
    checkMissing(widths3);
    cumsum1 = ldf cumsum in base;
    r28 = dyn cumsum1(widths3);
    check L47() else D15();
  L48():
    p2 = prom<V +>{
      cols4 = ld cols;
      cols5 = force? cols4;
      checkMissing(cols5);
      start1 = ld start;
      start2 = force? start1;
      checkMissing(start2);
      r29 = `>=`(cols5, start2);
      return r29;
    };
    r31 = dyn which1(p2);
    check L49() else D17();
  D7():
    deopt 27 [i2, r16];
  D9():
    deopt 31 [i7, tabsize2, cols];
  D15():
    deopt 56 [r28];
  D17():
    deopt 61 [r31];
  L31():
    goto L4(i2, r16);
  L33():
    cols1 = force? cols;
    checkMissing(cols1);
    c2 = `is.object`(cols1);
    if c2 then L34() else L35(i7, tabsize2, cols1);
  L47():
    goto L8(r28);
  L49():
    st start = r31;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L5(i11, tabsize6, dx3):
    r18 = `-`(dx3, 1.0);
    tabsize7 = ld tabsize;
    check L38() else D11();
  L9(r33):
    r35 = `!`(r33);
    c4 = `as.logical`(r35);
    if c4 then L54() else L10();
  L34():
    dr2 = tryDispatchBuiltin.1("[", cols1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(i7, tabsize2, dr2);
  L35(i9, tabsize4, cols3):
    i12 = ld i;
    check L37() else D10();
  L50():
    start3 = ld start;
    check L52() else D18();
  L51():
    r32 = dyn base4(<sym start>);
    goto L9(r32);
  D10():
    deopt 33 [i9, tabsize4, cols3, i12];
  D11():
    deopt 38 [i11, tabsize6, tabsize7];
  D18():
    deopt 65 [start3];
  L10():
    start5 = ld start;
    check L57() else D20();
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i7, tabsize2, dx2);
  L37():
    i13 = force? i12;
    __1 = ldf `[` in base;
    r17 = dyn __1(cols3, i13);
    goto L5(i9, tabsize4, r17);
  L38():
    tabsize8 = force? tabsize7;
    checkMissing(tabsize8);
    __2 = ldf `%%` in base;
    r19 = dyn __2(r18, tabsize8);
    check L39() else D12();
  L52():
    start4 = force? start3;
    checkMissing(start4);
    length = ldf length in base;
    r34 = dyn length(start4);
    check L53() else D19();
  L54():
    popenv;
    return "";
  D12():
    deopt 41 [i11, tabsize6, r19];
  D19():
    deopt 68 [r34];
  D20():
    deopt 75 [start5];
  L39():
    r20 = `-`(tabsize6, r19);
    l1 = ld widths;
    c3 = `is.object`(l1);
    if c3 then L40() else L41(i11, r20, l1);
  L53():
    goto L9(r34);
  L57():
    start6 = force? start5;
    checkMissing(start6);
    c5 = `is.object`(start6);
    if c5 then L58() else L59(start6);
  L6(i17, dx5):
    st widths = dx5;
    goto L3(i17);
  L12(dx7):
    st start = dx7;
    which2 = ldf which;
    check L61() else D21();
  L40():
    dr4 = tryDispatchBuiltin.0("[<-", l1, r20);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L42() else L41(i11, r20, dr4);
  L41(i15, r22, l3):
    i18 = ld i;
    check L43() else D13();
  L58():
    dr6 = tryDispatchBuiltin.1("[", start6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L60() else L59(dr6);
  L59(start8):
    __3 = ldf `[` in base;
    r38 = dyn __3(start8, 1.0);
    goto L12(r38);
  D13():
    deopt 44 [i15, r22, l3, r20, i18];
  D21():
    deopt 82 [];
  L42():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(i11, dx4);
  L43():
    i19 = force? i18;
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l3, r20, i19);
    goto L6(i15, r25);
  L60():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L61():
    p3 = prom<V +>{
      cols6 = ld cols;
      cols7 = force? cols6;
      checkMissing(cols7);
      stop1 = ld stop;
      stop2 = force? stop1;
      checkMissing(stop2);
      r39 = `<=`(cols7, stop2);
      return r39;
    };
    r41 = dyn which2(p3);
    check L62() else D22();
  D22():
    deopt 84 [r41];
  L62():
    st stop = r41;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L13(r43):
    c6 = `as.logical`(r43);
    if c6 then L67() else L14();
  L63():
    stop3 = ld stop;
    check L65() else D23();
  L64():
    r42 = dyn base5(<sym stop>);
    goto L13(r42);
  D23():
    deopt 88 [stop3];
  L14():
    popenv;
    return "";
  L65():
    stop4 = force? stop3;
    checkMissing(stop4);
    length1 = ldf length in base;
    r44 = dyn length1(stop4);
    check L66() else D24();
  L67():
    stop5 = ld stop;
    check L68() else D25();
  D24():
    deopt 91 [r44];
  D25():
    deopt 92 [stop5];
  L66():
    goto L13(r44);
  L68():
    stop6 = force? stop5;
    checkMissing(stop6);
    c7 = `is.object`(stop6);
    if c7 then L69() else L70(stop6);
  L15(dx9):
    st stop = dx9;
    substr = ldf substr;
    check L76() else D28();
  L69():
    dr8 = tryDispatchBuiltin.1("[", stop6);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L71() else L70(dr8);
  L70(stop8):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  D28():
    deopt 103 [];
  L16(stop11, r46):
    __4 = ldf `[` in base;
    r48 = dyn __4(stop11, r46);
    goto L15(r48);
  L71():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L15(dx8);
  L72():
    stop12 = ld stop;
    check L74() else D26();
  L73():
    r45 = dyn base6(<sym stop>);
    goto L16(stop8, r45);
  L76():
    p4 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p5 = prom<V +>{
      start9 = ld start;
      start10 = force? start9;
      checkMissing(start10);
      return start10;
    };
    p6 = prom<V +>{
      stop14 = ld stop;
      stop15 = force? stop14;
      checkMissing(stop15);
      return stop15;
    };
    r52 = dyn substr(p4, p5, p6);
    check L77() else D29();
  D26():
    deopt 96 [stop8, stop12];
  D29():
    deopt 107 [r52];
  L74():
    stop13 = force? stop12;
    checkMissing(stop13);
    length2 = ldf length in base;
    r47 = dyn length2(stop13);
    check L75() else D27();
  L77():
    popenv;
    return r52;
  D27():
    deopt 99 [stop8, r47];
  L75():
    goto L16(stop8, r47);
  }
}