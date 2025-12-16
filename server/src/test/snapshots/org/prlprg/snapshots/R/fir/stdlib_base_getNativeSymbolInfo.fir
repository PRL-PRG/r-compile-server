fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-221425151`;
    st getNativeSymbolInfo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-221425151`(name, PACKAGE, unlist, withRegistrationInfo) {
  (reg name:*, reg PACKAGE:*, reg unlist:*, reg withRegistrationInfo:*) -+> V { var name:*, var PACKAGE:*, var unlist:*, reg unlist_isMissing:L, reg unlist_orDefault:*, var withRegistrationInfo:*, reg withRegistrationInfo_isMissing:L, reg withRegistrationInfo_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg PACKAGE1:*, reg PACKAGE2:V, reg c1:L, reg c2:L, reg PACKAGE3:*, reg PACKAGE4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg PACKAGE6:*, reg PACKAGE7:V, reg inherits:cls, reg r8:V, reg c3:L, reg PACKAGE8:*, reg PACKAGE9:V, reg c4:L, reg PACKAGE11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg PACKAGE12:*, reg PACKAGE13:V, reg c5:L, reg PACKAGE15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg PACKAGE16:*, reg PACKAGE17:V, reg inherits1:cls, reg r13:V, reg c6:L, reg character:cls, reg r14:V, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r15:V, reg p:p(V +), reg dQuote1:cls, reg r17:V, reg p1:p(V +), reg r19:V, reg p2:p(V +), reg r21:V, reg lapply:cls, reg name1:*, reg name2:V, reg p3:p(V +), reg r23:cls, reg p4:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg name3:*, reg name4:V, reg length:cls, reg r28:V, reg r29:V, reg c7:L, reg c9:V, reg unlist1:*, reg unlist2:V, reg c10:L, reg c11:V, reg c13:L, reg syms:*, reg syms1:V, reg c14:L, reg syms3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r30:V, reg name5:*, reg name6:V, reg l:*, reg names__:cls, reg r31:V, reg syms4:*, reg syms5:V |
    mkenv;
    st name = name;
    st PACKAGE = PACKAGE;
    unlist_isMissing = missing.0(unlist);
    if unlist_isMissing then L0(TRUE) else L0(unlist);
  L0(unlist_orDefault):
    st unlist = unlist_orDefault;
    withRegistrationInfo_isMissing = missing.0(withRegistrationInfo);
    if withRegistrationInfo_isMissing then L1(FALSE) else L1(withRegistrationInfo);
  L1(withRegistrationInfo_orDefault):
    st withRegistrationInfo = withRegistrationInfo_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r1):
    c = `as.logical`(r1);
    if c then L21() else L3();
  L19():
    missing = ldf missing in base;
    r2 = dyn missing(<sym PACKAGE>);
    goto L2(r2);
  L20():
    r = dyn base(<sym PACKAGE>);
    goto L2(r);
  L3():
    goto L4();
  L4():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L21():
    st PACKAGE = "";
    goto L4();
  L5(r5):
    c2 = `as.logical`(r5);
    if c2 then L26() else L6();
  L23():
    PACKAGE1 = ld PACKAGE;
    check L25() else D0();
  L24():
    r4 = dyn base1(<sym PACKAGE>);
    goto L5(r4);
  D0():
    deopt 9 [PACKAGE1];
  L6():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L7():
    lapply = ldf lapply;
    check L53() else D12();
  L25():
    PACKAGE2 = force? PACKAGE1;
    checkMissing(PACKAGE2);
    c1 = `is.character`(PACKAGE2);
    goto L5(c1);
  L26():
    PACKAGE3 = ld PACKAGE;
    check L27() else D1();
  D1():
    deopt 12 [PACKAGE3];
  D12():
    deopt 54 [];
  L8(r7):
    c3 = `as.logical`(r7);
    if c3 then L33() else L9();
  L27():
    PACKAGE4 = force? PACKAGE3;
    checkMissing(PACKAGE4);
    st pkgName = PACKAGE4;
    goto L7();
  L29():
    PACKAGE6 = ld PACKAGE;
    check L31() else D2();
  L30():
    r6 = dyn base2(<sym PACKAGE>, "DLLInfo");
    goto L8(r6);
  L53():
    p3 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p4 = prom<V +>{
      r23 = clos inner110540412;
      return r23;
    };
    r25 = dyn lapply(p3, p4);
    check L54() else D13();
  D2():
    deopt 17 [PACKAGE6];
  D13():
    deopt 57 [r25];
  L9():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L31():
    PACKAGE7 = force? PACKAGE6;
    checkMissing(PACKAGE7);
    inherits = ldf inherits in base;
    r8 = dyn inherits(PACKAGE7, "DLLInfo", FALSE);
    check L32() else D3();
  L33():
    PACKAGE8 = ld PACKAGE;
    check L34() else D4();
  L54():
    st syms = r25;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  D3():
    deopt 22 [r8];
  D4():
    deopt 23 [PACKAGE8];
  L12(r12):
    c6 = `as.logical`(r12);
    if c6 then L47() else L13();
  L14(r27):
    r29 = `==`(r27, 1);
    c7 = `as.logical`(r29);
    if c7 then L59() else L15(c7);
  L32():
    goto L8(r8);
  L34():
    PACKAGE9 = force? PACKAGE8;
    checkMissing(PACKAGE9);
    c4 = `is.object`(PACKAGE9);
    if c4 then L35() else L36(PACKAGE9);
  L43():
    PACKAGE16 = ld PACKAGE;
    check L45() else D6();
  L44():
    r11 = dyn base3(<sym PACKAGE>, "DLLInfoReference");
    goto L12(r11);
  L55():
    name3 = ld name;
    check L57() else D14();
  L56():
    r26 = dyn base4(<sym name>);
    goto L14(r26);
  D6():
    deopt 37 [PACKAGE16];
  D14():
    deopt 61 [name3];
  L10(dx1):
    st pkgName = dx1;
    PACKAGE12 = ld PACKAGE;
    check L38() else D5();
  L13():
    stop = ldf stop;
    check L51() else D10();
  L15(c9):
    c13 = `as.logical`(c9);
    if c13 then L62() else L16();
  L35():
    dr = tryDispatchBuiltin.1("[[", PACKAGE9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(PACKAGE11):
    __ = ldf `[[` in base;
    r9 = dyn __(PACKAGE11, "path");
    goto L10(r9);
  L45():
    PACKAGE17 = force? PACKAGE16;
    checkMissing(PACKAGE17);
    inherits1 = ldf inherits in base;
    r13 = dyn inherits1(PACKAGE17, "DLLInfoReference", FALSE);
    check L46() else D7();
  L47():
    character = ldf character;
    check L48() else D8();
  L57():
    name4 = force? name3;
    checkMissing(name4);
    length = ldf length in base;
    r28 = dyn length(name4);
    check L58() else D15();
  L59():
    unlist1 = ld unlist;
    check L60() else D16();
  D5():
    deopt 29 [PACKAGE12];
  D7():
    deopt 42 [r13];
  D8():
    deopt 44 [];
  D10():
    deopt 48 [];
  D15():
    deopt 64 [r28];
  D16():
    deopt 67 [c7, unlist1];
  L16():
    name5 = ld name;
    check L68() else D18();
  L18():
    syms4 = ld syms;
    check L71() else D21();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L38():
    PACKAGE13 = force? PACKAGE12;
    checkMissing(PACKAGE13);
    c5 = `is.object`(PACKAGE13);
    if c5 then L39() else L40(PACKAGE13);
  L46():
    goto L12(r13);
  L48():
    r14 = dyn character();
    check L49() else D9();
  L51():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        dQuote = ldf dQuote;
        r15 = dyn dQuote("DLLInfo");
        return r15;
      };
      p1 = prom<V +>{
        dQuote1 = ldf dQuote;
        r17 = dyn dQuote1("DllInfoReference");
        return r17;
      };
      r19 = dyn gettextf("must pass a package name, %s or %s object", p, p1);
      return r19;
    };
    r21 = dyn stop[, domain](p2, NA_LGL);
    check L52() else D11();
  L58():
    goto L14(r28);
  L60():
    unlist2 = force? unlist1;
    checkMissing(unlist2);
    c10 = `as.logical`(unlist2);
    c11 = `&&`(c7, c10);
    goto L15(c11);
  L62():
    syms = ld syms;
    check L63() else D17();
  D9():
    deopt 45 [r14];
  D11():
    deopt 52 [r21];
  D17():
    deopt 70 [syms];
  D18():
    deopt 76 [name5];
  D21():
    deopt 83 [syms4];
  L11(dx3):
    st PACKAGE = dx3;
    goto L7();
  L39():
    dr2 = tryDispatchBuiltin.1("[[", PACKAGE13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(PACKAGE15):
    __1 = ldf `[[` in base;
    r10 = dyn __1(PACKAGE15, "info");
    goto L11(r10);
  L49():
    st pkgName = r14;
    goto L7();
  L52():
    goto L7();
  L63():
    syms1 = force? syms;
    checkMissing(syms1);
    c14 = `is.object`(syms1);
    if c14 then L64() else L65(syms1);
  L68():
    name6 = force? name5;
    checkMissing(name6);
    l = ld syms;
    names__ = ldf `names<-`;
    check L69() else D19();
  L71():
    syms5 = force? syms4;
    checkMissing(syms5);
    popenv;
    return syms5;
  D19():
    deopt 79 [name6, l, name6];
  L17(dx5):
    st syms = dx5;
    goto L18();
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L64():
    dr4 = tryDispatchBuiltin.1("[[", syms1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L66() else L65(dr4);
  L65(syms3):
    __2 = ldf `[[` in base;
    r30 = dyn __2(syms3, 1);
    goto L17(r30);
  L69():
    r31 = dyn names__(l, NULL, name6);
    check L70() else D20();
  D20():
    deopt 81 [name6, r31];
  L66():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L17(dx4);
  L70():
    st syms = r31;
    goto L18();
  }
}
fun inner110540412(id) {
  (reg id:*) -+> V { var id:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg id1:*, reg id2:V, reg as_character:cls, reg r4:V, reg PACKAGE:*, reg PACKAGE1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg withRegistrationInfo:*, reg withRegistrationInfo1:V, reg as_logical:cls, reg r7:V, reg getSymbolInfo:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg v:*, reg v1:V, reg c:V, reg c1:L, reg paste:cls, reg id3:*, reg id4:V, reg p:p(V +), reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg pkgName:*, reg pkgName1:V, reg length:cls, reg r15:V, reg c2:L, reg c4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg c7:L, reg r17:V, reg pkgName2:*, reg pkgName3:V, reg nzchar:cls, reg r18:V, reg c8:L, reg c9:V, reg c11:L, reg paste1:cls, reg msg:*, reg msg1:V, reg p1:p(V +), reg pkgName4:*, reg pkgName5:V, reg p2:p(V +), reg r21:V, reg stop:cls, reg msg2:*, reg msg3:V, reg p3:p(V +), reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg c12:cls, reg r28:V, reg c13:L, reg r30:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg r35:V, reg v2:*, reg v3:V, reg r36:I, reg __:cls, reg r37:V, reg l:*, reg names__:cls, reg r38:V, reg v4:*, reg v5:V |
    mkenv;
    st id = id;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    st v = r1;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L14():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L15():
    r = dyn base(<lang getSymbolInfo(as.character(id), PACKAGE, as.logical(withRegistrationInfo))>);
    goto L0(r);
  L1(r3):
    PACKAGE = ld PACKAGE;
    check L20() else D2();
  L3(r10):
    c1 = `as.logical`(r10);
    if c1 then L29() else L4();
  L16():
    id1 = ld id;
    check L18() else D0();
  L17():
    r2 = dyn base1(<sym id>);
    goto L1(r2);
  L26():
    v = ld v;
    check L28() else D6();
  L27():
    r9 = dyn base3(<sym v>);
    goto L3(r9);
  D0():
    deopt 4 [id1];
  D2():
    deopt 8 [PACKAGE];
  D6():
    deopt 20 [v];
  L4():
    goto L10();
  L10():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  L18():
    id2 = force? id1;
    checkMissing(id2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(id2);
    check L19() else D1();
  L20():
    PACKAGE1 = force? PACKAGE;
    checkMissing(PACKAGE1);
    sym2 = ldf `as.logical`;
    base2 = ldf `as.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L28():
    v1 = force? v;
    checkMissing(v1);
    c = `==`(v1, NULL);
    goto L3(c);
  L29():
    paste = ldf paste;
    check L30() else D7();
  D1():
    deopt 7 [r4];
  D7():
    deopt 24 [];
  L2(r6):
    getSymbolInfo = ldf getSymbolInfo in base;
    r8 = dyn getSymbolInfo(r3, PACKAGE1, r6);
    check L25() else D5();
  L11(r27):
    c13 = `is.object`(r27);
    if c13 then L52() else L53(r27);
  L19():
    goto L1(r4);
  L21():
    withRegistrationInfo = ld withRegistrationInfo;
    check L23() else D3();
  L22():
    r5 = dyn base2(<sym withRegistrationInfo>);
    goto L2(r5);
  L30():
    p = prom<V +>{
      id3 = ld id;
      id4 = force? id3;
      checkMissing(id4);
      return id4;
    };
    r12 = dyn paste("no such symbol", p);
    check L31() else D8();
  L49():
    c12 = ldf c in base;
    r28 = dyn c12("name", "address", "dll", "numParameters");
    check L51() else D17();
  L50():
    r26 = dyn base6("name", "address", "dll", "numParameters");
    goto L11(r26);
  D3():
    deopt 12 [withRegistrationInfo];
  D5():
    deopt 17 [r8];
  D8():
    deopt 27 [r12];
  D17():
    deopt 66 [r28];
  L12(dx1):
    l = ld v;
    names__ = ldf `names<-`;
    check L58() else D19();
  L23():
    withRegistrationInfo1 = force? withRegistrationInfo;
    checkMissing(withRegistrationInfo1);
    as_logical = ldf `as.logical` in base;
    r7 = dyn as_logical(withRegistrationInfo1);
    check L24() else D4();
  L25():
    goto L0(r8);
  L31():
    st msg = r12;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  L51():
    goto L11(r28);
  L52():
    dr = tryDispatchBuiltin.1("[", r27);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53(dr);
  L53(r30):
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L55() else L56();
  D4():
    deopt 15 [r7];
  D19():
    deopt 73 [dx1, l, dx1];
  L5(r14):
    c2 = `as.logical`(r14);
    if c2 then L36() else L6(c2);
  L13(r34, r35):
    __ = ldf `[` in base;
    r37 = dyn __(r34, r35);
    goto L12(r37);
  L24():
    goto L2(r7);
  L32():
    pkgName = ld pkgName;
    check L34() else D9();
  L33():
    r13 = dyn base4(<sym pkgName>);
    goto L5(r13);
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L55():
    v2 = ld v;
    check L57() else D18();
  L56():
    r33 = dyn base7(<sym v>);
    goto L13(r30, r33);
  L58():
    r38 = dyn names__(l, NULL, dx1);
    check L59() else D20();
  D9():
    deopt 31 [pkgName];
  D18():
    deopt 68 [r30, v2];
  D20():
    deopt 75 [dx1, r38];
  L6(c4):
    c11 = `as.logical`(c4);
    if c11 then L42() else L8();
  L34():
    pkgName1 = force? pkgName;
    checkMissing(pkgName1);
    length = ldf length in base;
    r15 = dyn length(pkgName1);
    check L35() else D10();
  L36():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L37() else L38();
  L57():
    v3 = force? v2;
    checkMissing(v3);
    r36 = seq_along(v3);
    goto L13(r30, r36);
  L59():
    st v = r38;
    v4 = ld v;
    check L60() else D21();
  D10():
    deopt 34 [r15];
  D21():
    deopt 77 [v4];
  L7(c7, r17):
    c8 = `as.logical`(r17);
    c9 = `&&`(c7, c8);
    goto L6(c9);
  L8():
    goto L9();
  L9():
    stop = ldf stop;
    check L46() else D15();
  L35():
    goto L5(r15);
  L37():
    pkgName2 = ld pkgName;
    check L39() else D11();
  L38():
    r16 = dyn base5(<sym pkgName>);
    goto L7(c2, r16);
  L42():
    paste1 = ldf paste;
    check L43() else D13();
  L60():
    v5 = force? v4;
    checkMissing(v5);
    popenv;
    return v5;
  D11():
    deopt 37 [c2, pkgName2];
  D13():
    deopt 43 [];
  D15():
    deopt 52 [];
  L39():
    pkgName3 = force? pkgName2;
    checkMissing(pkgName3);
    nzchar = ldf nzchar in base;
    r18 = dyn nzchar(pkgName3);
    check L40() else D12();
  L43():
    p1 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    p2 = prom<V +>{
      pkgName4 = ld pkgName;
      pkgName5 = force? pkgName4;
      checkMissing(pkgName5);
      return pkgName5;
    };
    r21 = dyn paste1(p1, "in package", p2);
    check L44() else D14();
  L46():
    p3 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r24 = dyn stop[, domain](p3, NA_LGL);
    check L47() else D16();
  D12():
    deopt 40 [c2, r18];
  D14():
    deopt 47 [r21];
  D16():
    deopt 56 [r24];
  L40():
    goto L7(c2, r18);
  L44():
    st msg = r21;
    goto L9();
  L47():
    goto L10();
  }
}