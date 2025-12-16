fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1156962967;
    st `c.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1156962967(`...`, recursive) {
  (reg ddd:dots, reg recursive:*) -+> V { var `...`:dots?, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg ddd1:dots?, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg args:*, reg args1:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg _difftime:cls, reg double:cls, reg r8:V, reg p:p(V +), reg r10:V, reg sapply:cls, reg args2:*, reg args3:V, reg p1:p(V +), reg inherits:*, reg inherits1:V, reg p2:p(V +), reg r15:V, reg which:cls, reg ind:*, reg ind1:V, reg r16:V, reg p3:p(V +), reg r18:V, reg sapply1:cls, reg args4:*, reg args5:V, reg c1:L, reg args7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind2:*, reg ind3:V, reg __:cls, reg r19:V, reg p4:p(V +), reg attr:*, reg attr1:V, reg p5:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg units:*, reg units1:V, reg units2:*, reg units3:V, reg c2:L, reg units6:V, reg units7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg units9:V, reg dx3:V, reg __1:cls, reg r25:V, reg r26:V, reg all:cls, reg r27:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg pos:*, reg pos1:V, reg length1:cls, reg r30:V, reg c4:L, reg lapply:cls, reg args8:*, reg args9:V, reg c5:L, reg args11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg pos2:*, reg pos3:V, reg __2:cls, reg r31:V, reg p6:p(V +), reg as_difftime:*, reg as_difftime1:V, reg p7:p(V +), reg un1:*, reg un2:V, reg p8:p(V +), reg r35:V, reg l:*, reg c6:L, reg r37:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r39:V, reg dx7:V, reg pos4:*, reg pos5:V, reg ___:cls, reg r40:V, reg _difftime1:cls, reg unlist:cls, reg args12:*, reg args13:V, reg p9:p(V +), reg r43:V, reg p10:p(V +), reg un3:*, reg un4:V, reg p11:p(V +), reg r46:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg pos6:*, reg pos7:V, reg length2:cls, reg r49:V, reg c7:L, reg lapply1:cls, reg args14:*, reg args15:V, reg c8:L, reg args17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pos8:*, reg pos9:V, reg __3:cls, reg r50:V, reg p12:p(V +), reg as_difftime2:*, reg as_difftime3:V, reg p13:p(V +), reg r53:V, reg l3:*, reg c9:L, reg r55:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r57:V, reg dx11:V, reg pos10:*, reg pos11:V, reg ___1:cls, reg r58:V, reg lapply2:cls, reg args18:*, reg args19:V, reg c10:L, reg args21:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ind4:*, reg ind5:V, reg __4:cls, reg r60:V, reg p14:p(V +), reg coerceTimeUnit:*, reg coerceTimeUnit1:V, reg p15:p(V +), reg r63:V, reg l6:*, reg c11:L, reg r65:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ind6:*, reg ind7:V, reg ___2:cls, reg r68:V, reg _difftime2:cls, reg unlist1:cls, reg args22:*, reg args23:V, reg p16:p(V +), reg r70:V, reg p17:p(V +), reg r72:V |
    mkenv;
    st `...` = ddd;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    r = clos inner354062069;
    st coerceTimeUnit = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r2):
    st args = r2;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L17():
    list = ldf list;
    check L19() else D0();
  L18():
    r1 = dyn base(<sym ...>);
    goto L1(r1);
  D0():
    deopt 5 [];
  L2(r5):
    r7 = `!`(r5);
    c = `as.logical`(r7);
    if c then L25() else L3();
  L19():
    ddd1 = ld `...`;
    r3 = dyn list[`...`](ddd1);
    check L20() else D1();
  L21():
    args = ld args;
    check L23() else D2();
  L22():
    r4 = dyn base1(<sym args>);
    goto L2(r4);
  D1():
    deopt 7 [r3];
  D2():
    deopt 11 [args];
  L3():
    sapply = ldf sapply;
    check L30() else D6();
  L20():
    goto L1(r3);
  L23():
    args1 = force? args;
    checkMissing(args1);
    length = ldf length in base;
    r6 = dyn length(args1);
    check L24() else D3();
  L25():
    _difftime = ldf `.difftime`;
    check L26() else D4();
  D3():
    deopt 14 [r6];
  D4():
    deopt 17 [];
  D6():
    deopt 25 [];
  L24():
    goto L2(r6);
  L26():
    p = prom<V +>{
      double = ldf double;
      r8 = dyn double();
      return r8;
    };
    r10 = dyn _difftime(p, "secs");
    check L27() else D5();
  L30():
    p1 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    p2 = prom<V +>{
      inherits = ld inherits;
      inherits1 = force? inherits;
      checkMissing(inherits1);
      return inherits1;
    };
    r15 = dyn sapply(p1, p2, "difftime");
    check L31() else D7();
  D5():
    deopt 20 [r10];
  D7():
    deopt 29 [r15];
  L27():
    popenv;
    return r10;
  L31():
    st ind = r15;
    which = ldf which;
    check L32() else D8();
  D8():
    deopt 32 [];
  L32():
    p3 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      r16 = `!`(ind1);
      return r16;
    };
    r18 = dyn which(p3);
    check L33() else D9();
  D9():
    deopt 34 [r18];
  L33():
    st pos = r18;
    sapply1 = ldf sapply;
    check L34() else D10();
  D10():
    deopt 37 [];
  L34():
    p4 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      c1 = `is.object`(args5);
      if c1 then L1() else L2(args5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", args5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(args7):
      ind2 = ld ind;
      ind3 = force? ind2;
      __ = ldf `[` in base;
      r19 = dyn __(args7, ind3);
      goto L0(r19);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p5 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r22 = dyn sapply1(p4, p5, "units");
    check L35() else D11();
  D11():
    deopt 41 [r22];
  L35():
    st units = r22;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L5(r24):
    c3 = `as.logical`(r24);
    if c3 then L44() else L7();
  L36():
    units = ld units;
    check L38() else D12();
  L37():
    r23 = dyn base2(<lang `==`(units, `(`(`<-`(un1, `[`(units, 1))))>);
    goto L5(r23);
  D12():
    deopt 45 [units];
  L7():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L38():
    units1 = force? units;
    checkMissing(units1);
    units2 = ld units;
    check L39() else D13();
  L44():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  D13():
    deopt 46 [units1, units2];
  L8(r29):
    c4 = `as.logical`(r29);
    if c4 then L49() else L9();
  L12(r48):
    c7 = `as.logical`(r48);
    if c7 then L64() else L13();
  L39():
    units3 = force? units2;
    checkMissing(units3);
    c2 = `is.object`(units3);
    if c2 then L40() else L41(units1, units3);
  L45():
    pos = ld pos;
    check L47() else D15();
  L46():
    r28 = dyn base3(<sym pos>);
    goto L8(r28);
  L60():
    pos6 = ld pos;
    check L62() else D22();
  L61():
    r47 = dyn base4(<sym pos>);
    goto L12(r47);
  D15():
    deopt 57 [pos];
  D22():
    deopt 82 [pos6];
  L6(units9, dx3):
    st un1 = dx3;
    r26 = `==`(units9, dx3);
    all = ldf all in base;
    r27 = dyn all(r26);
    check L43() else D14();
  L9():
    goto L11();
  L11():
    _difftime1 = ldf `.difftime`;
    check L57() else D20();
  L13():
    goto L15();
  L15():
    lapply2 = ldf lapply;
    check L72() else D27();
  L40():
    dr2 = tryDispatchBuiltin.1("[", units3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(units1, dr2);
  L41(units6, units7):
    __1 = ldf `[` in base;
    r25 = dyn __1(units7, 1);
    goto L6(units6, r25);
  L47():
    pos1 = force? pos;
    checkMissing(pos1);
    length1 = ldf length in base;
    r30 = dyn length1(pos1);
    check L48() else D16();
  L49():
    lapply = ldf lapply;
    check L50() else D17();
  L62():
    pos7 = force? pos6;
    checkMissing(pos7);
    length2 = ldf length in base;
    r49 = dyn length2(pos7);
    check L63() else D23();
  L64():
    lapply1 = ldf lapply;
    check L65() else D24();
  D14():
    deopt 54 [r27];
  D16():
    deopt 60 [r30];
  D17():
    deopt 62 [];
  D20():
    deopt 76 [];
  D23():
    deopt 85 [r49];
  D24():
    deopt 87 [];
  D27():
    deopt 101 [];
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(units1, dx2);
  L43():
    goto L5(r27);
  L48():
    goto L8(r30);
  L50():
    p6 = prom<V +>{
      args8 = ld args;
      args9 = force? args8;
      checkMissing(args9);
      c5 = `is.object`(args9);
      if c5 then L1() else L2(args9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", args9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(args11):
      pos2 = ld pos;
      pos3 = force? pos2;
      __2 = ldf `[` in base;
      r31 = dyn __2(args11, pos3);
      goto L0(r31);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p7 = prom<V +>{
      as_difftime = ld `as.difftime`;
      as_difftime1 = force? as_difftime;
      checkMissing(as_difftime1);
      return as_difftime1;
    };
    p8 = prom<V +>{
      un1 = ld un1;
      un2 = force? un1;
      checkMissing(un2);
      return un2;
    };
    r35 = dyn lapply[, , units](p6, p7, p8);
    check L51() else D18();
  L57():
    p10 = prom<V +>{
      unlist = ldf unlist;
      p9 = prom<V +>{
        args12 = ld args;
        args13 = force? args12;
        checkMissing(args13);
        return args13;
      };
      r43 = dyn unlist(p9);
      return r43;
    };
    p11 = prom<V +>{
      un3 = ld un1;
      un4 = force? un3;
      checkMissing(un4);
      return un4;
    };
    r46 = dyn _difftime1(p10, p11);
    check L58() else D21();
  L63():
    goto L12(r49);
  L65():
    p12 = prom<V +>{
      args14 = ld args;
      args15 = force? args14;
      checkMissing(args15);
      c8 = `is.object`(args15);
      if c8 then L1() else L2(args15);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", args15);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(args17):
      pos8 = ld pos;
      pos9 = force? pos8;
      __3 = ldf `[` in base;
      r50 = dyn __3(args17, pos9);
      goto L0(r50);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p13 = prom<V +>{
      as_difftime2 = ld `as.difftime`;
      as_difftime3 = force? as_difftime2;
      checkMissing(as_difftime3);
      return as_difftime3;
    };
    r53 = dyn lapply1[, , units](p12, p13, "secs");
    check L66() else D25();
  L72():
    p14 = prom<V +>{
      args18 = ld args;
      args19 = force? args18;
      checkMissing(args19);
      c10 = `is.object`(args19);
      if c10 then L1() else L2(args19);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", args19);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(args21):
      ind4 = ld ind;
      ind5 = force? ind4;
      __4 = ldf `[` in base;
      r60 = dyn __4(args21, ind5);
      goto L0(r60);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p15 = prom<V +>{
      coerceTimeUnit = ld coerceTimeUnit;
      coerceTimeUnit1 = force? coerceTimeUnit;
      checkMissing(coerceTimeUnit1);
      return coerceTimeUnit1;
    };
    r63 = dyn lapply2(p14, p15);
    check L73() else D28();
  D18():
    deopt 67 [r35];
  D21():
    deopt 79 [r46];
  D25():
    deopt 92 [r53];
  D28():
    deopt 104 [r63];
  L51():
    l = ld args;
    c6 = `is.object`(l);
    if c6 then L52() else L53(r35, l);
  L58():
    popenv;
    return r46;
  L66():
    l3 = ld args;
    c9 = `is.object`(l3);
    if c9 then L67() else L68(r53, l3);
  L73():
    l6 = ld args;
    c11 = `is.object`(l6);
    if c11 then L74() else L75(r63, l6);
  L10(r39, dx7):
    st args = dx7;
    goto L11();
  L14(r57, dx11):
    st args = dx11;
    goto L15();
  L16(dx15):
    st args = dx15;
    _difftime2 = ldf `.difftime`;
    check L78() else D30();
  L52():
    dr6 = tryDispatchBuiltin.0("[<-", l, r35);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L54() else L53(r35, dr6);
  L53(r37, l2):
    pos4 = ld pos;
    check L55() else D19();
  L67():
    dr10 = tryDispatchBuiltin.0("[<-", l3, r53);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L69() else L68(r53, dr10);
  L68(r55, l5):
    pos10 = ld pos;
    check L70() else D26();
  L74():
    dr14 = tryDispatchBuiltin.0("[<-", l6, r63);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L76() else L75(r63, dr14);
  L75(r65, l8):
    ind6 = ld ind;
    check L77() else D29();
  D19():
    deopt 69 [r37, l2, r35, pos4];
  D26():
    deopt 94 [r55, l5, r53, pos10];
  D29():
    deopt 106 [r65, l8, r63, ind6];
  D30():
    deopt 111 [];
  L54():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(r35, dx6);
  L55():
    pos5 = force? pos4;
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l2, r35, pos5);
    goto L10(r37, r40);
  L69():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L14(r53, dx10);
  L70():
    pos11 = force? pos10;
    ___1 = ldf `[<-` in base;
    r58 = dyn ___1(l5, r53, pos11);
    goto L14(r55, r58);
  L76():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L16(dx14);
  L77():
    ind7 = force? ind6;
    ___2 = ldf `[<-` in base;
    r68 = dyn ___2(l8, r63, ind7);
    goto L16(r68);
  L78():
    p17 = prom<V +>{
      unlist1 = ldf unlist;
      p16 = prom<V +>{
        args22 = ld args;
        args23 = force? args22;
        checkMissing(args23);
        return args23;
      };
      r70 = dyn unlist1(p16);
      return r70;
    };
    r72 = dyn _difftime2(p17, "secs");
    check L79() else D31();
  D31():
    deopt 114 [r72];
  L79():
    popenv;
    return r72;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg i_ddd:dots, reg i:V, reg c8:L, reg c9:L, reg c10:L, reg c11:L, reg c12:L, reg x3:*, reg x4:V, reg x5:*, reg x6:V, reg r3:V, reg x7:*, reg x8:V, reg r4:V, reg x9:*, reg x10:V, reg r5:V, reg x11:*, reg x12:V, reg r6:V |
    mkenv;
    st x = x;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `is.vector`(r1, "any");
    if c then L11() else L12();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>, "units");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "units");
    check L10() else D1();
  L11():
    c1 = inherits(r1, "factor", FALSE);
    if c1 then L13() else L14();
  L12():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  D1():
    deopt 6 [r2];
  L10():
    goto L0(r2);
  L13():
    c2 = `is.character`(r1);
    if c2 then L15() else L16();
  L14():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L13();
  L1():
    x3 = ld x;
    check L28() else D2();
  L2():
    x5 = ld x;
    check L30() else D3();
  L3():
    x7 = ld x;
    check L32() else D4();
  L4():
    x9 = ld x;
    check L34() else D5();
  L5():
    x11 = ld x;
    check L36() else D6();
  L6():
    invisible.0();
    popenv;
    return NULL;
  L15():
    c3 = `==`.6(r1, "secs");
    if c3 then L1() else L17();
  L16():
    i_ddd = dots[r1];
    i = `as.integer`(i_ddd);
    c8 = `==`.5(i, 1);
    if c8 then L1() else L22();
  D2():
    deopt 10 [x3];
  D3():
    deopt 13 [60.0, x5];
  D4():
    deopt 17 [3600.0, x7];
  D5():
    deopt 21 [86400.0, x9];
  D6():
    deopt 25 [604800.0, x11];
  L17():
    c4 = `==`.6(r1, "mins");
    if c4 then L2() else L18();
  L22():
    c9 = `==`.5(i, 2);
    if c9 then L2() else L23();
  L28():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L30():
    x6 = force? x5;
    checkMissing(x6);
    r3 = `*`(60.0, x6);
    popenv;
    return r3;
  L32():
    x8 = force? x7;
    checkMissing(x8);
    r4 = `*`(3600.0, x8);
    popenv;
    return r4;
  L34():
    x10 = force? x9;
    checkMissing(x10);
    r5 = `*`(86400.0, x10);
    popenv;
    return r5;
  L36():
    x12 = force? x11;
    checkMissing(x12);
    r6 = `*`(604800.0, x12);
    popenv;
    return r6;
  L18():
    c5 = `==`.6(r1, "hours");
    if c5 then L3() else L19();
  L23():
    c10 = `==`.5(i, 3);
    if c10 then L3() else L24();
  L19():
    c6 = `==`.6(r1, "days");
    if c6 then L4() else L20();
  L24():
    c11 = `==`.5(i, 4);
    if c11 then L4() else L25();
  L20():
    c7 = `==`.6(r1, "weeks");
    if c7 then L5() else L21();
  L25():
    c12 = `==`.5(i, 5);
    if c12 then L5() else L26();
  L21():
    goto L6();
  L26():
    goto L6();
  }
}