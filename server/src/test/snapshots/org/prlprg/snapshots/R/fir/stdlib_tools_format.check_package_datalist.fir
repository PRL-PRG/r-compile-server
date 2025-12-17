fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_package_datalist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg character:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg length:cls, reg r7:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg fmt:cls, reg y:*, reg y1:V, reg p:p(V +), reg r11:V, reg c2:cls, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r16:V, reg length1:cls, reg r17:V, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg fmt1:cls, reg y2:*, reg y3:V, reg p1:p(V +), reg r21:V, reg c5:cls, reg r22:V, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg x9:*, reg x10:V, reg c6:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r26:V, reg length2:cls, reg r27:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg fmt2:cls, reg y4:*, reg y5:V, reg p2:p(V +), reg r31:V, reg c8:cls, reg r32:V, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg x13:*, reg x14:V, reg c9:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r36:V, reg length3:cls, reg r37:V, reg c10:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg fmt3:cls, reg y6:*, reg y7:V, reg p3:p(V +), reg r41:V, reg c11:cls, reg r42:V, reg r43:V, reg c12:cls, reg r44:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner1236783023;
    st fmt = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r2):
    popenv;
    return r2;
  L17():
    character = ldf character;
    check L19() else D0();
  L18():
    r1 = dyn base(<lang character()>, <lang if(length(`<-`(y, `$`(x, n12))), c("Data files in 'datalist' not in 'data' directory:", fmt(y)))>, <lang if(length(`<-`(y, `$`(x, n21))), c("Data files in 'data' directory not in 'datalist':", fmt(y)))>, <lang if(length(`<-`(y, `$`(x, e12))), c("Data objects in 'datalist' not in 'data' directory:", fmt(y)))>, <lang if(length(`<-`(y, `$`(x, e21))), c("Data objects in 'data' directory not in 'datalist':", fmt(y)))>);
    goto L0(r1);
  D0():
    deopt 6 [];
  L19():
    r3 = dyn character();
    check L20() else D1();
  D1():
    deopt 7 [r3];
  L20():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L29() else L2();
  L21():
    x1 = ld x;
    check L23() else D2();
  L22():
    r4 = dyn base1(<lang `<-`(y, `$`(x, n12))>);
    goto L1(r4);
  D2():
    deopt 10 [x1];
  L2():
    goto L4(NULL);
  L4(r13):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L23():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L25() else L26(x2);
  L29():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L3(r9):
    goto L4(r9);
  L5(r15):
    c4 = `as.logical`(r15);
    if c4 then L44() else L6();
  L24(dx1):
    st y = dx1;
    length = ldf length in base;
    r7 = dyn length(dx1);
    check L28() else D3();
  L25():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(x4):
    r6 = `$`(x4, <sym n12>);
    goto L24(r6);
  L30():
    fmt = ldf fmt;
    check L32() else D4();
  L31():
    r8 = dyn base2("Data files in 'datalist' not in 'data' directory:", <lang fmt(y)>);
    goto L3(r8);
  L36():
    x5 = ld x;
    check L38() else D7();
  L37():
    r14 = dyn base3(<lang `<-`(y, `$`(x, n21))>);
    goto L5(r14);
  D3():
    deopt 15 [r7];
  D4():
    deopt 20 [];
  D7():
    deopt 29 [x5];
  L6():
    goto L8(NULL);
  L8(r23):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L28():
    goto L1(r7);
  L32():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r11 = dyn fmt(p);
    check L33() else D5();
  L38():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L40() else L41(x6);
  L44():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  D5():
    deopt 22 [r11];
  L7(r19):
    goto L8(r19);
  L9(r25):
    c7 = `as.logical`(r25);
    if c7 then L59() else L10();
  L33():
    c2 = ldf c in base;
    r12 = dyn c2("Data files in 'datalist' not in 'data' directory:", r11);
    check L34() else D6();
  L39(dx3):
    st y = dx3;
    length1 = ldf length in base;
    r17 = dyn length1(dx3);
    check L43() else D8();
  L40():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dr2);
  L41(x8):
    r16 = `$`(x8, <sym n21>);
    goto L39(r16);
  L45():
    fmt1 = ldf fmt;
    check L47() else D9();
  L46():
    r18 = dyn base4("Data files in 'data' directory not in 'datalist':", <lang fmt(y)>);
    goto L7(r18);
  L51():
    x9 = ld x;
    check L53() else D12();
  L52():
    r24 = dyn base5(<lang `<-`(y, `$`(x, e12))>);
    goto L9(r24);
  D6():
    deopt 24 [r12];
  D8():
    deopt 34 [r17];
  D9():
    deopt 39 [];
  D12():
    deopt 48 [x9];
  L10():
    goto L12(NULL);
  L12(r33):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L66() else L67();
  L34():
    goto L3(r12);
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(dx2);
  L43():
    goto L5(r17);
  L47():
    p1 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r21 = dyn fmt1(p1);
    check L48() else D10();
  L53():
    x10 = force? x9;
    checkMissing(x10);
    c6 = `is.object`(x10);
    if c6 then L55() else L56(x10);
  L59():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L60() else L61();
  D10():
    deopt 41 [r21];
  L11(r29):
    goto L12(r29);
  L13(r35):
    c10 = `as.logical`(r35);
    if c10 then L74() else L14();
  L48():
    c5 = ldf c in base;
    r22 = dyn c5("Data files in 'data' directory not in 'datalist':", r21);
    check L49() else D11();
  L54(dx5):
    st y = dx5;
    length2 = ldf length in base;
    r27 = dyn length2(dx5);
    check L58() else D13();
  L55():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L57() else L56(dr4);
  L56(x12):
    r26 = `$`(x12, <sym e12>);
    goto L54(r26);
  L60():
    fmt2 = ldf fmt;
    check L62() else D14();
  L61():
    r28 = dyn base6("Data objects in 'datalist' not in 'data' directory:", <lang fmt(y)>);
    goto L11(r28);
  L66():
    x13 = ld x;
    check L68() else D17();
  L67():
    r34 = dyn base7(<lang `<-`(y, `$`(x, e21))>);
    goto L13(r34);
  D11():
    deopt 43 [r22];
  D13():
    deopt 53 [r27];
  D14():
    deopt 58 [];
  D17():
    deopt 67 [x13];
  L14():
    goto L16(NULL);
  L16(r43):
    c12 = ldf c in base;
    r44 = dyn c12(r3, r13, r23, r33, r43);
    check L81() else D22();
  L49():
    goto L7(r22);
  L57():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L54(dx4);
  L58():
    goto L9(r27);
  L62():
    p2 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r31 = dyn fmt2(p2);
    check L63() else D15();
  L68():
    x14 = force? x13;
    checkMissing(x14);
    c9 = `is.object`(x14);
    if c9 then L70() else L71(x14);
  L74():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L75() else L76();
  D15():
    deopt 60 [r31];
  D22():
    deopt 85 [r44];
  L15(r39):
    goto L16(r39);
  L63():
    c8 = ldf c in base;
    r32 = dyn c8("Data objects in 'datalist' not in 'data' directory:", r31);
    check L64() else D16();
  L69(dx7):
    st y = dx7;
    length3 = ldf length in base;
    r37 = dyn length3(dx7);
    check L73() else D18();
  L70():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L72() else L71(dr6);
  L71(x16):
    r36 = `$`(x16, <sym e21>);
    goto L69(r36);
  L75():
    fmt3 = ldf fmt;
    check L77() else D19();
  L76():
    r38 = dyn base8("Data objects in 'data' directory not in 'datalist':", <lang fmt(y)>);
    goto L15(r38);
  L81():
    goto L0(r44);
  D16():
    deopt 62 [r32];
  D18():
    deopt 72 [r37];
  D19():
    deopt 77 [];
  L64():
    goto L11(r32);
  L72():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L69(dx6);
  L73():
    goto L13(r37);
  L77():
    p3 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r41 = dyn fmt3(p3);
    check L78() else D20();
  D20():
    deopt 79 [r41];
  L78():
    c11 = ldf c in base;
    r42 = dyn c11("Data objects in 'data' directory not in 'datalist':", r41);
    check L79() else D21();
  D21():
    deopt 81 [r42];
  L79():
    goto L15(r42);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg _strwrap22:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st s = s;
    _strwrap22 = ldf `.strwrap22`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn _strwrap22(p, " ");
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}