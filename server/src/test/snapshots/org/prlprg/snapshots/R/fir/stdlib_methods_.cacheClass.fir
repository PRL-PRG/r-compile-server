fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2847264104;
    st `.cacheClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2847264104(name, def, doSubclasses, env) {
  (reg name:*, reg def:*, reg doSubclasses:*, reg env:*) -+> V { var name:*, var def:*, var doSubclasses:*, reg doSubclasses_isMissing:L, reg doSubclasses_orDefault:*, var env:*, reg isFALSE:cls, reg doSubclasses1:*, reg doSubclasses2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg _recacheSubclasses:cls, reg __:cls, reg r3:V, reg p1:p(V +), reg def1:*, reg def2:V, reg p2:p(V +), reg env1:*, reg env2:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg _classTable:*, reg _classTable1:V, reg c1:L, reg _classTable3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name1:*, reg name2:V, reg __1:cls, reg r11:V, reg c2:V, reg r12:V, reg c3:L, reg __2:cls, reg r13:V, reg is:cls, reg prev:*, reg prev1:V, reg p4:p(V +), reg r15:V, reg c4:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg prev2:*, reg prev3:V, reg def3:*, reg def4:V, reg identical:cls, reg r18:V, reg c5:L, reg __3:cls, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg pkg:*, reg pkg1:V, reg newpkg:*, reg newpkg1:V, reg identical1:cls, reg r24:V, reg c6:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg name3:*, reg name4:V, reg _extendsForS3:cls, reg def5:*, reg def6:V, reg p5:p(V +), reg r28:V, reg _cache_class:cls, reg r29:V, reg def7:*, reg def8:V, reg l:*, reg c7:L, reg def10:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg def12:V, reg dx3:V, reg name5:*, reg name6:V, reg ____:cls, reg r30:V, reg _simpleDuplicateClass:cls, reg def13:*, reg def14:V, reg p6:p(V +), reg prev4:*, reg prev5:V, reg p7:p(V +), reg r35:V, reg c8:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg prev6:*, reg prev7:V, reg list:cls, reg r39:V, reg pkg2:*, reg pkg3:V, reg l3:*, reg names__:cls, reg r40:V, reg def15:*, reg def16:V, reg l4:*, reg c9:L, reg def18:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg newpkg2:*, reg newpkg3:V, reg ____1:cls, reg r41:V, reg prev8:*, reg prev9:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg def21:*, reg def22:V, reg length:cls, reg r44:V, reg r45:V, reg c10:L, reg _duplicateClassesExist:cls, reg r46:V, reg r47:V, reg def23:*, reg def24:V, reg l7:*, reg c11:L, reg def26:V, reg l9:*, reg dr6:V, reg dc3:L, reg dx6:V, reg def28:V, reg dx7:V, reg name7:*, reg name8:V, reg ____2:cls, reg r49:V |
    mkenv;
    st name = name;
    st def = def;
    doSubclasses_isMissing = missing.0(doSubclasses);
    if doSubclasses_isMissing then L0(FALSE) else L0(doSubclasses);
  L0(doSubclasses_orDefault):
    st doSubclasses = doSubclasses_orDefault;
    st env = env;
    isFALSE = ldf isFALSE;
    check L24() else D0();
  D0():
    deopt 1 [];
  L24():
    p = prom<V +>{
      doSubclasses1 = ld doSubclasses;
      doSubclasses2 = force? doSubclasses1;
      checkMissing(doSubclasses2);
      return doSubclasses2;
    };
    r1 = dyn isFALSE(p);
    check L25() else D1();
  D1():
    deopt 3 [r1];
  L25():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L26() else L1();
  L1():
    goto L2();
  L2():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L26():
    _recacheSubclasses = ldf `.recacheSubclasses`;
    check L27() else D2();
  D2():
    deopt 6 [];
  L3(r10):
    r12 = `!`(r10);
    c3 = `as.logical`(r12);
    if c3 then L37() else L5();
  L27():
    p1 = prom<V +>{
      __ = ldf `@` in base;
      r3 = dyn __(<sym def>, <sym className>);
      return r3;
    };
    p2 = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    p3 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r7 = dyn _recacheSubclasses(p1, p2, p3);
    check L28() else D3();
  L30():
    _classTable = ld `.classTable`;
    check L32() else D4();
  L31():
    r9 = dyn base(<lang `<-`(prev, `[[`(.classTable, name))>);
    goto L3(r9);
  D3():
    deopt 10 [r7];
  D4():
    deopt 14 [_classTable];
  L5():
    goto L22();
  L22():
    def23 = ld def;
    check L96() else D34();
  L28():
    goto L2();
  L32():
    _classTable1 = force? _classTable;
    checkMissing(_classTable1);
    c1 = `is.object`(_classTable1);
    if c1 then L33() else L34(_classTable1);
  L37():
    __2 = ldf `@` in base;
    r13 = dyn __2(<sym def>, <sym package>);
    st newpkg = r13;
    is = ldf is;
    check L38() else D6();
  D6():
    deopt 26 [];
  D34():
    deopt 138 [def23];
  L4(dx1):
    st prev = dx1;
    c2 = `==`(dx1, NULL);
    goto L3(c2);
  L33():
    dr = tryDispatchBuiltin.1("[[", _classTable1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(_classTable3):
    name1 = ld name;
    check L36() else D5();
  L38():
    p4 = prom<V +>{
      prev = ld prev;
      prev1 = force? prev;
      checkMissing(prev1);
      return prev1;
    };
    r15 = dyn is(p4, "classRepresentation");
    check L39() else D7();
  L96():
    def24 = force? def23;
    checkMissing(def24);
    l7 = ld `.classTable`;
    c11 = `is.object`(l7);
    if c11 then L97() else L98(def24, l7);
  D5():
    deopt 16 [_classTable3, name1];
  D7():
    deopt 29 [r15];
  L23(def28, dx7):
    st `.classTable` = dx7;
    invisible.0();
    popenv;
    return def28;
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L36():
    name2 = force? name1;
    __1 = ldf `[[` in base;
    r11 = dyn __1(_classTable3, name2);
    goto L4(r11);
  L39():
    c4 = `as.logical`(r15);
    if c4 then L40() else L6();
  L97():
    dr6 = tryDispatchBuiltin.0("[[<-", l7, def24);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L99() else L98(def24, dr6);
  L98(def26, l9):
    name7 = ld name;
    check L100() else D35();
  D35():
    deopt 141 [def26, l9, def24, name7];
  L6():
    goto L17();
  L17():
    def15 = ld def;
    check L81() else D27();
  L40():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L99():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L23(def24, dx6);
  L100():
    name8 = force? name7;
    ____2 = ldf `[[<-` in base;
    r49 = dyn ____2(l9, def24, name8);
    goto L23(def26, r49);
  D27():
    deopt 112 [def15];
  L7(r17):
    c5 = `as.logical`(r17);
    if c5 then L46() else L8();
  L41():
    prev2 = ld prev;
    check L43() else D8();
  L42():
    r16 = dyn base1(<sym prev>, <sym def>);
    goto L7(r16);
  L81():
    def16 = force? def15;
    checkMissing(def16);
    l4 = ld prev;
    c9 = `is.object`(l4);
    if c9 then L82() else L83(def16, l4);
  D8():
    deopt 32 [prev2];
  L8():
    __3 = ldf `@` in base;
    r21 = dyn __3(<sym prev>, <sym package>);
    st pkg = r21;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L18(dx5):
    st prev = dx5;
    prev8 = ld prev;
    check L86() else D29();
  L43():
    prev3 = force? prev2;
    checkMissing(prev3);
    def3 = ld def;
    check L44() else D9();
  L46():
    popenv;
    return NULL;
  L82():
    dr4 = tryDispatchBuiltin.0("[[<-", l4, def16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L84() else L83(def16, dr4);
  L83(def18, l6):
    newpkg2 = ld newpkg;
    check L85() else D28();
  D9():
    deopt 34 [def3];
  D28():
    deopt 115 [def18, l6, def16, newpkg2];
  D29():
    deopt 119 [prev8];
  L10(r23):
    c6 = `as.logical`(r23);
    if c6 then L54() else L11();
  L44():
    def4 = force? def3;
    checkMissing(def4);
    identical = ldf identical in base;
    r18 = dyn identical(prev3, def4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L45() else D10();
  L49():
    pkg = ld pkg;
    check L51() else D11();
  L50():
    r22 = dyn base2(<sym pkg>, <sym newpkg>);
    goto L10(r22);
  L84():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L85():
    newpkg3 = force? newpkg2;
    ____1 = ldf `[[<-` in base;
    r41 = dyn ____1(l6, def16, newpkg3);
    goto L18(r41);
  L86():
    prev9 = force? prev8;
    checkMissing(prev9);
    st def = prev9;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L87() else L88();
  D10():
    deopt 44 [r18];
  D11():
    deopt 55 [pkg];
  L11():
    _simpleDuplicateClass = ldf `.simpleDuplicateClass`;
    check L68() else D20();
  L19(r43):
    r45 = `>`(r43, 1);
    c10 = `as.logical`(r45);
    if c10 then L91() else L20();
  L45():
    goto L7(r18);
  L51():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    newpkg = ld newpkg;
    check L52() else D12();
  L54():
    sym3 = ldf `.cache_class`;
    base3 = ldf `.cache_class` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L87():
    def21 = ld def;
    check L89() else D30();
  L88():
    r42 = dyn base5(<sym def>);
    goto L19(r42);
  D12():
    deopt 57 [newpkg];
  D20():
    deopt 87 [];
  D30():
    deopt 124 [def21];
  L12():
    def7 = ld def;
    check L61() else D18();
  L20():
    goto L21(NULL);
  L21(r47):
    goto L22();
  L52():
    newpkg1 = force? newpkg;
    checkMissing(newpkg1);
    identical1 = ldf identical in base;
    r24 = dyn identical1(pkg1, newpkg1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L53() else D13();
  L55():
    name3 = ld name;
    check L57() else D14();
  L56():
    r25 = dyn base3(<sym name>, <lang .extendsForS3(def)>);
    goto L12();
  L68():
    p6 = prom<V +>{
      def13 = ld def;
      def14 = force? def13;
      checkMissing(def14);
      return def14;
    };
    p7 = prom<V +>{
      prev4 = ld prev;
      prev5 = force? prev4;
      checkMissing(prev5);
      return prev5;
    };
    r35 = dyn _simpleDuplicateClass(p6, p7);
    check L69() else D21();
  L89():
    def22 = force? def21;
    checkMissing(def22);
    length = ldf length in base;
    r44 = dyn length(def22);
    check L90() else D31();
  L91():
    _duplicateClassesExist = ldf `.duplicateClassesExist`;
    check L92() else D32();
  D13():
    deopt 67 [r24];
  D14():
    deopt 70 [name3];
  D18():
    deopt 78 [def7];
  D21():
    deopt 90 [r35];
  D31():
    deopt 127 [r44];
  D32():
    deopt 131 [];
  L53():
    goto L10(r24);
  L57():
    name4 = force? name3;
    checkMissing(name4);
    _extendsForS3 = ldf `.extendsForS3`;
    check L58() else D15();
  L61():
    def8 = force? def7;
    checkMissing(def8);
    l = ld `.classTable`;
    c7 = `is.object`(l);
    if c7 then L62() else L63(def8, l);
  L69():
    c8 = `as.logical`(r35);
    if c8 then L70() else L15();
  L90():
    goto L19(r44);
  L92():
    r46 = dyn _duplicateClassesExist(TRUE);
    check L93() else D33();
  D15():
    deopt 73 [];
  D33():
    deopt 133 [r46];
  L13(def12, dx3):
    st `.classTable` = dx3;
    popenv;
    return def12;
  L15():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L73() else L74();
  L58():
    p5 = prom<V +>{
      def5 = ld def;
      def6 = force? def5;
      checkMissing(def6);
      return def6;
    };
    r28 = dyn _extendsForS3(p5);
    check L59() else D16();
  L62():
    dr2 = tryDispatchBuiltin.0("[[<-", l, def8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(def8, dr2);
  L63(def10, l2):
    name5 = ld name;
    check L65() else D19();
  L70():
    popenv;
    return NULL;
  L93():
    goto L21(r46);
  D16():
    deopt 75 [r28];
  D19():
    deopt 81 [def10, l2, def8, name5];
  L16(r38):
    st prev = r38;
    pkg2 = ld pkg;
    check L77() else D24();
  L59():
    _cache_class = ldf `.cache_class` in base;
    r29 = dyn _cache_class(name4, r28);
    check L60() else D17();
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(def8, dx2);
  L65():
    name6 = force? name5;
    ____ = ldf `[[<-` in base;
    r30 = dyn ____(l2, def8, name6);
    goto L13(def10, r30);
  L73():
    prev6 = ld prev;
    check L75() else D22();
  L74():
    r37 = dyn base4(<sym prev>);
    goto L16(r37);
  D17():
    deopt 77 [r29];
  D22():
    deopt 98 [prev6];
  D24():
    deopt 103 [pkg2];
  L60():
    goto L12();
  L75():
    prev7 = force? prev6;
    checkMissing(prev7);
    list = ldf list in base;
    r39 = dyn list(prev7);
    check L76() else D23();
  L77():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    l3 = ld prev;
    names__ = ldf `names<-`;
    check L78() else D25();
  D23():
    deopt 101 [r39];
  D25():
    deopt 106 [pkg3, l3, pkg3];
  L76():
    goto L16(r39);
  L78():
    r40 = dyn names__(l3, NULL, pkg3);
    check L79() else D26();
  D26():
    deopt 108 [pkg3, r40];
  L79():
    st prev = r40;
    goto L17();
  }
}