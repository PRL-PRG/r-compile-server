fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `rc.options` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg new:*, reg new1:V, reg names:cls, reg r7:V, reg c:V, reg c1:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg c6:L, reg r9:V, reg new2:*, reg new3:V, reg length:cls, reg r10:V, reg r11:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg c15:L, reg r13:V, reg new4:*, reg new5:V, reg c16:L, reg c18:L, reg new7:V, reg dr:V, reg dc:L, reg dx:V, reg c20:L, reg dx1:V, reg __:cls, reg r14:V, reg is_list:cls, reg r15:V, reg c21:L, reg c22:V, reg c24:L, reg new8:*, reg new9:V, reg c25:L, reg new11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r16:V, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c26:L, reg _CompletionEnv3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg new12:*, reg new13:V, reg length1:cls, reg r20:V, reg r21:V, reg c27:L, reg old:*, reg old1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg new14:*, reg new15:V, reg names1:cls, reg r26:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg nm:*, reg nm1:V, reg c28:V, reg c29:L, reg old2:*, reg old3:V, reg c30:L, reg old5:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg unlist:cls, reg new16:*, reg new17:V, reg p:p(V +), reg r30:V, reg __2:cls, reg r31:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg r35:V, reg nm2:*, reg nm3:V, reg nzchar:cls, reg r36:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg isNamed:*, reg isNamed1:V, reg r39:V, reg any:cls, reg r40:V, reg c31:L, reg unlist1:cls, reg new18:*, reg new19:V, reg c32:L, reg new21:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg isNamed2:*, reg isNamed3:V, reg r41:V, reg __3:cls, reg r42:V, reg p1:p(V +), reg r44:V, reg l:*, reg c33:L, reg r46:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx11:V, reg r48:V, reg dx12:V, reg isNamed4:*, reg isNamed5:V, reg r49:V, reg ___:cls, reg r50:V, reg old6:*, reg old7:V, reg c34:L, reg old9:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg nm4:*, reg nm5:V, reg __4:cls, reg r52:V, reg nm6:*, reg nm7:V, reg l3:*, reg names__:cls, reg r53:V, reg nm8:*, reg nm9:V, reg c35:L, reg nm11:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg isNamed6:*, reg isNamed7:V, reg __5:cls, reg r54:V, reg modifyList:cls, reg old10:*, reg old11:V, reg p2:p(V +), reg new22:*, reg new23:V, reg c36:L, reg new25:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg nm12:*, reg nm13:V, reg __6:cls, reg r56:V, reg p3:p(V +), reg r58:V, reg l4:*, reg c37:L, reg r60:V, reg l6:*, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg r63:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r64:V, reg r65:V, reg retVal:*, reg retVal1:V, reg invisible:cls, reg r66:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L0(r1):
    st new = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L27():
    list = ldf list;
    check L29() else D0();
  L28():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L37() else L3(c1);
  L29():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L30() else D1();
  L31():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L32():
    r3 = dyn base1(<lang names(new)>);
    goto L1(r3);
  D1():
    deopt 4 [r2];
  L2(r6):
    c = `==`(r6, NULL);
    goto L1(c);
  L3(c3):
    c10 = `as.logical`(c3);
    if c10 then L43() else L5(c10);
  L30():
    goto L0(r2);
  L33():
    new = ld new;
    check L35() else D2();
  L34():
    r5 = dyn base2(<sym new>);
    goto L2(r5);
  L37():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  D2():
    deopt 9 [new];
  L4(c6, r9):
    r11 = `==`(r9, 1);
    c7 = `as.logical`(r11);
    c8 = `&&`(c6, c7);
    goto L3(c8);
  L5(c12):
    c24 = `as.logical`(c12);
    if c24 then L52() else L8();
  L35():
    new1 = force? new;
    checkMissing(new1);
    names = ldf names in base;
    r7 = dyn names(new1);
    check L36() else D3();
  L38():
    new2 = ld new;
    check L40() else D4();
  L39():
    r8 = dyn base3(<sym new>);
    goto L4(c1, r8);
  L43():
    sym4 = ldf `is.list`;
    base4 = ldf `is.list` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D3():
    deopt 12 [r7];
  D4():
    deopt 16 [c1, new2];
  L6(c15, r13):
    c21 = `as.logical`(r13);
    c22 = `&&`(c15, c21);
    goto L5(c22);
  L8():
    goto L10();
  L10():
    _CompletionEnv = ld `.CompletionEnv`;
    check L58() else D9();
  L36():
    goto L2(r7);
  L40():
    new3 = force? new2;
    checkMissing(new3);
    length = ldf length in base;
    r10 = dyn length(new3);
    check L41() else D5();
  L44():
    new4 = ld new;
    check L46() else D6();
  L45():
    r12 = dyn base4(<lang `[[`(new, 1)>);
    goto L6(c10, r12);
  L52():
    new8 = ld new;
    check L53() else D8();
  D5():
    deopt 19 [c1, r10];
  D6():
    deopt 25 [c10, new4];
  D8():
    deopt 33 [new8];
  D9():
    deopt 41 [_CompletionEnv];
  L41():
    goto L4(c1, r10);
  L46():
    new5 = force? new4;
    checkMissing(new5);
    c16 = `is.object`(new5);
    if c16 then L47() else L48(c10, new5);
  L53():
    new9 = force? new8;
    checkMissing(new9);
    c25 = `is.object`(new9);
    if c25 then L54() else L55(new9);
  L58():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c26 = `is.object`(_CompletionEnv1);
    if c26 then L60() else L61(_CompletionEnv1);
  L7(c20, dx1):
    is_list = ldf `is.list` in base;
    r15 = dyn is_list(dx1);
    check L50() else D7();
  L9(dx3):
    st new = dx3;
    goto L10();
  L47():
    dr = tryDispatchBuiltin.1("[[", new5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L49() else L48(c10, dr);
  L48(c18, new7):
    __ = ldf `[[` in base;
    r14 = dyn __(new7, 1);
    goto L7(c18, r14);
  L54():
    dr2 = tryDispatchBuiltin.1("[[", new9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L56() else L55(dr2);
  L55(new11):
    __1 = ldf `[[` in base;
    r16 = dyn __1(new11, 1);
    goto L9(r16);
  L59(dx6):
    st old = dx6;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L60():
    dr4 = tryDispatchBuiltin.1("$", _CompletionEnv1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(dr4);
  L61(_CompletionEnv3):
    r17 = `$`(_CompletionEnv3, <sym options>);
    goto L59(r17);
  D7():
    deopt 31 [c20, r15];
  L11(r19):
    r21 = `==`(r19, 0);
    c27 = `as.logical`(r21);
    if c27 then L67() else L12();
  L49():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(c10, dx);
  L50():
    goto L6(c20, r15);
  L56():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L62():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L59(dx5);
  L63():
    new12 = ld new;
    check L65() else D10();
  L64():
    r18 = dyn base5(<sym new>);
    goto L11(r18);
  D10():
    deopt 47 [new12];
  L12():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  L65():
    new13 = force? new12;
    checkMissing(new13);
    length1 = ldf length in base;
    r20 = dyn length1(new13);
    check L66() else D11();
  L67():
    old = ld old;
    check L68() else D12();
  D11():
    deopt 50 [r20];
  D12():
    deopt 53 [old];
  L14(r25):
    st nm = r25;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  L66():
    goto L11(r20);
  L68():
    old1 = force? old;
    checkMissing(old1);
    popenv;
    return old1;
  L71():
    new14 = ld new;
    check L73() else D13();
  L72():
    r24 = dyn base6(<sym new>);
    goto L14(r24);
  D13():
    deopt 60 [new14];
  L15(r28):
    c29 = `as.logical`(r28);
    if c29 then L78() else L16();
  L73():
    new15 = force? new14;
    checkMissing(new15);
    names1 = ldf names in base;
    r26 = dyn names1(new15);
    check L74() else D14();
  L75():
    nm = ld nm;
    check L77() else D15();
  L76():
    r27 = dyn base7(<sym nm>);
    goto L15(r27);
  D14():
    deopt 63 [r26];
  D15():
    deopt 66 [nm];
  L16():
    sym8 = ldf nzchar;
    base8 = ldf nzchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L87() else L88();
  L74():
    goto L14(r26);
  L77():
    nm1 = force? nm;
    checkMissing(nm1);
    c28 = `==`(nm1, NULL);
    goto L15(c28);
  L78():
    old2 = ld old;
    check L79() else D16();
  D16():
    deopt 69 [old2];
  L19(r35):
    st isNamed = r35;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L91() else L92();
  L79():
    old3 = force? old2;
    checkMissing(old3);
    c30 = `is.object`(old3);
    if c30 then L80() else L81(old3);
  L87():
    nm2 = ld nm;
    check L89() else D19();
  L88():
    r34 = dyn base8(<sym nm>);
    goto L19(r34);
  D19():
    deopt 81 [nm2];
  L17(dx8):
    popenv;
    return dx8;
  L20(r38):
    c31 = `as.logical`(r38);
    if c31 then L95() else L21();
  L80():
    dr6 = tryDispatchBuiltin.1("[", old3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(dr6);
  L81(old5):
    unlist = ldf unlist;
    check L83() else D17();
  L89():
    nm3 = force? nm2;
    checkMissing(nm3);
    nzchar = ldf nzchar in base;
    r36 = dyn nzchar(nm3);
    check L90() else D20();
  L91():
    isNamed = ld isNamed;
    check L93() else D21();
  L92():
    r37 = dyn base9(<lang `!`(isNamed)>);
    goto L20(r37);
  D17():
    deopt 72 [old5];
  D20():
    deopt 84 [r36];
  D21():
    deopt 88 [isNamed];
  L21():
    goto L23();
  L23():
    old6 = ld old;
    check L103() else D26();
  L82():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L17(dx7);
  L83():
    p = prom<V +>{
      new16 = ld new;
      new17 = force? new16;
      checkMissing(new17);
      return new17;
    };
    r30 = dyn unlist(p);
    check L84() else D18();
  L90():
    goto L19(r36);
  L93():
    isNamed1 = force? isNamed;
    checkMissing(isNamed1);
    r39 = `!`(isNamed1);
    any = ldf any in base;
    r40 = dyn any(r39);
    check L94() else D22();
  L95():
    unlist1 = ldf unlist;
    check L96() else D23();
  D18():
    deopt 74 [old5, r30];
  D22():
    deopt 92 [r40];
  D23():
    deopt 94 [];
  D26():
    deopt 105 [old6];
  L84():
    __2 = ldf `[` in base;
    r31 = dyn __2(old5, r30);
    goto L17(r31);
  L94():
    goto L20(r40);
  L96():
    p1 = prom<V +>{
      new18 = ld new;
      new19 = force? new18;
      checkMissing(new19);
      c32 = `is.object`(new19);
      if c32 then L1() else L2(new19);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[", new19);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(new21):
      isNamed2 = ld isNamed;
      isNamed3 = force? isNamed2;
      checkMissing(isNamed3);
      r41 = `!`(isNamed3);
      __3 = ldf `[` in base;
      r42 = dyn __3(new21, r41);
      goto L0(r42);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r44 = dyn unlist1(p1);
    check L97() else D24();
  L103():
    old7 = force? old6;
    checkMissing(old7);
    c34 = `is.object`(old7);
    if c34 then L104() else L105(old7);
  D24():
    deopt 96 [r44];
  L24(dx14):
    st retVal = dx14;
    nm6 = ld nm;
    check L108() else D28();
  L97():
    l = ld nm;
    c33 = `is.object`(l);
    if c33 then L98() else L99(r44, l);
  L104():
    dr12 = tryDispatchBuiltin.1("[", old7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L106() else L105(dr12);
  L105(old9):
    nm4 = ld nm;
    check L107() else D27();
  D27():
    deopt 107 [old9, nm4];
  D28():
    deopt 111 [nm6];
  L22(r48, dx12):
    st nm = dx12;
    goto L23();
  L98():
    dr10 = tryDispatchBuiltin.0("[<-", l, r44);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L100() else L99(r44, dr10);
  L99(r46, l2):
    isNamed4 = ld isNamed;
    check L101() else D25();
  L106():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L24(dx13);
  L107():
    nm5 = force? nm4;
    __4 = ldf `[` in base;
    r52 = dyn __4(old9, nm5);
    goto L24(r52);
  L108():
    nm7 = force? nm6;
    checkMissing(nm7);
    l3 = ld retVal;
    names__ = ldf `names<-`;
    check L109() else D29();
  D25():
    deopt 98 [r46, l2, r44, isNamed4];
  D29():
    deopt 114 [nm7, l3, nm7];
  L100():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L22(r44, dx11);
  L101():
    isNamed5 = force? isNamed4;
    checkMissing(isNamed5);
    r49 = `!`(isNamed5);
    ___ = ldf `[<-` in base;
    r50 = dyn ___(l2, r44, r49);
    goto L22(r46, r50);
  L109():
    r53 = dyn names__(l3, NULL, nm7);
    check L110() else D30();
  D30():
    deopt 116 [nm7, r53];
  L110():
    st retVal = r53;
    nm8 = ld nm;
    check L111() else D31();
  D31():
    deopt 118 [nm8];
  L111():
    nm9 = force? nm8;
    checkMissing(nm9);
    c35 = `is.object`(nm9);
    if c35 then L112() else L113(nm9);
  L25(dx16):
    st nm = dx16;
    modifyList = ldf modifyList;
    check L116() else D33();
  L112():
    dr14 = tryDispatchBuiltin.1("[", nm9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L114() else L113(dr14);
  L113(nm11):
    isNamed6 = ld isNamed;
    check L115() else D32();
  D32():
    deopt 120 [nm11, isNamed6];
  D33():
    deopt 125 [];
  L114():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L25(dx15);
  L115():
    isNamed7 = force? isNamed6;
    __5 = ldf `[` in base;
    r54 = dyn __5(nm11, isNamed7);
    goto L25(r54);
  L116():
    p2 = prom<V +>{
      old10 = ld old;
      old11 = force? old10;
      checkMissing(old11);
      return old11;
    };
    p3 = prom<V +>{
      new22 = ld new;
      new23 = force? new22;
      checkMissing(new23);
      c36 = `is.object`(new23);
      if c36 then L1() else L2(new23);
    L0(dx18):
      return dx18;
    L1():
      dr16 = tryDispatchBuiltin.1("[", new23);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(new25):
      nm12 = ld nm;
      nm13 = force? nm12;
      __6 = ldf `[` in base;
      r56 = dyn __6(new25, nm13);
      goto L0(r56);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx17);
    };
    r58 = dyn modifyList(p2, p3);
    check L117() else D34();
  D34():
    deopt 128 [r58];
  L117():
    l4 = ld `.CompletionEnv`;
    c37 = `is.object`(l4);
    if c37 then L119() else L120(r58, l4);
  L118(dx20):
    st `.CompletionEnv` = dx20;
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L122() else L123();
  L119():
    dr18 = tryDispatchBuiltin.0("$<-", l4, r58);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L121() else L120(r58, dr18);
  L120(r60, l6):
    r63 = `$<-`(l6, <sym options>, r58);
    goto L118(r63);
  L26(r65):
    popenv;
    return r65;
  L121():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L118(dx19);
  L122():
    retVal = ld retVal;
    check L124() else D35();
  L123():
    r64 = dyn base10(<sym retVal>);
    goto L26(r64);
  D35():
    deopt 134 [retVal];
  L124():
    retVal1 = force? retVal;
    checkMissing(retVal1);
    invisible = ldf invisible in base;
    r66 = dyn invisible(retVal1);
    check L125() else D36();
  D36():
    deopt 137 [r66];
  L125():
    goto L26(r66);
  }
}