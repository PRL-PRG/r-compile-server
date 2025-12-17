fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner399722262;
    st fixWindowsConcordancePaths = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner399722262(split) {
  (reg split:*) -+> V { var split:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg split1:*, reg split2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg split3:*, reg split4:V, reg grep:cls, reg split5:*, reg split6:V, reg c1:L, reg split8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p:p(V +), reg r8:V, reg r9:V, reg grep1:cls, reg split9:*, reg split10:V, reg c2:L, reg split12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg split15:V, reg r13:R, reg r14:V, reg split16:*, reg split17:V, reg length1:cls, reg r15:V, reg r16:V, reg __1:cls, reg r17:V, reg p1:p(V +), reg r19:V, reg r20:V, reg setdiff:cls, reg driveletter:*, reg driveletter1:V, reg p2:p(V +), reg ofs:*, reg ofs1:V, reg r22:V, reg p3:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg driveletter2:*, reg driveletter3:V, reg length2:cls, reg r27:V, reg r28:V, reg c3:L, reg split18:*, reg split19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg ofs2:*, reg ofs3:V, reg length3:cls, reg r33:V, reg r34:V, reg c4:L, reg c5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg c9:L, reg r36:V, reg split20:*, reg split21:V, reg length4:cls, reg r37:V, reg r38:V, reg c10:L, reg c11:V, reg c13:L, reg _in_:cls, reg driveletter4:*, reg driveletter5:V, reg p4:p(V +), reg r40:V, reg c14:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg split22:*, reg split23:V, reg c15:L, reg split25:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r43:V, reg paste:cls, reg split26:*, reg split27:V, reg c16:L, reg split29:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r44:V, reg p5:p(V +), reg split30:*, reg split31:V, reg c17:L, reg split33:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r46:V, reg p6:p(V +), reg r48:V, reg split34:*, reg split35:V, reg c18:L, reg split37:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg split40:V, reg r52:R, reg r53:V, reg split41:*, reg split42:V, reg length5:cls, reg r54:V, reg r55:V, reg __5:cls, reg r56:V, reg c19:cls, reg r57:V, reg driveletter6:*, reg driveletter7:V, reg r58:V, reg _in_1:cls, reg driveletter8:*, reg driveletter9:V, reg p7:p(V +), reg r61:V, reg c20:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg split43:*, reg split44:V, reg c21:L, reg split46:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r64:V, reg paste1:cls, reg split47:*, reg split48:V, reg c22:L, reg split50:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __7:cls, reg r65:V, reg p8:p(V +), reg split51:*, reg split52:V, reg c23:L, reg split54:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __8:cls, reg r67:V, reg p9:p(V +), reg r69:V, reg split55:*, reg split56:V, reg c24:L, reg split58:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r72:V, reg split61:V, reg r73:R, reg r74:V, reg split62:*, reg split63:V, reg length6:cls, reg r75:V, reg r76:V, reg __9:cls, reg r77:V, reg c25:cls, reg r78:V, reg r79:V, reg split64:*, reg split65:V |
    mkenv;
    st split = split;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    r3 = `<=`(r1, 4.0);
    c = `as.logical`(r3);
    if c then L27() else L1();
  L23():
    split1 = ld split;
    check L25() else D0();
  L24():
    r = dyn base(<sym split>);
    goto L0(r);
  D0():
    deopt 2 [split1];
  L1():
    grep = ldf grep;
    check L31() else D3();
  L25():
    split2 = force? split1;
    checkMissing(split2);
    length = ldf length in base;
    r2 = dyn length(split2);
    check L26() else D1();
  L27():
    split3 = ld split;
    check L28() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [split3];
  D3():
    deopt 14 [];
  L26():
    goto L0(r2);
  L28():
    split4 = force? split3;
    checkMissing(split4);
    popenv;
    return split4;
  L31():
    p = prom<V +>{
      split5 = ld split;
      split6 = force? split5;
      checkMissing(split6);
      c1 = `is.object`(split6);
      if c1 then L1() else L2(split6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", split6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(split8):
      __ = ldf `[` in base;
      r6 = dyn __(split8, <int 2, 3, 4>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn grep("^[a-zA-Z]$", p);
    check L32() else D4();
  D4():
    deopt 17 [r8];
  L32():
    r9 = `+`(r8, 1.0);
    st driveletter = r9;
    grep1 = ldf grep;
    check L33() else D5();
  D5():
    deopt 22 [];
  L33():
    p1 = prom<V +>{
      split9 = ld split;
      split10 = force? split9;
      checkMissing(split10);
      c2 = `is.object`(split10);
      if c2 then L2() else L3(split10);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", split10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(split12):
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(split15, r13, r14):
      r16 = `:`(r13, r14);
      __1 = ldf `[` in base;
      r17 = dyn __1(split15, r16);
      goto L0(r17);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      split16 = ld split;
      split17 = force? split16;
      checkMissing(split17);
      length1 = ldf length in base;
      r15 = dyn length1(split17);
      goto L1(split12, 4.0, r15);
    L6():
      r12 = dyn base1(<sym split>);
      goto L1(split12, 4.0, r12);
    };
    r19 = dyn grep1("^ofs [[:digit:]]+$", p1);
    check L34() else D6();
  D6():
    deopt 25 [r19];
  L34():
    r20 = `+`(r19, 3.0);
    st ofs = r20;
    setdiff = ldf setdiff;
    check L35() else D7();
  D7():
    deopt 30 [];
  L35():
    p2 = prom<V +>{
      driveletter = ld driveletter;
      driveletter1 = force? driveletter;
      checkMissing(driveletter1);
      return driveletter1;
    };
    p3 = prom<V +>{
      ofs = ld ofs;
      ofs1 = force? ofs;
      checkMissing(ofs1);
      r22 = `-`(ofs1, 1.0);
      return r22;
    };
    r24 = dyn setdiff(p2, p3);
    check L36() else D8();
  D8():
    deopt 33 [r24];
  L36():
    st driveletter = r24;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L3(r26):
    r28 = `!`(r26);
    c3 = `as.logical`(r28);
    if c3 then L41() else L4();
  L37():
    driveletter2 = ld driveletter;
    check L39() else D9();
  L38():
    r25 = dyn base2(<sym driveletter>);
    goto L3(r25);
  D9():
    deopt 37 [driveletter2];
  L4():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L39():
    driveletter3 = force? driveletter2;
    checkMissing(driveletter3);
    length2 = ldf length in base;
    r27 = dyn length2(driveletter3);
    check L40() else D10();
  L41():
    split18 = ld split;
    check L42() else D11();
  D10():
    deopt 40 [r27];
  D11():
    deopt 42 [split18];
  L6(r32):
    r34 = `!`(r32);
    c4 = `as.logical`(r34);
    if c4 then L7(c4) else L49();
  L40():
    goto L3(r27);
  L42():
    split19 = force? split18;
    checkMissing(split19);
    popenv;
    return split19;
  L45():
    ofs2 = ld ofs;
    check L47() else D12();
  L46():
    r31 = dyn base3(<sym ofs>);
    goto L6(r31);
  D12():
    deopt 49 [ofs2];
  L7(c5):
    c13 = `as.logical`(c5);
    if c13 then L55() else L9();
  L47():
    ofs3 = force? ofs2;
    checkMissing(ofs3);
    length3 = ldf length in base;
    r33 = dyn length3(ofs3);
    check L48() else D13();
  L49():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  D13():
    deopt 52 [r33];
  L8(c9, r36):
    r38 = `>=`(r36, 6.0);
    c10 = `as.logical`(r38);
    c11 = `||`(c9, c10);
    goto L7(c11);
  L9():
    goto L22();
  L22():
    split64 = ld split;
    check L100() else D35();
  L48():
    goto L6(r33);
  L50():
    split20 = ld split;
    check L52() else D14();
  L51():
    r35 = dyn base4(<sym split>);
    goto L8(c4, r35);
  L55():
    _in_ = ldf `%in%`;
    check L56() else D16();
  D14():
    deopt 56 [c4, split20];
  D16():
    deopt 64 [];
  D35():
    deopt 140 [split64];
  L52():
    split21 = force? split20;
    checkMissing(split21);
    length4 = ldf length in base;
    r37 = dyn length4(split21);
    check L53() else D15();
  L56():
    p4 = prom<V +>{
      driveletter4 = ld driveletter;
      driveletter5 = force? driveletter4;
      checkMissing(driveletter5);
      return driveletter5;
    };
    r40 = dyn _in_(2.0, p4);
    check L57() else D17();
  L100():
    split65 = force? split64;
    checkMissing(split65);
    popenv;
    return split65;
  D15():
    deopt 59 [c4, r37];
  D17():
    deopt 67 [r40];
  L53():
    goto L8(c4, r37);
  L57():
    c14 = `as.logical`(r40);
    if c14 then L58() else L10();
  L10():
    goto L15();
  L15():
    _in_1 = ldf `%in%`;
    check L78() else D26();
  L58():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  D26():
    deopt 104 [];
  L11(r42):
    st split = r42;
    driveletter6 = ld driveletter;
    check L76() else D25();
  L59():
    split22 = ld split;
    check L61() else D18();
  L60():
    r41 = dyn base5(<lang `[`(split, 1.0)>, <lang paste(`[`(split, 2.0), `[`(split, 3.0), sep=":")>, <lang `[`(split, `:`(4.0, length(split)))>);
    goto L11(r41);
  L78():
    p7 = prom<V +>{
      driveletter8 = ld driveletter;
      driveletter9 = force? driveletter8;
      checkMissing(driveletter9);
      return driveletter9;
    };
    r61 = dyn _in_1(3.0, p7);
    check L79() else D27();
  D18():
    deopt 70 [split22];
  D25():
    deopt 96 [driveletter6];
  D27():
    deopt 107 [r61];
  L61():
    split23 = force? split22;
    checkMissing(split23);
    c15 = `is.object`(split23);
    if c15 then L62() else L63(split23);
  L76():
    driveletter7 = force? driveletter6;
    checkMissing(driveletter7);
    r58 = `-`(driveletter7, 1.0);
    st driveletter = r58;
    goto L15();
  L79():
    c20 = `as.logical`(r61);
    if c20 then L80() else L16();
  L12(dx5):
    paste = ldf paste;
    check L65() else D19();
  L16():
    goto L21(NULL);
  L21(r79):
    goto L22();
  L62():
    dr4 = tryDispatchBuiltin.1("[", split23);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L64() else L63(dr4);
  L63(split25):
    __2 = ldf `[` in base;
    r43 = dyn __2(split25, 1.0);
    goto L12(r43);
  L80():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L81() else L82();
  D19():
    deopt 76 [];
  L17(r63):
    st split = r63;
    goto L21(r63);
  L64():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L65():
    p5 = prom<V +>{
      split26 = ld split;
      split27 = force? split26;
      checkMissing(split27);
      c16 = `is.object`(split27);
      if c16 then L1() else L2(split27);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", split27);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(split29):
      __3 = ldf `[` in base;
      r44 = dyn __3(split29, 2.0);
      goto L0(r44);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p6 = prom<V +>{
      split30 = ld split;
      split31 = force? split30;
      checkMissing(split31);
      c17 = `is.object`(split31);
      if c17 then L1() else L2(split31);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", split31);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(split33):
      __4 = ldf `[` in base;
      r46 = dyn __4(split33, 3.0);
      goto L0(r46);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r48 = dyn paste[, , sep](p5, p6, ":");
    check L66() else D20();
  L81():
    split43 = ld split;
    check L83() else D28();
  L82():
    r62 = dyn base7(<lang `[`(split, `:`(1.0, 2.0))>, <lang paste(`[`(split, 3.0), `[`(split, 4.0), sep=":")>, <lang `[`(split, `:`(5.0, length(split)))>);
    goto L17(r62);
  D20():
    deopt 81 [r48];
  D28():
    deopt 110 [split43];
  L66():
    split34 = ld split;
    check L67() else D21();
  L83():
    split44 = force? split43;
    checkMissing(split44);
    c21 = `is.object`(split44);
    if c21 then L84() else L85(split44);
  D21():
    deopt 82 [split34];
  L18(dx13):
    paste1 = ldf paste;
    check L87() else D29();
  L67():
    split35 = force? split34;
    checkMissing(split35);
    c18 = `is.object`(split35);
    if c18 then L68() else L69(split35);
  L84():
    dr12 = tryDispatchBuiltin.1("[", split44);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L86() else L85(dr12);
  L85(split46):
    __6 = ldf `[` in base;
    r64 = dyn __6(split46, <int 1, 2>);
    goto L18(r64);
  D29():
    deopt 116 [];
  L13(dx11):
    c19 = ldf c in base;
    r57 = dyn c19(dx5, r48, dx11);
    check L75() else D24();
  L68():
    dr10 = tryDispatchBuiltin.1("[", split35);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L70() else L69(dr10);
  L69(split37):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  L86():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L18(dx12);
  L87():
    p8 = prom<V +>{
      split47 = ld split;
      split48 = force? split47;
      checkMissing(split48);
      c22 = `is.object`(split48);
      if c22 then L1() else L2(split48);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", split48);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(split50):
      __7 = ldf `[` in base;
      r65 = dyn __7(split50, 3.0);
      goto L0(r65);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p9 = prom<V +>{
      split51 = ld split;
      split52 = force? split51;
      checkMissing(split52);
      c23 = `is.object`(split52);
      if c23 then L1() else L2(split52);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", split52);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(split54):
      __8 = ldf `[` in base;
      r67 = dyn __8(split54, 4.0);
      goto L0(r67);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r69 = dyn paste1[, , sep](p8, p9, ":");
    check L88() else D30();
  D24():
    deopt 94 [r57];
  D30():
    deopt 121 [r69];
  L14(split40, r52, r53):
    r55 = `:`(r52, r53);
    __5 = ldf `[` in base;
    r56 = dyn __5(split40, r55);
    goto L13(r56);
  L70():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L13(dx10);
  L71():
    split41 = ld split;
    check L73() else D22();
  L72():
    r51 = dyn base6(<sym split>);
    goto L14(split37, 4.0, r51);
  L75():
    goto L11(r57);
  L88():
    split55 = ld split;
    check L89() else D31();
  D22():
    deopt 87 [split37, 4.0, split41];
  D31():
    deopt 122 [split55];
  L73():
    split42 = force? split41;
    checkMissing(split42);
    length5 = ldf length in base;
    r54 = dyn length5(split42);
    check L74() else D23();
  L89():
    split56 = force? split55;
    checkMissing(split56);
    c24 = `is.object`(split56);
    if c24 then L90() else L91(split56);
  D23():
    deopt 90 [split37, 4.0, r54];
  L19(dx19):
    c25 = ldf c in base;
    r78 = dyn c25(dx13, r69, dx19);
    check L97() else D34();
  L74():
    goto L14(split37, 4.0, r54);
  L90():
    dr18 = tryDispatchBuiltin.1("[", split56);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L92() else L91(dr18);
  L91(split58):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  D34():
    deopt 134 [r78];
  L20(split61, r73, r74):
    r76 = `:`(r73, r74);
    __9 = ldf `[` in base;
    r77 = dyn __9(split61, r76);
    goto L19(r77);
  L92():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L19(dx18);
  L93():
    split62 = ld split;
    check L95() else D32();
  L94():
    r72 = dyn base8(<sym split>);
    goto L20(split58, 5.0, r72);
  L97():
    goto L17(r78);
  D32():
    deopt 127 [split58, 5.0, split62];
  L95():
    split63 = force? split62;
    checkMissing(split63);
    length6 = ldf length in base;
    r75 = dyn length6(split63);
    check L96() else D33();
  D33():
    deopt 130 [split58, 5.0, r75];
  L96():
    goto L20(split58, 5.0, r75);
  }
}