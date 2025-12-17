fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner910318498;
    st S3forS4Methods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner910318498(where, checkClasses) {
  (reg where:*, reg checkClasses:*) -+> V { var where:*, var checkClasses:*, reg checkClasses_isMissing:L, reg checkClasses_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), reg getClasses:cls, reg where1:*, reg where2:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg checkClasses1:*, reg checkClasses2:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg allClasses:*, reg allClasses1:V, reg c1:L, reg allClasses3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg allClasses6:V, reg r9:V, reg allClasses7:*, reg allClasses8:V, reg checkClasses3:*, reg checkClasses4:V, reg match:cls, reg r10:V, reg r11:V, reg __:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg allClasses9:*, reg allClasses10:V, reg length1:cls, reg r15:V, reg r16:V, reg c2:L, reg allClasses11:*, reg allClasses12:V, reg paste0:cls, reg allClasses13:*, reg allClasses14:V, reg p2:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg where3:*, reg where4:V, reg names:cls, reg r23:V, reg allObjects:*, reg allObjects1:V, reg c3:L, reg allObjects3:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg grep:cls, reg allObjects4:*, reg allObjects5:V, reg p3:p(V +), reg r25:V, reg r26:V, reg __1:cls, reg r27:V, reg grep1:cls, reg pattern:*, reg pattern1:V, reg p4:p(V +), reg allObjects6:*, reg allObjects7:V, reg p5:p(V +), reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg allObjects8:*, reg allObjects9:V, reg length2:cls, reg r33:V, reg r34:V, reg c4:L, reg allObjects10:*, reg allObjects11:V, reg sub:cls, reg pattern2:*, reg pattern3:V, reg p6:p(V +), reg badMethods:*, reg badMethods1:V, reg p7:p(V +), reg r37:V, reg unique:cls, reg funs:*, reg funs1:V, reg p8:p(V +), reg r39:V, reg uniqueFuns:*, reg uniqueFuns1:V, reg c5:L, reg uniqueFuns3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg uniqueFuns6:V, reg r41:V, reg uniqueFuns7:*, reg uniqueFuns8:V, reg nzchar:cls, reg r42:V, reg __2:cls, reg r43:V, reg _checkGeneric:cls, reg uniqueFuns9:*, reg uniqueFuns10:V, reg p9:p(V +), reg where5:*, reg where6:V, reg p10:p(V +), reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg possible:*, reg possible1:V, reg any:cls, reg r49:V, reg r50:V, reg c6:L, reg character1:cls, reg r51:V, reg uniqueFuns11:*, reg uniqueFuns12:V, reg c7:L, reg uniqueFuns14:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg possible2:*, reg possible3:V, reg __3:cls, reg r54:V, reg badMethods2:*, reg badMethods3:V, reg c8:L, reg badMethods5:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg badMethods8:V, reg r56:V, reg funs2:*, reg funs3:V, reg uniqueFuns15:*, reg uniqueFuns16:V, reg match1:cls, reg r57:V, reg r58:V, reg __4:cls, reg r59:V, reg badMethods9:*, reg badMethods10:V, reg uniqueFuns17:*, reg uniqueFuns18:V, reg l:*, reg attr__:cls, reg r60:V, reg allObjects12:*, reg allObjects13:V |
    mkenv;
    st where = where;
    checkClasses_isMissing = missing.0(checkClasses);
    if checkClasses_isMissing then L0() else L1(checkClasses);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(checkClasses_orDefault):
    st checkClasses = checkClasses_orDefault;
    getClasses = ldf getClasses;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r3 = dyn getClasses(p1);
    check L24() else D1();
  D1():
    deopt 3 [r3];
  L24():
    st allClasses = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L2(r5):
    r7 = `>`(r5, 0.0);
    c = `as.logical`(r7);
    if c then L29() else L3();
  L25():
    checkClasses1 = ld checkClasses;
    check L27() else D2();
  L26():
    r4 = dyn base(<sym checkClasses>);
    goto L2(r4);
  D2():
    deopt 7 [checkClasses1];
  L3():
    goto L6();
  L6():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L27():
    checkClasses2 = force? checkClasses1;
    checkMissing(checkClasses2);
    length = ldf length in base;
    r6 = dyn length(checkClasses2);
    check L28() else D3();
  L29():
    allClasses = ld allClasses;
    check L30() else D4();
  D3():
    deopt 10 [r6];
  D4():
    deopt 13 [allClasses];
  L7(r14):
    r16 = `==`(r14, 0.0);
    c2 = `as.logical`(r16);
    if c2 then L44() else L8();
  L28():
    goto L2(r6);
  L30():
    allClasses1 = force? allClasses;
    checkMissing(allClasses1);
    c1 = `is.object`(allClasses1);
    if c1 then L31() else L32(allClasses1);
  L40():
    allClasses9 = ld allClasses;
    check L42() else D8();
  L41():
    r13 = dyn base2(<sym allClasses>);
    goto L7(r13);
  D8():
    deopt 33 [allClasses9];
  L4(dx1):
    st allClasses = dx1;
    goto L6();
  L8():
    paste0 = ldf paste0;
    check L48() else D11();
  L31():
    dr = tryDispatchBuiltin.1("[", allClasses1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(allClasses3):
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L42():
    allClasses10 = force? allClasses9;
    checkMissing(allClasses10);
    length1 = ldf length in base;
    r15 = dyn length1(allClasses10);
    check L43() else D9();
  L44():
    allClasses11 = ld allClasses;
    check L45() else D10();
  D9():
    deopt 36 [r15];
  D10():
    deopt 39 [allClasses11];
  D11():
    deopt 45 [];
  L5(allClasses6, r9):
    r11 = `>`(r9, 0.0);
    __ = ldf `[` in base;
    r12 = dyn __(allClasses6, r11);
    goto L4(r12);
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L34():
    allClasses7 = ld allClasses;
    check L36() else D5();
  L35():
    r8 = dyn base1(<sym allClasses>, <sym checkClasses>, 0.0);
    goto L5(allClasses3, r8);
  L43():
    goto L7(r15);
  L45():
    allClasses12 = force? allClasses11;
    checkMissing(allClasses12);
    popenv;
    return allClasses12;
  L48():
    p2 = prom<V +>{
      allClasses13 = ld allClasses;
      allClasses14 = force? allClasses13;
      checkMissing(allClasses14);
      return allClasses14;
    };
    r20 = dyn paste0[, , , collapse]("([.]", p2, "$)", "|");
    check L49() else D12();
  D5():
    deopt 17 [allClasses3, allClasses7];
  D12():
    deopt 51 [r20];
  L36():
    allClasses8 = force? allClasses7;
    checkMissing(allClasses8);
    checkClasses3 = ld checkClasses;
    check L37() else D6();
  L49():
    st pattern = r20;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  D6():
    deopt 19 [allClasses3, checkClasses3];
  L10(r22):
    st allObjects = r22;
    allObjects = ld allObjects;
    check L54() else D15();
  L37():
    checkClasses4 = force? checkClasses3;
    checkMissing(checkClasses4);
    match = ldf match in base;
    r10 = dyn match(allClasses8, checkClasses4, 0.0, NULL);
    check L38() else D7();
  L50():
    where3 = ld where;
    check L52() else D13();
  L51():
    r21 = dyn base3(<sym where>);
    goto L10(r21);
  D7():
    deopt 24 [allClasses3, r10];
  D13():
    deopt 55 [where3];
  D15():
    deopt 60 [allObjects];
  L38():
    goto L5(allClasses3, r10);
  L52():
    where4 = force? where3;
    checkMissing(where4);
    names = ldf names in base;
    r23 = dyn names(where4);
    check L53() else D14();
  L54():
    allObjects1 = force? allObjects;
    checkMissing(allObjects1);
    c3 = `is.object`(allObjects1);
    if c3 then L55() else L56(allObjects1);
  D14():
    deopt 58 [r23];
  L11(dx4):
    st allObjects = dx4;
    grep1 = ldf grep;
    check L60() else D18();
  L53():
    goto L10(r23);
  L55():
    dr2 = tryDispatchBuiltin.1("[", allObjects1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(dr2);
  L56(allObjects3):
    grep = ldf grep;
    check L58() else D16();
  D16():
    deopt 63 [allObjects3];
  D18():
    deopt 71 [];
  L57():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx3);
  L58():
    p3 = prom<V +>{
      allObjects4 = ld allObjects;
      allObjects5 = force? allObjects4;
      checkMissing(allObjects5);
      return allObjects5;
    };
    r25 = dyn grep("^[.][_][_]", p3);
    check L59() else D17();
  L60():
    p4 = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p5 = prom<V +>{
      allObjects6 = ld allObjects;
      allObjects7 = force? allObjects6;
      checkMissing(allObjects7);
      return allObjects7;
    };
    r30 = dyn grep1[, , value](p4, p5, TRUE);
    check L61() else D19();
  D17():
    deopt 66 [allObjects3, r25];
  D19():
    deopt 76 [r30];
  L59():
    r26 = `-`(<missing>, r25);
    __1 = ldf `[` in base;
    r27 = dyn __1(allObjects3, r26);
    goto L11(r27);
  L61():
    st allObjects = r30;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L12(r32):
    r34 = `>`(r32, 0.0);
    c4 = `as.logical`(r34);
    if c4 then L66() else L13();
  L62():
    allObjects8 = ld allObjects;
    check L64() else D20();
  L63():
    r31 = dyn base4(<sym allObjects>);
    goto L12(r31);
  D20():
    deopt 80 [allObjects8];
  L13():
    goto L22();
  L22():
    allObjects12 = ld allObjects;
    check L110() else D46();
  L64():
    allObjects9 = force? allObjects8;
    checkMissing(allObjects9);
    length2 = ldf length in base;
    r33 = dyn length2(allObjects9);
    check L65() else D21();
  L66():
    allObjects10 = ld allObjects;
    check L67() else D22();
  D21():
    deopt 83 [r33];
  D22():
    deopt 86 [allObjects10];
  D46():
    deopt 165 [allObjects12];
  L65():
    goto L12(r33);
  L67():
    allObjects11 = force? allObjects10;
    checkMissing(allObjects11);
    st badMethods = allObjects11;
    sub = ldf sub;
    check L68() else D23();
  L110():
    allObjects13 = force? allObjects12;
    checkMissing(allObjects13);
    popenv;
    return allObjects13;
  D23():
    deopt 90 [];
  L68():
    p6 = prom<V +>{
      pattern2 = ld pattern;
      pattern3 = force? pattern2;
      checkMissing(pattern3);
      return pattern3;
    };
    p7 = prom<V +>{
      badMethods = ld badMethods;
      badMethods1 = force? badMethods;
      checkMissing(badMethods1);
      return badMethods1;
    };
    r37 = dyn sub(p6, "", p7);
    check L69() else D24();
  D24():
    deopt 94 [r37];
  L69():
    st funs = r37;
    unique = ldf unique;
    check L70() else D25();
  D25():
    deopt 97 [];
  L70():
    p8 = prom<V +>{
      funs = ld funs;
      funs1 = force? funs;
      checkMissing(funs1);
      return funs1;
    };
    r39 = dyn unique(p8);
    check L71() else D26();
  D26():
    deopt 99 [r39];
  L71():
    st uniqueFuns = r39;
    uniqueFuns = ld uniqueFuns;
    check L72() else D27();
  D27():
    deopt 101 [uniqueFuns];
  L72():
    uniqueFuns1 = force? uniqueFuns;
    checkMissing(uniqueFuns1);
    c5 = `is.object`(uniqueFuns1);
    if c5 then L73() else L74(uniqueFuns1);
  L14(dx6):
    st uniqueFuns = dx6;
    _checkGeneric = ldf `.checkGeneric`;
    check L80() else D30();
  L73():
    dr4 = tryDispatchBuiltin.1("[", uniqueFuns1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L75() else L74(dr4);
  L74(uniqueFuns3):
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  D30():
    deopt 112 [];
  L15(uniqueFuns6, r41):
    __2 = ldf `[` in base;
    r43 = dyn __2(uniqueFuns6, r41);
    goto L14(r43);
  L75():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx5);
  L76():
    uniqueFuns7 = ld uniqueFuns;
    check L78() else D28();
  L77():
    r40 = dyn base5(<sym uniqueFuns>);
    goto L15(uniqueFuns3, r40);
  L80():
    p9 = prom<V +>{
      uniqueFuns9 = ld uniqueFuns;
      uniqueFuns10 = force? uniqueFuns9;
      checkMissing(uniqueFuns10);
      return uniqueFuns10;
    };
    p10 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r46 = dyn _checkGeneric(p9, p10);
    check L81() else D31();
  D28():
    deopt 105 [uniqueFuns3, uniqueFuns7];
  D31():
    deopt 115 [r46];
  L78():
    uniqueFuns8 = force? uniqueFuns7;
    checkMissing(uniqueFuns8);
    nzchar = ldf nzchar in base;
    r42 = dyn nzchar(uniqueFuns8);
    check L79() else D29();
  L81():
    st possible = r46;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  D29():
    deopt 108 [uniqueFuns3, r42];
  L16(r48):
    r50 = `!`(r48);
    c6 = `as.logical`(r50);
    if c6 then L86() else L17();
  L79():
    goto L15(uniqueFuns3, r42);
  L82():
    possible = ld possible;
    check L84() else D32();
  L83():
    r47 = dyn base6(<sym possible>);
    goto L16(r47);
  D32():
    deopt 119 [possible];
  L17():
    uniqueFuns11 = ld uniqueFuns;
    check L91() else D36();
  L84():
    possible1 = force? possible;
    checkMissing(possible1);
    any = ldf any in base;
    r49 = dyn any(possible1);
    check L85() else D33();
  L86():
    character1 = ldf character;
    check L87() else D34();
  D33():
    deopt 122 [r49];
  D34():
    deopt 125 [];
  D36():
    deopt 130 [uniqueFuns11];
  L85():
    goto L16(r49);
  L87():
    r51 = dyn character1();
    check L88() else D35();
  L91():
    uniqueFuns12 = force? uniqueFuns11;
    checkMissing(uniqueFuns12);
    c7 = `is.object`(uniqueFuns12);
    if c7 then L92() else L93(uniqueFuns12);
  D35():
    deopt 126 [r51];
  L19(dx8):
    st uniqueFuns = dx8;
    badMethods2 = ld badMethods;
    check L96() else D38();
  L88():
    popenv;
    return r51;
  L92():
    dr6 = tryDispatchBuiltin.1("[", uniqueFuns12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L94() else L93(dr6);
  L93(uniqueFuns14):
    possible2 = ld possible;
    check L95() else D37();
  D37():
    deopt 132 [uniqueFuns14, possible2];
  D38():
    deopt 136 [badMethods2];
  L94():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L19(dx7);
  L95():
    possible3 = force? possible2;
    __3 = ldf `[` in base;
    r54 = dyn __3(uniqueFuns14, possible3);
    goto L19(r54);
  L96():
    badMethods3 = force? badMethods2;
    checkMissing(badMethods3);
    c8 = `is.object`(badMethods3);
    if c8 then L97() else L98(badMethods3);
  L20(dx10):
    st badMethods = dx10;
    badMethods9 = ld badMethods;
    check L105() else D42();
  L97():
    dr8 = tryDispatchBuiltin.1("[", badMethods3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L99() else L98(dr8);
  L98(badMethods5):
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  D42():
    deopt 152 [badMethods9];
  L21(badMethods8, r56):
    r58 = `>`(r56, 0.0);
    __4 = ldf `[` in base;
    r59 = dyn __4(badMethods8, r58);
    goto L20(r59);
  L99():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L20(dx9);
  L100():
    funs2 = ld funs;
    check L102() else D39();
  L101():
    r55 = dyn base7(<sym funs>, <sym uniqueFuns>, 0.0);
    goto L21(badMethods5, r55);
  L105():
    badMethods10 = force? badMethods9;
    checkMissing(badMethods10);
    st allObjects = badMethods10;
    uniqueFuns17 = ld uniqueFuns;
    check L106() else D43();
  D39():
    deopt 140 [badMethods5, funs2];
  D43():
    deopt 155 [uniqueFuns17];
  L102():
    funs3 = force? funs2;
    checkMissing(funs3);
    uniqueFuns15 = ld uniqueFuns;
    check L103() else D40();
  L106():
    uniqueFuns18 = force? uniqueFuns17;
    checkMissing(uniqueFuns18);
    l = ld allObjects;
    attr__ = ldf `attr<-`;
    check L107() else D44();
  D40():
    deopt 142 [badMethods5, uniqueFuns15];
  D44():
    deopt 158 [uniqueFuns18, l, uniqueFuns18];
  L103():
    uniqueFuns16 = force? uniqueFuns15;
    checkMissing(uniqueFuns16);
    match1 = ldf match in base;
    r57 = dyn match1(funs3, uniqueFuns16, 0.0, NULL);
    check L104() else D41();
  L107():
    r60 = dyn attr__(l, NULL, "functions", uniqueFuns18);
    check L108() else D45();
  D41():
    deopt 147 [badMethods5, r57];
  D45():
    deopt 161 [uniqueFuns18, r60];
  L104():
    goto L21(badMethods5, r57);
  L108():
    st allObjects = r60;
    goto L22();
  }
}