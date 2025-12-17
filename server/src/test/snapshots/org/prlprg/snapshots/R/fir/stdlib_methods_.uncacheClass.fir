fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2656251490;
    st `.uncacheClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2656251490(name, def) {
  (reg name:*, reg def:*) -+> V { var name:*, var def:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _classTable:*, reg _classTable1:V, reg c:L, reg _classTable3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name1:*, reg name2:V, reg __:cls, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg is:cls, reg def1:*, reg def2:V, reg p:p(V +), reg r5:V, reg c3:L, reg __1:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg name3:*, reg name4:V, reg _cache_class:cls, reg r10:V, reg is1:cls, reg prev:*, reg prev1:V, reg p1:p(V +), reg r12:V, reg c4:L, reg c6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg c9:L, reg r14:V, reg __2:cls, reg r15:V, reg newpkg:*, reg newpkg1:V, reg identical:cls, reg r16:V, reg c10:L, reg c11:V, reg c13:L, reg remove:cls, reg name5:*, reg name6:V, reg p2:p(V +), reg _classTable4:*, reg _classTable5:V, reg p3:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg newpkg2:*, reg newpkg3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg prev2:*, reg prev3:V, reg names:cls, reg r26:V, reg match:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg i:*, reg i1:V, reg is_na:cls, reg r30:V, reg r31:V, reg c14:L, reg l:*, reg c15:L, reg r33:dots, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i2:*, reg i3:V, reg ____:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg prev4:*, reg prev5:V, reg length:cls, reg r40:V, reg r41:V, reg c16:L, reg remove1:cls, reg name7:*, reg name8:V, reg p4:p(V +), reg _classTable6:*, reg _classTable7:V, reg p5:p(V +), reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg prev6:*, reg prev7:V, reg length1:cls, reg r49:V, reg r50:V, reg c17:L, reg prev8:*, reg prev9:V, reg c18:L, reg prev11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __3:cls, reg r51:V, reg assign:cls, reg name9:*, reg name10:V, reg p6:p(V +), reg prev12:*, reg prev13:V, reg p7:p(V +), reg _classTable8:*, reg _classTable9:V, reg p8:p(V +), reg r55:V |
    mkenv;
    st name = name;
    st def = def;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L29() else L2();
  L22():
    _classTable = ld `.classTable`;
    check L24() else D0();
  L23():
    r = dyn base(<lang `<-`(prev, `[[`(.classTable, name))>);
    goto L0(r);
  D0():
    deopt 1 [_classTable];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L24():
    _classTable1 = force? _classTable;
    checkMissing(_classTable1);
    c = `is.object`(_classTable1);
    if c then L25() else L26(_classTable1);
  L29():
    is = ldf is;
    check L30() else D2();
  D2():
    deopt 10 [];
  L1(dx1):
    st prev = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L25():
    dr = tryDispatchBuiltin.1("[[", _classTable1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(_classTable3):
    name1 = ld name;
    check L28() else D1();
  L30():
    p = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    r5 = dyn is(p, "classRepresentation");
    check L31() else D3();
  D1():
    deopt 3 [_classTable3, name1];
  D3():
    deopt 13 [r5];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L28():
    name2 = force? name1;
    __ = ldf `[[` in base;
    r2 = dyn __(_classTable3, name2);
    goto L1(r2);
  L31():
    c3 = `as.logical`(r5);
    if c3 then L32() else L3();
  L3():
    st newpkg = "";
    goto L4();
  L4():
    sym1 = ldf `.cache_class`;
    base1 = ldf `.cache_class` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L32():
    __1 = ldf `@` in base;
    r6 = dyn __1(<sym def>, <sym package>);
    st newpkg = r6;
    goto L4();
  L5():
    is1 = ldf is;
    check L38() else D6();
  L34():
    name3 = ld name;
    check L36() else D4();
  L35():
    r8 = dyn base1(<sym name>, NULL);
    goto L5();
  D4():
    deopt 22 [name3];
  D6():
    deopt 28 [];
  L36():
    name4 = force? name3;
    checkMissing(name4);
    _cache_class = ldf `.cache_class` in base;
    r10 = dyn _cache_class(name4, NULL);
    check L37() else D5();
  L38():
    p1 = prom<V +>{
      prev = ld prev;
      prev1 = force? prev;
      checkMissing(prev1);
      return prev1;
    };
    r12 = dyn is1(p1, "classRepresentation");
    check L39() else D7();
  D5():
    deopt 26 [r10];
  D7():
    deopt 31 [r12];
  L37():
    goto L5();
  L39():
    c4 = `as.logical`(r12);
    if c4 then L40() else L6(c4);
  L6(c6):
    c13 = `as.logical`(c6);
    if c13 then L46() else L8();
  L40():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L7(c9, r14):
    c10 = `as.logical`(r14);
    c11 = `&&`(c9, c10);
    goto L6(c11);
  L8():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L41():
    __2 = ldf `@` in base;
    r15 = dyn __2(<sym prev>, <sym package>);
    newpkg = ld newpkg;
    check L43() else D8();
  L42():
    r13 = dyn base2(<lang `@`(prev, package)>, <sym newpkg>);
    goto L7(c4, r13);
  L46():
    remove = ldf remove;
    check L47() else D10();
  D8():
    deopt 36 [c4, newpkg];
  D10():
    deopt 49 [];
  L10(r23):
    st i = r23;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L43():
    newpkg1 = force? newpkg;
    checkMissing(newpkg1);
    identical = ldf identical in base;
    r16 = dyn identical(r15, newpkg1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L44() else D9();
  L47():
    p2 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p3 = prom<V +>{
      _classTable4 = ld `.classTable`;
      _classTable5 = force? _classTable4;
      checkMissing(_classTable5);
      return _classTable5;
    };
    r19 = dyn remove[list, envir](p2, p3);
    check L48() else D11();
  L51():
    newpkg2 = ld newpkg;
    check L53() else D12();
  L52():
    r22 = dyn base3(<sym newpkg>, <lang names(prev)>);
    goto L10(r22);
  D9():
    deopt 46 [c4, r16];
  D11():
    deopt 54 [r19];
  D12():
    deopt 60 [newpkg2];
  L12(r29):
    r31 = `!`(r29);
    c14 = `as.logical`(r31);
    if c14 then L63() else L13();
  L44():
    goto L7(c4, r16);
  L48():
    popenv;
    return r19;
  L53():
    newpkg3 = force? newpkg2;
    checkMissing(newpkg3);
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L59():
    i = ld i;
    check L61() else D16();
  L60():
    r28 = dyn base5(<sym i>);
    goto L12(r28);
  D16():
    deopt 75 [i];
  L11(r25):
    match = ldf match in base;
    r27 = dyn match(newpkg3, r25, NA_INT, NULL);
    check L58() else D15();
  L13():
    popenv;
    return NULL;
  L54():
    prev2 = ld prev;
    check L56() else D13();
  L55():
    r24 = dyn base4(<sym prev>);
    goto L11(r24);
  L61():
    i1 = force? i;
    checkMissing(i1);
    is_na = ldf `is.na` in base;
    r30 = dyn is_na(i1);
    check L62() else D17();
  L63():
    l = ld prev;
    c15 = `is.object`(l);
    if c15 then L64() else L65(NULL, l);
  D13():
    deopt 64 [prev2];
  D15():
    deopt 71 [r27];
  D17():
    deopt 78 [r30];
  L14(dx3):
    st prev = dx3;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  L56():
    prev3 = force? prev2;
    checkMissing(prev3);
    names = ldf names in base;
    r26 = dyn names(prev3);
    check L57() else D14();
  L58():
    goto L10(r27);
  L62():
    goto L12(r30);
  L64():
    dr2 = tryDispatchBuiltin.0("[[<-", l, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(NULL, dr2);
  L65(r33, l2):
    i2 = ld i;
    check L67() else D18();
  D14():
    deopt 67 [r26];
  D18():
    deopt 83 [r33, l2, NULL, i2];
  L16(r39):
    r41 = `==`(r39, 0);
    c16 = `as.logical`(r41);
    if c16 then L74() else L17();
  L57():
    goto L11(r26);
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx2);
  L67():
    i3 = force? i2;
    ____ = ldf `[[<-` in base;
    r36 = dyn ____(l2, NULL, i3);
    goto L14(r36);
  L70():
    prev4 = ld prev;
    check L72() else D19();
  L71():
    r38 = dyn base6(<sym prev>);
    goto L16(r38);
  D19():
    deopt 92 [prev4];
  L17():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  L72():
    prev5 = force? prev4;
    checkMissing(prev5);
    length = ldf length in base;
    r40 = dyn length(prev5);
    check L73() else D20();
  L74():
    remove1 = ldf remove;
    check L75() else D21();
  D20():
    deopt 95 [r40];
  D21():
    deopt 99 [];
  L19(r48):
    r50 = `==`(r48, 1);
    c17 = `as.logical`(r50);
    if c17 then L83() else L20();
  L73():
    goto L16(r40);
  L75():
    p4 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    p5 = prom<V +>{
      _classTable6 = ld `.classTable`;
      _classTable7 = force? _classTable6;
      checkMissing(_classTable7);
      return _classTable7;
    };
    r44 = dyn remove1[list, envir](p4, p5);
    check L76() else D22();
  L79():
    prev6 = ld prev;
    check L81() else D23();
  L80():
    r47 = dyn base7(<sym prev>);
    goto L19(r47);
  D22():
    deopt 104 [r44];
  D23():
    deopt 108 [prev6];
  L18():
    assign = ldf assign;
    check L89() else D26();
  L20():
    goto L18();
  L76():
    popenv;
    return r44;
  L81():
    prev7 = force? prev6;
    checkMissing(prev7);
    length1 = ldf length in base;
    r49 = dyn length1(prev7);
    check L82() else D24();
  L83():
    prev8 = ld prev;
    check L84() else D25();
  D24():
    deopt 111 [r49];
  D25():
    deopt 114 [prev8];
  D26():
    deopt 123 [];
  L82():
    goto L19(r49);
  L84():
    prev9 = force? prev8;
    checkMissing(prev9);
    c18 = `is.object`(prev9);
    if c18 then L85() else L86(prev9);
  L89():
    p6 = prom<V +>{
      name9 = ld name;
      name10 = force? name9;
      checkMissing(name10);
      return name10;
    };
    p7 = prom<V +>{
      prev12 = ld prev;
      prev13 = force? prev12;
      checkMissing(prev13);
      return prev13;
    };
    p8 = prom<V +>{
      _classTable8 = ld `.classTable`;
      _classTable9 = force? _classTable8;
      checkMissing(_classTable9);
      return _classTable9;
    };
    r55 = dyn assign[, , envir](p6, p7, p8);
    check L90() else D27();
  D27():
    deopt 128 [r55];
  L21(dx5):
    st prev = dx5;
    goto L18();
  L85():
    dr4 = tryDispatchBuiltin.1("[[", prev9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L87() else L86(dr4);
  L86(prev11):
    __3 = ldf `[[` in base;
    r51 = dyn __3(prev11, 1);
    goto L21(r51);
  L90():
    popenv;
    return r55;
  L87():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L21(dx4);
  }
}