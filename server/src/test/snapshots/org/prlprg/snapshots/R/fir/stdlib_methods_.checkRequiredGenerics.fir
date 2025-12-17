fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2300815290;
    st `.checkRequiredGenerics` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2300815290(Class, classDef, where) {
  (reg Class:*, reg classDef:*, reg where:*) -+> V { var Class:*, var classDef:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg names:cls, reg r3:V, reg get:cls, reg _methodsNamespace:*, reg _methodsNamespace1:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg allNeeded:*, reg allNeeded1:V, reg names1:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg specials:*, reg specials1:V, reg supers:*, reg supers1:V, reg match:cls, reg r11:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg needed:*, reg needed1:V, reg any:cls, reg r15:V, reg c:L, reg unique:cls, reg allNeeded2:*, reg allNeeded3:V, reg c1:L, reg allNeeded5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg needed2:*, reg needed3:V, reg __1:cls, reg r16:V, reg p1:p(V +), reg r18:V, reg vapply:cls, reg generics:*, reg generics1:V, reg p2:p(V +), reg r20:cls, reg p3:p(V +), reg character:cls, reg r22:V, reg p4:p(V +), reg r24:V, reg exists:cls, reg where1:*, reg where2:V, reg p5:p(V +), reg r26:V, reg c2:L, reg get1:cls, reg where3:*, reg where4:V, reg p6:p(V +), reg r28:V, reg r29:V, reg character1:cls, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg previous:*, reg previous1:V, reg attr:cls, reg r35:V, reg packages:*, reg packages1:V, reg c3:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg previous2:*, reg previous3:V, reg generics2:*, reg generics3:V, reg c4:cls, reg r39:V, reg packages2:*, reg packages3:V, reg l:*, reg attr__:cls, reg r40:V, reg assign:cls, reg gg:*, reg gg1:V, reg p7:p(V +), reg where5:*, reg where6:V, reg p8:p(V +), reg r43:V |
    mkenv;
    st Class = Class;
    st classDef = classDef;
    st where = where;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    st supers = r1;
    get = ldf get;
    check L13() else D1();
  L10():
    __ = ldf `@` in base;
    r2 = dyn __(<sym classDef>, <sym contains>);
    names = ldf names in base;
    r3 = dyn names(r2);
    check L12() else D0();
  L11():
    r = dyn base(<lang `@`(classDef, contains)>);
    goto L0(r);
  D0():
    deopt 5 [r3];
  D1():
    deopt 8 [];
  L12():
    goto L0(r3);
  L13():
    p = prom<V +>{
      _methodsNamespace = ld `.methodsNamespace`;
      _methodsNamespace1 = force? _methodsNamespace;
      checkMissing(_methodsNamespace1);
      return _methodsNamespace1;
    };
    r5 = dyn get[, envir](".NeedPrimitiveMethods", p);
    check L14() else D2();
  D2():
    deopt 12 [r5];
  L14():
    st allNeeded = r5;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L1(r7):
    st specials = r7;
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L15():
    allNeeded = ld allNeeded;
    check L17() else D3();
  L16():
    r6 = dyn base1(<sym allNeeded>);
    goto L1(r6);
  D3():
    deopt 16 [allNeeded];
  L2(r10):
    r12 = `>`(r10, 0);
    st needed = r12;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L17():
    allNeeded1 = force? allNeeded;
    checkMissing(allNeeded1);
    names1 = ldf names in base;
    r8 = dyn names1(allNeeded1);
    check L18() else D4();
  L19():
    specials = ld specials;
    check L21() else D5();
  L20():
    r9 = dyn base2(<sym specials>, <sym supers>, 0);
    goto L2(r9);
  D4():
    deopt 19 [r8];
  D5():
    deopt 23 [specials];
  L3(r14):
    c = `as.logical`(r14);
    if c then L28() else L4();
  L18():
    goto L1(r8);
  L21():
    specials1 = force? specials;
    checkMissing(specials1);
    supers = ld supers;
    check L22() else D6();
  L24():
    needed = ld needed;
    check L26() else D8();
  L25():
    r13 = dyn base3(<sym needed>);
    goto L3(r13);
  D6():
    deopt 25 [supers];
  D8():
    deopt 36 [needed];
  L4():
    invisible.0();
    popenv;
    return NULL;
  L22():
    supers1 = force? supers;
    checkMissing(supers1);
    match = ldf match in base;
    r11 = dyn match(specials1, supers1, 0, NULL);
    check L23() else D7();
  L26():
    needed1 = force? needed;
    checkMissing(needed1);
    any = ldf any in base;
    r15 = dyn any(needed1);
    check L27() else D9();
  L28():
    unique = ldf unique;
    check L29() else D10();
  D7():
    deopt 30 [r11];
  D9():
    deopt 39 [r15];
  D10():
    deopt 41 [];
  L23():
    goto L2(r11);
  L27():
    goto L3(r15);
  L29():
    p1 = prom<V +>{
      allNeeded2 = ld allNeeded;
      allNeeded3 = force? allNeeded2;
      checkMissing(allNeeded3);
      c1 = `is.object`(allNeeded3);
      if c1 then L1() else L2(allNeeded3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", allNeeded3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(allNeeded5):
      needed2 = ld needed;
      needed3 = force? needed2;
      __1 = ldf `[` in base;
      r16 = dyn __1(allNeeded5, needed3);
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r18 = dyn unique(p1);
    check L30() else D11();
  D11():
    deopt 43 [r18];
  L30():
    st generics = r18;
    vapply = ldf vapply;
    check L31() else D12();
  D12():
    deopt 46 [];
  L31():
    p2 = prom<V +>{
      generics = ld generics;
      generics1 = force? generics;
      checkMissing(generics1);
      return generics1;
    };
    p3 = prom<V +>{
      r20 = clos inner3355313315;
      return r20;
    };
    p4 = prom<V +>{
      character = ldf character;
      r22 = dyn character(1.0);
      return r22;
    };
    r24 = dyn vapply(p2, p3, p4);
    check L32() else D13();
  D13():
    deopt 50 [r24];
  L32():
    st packages = r24;
    exists = ldf exists;
    check L33() else D14();
  D14():
    deopt 53 [];
  L33():
    p5 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r26 = dyn exists[, , inherits](".requireCachedGenerics", p5, FALSE);
    check L34() else D15();
  D15():
    deopt 58 [r26];
  L34():
    c2 = `as.logical`(r26);
    if c2 then L35() else L5();
  L5():
    character1 = ldf character;
    check L39() else D18();
  L6(r29):
    st previous = r29;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L35():
    get1 = ldf get;
    check L36() else D16();
  D16():
    deopt 60 [];
  D18():
    deopt 65 [];
  L7(r32):
    st packages = r32;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  L36():
    p6 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r28 = dyn get1(".requireCachedGenerics", p6);
    check L37() else D17();
  L39():
    r30 = dyn character1();
    check L40() else D19();
  L41():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L42():
    r31 = dyn base4(<lang attr(previous, "package")>, <sym packages>);
    goto L7(r31);
  D17():
    deopt 63 [r28];
  D19():
    deopt 66 [r30];
  L8(r34):
    packages = ld packages;
    check L47() else D22();
  L9(r38):
    st gg = r38;
    packages2 = ld packages;
    check L54() else D27();
  L37():
    goto L6(r28);
  L40():
    goto L6(r30);
  L43():
    previous = ld previous;
    check L45() else D20();
  L44():
    r33 = dyn base5(<sym previous>, "package");
    goto L8(r33);
  L49():
    previous2 = ld previous;
    check L51() else D24();
  L50():
    r37 = dyn base6(<sym previous>, <sym generics>);
    goto L9(r37);
  D20():
    deopt 72 [previous];
  D22():
    deopt 77 [packages];
  D24():
    deopt 84 [previous2];
  D27():
    deopt 91 [packages2];
  L45():
    previous1 = force? previous;
    checkMissing(previous1);
    attr = ldf attr in base;
    r35 = dyn attr(previous1, "package");
    check L46() else D21();
  L47():
    packages1 = force? packages;
    checkMissing(packages1);
    c3 = ldf c in base;
    r36 = dyn c3(r34, packages1);
    check L48() else D23();
  L51():
    previous3 = force? previous2;
    checkMissing(previous3);
    generics2 = ld generics;
    check L52() else D25();
  L54():
    packages3 = force? packages2;
    checkMissing(packages3);
    l = ld gg;
    attr__ = ldf `attr<-`;
    check L55() else D28();
  D21():
    deopt 76 [r35];
  D23():
    deopt 80 [r36];
  D25():
    deopt 86 [generics2];
  D28():
    deopt 94 [packages3, l, packages3];
  L46():
    goto L8(r35);
  L48():
    goto L7(r36);
  L52():
    generics3 = force? generics2;
    checkMissing(generics3);
    c4 = ldf c in base;
    r39 = dyn c4(previous3, generics3);
    check L53() else D26();
  L55():
    r40 = dyn attr__(l, NULL, "package", packages3);
    check L56() else D29();
  D26():
    deopt 89 [r39];
  D29():
    deopt 97 [packages3, r40];
  L53():
    goto L9(r39);
  L56():
    st gg = r40;
    assign = ldf assign;
    check L57() else D30();
  D30():
    deopt 100 [];
  L57():
    p7 = prom<V +>{
      gg = ld gg;
      gg1 = force? gg;
      checkMissing(gg1);
      return gg1;
    };
    p8 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r43 = dyn assign(".requireCachedGenerics", p7, p8);
    check L58() else D31();
  D31():
    deopt 104 [r43];
  L58():
    popenv;
    return r43;
  }
}
fun inner3355313315(g) {
  (reg g:*) -+> V { var g:*, reg getGeneric:cls, reg g1:*, reg g2:V, reg p:p(V +), reg r1:V, reg __:cls, reg r2:V, reg cacheGenericsMetaData:cls, reg g3:*, reg g4:V, reg p1:p(V +), reg def:*, reg def1:V, reg p2:p(V +), reg where:*, reg where1:V, reg p3:p(V +), reg pkg:*, reg pkg1:V, reg p4:p(V +), reg r7:V, reg pkg2:*, reg pkg3:V |
    mkenv;
    st g = g;
    getGeneric = ldf getGeneric;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      g1 = ld g;
      g2 = force? g1;
      checkMissing(g2);
      return g2;
    };
    r1 = dyn getGeneric(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st def = r1;
    __ = ldf `@` in base;
    r2 = dyn __(<sym def>, <sym package>);
    st pkg = r2;
    cacheGenericsMetaData = ldf cacheGenericsMetaData;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      g3 = ld g;
      g4 = force? g3;
      checkMissing(g4);
      return g4;
    };
    p2 = prom<V +>{
      def = ld def;
      def1 = force? def;
      checkMissing(def1);
      return def1;
    };
    p3 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    p4 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r7 = dyn cacheGenericsMetaData(p1, p2, TRUE, p3, p4);
    check L3() else D3();
  D3():
    deopt 15 [r7];
  L3():
    pkg2 = ld pkg;
    check L4() else D4();
  D4():
    deopt 16 [pkg2];
  L4():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    popenv;
    return pkg3;
  }
}