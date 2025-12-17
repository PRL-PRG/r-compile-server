fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1831802598;
    st completeClassDefinition = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1831802598(Class, ClassDef, where, doExtends) {
  (reg Class:*, reg ClassDef:*, reg where:*, reg doExtends:*) -+> V { var Class:*, var ClassDef:*, reg ClassDef_isMissing:L, reg ClassDef_orDefault:*, reg getClassDef:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var where:*, var doExtends:*, reg doExtends_isMissing:L, reg doExtends_orDefault:*, reg _completeClassSlots:cls, reg ClassDef1:*, reg ClassDef2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r5:V, reg __:cls, reg r6:V, reg __1:cls, reg r7:V, reg makePrototypeFromClassDef:cls, reg properties:*, reg properties1:V, reg p4:p(V +), reg ClassDef3:*, reg ClassDef4:V, reg p5:p(V +), reg immediate:*, reg immediate1:V, reg p6:p(V +), reg where3:*, reg where4:V, reg p7:p(V +), reg r12:V, reg __2:cls, reg r13:V, reg doExtends1:*, reg doExtends2:V, reg c:L, reg completeExtends:cls, reg ClassDef5:*, reg ClassDef6:V, reg p8:p(V +), reg where5:*, reg where6:V, reg p9:p(V +), reg r16:V, reg r17:V, reg __3:cls, reg r18:V, reg doExtends3:*, reg doExtends4:V, reg c1:L, reg completeSubclasses:cls, reg ClassDef7:*, reg ClassDef8:V, reg p10:p(V +), reg where7:*, reg where8:V, reg p11:p(V +), reg r21:V, reg r22:V, reg __4:cls, reg r23:V, reg sym:cls, reg base:cls, reg guard:L, reg r24:V, reg r25:V, reg virtual:*, reg virtual1:V, reg is_na:cls, reg r26:V, reg c2:L, reg testVirtual:cls, reg properties2:*, reg properties3:V, reg p12:p(V +), reg immediate2:*, reg immediate3:V, reg p13:p(V +), reg prototype:*, reg prototype1:V, reg p14:p(V +), reg where9:*, reg where10:V, reg p15:p(V +), reg r31:V, reg _mergeClassDefSlots:cls, reg ClassDef9:*, reg ClassDef10:V, reg p16:p(V +), reg properties4:*, reg properties5:V, reg p17:p(V +), reg extends:*, reg extends1:V, reg p18:p(V +), reg prototype2:*, reg prototype3:V, reg p19:p(V +), reg virtual2:*, reg virtual3:V, reg p20:p(V +), reg subclasses:*, reg subclasses1:V, reg p21:p(V +), reg r39:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r40:V, reg r41:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg r43:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg __5:cls, reg r48:V, reg names:cls, reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg __6:cls, reg r52:V, reg names1:cls, reg r53:V, reg match:cls, reg r54:V, reg is_na1:cls, reg r55:V, reg r56:V, reg any:cls, reg r57:V, reg c3:L, reg c5:V, reg getOption:cls, reg r58:V, reg r59:V, reg c6:L, reg c7:V, reg c9:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg r61:V, reg __7:cls, reg r62:V, reg names2:cls, reg r63:V, reg c10:L, reg r65:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r68:V, reg r69:V, reg r70:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r73:V, reg r74:V, reg r75:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r78:V, reg r79:V, reg r80:V, reg __8:cls, reg r81:V, reg names3:cls, reg r82:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r85:V, reg r86:V, reg r87:V, reg __9:cls, reg r88:V, reg names4:cls, reg r89:V, reg match1:cls, reg r90:V, reg is_na2:cls, reg r91:V, reg r92:V, reg __10:cls, reg r93:V, reg warning:cls, reg gettextf:cls, reg dQuote:cls, reg Class3:*, reg Class4:V, reg p22:p(V +), reg r95:V, reg p23:p(V +), reg paste:cls, reg bad:*, reg bad1:V, reg p24:p(V +), reg r98:V, reg p25:p(V +), reg r100:V, reg p26:p(V +), reg r102:V, reg ClassDef11:*, reg ClassDef12:V |
    mkenv;
    st Class = Class;
    ClassDef_isMissing = missing.0(ClassDef);
    if ClassDef_isMissing then L0() else L1(ClassDef);
  L0():
    p1 = prom<V +>{
      getClassDef = ldf getClassDef;
      p = prom<V +>{
        Class1 = ld Class;
        Class2 = force? Class1;
        checkMissing(Class2);
        return Class2;
      };
      r1 = dyn getClassDef(p);
      return r1;
    };
    goto L1(p1);
  L1(ClassDef_orDefault):
    st ClassDef = ClassDef_orDefault;
    st where = where;
    doExtends_isMissing = missing.0(doExtends);
    if doExtends_isMissing then L2(TRUE) else L2(doExtends);
  L2(doExtends_orDefault):
    st doExtends = doExtends_orDefault;
    _completeClassSlots = ldf `.completeClassSlots`;
    check L24() else D0();
  D0():
    deopt 1 [];
  L24():
    p2 = prom<V +>{
      ClassDef1 = ld ClassDef;
      ClassDef2 = force? ClassDef1;
      checkMissing(ClassDef2);
      return ClassDef2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r5 = dyn _completeClassSlots(p2, p3);
    check L25() else D1();
  D1():
    deopt 4 [r5];
  L25():
    st ClassDef = r5;
    __ = ldf `@` in base;
    r6 = dyn __(<sym ClassDef>, <sym contains>);
    st immediate = r6;
    __1 = ldf `@` in base;
    r7 = dyn __1(<sym ClassDef>, <sym slots>);
    st properties = r7;
    makePrototypeFromClassDef = ldf makePrototypeFromClassDef;
    check L26() else D2();
  D2():
    deopt 13 [];
  L26():
    p4 = prom<V +>{
      properties = ld properties;
      properties1 = force? properties;
      checkMissing(properties1);
      return properties1;
    };
    p5 = prom<V +>{
      ClassDef3 = ld ClassDef;
      ClassDef4 = force? ClassDef3;
      checkMissing(ClassDef4);
      return ClassDef4;
    };
    p6 = prom<V +>{
      immediate = ld immediate;
      immediate1 = force? immediate;
      checkMissing(immediate1);
      return immediate1;
    };
    p7 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r12 = dyn makePrototypeFromClassDef(p4, p5, p6, p7);
    check L27() else D3();
  D3():
    deopt 18 [r12];
  L27():
    st prototype = r12;
    __2 = ldf `@` in base;
    r13 = dyn __2(<sym ClassDef>, <sym virtual>);
    st virtual = r13;
    doExtends1 = ld doExtends;
    check L28() else D4();
  D4():
    deopt 23 [doExtends1];
  L28():
    doExtends2 = force? doExtends1;
    checkMissing(doExtends2);
    c = `as.logical`(doExtends2);
    if c then L29() else L3();
  L3():
    __3 = ldf `@` in base;
    r18 = dyn __3(<sym ClassDef>, <sym contains>);
    goto L4(r18);
  L4(r17):
    st extends = r17;
    doExtends3 = ld doExtends;
    check L33() else D7();
  L29():
    completeExtends = ldf completeExtends;
    check L30() else D5();
  D5():
    deopt 26 [];
  D7():
    deopt 34 [doExtends3];
  L30():
    p8 = prom<V +>{
      ClassDef5 = ld ClassDef;
      ClassDef6 = force? ClassDef5;
      checkMissing(ClassDef6);
      return ClassDef6;
    };
    p9 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r16 = dyn completeExtends[, where](p8, p9);
    check L31() else D6();
  L33():
    doExtends4 = force? doExtends3;
    checkMissing(doExtends4);
    c1 = `as.logical`(doExtends4);
    if c1 then L34() else L5();
  D6():
    deopt 30 [r16];
  L5():
    __4 = ldf `@` in base;
    r23 = dyn __4(<sym ClassDef>, <sym subclasses>);
    goto L6(r23);
  L6(r22):
    st subclasses = r22;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L31():
    goto L4(r16);
  L34():
    completeSubclasses = ldf completeSubclasses;
    check L35() else D8();
  D8():
    deopt 37 [];
  L7(r25):
    c2 = `as.logical`(r25);
    if c2 then L42() else L8();
  L35():
    p10 = prom<V +>{
      ClassDef7 = ld ClassDef;
      ClassDef8 = force? ClassDef7;
      checkMissing(ClassDef8);
      return ClassDef8;
    };
    p11 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r21 = dyn completeSubclasses[, where](p10, p11);
    check L36() else D9();
  L38():
    virtual = ld virtual;
    check L40() else D10();
  L39():
    r24 = dyn base(<sym virtual>);
    goto L7(r24);
  D9():
    deopt 41 [r21];
  D10():
    deopt 47 [virtual];
  L8():
    goto L9();
  L9():
    _mergeClassDefSlots = ldf `.mergeClassDefSlots`;
    check L46() else D14();
  L36():
    goto L6(r21);
  L40():
    virtual1 = force? virtual;
    checkMissing(virtual1);
    is_na = ldf `is.na` in base;
    r26 = dyn is_na(virtual1);
    check L41() else D11();
  L42():
    testVirtual = ldf testVirtual;
    check L43() else D12();
  D11():
    deopt 50 [r26];
  D12():
    deopt 52 [];
  D14():
    deopt 62 [];
  L41():
    goto L7(r26);
  L43():
    p12 = prom<V +>{
      properties2 = ld properties;
      properties3 = force? properties2;
      checkMissing(properties3);
      return properties3;
    };
    p13 = prom<V +>{
      immediate2 = ld immediate;
      immediate3 = force? immediate2;
      checkMissing(immediate3);
      return immediate3;
    };
    p14 = prom<V +>{
      prototype = ld prototype;
      prototype1 = force? prototype;
      checkMissing(prototype1);
      return prototype1;
    };
    p15 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r31 = dyn testVirtual(p12, p13, p14, p15);
    check L44() else D13();
  L46():
    p16 = prom<V +>{
      ClassDef9 = ld ClassDef;
      ClassDef10 = force? ClassDef9;
      checkMissing(ClassDef10);
      return ClassDef10;
    };
    p17 = prom<V +>{
      properties4 = ld properties;
      properties5 = force? properties4;
      checkMissing(properties5);
      return properties5;
    };
    p18 = prom<V +>{
      extends = ld extends;
      extends1 = force? extends;
      checkMissing(extends1);
      return extends1;
    };
    p19 = prom<V +>{
      prototype2 = ld prototype;
      prototype3 = force? prototype2;
      checkMissing(prototype3);
      return prototype3;
    };
    p20 = prom<V +>{
      virtual2 = ld virtual;
      virtual3 = force? virtual2;
      checkMissing(virtual3);
      return virtual3;
    };
    p21 = prom<V +>{
      subclasses = ld subclasses;
      subclasses1 = force? subclasses;
      checkMissing(subclasses1);
      return subclasses1;
    };
    r39 = dyn _mergeClassDefSlots[, slots, contains, prototype, virtual, subclasses](p16, p17, p18, p19, p20, p21);
    check L47() else D15();
  D13():
    deopt 57 [r31];
  D15():
    deopt 74 [r39];
  L44():
    st virtual = r31;
    goto L9();
  L47():
    st ClassDef = r39;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L10(r41):
    c3 = `as.logical`(r41);
    if c3 then L63() else L15(c3);
  L48():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L49():
    r40 = dyn base1(<lang `!`(is.na(match(names(`@`(ClassDef, subclasses)), names(`@`(ClassDef, contains)))))>);
    goto L10(r40);
  L11(r43):
    r56 = `!`(r43);
    any = ldf any in base;
    r57 = dyn any(r56);
    check L62() else D20();
  L15(c5):
    c9 = `as.logical`(c5);
    if c9 then L67() else L16();
  L50():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L51():
    r42 = dyn base2(<lang match(names(`@`(ClassDef, subclasses)), names(`@`(ClassDef, contains)))>);
    goto L11(r42);
  L63():
    getOption = ldf getOption;
    check L64() else D21();
  D20():
    deopt 102 [r57];
  D21():
    deopt 104 [c3];
  L12(r45):
    is_na1 = ldf `is.na` in base;
    r55 = dyn is_na1(r45);
    check L61() else D19();
  L16():
    goto L23();
  L23():
    ClassDef11 = ld ClassDef;
    check L89() else D30();
  L52():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L53():
    r44 = dyn base3(<lang names(`@`(ClassDef, subclasses))>, <lang names(`@`(ClassDef, contains))>);
    goto L12(r44);
  L62():
    goto L10(r57);
  L64():
    r58 = dyn getOption("warn");
    check L65() else D22();
  L67():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  D19():
    deopt 99 [r55];
  D22():
    deopt 106 [c3, r58];
  D30():
    deopt 149 [ClassDef11];
  L13(r47):
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L17(r61):
    c10 = `is.object`(r61);
    if c10 then L71() else L72(r61);
  L54():
    __5 = ldf `@` in base;
    r48 = dyn __5(<sym ClassDef>, <sym subclasses>);
    names = ldf names in base;
    r49 = dyn names(r48);
    check L56() else D16();
  L55():
    r46 = dyn base4(<lang `@`(ClassDef, subclasses)>);
    goto L13(r46);
  L61():
    goto L11(r55);
  L65():
    r59 = `>`(r58, 0.0);
    c6 = `as.logical`(r59);
    c7 = `&&`(c3, c6);
    goto L15(c7);
  L68():
    __7 = ldf `@` in base;
    r62 = dyn __7(<sym ClassDef>, <sym subclasses>);
    names2 = ldf names in base;
    r63 = dyn names2(r62);
    check L70() else D23();
  L69():
    r60 = dyn base6(<lang `@`(ClassDef, subclasses)>);
    goto L17(r60);
  L89():
    ClassDef12 = force? ClassDef11;
    checkMissing(ClassDef12);
    popenv;
    return ClassDef12;
  D16():
    deopt 87 [r49];
  D23():
    deopt 115 [r63];
  L14(r51):
    match = ldf match in base;
    r54 = dyn match(r47, r51, NA_INT, NULL);
    check L60() else D18();
  L18(dx1):
    st bad = dx1;
    warning = ldf warning;
    check L86() else D28();
  L56():
    goto L13(r49);
  L57():
    __6 = ldf `@` in base;
    r52 = dyn __6(<sym ClassDef>, <sym contains>);
    names1 = ldf names in base;
    r53 = dyn names1(r52);
    check L59() else D17();
  L58():
    r50 = dyn base5(<lang `@`(ClassDef, contains)>);
    goto L14(r50);
  L70():
    goto L17(r63);
  L71():
    dr = tryDispatchBuiltin.1("[", r61);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L73() else L72(dr);
  L72(r65):
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  D17():
    deopt 93 [r53];
  D18():
    deopt 97 [r54];
  D28():
    deopt 142 [];
  L19(r69, r70):
    r92 = `!`(r70);
    __10 = ldf `[` in base;
    r93 = dyn __10(r69, r92);
    goto L18(r93);
  L59():
    goto L14(r53);
  L60():
    goto L12(r54);
  L73():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L74():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  L75():
    r68 = dyn base7(<lang match(names(`@`(ClassDef, subclasses)), names(`@`(ClassDef, contains)))>);
    goto L19(r65, r68);
  L86():
    p26 = prom<V +>{
      gettextf = ldf gettextf;
      p23 = prom<V +>{
        dQuote = ldf dQuote;
        p22 = prom<V +>{
          Class3 = ld Class;
          Class4 = force? Class3;
          checkMissing(Class4);
          return Class4;
        };
        r95 = dyn dQuote(p22);
        return r95;
      };
      p25 = prom<V +>{
        paste = ldf paste;
        p24 = prom<V +>{
          bad = ld bad;
          bad1 = force? bad;
          checkMissing(bad1);
          return bad1;
        };
        r98 = dyn paste[, collapse](p24, ", ");
        return r98;
      };
      r100 = dyn gettextf("potential cycle in class inheritance: %s has duplicates in superclasses and subclasses (%s)", p23, p25);
      return r100;
    };
    r102 = dyn warning[, domain](p26, NA_LGL);
    check L87() else D29();
  D29():
    deopt 146 [r102];
  L20(r74, r75):
    is_na2 = ldf `is.na` in base;
    r91 = dyn is_na2(r75);
    check L85() else D27();
  L76():
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L78() else L79();
  L77():
    r73 = dyn base8(<lang names(`@`(ClassDef, subclasses))>, <lang names(`@`(ClassDef, contains))>);
    goto L20(r65, r73);
  L87():
    goto L23();
  D27():
    deopt 137 [r74, r91];
  L21(r79, r80):
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L81() else L82();
  L78():
    __8 = ldf `@` in base;
    r81 = dyn __8(<sym ClassDef>, <sym subclasses>);
    names3 = ldf names in base;
    r82 = dyn names3(r81);
    check L80() else D24();
  L79():
    r78 = dyn base9(<lang `@`(ClassDef, subclasses)>);
    goto L21(r65, r78);
  L85():
    goto L19(r74, r91);
  D24():
    deopt 125 [r65, r82];
  L22(r86, r87):
    match1 = ldf match in base;
    r90 = dyn match1(r80, r87, NA_INT, NULL);
    check L84() else D26();
  L80():
    goto L21(r65, r82);
  L81():
    __9 = ldf `@` in base;
    r88 = dyn __9(<sym ClassDef>, <sym contains>);
    names4 = ldf names in base;
    r89 = dyn names4(r88);
    check L83() else D25();
  L82():
    r85 = dyn base10(<lang `@`(ClassDef, contains)>);
    goto L22(r79, r85);
  D25():
    deopt 131 [r79, r89];
  D26():
    deopt 135 [r86, r90];
  L83():
    goto L22(r79, r89);
  L84():
    goto L20(r86, r90);
  }
}