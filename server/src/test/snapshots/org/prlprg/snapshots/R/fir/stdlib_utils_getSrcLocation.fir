fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1630886398;
    st getSrcLocation = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1630886398(x, which, first) {
  (reg x:*, reg which:*, reg first:*) -+> V { var x:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var first:*, reg first_isMissing:L, reg first_orDefault:*, reg getSrcref:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg srcref:*, reg srcref1:V, reg c1:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg srcref2:*, reg srcref3:V, reg is_list:cls, reg r12:V, reg c3:L, reg sapply:cls, reg srcref4:*, reg srcref5:V, reg p2:p(V +), reg getSrcLocation:*, reg getSrcLocation1:V, reg p3:p(V +), reg which1:*, reg which2:V, reg p4:p(V +), reg first1:*, reg first2:V, reg p5:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg srcref6:*, reg srcref7:V, reg length:cls, reg r20:V, reg r21:V, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg srcref8:*, reg srcref9:V, reg srcref10:*, reg srcref11:V, reg c5:L, reg srcref13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg srcref16:V, reg r25:V, reg c6:cls, reg r26:V, reg __:cls, reg r27:V, reg c7:cls, reg r28:V, reg match_arg:cls, reg which3:*, reg which4:V, reg p6:p(V +), reg r31:V, reg first3:*, reg first4:V, reg c8:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg c9:cls, reg r34:V, reg c10:L, reg r36:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg which5:*, reg which6:V, reg __1:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg c11:cls, reg r40:V, reg c12:L, reg r42:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg which7:*, reg which8:V, reg __2:cls, reg r43:V, reg srcref17:*, reg srcref18:V, reg c13:L, reg srcref20:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg index:*, reg index1:V, reg __3:cls, reg r44:V |
    mkenv;
    st x = x;
    which_isMissing = missing.0(which);
    if which_isMissing then L0() else L1(which);
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
      r2 = dyn c("line", "column", "byte", "parse");
      goto L0(r2);
    L2():
      r = dyn base("line", "column", "byte", "parse");
      goto L0(r);
    };
    goto L1(p);
  L1(which_orDefault):
    st which = which_orDefault;
    first_isMissing = missing.0(first);
    if first_isMissing then L2(TRUE) else L2(first);
  L2(first_orDefault):
    st first = first_orDefault;
    getSrcref = ldf getSrcref;
    check L21() else D0();
  D0():
    deopt 1 [];
  L21():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn getSrcref(p1);
    check L22() else D1();
  D1():
    deopt 3 [r5];
  L22():
    st srcref = r5;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L3(r7):
    c2 = `as.logical`(r7);
    if c2 then L26() else L4();
  L23():
    srcref = ld srcref;
    check L25() else D2();
  L24():
    r6 = dyn base1(<sym srcref>);
    goto L3(r6);
  D2():
    deopt 6 [srcref];
  L4():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L25():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    c1 = `==`(srcref1, NULL);
    goto L3(c1);
  L26():
    popenv;
    return NULL;
  L6(r11):
    c3 = `as.logical`(r11);
    if c3 then L33() else L7();
  L29():
    srcref2 = ld srcref;
    check L31() else D3();
  L30():
    r10 = dyn base2(<sym srcref>);
    goto L6(r10);
  D3():
    deopt 16 [srcref2];
  L7():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L31():
    srcref3 = force? srcref2;
    checkMissing(srcref3);
    is_list = ldf `is.list` in base;
    r12 = dyn is_list(srcref3);
    check L32() else D4();
  L33():
    sapply = ldf sapply;
    check L34() else D5();
  D4():
    deopt 19 [r12];
  D5():
    deopt 21 [];
  L8(r19):
    r21 = `==`(r19, 6);
    c4 = `as.logical`(r21);
    if c4 then L41() else L9();
  L32():
    goto L6(r12);
  L34():
    p2 = prom<V +>{
      srcref4 = ld srcref;
      srcref5 = force? srcref4;
      checkMissing(srcref5);
      return srcref5;
    };
    p3 = prom<V +>{
      getSrcLocation = ld getSrcLocation;
      getSrcLocation1 = force? getSrcLocation;
      checkMissing(getSrcLocation1);
      return getSrcLocation1;
    };
    p4 = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      return which2;
    };
    p5 = prom<V +>{
      first1 = ld first;
      first2 = force? first1;
      checkMissing(first2);
      return first2;
    };
    r17 = dyn sapply(p2, p3, p4, p5);
    check L35() else D6();
  L37():
    srcref6 = ld srcref;
    check L39() else D7();
  L38():
    r18 = dyn base3(<sym srcref>);
    goto L8(r18);
  D6():
    deopt 26 [r17];
  D7():
    deopt 29 [srcref6];
  L9():
    goto L13();
  L13():
    match_arg = ldf `match.arg`;
    check L54() else D13();
  L35():
    popenv;
    return r17;
  L39():
    srcref7 = force? srcref6;
    checkMissing(srcref7);
    length = ldf length in base;
    r20 = dyn length(srcref7);
    check L40() else D8();
  L41():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  D8():
    deopt 32 [r20];
  D13():
    deopt 54 [];
  L10(r23):
    st srcref = r23;
    goto L13();
  L40():
    goto L8(r20);
  L42():
    srcref8 = ld srcref;
    check L44() else D9();
  L43():
    r22 = dyn base4(<sym srcref>, <lang `[`(srcref, c(1, 3))>);
    goto L10(r22);
  L54():
    p6 = prom<V +>{
      which3 = ld which;
      which4 = force? which3;
      checkMissing(which4);
      return which4;
    };
    r31 = dyn match_arg(p6);
    check L55() else D14();
  D9():
    deopt 37 [srcref8];
  D14():
    deopt 56 [r31];
  L44():
    srcref9 = force? srcref8;
    checkMissing(srcref9);
    srcref10 = ld srcref;
    check L45() else D10();
  L55():
    st which = r31;
    first3 = ld first;
    check L56() else D15();
  D10():
    deopt 39 [srcref10];
  D15():
    deopt 58 [first3];
  L45():
    srcref11 = force? srcref10;
    checkMissing(srcref11);
    c5 = `is.object`(srcref11);
    if c5 then L46() else L47(srcref11);
  L56():
    first4 = force? first3;
    checkMissing(first4);
    c8 = `as.logical`(first4);
    if c8 then L57() else L14();
  L11(dx1):
    c7 = ldf c in base;
    r28 = dyn c7(srcref9, dx1);
    check L52() else D12();
  L14():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L66() else L67();
  L17():
    srcref17 = ld srcref;
    check L73() else D20();
  L46():
    dr = tryDispatchBuiltin.1("[", srcref11);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(dr);
  L47(srcref13):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L57():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  D12():
    deopt 49 [r28];
  D20():
    deopt 92 [srcref17];
  L12(srcref16, r25):
    __ = ldf `[` in base;
    r27 = dyn __(srcref16, r25);
    goto L11(r27);
  L15(r33):
    c10 = `is.object`(r33);
    if c10 then L61() else L62(r33);
  L18(r39):
    c12 = `is.object`(r39);
    if c12 then L69() else L70(r39);
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L49():
    c6 = ldf c in base;
    r26 = dyn c6(1, 3);
    check L51() else D11();
  L50():
    r24 = dyn base5(1, 3);
    goto L12(srcref13, r24);
  L52():
    goto L10(r28);
  L58():
    c9 = ldf c in base;
    r34 = dyn c9(1, 5, 2, 7);
    check L60() else D16();
  L59():
    r32 = dyn base6[line, column, byte, parse](1, 5, 2, 7);
    goto L15(r32);
  L66():
    c11 = ldf c in base;
    r40 = dyn c11(3, 6, 4, 8);
    check L68() else D18();
  L67():
    r38 = dyn base7[line, column, byte, parse](3, 6, 4, 8);
    goto L18(r38);
  L73():
    srcref18 = force? srcref17;
    checkMissing(srcref18);
    c13 = `is.object`(srcref18);
    if c13 then L74() else L75(srcref18);
  D11():
    deopt 46 [srcref13, r26];
  D16():
    deopt 71 [r34];
  D18():
    deopt 87 [r40];
  L16(dx3):
    st index = dx3;
    goto L17();
  L19(dx6):
    st index = dx6;
    goto L17();
  L20(dx8):
    popenv;
    return dx8;
  L51():
    goto L12(srcref13, r26);
  L60():
    goto L15(r34);
  L61():
    dr2 = tryDispatchBuiltin.1("[", r33);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L63() else L62(dr2);
  L62(r36):
    which5 = ld which;
    check L64() else D17();
  L68():
    goto L18(r40);
  L69():
    dr4 = tryDispatchBuiltin.1("[", r39);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L71() else L70(dr4);
  L70(r42):
    which7 = ld which;
    check L72() else D19();
  L74():
    dr6 = tryDispatchBuiltin.1("[", srcref18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L76() else L75(dr6);
  L75(srcref20):
    index = ld index;
    check L77() else D21();
  D17():
    deopt 72 [r36, which5];
  D19():
    deopt 88 [r42, which7];
  D21():
    deopt 94 [srcref20, index];
  L63():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx2);
  L64():
    which6 = force? which5;
    __1 = ldf `[` in base;
    r37 = dyn __1(r36, which6);
    goto L16(r37);
  L71():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx5);
  L72():
    which8 = force? which7;
    __2 = ldf `[` in base;
    r43 = dyn __2(r42, which8);
    goto L19(r43);
  L76():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L20(dx7);
  L77():
    index1 = force? index;
    __3 = ldf `[` in base;
    r44 = dyn __3(srcref20, index1);
    goto L20(r44);
  }
}