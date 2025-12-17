fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1081672851;
    st `.doSubNextCall` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1081672851(call, method) {
  (reg call:*, reg method:*) -+> V { var call:*, var method:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg call1:*, reg call2:V, reg names:cls, reg r4:V, reg match:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg idrop:*, reg idrop1:V, reg is_na:cls, reg r8:V, reg r9:V, reg hasDrop:*, reg hasDrop1:V, reg c:L, reg call3:*, reg call4:V, reg c1:L, reg call6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg call7:*, reg call8:V, reg c2:L, reg call10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg idrop2:*, reg idrop3:V, reg r11:V, reg __:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg formalArgs:cls, reg method1:*, reg method2:V, reg p:p(V +), reg r16:V, reg c3:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg fnames:*, reg fnames1:V, reg match1:cls, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg i:*, reg i1:V, reg is_na1:cls, reg r23:V, reg c4:L, reg c5:V, reg i2:*, reg i3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg c9:L, reg i6:V, reg r25:V, reg call11:*, reg call12:V, reg length:cls, reg r26:V, reg r27:V, reg c10:L, reg c11:V, reg c13:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg r29:V, reg call13:*, reg call14:V, reg length1:cls, reg r30:V, reg l:*, reg length__:cls, reg r31:V, reg i7:*, reg i8:V, reg r33:V, reg i9:*, reg i10:V, reg l1:*, reg length__1:cls, reg r34:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg call15:*, reg call16:V, reg names1:cls, reg r39:V, reg c14:V, reg c15:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r40:V, reg r41:V, reg rep:cls, reg r42:V, reg r43:V, reg __1:cls, reg r44:V, reg r45:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r46:V, reg r47:V, reg call17:*, reg call18:V, reg names2:cls, reg r48:V, reg p1:p(V +), reg i11:*, reg i12:V, reg r50:V, reg p2:p(V +), reg r52:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r53:V, reg r54:V, reg fnames2:*, reg fnames3:V, reg cnames:*, reg cnames1:V, reg c16:cls, reg r55:V, reg fnames4:*, reg fnames5:V, reg l2:*, reg names__:cls, reg r56:V, reg hasDrop2:*, reg hasDrop3:V, reg c17:L, reg drop:*, reg drop1:V, reg l3:*, reg c18:L, reg drop3:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx5:V, reg drop5:V, reg dx6:V, reg r57:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r58:V, reg r59:V, reg call19:*, reg call20:V, reg as_call:cls, reg r60:V |
    mkenv;
    st call = call;
    st method = method;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    st idrop = r1;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L23():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L24():
    r = dyn base("drop", <lang names(call)>);
    goto L0(r);
  L1(r3):
    match = ldf match in base;
    r5 = dyn match("drop", r3, NA_INT, NULL);
    check L29() else D2();
  L2(r7):
    r9 = `!`(r7);
    st hasDrop = r9;
    hasDrop = ld hasDrop;
    check L34() else D5();
  L25():
    call1 = ld call;
    check L27() else D0();
  L26():
    r2 = dyn base1(<sym call>);
    goto L1(r2);
  L30():
    idrop = ld idrop;
    check L32() else D3();
  L31():
    r6 = dyn base2(<sym idrop>);
    goto L2(r6);
  D0():
    deopt 5 [call1];
  D2():
    deopt 12 [r5];
  D3():
    deopt 16 [idrop];
  D5():
    deopt 22 [hasDrop];
  L27():
    call2 = force? call1;
    checkMissing(call2);
    names = ldf names in base;
    r4 = dyn names(call2);
    check L28() else D1();
  L29():
    goto L0(r5);
  L32():
    idrop1 = force? idrop;
    checkMissing(idrop1);
    is_na = ldf `is.na` in base;
    r8 = dyn is_na(idrop1);
    check L33() else D4();
  L34():
    hasDrop1 = force? hasDrop;
    checkMissing(hasDrop1);
    c = `as.logical`(hasDrop1);
    if c then L35() else L3();
  D1():
    deopt 8 [r4];
  D4():
    deopt 19 [r8];
  L3():
    goto L5();
  L5():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L28():
    goto L1(r4);
  L33():
    goto L2(r8);
  L35():
    call3 = ld call;
    check L36() else D6();
  D6():
    deopt 24 [call3];
  L6(r14):
    st fnames = r14;
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L36():
    call4 = force? call3;
    checkMissing(call4);
    c1 = `is.object`(call4);
    if c1 then L38() else L39(call4);
  L47():
    formalArgs = ldf formalArgs;
    check L49() else D9();
  L48():
    r13 = dyn base3("", <lang formalArgs(method)>);
    goto L6(r13);
  D9():
    deopt 41 [];
  L7(r19):
    st i = r19;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L37(dx1):
    st drop = dx1;
    call7 = ld call;
    check L41() else D7();
  L38():
    dr = tryDispatchBuiltin.1("$", call4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(dr);
  L39(call6):
    r10 = `$`(call6, <sym drop>);
    goto L37(r10);
  L49():
    p = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r16 = dyn formalArgs(p);
    check L50() else D10();
  L52():
    fnames = ld fnames;
    check L54() else D12();
  L53():
    r18 = dyn base4("...", <sym fnames>);
    goto L7(r18);
  D7():
    deopt 28 [call7];
  D10():
    deopt 43 [r16];
  D12():
    deopt 50 [fnames];
  L8(r22):
    c4 = `as.logical`(r22);
    if c4 then L9(c4) else L60();
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L37(dx);
  L41():
    call8 = force? call7;
    checkMissing(call8);
    c2 = `is.object`(call8);
    if c2 then L42() else L43(call8);
  L50():
    c3 = ldf c in base;
    r17 = dyn c3("", r16);
    check L51() else D11();
  L54():
    fnames1 = force? fnames;
    checkMissing(fnames1);
    match1 = ldf match in base;
    r20 = dyn match1("...", fnames1, NA_INT, NULL);
    check L55() else D13();
  L56():
    i = ld i;
    check L58() else D14();
  L57():
    r21 = dyn base5(<sym i>);
    goto L8(r21);
  D11():
    deopt 45 [r17];
  D13():
    deopt 55 [r20];
  D14():
    deopt 59 [i];
  L4(dx3):
    st call = dx3;
    goto L5();
  L9(c5):
    c13 = `as.logical`(c5);
    if c13 then L67() else L11();
  L42():
    dr2 = tryDispatchBuiltin.1("[", call8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dr2);
  L43(call10):
    idrop2 = ld idrop;
    check L45() else D8();
  L51():
    goto L6(r17);
  L55():
    goto L7(r20);
  L58():
    i1 = force? i;
    checkMissing(i1);
    is_na1 = ldf `is.na` in base;
    r23 = dyn is_na1(i1);
    check L59() else D15();
  L60():
    i2 = ld i;
    check L61() else D16();
  D8():
    deopt 30 [call10, idrop2];
  D15():
    deopt 62 [r23];
  D16():
    deopt 63 [c4, i2];
  L11():
    i7 = ld i;
    check L75() else D23();
  L13():
    fnames4 = ld fnames;
    check L97() else D35();
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L45():
    idrop3 = force? idrop2;
    checkMissing(idrop3);
    r11 = `-`(<missing>, idrop3);
    __ = ldf `[` in base;
    r12 = dyn __(call10, r11);
    goto L4(r12);
  L59():
    goto L8(r23);
  L61():
    i3 = force? i2;
    checkMissing(i3);
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  L67():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  D23():
    deopt 83 [i7];
  D35():
    deopt 125 [fnames4];
  L10(c9, i6, r25):
    r27 = `>`(i6, r25);
    c10 = `as.logical`(r27);
    c11 = `||`(c9, c10);
    goto L9(c11);
  L12(r29):
    l = ld fnames;
    length__ = ldf `length<-`;
    check L72() else D21();
  L62():
    call11 = ld call;
    check L64() else D17();
  L63():
    r24 = dyn base6(<sym call>);
    goto L10(c4, i3, r24);
  L68():
    call13 = ld call;
    check L70() else D19();
  L69():
    r28 = dyn base7(<sym call>);
    goto L12(r28);
  L75():
    i8 = force? i7;
    checkMissing(i8);
    r33 = `-`(i8, 1.0);
    st i = r33;
    i9 = ld i;
    check L76() else D24();
  L97():
    fnames5 = force? fnames4;
    checkMissing(fnames5);
    l2 = ld call;
    names__ = ldf `names<-`;
    check L98() else D36();
  D17():
    deopt 66 [c4, i3, call11];
  D19():
    deopt 74 [call13];
  D21():
    deopt 79 [r29, l, r29];
  D24():
    deopt 88 [i9];
  D36():
    deopt 128 [fnames5, l2, fnames5];
  L64():
    call12 = force? call11;
    checkMissing(call12);
    length = ldf length in base;
    r26 = dyn length(call12);
    check L65() else D18();
  L70():
    call14 = force? call13;
    checkMissing(call14);
    length1 = ldf length in base;
    r30 = dyn length1(call14);
    check L71() else D20();
  L72():
    r31 = dyn length__(l, NULL, r29);
    check L73() else D22();
  L76():
    i10 = force? i9;
    checkMissing(i10);
    l1 = ld fnames;
    length__1 = ldf `length<-`;
    check L77() else D25();
  L98():
    r56 = dyn names__(l2, NULL, fnames5);
    check L99() else D37();
  D18():
    deopt 69 [c4, i3, r26];
  D20():
    deopt 77 [r30];
  D22():
    deopt 81 [r29, r31];
  D25():
    deopt 91 [i10, l1, i10];
  D37():
    deopt 130 [fnames5, r56];
  L65():
    goto L10(c4, i3, r26);
  L71():
    goto L12(r30);
  L73():
    st fnames = r31;
    goto L13();
  L77():
    r34 = dyn length__1(l1, NULL, i10);
    check L78() else D26();
  L99():
    st call = r56;
    hasDrop2 = ld hasDrop;
    check L100() else D38();
  D26():
    deopt 93 [i10, r34];
  D38():
    deopt 132 [hasDrop2];
  L78():
    st fnames = r34;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L79() else L80();
  L100():
    hasDrop3 = force? hasDrop2;
    checkMissing(hasDrop3);
    c17 = `as.logical`(hasDrop3);
    if c17 then L101() else L20();
  L14(r36):
    c15 = `as.logical`(r36);
    if c15 then L85() else L16();
  L20():
    goto L21();
  L21():
    sym13 = ldf `as.call`;
    base13 = ldf `as.call` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L108() else L109();
  L79():
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L81() else L82();
  L80():
    r35 = dyn base8(<lang names(call)>);
    goto L14(r35);
  L101():
    drop = ld drop;
    check L102() else D39();
  D39():
    deopt 134 [drop];
  L15(r38):
    c14 = `==`(r38, NULL);
    goto L14(c14);
  L16():
    __1 = ldf `::`;
    check L89() else D29();
  L18(r43):
    st cnames = r43;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L92() else L93();
  L22(r59):
    popenv;
    return r59;
  L81():
    call15 = ld call;
    check L83() else D27();
  L82():
    r37 = dyn base9(<sym call>);
    goto L15(r37);
  L85():
    sym10 = ldf rep;
    base10 = ldf rep in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L86() else L87();
  L102():
    drop1 = force? drop;
    checkMissing(drop1);
    l3 = ld call;
    c18 = `is.object`(l3);
    if c18 then L104() else L105(drop1, l3);
  L108():
    call19 = ld call;
    check L110() else D40();
  L109():
    r58 = dyn base13(<sym call>);
    goto L22(r58);
  D27():
    deopt 98 [call15];
  D29():
    deopt 107 [];
  D40():
    deopt 143 [call19];
  L17(r41):
    goto L18(r41);
  L19(r54):
    st fnames = r54;
    goto L13();
  L83():
    call16 = force? call15;
    checkMissing(call16);
    names1 = ldf names in base;
    r39 = dyn names1(call16);
    check L84() else D28();
  L86():
    rep = ldf rep in base;
    r42 = dyn rep("", <lang `-`(length(call), i)>);
    goto L17(r42);
  L87():
    r40 = dyn base10("", <lang `-`(length(call), i)>);
    goto L17(r40);
  L89():
    r44 = dyn __1("utils", "tail");
    check L90() else D30();
  L92():
    fnames2 = ld fnames;
    check L94() else D32();
  L93():
    r53 = dyn base12(<sym fnames>, <sym cnames>);
    goto L19(r53);
  L103(drop5, dx6):
    st call = dx6;
    goto L21();
  L104():
    dr4 = tryDispatchBuiltin.0("$<-", l3, drop1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L106() else L105(drop1, dr4);
  L105(drop3, l5):
    r57 = `$<-`(l5, <sym drop>, drop1);
    goto L103(drop3, r57);
  L110():
    call20 = force? call19;
    checkMissing(call20);
    as_call = ldf `as.call` in base;
    r60 = dyn as_call(call20);
    check L111() else D41();
  D28():
    deopt 101 [r39];
  D30():
    deopt 110 [r44];
  D32():
    deopt 118 [fnames2];
  D41():
    deopt 146 [r60];
  L84():
    goto L15(r39);
  L90():
    checkFun.0(r44);
    r45 = r44 as cls;
    p1 = prom<V +>{
      sym11 = ldf names;
      base11 = ldf names in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      call17 = ld call;
      call18 = force? call17;
      checkMissing(call18);
      names2 = ldf names in base;
      r48 = dyn names2(call18);
      goto L0(r48);
    L2():
      r46 = dyn base11(<sym call>);
      goto L0(r46);
    };
    p2 = prom<V +>{
      i11 = ld i;
      i12 = force? i11;
      checkMissing(i12);
      r50 = `-`(<missing>, i12);
      return r50;
    };
    r52 = dyn r45(p1, p2);
    check L91() else D31();
  L94():
    fnames3 = force? fnames2;
    checkMissing(fnames3);
    cnames = ld cnames;
    check L95() else D33();
  L106():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L103(drop1, dx5);
  L111():
    goto L22(r60);
  D31():
    deopt 114 [r52];
  D33():
    deopt 120 [cnames];
  L91():
    goto L18(r52);
  L95():
    cnames1 = force? cnames;
    checkMissing(cnames1);
    c16 = ldf c in base;
    r55 = dyn c16(fnames3, cnames1);
    check L96() else D34();
  D34():
    deopt 123 [r55];
  L96():
    goto L19(r55);
  }
}