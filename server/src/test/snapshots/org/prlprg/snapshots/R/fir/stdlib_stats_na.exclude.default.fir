fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `na.exclude.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg is_atomic:cls, reg r2:V, reg r3:V, reg c:L, reg object3:*, reg object4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg object5:*, reg object6:V, reg dim:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg d:*, reg d1:V, reg length:cls, reg r11:V, reg r12:V, reg c1:L, reg object7:*, reg object8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg object9:*, reg object10:V, reg r17:I, reg c2:L, reg r19:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg r24:V, reg object11:*, reg object12:V, reg is_na:cls, reg r25:V, reg __:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg omit:*, reg omit1:V, reg length1:cls, reg r29:V, reg r30:V, reg c3:L, reg object13:*, reg object14:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg d2:*, reg d3:V, reg length2:cls, reg r35:V, reg c4:L, reg unique:cls, reg omit2:*, reg omit3:V, reg r36:V, reg d4:*, reg d5:V, reg c5:L, reg d7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r37:V, reg __2:cls, reg r38:V, reg r39:V, reg p:p(V +), reg r41:V, reg rownames:cls, reg object15:*, reg object16:V, reg p1:p(V +), reg r43:V, reg object17:*, reg object18:V, reg c6:L, reg object20:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg omit4:*, reg omit5:V, reg r44:V, reg __3:cls, reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg object21:*, reg object22:V, reg names:cls, reg r48:V, reg object23:*, reg object24:V, reg c7:L, reg object26:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg omit6:*, reg omit7:V, reg r49:V, reg __4:cls, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg omit8:*, reg omit9:V, reg r53:V, reg any:cls, reg r54:V, reg c8:L, reg nm:*, reg nm1:V, reg c9:L, reg nm3:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg omit10:*, reg omit11:V, reg __5:cls, reg r55:V, reg l:*, reg names__:cls, reg r56:V, reg l1:*, reg attr__:cls, reg r57:V, reg omit12:*, reg omit13:V, reg l2:*, reg attr__1:cls, reg r58:V, reg object27:*, reg object28:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.atomic`;
    base = ldf `is.atomic` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L27() else L1();
  L23():
    object1 = ld object;
    check L25() else D0();
  L24():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L25():
    object2 = force? object1;
    checkMissing(object2);
    is_atomic = ldf `is.atomic` in base;
    r2 = dyn is_atomic(object2);
    check L26() else D1();
  L27():
    object3 = ld object;
    check L28() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [object3];
  L3(r7):
    st d = r7;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L26():
    goto L0(r2);
  L28():
    object4 = force? object3;
    checkMissing(object4);
    popenv;
    return object4;
  L31():
    object5 = ld object;
    check L33() else D3();
  L32():
    r6 = dyn base1(<sym object>);
    goto L3(r6);
  D3():
    deopt 14 [object5];
  L4(r10):
    r12 = `>`(r10, 2);
    c1 = `as.logical`(r12);
    if c1 then L39() else L5();
  L33():
    object6 = force? object5;
    checkMissing(object6);
    dim = ldf dim in base;
    r8 = dyn dim(object6);
    check L34() else D4();
  L35():
    d = ld d;
    check L37() else D5();
  L36():
    r9 = dyn base2(<sym d>);
    goto L4(r9);
  D4():
    deopt 17 [r8];
  D5():
    deopt 21 [d];
  L5():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L34():
    goto L3(r8);
  L37():
    d1 = force? d;
    checkMissing(d1);
    length = ldf length in base;
    r11 = dyn length(d1);
    check L38() else D6();
  L39():
    object7 = ld object;
    check L40() else D7();
  D6():
    deopt 24 [r11];
  D7():
    deopt 27 [object7];
  L7(r16):
    c2 = `is.object`(r16);
    if c2 then L46() else L47(r16);
  L38():
    goto L4(r11);
  L40():
    object8 = force? object7;
    checkMissing(object8);
    popenv;
    return object8;
  L43():
    object9 = ld object;
    check L45() else D8();
  L44():
    r15 = dyn base3(<sym object>);
    goto L7(r15);
  D8():
    deopt 33 [object9];
  L8(dx1):
    st omit = dx1;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L53() else L54();
  L45():
    object10 = force? object9;
    checkMissing(object10);
    r17 = seq_along(object10);
    goto L7(r17);
  L46():
    dr = tryDispatchBuiltin.1("[", r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(dr);
  L47(r19):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L9(r23, r24):
    __ = ldf `[` in base;
    r26 = dyn __(r23, r24);
    goto L8(r26);
  L10(r28):
    r30 = `==`(r28, 0);
    c3 = `as.logical`(r30);
    if c3 then L57() else L11();
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L49():
    object11 = ld object;
    check L51() else D9();
  L50():
    r22 = dyn base4(<sym object>);
    goto L9(r19, r22);
  L53():
    omit = ld omit;
    check L55() else D11();
  L54():
    r27 = dyn base5(<sym omit>);
    goto L10(r27);
  D9():
    deopt 38 [r19, object11];
  D11():
    deopt 46 [omit];
  L11():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L51():
    object12 = force? object11;
    checkMissing(object12);
    is_na = ldf `is.na` in base;
    r25 = dyn is_na(object12);
    check L52() else D10();
  L55():
    omit1 = force? omit;
    checkMissing(omit1);
    length1 = ldf length in base;
    r29 = dyn length1(omit1);
    check L56() else D12();
  L57():
    object13 = ld object;
    check L58() else D13();
  D10():
    deopt 41 [r19, r25];
  D12():
    deopt 49 [r29];
  D13():
    deopt 52 [object13];
  L13(r34):
    c4 = `as.logical`(r34);
    if c4 then L65() else L14();
  L52():
    goto L9(r19, r25);
  L56():
    goto L10(r29);
  L58():
    object14 = force? object13;
    checkMissing(object14);
    popenv;
    return object14;
  L61():
    d2 = ld d;
    check L63() else D14();
  L62():
    r33 = dyn base6(<sym d>);
    goto L13(r33);
  D14():
    deopt 59 [d2];
  L14():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L16():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L85() else L86();
  L63():
    d3 = force? d2;
    checkMissing(d3);
    length2 = ldf length in base;
    r35 = dyn length2(d3);
    check L64() else D15();
  L65():
    unique = ldf unique;
    check L66() else D16();
  D15():
    deopt 62 [r35];
  D16():
    deopt 64 [];
  L17(r47):
    st nm = r47;
    object23 = ld object;
    check L80() else D24();
  L19(r52):
    c8 = `as.logical`(r52);
    if c8 then L89() else L20();
  L64():
    goto L13(r35);
  L66():
    p = prom<V +>{
      omit2 = ld omit;
      omit3 = force? omit2;
      checkMissing(omit3);
      r36 = `-`(omit3, 1.0);
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      c5 = `is.object`(d5);
      if c5 then L1() else L2(d5);
    L0(dx3):
      __2 = ldf `%%` in base;
      r38 = dyn __2(r36, dx3);
      r39 = `+`(r38, 1);
      return r39;
    L1():
      dr2 = tryDispatchBuiltin.1("[", d5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(d7):
      __1 = ldf `[` in base;
      r37 = dyn __1(d7, 1);
      goto L0(r37);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r41 = dyn unique(p);
    check L67() else D17();
  L76():
    object21 = ld object;
    check L78() else D22();
  L77():
    r46 = dyn base7(<sym object>);
    goto L17(r46);
  L85():
    omit8 = ld omit;
    check L87() else D26();
  L86():
    r51 = dyn base8(<lang `>`(omit, 0)>);
    goto L19(r51);
  D17():
    deopt 66 [r41];
  D22():
    deopt 86 [object21];
  D24():
    deopt 91 [object23];
  D26():
    deopt 100 [omit8];
  L20():
    goto L22();
  L22():
    object27 = ld object;
    check L103() else D37();
  L67():
    st omit = r41;
    rownames = ldf rownames;
    check L68() else D18();
  L78():
    object22 = force? object21;
    checkMissing(object22);
    names = ldf names in base;
    r48 = dyn names(object22);
    check L79() else D23();
  L80():
    object24 = force? object23;
    checkMissing(object24);
    c7 = `is.object`(object24);
    if c7 then L81() else L82(object24);
  L87():
    omit9 = force? omit8;
    checkMissing(omit9);
    r53 = `>`(omit9, 0);
    any = ldf any in base;
    r54 = dyn any(r53);
    check L88() else D27();
  L89():
    nm = ld nm;
    check L90() else D28();
  D18():
    deopt 69 [];
  D23():
    deopt 89 [r48];
  D27():
    deopt 105 [r54];
  D28():
    deopt 106 [nm];
  D37():
    deopt 134 [object27];
  L18(dx8):
    st object = dx8;
    goto L16();
  L68():
    p1 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      return object16;
    };
    r43 = dyn rownames(p1);
    check L69() else D19();
  L79():
    goto L17(r48);
  L81():
    dr6 = tryDispatchBuiltin.1("[", object24);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L83() else L82(dr6);
  L82(object26):
    omit6 = ld omit;
    check L84() else D25();
  L88():
    goto L19(r54);
  L90():
    nm1 = force? nm;
    checkMissing(nm1);
    c9 = `is.object`(nm1);
    if c9 then L91() else L92(nm1);
  L103():
    object28 = force? object27;
    checkMissing(object28);
    popenv;
    return object28;
  D19():
    deopt 71 [r43];
  D25():
    deopt 93 [object26, omit6];
  L21(dx10):
    l = ld omit;
    names__ = ldf `names<-`;
    check L95() else D30();
  L69():
    st nm = r43;
    object17 = ld object;
    check L70() else D20();
  L83():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx7);
  L84():
    omit7 = force? omit6;
    checkMissing(omit7);
    r49 = `-`(<missing>, omit7);
    __4 = ldf `[` in base;
    r50 = dyn __4(object26, r49);
    goto L18(r50);
  L91():
    dr8 = tryDispatchBuiltin.1("[", nm1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L93() else L92(dr8);
  L92(nm3):
    omit10 = ld omit;
    check L94() else D29();
  D20():
    deopt 73 [object17];
  D29():
    deopt 108 [nm3, omit10];
  D30():
    deopt 112 [dx10, l, dx10];
  L70():
    object18 = force? object17;
    checkMissing(object18);
    c6 = `is.object`(object18);
    if c6 then L71() else L72(object18);
  L93():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L21(dx9);
  L94():
    omit11 = force? omit10;
    __5 = ldf `[` in base;
    r55 = dyn __5(nm3, omit11);
    goto L21(r55);
  L95():
    r56 = dyn names__(l, NULL, dx10);
    check L96() else D31();
  D31():
    deopt 114 [dx10, r56];
  L15(dx5):
    st object = dx5;
    goto L16();
  L71():
    dr4 = tryDispatchBuiltin.1("[", object18);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L73() else L72(dr4);
  L72(object20):
    omit4 = ld omit;
    check L74() else D21();
  L96():
    st omit = r56;
    l1 = ld omit;
    attr__ = ldf `attr<-`;
    check L97() else D32();
  D21():
    deopt 75 [object20, omit4];
  D32():
    deopt 119 ["exclude", l1, "exclude"];
  L73():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx4);
  L74():
    omit5 = force? omit4;
    checkMissing(omit5);
    r44 = `-`(<missing>, omit5);
    __3 = ldf `[` in base;
    r45 = dyn __3(object18, r44, <missing>, FALSE);
    goto L15(r45);
  L97():
    r57 = dyn attr__(l1, NULL, "class", "exclude");
    check L98() else D33();
  D33():
    deopt 122 ["exclude", r57];
  L98():
    st omit = r57;
    omit12 = ld omit;
    check L99() else D34();
  D34():
    deopt 124 [omit12];
  L99():
    omit13 = force? omit12;
    checkMissing(omit13);
    l2 = ld object;
    attr__1 = ldf `attr<-`;
    check L100() else D35();
  D35():
    deopt 127 [omit13, l2, omit13];
  L100():
    r58 = dyn attr__1(l2, NULL, "na.action", omit13);
    check L101() else D36();
  D36():
    deopt 130 [omit13, r58];
  L101():
    st object = r58;
    goto L22();
  }
}