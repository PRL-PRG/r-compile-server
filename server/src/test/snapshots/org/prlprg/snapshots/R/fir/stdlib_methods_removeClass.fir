fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1266124685;
    st removeClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1266124685(Class, where) {
  (reg Class:*, reg where:*) -+> V { var Class:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c:L, reg _classEnv:cls, reg Class1:*, reg Class2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r9:V, reg findClass:cls, reg Class3:*, reg Class4:V, reg p4:p(V +), reg classEnv:*, reg classEnv1:V, reg p5:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg classWhere:*, reg classWhere1:V, reg length:cls, reg r15:V, reg r16:V, reg c1:L, reg warning:cls, reg gettextf:cls, reg dQuote:cls, reg Class5:*, reg Class6:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg p8:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg classWhere2:*, reg classWhere3:V, reg length1:cls, reg r27:V, reg r28:V, reg c2:L, reg warning1:cls, reg gettextf1:cls, reg dQuote1:cls, reg Class7:*, reg Class8:V, reg p9:p(V +), reg r30:V, reg p10:p(V +), reg r32:V, reg p11:p(V +), reg r34:V, reg classWhere4:*, reg classWhere5:V, reg c3:L, reg classWhere7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r36:V, reg where3:*, reg where4:V, reg getClassDef:cls, reg Class9:*, reg Class10:V, reg p12:p(V +), reg classWhere8:*, reg classWhere9:V, reg p13:p(V +), reg r39:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg __1:cls, reg r42:V, reg length2:cls, reg r43:V, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg __2:cls, reg r46:V, reg names:cls, reg r47:V, reg vapply:cls, reg subclasses:*, reg subclasses1:V, reg p14:p(V +), reg isClass:*, reg isClass1:V, reg p15:p(V +), reg where5:*, reg where6:V, reg p16:p(V +), reg r51:V, reg subclasses2:*, reg subclasses3:V, reg c5:L, reg subclasses5:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg found:*, reg found1:V, reg __3:cls, reg r52:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg _removeSuperClass:cls, reg what:*, reg what1:V, reg p17:p(V +), reg Class11:*, reg Class12:V, reg p18:p(V +), reg r55:V, reg _removeSuperclassBackRefs:cls, reg Class13:*, reg Class14:V, reg p19:p(V +), reg classDef:*, reg classDef1:V, reg p20:p(V +), reg classWhere10:*, reg classWhere11:V, reg p21:p(V +), reg r59:V, reg _uncacheClass:cls, reg Class15:*, reg Class16:V, reg p22:p(V +), reg classDef2:*, reg classDef3:V, reg p23:p(V +), reg r62:V, reg _undefineMethod:cls, reg Class17:*, reg Class18:V, reg p24:p(V +), reg classWhere12:*, reg classWhere13:V, reg p25:p(V +), reg r65:V, reg classMetaName:cls, reg Class19:*, reg Class20:V, reg p26:p(V +), reg r67:V, reg rm:cls, reg what2:*, reg what3:V, reg p27:p(V +), reg classWhere14:*, reg classWhere15:V, reg p28:p(V +), reg r70:V |
    mkenv;
    st Class = Class;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r5):
    c = `as.logical`(r5);
    if c then L21() else L3();
  L19():
    missing = ldf missing in base;
    r6 = dyn missing(<sym where>);
    goto L2(r6);
  L20():
    r4 = dyn base(<sym where>);
    goto L2(r4);
  L3():
    where3 = ld where;
    check L48() else D13();
  L11():
    getClassDef = ldf getClassDef;
    check L49() else D14();
  L21():
    _classEnv = ldf `.classEnv`;
    check L22() else D0();
  D0():
    deopt 4 [];
  D13():
    deopt 58 [where3];
  D14():
    deopt 62 [];
  L22():
    p2 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r9 = dyn _classEnv(p2, p3, FALSE);
    check L23() else D1();
  L48():
    where4 = force? where3;
    checkMissing(where4);
    st classWhere = where4;
    goto L11();
  L49():
    p12 = prom<V +>{
      Class9 = ld Class;
      Class10 = force? Class9;
      checkMissing(Class10);
      return Class10;
    };
    p13 = prom<V +>{
      classWhere8 = ld classWhere;
      classWhere9 = force? classWhere8;
      checkMissing(classWhere9);
      return classWhere9;
    };
    r39 = dyn getClassDef[, where](p12, p13);
    check L50() else D15();
  D1():
    deopt 8 [r9];
  D15():
    deopt 66 [r39];
  L23():
    st classEnv = r9;
    findClass = ldf findClass;
    check L24() else D2();
  L50():
    st classDef = r39;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  D2():
    deopt 11 [];
  L12(r41):
    c4 = `as.logical`(r41);
    if c4 then L54() else L13();
  L24():
    p4 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p5 = prom<V +>{
      classEnv = ld classEnv;
      classEnv1 = force? classEnv;
      checkMissing(classEnv1);
      return classEnv1;
    };
    r12 = dyn findClass[, where](p4, p5);
    check L25() else D3();
  L51():
    __1 = ldf `@` in base;
    r42 = dyn __1(<sym classDef>, <sym subclasses>);
    length2 = ldf length in base;
    r43 = dyn length2(r42);
    check L53() else D16();
  L52():
    r40 = dyn base3(<lang `@`(classDef, subclasses)>);
    goto L12(r40);
  D3():
    deopt 15 [r12];
  D16():
    deopt 73 [r43];
  L13():
    goto L18();
  L18():
    _removeSuperclassBackRefs = ldf `.removeSuperclassBackRefs`;
    check L69() else D24();
  L25():
    st classWhere = r12;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L53():
    goto L12(r43);
  L54():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  D24():
    deopt 108 [];
  L4(r14):
    r16 = `==`(r14, 0);
    c1 = `as.logical`(r16);
    if c1 then L30() else L5();
  L14(r45):
    st subclasses = r45;
    vapply = ldf vapply;
    check L58() else D18();
  L26():
    classWhere = ld classWhere;
    check L28() else D4();
  L27():
    r13 = dyn base1(<sym classWhere>);
    goto L4(r13);
  L55():
    __2 = ldf `@` in base;
    r46 = dyn __2(<sym classDef>, <sym subclasses>);
    names = ldf names in base;
    r47 = dyn names(r46);
    check L57() else D17();
  L56():
    r44 = dyn base4(<lang `@`(classDef, subclasses)>);
    goto L14(r44);
  L69():
    p19 = prom<V +>{
      Class13 = ld Class;
      Class14 = force? Class13;
      checkMissing(Class14);
      return Class14;
    };
    p20 = prom<V +>{
      classDef = ld classDef;
      classDef1 = force? classDef;
      checkMissing(classDef1);
      return classDef1;
    };
    p21 = prom<V +>{
      classWhere10 = ld classWhere;
      classWhere11 = force? classWhere10;
      checkMissing(classWhere11);
      return classWhere11;
    };
    r59 = dyn _removeSuperclassBackRefs(p19, p20, p21);
    check L70() else D25();
  D4():
    deopt 19 [classWhere];
  D17():
    deopt 79 [r47];
  D18():
    deopt 82 [];
  D25():
    deopt 112 [r59];
  L5():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L28():
    classWhere1 = force? classWhere;
    checkMissing(classWhere1);
    length = ldf length in base;
    r15 = dyn length(classWhere1);
    check L29() else D5();
  L30():
    warning = ldf warning;
    check L31() else D6();
  L57():
    goto L14(r47);
  L58():
    p14 = prom<V +>{
      subclasses = ld subclasses;
      subclasses1 = force? subclasses;
      checkMissing(subclasses1);
      return subclasses1;
    };
    p15 = prom<V +>{
      isClass = ld isClass;
      isClass1 = force? isClass;
      checkMissing(isClass1);
      return isClass1;
    };
    p16 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r51 = dyn vapply[, , , where, `USE.NAMES`](p14, p15, NA_LGL, p16, TRUE);
    check L59() else D19();
  L70():
    _uncacheClass = ldf `.uncacheClass`;
    check L71() else D26();
  D5():
    deopt 22 [r15];
  D6():
    deopt 26 [];
  D19():
    deopt 90 [r51];
  D26():
    deopt 114 [];
  L7(r26):
    r28 = `>`(r26, 1);
    c2 = `as.logical`(r28);
    if c2 then L39() else L8();
  L29():
    goto L4(r15);
  L31():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dQuote = ldf dQuote;
        p6 = prom<V +>{
          Class5 = ld Class;
          Class6 = force? Class5;
          checkMissing(Class6);
          return Class6;
        };
        r18 = dyn dQuote(p6);
        return r18;
      };
      r20 = dyn gettextf("class definition for %s not found (no action taken)", p7);
      return r20;
    };
    r22 = dyn warning[, domain](p8, NA_LGL);
    check L32() else D7();
  L35():
    classWhere2 = ld classWhere;
    check L37() else D8();
  L36():
    r25 = dyn base2(<sym classWhere>);
    goto L7(r25);
  L59():
    st found = r51;
    subclasses2 = ld subclasses;
    check L60() else D20();
  L71():
    p22 = prom<V +>{
      Class15 = ld Class;
      Class16 = force? Class15;
      checkMissing(Class16);
      return Class16;
    };
    p23 = prom<V +>{
      classDef2 = ld classDef;
      classDef3 = force? classDef2;
      checkMissing(classDef3);
      return classDef3;
    };
    r62 = dyn _uncacheClass(p22, p23);
    check L72() else D27();
  D7():
    deopt 30 [r22];
  D8():
    deopt 38 [classWhere2];
  D20():
    deopt 92 [subclasses2];
  D27():
    deopt 117 [r62];
  L8():
    goto L9();
  L9():
    classWhere4 = ld classWhere;
    check L43() else D12();
  L32():
    popenv;
    return FALSE;
  L37():
    classWhere3 = force? classWhere2;
    checkMissing(classWhere3);
    length1 = ldf length in base;
    r27 = dyn length1(classWhere3);
    check L38() else D9();
  L39():
    warning1 = ldf warning;
    check L40() else D10();
  L60():
    subclasses3 = force? subclasses2;
    checkMissing(subclasses3);
    c5 = `is.object`(subclasses3);
    if c5 then L61() else L62(subclasses3);
  L72():
    _undefineMethod = ldf `.undefineMethod`;
    check L73() else D28();
  D9():
    deopt 41 [r27];
  D10():
    deopt 45 [];
  D12():
    deopt 52 [classWhere4];
  D28():
    deopt 119 [];
  L15(dx4):
    s = toForSeq(dx4);
    l = length(s);
    i = 0;
    goto L16(i);
  L38():
    goto L7(r27);
  L40():
    p11 = prom<V +>{
      gettextf1 = ldf gettextf;
      p10 = prom<V +>{
        dQuote1 = ldf dQuote;
        p9 = prom<V +>{
          Class7 = ld Class;
          Class8 = force? Class7;
          checkMissing(Class8);
          return Class8;
        };
        r30 = dyn dQuote1(p9);
        return r30;
      };
      r32 = dyn gettextf1("class %s has multiple definitions visible; only the first removed", p10);
      return r32;
    };
    r34 = dyn warning1[, domain](p11, NA_LGL);
    check L41() else D11();
  L43():
    classWhere5 = force? classWhere4;
    checkMissing(classWhere5);
    c3 = `is.object`(classWhere5);
    if c3 then L44() else L45(classWhere5);
  L61():
    dr2 = tryDispatchBuiltin.1("[", subclasses3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L63() else L62(dr2);
  L62(subclasses5):
    found = ld found;
    check L64() else D21();
  L73():
    p24 = prom<V +>{
      Class17 = ld Class;
      Class18 = force? Class17;
      checkMissing(Class18);
      return Class18;
    };
    p25 = prom<V +>{
      classWhere12 = ld classWhere;
      classWhere13 = force? classWhere12;
      checkMissing(classWhere13);
      return classWhere13;
    };
    r65 = dyn _undefineMethod("initialize", p24, p25);
    check L74() else D29();
  D11():
    deopt 49 [r34];
  D21():
    deopt 94 [subclasses5, found];
  D29():
    deopt 123 [r65];
  L10(dx1):
    st classWhere = dx1;
    goto L11();
  L16(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L65() else L17();
  L41():
    goto L9();
  L44():
    dr = tryDispatchBuiltin.1("[[", classWhere5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(classWhere7):
    __ = ldf `[[` in base;
    r36 = dyn __(classWhere7, 1);
    goto L10(r36);
  L63():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx3);
  L64():
    found1 = force? found;
    __3 = ldf `[` in base;
    r52 = dyn __3(subclasses5, found1);
    goto L15(r52);
  L74():
    classMetaName = ldf classMetaName;
    check L75() else D30();
  D30():
    deopt 125 [];
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    _removeSuperClass = ldf `.removeSuperClass`;
    check L66() else D22();
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L65():
    goto L18();
  L75():
    p26 = prom<V +>{
      Class19 = ld Class;
      Class20 = force? Class19;
      checkMissing(Class20);
      return Class20;
    };
    r67 = dyn classMetaName(p26);
    check L76() else D31();
  D22():
    deopt 98 [i2];
  D31():
    deopt 127 [r67];
  L66():
    p17 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p18 = prom<V +>{
      Class11 = ld Class;
      Class12 = force? Class11;
      checkMissing(Class12);
      return Class12;
    };
    r55 = dyn _removeSuperClass(p17, p18);
    check L67() else D23();
  L76():
    st what = r67;
    rm = ldf rm;
    check L77() else D32();
  D23():
    deopt 101 [i2, r55];
  D32():
    deopt 130 [];
  L67():
    goto L16(i2);
  L77():
    p27 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p28 = prom<V +>{
      classWhere14 = ld classWhere;
      classWhere15 = force? classWhere14;
      checkMissing(classWhere15);
      return classWhere15;
    };
    r70 = dyn rm[list, pos](p27, p28);
    check L78() else D33();
  D33():
    deopt 135 [r70];
  L78():
    popenv;
    return TRUE;
  }
}