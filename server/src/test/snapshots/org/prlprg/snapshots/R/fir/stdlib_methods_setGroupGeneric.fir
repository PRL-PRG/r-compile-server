fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner824893378;
    st setGroupGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner824893378(name, def, group, valueClass, knownMembers, package, where) {
  (reg name:*, reg def:*, reg group:*, reg valueClass:*, reg knownMembers:*, reg package:*, reg where:*) -+> V { var name:*, var def:*, reg def_isMissing:L, reg def_orDefault:*, var group:*, reg group_isMissing:L, reg group_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var valueClass:*, reg valueClass_isMissing:L, reg valueClass_orDefault:*, reg character:cls, reg r4:V, reg p1:p(V +), var knownMembers:*, reg knownMembers_isMissing:L, reg knownMembers_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg list1:cls, reg r8:V, reg p2:p(V +), var package:*, reg package_isMissing:L, reg package_orDefault:*, reg getPackageName:cls, reg where1:*, reg where2:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r13:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg def1:*, reg def2:V, reg c:V, reg c1:L, reg getFunction:cls, reg name1:*, reg name2:V, reg p7:p(V +), reg where3:*, reg where4:V, reg p8:p(V +), reg r21:V, reg isGroup:cls, reg name3:*, reg name4:V, reg p9:p(V +), reg def3:*, reg def4:V, reg p10:p(V +), reg r24:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg nargs:cls, reg r27:V, reg r28:V, reg c3:L, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg name5:*, reg name6:V, reg p11:p(V +), reg r30:V, reg p12:p(V +), reg r32:V, reg p13:p(V +), reg r34:V, reg name7:*, reg name8:V, reg r37:dots, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg substitute:cls, reg r41:V, reg l:*, reg body__:cls, reg environment:cls, reg def5:*, reg def6:V, reg p14:p(V +), reg r43:V, reg p15:p(V +), reg r45:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg knownMembers1:*, reg knownMembers2:V, reg c4:L, reg c5:L, reg as_list:cls, reg knownMembers3:*, reg knownMembers4:V, reg p16:p(V +), reg r49:V, reg setGeneric:cls, reg name9:*, reg name10:V, reg p17:p(V +), reg def7:*, reg def8:V, reg p18:p(V +), reg group1:*, reg group2:V, reg p19:p(V +), reg valueClass1:*, reg valueClass2:V, reg p20:p(V +), reg package1:*, reg package2:V, reg p21:p(V +), reg new:cls, reg def9:*, reg def10:V, reg p22:p(V +), reg knownMembers5:*, reg knownMembers6:V, reg p23:p(V +), reg r58:V, reg p24:p(V +), reg where5:*, reg where6:V, reg p25:p(V +), reg r61:V, reg _MakeImplicitGroupMembers:cls, reg name11:*, reg name12:V, reg p26:p(V +), reg knownMembers7:*, reg knownMembers8:V, reg p27:p(V +), reg where7:*, reg where8:V, reg p28:p(V +), reg r65:V, reg name13:*, reg name14:V |
    mkenv;
    st name = name;
    def_isMissing = missing.0(def);
    if def_isMissing then L0(NULL) else L0(def);
  L0(def_orDefault):
    st def = def_orDefault;
    group_isMissing = missing.0(group);
    if group_isMissing then L1() else L2(group);
  L1():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L2(p);
  L2(group_orDefault):
    st group = group_orDefault;
    valueClass_isMissing = missing.0(valueClass);
    if valueClass_isMissing then L3() else L4(valueClass);
  L3():
    p1 = prom<V +>{
      character = ldf character;
      r4 = dyn character();
      return r4;
    };
    goto L4(p1);
  L4(valueClass_orDefault):
    st valueClass = valueClass_orDefault;
    knownMembers_isMissing = missing.0(knownMembers);
    if knownMembers_isMissing then L5() else L6(knownMembers);
  L5():
    p2 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      list1 = ldf list in base;
      r8 = dyn list1();
      goto L0(r8);
    L2():
      r6 = dyn base1();
      goto L0(r6);
    };
    goto L6(p2);
  L6(knownMembers_orDefault):
    st knownMembers = knownMembers_orDefault;
    package_isMissing = missing.0(package);
    if package_isMissing then L7() else L8(package);
  L7():
    p4 = prom<V +>{
      getPackageName = ldf getPackageName;
      p3 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r11 = dyn getPackageName(p3);
      return r11;
    };
    goto L8(p4);
  L8(package_orDefault):
    st package = package_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L9() else L10(where);
  L9():
    p6 = prom<V +>{
      topenv = ldf topenv;
      p5 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r13 = dyn parent_frame();
        return r13;
      };
      r15 = dyn topenv(p5);
      return r15;
    };
    goto L10(p6);
  L10(where_orDefault):
    st where = where_orDefault;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L11(r18):
    c1 = `as.logical`(r18);
    if c1 then L26() else L12();
  L23():
    def1 = ld def;
    check L25() else D0();
  L24():
    r17 = dyn base2(<sym def>);
    goto L11(r17);
  D0():
    deopt 1 [def1];
  L12():
    goto L18();
  L18():
    sym4 = ldf substitute;
    base4 = ldf substitute in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L25():
    def2 = force? def1;
    checkMissing(def2);
    c = `==`(def2, NULL);
    goto L11(c);
  L26():
    getFunction = ldf getFunction;
    check L27() else D1();
  D1():
    deopt 5 [];
  L19(r40):
    l = ld def;
    body__ = ldf `body<-`;
    check L45() else D9();
  L27():
    p7 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p8 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r21 = dyn getFunction[, where](p7, p8);
    check L28() else D2();
  L43():
    substitute = ldf substitute in base;
    r41 = dyn substitute(<lang stop(MSG, domain=NA_LGL)>, <lang list(MSG=gettextf("Function %s is a group generic; do not call it directly", sQuote(name)))>);
    goto L19(r41);
  L44():
    r39 = dyn base4(<lang stop(MSG, domain=NA_LGL)>, <lang list(MSG=gettextf("Function %s is a group generic; do not call it directly", sQuote(name)))>);
    goto L19(r39);
  D2():
    deopt 9 [r21];
  D9():
    deopt 42 [r40, l, r40];
  L28():
    st def = r21;
    isGroup = ldf isGroup;
    check L29() else D3();
  L45():
    p15 = prom<V +>{
      environment = ldf environment;
      p14 = prom<V +>{
        def5 = ld def;
        def6 = force? def5;
        checkMissing(def6);
        return def6;
      };
      r43 = dyn environment(p14);
      return r43;
    };
    r45 = dyn body__[, , envir, ](l, NULL, p15, r40);
    check L46() else D10();
  D3():
    deopt 12 [];
  D10():
    deopt 46 [r40, r45];
  L29():
    p9 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p10 = prom<V +>{
      def3 = ld def;
      def4 = force? def3;
      checkMissing(def4);
      return def4;
    };
    r24 = dyn isGroup[, fdef](p9, p10);
    check L30() else D4();
  L46():
    st def = r45;
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  D4():
    deopt 16 [r24];
  L20(r47):
    c5 = `as.logical`(r47);
    if c5 then L50() else L21();
  L30():
    c2 = `as.logical`(r24);
    if c2 then L31() else L13();
  L47():
    knownMembers1 = ld knownMembers;
    check L49() else D11();
  L48():
    r46 = dyn base5(<sym knownMembers>);
    goto L20(r46);
  D11():
    deopt 49 [knownMembers1];
  L13():
    goto L17(NULL);
  L17(r37):
    goto L18();
  L21():
    goto L22();
  L22():
    setGeneric = ldf setGeneric;
    check L54() else D14();
  L31():
    sym3 = ldf nargs;
    base3 = ldf nargs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L49():
    knownMembers2 = force? knownMembers1;
    checkMissing(knownMembers2);
    c4 = `is.character`(knownMembers2);
    goto L20(c4);
  L50():
    as_list = ldf `as.list`;
    check L51() else D12();
  D12():
    deopt 53 [];
  D14():
    deopt 60 [];
  L14(r26):
    r28 = `==`(r26, 1.0);
    c3 = `as.logical`(r28);
    if c3 then L35() else L15();
  L32():
    nargs = ldf nargs in base;
    r27 = dyn nargs();
    check L34() else D5();
  L33():
    r25 = dyn base3();
    goto L14(r25);
  L51():
    p16 = prom<V +>{
      knownMembers3 = ld knownMembers;
      knownMembers4 = force? knownMembers3;
      checkMissing(knownMembers4);
      return knownMembers4;
    };
    r49 = dyn as_list(p16);
    check L52() else D13();
  L54():
    p17 = prom<V +>{
      name9 = ld name;
      name10 = force? name9;
      checkMissing(name10);
      return name10;
    };
    p18 = prom<V +>{
      def7 = ld def;
      def8 = force? def7;
      checkMissing(def8);
      return def8;
    };
    p19 = prom<V +>{
      group1 = ld group;
      group2 = force? group1;
      checkMissing(group2);
      return group2;
    };
    p20 = prom<V +>{
      valueClass1 = ld valueClass;
      valueClass2 = force? valueClass1;
      checkMissing(valueClass2);
      return valueClass2;
    };
    p21 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p24 = prom<V +>{
      new = ldf new;
      p22 = prom<V +>{
        def9 = ld def;
        def10 = force? def9;
        checkMissing(def10);
        return def10;
      };
      p23 = prom<V +>{
        knownMembers5 = ld knownMembers;
        knownMembers6 = force? knownMembers5;
        checkMissing(knownMembers6);
        return knownMembers6;
      };
      r58 = dyn new[, , groupMembers]("groupGenericFunction", p22, p23);
      return r58;
    };
    p25 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r61 = dyn setGeneric[, , group, valueClass, package, useAsDefault, genericFunction, where](p17, p18, p19, p20, p21, FALSE, p24, p25);
    check L55() else D15();
  D5():
    deopt 20 [r27];
  D13():
    deopt 55 [r49];
  D15():
    deopt 75 [r61];
  L15():
    goto L17(NULL);
  L34():
    goto L14(r27);
  L35():
    message = ldf message;
    check L36() else D6();
  L52():
    st knownMembers = r49;
    goto L22();
  L55():
    _MakeImplicitGroupMembers = ldf `.MakeImplicitGroupMembers`;
    check L56() else D16();
  D6():
    deopt 24 [];
  D16():
    deopt 77 [];
  L36():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        sQuote = ldf sQuote;
        p11 = prom<V +>{
          name5 = ld name;
          name6 = force? name5;
          checkMissing(name6);
          return name6;
        };
        r30 = dyn sQuote(p11);
        return r30;
      };
      r32 = dyn gettextf("Function %s is already a group generic; no change", p12);
      return r32;
    };
    r34 = dyn message[, domain](p13, NA_LGL);
    check L37() else D7();
  L56():
    p26 = prom<V +>{
      name11 = ld name;
      name12 = force? name11;
      checkMissing(name12);
      return name12;
    };
    p27 = prom<V +>{
      knownMembers7 = ld knownMembers;
      knownMembers8 = force? knownMembers7;
      checkMissing(knownMembers8);
      return knownMembers8;
    };
    p28 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r65 = dyn _MakeImplicitGroupMembers(p26, p27, p28);
    check L57() else D17();
  D7():
    deopt 28 [r34];
  D17():
    deopt 81 [r65];
  L37():
    name7 = ld name;
    check L38() else D8();
  L57():
    name13 = ld name;
    check L58() else D18();
  D8():
    deopt 29 [name7];
  D18():
    deopt 82 [name13];
  L38():
    name8 = force? name7;
    checkMissing(name8);
    popenv;
    return name8;
  L58():
    name14 = force? name13;
    checkMissing(name14);
    popenv;
    return name14;
  }
}